package main

import (
	"go/ast"
	"go/parser"
	"go/token"
	"strings"
	"testing"
)

// containerFreeTestHeader covers every path where Go receives a container that
// C++ malloc'd: method results, virtual-override callback parameters, the
// super() call of a virtual override, and signal parameters; with list, vector,
// set, map, pair and nested containers.
func containerFreeTestHeader() CppParsedHeader {
	ret := func(t string) CppParameter { return CppParameter{ParameterType: t} }
	param := func(name, t string) CppParameter { return CppParameter{ParameterName: name, ParameterType: t} }

	return CppParsedHeader{
		Filename: "qfreeprobe.h",
		Classes: []CppClass{{
			ClassName: "QFreeProbe",
			Ctors:     []CppMethod{{}},
			CanDelete: true,
			Methods: []CppMethod{
				{MethodName: "widgets", ReturnType: CppParameter{ParameterType: "QList<QWidget*>"}},
				{MethodName: "names", ReturnType: ret("QList<QString>")},
				{MethodName: "grid", ReturnType: ret("QVector<QList<int>>")},
				{MethodName: "ids", ReturnType: ret("QSet<int>")},
				{MethodName: "table", ReturnType: ret("QMap<QString, QList<int>>")},
				{MethodName: "span", ReturnType: ret("QPair<int, QString>")},
				{
					MethodName: "valuesChanged",
					ReturnType: ret("void"),
					IsSignal:   true,
					Parameters: []CppParameter{param("values", "QList<int>")},
				},
				{
					MethodName: "acceptRoles",
					ReturnType: ret("bool"),
					IsVirtual:  true,
					Parameters: []CppParameter{param("roles", "QMap<int, QString>")},
				},
				{
					MethodName: "mimeTypes",
					ReturnType: ret("QList<QString>"),
					IsVirtual:  true,
				},
			},
		}},
	}
}

// cabiContainerBuffers maps the declared CABI container variable to the
// buffers that must be freed and the local aliases that read those buffers.
func cabiContainerBuffers(decl *ast.ValueSpec) (name string, buffers, aliases []string, ok bool) {
	sel, isSel := decl.Type.(*ast.SelectorExpr)
	if !isSel || len(decl.Names) != 1 {
		return "", nil, nil, false
	}
	name = decl.Names[0].Name
	prefix := strings.TrimSuffix(strings.TrimSuffix(name, "_ma"), "_mm")
	switch sel.Sel.Name {
	case "struct_miqt_array":
		return name, []string{name + ".data"}, []string{prefix + "_outCast"}, true
	case "struct_miqt_map":
		return name, []string{name + ".keys", name + ".values"},
			[]string{prefix + "_Keys", prefix + "_Values", prefix + "_First_CArray", prefix + "_Second_CArray"}, true
	}
	return "", nil, nil, false
}

func exprString(fset *token.FileSet, src []byte, n ast.Node) string {
	return string(src[fset.Position(n.Pos()).Offset:fset.Position(n.End()).Offset])
}

func TestEmitGoFreesCabiContainers(t *testing.T) {
	prepareCallbackTestTypes()
	src := containerFreeTestHeader()

	goSrc, err := emitGo(&src, src.Filename, "qt")
	if err != nil {
		t.Fatal(err)
	}

	fset := token.NewFileSet()
	file, err := parser.ParseFile(fset, "gen_qfreeprobe.go", goSrc, 0)
	if err != nil {
		t.Fatalf("generated Go does not parse: %v\n%s", err, goSrc)
	}
	body := []byte(goSrc)

	checked := 0
	ast.Inspect(file, func(n ast.Node) bool {
		block, isBlock := n.(*ast.BlockStmt)
		if !isBlock {
			return true
		}
		for i, stmt := range block.List {
			declStmt, isDecl := stmt.(*ast.DeclStmt)
			if !isDecl {
				continue
			}
			gen := declStmt.Decl.(*ast.GenDecl)
			if len(gen.Specs) != 1 {
				continue
			}
			spec, isValue := gen.Specs[0].(*ast.ValueSpec)
			if !isValue {
				continue
			}
			name, buffers, aliases, isContainer := cabiContainerBuffers(spec)
			if !isContainer {
				continue
			}
			checked++

			// Each buffer is freed exactly once, as a statement of the same block.
			lastFree := -1
			for _, buffer := range buffers {
				want := "C.free(unsafe.Pointer(" + buffer + "))"
				found := 0
				for j := i + 1; j < len(block.List); j++ {
					if exprString(fset, body, block.List[j]) == want {
						found++
						lastFree = j
					}
				}
				if found != 1 {
					t.Errorf("%s: %q appears %d times in its block, want 1:\n%s", name, want, found, exprString(fset, body, block))
				}
			}

			// Nothing reads the container or its aliases after it is freed.
			for j := lastFree + 1; lastFree >= 0 && j < len(block.List); j++ {
				ast.Inspect(block.List[j], func(n ast.Node) bool {
					id, isIdent := n.(*ast.Ident)
					if !isIdent {
						return true
					}
					if id.Name == name {
						t.Errorf("%s is read after it was freed: %s", name, exprString(fset, body, block.List[j]))
					}
					for _, alias := range aliases {
						if id.Name == alias {
							t.Errorf("%s (alias of %s) is read after it was freed: %s", alias, name, exprString(fset, body, block.List[j]))
						}
					}
					return true
				})
			}
		}
		return true
	})

	// 6 method results (+3 nested: grid's inner list, table's map value list,
	// names/mimeTypes elements are strings, not containers), 1 signal
	// parameter, 1 virtual parameter, mimeTypes' super() result.
	if checked < 11 {
		t.Fatalf("checked %d CABI containers, want at least 11:\n%s", checked, goSrc)
	}
}

