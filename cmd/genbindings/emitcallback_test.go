package main

import (
	"strings"
	"testing"
)

func callbackTestHeader() CppParsedHeader {
	return CppParsedHeader{
		Filename: "qcallbackprobe.h",
		Classes: []CppClass{{
			ClassName: "QCallbackProbe",
			Ctors:     []CppMethod{{}},
			CanDelete: true,
			Methods: []CppMethod{
				{
					MethodName: "changed",
					ReturnType: CppParameter{ParameterType: "void"},
					IsSignal:   true,
				},
				{
					MethodName: "acceptValue",
					ReturnType: CppParameter{ParameterType: "bool"},
					IsVirtual:  true,
				},
				{
					MethodName: "release",
					ReturnType: CppParameter{ParameterType: "void"},
					IsVirtual:  true,
				},
			},
		}},
	}
}

func prepareCallbackTestTypes() {
	flushKnownTypes()
	KnownClassnames["QMetaObject::Connection"] = lookupResultClass{
		PackageName: "qt",
		Class:       CppClass{ClassName: "QMetaObject::Connection"},
	}
}

func TestEmitCallbackHandleOwnership(t *testing.T) {
	prepareCallbackTestTypes()
	src := callbackTestHeader()

	goSrc, err := emitGo(&src, src.Filename, "qt")
	if err != nil {
		t.Fatal(err)
	}
	cppSrc, err := emitBindingCpp(&src, src.Filename)
	if err != nil {
		t.Fatal(err)
	}
	headerSrc, err := emitBindingHeader(&src, src.Filename, "qt")
	if err != nil {
		t.Fatal(err)
	}

	for _, want := range []string{
		"func miqt_exec_callback_handle_release_QCallbackProbe(cb C.intptr_t)",
		"cgo.Handle(cb).Delete()",
		"OnChanged(slot func()) *SignalConnection",
		"UnsafeNewQMetaObject__Connection(C.QCallbackProbe_connect_changed",
		"if slot != nil",
		"slotHandle = C.intptr_t(cgo.NewHandle(slot))",
	} {
		if !strings.Contains(goSrc, want) {
			t.Errorf("Go binding is missing %q:\n%s", want, goSrc)
		}
	}

	if got := strings.Count(goSrc, "func miqt_exec_callback_handle_release_QCallbackProbe"); got != 1 {
		t.Errorf("release callback generated %d times, want exactly once", got)
	}
	if !strings.Contains(goSrc, "func miqt_exec_callback_QCallbackProbe_release(") {
		t.Errorf("virtual method named release collided with the handle release callback:\n%s", goSrc)
	}

	for _, want := range []string{
		"std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QCallbackProbe>>(slot)",
		"new QMetaObject::Connection(",
		"[slot_handle]()",
		"intptr_t slot = slot_handle->value()",
		"miqt_callback_handle<miqt_exec_callback_handle_release_QCallbackProbe> handle__acceptValue",
		"miqt_callback_handle<miqt_exec_callback_handle_release_QCallbackProbe> slot_handle(slot)",
		"handle__acceptValue = std::move(slot_handle)",
		"handle__acceptValue.value()",
	} {
		if !strings.Contains(cppSrc, want) {
			t.Errorf("C++ binding is missing %q:\n%s", want, cppSrc)
		}
	}

	if strings.Contains(cppSrc, "intptr_t handle__acceptValue = 0") {
		t.Errorf("C++ binding still stores a raw virtual callback handle:\n%s", cppSrc)
	}
	if !strings.Contains(headerSrc, "void* QCallbackProbe_connect_changed(QCallbackProbe* self, intptr_t slot);") {
		t.Errorf("C ABI signal connector does not return an opaque connection token:\n%s", headerSrc)
	}
}

func TestEmitSignalConnectionFromSubpackage(t *testing.T) {
	prepareCallbackTestTypes()
	src := callbackTestHeader()
	src.Classes[0].Methods = src.Classes[0].Methods[:1]

	goSrc, err := emitGo(&src, src.Filename, "qt/network")
	if err != nil {
		t.Fatal(err)
	}

	for _, want := range []string{
		`"github.com/mappu/miqt/qt"`,
		"OnChanged(slot func()) *qt.SignalConnection",
		"qt.UnsafeNewQMetaObject__Connection(",
	} {
		if !strings.Contains(goSrc, want) {
			t.Errorf("subpackage Go binding is missing %q:\n%s", want, goSrc)
		}
	}
}

func TestEmitQt6SignalConnectionFromSubpackage(t *testing.T) {
	prepareCallbackTestTypes()
	connectionInfo := KnownClassnames["QMetaObject::Connection"]
	connectionInfo.PackageName = "qt6"
	KnownClassnames["QMetaObject::Connection"] = connectionInfo
	src := callbackTestHeader()
	src.Classes[0].Methods = src.Classes[0].Methods[:1]

	goSrc, err := emitGo(&src, src.Filename, "qt6/designer")
	if err != nil {
		t.Fatal(err)
	}

	for _, want := range []string{
		`"github.com/mappu/miqt/qt6"`,
		"OnChanged(slot func()) *qt6.SignalConnection",
		"qt6.UnsafeNewQMetaObject__Connection(",
	} {
		if !strings.Contains(goSrc, want) {
			t.Errorf("Qt 6 subpackage Go binding is missing %q:\n%s", want, goSrc)
		}
	}
}
