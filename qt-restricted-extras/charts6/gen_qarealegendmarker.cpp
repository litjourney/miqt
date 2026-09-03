#include <memory>
#include <utility>
#include <QAreaLegendMarker>
#include <QAreaSeries>
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
#include <qarealegendmarker.h>
#include "gen_qarealegendmarker.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QAreaLegendMarker(intptr_t);
int miqt_exec_callback_QAreaLegendMarker_type(QAreaLegendMarker*, intptr_t);
QAreaSeries* miqt_exec_callback_QAreaLegendMarker_series(QAreaLegendMarker*, intptr_t);
bool miqt_exec_callback_QAreaLegendMarker_event(QAreaLegendMarker*, intptr_t, QEvent*);
bool miqt_exec_callback_QAreaLegendMarker_eventFilter(QAreaLegendMarker*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAreaLegendMarker_timerEvent(QAreaLegendMarker*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAreaLegendMarker_childEvent(QAreaLegendMarker*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAreaLegendMarker_customEvent(QAreaLegendMarker*, intptr_t, QEvent*);
void miqt_exec_callback_QAreaLegendMarker_connectNotify(QAreaLegendMarker*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAreaLegendMarker_disconnectNotify(QAreaLegendMarker*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAreaLegendMarker final : public QAreaLegendMarker {
public:

	MiqtVirtualQAreaLegendMarker(QAreaSeries* series, QLegend* legend): QAreaLegendMarker(series, legend) {}
	MiqtVirtualQAreaLegendMarker(QAreaSeries* series, QLegend* legend, QObject* parent): QAreaLegendMarker(series, legend, parent) {}

	virtual ~MiqtVirtualQAreaLegendMarker() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAreaLegendMarker> handle__type;

	// Subclass to allow providing a Go implementation
	virtual QLegendMarker::LegendMarkerType type() override {
		if (!handle__type) {
			return QAreaLegendMarker::type();
		}

		int callback_return_value = miqt_exec_callback_QAreaLegendMarker_type(this, handle__type.value());
		return static_cast<QLegendMarker::LegendMarkerType>(callback_return_value);
	}

	friend int QAreaLegendMarker_virtualbase_type(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAreaLegendMarker> handle__series;

	// Subclass to allow providing a Go implementation
	virtual QAreaSeries* series() override {
		if (!handle__series) {
			return QAreaLegendMarker::series();
		}

		QAreaSeries* callback_return_value = miqt_exec_callback_QAreaLegendMarker_series(this, handle__series.value());
		return callback_return_value;
	}

	friend QAreaSeries* QAreaLegendMarker_virtualbase_series(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAreaLegendMarker> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QAreaLegendMarker::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QAreaLegendMarker_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QAreaLegendMarker_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAreaLegendMarker> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QAreaLegendMarker::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QAreaLegendMarker_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QAreaLegendMarker_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAreaLegendMarker> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QAreaLegendMarker::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QAreaLegendMarker_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QAreaLegendMarker_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAreaLegendMarker> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QAreaLegendMarker::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QAreaLegendMarker_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QAreaLegendMarker_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAreaLegendMarker> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QAreaLegendMarker::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QAreaLegendMarker_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QAreaLegendMarker_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAreaLegendMarker> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QAreaLegendMarker::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QAreaLegendMarker_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QAreaLegendMarker_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAreaLegendMarker> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QAreaLegendMarker::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QAreaLegendMarker_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QAreaLegendMarker_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QAreaLegendMarker_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAreaLegendMarker_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAreaLegendMarker_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAreaLegendMarker_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QAreaLegendMarker* QAreaLegendMarker_new(QAreaSeries* series, QLegend* legend) {
	return new (std::nothrow) MiqtVirtualQAreaLegendMarker(series, legend);
}

QAreaLegendMarker* QAreaLegendMarker_new2(QAreaSeries* series, QLegend* legend, QObject* parent) {
	return new (std::nothrow) MiqtVirtualQAreaLegendMarker(series, legend, parent);
}

void QAreaLegendMarker_virtbase(QAreaLegendMarker* src, QLegendMarker** outptr_QLegendMarker) {
	*outptr_QLegendMarker = static_cast<QLegendMarker*>(src);
}

QMetaObject* QAreaLegendMarker_metaObject(const QAreaLegendMarker* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAreaLegendMarker_metacast(QAreaLegendMarker* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAreaLegendMarker_tr(const char* s) {
	QString _ret = QAreaLegendMarker::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QAreaLegendMarker_type(QAreaLegendMarker* self) {
	QLegendMarker::LegendMarkerType _ret = self->type();
	return static_cast<int>(_ret);
}

QAreaSeries* QAreaLegendMarker_series(QAreaLegendMarker* self) {
	return self->series();
}

struct miqt_string QAreaLegendMarker_tr2(const char* s, const char* c) {
	QString _ret = QAreaLegendMarker::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAreaLegendMarker_tr3(const char* s, const char* c, int n) {
	QString _ret = QAreaLegendMarker::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAreaLegendMarker_override_virtual_type(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAreaLegendMarker> slot_handle(slot);
	MiqtVirtualQAreaLegendMarker* self_cast = dynamic_cast<MiqtVirtualQAreaLegendMarker*>( (QAreaLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__type = std::move(slot_handle);
	return true;
}

int QAreaLegendMarker_virtualbase_type(void* self) {
	MiqtVirtualQAreaLegendMarker::LegendMarkerType _ret = static_cast<MiqtVirtualQAreaLegendMarker*>(self)->QAreaLegendMarker::type();
	return static_cast<int>(_ret);
}

bool QAreaLegendMarker_override_virtual_series(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAreaLegendMarker> slot_handle(slot);
	MiqtVirtualQAreaLegendMarker* self_cast = dynamic_cast<MiqtVirtualQAreaLegendMarker*>( (QAreaLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__series = std::move(slot_handle);
	return true;
}

QAreaSeries* QAreaLegendMarker_virtualbase_series(void* self) {
	return static_cast<MiqtVirtualQAreaLegendMarker*>(self)->QAreaLegendMarker::series();
}

bool QAreaLegendMarker_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAreaLegendMarker> slot_handle(slot);
	MiqtVirtualQAreaLegendMarker* self_cast = dynamic_cast<MiqtVirtualQAreaLegendMarker*>( (QAreaLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QAreaLegendMarker_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQAreaLegendMarker*>(self)->QAreaLegendMarker::event(event);
}

bool QAreaLegendMarker_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAreaLegendMarker> slot_handle(slot);
	MiqtVirtualQAreaLegendMarker* self_cast = dynamic_cast<MiqtVirtualQAreaLegendMarker*>( (QAreaLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QAreaLegendMarker_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQAreaLegendMarker*>(self)->QAreaLegendMarker::eventFilter(watched, event);
}

bool QAreaLegendMarker_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAreaLegendMarker> slot_handle(slot);
	MiqtVirtualQAreaLegendMarker* self_cast = dynamic_cast<MiqtVirtualQAreaLegendMarker*>( (QAreaLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QAreaLegendMarker_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQAreaLegendMarker*>(self)->QAreaLegendMarker::timerEvent(event);
}

bool QAreaLegendMarker_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAreaLegendMarker> slot_handle(slot);
	MiqtVirtualQAreaLegendMarker* self_cast = dynamic_cast<MiqtVirtualQAreaLegendMarker*>( (QAreaLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QAreaLegendMarker_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQAreaLegendMarker*>(self)->QAreaLegendMarker::childEvent(event);
}

bool QAreaLegendMarker_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAreaLegendMarker> slot_handle(slot);
	MiqtVirtualQAreaLegendMarker* self_cast = dynamic_cast<MiqtVirtualQAreaLegendMarker*>( (QAreaLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QAreaLegendMarker_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQAreaLegendMarker*>(self)->QAreaLegendMarker::customEvent(event);
}

bool QAreaLegendMarker_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAreaLegendMarker> slot_handle(slot);
	MiqtVirtualQAreaLegendMarker* self_cast = dynamic_cast<MiqtVirtualQAreaLegendMarker*>( (QAreaLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QAreaLegendMarker_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQAreaLegendMarker*>(self)->QAreaLegendMarker::connectNotify(*signal);
}

bool QAreaLegendMarker_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAreaLegendMarker> slot_handle(slot);
	MiqtVirtualQAreaLegendMarker* self_cast = dynamic_cast<MiqtVirtualQAreaLegendMarker*>( (QAreaLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QAreaLegendMarker_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQAreaLegendMarker*>(self)->QAreaLegendMarker::disconnectNotify(*signal);
}

QObject* QAreaLegendMarker_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAreaLegendMarker* self_cast = dynamic_cast<MiqtVirtualQAreaLegendMarker*>( (QAreaLegendMarker*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QAreaLegendMarker_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAreaLegendMarker* self_cast = dynamic_cast<MiqtVirtualQAreaLegendMarker*>( (QAreaLegendMarker*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QAreaLegendMarker_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAreaLegendMarker* self_cast = dynamic_cast<MiqtVirtualQAreaLegendMarker*>( (QAreaLegendMarker*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QAreaLegendMarker_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAreaLegendMarker* self_cast = dynamic_cast<MiqtVirtualQAreaLegendMarker*>( (QAreaLegendMarker*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QAreaLegendMarker_delete(QAreaLegendMarker* self) {
	delete self;
}

