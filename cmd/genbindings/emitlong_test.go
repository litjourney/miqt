package main

import (
	"strings"
	"testing"
)

// longPointerTestHeader covers every path where a C `long*` / `long&` crosses
// the boundary: method arguments (Go to C++), the super() call of a virtual
// override (Go to C++), and the parameters of virtual-override and signal
// callbacks (C++ to Go).
func longPointerTestHeader() CppParsedHeader {
	param := func(name, t string, ptr, ref bool) CppParameter {
		p := CppParameter{ParameterName: name, ParameterType: t, Pointer: ptr, ByRef: ref}
		if ptr {
			p.PointerCount = 1
		}
		return p
	}

	return CppParsedHeader{
		Filename: "qlongprobe.h",
		Classes: []CppClass{{
			ClassName: "QLongProbe",
			Ctors:     []CppMethod{{}},
			CanDelete: true,
			Methods: []CppMethod{
				{
					MethodName: "readValues",
					ReturnType: CppParameter{ParameterType: "bool"},
					Parameters: []CppParameter{
						param("value", "long", false, true),
						param("count", "unsigned long", false, true),
						param("total", "ulong", true, false),
					},
				},
				{
					MethodName: "nativeEvent",
					ReturnType: CppParameter{ParameterType: "bool"},
					IsVirtual:  true,
					Parameters: []CppParameter{
						param("message", "void", true, false),
						param("result", "long", true, false),
					},
				},
				{
					MethodName: "valueRead",
					ReturnType: CppParameter{ParameterType: "void"},
					IsSignal:   true,
					Parameters: []CppParameter{param("value", "long", true, false)},
				},
				{
					// Not a long pointer: keep the plain value conversion
					MethodName: "setLimit",
					ReturnType: CppParameter{ParameterType: "void"},
					Parameters: []CppParameter{param("limit", "long", false, false)},
				},
			},
		}},
	}
}

func TestEmitLongPointerCopiesAtTheBoundary(t *testing.T) {
	prepareCallbackTestTypes()
	src := longPointerTestHeader()

	goSrc, err := emitGo(&src, src.Filename, "qt")
	if err != nil {
		t.Fatal(err)
	}
	headerSrc, err := emitBindingHeader(&src, src.Filename, "qt")
	if err != nil {
		t.Fatal(err)
	}

	// The pointer must never be reinterpreted: C long is 4 bytes on Windows
	// and on 32-bit platforms, the Go types are 8 bytes.
	for _, bad := range []string{
		"(*C.long)(unsafe.Pointer(",
		"(*C.ulong)(unsafe.Pointer(",
		"(*int64)(unsafe.Pointer(",
		"(*uint64)(unsafe.Pointer(",
	} {
		if strings.Contains(goSrc, bad) {
			t.Errorf("Go binding reinterprets a long pointer with %q:\n%s", bad, goSrc)
		}
	}

	for _, want := range []string{
		// The Go API keeps its full-width types
		"func (this *QLongProbe) ReadValues(value *int64, count *uint64, total *uint64) bool",
		"func (this *QLongProbe) OnNativeEvent(slot func(super func(message unsafe.Pointer, result *int64) bool, message unsafe.Pointer, result *int64) bool)",
		"func (this *QLongProbe) OnValueRead(slot func(value *int64)) *SignalConnection",
		"func (this *QLongProbe) SetLimit(limit int64)",

		// Go to C++: a C-sized copy, nil stays nil, written back after the call
		"var value_cval C.long",
		"var value_cptr *C.long",
		"if value != nil {",
		"value_cval = C.long(*value)",
		"value_cptr = &value_cval",
		"defer func() { *value = int64(value_cval) }()",
		"count_cval = C.ulong(*count)",
		"defer func() { *count = uint64(count_cval) }()",
		"total_cval = C.ulong(*total)",
		"C.QLongProbe_readValues(this.h, value_cptr, count_cptr, total_cptr)",

		// super() of a virtual override goes the same way
		"C.QLongProbe_virtualbase_nativeEvent(unsafe.Pointer(this.h), message, result_cptr)",

		// C++ to Go: a full-width copy, nil stays nil, written back after the callback
		"func miqt_exec_callback_QLongProbe_nativeEvent(self *C.QLongProbe, cb C.intptr_t, message unsafe.Pointer, result *C.long) C.bool",
		"var slotval2_val int64",
		"var slotval2 *int64",
		"if result != nil {",
		"slotval2_val = int64(*result)",
		"slotval2 = &slotval2_val",
		"defer func() { *result = C.long(slotval2_val) }()",
		"func miqt_exec_callback_QLongProbe_valueRead(cb C.intptr_t, value *C.long)",
		"slotval1_val = int64(*value)",
		"defer func() { *value = C.long(slotval1_val) }()",

		// Plain values are unchanged
		"C.QLongProbe_setLimit(this.h, (C.long)(limit))",
	} {
		if !strings.Contains(goSrc, want) {
			t.Errorf("Go binding is missing %q:\n%s", want, goSrc)
		}
	}

	// The C ABI keeps the real C++ types
	for _, want := range []string{
		"bool QLongProbe_readValues(QLongProbe* self, long* value, unsigned long* count, unsigned long* total);",
		"bool QLongProbe_virtualbase_nativeEvent(void* self, void* message, long* result);",
	} {
		if !strings.Contains(headerSrc, want) {
			t.Errorf("C ABI header is missing %q:\n%s", want, headerSrc)
		}
	}
}
