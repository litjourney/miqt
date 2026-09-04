package designer

/*

#include "gen_abstractsettings.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

//export miqt_exec_callback_handle_release_QDesignerSettingsInterface
func miqt_exec_callback_handle_release_QDesignerSettingsInterface(cb C.intptr_t) {
	cgo.Handle(cb).Delete()
}

type QDesignerSettingsInterface struct {
	h *C.QDesignerSettingsInterface
}

func (this *QDesignerSettingsInterface) cPointer() *C.QDesignerSettingsInterface {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDesignerSettingsInterface) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDesignerSettingsInterface constructs the type using only CGO pointers.
func newQDesignerSettingsInterface(h *C.QDesignerSettingsInterface) *QDesignerSettingsInterface {
	if h == nil {
		return nil
	}

	return &QDesignerSettingsInterface{h: h}
}

// UnsafeNewQDesignerSettingsInterface constructs the type using only unsafe pointers.
func UnsafeNewQDesignerSettingsInterface(h unsafe.Pointer) *QDesignerSettingsInterface {
	return newQDesignerSettingsInterface((*C.QDesignerSettingsInterface)(h))
}

// NewQDesignerSettingsInterface constructs a new QDesignerSettingsInterface object.
func NewQDesignerSettingsInterface() *QDesignerSettingsInterface {

	return newQDesignerSettingsInterface(C.QDesignerSettingsInterface_new())
}

func (this *QDesignerSettingsInterface) BeginGroup(prefix string) {
	prefix_ms := C.struct_miqt_string{}
	prefix_ms.data = C.CString(prefix)
	prefix_ms.len = C.size_t(len(prefix))
	defer C.free(unsafe.Pointer(prefix_ms.data))
	C.QDesignerSettingsInterface_beginGroup(this.h, prefix_ms)
}

func (this *QDesignerSettingsInterface) EndGroup() {
	C.QDesignerSettingsInterface_endGroup(this.h)
}

func (this *QDesignerSettingsInterface) Contains(key string) bool {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	return (bool)(C.QDesignerSettingsInterface_contains(this.h, key_ms))
}

func (this *QDesignerSettingsInterface) SetValue(key string, value *qt6.QVariant) {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	C.QDesignerSettingsInterface_setValue(this.h, key_ms, (*C.QVariant)(value.UnsafePointer()))
}

func (this *QDesignerSettingsInterface) Value(key string, defaultValue *qt6.QVariant) *qt6.QVariant {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	_goptr := qt6.UnsafeNewQVariant(unsafe.Pointer(C.QDesignerSettingsInterface_value(this.h, key_ms, (*C.QVariant)(defaultValue.UnsafePointer()))))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDesignerSettingsInterface) Remove(key string) {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	C.QDesignerSettingsInterface_remove(this.h, key_ms)
}
func (this *QDesignerSettingsInterface) OnBeginGroup(slot func(prefix string)) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDesignerSettingsInterface_override_virtual_beginGroup(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerSettingsInterface_beginGroup
func miqt_exec_callback_QDesignerSettingsInterface_beginGroup(self *C.QDesignerSettingsInterface, cb C.intptr_t, prefix C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(prefix string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var prefix_ms C.struct_miqt_string = prefix
	prefix_ret := C.GoStringN(prefix_ms.data, C.int(int64(prefix_ms.len)))
	C.free(unsafe.Pointer(prefix_ms.data))
	slotval1 := prefix_ret

	gofunc(slotval1)

}
func (this *QDesignerSettingsInterface) OnEndGroup(slot func()) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDesignerSettingsInterface_override_virtual_endGroup(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerSettingsInterface_endGroup
func miqt_exec_callback_QDesignerSettingsInterface_endGroup(self *C.QDesignerSettingsInterface, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()

}
func (this *QDesignerSettingsInterface) OnContains(slot func(key string) bool) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDesignerSettingsInterface_override_virtual_contains(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerSettingsInterface_contains
func miqt_exec_callback_QDesignerSettingsInterface_contains(self *C.QDesignerSettingsInterface, cb C.intptr_t, key C.struct_miqt_string) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(key string) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var key_ms C.struct_miqt_string = key
	key_ret := C.GoStringN(key_ms.data, C.int(int64(key_ms.len)))
	C.free(unsafe.Pointer(key_ms.data))
	slotval1 := key_ret

	virtualReturn := gofunc(slotval1)

	return (C.bool)(virtualReturn)

}
func (this *QDesignerSettingsInterface) OnSetValue(slot func(key string, value *qt6.QVariant)) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDesignerSettingsInterface_override_virtual_setValue(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerSettingsInterface_setValue
func miqt_exec_callback_QDesignerSettingsInterface_setValue(self *C.QDesignerSettingsInterface, cb C.intptr_t, key C.struct_miqt_string, value *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(key string, value *qt6.QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var key_ms C.struct_miqt_string = key
	key_ret := C.GoStringN(key_ms.data, C.int(int64(key_ms.len)))
	C.free(unsafe.Pointer(key_ms.data))
	slotval1 := key_ret
	slotval2 := qt6.UnsafeNewQVariant(unsafe.Pointer(value))

	gofunc(slotval1, slotval2)

}

type miqtVirtualCallback_QDesignerSettingsInterface_value struct {
	callback   func(key string, defaultValue *qt6.QVariant) *qt6.QVariant
	ownsReturn bool
}

func (this *QDesignerSettingsInterface) OnValue(slot func(key string, defaultValue *qt6.QVariant) *qt6.QVariant) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(miqtVirtualCallback_QDesignerSettingsInterface_value{callback: slot}))
	}
	ok := C.QDesignerSettingsInterface_override_virtual_value(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

// OnValueOwned installs a virtual override that transfers
// ownership of each non-nil returned Qt value object to C++.
func (this *QDesignerSettingsInterface) OnValueOwned(slot func(key string, defaultValue *qt6.QVariant) *qt6.QVariant) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(miqtVirtualCallback_QDesignerSettingsInterface_value{callback: slot, ownsReturn: true}))
	}
	ok := C.QDesignerSettingsInterface_override_virtual_owned_value(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerSettingsInterface_value
func miqt_exec_callback_QDesignerSettingsInterface_value(self *C.QDesignerSettingsInterface, cb C.intptr_t, key C.struct_miqt_string, defaultValue *C.QVariant) *C.QVariant {
	callbackData, ok := cgo.Handle(cb).Value().(miqtVirtualCallback_QDesignerSettingsInterface_value)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}
	gofunc := callbackData.callback

	// Convert all CABI parameters to Go parameters
	var key_ms C.struct_miqt_string = key
	key_ret := C.GoStringN(key_ms.data, C.int(int64(key_ms.len)))
	C.free(unsafe.Pointer(key_ms.data))
	slotval1 := key_ret
	slotval2 := qt6.UnsafeNewQVariant(unsafe.Pointer(defaultValue))

	virtualReturn := gofunc(slotval1, slotval2)
	if callbackData.ownsReturn && virtualReturn != nil {
		runtime.SetFinalizer(virtualReturn, nil)
	}

	return (*C.QVariant)(virtualReturn.UnsafePointer())

}
func (this *QDesignerSettingsInterface) OnRemove(slot func(key string)) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDesignerSettingsInterface_override_virtual_remove(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDesignerSettingsInterface_remove
func miqt_exec_callback_QDesignerSettingsInterface_remove(self *C.QDesignerSettingsInterface, cb C.intptr_t, key C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(key string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var key_ms C.struct_miqt_string = key
	key_ret := C.GoStringN(key_ms.data, C.int(int64(key_ms.len)))
	C.free(unsafe.Pointer(key_ms.data))
	slotval1 := key_ret

	gofunc(slotval1)

}

// Delete this object from C++ memory.
func (this *QDesignerSettingsInterface) Delete() {
	C.QDesignerSettingsInterface_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDesignerSettingsInterface) GoGC() {
	runtime.SetFinalizer(this, func(this *QDesignerSettingsInterface) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
