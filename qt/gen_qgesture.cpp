#include <memory>
#include <utility>
#include <QChildEvent>
#include <QEvent>
#include <QGesture>
#include <QGestureEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPanGesture>
#include <QPinchGesture>
#include <QPointF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSwipeGesture>
#include <QTapAndHoldGesture>
#include <QTapGesture>
#include <QTimerEvent>
#include <QWidget>
#include <qgesture.h>
#include "gen_qgesture.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QGesture(intptr_t);
bool miqt_exec_callback_QGesture_event(QGesture*, intptr_t, QEvent*);
bool miqt_exec_callback_QGesture_eventFilter(QGesture*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QGesture_timerEvent(QGesture*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QGesture_childEvent(QGesture*, intptr_t, QChildEvent*);
void miqt_exec_callback_QGesture_customEvent(QGesture*, intptr_t, QEvent*);
void miqt_exec_callback_QGesture_connectNotify(QGesture*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGesture_disconnectNotify(QGesture*, intptr_t, QMetaMethod*);
void miqt_exec_callback_handle_release_QPanGesture(intptr_t);
bool miqt_exec_callback_QPanGesture_event(QPanGesture*, intptr_t, QEvent*);
bool miqt_exec_callback_QPanGesture_eventFilter(QPanGesture*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QPanGesture_timerEvent(QPanGesture*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QPanGesture_childEvent(QPanGesture*, intptr_t, QChildEvent*);
void miqt_exec_callback_QPanGesture_customEvent(QPanGesture*, intptr_t, QEvent*);
void miqt_exec_callback_QPanGesture_connectNotify(QPanGesture*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPanGesture_disconnectNotify(QPanGesture*, intptr_t, QMetaMethod*);
void miqt_exec_callback_handle_release_QPinchGesture(intptr_t);
bool miqt_exec_callback_QPinchGesture_event(QPinchGesture*, intptr_t, QEvent*);
bool miqt_exec_callback_QPinchGesture_eventFilter(QPinchGesture*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QPinchGesture_timerEvent(QPinchGesture*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QPinchGesture_childEvent(QPinchGesture*, intptr_t, QChildEvent*);
void miqt_exec_callback_QPinchGesture_customEvent(QPinchGesture*, intptr_t, QEvent*);
void miqt_exec_callback_QPinchGesture_connectNotify(QPinchGesture*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPinchGesture_disconnectNotify(QPinchGesture*, intptr_t, QMetaMethod*);
void miqt_exec_callback_handle_release_QSwipeGesture(intptr_t);
bool miqt_exec_callback_QSwipeGesture_event(QSwipeGesture*, intptr_t, QEvent*);
bool miqt_exec_callback_QSwipeGesture_eventFilter(QSwipeGesture*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSwipeGesture_timerEvent(QSwipeGesture*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSwipeGesture_childEvent(QSwipeGesture*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSwipeGesture_customEvent(QSwipeGesture*, intptr_t, QEvent*);
void miqt_exec_callback_QSwipeGesture_connectNotify(QSwipeGesture*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSwipeGesture_disconnectNotify(QSwipeGesture*, intptr_t, QMetaMethod*);
void miqt_exec_callback_handle_release_QTapGesture(intptr_t);
bool miqt_exec_callback_QTapGesture_event(QTapGesture*, intptr_t, QEvent*);
bool miqt_exec_callback_QTapGesture_eventFilter(QTapGesture*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QTapGesture_timerEvent(QTapGesture*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QTapGesture_childEvent(QTapGesture*, intptr_t, QChildEvent*);
void miqt_exec_callback_QTapGesture_customEvent(QTapGesture*, intptr_t, QEvent*);
void miqt_exec_callback_QTapGesture_connectNotify(QTapGesture*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QTapGesture_disconnectNotify(QTapGesture*, intptr_t, QMetaMethod*);
void miqt_exec_callback_handle_release_QTapAndHoldGesture(intptr_t);
bool miqt_exec_callback_QTapAndHoldGesture_event(QTapAndHoldGesture*, intptr_t, QEvent*);
bool miqt_exec_callback_QTapAndHoldGesture_eventFilter(QTapAndHoldGesture*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QTapAndHoldGesture_timerEvent(QTapAndHoldGesture*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QTapAndHoldGesture_childEvent(QTapAndHoldGesture*, intptr_t, QChildEvent*);
void miqt_exec_callback_QTapAndHoldGesture_customEvent(QTapAndHoldGesture*, intptr_t, QEvent*);
void miqt_exec_callback_QTapAndHoldGesture_connectNotify(QTapAndHoldGesture*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QTapAndHoldGesture_disconnectNotify(QTapAndHoldGesture*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGesture final : public QGesture {
public:

	MiqtVirtualQGesture(): QGesture() {}
	MiqtVirtualQGesture(QObject* parent): QGesture(parent) {}

	virtual ~MiqtVirtualQGesture() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGesture> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QGesture::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QGesture_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QGesture_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGesture> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QGesture::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QGesture_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QGesture_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGesture> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QGesture::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QGesture_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QGesture_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGesture> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QGesture::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QGesture_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QGesture_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGesture> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QGesture::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QGesture_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QGesture_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGesture> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QGesture::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QGesture_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QGesture_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGesture> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QGesture::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QGesture_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QGesture_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QGesture_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QGesture_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QGesture_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QGesture_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QGesture* QGesture_new() {
	return new (std::nothrow) MiqtVirtualQGesture();
}

QGesture* QGesture_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQGesture(parent);
}

void QGesture_virtbase(QGesture* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QGesture_metaObject(const QGesture* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGesture_metacast(QGesture* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGesture_tr(const char* s) {
	QString _ret = QGesture::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGesture_trUtf8(const char* s) {
	QString _ret = QGesture::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QGesture_gestureType(const QGesture* self) {
	Qt::GestureType _ret = self->gestureType();
	return static_cast<int>(_ret);
}

int QGesture_state(const QGesture* self) {
	Qt::GestureState _ret = self->state();
	return static_cast<int>(_ret);
}

QPointF* QGesture_hotSpot(const QGesture* self) {
	return new QPointF(self->hotSpot());
}

void QGesture_setHotSpot(QGesture* self, QPointF* value) {
	self->setHotSpot(*value);
}

bool QGesture_hasHotSpot(const QGesture* self) {
	return self->hasHotSpot();
}

void QGesture_unsetHotSpot(QGesture* self) {
	self->unsetHotSpot();
}

void QGesture_setGestureCancelPolicy(QGesture* self, int policy) {
	self->setGestureCancelPolicy(static_cast<QGesture::GestureCancelPolicy>(policy));
}

int QGesture_gestureCancelPolicy(const QGesture* self) {
	QGesture::GestureCancelPolicy _ret = self->gestureCancelPolicy();
	return static_cast<int>(_ret);
}

struct miqt_string QGesture_tr2(const char* s, const char* c) {
	QString _ret = QGesture::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGesture_tr3(const char* s, const char* c, int n) {
	QString _ret = QGesture::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGesture_trUtf82(const char* s, const char* c) {
	QString _ret = QGesture::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGesture_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QGesture::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QGesture_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGesture> slot_handle(slot);
	MiqtVirtualQGesture* self_cast = dynamic_cast<MiqtVirtualQGesture*>( (QGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QGesture_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQGesture*>(self)->QGesture::event(event);
}

bool QGesture_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGesture> slot_handle(slot);
	MiqtVirtualQGesture* self_cast = dynamic_cast<MiqtVirtualQGesture*>( (QGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QGesture_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQGesture*>(self)->QGesture::eventFilter(watched, event);
}

bool QGesture_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGesture> slot_handle(slot);
	MiqtVirtualQGesture* self_cast = dynamic_cast<MiqtVirtualQGesture*>( (QGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QGesture_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQGesture*>(self)->QGesture::timerEvent(event);
}

bool QGesture_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGesture> slot_handle(slot);
	MiqtVirtualQGesture* self_cast = dynamic_cast<MiqtVirtualQGesture*>( (QGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QGesture_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQGesture*>(self)->QGesture::childEvent(event);
}

bool QGesture_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGesture> slot_handle(slot);
	MiqtVirtualQGesture* self_cast = dynamic_cast<MiqtVirtualQGesture*>( (QGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QGesture_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQGesture*>(self)->QGesture::customEvent(event);
}

bool QGesture_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGesture> slot_handle(slot);
	MiqtVirtualQGesture* self_cast = dynamic_cast<MiqtVirtualQGesture*>( (QGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QGesture_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQGesture*>(self)->QGesture::connectNotify(*signal);
}

bool QGesture_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGesture> slot_handle(slot);
	MiqtVirtualQGesture* self_cast = dynamic_cast<MiqtVirtualQGesture*>( (QGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QGesture_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQGesture*>(self)->QGesture::disconnectNotify(*signal);
}

QObject* QGesture_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGesture* self_cast = dynamic_cast<MiqtVirtualQGesture*>( (QGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QGesture_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGesture* self_cast = dynamic_cast<MiqtVirtualQGesture*>( (QGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QGesture_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQGesture* self_cast = dynamic_cast<MiqtVirtualQGesture*>( (QGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QGesture_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQGesture* self_cast = dynamic_cast<MiqtVirtualQGesture*>( (QGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QGesture_delete(QGesture* self) {
	delete self;
}

class MiqtVirtualQPanGesture final : public QPanGesture {
public:

	MiqtVirtualQPanGesture(): QPanGesture() {}
	MiqtVirtualQPanGesture(QObject* parent): QPanGesture(parent) {}

	virtual ~MiqtVirtualQPanGesture() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPanGesture> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QPanGesture::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QPanGesture_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QPanGesture_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPanGesture> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QPanGesture::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QPanGesture_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QPanGesture_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPanGesture> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QPanGesture::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QPanGesture_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QPanGesture_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPanGesture> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QPanGesture::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QPanGesture_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QPanGesture_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPanGesture> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QPanGesture::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QPanGesture_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QPanGesture_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPanGesture> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QPanGesture::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QPanGesture_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QPanGesture_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPanGesture> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QPanGesture::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QPanGesture_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QPanGesture_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QPanGesture_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QPanGesture_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QPanGesture_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QPanGesture_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QPanGesture* QPanGesture_new() {
	return new (std::nothrow) MiqtVirtualQPanGesture();
}

QPanGesture* QPanGesture_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQPanGesture(parent);
}

void QPanGesture_virtbase(QPanGesture* src, QGesture** outptr_QGesture) {
	*outptr_QGesture = static_cast<QGesture*>(src);
}

QMetaObject* QPanGesture_metaObject(const QPanGesture* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPanGesture_metacast(QPanGesture* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPanGesture_tr(const char* s) {
	QString _ret = QPanGesture::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPanGesture_trUtf8(const char* s) {
	QString _ret = QPanGesture::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QPointF* QPanGesture_lastOffset(const QPanGesture* self) {
	return new QPointF(self->lastOffset());
}

QPointF* QPanGesture_offset(const QPanGesture* self) {
	return new QPointF(self->offset());
}

QPointF* QPanGesture_delta(const QPanGesture* self) {
	return new QPointF(self->delta());
}

double QPanGesture_acceleration(const QPanGesture* self) {
	qreal _ret = self->acceleration();
	return static_cast<double>(_ret);
}

void QPanGesture_setLastOffset(QPanGesture* self, QPointF* value) {
	self->setLastOffset(*value);
}

void QPanGesture_setOffset(QPanGesture* self, QPointF* value) {
	self->setOffset(*value);
}

void QPanGesture_setAcceleration(QPanGesture* self, double value) {
	self->setAcceleration(static_cast<qreal>(value));
}

struct miqt_string QPanGesture_tr2(const char* s, const char* c) {
	QString _ret = QPanGesture::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPanGesture_tr3(const char* s, const char* c, int n) {
	QString _ret = QPanGesture::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPanGesture_trUtf82(const char* s, const char* c) {
	QString _ret = QPanGesture::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPanGesture_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QPanGesture::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPanGesture_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPanGesture> slot_handle(slot);
	MiqtVirtualQPanGesture* self_cast = dynamic_cast<MiqtVirtualQPanGesture*>( (QPanGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QPanGesture_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQPanGesture*>(self)->QPanGesture::event(event);
}

bool QPanGesture_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPanGesture> slot_handle(slot);
	MiqtVirtualQPanGesture* self_cast = dynamic_cast<MiqtVirtualQPanGesture*>( (QPanGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QPanGesture_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQPanGesture*>(self)->QPanGesture::eventFilter(watched, event);
}

bool QPanGesture_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPanGesture> slot_handle(slot);
	MiqtVirtualQPanGesture* self_cast = dynamic_cast<MiqtVirtualQPanGesture*>( (QPanGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QPanGesture_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQPanGesture*>(self)->QPanGesture::timerEvent(event);
}

bool QPanGesture_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPanGesture> slot_handle(slot);
	MiqtVirtualQPanGesture* self_cast = dynamic_cast<MiqtVirtualQPanGesture*>( (QPanGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QPanGesture_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQPanGesture*>(self)->QPanGesture::childEvent(event);
}

bool QPanGesture_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPanGesture> slot_handle(slot);
	MiqtVirtualQPanGesture* self_cast = dynamic_cast<MiqtVirtualQPanGesture*>( (QPanGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QPanGesture_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQPanGesture*>(self)->QPanGesture::customEvent(event);
}

bool QPanGesture_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPanGesture> slot_handle(slot);
	MiqtVirtualQPanGesture* self_cast = dynamic_cast<MiqtVirtualQPanGesture*>( (QPanGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QPanGesture_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQPanGesture*>(self)->QPanGesture::connectNotify(*signal);
}

bool QPanGesture_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPanGesture> slot_handle(slot);
	MiqtVirtualQPanGesture* self_cast = dynamic_cast<MiqtVirtualQPanGesture*>( (QPanGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QPanGesture_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQPanGesture*>(self)->QPanGesture::disconnectNotify(*signal);
}

QObject* QPanGesture_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPanGesture* self_cast = dynamic_cast<MiqtVirtualQPanGesture*>( (QPanGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QPanGesture_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPanGesture* self_cast = dynamic_cast<MiqtVirtualQPanGesture*>( (QPanGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QPanGesture_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQPanGesture* self_cast = dynamic_cast<MiqtVirtualQPanGesture*>( (QPanGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QPanGesture_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQPanGesture* self_cast = dynamic_cast<MiqtVirtualQPanGesture*>( (QPanGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QPanGesture_delete(QPanGesture* self) {
	delete self;
}

class MiqtVirtualQPinchGesture final : public QPinchGesture {
public:

	MiqtVirtualQPinchGesture(): QPinchGesture() {}
	MiqtVirtualQPinchGesture(QObject* parent): QPinchGesture(parent) {}

	virtual ~MiqtVirtualQPinchGesture() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPinchGesture> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QPinchGesture::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QPinchGesture_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QPinchGesture_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPinchGesture> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QPinchGesture::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QPinchGesture_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QPinchGesture_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPinchGesture> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QPinchGesture::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QPinchGesture_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QPinchGesture_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPinchGesture> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QPinchGesture::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QPinchGesture_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QPinchGesture_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPinchGesture> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QPinchGesture::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QPinchGesture_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QPinchGesture_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPinchGesture> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QPinchGesture::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QPinchGesture_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QPinchGesture_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPinchGesture> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QPinchGesture::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QPinchGesture_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QPinchGesture_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QPinchGesture_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QPinchGesture_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QPinchGesture_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QPinchGesture_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QPinchGesture* QPinchGesture_new() {
	return new (std::nothrow) MiqtVirtualQPinchGesture();
}

QPinchGesture* QPinchGesture_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQPinchGesture(parent);
}

void QPinchGesture_virtbase(QPinchGesture* src, QGesture** outptr_QGesture) {
	*outptr_QGesture = static_cast<QGesture*>(src);
}

QMetaObject* QPinchGesture_metaObject(const QPinchGesture* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPinchGesture_metacast(QPinchGesture* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPinchGesture_tr(const char* s) {
	QString _ret = QPinchGesture::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPinchGesture_trUtf8(const char* s) {
	QString _ret = QPinchGesture::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QPinchGesture_totalChangeFlags(const QPinchGesture* self) {
	QPinchGesture::ChangeFlags _ret = self->totalChangeFlags();
	return static_cast<int>(_ret);
}

void QPinchGesture_setTotalChangeFlags(QPinchGesture* self, int value) {
	self->setTotalChangeFlags(static_cast<QPinchGesture::ChangeFlags>(value));
}

int QPinchGesture_changeFlags(const QPinchGesture* self) {
	QPinchGesture::ChangeFlags _ret = self->changeFlags();
	return static_cast<int>(_ret);
}

void QPinchGesture_setChangeFlags(QPinchGesture* self, int value) {
	self->setChangeFlags(static_cast<QPinchGesture::ChangeFlags>(value));
}

QPointF* QPinchGesture_startCenterPoint(const QPinchGesture* self) {
	return new QPointF(self->startCenterPoint());
}

QPointF* QPinchGesture_lastCenterPoint(const QPinchGesture* self) {
	return new QPointF(self->lastCenterPoint());
}

QPointF* QPinchGesture_centerPoint(const QPinchGesture* self) {
	return new QPointF(self->centerPoint());
}

void QPinchGesture_setStartCenterPoint(QPinchGesture* self, QPointF* value) {
	self->setStartCenterPoint(*value);
}

void QPinchGesture_setLastCenterPoint(QPinchGesture* self, QPointF* value) {
	self->setLastCenterPoint(*value);
}

void QPinchGesture_setCenterPoint(QPinchGesture* self, QPointF* value) {
	self->setCenterPoint(*value);
}

double QPinchGesture_totalScaleFactor(const QPinchGesture* self) {
	qreal _ret = self->totalScaleFactor();
	return static_cast<double>(_ret);
}

double QPinchGesture_lastScaleFactor(const QPinchGesture* self) {
	qreal _ret = self->lastScaleFactor();
	return static_cast<double>(_ret);
}

double QPinchGesture_scaleFactor(const QPinchGesture* self) {
	qreal _ret = self->scaleFactor();
	return static_cast<double>(_ret);
}

void QPinchGesture_setTotalScaleFactor(QPinchGesture* self, double value) {
	self->setTotalScaleFactor(static_cast<qreal>(value));
}

void QPinchGesture_setLastScaleFactor(QPinchGesture* self, double value) {
	self->setLastScaleFactor(static_cast<qreal>(value));
}

void QPinchGesture_setScaleFactor(QPinchGesture* self, double value) {
	self->setScaleFactor(static_cast<qreal>(value));
}

double QPinchGesture_totalRotationAngle(const QPinchGesture* self) {
	qreal _ret = self->totalRotationAngle();
	return static_cast<double>(_ret);
}

double QPinchGesture_lastRotationAngle(const QPinchGesture* self) {
	qreal _ret = self->lastRotationAngle();
	return static_cast<double>(_ret);
}

double QPinchGesture_rotationAngle(const QPinchGesture* self) {
	qreal _ret = self->rotationAngle();
	return static_cast<double>(_ret);
}

void QPinchGesture_setTotalRotationAngle(QPinchGesture* self, double value) {
	self->setTotalRotationAngle(static_cast<qreal>(value));
}

void QPinchGesture_setLastRotationAngle(QPinchGesture* self, double value) {
	self->setLastRotationAngle(static_cast<qreal>(value));
}

void QPinchGesture_setRotationAngle(QPinchGesture* self, double value) {
	self->setRotationAngle(static_cast<qreal>(value));
}

struct miqt_string QPinchGesture_tr2(const char* s, const char* c) {
	QString _ret = QPinchGesture::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPinchGesture_tr3(const char* s, const char* c, int n) {
	QString _ret = QPinchGesture::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPinchGesture_trUtf82(const char* s, const char* c) {
	QString _ret = QPinchGesture::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPinchGesture_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QPinchGesture::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPinchGesture_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPinchGesture> slot_handle(slot);
	MiqtVirtualQPinchGesture* self_cast = dynamic_cast<MiqtVirtualQPinchGesture*>( (QPinchGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QPinchGesture_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQPinchGesture*>(self)->QPinchGesture::event(event);
}

bool QPinchGesture_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPinchGesture> slot_handle(slot);
	MiqtVirtualQPinchGesture* self_cast = dynamic_cast<MiqtVirtualQPinchGesture*>( (QPinchGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QPinchGesture_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQPinchGesture*>(self)->QPinchGesture::eventFilter(watched, event);
}

bool QPinchGesture_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPinchGesture> slot_handle(slot);
	MiqtVirtualQPinchGesture* self_cast = dynamic_cast<MiqtVirtualQPinchGesture*>( (QPinchGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QPinchGesture_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQPinchGesture*>(self)->QPinchGesture::timerEvent(event);
}

bool QPinchGesture_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPinchGesture> slot_handle(slot);
	MiqtVirtualQPinchGesture* self_cast = dynamic_cast<MiqtVirtualQPinchGesture*>( (QPinchGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QPinchGesture_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQPinchGesture*>(self)->QPinchGesture::childEvent(event);
}

bool QPinchGesture_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPinchGesture> slot_handle(slot);
	MiqtVirtualQPinchGesture* self_cast = dynamic_cast<MiqtVirtualQPinchGesture*>( (QPinchGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QPinchGesture_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQPinchGesture*>(self)->QPinchGesture::customEvent(event);
}

bool QPinchGesture_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPinchGesture> slot_handle(slot);
	MiqtVirtualQPinchGesture* self_cast = dynamic_cast<MiqtVirtualQPinchGesture*>( (QPinchGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QPinchGesture_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQPinchGesture*>(self)->QPinchGesture::connectNotify(*signal);
}

bool QPinchGesture_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPinchGesture> slot_handle(slot);
	MiqtVirtualQPinchGesture* self_cast = dynamic_cast<MiqtVirtualQPinchGesture*>( (QPinchGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QPinchGesture_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQPinchGesture*>(self)->QPinchGesture::disconnectNotify(*signal);
}

QObject* QPinchGesture_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPinchGesture* self_cast = dynamic_cast<MiqtVirtualQPinchGesture*>( (QPinchGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QPinchGesture_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPinchGesture* self_cast = dynamic_cast<MiqtVirtualQPinchGesture*>( (QPinchGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QPinchGesture_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQPinchGesture* self_cast = dynamic_cast<MiqtVirtualQPinchGesture*>( (QPinchGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QPinchGesture_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQPinchGesture* self_cast = dynamic_cast<MiqtVirtualQPinchGesture*>( (QPinchGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QPinchGesture_delete(QPinchGesture* self) {
	delete self;
}

class MiqtVirtualQSwipeGesture final : public QSwipeGesture {
public:

	MiqtVirtualQSwipeGesture(): QSwipeGesture() {}
	MiqtVirtualQSwipeGesture(QObject* parent): QSwipeGesture(parent) {}

	virtual ~MiqtVirtualQSwipeGesture() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSwipeGesture> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QSwipeGesture::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QSwipeGesture_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QSwipeGesture_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSwipeGesture> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QSwipeGesture::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QSwipeGesture_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QSwipeGesture_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSwipeGesture> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QSwipeGesture::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QSwipeGesture_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QSwipeGesture_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSwipeGesture> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QSwipeGesture::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QSwipeGesture_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QSwipeGesture_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSwipeGesture> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QSwipeGesture::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QSwipeGesture_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QSwipeGesture_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSwipeGesture> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QSwipeGesture::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QSwipeGesture_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QSwipeGesture_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSwipeGesture> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QSwipeGesture::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QSwipeGesture_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QSwipeGesture_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QSwipeGesture_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QSwipeGesture_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QSwipeGesture_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QSwipeGesture_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QSwipeGesture* QSwipeGesture_new() {
	return new (std::nothrow) MiqtVirtualQSwipeGesture();
}

QSwipeGesture* QSwipeGesture_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQSwipeGesture(parent);
}

void QSwipeGesture_virtbase(QSwipeGesture* src, QGesture** outptr_QGesture) {
	*outptr_QGesture = static_cast<QGesture*>(src);
}

QMetaObject* QSwipeGesture_metaObject(const QSwipeGesture* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSwipeGesture_metacast(QSwipeGesture* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSwipeGesture_tr(const char* s) {
	QString _ret = QSwipeGesture::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSwipeGesture_trUtf8(const char* s) {
	QString _ret = QSwipeGesture::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QSwipeGesture_horizontalDirection(const QSwipeGesture* self) {
	QSwipeGesture::SwipeDirection _ret = self->horizontalDirection();
	return static_cast<int>(_ret);
}

int QSwipeGesture_verticalDirection(const QSwipeGesture* self) {
	QSwipeGesture::SwipeDirection _ret = self->verticalDirection();
	return static_cast<int>(_ret);
}

double QSwipeGesture_swipeAngle(const QSwipeGesture* self) {
	qreal _ret = self->swipeAngle();
	return static_cast<double>(_ret);
}

void QSwipeGesture_setSwipeAngle(QSwipeGesture* self, double value) {
	self->setSwipeAngle(static_cast<qreal>(value));
}

struct miqt_string QSwipeGesture_tr2(const char* s, const char* c) {
	QString _ret = QSwipeGesture::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSwipeGesture_tr3(const char* s, const char* c, int n) {
	QString _ret = QSwipeGesture::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSwipeGesture_trUtf82(const char* s, const char* c) {
	QString _ret = QSwipeGesture::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSwipeGesture_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QSwipeGesture::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSwipeGesture_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSwipeGesture> slot_handle(slot);
	MiqtVirtualQSwipeGesture* self_cast = dynamic_cast<MiqtVirtualQSwipeGesture*>( (QSwipeGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QSwipeGesture_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQSwipeGesture*>(self)->QSwipeGesture::event(event);
}

bool QSwipeGesture_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSwipeGesture> slot_handle(slot);
	MiqtVirtualQSwipeGesture* self_cast = dynamic_cast<MiqtVirtualQSwipeGesture*>( (QSwipeGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QSwipeGesture_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQSwipeGesture*>(self)->QSwipeGesture::eventFilter(watched, event);
}

bool QSwipeGesture_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSwipeGesture> slot_handle(slot);
	MiqtVirtualQSwipeGesture* self_cast = dynamic_cast<MiqtVirtualQSwipeGesture*>( (QSwipeGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QSwipeGesture_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQSwipeGesture*>(self)->QSwipeGesture::timerEvent(event);
}

bool QSwipeGesture_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSwipeGesture> slot_handle(slot);
	MiqtVirtualQSwipeGesture* self_cast = dynamic_cast<MiqtVirtualQSwipeGesture*>( (QSwipeGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QSwipeGesture_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQSwipeGesture*>(self)->QSwipeGesture::childEvent(event);
}

bool QSwipeGesture_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSwipeGesture> slot_handle(slot);
	MiqtVirtualQSwipeGesture* self_cast = dynamic_cast<MiqtVirtualQSwipeGesture*>( (QSwipeGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QSwipeGesture_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQSwipeGesture*>(self)->QSwipeGesture::customEvent(event);
}

bool QSwipeGesture_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSwipeGesture> slot_handle(slot);
	MiqtVirtualQSwipeGesture* self_cast = dynamic_cast<MiqtVirtualQSwipeGesture*>( (QSwipeGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QSwipeGesture_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQSwipeGesture*>(self)->QSwipeGesture::connectNotify(*signal);
}

bool QSwipeGesture_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSwipeGesture> slot_handle(slot);
	MiqtVirtualQSwipeGesture* self_cast = dynamic_cast<MiqtVirtualQSwipeGesture*>( (QSwipeGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QSwipeGesture_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQSwipeGesture*>(self)->QSwipeGesture::disconnectNotify(*signal);
}

QObject* QSwipeGesture_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSwipeGesture* self_cast = dynamic_cast<MiqtVirtualQSwipeGesture*>( (QSwipeGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QSwipeGesture_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSwipeGesture* self_cast = dynamic_cast<MiqtVirtualQSwipeGesture*>( (QSwipeGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QSwipeGesture_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQSwipeGesture* self_cast = dynamic_cast<MiqtVirtualQSwipeGesture*>( (QSwipeGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QSwipeGesture_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQSwipeGesture* self_cast = dynamic_cast<MiqtVirtualQSwipeGesture*>( (QSwipeGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QSwipeGesture_delete(QSwipeGesture* self) {
	delete self;
}

class MiqtVirtualQTapGesture final : public QTapGesture {
public:

	MiqtVirtualQTapGesture(): QTapGesture() {}
	MiqtVirtualQTapGesture(QObject* parent): QTapGesture(parent) {}

	virtual ~MiqtVirtualQTapGesture() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTapGesture> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QTapGesture::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QTapGesture_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QTapGesture_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTapGesture> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QTapGesture::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QTapGesture_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QTapGesture_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTapGesture> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QTapGesture::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QTapGesture_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QTapGesture_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTapGesture> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QTapGesture::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QTapGesture_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QTapGesture_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTapGesture> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QTapGesture::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QTapGesture_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QTapGesture_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTapGesture> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QTapGesture::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QTapGesture_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QTapGesture_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTapGesture> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QTapGesture::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QTapGesture_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QTapGesture_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QTapGesture_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QTapGesture_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QTapGesture_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QTapGesture_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QTapGesture* QTapGesture_new() {
	return new (std::nothrow) MiqtVirtualQTapGesture();
}

QTapGesture* QTapGesture_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQTapGesture(parent);
}

void QTapGesture_virtbase(QTapGesture* src, QGesture** outptr_QGesture) {
	*outptr_QGesture = static_cast<QGesture*>(src);
}

QMetaObject* QTapGesture_metaObject(const QTapGesture* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTapGesture_metacast(QTapGesture* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTapGesture_tr(const char* s) {
	QString _ret = QTapGesture::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTapGesture_trUtf8(const char* s) {
	QString _ret = QTapGesture::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QPointF* QTapGesture_position(const QTapGesture* self) {
	return new QPointF(self->position());
}

void QTapGesture_setPosition(QTapGesture* self, QPointF* pos) {
	self->setPosition(*pos);
}

struct miqt_string QTapGesture_tr2(const char* s, const char* c) {
	QString _ret = QTapGesture::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTapGesture_tr3(const char* s, const char* c, int n) {
	QString _ret = QTapGesture::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTapGesture_trUtf82(const char* s, const char* c) {
	QString _ret = QTapGesture::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTapGesture_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QTapGesture::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTapGesture_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTapGesture> slot_handle(slot);
	MiqtVirtualQTapGesture* self_cast = dynamic_cast<MiqtVirtualQTapGesture*>( (QTapGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QTapGesture_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQTapGesture*>(self)->QTapGesture::event(event);
}

bool QTapGesture_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTapGesture> slot_handle(slot);
	MiqtVirtualQTapGesture* self_cast = dynamic_cast<MiqtVirtualQTapGesture*>( (QTapGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QTapGesture_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQTapGesture*>(self)->QTapGesture::eventFilter(watched, event);
}

bool QTapGesture_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTapGesture> slot_handle(slot);
	MiqtVirtualQTapGesture* self_cast = dynamic_cast<MiqtVirtualQTapGesture*>( (QTapGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QTapGesture_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQTapGesture*>(self)->QTapGesture::timerEvent(event);
}

bool QTapGesture_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTapGesture> slot_handle(slot);
	MiqtVirtualQTapGesture* self_cast = dynamic_cast<MiqtVirtualQTapGesture*>( (QTapGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QTapGesture_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQTapGesture*>(self)->QTapGesture::childEvent(event);
}

bool QTapGesture_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTapGesture> slot_handle(slot);
	MiqtVirtualQTapGesture* self_cast = dynamic_cast<MiqtVirtualQTapGesture*>( (QTapGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QTapGesture_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQTapGesture*>(self)->QTapGesture::customEvent(event);
}

bool QTapGesture_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTapGesture> slot_handle(slot);
	MiqtVirtualQTapGesture* self_cast = dynamic_cast<MiqtVirtualQTapGesture*>( (QTapGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QTapGesture_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQTapGesture*>(self)->QTapGesture::connectNotify(*signal);
}

bool QTapGesture_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTapGesture> slot_handle(slot);
	MiqtVirtualQTapGesture* self_cast = dynamic_cast<MiqtVirtualQTapGesture*>( (QTapGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QTapGesture_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQTapGesture*>(self)->QTapGesture::disconnectNotify(*signal);
}

QObject* QTapGesture_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTapGesture* self_cast = dynamic_cast<MiqtVirtualQTapGesture*>( (QTapGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QTapGesture_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTapGesture* self_cast = dynamic_cast<MiqtVirtualQTapGesture*>( (QTapGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QTapGesture_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQTapGesture* self_cast = dynamic_cast<MiqtVirtualQTapGesture*>( (QTapGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QTapGesture_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQTapGesture* self_cast = dynamic_cast<MiqtVirtualQTapGesture*>( (QTapGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QTapGesture_delete(QTapGesture* self) {
	delete self;
}

class MiqtVirtualQTapAndHoldGesture final : public QTapAndHoldGesture {
public:

	MiqtVirtualQTapAndHoldGesture(): QTapAndHoldGesture() {}
	MiqtVirtualQTapAndHoldGesture(QObject* parent): QTapAndHoldGesture(parent) {}

	virtual ~MiqtVirtualQTapAndHoldGesture() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTapAndHoldGesture> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QTapAndHoldGesture::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QTapAndHoldGesture_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QTapAndHoldGesture_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTapAndHoldGesture> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QTapAndHoldGesture::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QTapAndHoldGesture_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QTapAndHoldGesture_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTapAndHoldGesture> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QTapAndHoldGesture::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QTapAndHoldGesture_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QTapAndHoldGesture_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTapAndHoldGesture> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QTapAndHoldGesture::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QTapAndHoldGesture_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QTapAndHoldGesture_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTapAndHoldGesture> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QTapAndHoldGesture::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QTapAndHoldGesture_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QTapAndHoldGesture_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTapAndHoldGesture> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QTapAndHoldGesture::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QTapAndHoldGesture_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QTapAndHoldGesture_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTapAndHoldGesture> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QTapAndHoldGesture::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QTapAndHoldGesture_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QTapAndHoldGesture_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QTapAndHoldGesture_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QTapAndHoldGesture_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QTapAndHoldGesture_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QTapAndHoldGesture_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QTapAndHoldGesture* QTapAndHoldGesture_new() {
	return new (std::nothrow) MiqtVirtualQTapAndHoldGesture();
}

QTapAndHoldGesture* QTapAndHoldGesture_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQTapAndHoldGesture(parent);
}

void QTapAndHoldGesture_virtbase(QTapAndHoldGesture* src, QGesture** outptr_QGesture) {
	*outptr_QGesture = static_cast<QGesture*>(src);
}

QMetaObject* QTapAndHoldGesture_metaObject(const QTapAndHoldGesture* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTapAndHoldGesture_metacast(QTapAndHoldGesture* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTapAndHoldGesture_tr(const char* s) {
	QString _ret = QTapAndHoldGesture::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTapAndHoldGesture_trUtf8(const char* s) {
	QString _ret = QTapAndHoldGesture::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QPointF* QTapAndHoldGesture_position(const QTapAndHoldGesture* self) {
	return new QPointF(self->position());
}

void QTapAndHoldGesture_setPosition(QTapAndHoldGesture* self, QPointF* pos) {
	self->setPosition(*pos);
}

void QTapAndHoldGesture_setTimeout(int msecs) {
	QTapAndHoldGesture::setTimeout(static_cast<int>(msecs));
}

int QTapAndHoldGesture_timeout() {
	return QTapAndHoldGesture::timeout();
}

struct miqt_string QTapAndHoldGesture_tr2(const char* s, const char* c) {
	QString _ret = QTapAndHoldGesture::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTapAndHoldGesture_tr3(const char* s, const char* c, int n) {
	QString _ret = QTapAndHoldGesture::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTapAndHoldGesture_trUtf82(const char* s, const char* c) {
	QString _ret = QTapAndHoldGesture::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTapAndHoldGesture_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QTapAndHoldGesture::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTapAndHoldGesture_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTapAndHoldGesture> slot_handle(slot);
	MiqtVirtualQTapAndHoldGesture* self_cast = dynamic_cast<MiqtVirtualQTapAndHoldGesture*>( (QTapAndHoldGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QTapAndHoldGesture_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQTapAndHoldGesture*>(self)->QTapAndHoldGesture::event(event);
}

bool QTapAndHoldGesture_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTapAndHoldGesture> slot_handle(slot);
	MiqtVirtualQTapAndHoldGesture* self_cast = dynamic_cast<MiqtVirtualQTapAndHoldGesture*>( (QTapAndHoldGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QTapAndHoldGesture_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQTapAndHoldGesture*>(self)->QTapAndHoldGesture::eventFilter(watched, event);
}

bool QTapAndHoldGesture_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTapAndHoldGesture> slot_handle(slot);
	MiqtVirtualQTapAndHoldGesture* self_cast = dynamic_cast<MiqtVirtualQTapAndHoldGesture*>( (QTapAndHoldGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QTapAndHoldGesture_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQTapAndHoldGesture*>(self)->QTapAndHoldGesture::timerEvent(event);
}

bool QTapAndHoldGesture_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTapAndHoldGesture> slot_handle(slot);
	MiqtVirtualQTapAndHoldGesture* self_cast = dynamic_cast<MiqtVirtualQTapAndHoldGesture*>( (QTapAndHoldGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QTapAndHoldGesture_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQTapAndHoldGesture*>(self)->QTapAndHoldGesture::childEvent(event);
}

bool QTapAndHoldGesture_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTapAndHoldGesture> slot_handle(slot);
	MiqtVirtualQTapAndHoldGesture* self_cast = dynamic_cast<MiqtVirtualQTapAndHoldGesture*>( (QTapAndHoldGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QTapAndHoldGesture_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQTapAndHoldGesture*>(self)->QTapAndHoldGesture::customEvent(event);
}

bool QTapAndHoldGesture_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTapAndHoldGesture> slot_handle(slot);
	MiqtVirtualQTapAndHoldGesture* self_cast = dynamic_cast<MiqtVirtualQTapAndHoldGesture*>( (QTapAndHoldGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QTapAndHoldGesture_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQTapAndHoldGesture*>(self)->QTapAndHoldGesture::connectNotify(*signal);
}

bool QTapAndHoldGesture_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTapAndHoldGesture> slot_handle(slot);
	MiqtVirtualQTapAndHoldGesture* self_cast = dynamic_cast<MiqtVirtualQTapAndHoldGesture*>( (QTapAndHoldGesture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QTapAndHoldGesture_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQTapAndHoldGesture*>(self)->QTapAndHoldGesture::disconnectNotify(*signal);
}

QObject* QTapAndHoldGesture_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTapAndHoldGesture* self_cast = dynamic_cast<MiqtVirtualQTapAndHoldGesture*>( (QTapAndHoldGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QTapAndHoldGesture_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTapAndHoldGesture* self_cast = dynamic_cast<MiqtVirtualQTapAndHoldGesture*>( (QTapAndHoldGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QTapAndHoldGesture_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQTapAndHoldGesture* self_cast = dynamic_cast<MiqtVirtualQTapAndHoldGesture*>( (QTapAndHoldGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QTapAndHoldGesture_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQTapAndHoldGesture* self_cast = dynamic_cast<MiqtVirtualQTapAndHoldGesture*>( (QTapAndHoldGesture*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QTapAndHoldGesture_delete(QTapAndHoldGesture* self) {
	delete self;
}

QGestureEvent* QGestureEvent_new(struct miqt_array /* of QGesture* */  gestures) {
	QList<QGesture *> gestures_QList;
	gestures_QList.reserve(gestures.len);
	QGesture** gestures_arr = static_cast<QGesture**>(gestures.data);
	for(size_t i = 0; i < gestures.len; ++i) {
		gestures_QList.push_back(gestures_arr[i]);
	}
	return new (std::nothrow) QGestureEvent(gestures_QList);
}

QGestureEvent* QGestureEvent_new2(QGestureEvent* param1) {
	return new (std::nothrow) QGestureEvent(*param1);
}

void QGestureEvent_virtbase(QGestureEvent* src, QEvent** outptr_QEvent) {
	*outptr_QEvent = static_cast<QEvent*>(src);
}

struct miqt_array /* of QGesture* */  QGestureEvent_gestures(const QGestureEvent* self) {
	QList<QGesture *> _ret = self->gestures();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGesture** _arr = static_cast<QGesture**>(malloc(sizeof(QGesture*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QGesture* QGestureEvent_gesture(const QGestureEvent* self, int type) {
	return self->gesture(static_cast<Qt::GestureType>(type));
}

struct miqt_array /* of QGesture* */  QGestureEvent_activeGestures(const QGestureEvent* self) {
	QList<QGesture *> _ret = self->activeGestures();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGesture** _arr = static_cast<QGesture**>(malloc(sizeof(QGesture*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QGesture* */  QGestureEvent_canceledGestures(const QGestureEvent* self) {
	QList<QGesture *> _ret = self->canceledGestures();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGesture** _arr = static_cast<QGesture**>(malloc(sizeof(QGesture*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QGestureEvent_setAccepted(QGestureEvent* self, QGesture* param1, bool param2) {
	self->setAccepted(param1, param2);
}

void QGestureEvent_accept(QGestureEvent* self, QGesture* param1) {
	self->accept(param1);
}

void QGestureEvent_ignore(QGestureEvent* self, QGesture* param1) {
	self->ignore(param1);
}

bool QGestureEvent_isAccepted(const QGestureEvent* self, QGesture* param1) {
	return self->isAccepted(param1);
}

void QGestureEvent_setAccepted2(QGestureEvent* self, int param1, bool param2) {
	self->setAccepted(static_cast<Qt::GestureType>(param1), param2);
}

void QGestureEvent_acceptWithQtGestureType(QGestureEvent* self, int param1) {
	self->accept(static_cast<Qt::GestureType>(param1));
}

void QGestureEvent_ignoreWithQtGestureType(QGestureEvent* self, int param1) {
	self->ignore(static_cast<Qt::GestureType>(param1));
}

bool QGestureEvent_isAcceptedWithQtGestureType(const QGestureEvent* self, int param1) {
	return self->isAccepted(static_cast<Qt::GestureType>(param1));
}

void QGestureEvent_setWidget(QGestureEvent* self, QWidget* widget) {
	self->setWidget(widget);
}

QWidget* QGestureEvent_widget(const QGestureEvent* self) {
	return self->widget();
}

QPointF* QGestureEvent_mapToGraphicsScene(const QGestureEvent* self, QPointF* gesturePoint) {
	return new QPointF(self->mapToGraphicsScene(*gesturePoint));
}

void QGestureEvent_operatorAssign(QGestureEvent* self, QGestureEvent* param1) {
	self->operator=(*param1);
}

void QGestureEvent_delete(QGestureEvent* self) {
	delete self;
}

