package qt6

/*

#include "gen_qabstractfileiconprovider.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAbstractFileIconProvider__IconType int

const (
	QAbstractFileIconProvider__Computer QAbstractFileIconProvider__IconType = 0
	QAbstractFileIconProvider__Desktop  QAbstractFileIconProvider__IconType = 1
	QAbstractFileIconProvider__Trashcan QAbstractFileIconProvider__IconType = 2
	QAbstractFileIconProvider__Network  QAbstractFileIconProvider__IconType = 3
	QAbstractFileIconProvider__Drive    QAbstractFileIconProvider__IconType = 4
	QAbstractFileIconProvider__Folder   QAbstractFileIconProvider__IconType = 5
	QAbstractFileIconProvider__File     QAbstractFileIconProvider__IconType = 6
)

type QAbstractFileIconProvider__Option int

const (
	QAbstractFileIconProvider__DontUseCustomDirectoryIcons QAbstractFileIconProvider__Option = 1
)

//export miqt_exec_callback_handle_release_QAbstractFileIconProvider
func miqt_exec_callback_handle_release_QAbstractFileIconProvider(cb C.intptr_t) {
	cgo.Handle(cb).Delete()
}

type QAbstractFileIconProvider struct {
	h *C.QAbstractFileIconProvider
}

func (this *QAbstractFileIconProvider) cPointer() *C.QAbstractFileIconProvider {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAbstractFileIconProvider) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAbstractFileIconProvider constructs the type using only CGO pointers.
func newQAbstractFileIconProvider(h *C.QAbstractFileIconProvider) *QAbstractFileIconProvider {
	if h == nil {
		return nil
	}

	return &QAbstractFileIconProvider{h: h}
}

// UnsafeNewQAbstractFileIconProvider constructs the type using only unsafe pointers.
func UnsafeNewQAbstractFileIconProvider(h unsafe.Pointer) *QAbstractFileIconProvider {
	return newQAbstractFileIconProvider((*C.QAbstractFileIconProvider)(h))
}

// NewQAbstractFileIconProvider constructs a new QAbstractFileIconProvider object.
func NewQAbstractFileIconProvider() *QAbstractFileIconProvider {

	return newQAbstractFileIconProvider(C.QAbstractFileIconProvider_new())
}

func (this *QAbstractFileIconProvider) Icon(param1 QAbstractFileIconProvider__IconType) *QIcon {
	_goptr := newQIcon(C.QAbstractFileIconProvider_icon(this.h, (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractFileIconProvider) IconWithQFileInfo(param1 *QFileInfo) *QIcon {
	_goptr := newQIcon(C.QAbstractFileIconProvider_iconWithQFileInfo(this.h, param1.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractFileIconProvider) Type(param1 *QFileInfo) string {
	var _ms C.struct_miqt_string = C.QAbstractFileIconProvider_type(this.h, param1.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractFileIconProvider) SetOptions(options QAbstractFileIconProvider__Option) {
	C.QAbstractFileIconProvider_setOptions(this.h, (C.int)(options))
}

func (this *QAbstractFileIconProvider) Options() QAbstractFileIconProvider__Option {
	return (QAbstractFileIconProvider__Option)(C.QAbstractFileIconProvider_options(this.h))
}

func (this *QAbstractFileIconProvider) callVirtualBase_Icon(param1 QAbstractFileIconProvider__IconType) *QIcon {

	_goptr := newQIcon(C.QAbstractFileIconProvider_virtualbase_icon(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}

type miqtVirtualCallback_QAbstractFileIconProvider_icon struct {
	callback   func(super func(param1 QAbstractFileIconProvider__IconType) *QIcon, param1 QAbstractFileIconProvider__IconType) *QIcon
	ownsReturn bool
}

func (this *QAbstractFileIconProvider) OnIcon(slot func(super func(param1 QAbstractFileIconProvider__IconType) *QIcon, param1 QAbstractFileIconProvider__IconType) *QIcon) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(miqtVirtualCallback_QAbstractFileIconProvider_icon{callback: slot}))
	}
	ok := C.QAbstractFileIconProvider_override_virtual_icon(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

// OnIconOwned installs a virtual override that transfers
// ownership of each non-nil returned Qt value object to C++.
func (this *QAbstractFileIconProvider) OnIconOwned(slot func(super func(param1 QAbstractFileIconProvider__IconType) *QIcon, param1 QAbstractFileIconProvider__IconType) *QIcon) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(miqtVirtualCallback_QAbstractFileIconProvider_icon{callback: slot, ownsReturn: true}))
	}
	ok := C.QAbstractFileIconProvider_override_virtual_owned_icon(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractFileIconProvider_icon
func miqt_exec_callback_QAbstractFileIconProvider_icon(self *C.QAbstractFileIconProvider, cb C.intptr_t, param1 C.int) *C.QIcon {
	callbackData, ok := cgo.Handle(cb).Value().(miqtVirtualCallback_QAbstractFileIconProvider_icon)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}
	gofunc := callbackData.callback

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractFileIconProvider__IconType)(param1)

	virtualReturn := gofunc((&QAbstractFileIconProvider{h: self}).callVirtualBase_Icon, slotval1)
	if callbackData.ownsReturn && virtualReturn != nil {
		runtime.SetFinalizer(virtualReturn, nil)
	}

	return virtualReturn.cPointer()

}

func (this *QAbstractFileIconProvider) callVirtualBase_IconWithQFileInfo(param1 *QFileInfo) *QIcon {

	_goptr := newQIcon(C.QAbstractFileIconProvider_virtualbase_iconWithQFileInfo(unsafe.Pointer(this.h), param1.cPointer()))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}

type miqtVirtualCallback_QAbstractFileIconProvider_iconWithQFileInfo struct {
	callback   func(super func(param1 *QFileInfo) *QIcon, param1 *QFileInfo) *QIcon
	ownsReturn bool
}

func (this *QAbstractFileIconProvider) OnIconWithQFileInfo(slot func(super func(param1 *QFileInfo) *QIcon, param1 *QFileInfo) *QIcon) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(miqtVirtualCallback_QAbstractFileIconProvider_iconWithQFileInfo{callback: slot}))
	}
	ok := C.QAbstractFileIconProvider_override_virtual_iconWithQFileInfo(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

// OnIconWithQFileInfoOwned installs a virtual override that transfers
// ownership of each non-nil returned Qt value object to C++.
func (this *QAbstractFileIconProvider) OnIconWithQFileInfoOwned(slot func(super func(param1 *QFileInfo) *QIcon, param1 *QFileInfo) *QIcon) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(miqtVirtualCallback_QAbstractFileIconProvider_iconWithQFileInfo{callback: slot, ownsReturn: true}))
	}
	ok := C.QAbstractFileIconProvider_override_virtual_owned_iconWithQFileInfo(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractFileIconProvider_iconWithQFileInfo
func miqt_exec_callback_QAbstractFileIconProvider_iconWithQFileInfo(self *C.QAbstractFileIconProvider, cb C.intptr_t, param1 *C.QFileInfo) *C.QIcon {
	callbackData, ok := cgo.Handle(cb).Value().(miqtVirtualCallback_QAbstractFileIconProvider_iconWithQFileInfo)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}
	gofunc := callbackData.callback

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFileInfo(param1)

	virtualReturn := gofunc((&QAbstractFileIconProvider{h: self}).callVirtualBase_IconWithQFileInfo, slotval1)
	if callbackData.ownsReturn && virtualReturn != nil {
		runtime.SetFinalizer(virtualReturn, nil)
	}

	return virtualReturn.cPointer()

}

func (this *QAbstractFileIconProvider) callVirtualBase_Type(param1 *QFileInfo) string {

	var _ms C.struct_miqt_string = C.QAbstractFileIconProvider_virtualbase_type(unsafe.Pointer(this.h), param1.cPointer())
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}
func (this *QAbstractFileIconProvider) OnType(slot func(super func(param1 *QFileInfo) string, param1 *QFileInfo) string) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QAbstractFileIconProvider_override_virtual_type(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractFileIconProvider_type
func miqt_exec_callback_QAbstractFileIconProvider_type(self *C.QAbstractFileIconProvider, cb C.intptr_t, param1 *C.QFileInfo) C.struct_miqt_string {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QFileInfo) string, param1 *QFileInfo) string)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFileInfo(param1)

	virtualReturn := gofunc((&QAbstractFileIconProvider{h: self}).callVirtualBase_Type, slotval1)
	virtualReturn_ms := C.struct_miqt_string{}
	virtualReturn_ms.data = C.CString(virtualReturn)
	virtualReturn_ms.len = C.size_t(len(virtualReturn))

	return virtualReturn_ms

}

func (this *QAbstractFileIconProvider) callVirtualBase_SetOptions(options QAbstractFileIconProvider__Option) {

	C.QAbstractFileIconProvider_virtualbase_setOptions(unsafe.Pointer(this.h), (C.int)(options))

}
func (this *QAbstractFileIconProvider) OnSetOptions(slot func(super func(options QAbstractFileIconProvider__Option), options QAbstractFileIconProvider__Option)) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QAbstractFileIconProvider_override_virtual_setOptions(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractFileIconProvider_setOptions
func miqt_exec_callback_QAbstractFileIconProvider_setOptions(self *C.QAbstractFileIconProvider, cb C.intptr_t, options C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(options QAbstractFileIconProvider__Option), options QAbstractFileIconProvider__Option))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractFileIconProvider__Option)(options)

	gofunc((&QAbstractFileIconProvider{h: self}).callVirtualBase_SetOptions, slotval1)

}

func (this *QAbstractFileIconProvider) callVirtualBase_Options() QAbstractFileIconProvider__Option {

	return (QAbstractFileIconProvider__Option)(C.QAbstractFileIconProvider_virtualbase_options(unsafe.Pointer(this.h)))

}
func (this *QAbstractFileIconProvider) OnOptions(slot func(super func() QAbstractFileIconProvider__Option) QAbstractFileIconProvider__Option) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QAbstractFileIconProvider_override_virtual_options(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QAbstractFileIconProvider_options
func miqt_exec_callback_QAbstractFileIconProvider_options(self *C.QAbstractFileIconProvider, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() QAbstractFileIconProvider__Option) QAbstractFileIconProvider__Option)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QAbstractFileIconProvider{h: self}).callVirtualBase_Options)

	return (C.int)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QAbstractFileIconProvider) Delete() {
	C.QAbstractFileIconProvider_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractFileIconProvider) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractFileIconProvider) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
