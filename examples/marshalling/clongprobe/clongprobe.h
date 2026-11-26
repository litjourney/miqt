#ifndef CLONGPROBE_H
#define CLONGPROBE_H

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

// A C long between two guard longs, laid out the way C++ sees them.
struct clongprobe_guarded {
	long before;
	long value;
	long after;
};

bool clongprobe_native_event_filter(void* filter, struct clongprobe_guarded* g, bool null_result);

#ifdef __cplusplus
}
#endif

#endif
