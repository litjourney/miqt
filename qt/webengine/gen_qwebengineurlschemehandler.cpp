#include <memory>
#include <utility>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWebEngineUrlRequestJob>
#include <QWebEngineUrlSchemeHandler>
#include <qwebengineurlschemehandler.h>
#include "gen_qwebengineurlschemehandler.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QWebEngineUrlSchemeHandler(intptr_t);
void miqt_exec_callback_QWebEngineUrlSchemeHandler_requestStarted(QWebEngineUrlSchemeHandler*, intptr_t, QWebEngineUrlRequestJob*);
bool miqt_exec_callback_QWebEngineUrlSchemeHandler_event(QWebEngineUrlSchemeHandler*, intptr_t, QEvent*);
bool miqt_exec_callback_QWebEngineUrlSchemeHandler_eventFilter(QWebEngineUrlSchemeHandler*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QWebEngineUrlSchemeHandler_timerEvent(QWebEngineUrlSchemeHandler*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QWebEngineUrlSchemeHandler_childEvent(QWebEngineUrlSchemeHandler*, intptr_t, QChildEvent*);
void miqt_exec_callback_QWebEngineUrlSchemeHandler_customEvent(QWebEngineUrlSchemeHandler*, intptr_t, QEvent*);
void miqt_exec_callback_QWebEngineUrlSchemeHandler_connectNotify(QWebEngineUrlSchemeHandler*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QWebEngineUrlSchemeHandler_disconnectNotify(QWebEngineUrlSchemeHandler*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQWebEngineUrlSchemeHandler final : public QWebEngineUrlSchemeHandler {
public:

	MiqtVirtualQWebEngineUrlSchemeHandler(): QWebEngineUrlSchemeHandler() {}
	MiqtVirtualQWebEngineUrlSchemeHandler(QObject* parent): QWebEngineUrlSchemeHandler(parent) {}

	virtual ~MiqtVirtualQWebEngineUrlSchemeHandler() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineUrlSchemeHandler> handle__requestStarted;

	// Subclass to allow providing a Go implementation
	virtual void requestStarted(QWebEngineUrlRequestJob* param1) override {
		if (!handle__requestStarted) {
			return; // Pure virtual, there is no base we can call
		}

		QWebEngineUrlRequestJob* sigval1 = param1;
		miqt_exec_callback_QWebEngineUrlSchemeHandler_requestStarted(this, handle__requestStarted.value(), sigval1);

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineUrlSchemeHandler> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QWebEngineUrlSchemeHandler::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QWebEngineUrlSchemeHandler_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QWebEngineUrlSchemeHandler_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineUrlSchemeHandler> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QWebEngineUrlSchemeHandler::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QWebEngineUrlSchemeHandler_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QWebEngineUrlSchemeHandler_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineUrlSchemeHandler> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QWebEngineUrlSchemeHandler::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QWebEngineUrlSchemeHandler_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QWebEngineUrlSchemeHandler_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineUrlSchemeHandler> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QWebEngineUrlSchemeHandler::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QWebEngineUrlSchemeHandler_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QWebEngineUrlSchemeHandler_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineUrlSchemeHandler> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QWebEngineUrlSchemeHandler::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QWebEngineUrlSchemeHandler_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QWebEngineUrlSchemeHandler_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineUrlSchemeHandler> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QWebEngineUrlSchemeHandler::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QWebEngineUrlSchemeHandler_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QWebEngineUrlSchemeHandler_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineUrlSchemeHandler> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QWebEngineUrlSchemeHandler::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QWebEngineUrlSchemeHandler_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QWebEngineUrlSchemeHandler_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QWebEngineUrlSchemeHandler_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QWebEngineUrlSchemeHandler_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QWebEngineUrlSchemeHandler_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QWebEngineUrlSchemeHandler_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QWebEngineUrlSchemeHandler* QWebEngineUrlSchemeHandler_new() {
	return new (std::nothrow) MiqtVirtualQWebEngineUrlSchemeHandler();
}

QWebEngineUrlSchemeHandler* QWebEngineUrlSchemeHandler_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQWebEngineUrlSchemeHandler(parent);
}

void QWebEngineUrlSchemeHandler_virtbase(QWebEngineUrlSchemeHandler* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QWebEngineUrlSchemeHandler_metaObject(const QWebEngineUrlSchemeHandler* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebEngineUrlSchemeHandler_metacast(QWebEngineUrlSchemeHandler* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebEngineUrlSchemeHandler_tr(const char* s) {
	QString _ret = QWebEngineUrlSchemeHandler::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineUrlSchemeHandler_trUtf8(const char* s) {
	QString _ret = QWebEngineUrlSchemeHandler::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineUrlSchemeHandler_requestStarted(QWebEngineUrlSchemeHandler* self, QWebEngineUrlRequestJob* param1) {
	self->requestStarted(param1);
}

struct miqt_string QWebEngineUrlSchemeHandler_tr2(const char* s, const char* c) {
	QString _ret = QWebEngineUrlSchemeHandler::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineUrlSchemeHandler_tr3(const char* s, const char* c, int n) {
	QString _ret = QWebEngineUrlSchemeHandler::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineUrlSchemeHandler_trUtf82(const char* s, const char* c) {
	QString _ret = QWebEngineUrlSchemeHandler::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineUrlSchemeHandler_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QWebEngineUrlSchemeHandler::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QWebEngineUrlSchemeHandler_override_virtual_requestStarted(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineUrlSchemeHandler> slot_handle(slot);
	MiqtVirtualQWebEngineUrlSchemeHandler* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlSchemeHandler*>( (QWebEngineUrlSchemeHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__requestStarted = std::move(slot_handle);
	return true;
}

bool QWebEngineUrlSchemeHandler_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineUrlSchemeHandler> slot_handle(slot);
	MiqtVirtualQWebEngineUrlSchemeHandler* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlSchemeHandler*>( (QWebEngineUrlSchemeHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QWebEngineUrlSchemeHandler_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQWebEngineUrlSchemeHandler*>(self)->QWebEngineUrlSchemeHandler::event(event);
}

bool QWebEngineUrlSchemeHandler_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineUrlSchemeHandler> slot_handle(slot);
	MiqtVirtualQWebEngineUrlSchemeHandler* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlSchemeHandler*>( (QWebEngineUrlSchemeHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QWebEngineUrlSchemeHandler_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQWebEngineUrlSchemeHandler*>(self)->QWebEngineUrlSchemeHandler::eventFilter(watched, event);
}

bool QWebEngineUrlSchemeHandler_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineUrlSchemeHandler> slot_handle(slot);
	MiqtVirtualQWebEngineUrlSchemeHandler* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlSchemeHandler*>( (QWebEngineUrlSchemeHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QWebEngineUrlSchemeHandler_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQWebEngineUrlSchemeHandler*>(self)->QWebEngineUrlSchemeHandler::timerEvent(event);
}

bool QWebEngineUrlSchemeHandler_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineUrlSchemeHandler> slot_handle(slot);
	MiqtVirtualQWebEngineUrlSchemeHandler* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlSchemeHandler*>( (QWebEngineUrlSchemeHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QWebEngineUrlSchemeHandler_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQWebEngineUrlSchemeHandler*>(self)->QWebEngineUrlSchemeHandler::childEvent(event);
}

bool QWebEngineUrlSchemeHandler_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineUrlSchemeHandler> slot_handle(slot);
	MiqtVirtualQWebEngineUrlSchemeHandler* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlSchemeHandler*>( (QWebEngineUrlSchemeHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QWebEngineUrlSchemeHandler_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQWebEngineUrlSchemeHandler*>(self)->QWebEngineUrlSchemeHandler::customEvent(event);
}

bool QWebEngineUrlSchemeHandler_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineUrlSchemeHandler> slot_handle(slot);
	MiqtVirtualQWebEngineUrlSchemeHandler* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlSchemeHandler*>( (QWebEngineUrlSchemeHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QWebEngineUrlSchemeHandler_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQWebEngineUrlSchemeHandler*>(self)->QWebEngineUrlSchemeHandler::connectNotify(*signal);
}

bool QWebEngineUrlSchemeHandler_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineUrlSchemeHandler> slot_handle(slot);
	MiqtVirtualQWebEngineUrlSchemeHandler* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlSchemeHandler*>( (QWebEngineUrlSchemeHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QWebEngineUrlSchemeHandler_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQWebEngineUrlSchemeHandler*>(self)->QWebEngineUrlSchemeHandler::disconnectNotify(*signal);
}

QObject* QWebEngineUrlSchemeHandler_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWebEngineUrlSchemeHandler* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlSchemeHandler*>( (QWebEngineUrlSchemeHandler*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QWebEngineUrlSchemeHandler_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWebEngineUrlSchemeHandler* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlSchemeHandler*>( (QWebEngineUrlSchemeHandler*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QWebEngineUrlSchemeHandler_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQWebEngineUrlSchemeHandler* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlSchemeHandler*>( (QWebEngineUrlSchemeHandler*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QWebEngineUrlSchemeHandler_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQWebEngineUrlSchemeHandler* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlSchemeHandler*>( (QWebEngineUrlSchemeHandler*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QWebEngineUrlSchemeHandler_delete(QWebEngineUrlSchemeHandler* self) {
	delete self;
}

