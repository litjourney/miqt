#include <memory>
#include <utility>
#include <QChildEvent>
#include <QEvent>
#include <QEventLoop>
#include <QEventLoopLocker>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <qeventloop.h>
#include "gen_qeventloop.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QEventLoop(intptr_t);
bool miqt_exec_callback_QEventLoop_event(QEventLoop*, intptr_t, QEvent*);
bool miqt_exec_callback_QEventLoop_eventFilter(QEventLoop*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QEventLoop_timerEvent(QEventLoop*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QEventLoop_childEvent(QEventLoop*, intptr_t, QChildEvent*);
void miqt_exec_callback_QEventLoop_customEvent(QEventLoop*, intptr_t, QEvent*);
void miqt_exec_callback_QEventLoop_connectNotify(QEventLoop*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QEventLoop_disconnectNotify(QEventLoop*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQEventLoop final : public QEventLoop {
public:

	MiqtVirtualQEventLoop(): QEventLoop() {}
	MiqtVirtualQEventLoop(QObject* parent): QEventLoop(parent) {}

	virtual ~MiqtVirtualQEventLoop() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QEventLoop> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QEventLoop::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QEventLoop_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QEventLoop_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QEventLoop> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QEventLoop::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QEventLoop_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QEventLoop_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QEventLoop> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QEventLoop::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QEventLoop_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QEventLoop_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QEventLoop> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QEventLoop::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QEventLoop_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QEventLoop_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QEventLoop> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QEventLoop::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QEventLoop_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QEventLoop_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QEventLoop> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QEventLoop::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QEventLoop_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QEventLoop_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QEventLoop> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QEventLoop::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QEventLoop_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QEventLoop_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QEventLoop_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QEventLoop_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QEventLoop_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QEventLoop_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QEventLoop* QEventLoop_new() {
	return new (std::nothrow) MiqtVirtualQEventLoop();
}

QEventLoop* QEventLoop_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQEventLoop(parent);
}

void QEventLoop_virtbase(QEventLoop* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QEventLoop_metaObject(const QEventLoop* self) {
	return (QMetaObject*) self->metaObject();
}

void* QEventLoop_metacast(QEventLoop* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QEventLoop_tr(const char* s) {
	QString _ret = QEventLoop::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QEventLoop_processEvents(QEventLoop* self) {
	return self->processEvents();
}

void QEventLoop_processEvents2(QEventLoop* self, int flags, int maximumTime) {
	self->processEvents(static_cast<QEventLoop::ProcessEventsFlags>(flags), static_cast<int>(maximumTime));
}

int QEventLoop_exec(QEventLoop* self) {
	return self->exec();
}

bool QEventLoop_isRunning(const QEventLoop* self) {
	return self->isRunning();
}

void QEventLoop_wakeUp(QEventLoop* self) {
	self->wakeUp();
}

bool QEventLoop_event(QEventLoop* self, QEvent* event) {
	return self->event(event);
}

void QEventLoop_exit(QEventLoop* self) {
	self->exit();
}

void QEventLoop_quit(QEventLoop* self) {
	self->quit();
}

struct miqt_string QEventLoop_tr2(const char* s, const char* c) {
	QString _ret = QEventLoop::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QEventLoop_tr3(const char* s, const char* c, int n) {
	QString _ret = QEventLoop::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QEventLoop_processEventsWithFlags(QEventLoop* self, int flags) {
	return self->processEvents(static_cast<QEventLoop::ProcessEventsFlags>(flags));
}

int QEventLoop_execWithFlags(QEventLoop* self, int flags) {
	return self->exec(static_cast<QEventLoop::ProcessEventsFlags>(flags));
}

void QEventLoop_exitWithReturnCode(QEventLoop* self, int returnCode) {
	self->exit(static_cast<int>(returnCode));
}

bool QEventLoop_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QEventLoop> slot_handle(slot);
	MiqtVirtualQEventLoop* self_cast = dynamic_cast<MiqtVirtualQEventLoop*>( (QEventLoop*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QEventLoop_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQEventLoop*>(self)->QEventLoop::event(event);
}

bool QEventLoop_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QEventLoop> slot_handle(slot);
	MiqtVirtualQEventLoop* self_cast = dynamic_cast<MiqtVirtualQEventLoop*>( (QEventLoop*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QEventLoop_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQEventLoop*>(self)->QEventLoop::eventFilter(watched, event);
}

bool QEventLoop_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QEventLoop> slot_handle(slot);
	MiqtVirtualQEventLoop* self_cast = dynamic_cast<MiqtVirtualQEventLoop*>( (QEventLoop*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QEventLoop_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQEventLoop*>(self)->QEventLoop::timerEvent(event);
}

bool QEventLoop_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QEventLoop> slot_handle(slot);
	MiqtVirtualQEventLoop* self_cast = dynamic_cast<MiqtVirtualQEventLoop*>( (QEventLoop*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QEventLoop_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQEventLoop*>(self)->QEventLoop::childEvent(event);
}

bool QEventLoop_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QEventLoop> slot_handle(slot);
	MiqtVirtualQEventLoop* self_cast = dynamic_cast<MiqtVirtualQEventLoop*>( (QEventLoop*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QEventLoop_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQEventLoop*>(self)->QEventLoop::customEvent(event);
}

bool QEventLoop_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QEventLoop> slot_handle(slot);
	MiqtVirtualQEventLoop* self_cast = dynamic_cast<MiqtVirtualQEventLoop*>( (QEventLoop*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QEventLoop_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQEventLoop*>(self)->QEventLoop::connectNotify(*signal);
}

bool QEventLoop_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QEventLoop> slot_handle(slot);
	MiqtVirtualQEventLoop* self_cast = dynamic_cast<MiqtVirtualQEventLoop*>( (QEventLoop*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QEventLoop_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQEventLoop*>(self)->QEventLoop::disconnectNotify(*signal);
}

QObject* QEventLoop_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQEventLoop* self_cast = dynamic_cast<MiqtVirtualQEventLoop*>( (QEventLoop*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QEventLoop_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQEventLoop* self_cast = dynamic_cast<MiqtVirtualQEventLoop*>( (QEventLoop*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QEventLoop_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQEventLoop* self_cast = dynamic_cast<MiqtVirtualQEventLoop*>( (QEventLoop*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QEventLoop_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQEventLoop* self_cast = dynamic_cast<MiqtVirtualQEventLoop*>( (QEventLoop*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QEventLoop_delete(QEventLoop* self) {
	delete self;
}

QEventLoopLocker* QEventLoopLocker_new() {
	return new (std::nothrow) QEventLoopLocker();
}

QEventLoopLocker* QEventLoopLocker_new2(QEventLoop* loop) {
	return new (std::nothrow) QEventLoopLocker(loop);
}

QEventLoopLocker* QEventLoopLocker_new3(QThread* thread) {
	return new (std::nothrow) QEventLoopLocker(thread);
}

void QEventLoopLocker_delete(QEventLoopLocker* self) {
	delete self;
}

