#include <memory>
#include <utility>
#include <QAbstractBarSeries>
#include <QAbstractSeries>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QStackedBarSeries>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qstackedbarseries.h>
#include "gen_qstackedbarseries.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QStackedBarSeries(intptr_t);
int miqt_exec_callback_QStackedBarSeries_type(const QStackedBarSeries*, intptr_t);
bool miqt_exec_callback_QStackedBarSeries_event(QStackedBarSeries*, intptr_t, QEvent*);
bool miqt_exec_callback_QStackedBarSeries_eventFilter(QStackedBarSeries*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QStackedBarSeries_timerEvent(QStackedBarSeries*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QStackedBarSeries_childEvent(QStackedBarSeries*, intptr_t, QChildEvent*);
void miqt_exec_callback_QStackedBarSeries_customEvent(QStackedBarSeries*, intptr_t, QEvent*);
void miqt_exec_callback_QStackedBarSeries_connectNotify(QStackedBarSeries*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QStackedBarSeries_disconnectNotify(QStackedBarSeries*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQStackedBarSeries final : public QStackedBarSeries {
public:

	MiqtVirtualQStackedBarSeries(): QStackedBarSeries() {}
	MiqtVirtualQStackedBarSeries(QObject* parent): QStackedBarSeries(parent) {}

	virtual ~MiqtVirtualQStackedBarSeries() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedBarSeries> handle__type;

	// Subclass to allow providing a Go implementation
	virtual QAbstractSeries::SeriesType type() const override {
		if (!handle__type) {
			return QStackedBarSeries::type();
		}

		int callback_return_value = miqt_exec_callback_QStackedBarSeries_type(this, handle__type.value());
		return static_cast<QAbstractSeries::SeriesType>(callback_return_value);
	}

	friend int QStackedBarSeries_virtualbase_type(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedBarSeries> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QStackedBarSeries::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QStackedBarSeries_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QStackedBarSeries_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedBarSeries> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QStackedBarSeries::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QStackedBarSeries_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QStackedBarSeries_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedBarSeries> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QStackedBarSeries::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QStackedBarSeries_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QStackedBarSeries_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedBarSeries> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QStackedBarSeries::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QStackedBarSeries_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QStackedBarSeries_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedBarSeries> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QStackedBarSeries::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QStackedBarSeries_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QStackedBarSeries_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedBarSeries> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QStackedBarSeries::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QStackedBarSeries_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QStackedBarSeries_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedBarSeries> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QStackedBarSeries::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QStackedBarSeries_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QStackedBarSeries_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QStackedBarSeries_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QStackedBarSeries_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QStackedBarSeries_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QStackedBarSeries_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QStackedBarSeries* QStackedBarSeries_new() {
	return new (std::nothrow) MiqtVirtualQStackedBarSeries();
}

QStackedBarSeries* QStackedBarSeries_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQStackedBarSeries(parent);
}

void QStackedBarSeries_virtbase(QStackedBarSeries* src, QAbstractBarSeries** outptr_QAbstractBarSeries) {
	*outptr_QAbstractBarSeries = static_cast<QAbstractBarSeries*>(src);
}

QMetaObject* QStackedBarSeries_metaObject(const QStackedBarSeries* self) {
	return (QMetaObject*) self->metaObject();
}

void* QStackedBarSeries_metacast(QStackedBarSeries* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QStackedBarSeries_tr(const char* s) {
	QString _ret = QStackedBarSeries::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QStackedBarSeries_type(const QStackedBarSeries* self) {
	QAbstractSeries::SeriesType _ret = self->type();
	return static_cast<int>(_ret);
}

struct miqt_string QStackedBarSeries_tr2(const char* s, const char* c) {
	QString _ret = QStackedBarSeries::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStackedBarSeries_tr3(const char* s, const char* c, int n) {
	QString _ret = QStackedBarSeries::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QStackedBarSeries_override_virtual_type(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedBarSeries> slot_handle(slot);
	MiqtVirtualQStackedBarSeries* self_cast = dynamic_cast<MiqtVirtualQStackedBarSeries*>( (QStackedBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__type = std::move(slot_handle);
	return true;
}

int QStackedBarSeries_virtualbase_type(const void* self) {
	MiqtVirtualQStackedBarSeries::SeriesType _ret = static_cast<const MiqtVirtualQStackedBarSeries*>(self)->QStackedBarSeries::type();
	return static_cast<int>(_ret);
}

bool QStackedBarSeries_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedBarSeries> slot_handle(slot);
	MiqtVirtualQStackedBarSeries* self_cast = dynamic_cast<MiqtVirtualQStackedBarSeries*>( (QStackedBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QStackedBarSeries_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQStackedBarSeries*>(self)->QStackedBarSeries::event(event);
}

bool QStackedBarSeries_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedBarSeries> slot_handle(slot);
	MiqtVirtualQStackedBarSeries* self_cast = dynamic_cast<MiqtVirtualQStackedBarSeries*>( (QStackedBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QStackedBarSeries_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQStackedBarSeries*>(self)->QStackedBarSeries::eventFilter(watched, event);
}

bool QStackedBarSeries_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedBarSeries> slot_handle(slot);
	MiqtVirtualQStackedBarSeries* self_cast = dynamic_cast<MiqtVirtualQStackedBarSeries*>( (QStackedBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QStackedBarSeries_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQStackedBarSeries*>(self)->QStackedBarSeries::timerEvent(event);
}

bool QStackedBarSeries_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedBarSeries> slot_handle(slot);
	MiqtVirtualQStackedBarSeries* self_cast = dynamic_cast<MiqtVirtualQStackedBarSeries*>( (QStackedBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QStackedBarSeries_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQStackedBarSeries*>(self)->QStackedBarSeries::childEvent(event);
}

bool QStackedBarSeries_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedBarSeries> slot_handle(slot);
	MiqtVirtualQStackedBarSeries* self_cast = dynamic_cast<MiqtVirtualQStackedBarSeries*>( (QStackedBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QStackedBarSeries_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQStackedBarSeries*>(self)->QStackedBarSeries::customEvent(event);
}

bool QStackedBarSeries_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedBarSeries> slot_handle(slot);
	MiqtVirtualQStackedBarSeries* self_cast = dynamic_cast<MiqtVirtualQStackedBarSeries*>( (QStackedBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QStackedBarSeries_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQStackedBarSeries*>(self)->QStackedBarSeries::connectNotify(*signal);
}

bool QStackedBarSeries_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedBarSeries> slot_handle(slot);
	MiqtVirtualQStackedBarSeries* self_cast = dynamic_cast<MiqtVirtualQStackedBarSeries*>( (QStackedBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QStackedBarSeries_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQStackedBarSeries*>(self)->QStackedBarSeries::disconnectNotify(*signal);
}

QObject* QStackedBarSeries_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQStackedBarSeries* self_cast = dynamic_cast<MiqtVirtualQStackedBarSeries*>( (QStackedBarSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QStackedBarSeries_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQStackedBarSeries* self_cast = dynamic_cast<MiqtVirtualQStackedBarSeries*>( (QStackedBarSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QStackedBarSeries_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQStackedBarSeries* self_cast = dynamic_cast<MiqtVirtualQStackedBarSeries*>( (QStackedBarSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QStackedBarSeries_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQStackedBarSeries* self_cast = dynamic_cast<MiqtVirtualQStackedBarSeries*>( (QStackedBarSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QStackedBarSeries_delete(QStackedBarSeries* self) {
	delete self;
}

