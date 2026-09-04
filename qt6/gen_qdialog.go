package qt6

/*

#include "gen_qdialog.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QDialog__DialogCode int

const (
	QDialog__Rejected QDialog__DialogCode = 0
	QDialog__Accepted QDialog__DialogCode = 1
)

//export miqt_exec_callback_handle_release_QDialog
func miqt_exec_callback_handle_release_QDialog(cb C.intptr_t) {
	cgo.Handle(cb).Delete()
}

type QDialog struct {
	h *C.QDialog
	*QWidget
}

func (this *QDialog) cPointer() *C.QDialog {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDialog) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQDialog constructs the type using only CGO pointers.
func newQDialog(h *C.QDialog) *QDialog {
	if h == nil {
		return nil
	}
	var outptr_QWidget *C.QWidget = nil
	C.QDialog_virtbase(h, &outptr_QWidget)

	return &QDialog{h: h,
		QWidget: newQWidget(outptr_QWidget)}
}

// UnsafeNewQDialog constructs the type using only unsafe pointers.
func UnsafeNewQDialog(h unsafe.Pointer) *QDialog {
	return newQDialog((*C.QDialog)(h))
}

// NewQDialog constructs a new QDialog object.
func NewQDialog(parent *QWidget) *QDialog {

	return newQDialog(C.QDialog_new(parent.cPointer()))
}

// NewQDialog2 constructs a new QDialog object.
func NewQDialog2() *QDialog {

	return newQDialog(C.QDialog_new2())
}

// NewQDialog3 constructs a new QDialog object.
func NewQDialog3(parent *QWidget, f WindowType) *QDialog {

	return newQDialog(C.QDialog_new3(parent.cPointer(), (C.int)(f)))
}

func (this *QDialog) MetaObject() *QMetaObject {
	return newQMetaObject(C.QDialog_metaObject(this.h))
}

func (this *QDialog) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDialog_metacast(this.h, param1_Cstring))
}

func QDialog_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDialog_tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDialog) Result() int {
	return (int)(C.QDialog_result(this.h))
}

func (this *QDialog) SetVisible(visible bool) {
	C.QDialog_setVisible(this.h, (C.bool)(visible))
}

func (this *QDialog) SizeHint() *QSize {
	_goptr := newQSize(C.QDialog_sizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDialog) MinimumSizeHint() *QSize {
	_goptr := newQSize(C.QDialog_minimumSizeHint(this.h))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDialog) SetSizeGripEnabled(sizeGripEnabled bool) {
	C.QDialog_setSizeGripEnabled(this.h, (C.bool)(sizeGripEnabled))
}

func (this *QDialog) IsSizeGripEnabled() bool {
	return (bool)(C.QDialog_isSizeGripEnabled(this.h))
}

func (this *QDialog) SetModal(modal bool) {
	C.QDialog_setModal(this.h, (C.bool)(modal))
}

func (this *QDialog) SetResult(r int) {
	C.QDialog_setResult(this.h, (C.int)(r))
}

func (this *QDialog) Finished(result int) {
	C.QDialog_finished(this.h, (C.int)(result))
}
func (this *QDialog) OnFinished(slot func(result int)) *SignalConnection {
	_goptr := UnsafeNewQMetaObject__Connection(C.QDialog_connect_finished(this.h, C.intptr_t(cgo.NewHandle(slot))))
	_goptr.GoGC()
	return _goptr
}

//export miqt_exec_callback_QDialog_finished
func miqt_exec_callback_QDialog_finished(cb C.intptr_t, result C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(result int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(result)

	gofunc(slotval1)
}

func (this *QDialog) Accepted() {
	C.QDialog_accepted(this.h)
}
func (this *QDialog) OnAccepted(slot func()) *SignalConnection {
	_goptr := UnsafeNewQMetaObject__Connection(C.QDialog_connect_accepted(this.h, C.intptr_t(cgo.NewHandle(slot))))
	_goptr.GoGC()
	return _goptr
}

//export miqt_exec_callback_QDialog_accepted
func miqt_exec_callback_QDialog_accepted(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QDialog) Rejected() {
	C.QDialog_rejected(this.h)
}
func (this *QDialog) OnRejected(slot func()) *SignalConnection {
	_goptr := UnsafeNewQMetaObject__Connection(C.QDialog_connect_rejected(this.h, C.intptr_t(cgo.NewHandle(slot))))
	_goptr.GoGC()
	return _goptr
}

//export miqt_exec_callback_QDialog_rejected
func miqt_exec_callback_QDialog_rejected(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func (this *QDialog) Open() {
	C.QDialog_open(this.h)
}

func (this *QDialog) Exec() int {
	return (int)(C.QDialog_exec(this.h))
}

func (this *QDialog) Done(param1 int) {
	C.QDialog_done(this.h, (C.int)(param1))
}

func (this *QDialog) Accept() {
	C.QDialog_accept(this.h)
}

func (this *QDialog) Reject() {
	C.QDialog_reject(this.h)
}

func QDialog_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDialog_tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDialog_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDialog_tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// AdjustPosition can only be called from a QDialog that was directly constructed.
func (this *QDialog) AdjustPosition(param1 *QWidget) {

	var _dynamic_cast_ok C.bool = false
	C.QDialog_protectedbase_adjustPosition(&_dynamic_cast_ok, unsafe.Pointer(this.h), param1.cPointer())

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// UpdateMicroFocus can only be called from a QDialog that was directly constructed.
func (this *QDialog) UpdateMicroFocus() {

	var _dynamic_cast_ok C.bool = false
	C.QDialog_protectedbase_updateMicroFocus(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Create can only be called from a QDialog that was directly constructed.
func (this *QDialog) Create() {

	var _dynamic_cast_ok C.bool = false
	C.QDialog_protectedbase_create(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// Destroy can only be called from a QDialog that was directly constructed.
func (this *QDialog) Destroy() {

	var _dynamic_cast_ok C.bool = false
	C.QDialog_protectedbase_destroy(&_dynamic_cast_ok, unsafe.Pointer(this.h))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

}

// FocusNextChild can only be called from a QDialog that was directly constructed.
func (this *QDialog) FocusNextChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QDialog_protectedbase_focusNextChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// FocusPreviousChild can only be called from a QDialog that was directly constructed.
func (this *QDialog) FocusPreviousChild() bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QDialog_protectedbase_focusPreviousChild(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Sender can only be called from a QDialog that was directly constructed.
func (this *QDialog) Sender() *QObject {

	var _dynamic_cast_ok C.bool = false
	_method_ret := newQObject(C.QDialog_protectedbase_sender(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// SenderSignalIndex can only be called from a QDialog that was directly constructed.
func (this *QDialog) SenderSignalIndex() int {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDialog_protectedbase_senderSignalIndex(&_dynamic_cast_ok, unsafe.Pointer(this.h)))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// Receivers can only be called from a QDialog that was directly constructed.
func (this *QDialog) Receivers(signal string) int {
	signal_Cstring := C.CString(signal)
	defer C.free(unsafe.Pointer(signal_Cstring))

	var _dynamic_cast_ok C.bool = false
	_method_ret := (int)(C.QDialog_protectedbase_receivers(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal_Cstring))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

// IsSignalConnected can only be called from a QDialog that was directly constructed.
func (this *QDialog) IsSignalConnected(signal *QMetaMethod) bool {

	var _dynamic_cast_ok C.bool = false
	_method_ret := (bool)(C.QDialog_protectedbase_isSignalConnected(&_dynamic_cast_ok, unsafe.Pointer(this.h), signal.cPointer()))

	if !_dynamic_cast_ok {
		panic("miqt: can only call protected methods for directly constructed types")
	}

	return _method_ret

}

func (this *QDialog) callVirtualBase_SetVisible(visible bool) {

	C.QDialog_virtualbase_setVisible(unsafe.Pointer(this.h), (C.bool)(visible))

}
func (this *QDialog) OnSetVisible(slot func(super func(visible bool), visible bool)) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_setVisible(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_setVisible
func miqt_exec_callback_QDialog_setVisible(self *C.QDialog, cb C.intptr_t, visible C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(visible bool), visible bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(visible)

	gofunc((&QDialog{h: self}).callVirtualBase_SetVisible, slotval1)

}

func (this *QDialog) callVirtualBase_SizeHint() *QSize {

	_goptr := newQSize(C.QDialog_virtualbase_sizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}

type miqtVirtualCallback_QDialog_sizeHint struct {
	callback   func(super func() *QSize) *QSize
	ownsReturn bool
}

func (this *QDialog) OnSizeHint(slot func(super func() *QSize) *QSize) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(miqtVirtualCallback_QDialog_sizeHint{callback: slot}))
	}
	ok := C.QDialog_override_virtual_sizeHint(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

// OnSizeHintOwned installs a virtual override that transfers
// ownership of each non-nil returned Qt value object to C++.
func (this *QDialog) OnSizeHintOwned(slot func(super func() *QSize) *QSize) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(miqtVirtualCallback_QDialog_sizeHint{callback: slot, ownsReturn: true}))
	}
	ok := C.QDialog_override_virtual_owned_sizeHint(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_sizeHint
func miqt_exec_callback_QDialog_sizeHint(self *C.QDialog, cb C.intptr_t) *C.QSize {
	callbackData, ok := cgo.Handle(cb).Value().(miqtVirtualCallback_QDialog_sizeHint)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}
	gofunc := callbackData.callback

	virtualReturn := gofunc((&QDialog{h: self}).callVirtualBase_SizeHint)
	if callbackData.ownsReturn && virtualReturn != nil {
		runtime.SetFinalizer(virtualReturn, nil)
	}

	return virtualReturn.cPointer()

}

func (this *QDialog) callVirtualBase_MinimumSizeHint() *QSize {

	_goptr := newQSize(C.QDialog_virtualbase_minimumSizeHint(unsafe.Pointer(this.h)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}

type miqtVirtualCallback_QDialog_minimumSizeHint struct {
	callback   func(super func() *QSize) *QSize
	ownsReturn bool
}

func (this *QDialog) OnMinimumSizeHint(slot func(super func() *QSize) *QSize) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(miqtVirtualCallback_QDialog_minimumSizeHint{callback: slot}))
	}
	ok := C.QDialog_override_virtual_minimumSizeHint(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

// OnMinimumSizeHintOwned installs a virtual override that transfers
// ownership of each non-nil returned Qt value object to C++.
func (this *QDialog) OnMinimumSizeHintOwned(slot func(super func() *QSize) *QSize) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(miqtVirtualCallback_QDialog_minimumSizeHint{callback: slot, ownsReturn: true}))
	}
	ok := C.QDialog_override_virtual_owned_minimumSizeHint(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_minimumSizeHint
func miqt_exec_callback_QDialog_minimumSizeHint(self *C.QDialog, cb C.intptr_t) *C.QSize {
	callbackData, ok := cgo.Handle(cb).Value().(miqtVirtualCallback_QDialog_minimumSizeHint)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}
	gofunc := callbackData.callback

	virtualReturn := gofunc((&QDialog{h: self}).callVirtualBase_MinimumSizeHint)
	if callbackData.ownsReturn && virtualReturn != nil {
		runtime.SetFinalizer(virtualReturn, nil)
	}

	return virtualReturn.cPointer()

}

func (this *QDialog) callVirtualBase_Open() {

	C.QDialog_virtualbase_open(unsafe.Pointer(this.h))

}
func (this *QDialog) OnOpen(slot func(super func())) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_open(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_open
func miqt_exec_callback_QDialog_open(self *C.QDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QDialog{h: self}).callVirtualBase_Open)

}

func (this *QDialog) callVirtualBase_Exec() int {

	return (int)(C.QDialog_virtualbase_exec(unsafe.Pointer(this.h)))

}
func (this *QDialog) OnExec(slot func(super func() int) int) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_exec(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_exec
func miqt_exec_callback_QDialog_exec(self *C.QDialog, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDialog{h: self}).callVirtualBase_Exec)

	return (C.int)(virtualReturn)

}

func (this *QDialog) callVirtualBase_Done(param1 int) {

	C.QDialog_virtualbase_done(unsafe.Pointer(this.h), (C.int)(param1))

}
func (this *QDialog) OnDone(slot func(super func(param1 int), param1 int)) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_done(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_done
func miqt_exec_callback_QDialog_done(self *C.QDialog, cb C.intptr_t, param1 C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int), param1 int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	gofunc((&QDialog{h: self}).callVirtualBase_Done, slotval1)

}

func (this *QDialog) callVirtualBase_Accept() {

	C.QDialog_virtualbase_accept(unsafe.Pointer(this.h))

}
func (this *QDialog) OnAccept(slot func(super func())) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_accept(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_accept
func miqt_exec_callback_QDialog_accept(self *C.QDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QDialog{h: self}).callVirtualBase_Accept)

}

func (this *QDialog) callVirtualBase_Reject() {

	C.QDialog_virtualbase_reject(unsafe.Pointer(this.h))

}
func (this *QDialog) OnReject(slot func(super func())) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_reject(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_reject
func miqt_exec_callback_QDialog_reject(self *C.QDialog, cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func()))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc((&QDialog{h: self}).callVirtualBase_Reject)

}

func (this *QDialog) callVirtualBase_KeyPressEvent(param1 *QKeyEvent) {

	C.QDialog_virtualbase_keyPressEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QDialog) OnKeyPressEvent(slot func(super func(param1 *QKeyEvent), param1 *QKeyEvent)) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_keyPressEvent(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_keyPressEvent
func miqt_exec_callback_QDialog_keyPressEvent(self *C.QDialog, cb C.intptr_t, param1 *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QKeyEvent), param1 *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(param1)

	gofunc((&QDialog{h: self}).callVirtualBase_KeyPressEvent, slotval1)

}

func (this *QDialog) callVirtualBase_CloseEvent(param1 *QCloseEvent) {

	C.QDialog_virtualbase_closeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QDialog) OnCloseEvent(slot func(super func(param1 *QCloseEvent), param1 *QCloseEvent)) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_closeEvent(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_closeEvent
func miqt_exec_callback_QDialog_closeEvent(self *C.QDialog, cb C.intptr_t, param1 *C.QCloseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QCloseEvent), param1 *QCloseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQCloseEvent(param1)

	gofunc((&QDialog{h: self}).callVirtualBase_CloseEvent, slotval1)

}

func (this *QDialog) callVirtualBase_ShowEvent(param1 *QShowEvent) {

	C.QDialog_virtualbase_showEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QDialog) OnShowEvent(slot func(super func(param1 *QShowEvent), param1 *QShowEvent)) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_showEvent(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_showEvent
func miqt_exec_callback_QDialog_showEvent(self *C.QDialog, cb C.intptr_t, param1 *C.QShowEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QShowEvent), param1 *QShowEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQShowEvent(param1)

	gofunc((&QDialog{h: self}).callVirtualBase_ShowEvent, slotval1)

}

func (this *QDialog) callVirtualBase_ResizeEvent(param1 *QResizeEvent) {

	C.QDialog_virtualbase_resizeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QDialog) OnResizeEvent(slot func(super func(param1 *QResizeEvent), param1 *QResizeEvent)) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_resizeEvent(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_resizeEvent
func miqt_exec_callback_QDialog_resizeEvent(self *C.QDialog, cb C.intptr_t, param1 *C.QResizeEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QResizeEvent), param1 *QResizeEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQResizeEvent(param1)

	gofunc((&QDialog{h: self}).callVirtualBase_ResizeEvent, slotval1)

}

func (this *QDialog) callVirtualBase_ContextMenuEvent(param1 *QContextMenuEvent) {

	C.QDialog_virtualbase_contextMenuEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QDialog) OnContextMenuEvent(slot func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent)) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_contextMenuEvent(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_contextMenuEvent
func miqt_exec_callback_QDialog_contextMenuEvent(self *C.QDialog, cb C.intptr_t, param1 *C.QContextMenuEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QContextMenuEvent), param1 *QContextMenuEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQContextMenuEvent(param1)

	gofunc((&QDialog{h: self}).callVirtualBase_ContextMenuEvent, slotval1)

}

func (this *QDialog) callVirtualBase_EventFilter(param1 *QObject, param2 *QEvent) bool {

	return (bool)(C.QDialog_virtualbase_eventFilter(unsafe.Pointer(this.h), param1.cPointer(), param2.cPointer()))

}
func (this *QDialog) OnEventFilter(slot func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_eventFilter(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_eventFilter
func miqt_exec_callback_QDialog_eventFilter(self *C.QDialog, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQObject(param1)

	slotval2 := newQEvent(param2)

	virtualReturn := gofunc((&QDialog{h: self}).callVirtualBase_EventFilter, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QDialog) callVirtualBase_DevType() int {

	return (int)(C.QDialog_virtualbase_devType(unsafe.Pointer(this.h)))

}
func (this *QDialog) OnDevType(slot func(super func() int) int) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_devType(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_devType
func miqt_exec_callback_QDialog_devType(self *C.QDialog, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDialog{h: self}).callVirtualBase_DevType)

	return (C.int)(virtualReturn)

}

func (this *QDialog) callVirtualBase_HeightForWidth(param1 int) int {

	return (int)(C.QDialog_virtualbase_heightForWidth(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QDialog) OnHeightForWidth(slot func(super func(param1 int) int, param1 int) int) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_heightForWidth(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_heightForWidth
func miqt_exec_callback_QDialog_heightForWidth(self *C.QDialog, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 int) int, param1 int) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(param1)

	virtualReturn := gofunc((&QDialog{h: self}).callVirtualBase_HeightForWidth, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QDialog) callVirtualBase_HasHeightForWidth() bool {

	return (bool)(C.QDialog_virtualbase_hasHeightForWidth(unsafe.Pointer(this.h)))

}
func (this *QDialog) OnHasHeightForWidth(slot func(super func() bool) bool) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_hasHeightForWidth(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_hasHeightForWidth
func miqt_exec_callback_QDialog_hasHeightForWidth(self *C.QDialog, cb C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDialog{h: self}).callVirtualBase_HasHeightForWidth)

	return (C.bool)(virtualReturn)

}

func (this *QDialog) callVirtualBase_PaintEngine() *QPaintEngine {

	return newQPaintEngine(C.QDialog_virtualbase_paintEngine(unsafe.Pointer(this.h)))

}
func (this *QDialog) OnPaintEngine(slot func(super func() *QPaintEngine) *QPaintEngine) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_paintEngine(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_paintEngine
func miqt_exec_callback_QDialog_paintEngine(self *C.QDialog, cb C.intptr_t) *C.QPaintEngine {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPaintEngine) *QPaintEngine)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDialog{h: self}).callVirtualBase_PaintEngine)

	return virtualReturn.cPointer()

}

func (this *QDialog) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QDialog_virtualbase_event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QDialog) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_event(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_event
func miqt_exec_callback_QDialog_event(self *C.QDialog, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	virtualReturn := gofunc((&QDialog{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDialog) callVirtualBase_MousePressEvent(event *QMouseEvent) {

	C.QDialog_virtualbase_mousePressEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnMousePressEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_mousePressEvent(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_mousePressEvent
func miqt_exec_callback_QDialog_mousePressEvent(self *C.QDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_MousePressEvent, slotval1)

}

func (this *QDialog) callVirtualBase_MouseReleaseEvent(event *QMouseEvent) {

	C.QDialog_virtualbase_mouseReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnMouseReleaseEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_mouseReleaseEvent(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_mouseReleaseEvent
func miqt_exec_callback_QDialog_mouseReleaseEvent(self *C.QDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_MouseReleaseEvent, slotval1)

}

func (this *QDialog) callVirtualBase_MouseDoubleClickEvent(event *QMouseEvent) {

	C.QDialog_virtualbase_mouseDoubleClickEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnMouseDoubleClickEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_mouseDoubleClickEvent(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_mouseDoubleClickEvent
func miqt_exec_callback_QDialog_mouseDoubleClickEvent(self *C.QDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_MouseDoubleClickEvent, slotval1)

}

func (this *QDialog) callVirtualBase_MouseMoveEvent(event *QMouseEvent) {

	C.QDialog_virtualbase_mouseMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnMouseMoveEvent(slot func(super func(event *QMouseEvent), event *QMouseEvent)) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_mouseMoveEvent(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_mouseMoveEvent
func miqt_exec_callback_QDialog_mouseMoveEvent(self *C.QDialog, cb C.intptr_t, event *C.QMouseEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMouseEvent), event *QMouseEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMouseEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_MouseMoveEvent, slotval1)

}

func (this *QDialog) callVirtualBase_WheelEvent(event *QWheelEvent) {

	C.QDialog_virtualbase_wheelEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnWheelEvent(slot func(super func(event *QWheelEvent), event *QWheelEvent)) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_wheelEvent(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_wheelEvent
func miqt_exec_callback_QDialog_wheelEvent(self *C.QDialog, cb C.intptr_t, event *C.QWheelEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QWheelEvent), event *QWheelEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQWheelEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_WheelEvent, slotval1)

}

func (this *QDialog) callVirtualBase_KeyReleaseEvent(event *QKeyEvent) {

	C.QDialog_virtualbase_keyReleaseEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnKeyReleaseEvent(slot func(super func(event *QKeyEvent), event *QKeyEvent)) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_keyReleaseEvent(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_keyReleaseEvent
func miqt_exec_callback_QDialog_keyReleaseEvent(self *C.QDialog, cb C.intptr_t, event *C.QKeyEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QKeyEvent), event *QKeyEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQKeyEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_KeyReleaseEvent, slotval1)

}

func (this *QDialog) callVirtualBase_FocusInEvent(event *QFocusEvent) {

	C.QDialog_virtualbase_focusInEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnFocusInEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_focusInEvent(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_focusInEvent
func miqt_exec_callback_QDialog_focusInEvent(self *C.QDialog, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_FocusInEvent, slotval1)

}

func (this *QDialog) callVirtualBase_FocusOutEvent(event *QFocusEvent) {

	C.QDialog_virtualbase_focusOutEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnFocusOutEvent(slot func(super func(event *QFocusEvent), event *QFocusEvent)) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_focusOutEvent(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_focusOutEvent
func miqt_exec_callback_QDialog_focusOutEvent(self *C.QDialog, cb C.intptr_t, event *C.QFocusEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QFocusEvent), event *QFocusEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQFocusEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_FocusOutEvent, slotval1)

}

func (this *QDialog) callVirtualBase_EnterEvent(event *QEnterEvent) {

	C.QDialog_virtualbase_enterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnEnterEvent(slot func(super func(event *QEnterEvent), event *QEnterEvent)) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_enterEvent(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_enterEvent
func miqt_exec_callback_QDialog_enterEvent(self *C.QDialog, cb C.intptr_t, event *C.QEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEnterEvent), event *QEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEnterEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_EnterEvent, slotval1)

}

func (this *QDialog) callVirtualBase_LeaveEvent(event *QEvent) {

	C.QDialog_virtualbase_leaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnLeaveEvent(slot func(super func(event *QEvent), event *QEvent)) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_leaveEvent(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_leaveEvent
func miqt_exec_callback_QDialog_leaveEvent(self *C.QDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_LeaveEvent, slotval1)

}

func (this *QDialog) callVirtualBase_PaintEvent(event *QPaintEvent) {

	C.QDialog_virtualbase_paintEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnPaintEvent(slot func(super func(event *QPaintEvent), event *QPaintEvent)) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_paintEvent(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_paintEvent
func miqt_exec_callback_QDialog_paintEvent(self *C.QDialog, cb C.intptr_t, event *C.QPaintEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QPaintEvent), event *QPaintEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPaintEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_PaintEvent, slotval1)

}

func (this *QDialog) callVirtualBase_MoveEvent(event *QMoveEvent) {

	C.QDialog_virtualbase_moveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnMoveEvent(slot func(super func(event *QMoveEvent), event *QMoveEvent)) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_moveEvent(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_moveEvent
func miqt_exec_callback_QDialog_moveEvent(self *C.QDialog, cb C.intptr_t, event *C.QMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QMoveEvent), event *QMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMoveEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_MoveEvent, slotval1)

}

func (this *QDialog) callVirtualBase_TabletEvent(event *QTabletEvent) {

	C.QDialog_virtualbase_tabletEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnTabletEvent(slot func(super func(event *QTabletEvent), event *QTabletEvent)) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_tabletEvent(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_tabletEvent
func miqt_exec_callback_QDialog_tabletEvent(self *C.QDialog, cb C.intptr_t, event *C.QTabletEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTabletEvent), event *QTabletEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTabletEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_TabletEvent, slotval1)

}

func (this *QDialog) callVirtualBase_ActionEvent(event *QActionEvent) {

	C.QDialog_virtualbase_actionEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnActionEvent(slot func(super func(event *QActionEvent), event *QActionEvent)) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_actionEvent(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_actionEvent
func miqt_exec_callback_QDialog_actionEvent(self *C.QDialog, cb C.intptr_t, event *C.QActionEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QActionEvent), event *QActionEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQActionEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_ActionEvent, slotval1)

}

func (this *QDialog) callVirtualBase_DragEnterEvent(event *QDragEnterEvent) {

	C.QDialog_virtualbase_dragEnterEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnDragEnterEvent(slot func(super func(event *QDragEnterEvent), event *QDragEnterEvent)) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_dragEnterEvent(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_dragEnterEvent
func miqt_exec_callback_QDialog_dragEnterEvent(self *C.QDialog, cb C.intptr_t, event *C.QDragEnterEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragEnterEvent), event *QDragEnterEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragEnterEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_DragEnterEvent, slotval1)

}

func (this *QDialog) callVirtualBase_DragMoveEvent(event *QDragMoveEvent) {

	C.QDialog_virtualbase_dragMoveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnDragMoveEvent(slot func(super func(event *QDragMoveEvent), event *QDragMoveEvent)) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_dragMoveEvent(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_dragMoveEvent
func miqt_exec_callback_QDialog_dragMoveEvent(self *C.QDialog, cb C.intptr_t, event *C.QDragMoveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragMoveEvent), event *QDragMoveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragMoveEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_DragMoveEvent, slotval1)

}

func (this *QDialog) callVirtualBase_DragLeaveEvent(event *QDragLeaveEvent) {

	C.QDialog_virtualbase_dragLeaveEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnDragLeaveEvent(slot func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent)) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_dragLeaveEvent(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_dragLeaveEvent
func miqt_exec_callback_QDialog_dragLeaveEvent(self *C.QDialog, cb C.intptr_t, event *C.QDragLeaveEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDragLeaveEvent), event *QDragLeaveEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDragLeaveEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_DragLeaveEvent, slotval1)

}

func (this *QDialog) callVirtualBase_DropEvent(event *QDropEvent) {

	C.QDialog_virtualbase_dropEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnDropEvent(slot func(super func(event *QDropEvent), event *QDropEvent)) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_dropEvent(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_dropEvent
func miqt_exec_callback_QDialog_dropEvent(self *C.QDialog, cb C.intptr_t, event *C.QDropEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QDropEvent), event *QDropEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQDropEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_DropEvent, slotval1)

}

func (this *QDialog) callVirtualBase_HideEvent(event *QHideEvent) {

	C.QDialog_virtualbase_hideEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnHideEvent(slot func(super func(event *QHideEvent), event *QHideEvent)) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_hideEvent(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_hideEvent
func miqt_exec_callback_QDialog_hideEvent(self *C.QDialog, cb C.intptr_t, event *C.QHideEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QHideEvent), event *QHideEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQHideEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_HideEvent, slotval1)

}

func (this *QDialog) callVirtualBase_NativeEvent(eventType []byte, message unsafe.Pointer, result *uintptr) bool {
	eventType_alias := C.struct_miqt_string{}
	if len(eventType) > 0 {
		eventType_alias.data = (*C.char)(unsafe.Pointer(&eventType[0]))
	} else {
		eventType_alias.data = (*C.char)(unsafe.Pointer(nil))
	}
	eventType_alias.len = C.size_t(len(eventType))

	return (bool)(C.QDialog_virtualbase_nativeEvent(unsafe.Pointer(this.h), eventType_alias, message, (*C.intptr_t)(unsafe.Pointer(result))))

}
func (this *QDialog) OnNativeEvent(slot func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_nativeEvent(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_nativeEvent
func miqt_exec_callback_QDialog_nativeEvent(self *C.QDialog, cb C.intptr_t, eventType C.struct_miqt_string, message unsafe.Pointer, result *C.intptr_t) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(eventType []byte, message unsafe.Pointer, result *uintptr) bool, eventType []byte, message unsafe.Pointer, result *uintptr) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var eventType_bytearray C.struct_miqt_string = eventType
	eventType_ret := C.GoBytes(unsafe.Pointer(eventType_bytearray.data), C.int(int64(eventType_bytearray.len)))
	C.free(unsafe.Pointer(eventType_bytearray.data))
	slotval1 := eventType_ret
	slotval2 := (unsafe.Pointer)(message)

	slotval3 := (*uintptr)(unsafe.Pointer(result))

	virtualReturn := gofunc((&QDialog{h: self}).callVirtualBase_NativeEvent, slotval1, slotval2, slotval3)

	return (C.bool)(virtualReturn)

}

func (this *QDialog) callVirtualBase_ChangeEvent(param1 *QEvent) {

	C.QDialog_virtualbase_changeEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QDialog) OnChangeEvent(slot func(super func(param1 *QEvent), param1 *QEvent)) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_changeEvent(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_changeEvent
func miqt_exec_callback_QDialog_changeEvent(self *C.QDialog, cb C.intptr_t, param1 *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent), param1 *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(param1)

	gofunc((&QDialog{h: self}).callVirtualBase_ChangeEvent, slotval1)

}

func (this *QDialog) callVirtualBase_Metric(param1 QPaintDevice__PaintDeviceMetric) int {

	return (int)(C.QDialog_virtualbase_metric(unsafe.Pointer(this.h), (C.int)(param1)))

}
func (this *QDialog) OnMetric(slot func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_metric(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_metric
func miqt_exec_callback_QDialog_metric(self *C.QDialog, cb C.intptr_t, param1 C.int) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 QPaintDevice__PaintDeviceMetric) int, param1 QPaintDevice__PaintDeviceMetric) int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QPaintDevice__PaintDeviceMetric)(param1)

	virtualReturn := gofunc((&QDialog{h: self}).callVirtualBase_Metric, slotval1)

	return (C.int)(virtualReturn)

}

func (this *QDialog) callVirtualBase_InitPainter(painter *QPainter) {

	C.QDialog_virtualbase_initPainter(unsafe.Pointer(this.h), painter.cPointer())

}
func (this *QDialog) OnInitPainter(slot func(super func(painter *QPainter), painter *QPainter)) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_initPainter(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_initPainter
func miqt_exec_callback_QDialog_initPainter(self *C.QDialog, cb C.intptr_t, painter *C.QPainter) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(painter *QPainter), painter *QPainter))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPainter(painter)

	gofunc((&QDialog{h: self}).callVirtualBase_InitPainter, slotval1)

}

func (this *QDialog) callVirtualBase_Redirected(offset *QPoint) *QPaintDevice {

	return newQPaintDevice(C.QDialog_virtualbase_redirected(unsafe.Pointer(this.h), offset.cPointer()))

}
func (this *QDialog) OnRedirected(slot func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_redirected(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_redirected
func miqt_exec_callback_QDialog_redirected(self *C.QDialog, cb C.intptr_t, offset *C.QPoint) *C.QPaintDevice {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(offset *QPoint) *QPaintDevice, offset *QPoint) *QPaintDevice)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQPoint(offset)

	virtualReturn := gofunc((&QDialog{h: self}).callVirtualBase_Redirected, slotval1)

	return virtualReturn.cPointer()

}

func (this *QDialog) callVirtualBase_SharedPainter() *QPainter {

	return newQPainter(C.QDialog_virtualbase_sharedPainter(unsafe.Pointer(this.h)))

}
func (this *QDialog) OnSharedPainter(slot func(super func() *QPainter) *QPainter) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_sharedPainter(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_sharedPainter
func miqt_exec_callback_QDialog_sharedPainter(self *C.QDialog, cb C.intptr_t) *C.QPainter {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func() *QPainter) *QPainter)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc((&QDialog{h: self}).callVirtualBase_SharedPainter)

	return virtualReturn.cPointer()

}

func (this *QDialog) callVirtualBase_InputMethodEvent(param1 *QInputMethodEvent) {

	C.QDialog_virtualbase_inputMethodEvent(unsafe.Pointer(this.h), param1.cPointer())

}
func (this *QDialog) OnInputMethodEvent(slot func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent)) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_inputMethodEvent(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_inputMethodEvent
func miqt_exec_callback_QDialog_inputMethodEvent(self *C.QDialog, cb C.intptr_t, param1 *C.QInputMethodEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QInputMethodEvent), param1 *QInputMethodEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQInputMethodEvent(param1)

	gofunc((&QDialog{h: self}).callVirtualBase_InputMethodEvent, slotval1)

}

func (this *QDialog) callVirtualBase_InputMethodQuery(param1 InputMethodQuery) *QVariant {

	_goptr := newQVariant(C.QDialog_virtualbase_inputMethodQuery(unsafe.Pointer(this.h), (C.int)(param1)))
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr

}

type miqtVirtualCallback_QDialog_inputMethodQuery struct {
	callback   func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant
	ownsReturn bool
}

func (this *QDialog) OnInputMethodQuery(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(miqtVirtualCallback_QDialog_inputMethodQuery{callback: slot}))
	}
	ok := C.QDialog_override_virtual_inputMethodQuery(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

// OnInputMethodQueryOwned installs a virtual override that transfers
// ownership of each non-nil returned Qt value object to C++.
func (this *QDialog) OnInputMethodQueryOwned(slot func(super func(param1 InputMethodQuery) *QVariant, param1 InputMethodQuery) *QVariant) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(miqtVirtualCallback_QDialog_inputMethodQuery{callback: slot, ownsReturn: true}))
	}
	ok := C.QDialog_override_virtual_owned_inputMethodQuery(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_inputMethodQuery
func miqt_exec_callback_QDialog_inputMethodQuery(self *C.QDialog, cb C.intptr_t, param1 C.int) *C.QVariant {
	callbackData, ok := cgo.Handle(cb).Value().(miqtVirtualCallback_QDialog_inputMethodQuery)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}
	gofunc := callbackData.callback

	// Convert all CABI parameters to Go parameters
	slotval1 := (InputMethodQuery)(param1)

	virtualReturn := gofunc((&QDialog{h: self}).callVirtualBase_InputMethodQuery, slotval1)
	if callbackData.ownsReturn && virtualReturn != nil {
		runtime.SetFinalizer(virtualReturn, nil)
	}

	return virtualReturn.cPointer()

}

func (this *QDialog) callVirtualBase_FocusNextPrevChild(next bool) bool {

	return (bool)(C.QDialog_virtualbase_focusNextPrevChild(unsafe.Pointer(this.h), (C.bool)(next)))

}
func (this *QDialog) OnFocusNextPrevChild(slot func(super func(next bool) bool, next bool) bool) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_focusNextPrevChild(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_focusNextPrevChild
func miqt_exec_callback_QDialog_focusNextPrevChild(self *C.QDialog, cb C.intptr_t, next C.bool) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(next bool) bool, next bool) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(next)

	virtualReturn := gofunc((&QDialog{h: self}).callVirtualBase_FocusNextPrevChild, slotval1)

	return (C.bool)(virtualReturn)

}

func (this *QDialog) callVirtualBase_TimerEvent(event *QTimerEvent) {

	C.QDialog_virtualbase_timerEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnTimerEvent(slot func(super func(event *QTimerEvent), event *QTimerEvent)) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_timerEvent(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_timerEvent
func miqt_exec_callback_QDialog_timerEvent(self *C.QDialog, cb C.intptr_t, event *C.QTimerEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QTimerEvent), event *QTimerEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQTimerEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_TimerEvent, slotval1)

}

func (this *QDialog) callVirtualBase_ChildEvent(event *QChildEvent) {

	C.QDialog_virtualbase_childEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnChildEvent(slot func(super func(event *QChildEvent), event *QChildEvent)) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_childEvent(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_childEvent
func miqt_exec_callback_QDialog_childEvent(self *C.QDialog, cb C.intptr_t, event *C.QChildEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QChildEvent), event *QChildEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQChildEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_ChildEvent, slotval1)

}

func (this *QDialog) callVirtualBase_CustomEvent(event *QEvent) {

	C.QDialog_virtualbase_customEvent(unsafe.Pointer(this.h), event.cPointer())

}
func (this *QDialog) OnCustomEvent(slot func(super func(event *QEvent), event *QEvent)) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_customEvent(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_customEvent
func miqt_exec_callback_QDialog_customEvent(self *C.QDialog, cb C.intptr_t, event *C.QEvent) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent), event *QEvent))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQEvent(event)

	gofunc((&QDialog{h: self}).callVirtualBase_CustomEvent, slotval1)

}

func (this *QDialog) callVirtualBase_ConnectNotify(signal *QMetaMethod) {

	C.QDialog_virtualbase_connectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QDialog) OnConnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_connectNotify(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_connectNotify
func miqt_exec_callback_QDialog_connectNotify(self *C.QDialog, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QDialog{h: self}).callVirtualBase_ConnectNotify, slotval1)

}

func (this *QDialog) callVirtualBase_DisconnectNotify(signal *QMetaMethod) {

	C.QDialog_virtualbase_disconnectNotify(unsafe.Pointer(this.h), signal.cPointer())

}
func (this *QDialog) OnDisconnectNotify(slot func(super func(signal *QMetaMethod), signal *QMetaMethod)) {
	var slotHandle C.intptr_t
	if slot != nil {
		slotHandle = C.intptr_t(cgo.NewHandle(slot))
	}
	ok := C.QDialog_override_virtual_disconnectNotify(unsafe.Pointer(this.h), slotHandle)
	if !ok {
		panic("miqt: can only override virtual methods for directly constructed types")
	}
}

//export miqt_exec_callback_QDialog_disconnectNotify
func miqt_exec_callback_QDialog_disconnectNotify(self *C.QDialog, cb C.intptr_t, signal *C.QMetaMethod) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(signal *QMetaMethod), signal *QMetaMethod))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := newQMetaMethod(signal)

	gofunc((&QDialog{h: self}).callVirtualBase_DisconnectNotify, slotval1)

}

// Delete this object from C++ memory.
func (this *QDialog) Delete() {
	C.QDialog_delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDialog) GoGC() {
	runtime.SetFinalizer(this, func(this *QDialog) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
