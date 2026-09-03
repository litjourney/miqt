#include <memory>
#include <utility>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QHttpMultiPart>
#include <QHttpPart>
#include <QIODevice>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qhttpmultipart.h>
#include "gen_qhttpmultipart.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QHttpMultiPart(intptr_t);
bool miqt_exec_callback_QHttpMultiPart_event(QHttpMultiPart*, intptr_t, QEvent*);
bool miqt_exec_callback_QHttpMultiPart_eventFilter(QHttpMultiPart*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QHttpMultiPart_timerEvent(QHttpMultiPart*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QHttpMultiPart_childEvent(QHttpMultiPart*, intptr_t, QChildEvent*);
void miqt_exec_callback_QHttpMultiPart_customEvent(QHttpMultiPart*, intptr_t, QEvent*);
void miqt_exec_callback_QHttpMultiPart_connectNotify(QHttpMultiPart*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QHttpMultiPart_disconnectNotify(QHttpMultiPart*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

QHttpPart* QHttpPart_new() {
	return new (std::nothrow) QHttpPart();
}

QHttpPart* QHttpPart_new2(QHttpPart* other) {
	return new (std::nothrow) QHttpPart(*other);
}

void QHttpPart_operatorAssign(QHttpPart* self, QHttpPart* other) {
	self->operator=(*other);
}

void QHttpPart_swap(QHttpPart* self, QHttpPart* other) {
	self->swap(*other);
}

bool QHttpPart_operatorEqual(const QHttpPart* self, QHttpPart* other) {
	return (*self == *other);
}

bool QHttpPart_operatorNotEqual(const QHttpPart* self, QHttpPart* other) {
	return (*self != *other);
}

void QHttpPart_setHeader(QHttpPart* self, int header, QVariant* value) {
	self->setHeader(static_cast<QNetworkRequest::KnownHeaders>(header), *value);
}

void QHttpPart_setRawHeader(QHttpPart* self, struct miqt_string headerName, struct miqt_string headerValue) {
	QByteArray headerName_QByteArray(headerName.data, headerName.len);
	QByteArray headerValue_QByteArray(headerValue.data, headerValue.len);
	self->setRawHeader(headerName_QByteArray, headerValue_QByteArray);
}

void QHttpPart_setBody(QHttpPart* self, struct miqt_string body) {
	QByteArray body_QByteArray(body.data, body.len);
	self->setBody(body_QByteArray);
}

void QHttpPart_setBodyDevice(QHttpPart* self, QIODevice* device) {
	self->setBodyDevice(device);
}

void QHttpPart_delete(QHttpPart* self) {
	delete self;
}

class MiqtVirtualQHttpMultiPart final : public QHttpMultiPart {
public:

	MiqtVirtualQHttpMultiPart(): QHttpMultiPart() {}
	MiqtVirtualQHttpMultiPart(QHttpMultiPart::ContentType contentType): QHttpMultiPart(contentType) {}
	MiqtVirtualQHttpMultiPart(QObject* parent): QHttpMultiPart(parent) {}
	MiqtVirtualQHttpMultiPart(QHttpMultiPart::ContentType contentType, QObject* parent): QHttpMultiPart(contentType, parent) {}

	virtual ~MiqtVirtualQHttpMultiPart() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QHttpMultiPart> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QHttpMultiPart::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QHttpMultiPart_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QHttpMultiPart_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QHttpMultiPart> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QHttpMultiPart::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QHttpMultiPart_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QHttpMultiPart_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QHttpMultiPart> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QHttpMultiPart::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QHttpMultiPart_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QHttpMultiPart_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QHttpMultiPart> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QHttpMultiPart::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QHttpMultiPart_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QHttpMultiPart_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QHttpMultiPart> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QHttpMultiPart::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QHttpMultiPart_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QHttpMultiPart_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QHttpMultiPart> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QHttpMultiPart::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QHttpMultiPart_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QHttpMultiPart_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QHttpMultiPart> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QHttpMultiPart::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QHttpMultiPart_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QHttpMultiPart_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QHttpMultiPart_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QHttpMultiPart_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QHttpMultiPart_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QHttpMultiPart_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QHttpMultiPart* QHttpMultiPart_new() {
	return new (std::nothrow) MiqtVirtualQHttpMultiPart();
}

QHttpMultiPart* QHttpMultiPart_new2(int contentType) {
	return new (std::nothrow) MiqtVirtualQHttpMultiPart(static_cast<QHttpMultiPart::ContentType>(contentType));
}

QHttpMultiPart* QHttpMultiPart_new3(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQHttpMultiPart(parent);
}

QHttpMultiPart* QHttpMultiPart_new4(int contentType, QObject* parent) {
	return new (std::nothrow) MiqtVirtualQHttpMultiPart(static_cast<QHttpMultiPart::ContentType>(contentType), parent);
}

void QHttpMultiPart_virtbase(QHttpMultiPart* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QHttpMultiPart_metaObject(const QHttpMultiPart* self) {
	return (QMetaObject*) self->metaObject();
}

void* QHttpMultiPart_metacast(QHttpMultiPart* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QHttpMultiPart_tr(const char* s) {
	QString _ret = QHttpMultiPart::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QHttpMultiPart_append(QHttpMultiPart* self, QHttpPart* httpPart) {
	self->append(*httpPart);
}

void QHttpMultiPart_setContentType(QHttpMultiPart* self, int contentType) {
	self->setContentType(static_cast<QHttpMultiPart::ContentType>(contentType));
}

struct miqt_string QHttpMultiPart_boundary(const QHttpMultiPart* self) {
	QByteArray _qb = self->boundary();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QHttpMultiPart_setBoundary(QHttpMultiPart* self, struct miqt_string boundary) {
	QByteArray boundary_QByteArray(boundary.data, boundary.len);
	self->setBoundary(boundary_QByteArray);
}

struct miqt_string QHttpMultiPart_tr2(const char* s, const char* c) {
	QString _ret = QHttpMultiPart::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QHttpMultiPart_tr3(const char* s, const char* c, int n) {
	QString _ret = QHttpMultiPart::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QHttpMultiPart_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QHttpMultiPart> slot_handle(slot);
	MiqtVirtualQHttpMultiPart* self_cast = dynamic_cast<MiqtVirtualQHttpMultiPart*>( (QHttpMultiPart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QHttpMultiPart_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQHttpMultiPart*>(self)->QHttpMultiPart::event(event);
}

bool QHttpMultiPart_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QHttpMultiPart> slot_handle(slot);
	MiqtVirtualQHttpMultiPart* self_cast = dynamic_cast<MiqtVirtualQHttpMultiPart*>( (QHttpMultiPart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QHttpMultiPart_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQHttpMultiPart*>(self)->QHttpMultiPart::eventFilter(watched, event);
}

bool QHttpMultiPart_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QHttpMultiPart> slot_handle(slot);
	MiqtVirtualQHttpMultiPart* self_cast = dynamic_cast<MiqtVirtualQHttpMultiPart*>( (QHttpMultiPart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QHttpMultiPart_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQHttpMultiPart*>(self)->QHttpMultiPart::timerEvent(event);
}

bool QHttpMultiPart_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QHttpMultiPart> slot_handle(slot);
	MiqtVirtualQHttpMultiPart* self_cast = dynamic_cast<MiqtVirtualQHttpMultiPart*>( (QHttpMultiPart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QHttpMultiPart_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQHttpMultiPart*>(self)->QHttpMultiPart::childEvent(event);
}

bool QHttpMultiPart_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QHttpMultiPart> slot_handle(slot);
	MiqtVirtualQHttpMultiPart* self_cast = dynamic_cast<MiqtVirtualQHttpMultiPart*>( (QHttpMultiPart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QHttpMultiPart_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQHttpMultiPart*>(self)->QHttpMultiPart::customEvent(event);
}

bool QHttpMultiPart_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QHttpMultiPart> slot_handle(slot);
	MiqtVirtualQHttpMultiPart* self_cast = dynamic_cast<MiqtVirtualQHttpMultiPart*>( (QHttpMultiPart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QHttpMultiPart_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQHttpMultiPart*>(self)->QHttpMultiPart::connectNotify(*signal);
}

bool QHttpMultiPart_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QHttpMultiPart> slot_handle(slot);
	MiqtVirtualQHttpMultiPart* self_cast = dynamic_cast<MiqtVirtualQHttpMultiPart*>( (QHttpMultiPart*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QHttpMultiPart_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQHttpMultiPart*>(self)->QHttpMultiPart::disconnectNotify(*signal);
}

QObject* QHttpMultiPart_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHttpMultiPart* self_cast = dynamic_cast<MiqtVirtualQHttpMultiPart*>( (QHttpMultiPart*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QHttpMultiPart_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQHttpMultiPart* self_cast = dynamic_cast<MiqtVirtualQHttpMultiPart*>( (QHttpMultiPart*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QHttpMultiPart_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQHttpMultiPart* self_cast = dynamic_cast<MiqtVirtualQHttpMultiPart*>( (QHttpMultiPart*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QHttpMultiPart_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQHttpMultiPart* self_cast = dynamic_cast<MiqtVirtualQHttpMultiPart*>( (QHttpMultiPart*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QHttpMultiPart_delete(QHttpMultiPart* self) {
	delete self;
}

