#include <memory>
#include <utility>
#include <QAbstractBarSeries>
#include <QAbstractSeries>
#include <QChildEvent>
#include <QEvent>
#include <QHorizontalPercentBarSeries>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qhorizontalpercentbarseries.h>
#include "gen_qhorizontalpercentbarseries.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QHorizontalPercentBarSeries(intptr_t);
int miqt_exec_callback_QHorizontalPercentBarSeries_type(const QHorizontalPercentBarSeries*, intptr_t);
bool miqt_exec_callback_QHorizontalPercentBarSeries_event(QHorizontalPercentBarSeries*, intptr_t, QEvent*);
bool miqt_exec_callback_QHorizontalPercentBarSeries_eventFilter(QHorizontalPercentBarSeries*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QHorizontalPercentBarSeries_timerEvent(QHorizontalPercentBarSeries*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QHorizontalPercentBarSeries_childEvent(QHorizontalPercentBarSeries*, intptr_t, QChildEvent*);
void miqt_exec_callback_QHorizontalPercentBarSeries_customEvent(QHorizontalPercentBarSeries*, intptr_t, QEvent*);
void miqt_exec_callback_QHorizontalPercentBarSeries_connectNotify(QHorizontalPercentBarSeries*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QHorizontalPercentBarSeries_disconnectNotify(QHorizontalPercentBarSeries*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQHorizontalPercentBarSeries final : public QHorizontalPercentBarSeries {
public:

	MiqtVirtualQHorizontalPercentBarSeries(): QHorizontalPercentBarSeries() {}
	MiqtVirtualQHorizontalPercentBarSeries(QObject* parent): QHorizontalPercentBarSeries(parent) {}

	virtual ~MiqtVirtualQHorizontalPercentBarSeries() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QHorizontalPercentBarSeries> handle__type;

	// Subclass to allow providing a Go implementation
	virtual QAbstractSeries::SeriesType type() const override {
		if (!handle__type) {
			return QHorizontalPercentBarSeries::type();
		}

		int callback_return_value = miqt_exec_callback_QHorizontalPercentBarSeries_type(this, handle__type.value());
		return static_cast<QAbstractSeries::SeriesType>(callback_return_value);
	}

	friend int QHorizontalPercentBarSeries_virtualbase_type(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QHorizontalPercentBarSeries> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QHorizontalPercentBarSeries::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QHorizontalPercentBarSeries_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QHorizontalPercentBarSeries_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QHorizontalPercentBarSeries> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QHorizontalPercentBarSeries::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QHorizontalPercentBarSeries_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QHorizontalPercentBarSeries_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QHorizontalPercentBarSeries> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QHorizontalPercentBarSeries::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QHorizontalPercentBarSeries_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QHorizontalPercentBarSeries_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QHorizontalPercentBarSeries> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QHorizontalPercentBarSeries::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QHorizontalPercentBarSeries_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QHorizontalPercentBarSeries_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QHorizontalPercentBarSeries> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QHorizontalPercentBarSeries::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QHorizontalPercentBarSeries_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QHorizontalPercentBarSeries_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QHorizontalPercentBarSeries> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QHorizontalPercentBarSeries::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QHorizontalPercentBarSeries_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QHorizontalPercentBarSeries_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QHorizontalPercentBarSeries> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QHorizontalPercentBarSeries::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QHorizontalPercentBarSeries_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QHorizontalPercentBarSeries_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QHorizontalPercentBarSeries_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QHorizontalPercentBarSeries_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QHorizontalPercentBarSeries_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QHorizontalPercentBarSeries_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QHorizontalPercentBarSeries* QHorizontalPercentBarSeries_new() {
	return new (std::nothrow) MiqtVirtualQHorizontalPercentBarSeries();
}

QHorizontalPercentBarSeries* QHorizontalPercentBarSeries_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQHorizontalPercentBarSeries(parent);
}

void QHorizontalPercentBarSeries_virtbase(QHorizontalPercentBarSeries* src, QAbstractBarSeries** outptr_QAbstractBarSeries) {
	*outptr_QAbstractBarSeries = static_cast<QAbstractBarSeries*>(src);
}

QMetaObject* QHorizontalPercentBarSeries_metaObject(const QHorizontalPercentBarSeries* self) {
	return (QMetaObject*) self->metaObject();
}

void* QHorizontalPercentBarSeries_metacast(QHorizontalPercentBarSeries* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QHorizontalPercentBarSeries_tr(const char* s) {
	QString _ret = QHorizontalPercentBarSeries::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QHorizontalPercentBarSeries_type(const QHorizontalPercentBarSeries* self) {
	QAbstractSeries::SeriesType _ret = self->type();
	return static_cast<int>(_ret);
}

struct miqt_string QHorizontalPercentBarSeries_tr2(const char* s, const char* c) {
	QString _ret = QHorizontalPercentBarSeries::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHorizontalPercentBarSeries_tr3(const char* s, const char* c, int n) {
	QString _ret = QHorizontalPercentBarSeries::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QHorizontalPercentBarSeries_override_virtual_type(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QHorizontalPercentBarSeries> slot_handle(slot);
	MiqtVirtualQHorizontalPercentBarSeries* self_cast = dynamic_cast<MiqtVirtualQHorizontalPercentBarSeries*>( (QHorizontalPercentBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__type = std::move(slot_handle);
	return true;
}

int QHorizontalPercentBarSeries_virtualbase_type(const void* self) {
	MiqtVirtualQHorizontalPercentBarSeries::SeriesType _ret = static_cast<const MiqtVirtualQHorizontalPercentBarSeries*>(self)->QHorizontalPercentBarSeries::type();
	return static_cast<int>(_ret);
}

bool QHorizontalPercentBarSeries_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QHorizontalPercentBarSeries> slot_handle(slot);
	MiqtVirtualQHorizontalPercentBarSeries* self_cast = dynamic_cast<MiqtVirtualQHorizontalPercentBarSeries*>( (QHorizontalPercentBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QHorizontalPercentBarSeries_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQHorizontalPercentBarSeries*>(self)->QHorizontalPercentBarSeries::event(event);
}

bool QHorizontalPercentBarSeries_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QHorizontalPercentBarSeries> slot_handle(slot);
	MiqtVirtualQHorizontalPercentBarSeries* self_cast = dynamic_cast<MiqtVirtualQHorizontalPercentBarSeries*>( (QHorizontalPercentBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QHorizontalPercentBarSeries_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQHorizontalPercentBarSeries*>(self)->QHorizontalPercentBarSeries::eventFilter(watched, event);
}

bool QHorizontalPercentBarSeries_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QHorizontalPercentBarSeries> slot_handle(slot);
	MiqtVirtualQHorizontalPercentBarSeries* self_cast = dynamic_cast<MiqtVirtualQHorizontalPercentBarSeries*>( (QHorizontalPercentBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QHorizontalPercentBarSeries_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQHorizontalPercentBarSeries*>(self)->QHorizontalPercentBarSeries::timerEvent(event);
}

bool QHorizontalPercentBarSeries_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QHorizontalPercentBarSeries> slot_handle(slot);
	MiqtVirtualQHorizontalPercentBarSeries* self_cast = dynamic_cast<MiqtVirtualQHorizontalPercentBarSeries*>( (QHorizontalPercentBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QHorizontalPercentBarSeries_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQHorizontalPercentBarSeries*>(self)->QHorizontalPercentBarSeries::childEvent(event);
}

bool QHorizontalPercentBarSeries_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QHorizontalPercentBarSeries> slot_handle(slot);
	MiqtVirtualQHorizontalPercentBarSeries* self_cast = dynamic_cast<MiqtVirtualQHorizontalPercentBarSeries*>( (QHorizontalPercentBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QHorizontalPercentBarSeries_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQHorizontalPercentBarSeries*>(self)->QHorizontalPercentBarSeries::customEvent(event);
}

bool QHorizontalPercentBarSeries_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QHorizontalPercentBarSeries> slot_handle(slot);
	MiqtVirtualQHorizontalPercentBarSeries* self_cast = dynamic_cast<MiqtVirtualQHorizontalPercentBarSeries*>( (QHorizontalPercentBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QHorizontalPercentBarSeries_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQHorizontalPercentBarSeries*>(self)->QHorizontalPercentBarSeries::connectNotify(*signal);
}

bool QHorizontalPercentBarSeries_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QHorizontalPercentBarSeries> slot_handle(slot);
	MiqtVirtualQHorizontalPercentBarSeries* self_cast = dynamic_cast<MiqtVirtualQHorizontalPercentBarSeries*>( (QHorizontalPercentBarSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QHorizontalPercentBarSeries_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQHorizontalPercentBarSeries*>(self)->QHorizontalPercentBarSeries::disconnectNotify(*signal);
}

QObject* QHorizontalPercentBarSeries_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHorizontalPercentBarSeries* self_cast = dynamic_cast<MiqtVirtualQHorizontalPercentBarSeries*>( (QHorizontalPercentBarSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QHorizontalPercentBarSeries_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHorizontalPercentBarSeries* self_cast = dynamic_cast<MiqtVirtualQHorizontalPercentBarSeries*>( (QHorizontalPercentBarSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QHorizontalPercentBarSeries_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQHorizontalPercentBarSeries* self_cast = dynamic_cast<MiqtVirtualQHorizontalPercentBarSeries*>( (QHorizontalPercentBarSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QHorizontalPercentBarSeries_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQHorizontalPercentBarSeries* self_cast = dynamic_cast<MiqtVirtualQHorizontalPercentBarSeries*>( (QHorizontalPercentBarSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QHorizontalPercentBarSeries_delete(QHorizontalPercentBarSeries* self) {
	delete self;
}

