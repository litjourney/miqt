#include <memory>
#include <utility>
#include <QAbstractBarSeries>
#include <QAbstractSeries>
#include <QBarSeries>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qbarseries.h>
#include "gen_qbarseries.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QBarSeries(intptr_t);
int miqt_exec_callback_QBarSeries_type(const QBarSeries*, intptr_t);
bool miqt_exec_callback_QBarSeries_event(QBarSeries*, intptr_t, QEvent*);
bool miqt_exec_callback_QBarSeries_eventFilter(QBarSeries*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QBarSeries_timerEvent(QBarSeries*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QBarSeries_childEvent(QBarSeries*, intptr_t, QChildEvent*);
void miqt_exec_callback_QBarSeries_customEvent(QBarSeries*, intptr_t, QEvent*);
void miqt_exec_callback_QBarSeries_connectNotify(QBarSeries*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QBarSeries_disconnectNotify(QBarSeries*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQBarSeries final : public QBarSeries {
public:

	MiqtVirtualQBarSeries(): QBarSeries() {}
	MiqtVirtualQBarSeries(QObject* parent): QBarSeries(parent) {}

	virtual ~MiqtVirtualQBarSeries() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBarSeries> handle__type;

	// Subclass to allow providing a Go implementation
	virtual QAbstractSeries::SeriesType type() const override {
		if (!handle__type) {
			return QBarSeries::type();
		}

		int callback_return_value = miqt_exec_callback_QBarSeries_type(this, handle__type.value());
		return static_cast<QAbstractSeries::SeriesType>(callback_return_value);
	}

	friend int QBarSeries_virtualbase_type(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBarSeries> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QBarSeries::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QBarSeries_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QBarSeries_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBarSeries> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QBarSeries::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QBarSeries_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QBarSeries_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBarSeries> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QBarSeries::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QBarSeries_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QBarSeries_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBarSeries> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QBarSeries::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QBarSeries_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QBarSeries_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBarSeries> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QBarSeries::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QBarSeries_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QBarSeries_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBarSeries> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QBarSeries::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QBarSeries_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QBarSeries_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBarSeries> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QBarSeries::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QBarSeries_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QBarSeries_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QBarSeries_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QBarSeries_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QBarSeries_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QBarSeries_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QBarSeries* QBarSeries_new() {
	return new (std::nothrow) MiqtVirtualQBarSeries();
}

QBarSeries* QBarSeries_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQBarSeries(parent);
}

void QBarSeries_virtbase(QBarSeries* src, QAbstractBarSeries** outptr_QAbstractBarSeries) {
	*outptr_QAbstractBarSeries = static_cast<QAbstractBarSeries*>(src);
}

QMetaObject* QBarSeries_metaObject(const QBarSeries* self) {
	return (QMetaObject*) self->metaObject();
}

void* QBarSeries_metacast(QBarSeries* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QBarSeries_tr(const char* s) {
	QString _ret = QBarSeries::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QBarSeries_type(const QBarSeries* self) {
	QAbstractSeries::SeriesType _ret = self->type();
	return static_cast<int>(_ret);
}

struct miqt_string QBarSeries_tr2(const char* s, const char* c) {
	QString _ret = QBarSeries::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QBarSeries_tr3(const char* s, const char* c, int n) {
	QString _ret = QBarSeries::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QBarSeries_override_virtual_type(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBarSeries> slot_handle(slot);
	MiqtVirtualQBarSeries* self_cast = dynamic_cast<MiqtVirtualQBarSeries*>( (QBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__type = std::move(slot_handle);
	return true;
}

int QBarSeries_virtualbase_type(const void* self) {
	MiqtVirtualQBarSeries::SeriesType _ret = static_cast<const MiqtVirtualQBarSeries*>(self)->QBarSeries::type();
	return static_cast<int>(_ret);
}

bool QBarSeries_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBarSeries> slot_handle(slot);
	MiqtVirtualQBarSeries* self_cast = dynamic_cast<MiqtVirtualQBarSeries*>( (QBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QBarSeries_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQBarSeries*>(self)->QBarSeries::event(event);
}

bool QBarSeries_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBarSeries> slot_handle(slot);
	MiqtVirtualQBarSeries* self_cast = dynamic_cast<MiqtVirtualQBarSeries*>( (QBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QBarSeries_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQBarSeries*>(self)->QBarSeries::eventFilter(watched, event);
}

bool QBarSeries_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBarSeries> slot_handle(slot);
	MiqtVirtualQBarSeries* self_cast = dynamic_cast<MiqtVirtualQBarSeries*>( (QBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QBarSeries_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQBarSeries*>(self)->QBarSeries::timerEvent(event);
}

bool QBarSeries_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBarSeries> slot_handle(slot);
	MiqtVirtualQBarSeries* self_cast = dynamic_cast<MiqtVirtualQBarSeries*>( (QBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QBarSeries_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQBarSeries*>(self)->QBarSeries::childEvent(event);
}

bool QBarSeries_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBarSeries> slot_handle(slot);
	MiqtVirtualQBarSeries* self_cast = dynamic_cast<MiqtVirtualQBarSeries*>( (QBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QBarSeries_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQBarSeries*>(self)->QBarSeries::customEvent(event);
}

bool QBarSeries_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBarSeries> slot_handle(slot);
	MiqtVirtualQBarSeries* self_cast = dynamic_cast<MiqtVirtualQBarSeries*>( (QBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QBarSeries_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQBarSeries*>(self)->QBarSeries::connectNotify(*signal);
}

bool QBarSeries_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBarSeries> slot_handle(slot);
	MiqtVirtualQBarSeries* self_cast = dynamic_cast<MiqtVirtualQBarSeries*>( (QBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QBarSeries_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQBarSeries*>(self)->QBarSeries::disconnectNotify(*signal);
}

QObject* QBarSeries_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQBarSeries* self_cast = dynamic_cast<MiqtVirtualQBarSeries*>( (QBarSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QBarSeries_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQBarSeries* self_cast = dynamic_cast<MiqtVirtualQBarSeries*>( (QBarSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QBarSeries_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQBarSeries* self_cast = dynamic_cast<MiqtVirtualQBarSeries*>( (QBarSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QBarSeries_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQBarSeries* self_cast = dynamic_cast<MiqtVirtualQBarSeries*>( (QBarSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QBarSeries_delete(QBarSeries* self) {
	delete self;
}

