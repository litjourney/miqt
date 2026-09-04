package qt6

/*

#include "gen_qfileiconprovider.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

//export miqt_exec_callback_handle_release_QFileIconProvider
func miqt_exec_callback_handle_release_QFileIconProvider(cb C.intptr_t) {
	cgo.Handle(cb).Delete()
}

type QFileIconProvider struct {
	h *C.QFileIconProvider
	*QAbstractFileIconProvider
}

func (this *QFileIconProvider) cPointer() *C.QFileIconProvider {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QFileIconProvider) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQFileIconProvider constructs the type using only CGO pointers.
func newQFileIconProvider(h *C.QFileIconProvider) *QFileIconProvider {
	if h == nil {
		return nil
	}
	var outptr_QAbstractFileIconProvider *C.QAbstractFileIconProvider = nil
	C.QFileIconProvider_virtbase(h, &outptr_QAbstractFileIconProvider)

	return &QFileIconProvider{h: h,
		QAbstractFileIconProvider: newQAbstractFileIconProvider(outptr_QAbstractFileIconProvider)}
}

// UnsafeNewQFileIconProvider constructs the type using only unsafe pointers.
func UnsafeNewQFileIconProvider(h unsafe.Pointer) *QFileIconProvider {
	return newQFileIconProvider((*C.QFileIconProvider)(h))
}

// NewQFileIconProvider constructs a new QFileIconProvider object.
func NewQFileIconProvider() *QFileIconProvider {

	return newQFileIconProvider(C.QFileIconProvider_new())
}

func (this *QFileIconProvider) Icon(typeVal QAbstractFileIconProvider__IconType) *QIcon {
	_goptr := newQIcon(C.QFileIconProvider_icon(this.h, (C.int)(typeVal)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileIconProvider) IconWithInfo(info *QFileInfo) *QIcon {
	_goptr := newQIcon(C.QFileIconProvider_iconWithInfo(this.h, info.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QFileIconProvider) callVirtualBase_Icon(typeVal QAbstractFileIconProvider__IconType) *QIcon {

	_goptr := newQIcon(C.QFileIconProvider_virtualbase_icon(unsafe.Pointer(this.h), (C.int)(typeVal)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}

type miqtVirtualCallback_QFileIconProvider_icon struct {
	callback   func(super func(typeVal QAbstractFileIconProvider__IconType) *QIcon, typeVal QAbstractFileIconProvider__IconType) *QIcon
	ownsReturn bool
}

func (this *QFileIconProvider) OnIcon(slot func(super func(typeVal QAbstractFileIconProvider__IconType) *QIcon, typeVal QAbstractFileIconProvider__IconType) *QIcon) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(miqtVirtualCallback_QFileIconProvider_icon{callback: slot}))
	}
	ok := C.QFileIconProvider_override_virtual_icon(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

// OnIconOwned installs a virtual override that transfers
// ownership of each non-nil returned Qt value object to C++.
func (this *QFileIconProvider) OnIconOwned(slot func(super func(typeVal QAbstractFileIconProvider__IconType) *QIcon, typeVal QAbstractFileIconProvider__IconType) *QIcon) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(miqtVirtualCallback_QFileIconProvider_icon{callback: slot, ownsReturn: true}))
	}
	ok := C.QFileIconProvider_override_virtual_owned_icon(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileIconProvider_icon
func miqt_exec_callback_QFileIconProvider_icon(self *C.QFileIconProvider, cb C.intptr_t, typeVal C.int) *C.QIcon {
	callbackData, ok := cgo.Handle(cb).Value().(miqtVirtualCallback_QFileIconProvider_icon)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}
	gofunc := callbackData.callback

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractFileIconProvider__IconType)(typeVal)

	virtualReturn := gofunc((&QFileIconProvider{h: self}).callVirtualBase_Icon, slotval1)
	if callbackData.ownsReturn && virtualReturn != nil {
		runtime.SetFinalizer(virtualReturn, nil)
	}

	return virtualReturn.cPointer()

}

func (this *QFileIconProvider) callVirtualBase_IconWithInfo(info *QFileInfo) *QIcon {

	_goptr := newQIcon(C.QFileIconProvider_virtualbase_iconWithInfo(unsafe.Pointer(this.h), info.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}

type miqtVirtualCallback_QFileIconProvider_iconWithInfo struct {
	callback   func(super func(info *QFileInfo) *QIcon, info *QFileInfo) *QIcon
	ownsReturn bool
}

func (this *QFileIconProvider) OnIconWithInfo(slot func(super func(info *QFileInfo) *QIcon, info *QFileInfo) *QIcon) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(miqtVirtualCallback_QFileIconProvider_iconWithInfo{callback: slot}))
	}
	ok := C.QFileIconProvider_override_virtual_iconWithInfo(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

// OnIconWithInfoOwned installs a virtual override that transfers
// ownership of each non-nil returned Qt value object to C++.
func (this *QFileIconProvider) OnIconWithInfoOwned(slot func(super func(info *QFileInfo) *QIcon, info *QFileInfo) *QIcon) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(miqtVirtualCallback_QFileIconProvider_iconWithInfo{callback: slot, ownsReturn: true}))
	}
	ok := C.QFileIconProvider_override_virtual_owned_iconWithInfo(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileIconProvider_iconWithInfo
func miqt_exec_callback_QFileIconProvider_iconWithInfo(self *C.QFileIconProvider, cb C.intptr_t, info *C.QFileInfo) *C.QIcon {
	callbackData, ok := cgo.Handle(cb).Value().(miqtVirtualCallback_QFileIconProvider_iconWithInfo)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}
	gofunc := callbackData.callback

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFileInfo(info)

	virtualReturn := gofunc((&QFileIconProvider{h: self}).callVirtualBase_IconWithInfo, slotval1)
	if callbackData.ownsReturn && virtualReturn != nil {
		runtime.SetFinalizer(virtualReturn, nil)
	}

	return virtualReturn.cPointer()

}

func (this *QFileIconProvider) callVirtualBase_Type(param1 *QFileInfo) string {

	var _ms C.struct_miqt_string = C.QFileIconProvider_virtualbase_type(unsafe.Pointer(this.h), param1.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QFileIconProvider) OnType(slot func(super func(param1 *QFileInfo) string, param1 *QFileInfo) string) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QFileIconProvider_override_virtual_type(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileIconProvider_type
func miqt_exec_callback_QFileIconProvider_type(self *C.QFileIconProvider, cb C.intptr_t, param1 *C.QFileInfo) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QFileInfo) string, param1 *QFileInfo) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFileInfo(param1)

	virtualReturn := gofunc((&QFileIconProvider{h: self}).callVirtualBase_Type, slotval1)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))

	return virtualReturn_ms

}

func (this *QFileIconProvider) callVirtualBase_SetOptions(options QAbstractFileIconProvider__Option) {

	C.QFileIconProvider_virtualbase_setOptions(unsafe.Pointer(this.h), (C.int)(options))

}
func (this *QFileIconProvider) OnSetOptions(slot func(super func(options QAbstractFileIconProvider__Option), options QAbstractFileIconProvider__Option)) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QFileIconProvider_override_virtual_setOptions(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileIconProvider_setOptions
func miqt_exec_callback_QFileIconProvider_setOptions(self *C.QFileIconProvider, cb C.intptr_t, options C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(options QAbstractFileIconProvider__Option), options QAbstractFileIconProvider__Option))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractFileIconProvider__Option)(options)

	gofunc((&QFileIconProvider{h: self}).callVirtualBase_SetOptions, slotval1)

}

func (this *QFileIconProvider) callVirtualBase_Options() QAbstractFileIconProvider__Option {

	return (QAbstractFileIconProvider__Option)(C.QFileIconProvider_virtualbase_options(unsafe.Pointer(this.h)))

}
func (this *QFileIconProvider) OnOptions(slot func(super func() QAbstractFileIconProvider__Option) QAbstractFileIconProvider__Option) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QFileIconProvider_override_virtual_options(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QFileIconProvider_options
func miqt_exec_callback_QFileIconProvider_options(self *C.QFileIconProvider, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QAbstractFileIconProvider__Option) QAbstractFileIconProvider__Option)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QFileIconProvider{h: self}).callVirtualBase_Options)

	return (C.int)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QFileIconProvider) Delete() {
	C.QFileIconProvider_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QFileIconProvider) GoGC() {
	runtime.SetFinalizer(this, func(this *QFileIconProvider) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
