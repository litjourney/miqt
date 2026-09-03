//go:build miqt_callback_stress

package qt

import (
	"runtime"
	"sync/atomic"
	"testing"
	"time"
)

const callbackHandleStressIterations = 1000

type callbackHandleStressProbe struct {
	released *int64
}

func newStressStringCallback(released, calls *int64) func(string) {
	probe := &callbackHandleStressProbe{released: released}
	runtime.SetFinalizer(probe, func(probe *callbackHandleStressProbe) {
		atomic.AddInt64(probe.released, 1)
	})

	return func(string) {
		atomic.AddInt64(calls, 1)
		runtime.KeepAlive(probe)
	}
}

func newStressEventCallback(released *int64) func(func(*QEvent) bool, *QEvent) bool {
	probe := &callbackHandleStressProbe{released: released}
	runtime.SetFinalizer(probe, func(probe *callbackHandleStressProbe) {
		atomic.AddInt64(probe.released, 1)
	})

	return func(super func(*QEvent) bool, event *QEvent) bool {
		runtime.KeepAlive(probe)
		return super(event)
	}
}

func stressSignalObjectDestruction(released, calls *int64) {
	object := NewQObject()
	connection := object.OnObjectNameChanged(newStressStringCallback(released, calls))
	object.SetObjectName("connected")
	object.Delete()
	runtime.SetFinalizer(connection, nil)
	connection.Delete()
	connection.h = nil
}

func stressSignalDisconnect(t *testing.T, released, calls *int64) {
	object := NewQObject()
	connection := object.OnObjectNameChanged(newStressStringCallback(released, calls))
	object.SetObjectName("connected")
	if !connection.Disconnect() {
		t.Fatal("stress callback connection did not disconnect")
	}
	object.SetObjectName("disconnected")
	object.Delete()
	runtime.SetFinalizer(connection, nil)
	connection.Delete()
	connection.h = nil
}

func waitForStressCallbackReleases(t *testing.T, released *int64, want int64) {
	t.Helper()
	deadline := time.Now().Add(20 * time.Second)
	for time.Now().Before(deadline) {
		runtime.GC()
		runtime.Gosched()
		if got := atomic.LoadInt64(released); got == want {
			return
		}
		time.Sleep(10 * time.Millisecond)
	}

	t.Fatalf("released %d of %d callback handles", atomic.LoadInt64(released), want)
}

func TestCallbackHandleStress(t *testing.T) {
	lockCallbackTestThread(t)

	var destructionReleased int64
	var destructionCalls int64
	var disconnectReleased int64
	var disconnectCalls int64
	for i := 0; i < callbackHandleStressIterations; i++ {
		stressSignalObjectDestruction(&destructionReleased, &destructionCalls)
		stressSignalDisconnect(t, &disconnectReleased, &disconnectCalls)
	}

	var virtualReleased int64
	object := NewQObject()
	for i := 0; i < callbackHandleStressIterations; i++ {
		object.OnEvent(newStressEventCallback(&virtualReleased))
	}
	object.OnEvent(nil)
	object.Delete()

	want := int64(callbackHandleStressIterations)
	if got := atomic.LoadInt64(&destructionCalls); got != want {
		t.Fatalf("object-destruction callbacks ran %d times, want %d", got, want)
	}
	if got := atomic.LoadInt64(&disconnectCalls); got != want {
		t.Fatalf("disconnect callbacks ran %d times, want %d", got, want)
	}

	waitForStressCallbackReleases(t, &destructionReleased, want)
	waitForStressCallbackReleases(t, &disconnectReleased, want)
	waitForStressCallbackReleases(t, &virtualReleased, want)
}
