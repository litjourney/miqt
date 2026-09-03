#include <memory>
#include <utility>
#include <QCandlestickLegendMarker>
#include <QCandlestickSeries>
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
#include <qcandlesticklegendmarker.h>
#include "gen_qcandlesticklegendmarker.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QCandlestickLegendMarker(intptr_t);
int miqt_exec_callback_QCandlestickLegendMarker_type(QCandlestickLegendMarker*, intptr_t);
QCandlestickSeries* miqt_exec_callback_QCandlestickLegendMarker_series(QCandlestickLegendMarker*, intptr_t);
bool miqt_exec_callback_QCandlestickLegendMarker_event(QCandlestickLegendMarker*, intptr_t, QEvent*);
bool miqt_exec_callback_QCandlestickLegendMarker_eventFilter(QCandlestickLegendMarker*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QCandlestickLegendMarker_timerEvent(QCandlestickLegendMarker*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QCandlestickLegendMarker_childEvent(QCandlestickLegendMarker*, intptr_t, QChildEvent*);
void miqt_exec_callback_QCandlestickLegendMarker_customEvent(QCandlestickLegendMarker*, intptr_t, QEvent*);
void miqt_exec_callback_QCandlestickLegendMarker_connectNotify(QCandlestickLegendMarker*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QCandlestickLegendMarker_disconnectNotify(QCandlestickLegendMarker*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQCandlestickLegendMarker final : public QCandlestickLegendMarker {
public:

	MiqtVirtualQCandlestickLegendMarker(QCandlestickSeries* series, QLegend* legend): QCandlestickLegendMarker(series, legend) {}
	MiqtVirtualQCandlestickLegendMarker(QCandlestickSeries* series, QLegend* legend, QObject* parent): QCandlestickLegendMarker(series, legend, parent) {}

	virtual ~MiqtVirtualQCandlestickLegendMarker() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCandlestickLegendMarker> handle__type;

	// Subclass to allow providing a Go implementation
	virtual QLegendMarker::LegendMarkerType type() override {
		if (!handle__type) {
			return QCandlestickLegendMarker::type();
		}

		int callback_return_value = miqt_exec_callback_QCandlestickLegendMarker_type(this, handle__type.value());
		return static_cast<QLegendMarker::LegendMarkerType>(callback_return_value);
	}

	friend int QCandlestickLegendMarker_virtualbase_type(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCandlestickLegendMarker> handle__series;

	// Subclass to allow providing a Go implementation
	virtual QCandlestickSeries* series() override {
		if (!handle__series) {
			return QCandlestickLegendMarker::series();
		}

		QCandlestickSeries* callback_return_value = miqt_exec_callback_QCandlestickLegendMarker_series(this, handle__series.value());
		return callback_return_value;
	}

	friend QCandlestickSeries* QCandlestickLegendMarker_virtualbase_series(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCandlestickLegendMarker> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QCandlestickLegendMarker::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QCandlestickLegendMarker_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QCandlestickLegendMarker_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCandlestickLegendMarker> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QCandlestickLegendMarker::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QCandlestickLegendMarker_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QCandlestickLegendMarker_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCandlestickLegendMarker> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QCandlestickLegendMarker::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QCandlestickLegendMarker_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QCandlestickLegendMarker_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCandlestickLegendMarker> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QCandlestickLegendMarker::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QCandlestickLegendMarker_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QCandlestickLegendMarker_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCandlestickLegendMarker> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QCandlestickLegendMarker::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QCandlestickLegendMarker_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QCandlestickLegendMarker_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCandlestickLegendMarker> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QCandlestickLegendMarker::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QCandlestickLegendMarker_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QCandlestickLegendMarker_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCandlestickLegendMarker> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QCandlestickLegendMarker::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QCandlestickLegendMarker_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QCandlestickLegendMarker_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QCandlestickLegendMarker_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QCandlestickLegendMarker_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QCandlestickLegendMarker_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QCandlestickLegendMarker_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QCandlestickLegendMarker* QCandlestickLegendMarker_new(QCandlestickSeries* series, QLegend* legend) {
	return new (std::nothrow) MiqtVirtualQCandlestickLegendMarker(series, legend);
}

QCandlestickLegendMarker* QCandlestickLegendMarker_new2(QCandlestickSeries* series, QLegend* legend, QObject* parent) {
	return new (std::nothrow) MiqtVirtualQCandlestickLegendMarker(series, legend, parent);
}

void QCandlestickLegendMarker_virtbase(QCandlestickLegendMarker* src, QLegendMarker** outptr_QLegendMarker) {
	*outptr_QLegendMarker = static_cast<QLegendMarker*>(src);
}

QMetaObject* QCandlestickLegendMarker_metaObject(const QCandlestickLegendMarker* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCandlestickLegendMarker_metacast(QCandlestickLegendMarker* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCandlestickLegendMarker_tr(const char* s) {
	QString _ret = QCandlestickLegendMarker::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QCandlestickLegendMarker_type(QCandlestickLegendMarker* self) {
	QLegendMarker::LegendMarkerType _ret = self->type();
	return static_cast<int>(_ret);
}

QCandlestickSeries* QCandlestickLegendMarker_series(QCandlestickLegendMarker* self) {
	return self->series();
}

struct miqt_string QCandlestickLegendMarker_tr2(const char* s, const char* c) {
	QString _ret = QCandlestickLegendMarker::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCandlestickLegendMarker_tr3(const char* s, const char* c, int n) {
	QString _ret = QCandlestickLegendMarker::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QCandlestickLegendMarker_override_virtual_type(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCandlestickLegendMarker> slot_handle(slot);
	MiqtVirtualQCandlestickLegendMarker* self_cast = dynamic_cast<MiqtVirtualQCandlestickLegendMarker*>( (QCandlestickLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__type = std::move(slot_handle);
	return true;
}

int QCandlestickLegendMarker_virtualbase_type(void* self) {
	MiqtVirtualQCandlestickLegendMarker::LegendMarkerType _ret = static_cast<MiqtVirtualQCandlestickLegendMarker*>(self)->QCandlestickLegendMarker::type();
	return static_cast<int>(_ret);
}

bool QCandlestickLegendMarker_override_virtual_series(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCandlestickLegendMarker> slot_handle(slot);
	MiqtVirtualQCandlestickLegendMarker* self_cast = dynamic_cast<MiqtVirtualQCandlestickLegendMarker*>( (QCandlestickLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__series = std::move(slot_handle);
	return true;
}

QCandlestickSeries* QCandlestickLegendMarker_virtualbase_series(void* self) {
	return static_cast<MiqtVirtualQCandlestickLegendMarker*>(self)->QCandlestickLegendMarker::series();
}

bool QCandlestickLegendMarker_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCandlestickLegendMarker> slot_handle(slot);
	MiqtVirtualQCandlestickLegendMarker* self_cast = dynamic_cast<MiqtVirtualQCandlestickLegendMarker*>( (QCandlestickLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QCandlestickLegendMarker_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQCandlestickLegendMarker*>(self)->QCandlestickLegendMarker::event(event);
}

bool QCandlestickLegendMarker_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCandlestickLegendMarker> slot_handle(slot);
	MiqtVirtualQCandlestickLegendMarker* self_cast = dynamic_cast<MiqtVirtualQCandlestickLegendMarker*>( (QCandlestickLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QCandlestickLegendMarker_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQCandlestickLegendMarker*>(self)->QCandlestickLegendMarker::eventFilter(watched, event);
}

bool QCandlestickLegendMarker_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCandlestickLegendMarker> slot_handle(slot);
	MiqtVirtualQCandlestickLegendMarker* self_cast = dynamic_cast<MiqtVirtualQCandlestickLegendMarker*>( (QCandlestickLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QCandlestickLegendMarker_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQCandlestickLegendMarker*>(self)->QCandlestickLegendMarker::timerEvent(event);
}

bool QCandlestickLegendMarker_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCandlestickLegendMarker> slot_handle(slot);
	MiqtVirtualQCandlestickLegendMarker* self_cast = dynamic_cast<MiqtVirtualQCandlestickLegendMarker*>( (QCandlestickLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QCandlestickLegendMarker_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQCandlestickLegendMarker*>(self)->QCandlestickLegendMarker::childEvent(event);
}

bool QCandlestickLegendMarker_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCandlestickLegendMarker> slot_handle(slot);
	MiqtVirtualQCandlestickLegendMarker* self_cast = dynamic_cast<MiqtVirtualQCandlestickLegendMarker*>( (QCandlestickLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QCandlestickLegendMarker_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQCandlestickLegendMarker*>(self)->QCandlestickLegendMarker::customEvent(event);
}

bool QCandlestickLegendMarker_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCandlestickLegendMarker> slot_handle(slot);
	MiqtVirtualQCandlestickLegendMarker* self_cast = dynamic_cast<MiqtVirtualQCandlestickLegendMarker*>( (QCandlestickLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QCandlestickLegendMarker_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQCandlestickLegendMarker*>(self)->QCandlestickLegendMarker::connectNotify(*signal);
}

bool QCandlestickLegendMarker_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCandlestickLegendMarker> slot_handle(slot);
	MiqtVirtualQCandlestickLegendMarker* self_cast = dynamic_cast<MiqtVirtualQCandlestickLegendMarker*>( (QCandlestickLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QCandlestickLegendMarker_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQCandlestickLegendMarker*>(self)->QCandlestickLegendMarker::disconnectNotify(*signal);
}

QObject* QCandlestickLegendMarker_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQCandlestickLegendMarker* self_cast = dynamic_cast<MiqtVirtualQCandlestickLegendMarker*>( (QCandlestickLegendMarker*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QCandlestickLegendMarker_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQCandlestickLegendMarker* self_cast = dynamic_cast<MiqtVirtualQCandlestickLegendMarker*>( (QCandlestickLegendMarker*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QCandlestickLegendMarker_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQCandlestickLegendMarker* self_cast = dynamic_cast<MiqtVirtualQCandlestickLegendMarker*>( (QCandlestickLegendMarker*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QCandlestickLegendMarker_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQCandlestickLegendMarker* self_cast = dynamic_cast<MiqtVirtualQCandlestickLegendMarker*>( (QCandlestickLegendMarker*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QCandlestickLegendMarker_delete(QCandlestickLegendMarker* self) {
	delete self;
}

