package mainthread_test

import (
	"os"
	"runtime"
	"testing"
	"time"

	"github.com/mappu/miqt/qt"
	"github.com/mappu/miqt/qt/mainthread"
)

type mainthreadCallbackProbe struct {
	released chan struct{}
}

func trackedMainthreadCallback(body func()) (func(), <-chan struct{}) {
	released := make(chan struct{})
	probe := &mainthreadCallbackProbe{released: released}
	runtime.SetFinalizer(probe, func(probe *mainthreadCallbackProbe) {
		close(probe.released)
	})

	return func() {
		body()
		runtime.KeepAlive(probe)
	}, released
}

func waitForMainthreadCallbackRelease(t *testing.T, released <-chan struct{}) {
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
	t.Fatal("mainthread callback remained reachable after its queued functor was destroyed")
}

func TestStartReleasesCallbackOnFailureAndAfterExecution(t *testing.T) {
	// With no QCoreApplication, invokeMethod rejects the queued call. Destroying
	// that unqueued functor must still release the transferred cgo.Handle.
	failedCallRan := false
	callback, failedReleased := trackedMainthreadCallback(func() {
		failedCallRan = true
	})
	mainthread.Start(callback)
	callback = nil
	waitForMainthreadCallbackRelease(t, failedReleased)
	if failedCallRan {
		t.Fatal("callback unexpectedly ran without a QCoreApplication")
	}

	app := qt.NewQCoreApplication(os.Args)
	defer app.Delete()
	called := make(chan struct{})
	callback, executedReleased := trackedMainthreadCallback(func() {
		close(called)
	})
	mainthread.Start(callback)
	callback = nil

	deadline := time.Now().Add(5 * time.Second)
	for time.Now().Before(deadline) {
		qt.QCoreApplication_ProcessEvents()
		select {
		case <-called:
			waitForMainthreadCallbackRelease(t, executedReleased)
			return
		default:
			time.Sleep(time.Millisecond)
		}
	}
	t.Fatal("queued mainthread callback did not execute")
}