func virtualReturnTestHeader() CppParsedHeader {
	virtual := func(name, ret string) CppMethod {
		return CppMethod{MethodName: name, ReturnType: CppParameter{ParameterType: ret}, IsVirtual: true}
	}
	return CppParsedHeader{
		Filename: "qreturnprobe.h",
		Classes: []CppClass{{
			ClassName: "QReturnProbe",
			Ctors:     []CppMethod{{}},
			CanDelete: true,
			Methods: []CppMethod{
				virtual("name", "QByteArray"),
				virtual("aliases", "QList<QByteArray>"),
				virtual("labels", "QMap<int, QString>"),
				virtual("span", "QPair<int, QString>"),
			},
		}},
	}
}

func goFuncSource(t *testing.T, goSrc, name string) string {
	t.Helper()
	fset := token.NewFileSet()
	file, err := parser.ParseFile(fset, "gen.go", goSrc, 0)
	if err != nil {
		t.Fatalf("generated Go does not parse: %v", err)
	}
	for _, decl := range file.Decls {
		if fn, ok := decl.(*ast.FuncDecl); ok && fn.Name.Name == name {
			return exprString(fset, []byte(goSrc), fn)
		}
	}
	t.Fatalf("generated Go has no func %s:\n%s", name, goSrc)
	return ""
}

func cppOverrideSource(t *testing.T, cppSrc, signature string) string {
	t.Helper()
	start := strings.Index(cppSrc, signature)
	if start < 0 {
		t.Fatalf("C++ binding has no %q:\n%s", signature, cppSrc)
	}
	end := strings.Index(cppSrc[start:], "\n\t}\n")
	if end < 0 {
		t.Fatalf("C++ override %q is not terminated", signature)
	}
	return cppSrc[start : start+end]
}

// TestEmitVirtualReturnOwnership: a Go virtual override hands its return value
// to the C++ trampoline, which copies it and then frees every buffer. Go must
// therefore return C memory only (no alias of a Go []byte) and free nothing,
// and C++ must free maps and pairs as well as lists.
func TestEmitVirtualReturnOwnership(t *testing.T) {
	prepareCallbackTestTypes()
	src := virtualReturnTestHeader()

	goSrc, err := emitGo(&src, src.Filename, "qt")
	if err != nil {
		t.Fatal(err)
	}
	cppSrc, err := emitBindingCpp(&src, src.Filename)
	if err != nil {
		t.Fatal(err)
	}

	for _, tc := range []struct{ method, want string }{
		{"name", "C.CBytes(virtualReturn)"},
		{"aliases", "C.CBytes(virtualReturn[i])"},
	} {
		body := goFuncSource(t, goSrc, "miqt_exec_callback_QReturnProbe_"+tc.method)
		if !strings.Contains(body, tc.want) {
			t.Errorf("%s: byte array is not copied into C memory (want %q):\n%s", tc.method, tc.want, body)
		}
		if strings.Contains(body, "_alias := ") {
			t.Errorf("%s: returns an alias of Go memory, which C++ would free():\n%s", tc.method, body)
		}
	}
	for _, method := range []string{"name", "aliases", "labels", "span"} {
		body := goFuncSource(t, goSrc, "miqt_exec_callback_QReturnProbe_"+method)
		if strings.Contains(body, "C.free(") {
			t.Errorf("%s: Go frees memory it handed to C++:\n%s", method, body)
		}
	}

	for _, tc := range []struct {
		signature string
		want      []string
	}{
		{"virtual QByteArray name() override", []string{"free(callback_return_value.data);"}},
		{"virtual QList<QByteArray> aliases() override", []string{
			"free(callback_return_value_free_arr[i].data);",
			"free(callback_return_value.data);",
		}},
		{"virtual QMap<int, QString> labels() override", []string{
			"free(callback_return_value_free_varr[i].data);",
			"free(callback_return_value.keys);",
			"free(callback_return_value.values);",
		}},
		{"virtual QPair<int, QString> span() override", []string{
			"free(callback_return_value_free_second_arr[i].data);",
			"free(callback_return_value.keys);",
			"free(callback_return_value.values);",
		}},
	} {
		body := cppOverrideSource(t, cppSrc, tc.signature)
		for _, want := range tc.want {
			if !strings.Contains(body, want) {
				t.Errorf("%s: missing %q:\n%s", tc.signature, want, body)
			}
		}
		// The copy into the Qt type must happen before the frees.
		if copyAt, freeAt := strings.Index(body, "callback_return_value_Q"), strings.Index(body, "free("); freeAt >= 0 && (copyAt < 0 || freeAt < copyAt) {
			t.Errorf("%s: frees before copying into the Qt type:\n%s", tc.signature, body)
		}
	}
}
