#include <memory>
#include <utility>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QObjectCleanupHandler>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qobjectcleanuphandler.h>
#include "gen_qobjectcleanuphandler.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QObjectCleanupHandler(intptr_t);
bool miqt_exec_callback_QObjectCleanupHandler_event(QObjectCleanupHandler*, intptr_t, QEvent*);
bool miqt_exec_callback_QObjectCleanupHandler_eventFilter(QObjectCleanupHandler*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QObjectCleanupHandler_timerEvent(QObjectCleanupHandler*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QObjectCleanupHandler_childEvent(QObjectCleanupHandler*, intptr_t, QChildEvent*);
void miqt_exec_callback_QObjectCleanupHandler_customEvent(QObjectCleanupHandler*, intptr_t, QEvent*);
void miqt_exec_callback_QObjectCleanupHandler_connectNotify(QObjectCleanupHandler*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QObjectCleanupHandler_disconnectNotify(QObjectCleanupHandler*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQObjectCleanupHandler final : public QObjectCleanupHandler {
public:

	MiqtVirtualQObjectCleanupHandler(): QObjectCleanupHandler() {}

	virtual ~MiqtVirtualQObjectCleanupHandler() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QObjectCleanupHandler> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QObjectCleanupHandler::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QObjectCleanupHandler_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QObjectCleanupHandler_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QObjectCleanupHandler> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QObjectCleanupHandler::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QObjectCleanupHandler_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QObjectCleanupHandler_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QObjectCleanupHandler> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QObjectCleanupHandler::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QObjectCleanupHandler_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QObjectCleanupHandler_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QObjectCleanupHandler> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QObjectCleanupHandler::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QObjectCleanupHandler_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QObjectCleanupHandler_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QObjectCleanupHandler> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QObjectCleanupHandler::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QObjectCleanupHandler_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QObjectCleanupHandler_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QObjectCleanupHandler> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QObjectCleanupHandler::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QObjectCleanupHandler_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QObjectCleanupHandler_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QObjectCleanupHandler> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QObjectCleanupHandler::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QObjectCleanupHandler_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QObjectCleanupHandler_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QObjectCleanupHandler_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QObjectCleanupHandler_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QObjectCleanupHandler_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QObjectCleanupHandler_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QObjectCleanupHandler* QObjectCleanupHandler_new() {
	return new (std::nothrow) MiqtVirtualQObjectCleanupHandler();
}

void QObjectCleanupHandler_virtbase(QObjectCleanupHandler* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QObjectCleanupHandler_metaObject(const QObjectCleanupHandler* self) {
	return (QMetaObject*) self->metaObject();
}

void* QObjectCleanupHandler_metacast(QObjectCleanupHandler* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QObjectCleanupHandler_tr(const char* s) {
	QString _ret = QObjectCleanupHandler::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QObjectCleanupHandler_trUtf8(const char* s) {
	QString _ret = QObjectCleanupHandler::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QObject* QObjectCleanupHandler_add(QObjectCleanupHandler* self, QObject* object) {
	return self->add(object);
}

void QObjectCleanupHandler_remove(QObjectCleanupHandler* self, QObject* object) {
	self->remove(object);
}

bool QObjectCleanupHandler_isEmpty(const QObjectCleanupHandler* self) {
	return self->isEmpty();
}

void QObjectCleanupHandler_clear(QObjectCleanupHandler* self) {
	self->clear();
}

struct miqt_string QObjectCleanupHandler_tr2(const char* s, const char* c) {
	QString _ret = QObjectCleanupHandler::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QObjectCleanupHandler_tr3(const char* s, const char* c, int n) {
	QString _ret = QObjectCleanupHandler::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QObjectCleanupHandler_trUtf82(const char* s, const char* c) {
	QString _ret = QObjectCleanupHandler::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QObjectCleanupHandler_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QObjectCleanupHandler::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QObjectCleanupHandler_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QObjectCleanupHandler> slot_handle(slot);
	MiqtVirtualQObjectCleanupHandler* self_cast = dynamic_cast<MiqtVirtualQObjectCleanupHandler*>( (QObjectCleanupHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QObjectCleanupHandler_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQObjectCleanupHandler*>(self)->QObjectCleanupHandler::event(event);
}

bool QObjectCleanupHandler_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QObjectCleanupHandler> slot_handle(slot);
	MiqtVirtualQObjectCleanupHandler* self_cast = dynamic_cast<MiqtVirtualQObjectCleanupHandler*>( (QObjectCleanupHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QObjectCleanupHandler_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQObjectCleanupHandler*>(self)->QObjectCleanupHandler::eventFilter(watched, event);
}

bool QObjectCleanupHandler_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QObjectCleanupHandler> slot_handle(slot);
	MiqtVirtualQObjectCleanupHandler* self_cast = dynamic_cast<MiqtVirtualQObjectCleanupHandler*>( (QObjectCleanupHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QObjectCleanupHandler_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQObjectCleanupHandler*>(self)->QObjectCleanupHandler::timerEvent(event);
}

bool QObjectCleanupHandler_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QObjectCleanupHandler> slot_handle(slot);
	MiqtVirtualQObjectCleanupHandler* self_cast = dynamic_cast<MiqtVirtualQObjectCleanupHandler*>( (QObjectCleanupHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QObjectCleanupHandler_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQObjectCleanupHandler*>(self)->QObjectCleanupHandler::childEvent(event);
}

bool QObjectCleanupHandler_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QObjectCleanupHandler> slot_handle(slot);
	MiqtVirtualQObjectCleanupHandler* self_cast = dynamic_cast<MiqtVirtualQObjectCleanupHandler*>( (QObjectCleanupHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QObjectCleanupHandler_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQObjectCleanupHandler*>(self)->QObjectCleanupHandler::customEvent(event);
}

bool QObjectCleanupHandler_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QObjectCleanupHandler> slot_handle(slot);
	MiqtVirtualQObjectCleanupHandler* self_cast = dynamic_cast<MiqtVirtualQObjectCleanupHandler*>( (QObjectCleanupHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QObjectCleanupHandler_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQObjectCleanupHandler*>(self)->QObjectCleanupHandler::connectNotify(*signal);
}

bool QObjectCleanupHandler_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QObjectCleanupHandler> slot_handle(slot);
	MiqtVirtualQObjectCleanupHandler* self_cast = dynamic_cast<MiqtVirtualQObjectCleanupHandler*>( (QObjectCleanupHandler*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QObjectCleanupHandler_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQObjectCleanupHandler*>(self)->QObjectCleanupHandler::disconnectNotify(*signal);
}

QObject* QObjectCleanupHandler_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQObjectCleanupHandler* self_cast = dynamic_cast<MiqtVirtualQObjectCleanupHandler*>( (QObjectCleanupHandler*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QObjectCleanupHandler_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQObjectCleanupHandler* self_cast = dynamic_cast<MiqtVirtualQObjectCleanupHandler*>( (QObjectCleanupHandler*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QObjectCleanupHandler_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQObjectCleanupHandler* self_cast = dynamic_cast<MiqtVirtualQObjectCleanupHandler*>( (QObjectCleanupHandler*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QObjectCleanupHandler_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQObjectCleanupHandler* self_cast = dynamic_cast<MiqtVirtualQObjectCleanupHandler*>( (QObjectCleanupHandler*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QObjectCleanupHandler_delete(QObjectCleanupHandler* self) {
	delete self;
}

