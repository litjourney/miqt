#include <QAbstractNativeEventFilter>
#include <QByteArray>

#include "clongprobe.h"

bool clongprobe_native_event_filter(void* filter, struct clongprobe_guarded* g, bool null_result) {
	// Own the long on the C++ stack, as Qt's own window procedures do.
	clongprobe_guarded local = *g;
	bool handled = static_cast<QAbstractNativeEventFilter*>(filter)->nativeEventFilter(
		QByteArray("clongprobe"), nullptr, null_result ? nullptr : &local.value);
	*g = local;
	return handled;
}
