package qml

/*

#include "gen_qqmlpropertyvaluesource.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt6"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

//export miqt_exec_callback_handle_release_QQmlPropertyValueSource
func miqt_exec_callback_handle_release_QQmlPropertyValueSource(cb C.intptr_t) {
	cgo.Handle(cb).Delete()
}

type QQmlPropertyValueSource struct {
	h *C.QQmlPropertyValueSource
}

func (this *QQmlPropertyValueSource) cPointer() *C.QQmlPropertyValueSource {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QQmlPropertyValueSource) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQQmlPropertyValueSource constructs the type using only CGO pointers.
func newQQmlPropertyValueSource(h *C.QQmlPropertyValueSource) *QQmlPropertyValueSource {
	if h == nil {
		return nil
	}

	return &QQmlPropertyValueSource{h: h}
}

// UnsafeNewQQmlPropertyValueSource constructs the type using only unsafe pointers.
func UnsafeNewQQmlPropertyValueSource(h unsafe.Pointer) *QQmlPropertyValueSource {
	return newQQmlPropertyValueSource((*C.QQmlPropertyValueSource)(h))
}

// NewQQmlPropertyValueSource constructs a new QQmlPropertyValueSource object.
func NewQQmlPropertyValueSource() *QQmlPropertyValueSource {

	return newQQmlPropertyValueSource(C.QQmlPropertyValueSource_new())
}

func (this *QQmlPropertyValueSource) SetTarget(target *QQmlProperty) {
	C.QQmlPropertyValueSource_setTarget(this.h, target.cPointer())
}

func (this *QQmlPropertyValueSource) OperatorAssign(param1 *QQmlPropertyValueSource) {
	C.QQmlPropertyValueSource_operatorAssign(this.h, param1.cPointer())
}
func (this *QQmlPropertyValueSource) OnSetTarget(slot func(target *QQmlProperty)) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QQmlPropertyValueSource_override_virtual_setTarget(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QQmlPropertyValueSource_setTarget
func miqt_exec_callback_QQmlPropertyValueSource_setTarget(self *C.QQmlPropertyValueSource, cb C.intptr_t, target *C.QQmlProperty) {
	gofunc, ok := cgo.Handle(cb).Value().(func(target *QQmlProperty))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQQmlProperty(target)

	gofunc(slotval1)

}

// Delete this object from C++ memory.
func (this *QQmlPropertyValueSource) Delete() {
	C.QQmlPropertyValueSource_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QQmlPropertyValueSource) GoGC() {
	runtime.SetFinalizer(this, func(this *QQmlPropertyValueSource) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
