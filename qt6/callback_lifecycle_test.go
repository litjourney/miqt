package qt6

import (
	"runtime"
	"testing"
	"time"
)

type callbackLifetimeProbe struct {
	calls    *int
	released chan struct{}
}

func lockCallbackTestThread(t *testing.T) {
	t.Helper()
	runtime.LockOSThread()
	t.Cleanup(runtime.UnlockOSThread)
}

func newStringCallbackProbe() (func(string), *int, <-chan struct{}) {
	calls := new(int)
	released := make(chan struct{})
	probe := &callbackLifetimeProbe{calls: calls, released: released}
	runtime.SetFinalizer(probe, func(probe *callbackLifetimeProbe) {
		close(probe.released)
	})

	return func(string) {
		(*probe.calls)++
		runtime.KeepAlive(probe)
	}, calls, released
}

func newEventCallbackProbe() (func(func(*QEvent) bool, *QEvent) bool, <-chan struct{}) {
	released := make(chan struct{})
	probe := &callbackLifetimeProbe{released: released}
	runtime.SetFinalizer(probe, func(probe *callbackLifetimeProbe) {
		close(probe.released)
	})

	return func(super func(*QEvent) bool, event *QEvent) bool {
		runtime.KeepAlive(probe)
		return super(event)
	}, released
}

func waitForCallbackRelease(t *testing.T, released <-chan struct{}) {
	t.Helper()
	deadline := time.Now().Add(5 * time.Second)
	for time.Now().Before(deadline) {
		runtime.GC()
		runtime.Gosched()
		select {
		case <-released:
			return
		case <-time.After(10 * time.Millisecond):
		}
	}
	t.Fatal("callback remained reachable after its C++ owner was destroyed")
}

func TestSignalCallbackReleasedOnObjectDestruction(t *testing.T) {
	lockCallbackTestThread(t)
	object := NewQObject()
	callback, calls, released := newStringCallbackProbe()
	object.OnObjectNameChanged(callback)
	callback = nil
	// Collect the ignored SignalConnection wrapper. Its finalizer may delete the
	// token, but must not disconnect the underlying Qt connection.
	runtime.GC()
	runtime.GC()
	select {
	case <-released:
		t.Fatal("callback was released while its Qt signal connection was active")
	default:
	}

	object.SetObjectName("connected")
	if *calls != 1 {
		t.Fatalf("connected callback ran %d times, want 1", *calls)
	}

	object.Delete()
	object = nil
	waitForCallbackRelease(t, released)
}

func TestSignalCallbackReleasedOnDisconnect(t *testing.T) {
	lockCallbackTestThread(t)
	object := NewQObject()
	defer object.Delete()
	callback, calls, released := newStringCallbackProbe()
	connection := object.OnObjectNameChanged(callback)
	callback = nil

	object.SetObjectName("connected")
	if *calls != 1 {
		t.Fatalf("connected callback ran %d times, want 1", *calls)
	}
	if !connection.Disconnect() {
		t.Fatal("first Disconnect reported failure")
	}
	if connection.Disconnect() {
		t.Fatal("second Disconnect unexpectedly reported success")
	}
	object.SetObjectName("disconnected")
	if *calls != 1 {
		t.Fatalf("callback ran after Disconnect; got %d calls, want 1", *calls)
	}

	waitForCallbackRelease(t, released)
	runtime.KeepAlive(object)
	runtime.KeepAlive(connection)
}

func TestSignalConnectionTokenDeletionDoesNotDisconnect(t *testing.T) {
	lockCallbackTestThread(t)
	object := NewQObject()
	callback, calls, released := newStringCallbackProbe()
	connection := object.OnObjectNameChanged(callback)
	callback = nil

	// A QMetaObject::Connection is only a token. Deleting this heap wrapper must
	// not disconnect the underlying signal-slot connection.
	runtime.SetFinalizer(connection, nil)
	connection.Delete()
	connection.h = nil
	object.SetObjectName("connected")
	if *calls != 1 {
		t.Fatalf("deleting the connection token disconnected the callback; got %d calls", *calls)
	}

	object.Delete()
	waitForCallbackRelease(t, released)
}

func TestVirtualCallbackReleasedOnReplaceResetAndDestruction(t *testing.T) {
	lockCallbackTestThread(t)
	object := NewQObject()
	first, firstReleased := newEventCallbackProbe()
	object.OnEvent(first)
	first = nil

	second, secondReleased := newEventCallbackProbe()
	object.OnEvent(second)
	second = nil
	waitForCallbackRelease(t, firstReleased)
	runtime.KeepAlive(object)

	object.OnEvent(nil)
	waitForCallbackRelease(t, secondReleased)
	runtime.KeepAlive(object)
	object.Delete()

	object = NewQObject()
	third, thirdReleased := newEventCallbackProbe()
	object.OnEvent(third)
	third = nil
	object.Delete()
	object = nil
	waitForCallbackRelease(t, thirdReleased)
}

func TestVirtualCallbackReleasedWhenOverrideTargetIsInvalid(t *testing.T) {
	lockCallbackTestThread(t)
	timer := NewQTimer()
	defer timer.Delete()
	callback, released := newEventCallbackProbe()

	didPanic := false
	func() {
		defer func() {
			didPanic = recover() != nil
		}()
		timer.QObject.OnEvent(callback)
	}()
	callback = nil
	if !didPanic {
		t.Fatal("invalid inherited virtual override did not panic")
	}

	waitForCallbackRelease(t, released)
	runtime.KeepAlive(timer)
}

func TestVirtualCallbackReleasedWhenQtParentDeletesChild(t *testing.T) {
	lockCallbackTestThread(t)
	parent := NewQObject()
	timer := NewQTimer2(parent)
	callback, released := newEventCallbackProbe()
	timer.OnEvent(callback)
	callback = nil

	parent.Delete()
	parent = nil
	timer = nil
	waitForCallbackRelease(t, released)
}
