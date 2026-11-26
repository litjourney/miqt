// Package clongprobe calls Qt virtual methods from C++ with a C long that C++
// owns, so the marshalling tests can check what crosses the boundary. C long
// is 4 bytes on Windows and on 32-bit platforms, while Go sees *int64.
package clongprobe

/*
#cgo CXXFLAGS: -std=c++11
#cgo CFLAGS: -std=gnu11
#cgo pkg-config: Qt5Core
#include "clongprobe.h"
*/
import "C"

import "unsafe"

// Guarded is a C long between two guard longs. The values must fit in 32 bits.
type Guarded struct {
	Before, Value, After int64
}

// NativeEventFilter calls filter->nativeEventFilter() from C++, passing a
// pointer to g.Value as a C long on the C++ stack between the two guards, or a
// null pointer with nullResult. It returns the filter's result and the three
// longs as C++ sees them afterwards.
func NativeEventFilter(filter unsafe.Pointer, g Guarded, nullResult bool) (bool, Guarded) {
	cg := C.struct_clongprobe_guarded{
		before: C.long(g.Before),
		value:  C.long(g.Value),
		after:  C.long(g.After),
	}
	handled := C.clongprobe_native_event_filter(filter, &cg, C.bool(nullResult))
	return bool(handled), Guarded{Before: int64(cg.before), Value: int64(cg.value), After: int64(cg.after)}
}
