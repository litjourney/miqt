#include <memory>
#include <utility>
#include <QAbstractBarSeries>
#include <QBarLegendMarker>
#include <QBarSet>
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
#include <qbarlegendmarker.h>
#include "gen_qbarlegendmarker.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QBarLegendMarker(intptr_t);
int miqt_exec_callback_QBarLegendMarker_type(QBarLegendMarker*, intptr_t);
QAbstractBarSeries* miqt_exec_callback_QBarLegendMarker_series(QBarLegendMarker*, intptr_t);
bool miqt_exec_callback_QBarLegendMarker_event(QBarLegendMarker*, intptr_t, QEvent*);
bool miqt_exec_callback_QBarLegendMarker_eventFilter(QBarLegendMarker*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QBarLegendMarker_timerEvent(QBarLegendMarker*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QBarLegendMarker_childEvent(QBarLegendMarker*, intptr_t, QChildEvent*);
void miqt_exec_callback_QBarLegendMarker_customEvent(QBarLegendMarker*, intptr_t, QEvent*);
void miqt_exec_callback_QBarLegendMarker_connectNotify(QBarLegendMarker*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QBarLegendMarker_disconnectNotify(QBarLegendMarker*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQBarLegendMarker final : public QBarLegendMarker {
public:

	MiqtVirtualQBarLegendMarker(QAbstractBarSeries* series, QBarSet* barset, QLegend* legend): QBarLegendMarker(series, barset, legend) {}
	MiqtVirtualQBarLegendMarker(QAbstractBarSeries* series, QBarSet* barset, QLegend* legend, QObject* parent): QBarLegendMarker(series, barset, legend, parent) {}

	virtual ~MiqtVirtualQBarLegendMarker() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBarLegendMarker> handle__type;

	// Subclass to allow providing a Go implementation
	virtual QLegendMarker::LegendMarkerType type() override {
		if (!handle__type) {
			return QBarLegendMarker::type();
		}

		int callback_return_value = miqt_exec_callback_QBarLegendMarker_type(this, handle__type.value());
		return static_cast<QLegendMarker::LegendMarkerType>(callback_return_value);
	}

	friend int QBarLegendMarker_virtualbase_type(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBarLegendMarker> handle__series;

	// Subclass to allow providing a Go implementation
	virtual QAbstractBarSeries* series() override {
		if (!handle__series) {
			return QBarLegendMarker::series();
		}

		QAbstractBarSeries* callback_return_value = miqt_exec_callback_QBarLegendMarker_series(this, handle__series.value());
		return callback_return_value;
	}

	friend QAbstractBarSeries* QBarLegendMarker_virtualbase_series(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBarLegendMarker> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QBarLegendMarker::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QBarLegendMarker_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QBarLegendMarker_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBarLegendMarker> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QBarLegendMarker::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QBarLegendMarker_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QBarLegendMarker_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBarLegendMarker> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QBarLegendMarker::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QBarLegendMarker_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QBarLegendMarker_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBarLegendMarker> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QBarLegendMarker::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QBarLegendMarker_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QBarLegendMarker_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBarLegendMarker> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QBarLegendMarker::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QBarLegendMarker_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QBarLegendMarker_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBarLegendMarker> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QBarLegendMarker::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QBarLegendMarker_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QBarLegendMarker_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBarLegendMarker> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QBarLegendMarker::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QBarLegendMarker_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QBarLegendMarker_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QBarLegendMarker_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QBarLegendMarker_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QBarLegendMarker_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QBarLegendMarker_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QBarLegendMarker* QBarLegendMarker_new(QAbstractBarSeries* series, QBarSet* barset, QLegend* legend) {
	return new (std::nothrow) MiqtVirtualQBarLegendMarker(series, barset, legend);
}

QBarLegendMarker* QBarLegendMarker_new2(QAbstractBarSeries* series, QBarSet* barset, QLegend* legend, QObject* parent) {
	return new (std::nothrow) MiqtVirtualQBarLegendMarker(series, barset, legend, parent);
}

void QBarLegendMarker_virtbase(QBarLegendMarker* src, QLegendMarker** outptr_QLegendMarker) {
	*outptr_QLegendMarker = static_cast<QLegendMarker*>(src);
}

QMetaObject* QBarLegendMarker_metaObject(const QBarLegendMarker* self) {
	return (QMetaObject*) self->metaObject();
}

void* QBarLegendMarker_metacast(QBarLegendMarker* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QBarLegendMarker_tr(const char* s) {
	QString _ret = QBarLegendMarker::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QBarLegendMarker_type(QBarLegendMarker* self) {
	QLegendMarker::LegendMarkerType _ret = self->type();
	return static_cast<int>(_ret);
}

QAbstractBarSeries* QBarLegendMarker_series(QBarLegendMarker* self) {
	return self->series();
}

QBarSet* QBarLegendMarker_barset(QBarLegendMarker* self) {
	return self->barset();
}

struct miqt_string QBarLegendMarker_tr2(const char* s, const char* c) {
	QString _ret = QBarLegendMarker::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QBarLegendMarker_tr3(const char* s, const char* c, int n) {
	QString _ret = QBarLegendMarker::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QBarLegendMarker_override_virtual_type(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBarLegendMarker> slot_handle(slot);
	MiqtVirtualQBarLegendMarker* self_cast = dynamic_cast<MiqtVirtualQBarLegendMarker*>( (QBarLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__type = std::move(slot_handle);
	return true;
}

int QBarLegendMarker_virtualbase_type(void* self) {
	MiqtVirtualQBarLegendMarker::LegendMarkerType _ret = static_cast<MiqtVirtualQBarLegendMarker*>(self)->QBarLegendMarker::type();
	return static_cast<int>(_ret);
}

bool QBarLegendMarker_override_virtual_series(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBarLegendMarker> slot_handle(slot);
	MiqtVirtualQBarLegendMarker* self_cast = dynamic_cast<MiqtVirtualQBarLegendMarker*>( (QBarLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__series = std::move(slot_handle);
	return true;
}

QAbstractBarSeries* QBarLegendMarker_virtualbase_series(void* self) {
	return static_cast<MiqtVirtualQBarLegendMarker*>(self)->QBarLegendMarker::series();
}

bool QBarLegendMarker_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBarLegendMarker> slot_handle(slot);
	MiqtVirtualQBarLegendMarker* self_cast = dynamic_cast<MiqtVirtualQBarLegendMarker*>( (QBarLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QBarLegendMarker_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQBarLegendMarker*>(self)->QBarLegendMarker::event(event);
}

bool QBarLegendMarker_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBarLegendMarker> slot_handle(slot);
	MiqtVirtualQBarLegendMarker* self_cast = dynamic_cast<MiqtVirtualQBarLegendMarker*>( (QBarLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QBarLegendMarker_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQBarLegendMarker*>(self)->QBarLegendMarker::eventFilter(watched, event);
}

bool QBarLegendMarker_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBarLegendMarker> slot_handle(slot);
	MiqtVirtualQBarLegendMarker* self_cast = dynamic_cast<MiqtVirtualQBarLegendMarker*>( (QBarLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QBarLegendMarker_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQBarLegendMarker*>(self)->QBarLegendMarker::timerEvent(event);
}

bool QBarLegendMarker_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBarLegendMarker> slot_handle(slot);
	MiqtVirtualQBarLegendMarker* self_cast = dynamic_cast<MiqtVirtualQBarLegendMarker*>( (QBarLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QBarLegendMarker_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQBarLegendMarker*>(self)->QBarLegendMarker::childEvent(event);
}

bool QBarLegendMarker_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBarLegendMarker> slot_handle(slot);
	MiqtVirtualQBarLegendMarker* self_cast = dynamic_cast<MiqtVirtualQBarLegendMarker*>( (QBarLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QBarLegendMarker_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQBarLegendMarker*>(self)->QBarLegendMarker::customEvent(event);
}

bool QBarLegendMarker_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBarLegendMarker> slot_handle(slot);
	MiqtVirtualQBarLegendMarker* self_cast = dynamic_cast<MiqtVirtualQBarLegendMarker*>( (QBarLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QBarLegendMarker_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQBarLegendMarker*>(self)->QBarLegendMarker::connectNotify(*signal);
}

bool QBarLegendMarker_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBarLegendMarker> slot_handle(slot);
	MiqtVirtualQBarLegendMarker* self_cast = dynamic_cast<MiqtVirtualQBarLegendMarker*>( (QBarLegendMarker*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QBarLegendMarker_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQBarLegendMarker*>(self)->QBarLegendMarker::disconnectNotify(*signal);
}

QObject* QBarLegendMarker_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQBarLegendMarker* self_cast = dynamic_cast<MiqtVirtualQBarLegendMarker*>( (QBarLegendMarker*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QBarLegendMarker_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQBarLegendMarker* self_cast = dynamic_cast<MiqtVirtualQBarLegendMarker*>( (QBarLegendMarker*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QBarLegendMarker_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQBarLegendMarker* self_cast = dynamic_cast<MiqtVirtualQBarLegendMarker*>( (QBarLegendMarker*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QBarLegendMarker_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQBarLegendMarker* self_cast = dynamic_cast<MiqtVirtualQBarLegendMarker*>( (QBarLegendMarker*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QBarLegendMarker_delete(QBarLegendMarker* self) {
	delete self;
}

