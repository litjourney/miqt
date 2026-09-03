#include <memory>
#include <utility>
#include <QBoxPlotLegendMarker>
#include <QBoxPlotSeries>
#include <QChildEvent>
#include <QEvent>
#include <QLegend>
#include <QLegendMarker>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qboxplotlegendmarker.h>
#include "gen_qboxplotlegendmarker.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QBoxPlotLegendMarker(intptr_t);
int miqt_exec_callback_QBoxPlotLegendMarker_type(QBoxPlotLegendMarker*, intptr_t);
QBoxPlotSeries* miqt_exec_callback_QBoxPlotLegendMarker_series(QBoxPlotLegendMarker*, intptr_t);
bool miqt_exec_callback_QBoxPlotLegendMarker_event(QBoxPlotLegendMarker*, intptr_t, QEvent*);
bool miqt_exec_callback_QBoxPlotLegendMarker_eventFilter(QBoxPlotLegendMarker*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QBoxPlotLegendMarker_timerEvent(QBoxPlotLegendMarker*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QBoxPlotLegendMarker_childEvent(QBoxPlotLegendMarker*, intptr_t, QChildEvent*);
void miqt_exec_callback_QBoxPlotLegendMarker_customEvent(QBoxPlotLegendMarker*, intptr_t, QEvent*);
void miqt_exec_callback_QBoxPlotLegendMarker_connectNotify(QBoxPlotLegendMarker*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QBoxPlotLegendMarker_disconnectNotify(QBoxPlotLegendMarker*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQBoxPlotLegendMarker final : public QBoxPlotLegendMarker {
public:

	MiqtVirtualQBoxPlotLegendMarker(QBoxPlotSeries* series, QLegend* legend): QBoxPlotLegendMarker(series, legend) {}
	MiqtVirtualQBoxPlotLegendMarker(QBoxPlotSeries* series, QLegend* legend, QObject* parent): QBoxPlotLegendMarker(series, legend, parent) {}

	virtual ~MiqtVirtualQBoxPlotLegendMarker() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBoxPlotLegendMarker> handle__type;

	// Subclass to allow providing a Go implementation
	virtual QLegendMarker::LegendMarkerType type() override {
		if (!handle__type) {
			return QBoxPlotLegendMarker::type();
		}

		int callback_return_value = miqt_exec_callback_QBoxPlotLegendMarker_type(this, handle__type.value());
		return static_cast<QLegendMarker::LegendMarkerType>(callback_return_value);
	}

	friend int QBoxPlotLegendMarker_virtualbase_type(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBoxPlotLegendMarker> handle__series;

	// Subclass to allow providing a Go implementation
	virtual QBoxPlotSeries* series() override {
		if (!handle__series) {
			return QBoxPlotLegendMarker::series();
		}

		QBoxPlotSeries* callback_return_value = miqt_exec_callback_QBoxPlotLegendMarker_series(this, handle__series.value());
		return callback_return_value;
	}

	friend QBoxPlotSeries* QBoxPlotLegendMarker_virtualbase_series(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBoxPlotLegendMarker> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QBoxPlotLegendMarker::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QBoxPlotLegendMarker_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QBoxPlotLegendMarker_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBoxPlotLegendMarker> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QBoxPlotLegendMarker::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QBoxPlotLegendMarker_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QBoxPlotLegendMarker_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBoxPlotLegendMarker> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QBoxPlotLegendMarker::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QBoxPlotLegendMarker_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QBoxPlotLegendMarker_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBoxPlotLegendMarker> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QBoxPlotLegendMarker::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QBoxPlotLegendMarker_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QBoxPlotLegendMarker_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBoxPlotLegendMarker> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QBoxPlotLegendMarker::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QBoxPlotLegendMarker_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QBoxPlotLegendMarker_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBoxPlotLegendMarker> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QBoxPlotLegendMarker::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QBoxPlotLegendMarker_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QBoxPlotLegendMarker_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBoxPlotLegendMarker> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QBoxPlotLegendMarker::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QBoxPlotLegendMarker_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QBoxPlotLegendMarker_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QBoxPlotLegendMarker_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QBoxPlotLegendMarker_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QBoxPlotLegendMarker_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QBoxPlotLegendMarker_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QBoxPlotLegendMarker* QBoxPlotLegendMarker_new(QBoxPlotSeries* series, QLegend* legend) {
	return new (std::nothrow) MiqtVirtualQBoxPlotLegendMarker(series, legend);
}

QBoxPlotLegendMarker* QBoxPlotLegendMarker_new2(QBoxPlotSeries* series, QLegend* legend, QObject* parent) {
	return new (std::nothrow) MiqtVirtualQBoxPlotLegendMarker(series, legend, parent);
}

void QBoxPlotLegendMarker_virtbase(QBoxPlotLegendMarker* src, QLegendMarker** outptr_QLegendMarker) {
	*outptr_QLegendMarker = static_cast<QLegendMarker*>(src);
}

QMetaObject* QBoxPlotLegendMarker_metaObject(const QBoxPlotLegendMarker* self) {
	return (QMetaObject*) self->metaObject();
}

void* QBoxPlotLegendMarker_metacast(QBoxPlotLegendMarker* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QBoxPlotLegendMarker_tr(const char* s) {
	QString _ret = QBoxPlotLegendMarker::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QBoxPlotLegendMarker_type(QBoxPlotLegendMarker* self) {
	QLegendMarker::LegendMarkerType _ret = self->type();
	return static_cast<int>(_ret);
}

QBoxPlotSeries* QBoxPlotLegendMarker_series(QBoxPlotLegendMarker* self) {
	return self->series();
}

struct miqt_string QBoxPlotLegendMarker_tr2(const char* s, const char* c) {
	QString _ret = QBoxPlotLegendMarker::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QBoxPlotLegendMarker_tr3(const char* s, const char* c, int n) {
	QString _ret = QBoxPlotLegendMarker::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QBoxPlotLegendMarker_override_virtual_type(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBoxPlotLegendMarker> slot_handle(slot);
	MiqtVirtualQBoxPlotLegendMarker* self_cast = dynamic_cast<MiqtVirtualQBoxPlotLegendMarker*>( (QBoxPlotLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__type = std::move(slot_handle);
	return true;
}

int QBoxPlotLegendMarker_virtualbase_type(void* self) {
	MiqtVirtualQBoxPlotLegendMarker::LegendMarkerType _ret = static_cast<MiqtVirtualQBoxPlotLegendMarker*>(self)->QBoxPlotLegendMarker::type();
	return static_cast<int>(_ret);
}

bool QBoxPlotLegendMarker_override_virtual_series(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBoxPlotLegendMarker> slot_handle(slot);
	MiqtVirtualQBoxPlotLegendMarker* self_cast = dynamic_cast<MiqtVirtualQBoxPlotLegendMarker*>( (QBoxPlotLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__series = std::move(slot_handle);
	return true;
}

QBoxPlotSeries* QBoxPlotLegendMarker_virtualbase_series(void* self) {
	return static_cast<MiqtVirtualQBoxPlotLegendMarker*>(self)->QBoxPlotLegendMarker::series();
}

bool QBoxPlotLegendMarker_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBoxPlotLegendMarker> slot_handle(slot);
	MiqtVirtualQBoxPlotLegendMarker* self_cast = dynamic_cast<MiqtVirtualQBoxPlotLegendMarker*>( (QBoxPlotLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QBoxPlotLegendMarker_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQBoxPlotLegendMarker*>(self)->QBoxPlotLegendMarker::event(event);
}

bool QBoxPlotLegendMarker_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBoxPlotLegendMarker> slot_handle(slot);
	MiqtVirtualQBoxPlotLegendMarker* self_cast = dynamic_cast<MiqtVirtualQBoxPlotLegendMarker*>( (QBoxPlotLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QBoxPlotLegendMarker_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQBoxPlotLegendMarker*>(self)->QBoxPlotLegendMarker::eventFilter(watched, event);
}

bool QBoxPlotLegendMarker_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBoxPlotLegendMarker> slot_handle(slot);
	MiqtVirtualQBoxPlotLegendMarker* self_cast = dynamic_cast<MiqtVirtualQBoxPlotLegendMarker*>( (QBoxPlotLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QBoxPlotLegendMarker_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQBoxPlotLegendMarker*>(self)->QBoxPlotLegendMarker::timerEvent(event);
}

bool QBoxPlotLegendMarker_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBoxPlotLegendMarker> slot_handle(slot);
	MiqtVirtualQBoxPlotLegendMarker* self_cast = dynamic_cast<MiqtVirtualQBoxPlotLegendMarker*>( (QBoxPlotLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QBoxPlotLegendMarker_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQBoxPlotLegendMarker*>(self)->QBoxPlotLegendMarker::childEvent(event);
}

bool QBoxPlotLegendMarker_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBoxPlotLegendMarker> slot_handle(slot);
	MiqtVirtualQBoxPlotLegendMarker* self_cast = dynamic_cast<MiqtVirtualQBoxPlotLegendMarker*>( (QBoxPlotLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QBoxPlotLegendMarker_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQBoxPlotLegendMarker*>(self)->QBoxPlotLegendMarker::customEvent(event);
}

bool QBoxPlotLegendMarker_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBoxPlotLegendMarker> slot_handle(slot);
	MiqtVirtualQBoxPlotLegendMarker* self_cast = dynamic_cast<MiqtVirtualQBoxPlotLegendMarker*>( (QBoxPlotLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QBoxPlotLegendMarker_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQBoxPlotLegendMarker*>(self)->QBoxPlotLegendMarker::connectNotify(*signal);
}

bool QBoxPlotLegendMarker_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBoxPlotLegendMarker> slot_handle(slot);
	MiqtVirtualQBoxPlotLegendMarker* self_cast = dynamic_cast<MiqtVirtualQBoxPlotLegendMarker*>( (QBoxPlotLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QBoxPlotLegendMarker_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQBoxPlotLegendMarker*>(self)->QBoxPlotLegendMarker::disconnectNotify(*signal);
}

QObject* QBoxPlotLegendMarker_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQBoxPlotLegendMarker* self_cast = dynamic_cast<MiqtVirtualQBoxPlotLegendMarker*>( (QBoxPlotLegendMarker*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QBoxPlotLegendMarker_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQBoxPlotLegendMarker* self_cast = dynamic_cast<MiqtVirtualQBoxPlotLegendMarker*>( (QBoxPlotLegendMarker*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QBoxPlotLegendMarker_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQBoxPlotLegendMarker* self_cast = dynamic_cast<MiqtVirtualQBoxPlotLegendMarker*>( (QBoxPlotLegendMarker*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QBoxPlotLegendMarker_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQBoxPlotLegendMarker* self_cast = dynamic_cast<MiqtVirtualQBoxPlotLegendMarker*>( (QBoxPlotLegendMarker*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QBoxPlotLegendMarker_delete(QBoxPlotLegendMarker* self) {
	delete self;
}

