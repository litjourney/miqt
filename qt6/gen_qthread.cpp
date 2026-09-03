#include <memory>
#include <utility>
#include <QAbstractEventDispatcher>
#include <QChildEvent>
#include <QDeadlineTimer>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <qthread.h>
#include "gen_qthread.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QThread(intptr_t);
void miqt_exec_callback_QThread_started(intptr_t);
void miqt_exec_callback_QThread_finished(intptr_t);
bool miqt_exec_callback_QThread_event(QThread*, intptr_t, QEvent*);
void miqt_exec_callback_QThread_run(QThread*, intptr_t);
bool miqt_exec_callback_QThread_eventFilter(QThread*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QThread_timerEvent(QThread*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QThread_childEvent(QThread*, intptr_t, QChildEvent*);
void miqt_exec_callback_QThread_customEvent(QThread*, intptr_t, QEvent*);
void miqt_exec_callback_QThread_connectNotify(QThread*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QThread_disconnectNotify(QThread*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQThread final : public QThread {
public:

	MiqtVirtualQThread(): QThread() {}
	MiqtVirtualQThread(QObject* parent): QThread(parent) {}

	virtual ~MiqtVirtualQThread() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QThread> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QThread::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QThread_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QThread_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QThread> handle__run;

	// Subclass to allow providing a Go implementation
	virtual void run() override {
		if (!handle__run) {
			QThread::run();
			return;
		}

		miqt_exec_callback_QThread_run(this, handle__run.value());

	}

	friend void QThread_virtualbase_run(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QThread> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QThread::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QThread_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QThread_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QThread> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QThread::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QThread_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QThread_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QThread> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QThread::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QThread_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QThread_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QThread> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QThread::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QThread_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QThread_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QThread> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QThread::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QThread_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QThread_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QThread> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QThread::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QThread_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QThread_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend int QThread_protectedbase_exec(bool* _dynamic_cast_ok, void* self);
	friend QObject* QThread_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QThread_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QThread_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QThread_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QThread* QThread_new() {
	return new (std::nothrow) MiqtVirtualQThread();
}

QThread* QThread_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQThread(parent);
}

void QThread_virtbase(QThread* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QThread_metaObject(const QThread* self) {
	return (QMetaObject*) self->metaObject();
}

void* QThread_metacast(QThread* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QThread_tr(const char* s) {
	QString _ret = QThread::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void* QThread_currentThreadId() {
	Qt::HANDLE _ret = QThread::currentThreadId();
	return static_cast<void*>(_ret);
}

QThread* QThread_currentThread() {
	return QThread::currentThread();
}

int QThread_idealThreadCount() {
	return QThread::idealThreadCount();
}

void QThread_yieldCurrentThread() {
	QThread::yieldCurrentThread();
}

void QThread_setPriority(QThread* self, int priority) {
	self->setPriority(static_cast<QThread::Priority>(priority));
}

int QThread_priority(const QThread* self) {
	QThread::Priority _ret = self->priority();
	return static_cast<int>(_ret);
}

bool QThread_isFinished(const QThread* self) {
	return self->isFinished();
}

bool QThread_isRunning(const QThread* self) {
	return self->isRunning();
}

void QThread_requestInterruption(QThread* self) {
	self->requestInterruption();
}

bool QThread_isInterruptionRequested(const QThread* self) {
	return self->isInterruptionRequested();
}

void QThread_setStackSize(QThread* self, unsigned int stackSize) {
	self->setStackSize(static_cast<uint>(stackSize));
}

unsigned int QThread_stackSize(const QThread* self) {
	uint _ret = self->stackSize();
	return static_cast<unsigned int>(_ret);
}

QAbstractEventDispatcher* QThread_eventDispatcher(const QThread* self) {
	return self->eventDispatcher();
}

void QThread_setEventDispatcher(QThread* self, QAbstractEventDispatcher* eventDispatcher) {
	self->setEventDispatcher(eventDispatcher);
}

bool QThread_event(QThread* self, QEvent* event) {
	return self->event(event);
}

int QThread_loopLevel(const QThread* self) {
	return self->loopLevel();
}

void QThread_start(QThread* self) {
	self->start();
}

void QThread_terminate(QThread* self) {
	self->terminate();
}

void QThread_exit(QThread* self) {
	self->exit();
}

void QThread_quit(QThread* self) {
	self->quit();
}

bool QThread_wait(QThread* self) {
	return self->wait();
}

bool QThread_waitWithTime(QThread* self, unsigned long time) {
	return self->wait(static_cast<unsigned long>(time));
}

void QThread_sleep(unsigned long param1) {
	QThread::sleep(static_cast<unsigned long>(param1));
}

void QThread_msleep(unsigned long param1) {
	QThread::msleep(static_cast<unsigned long>(param1));
}

void QThread_usleep(unsigned long param1) {
	QThread::usleep(static_cast<unsigned long>(param1));
}

struct miqt_string QThread_tr2(const char* s, const char* c) {
	QString _ret = QThread::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QThread_tr3(const char* s, const char* c, int n) {
	QString _ret = QThread::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QThread_startWithQThreadPriority(QThread* self, int param1) {
	self->start(static_cast<QThread::Priority>(param1));
}

void QThread_exitWithRetcode(QThread* self, int retcode) {
	self->exit(static_cast<int>(retcode));
}

bool QThread_waitWithDeadline(QThread* self, QDeadlineTimer* deadline) {
	return self->wait(*deadline);
}

bool QThread_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QThread> slot_handle(slot);
	MiqtVirtualQThread* self_cast = dynamic_cast<MiqtVirtualQThread*>( (QThread*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QThread_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQThread*>(self)->QThread::event(event);
}

bool QThread_override_virtual_run(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QThread> slot_handle(slot);
	MiqtVirtualQThread* self_cast = dynamic_cast<MiqtVirtualQThread*>( (QThread*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__run = std::move(slot_handle);
	return true;
}

void QThread_virtualbase_run(void* self) {
	static_cast<MiqtVirtualQThread*>(self)->QThread::run();
}

bool QThread_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QThread> slot_handle(slot);
	MiqtVirtualQThread* self_cast = dynamic_cast<MiqtVirtualQThread*>( (QThread*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QThread_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQThread*>(self)->QThread::eventFilter(watched, event);
}

bool QThread_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QThread> slot_handle(slot);
	MiqtVirtualQThread* self_cast = dynamic_cast<MiqtVirtualQThread*>( (QThread*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QThread_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQThread*>(self)->QThread::timerEvent(event);
}

bool QThread_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QThread> slot_handle(slot);
	MiqtVirtualQThread* self_cast = dynamic_cast<MiqtVirtualQThread*>( (QThread*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QThread_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQThread*>(self)->QThread::childEvent(event);
}

bool QThread_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QThread> slot_handle(slot);
	MiqtVirtualQThread* self_cast = dynamic_cast<MiqtVirtualQThread*>( (QThread*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QThread_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQThread*>(self)->QThread::customEvent(event);
}

bool QThread_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QThread> slot_handle(slot);
	MiqtVirtualQThread* self_cast = dynamic_cast<MiqtVirtualQThread*>( (QThread*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QThread_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQThread*>(self)->QThread::connectNotify(*signal);
}

bool QThread_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QThread> slot_handle(slot);
	MiqtVirtualQThread* self_cast = dynamic_cast<MiqtVirtualQThread*>( (QThread*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QThread_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQThread*>(self)->QThread::disconnectNotify(*signal);
}

int QThread_protectedbase_exec(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQThread* self_cast = dynamic_cast<MiqtVirtualQThread*>( (QThread*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->exec();
}

QObject* QThread_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQThread* self_cast = dynamic_cast<MiqtVirtualQThread*>( (QThread*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QThread_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQThread* self_cast = dynamic_cast<MiqtVirtualQThread*>( (QThread*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QThread_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQThread* self_cast = dynamic_cast<MiqtVirtualQThread*>( (QThread*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QThread_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQThread* self_cast = dynamic_cast<MiqtVirtualQThread*>( (QThread*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void* QThread_connect_started(QThread* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QThread>>(slot);
	return new QMetaObject::Connection(QThread::connect(self, &QThread::started, self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QThread_started(slot);
	}));
}

void* QThread_connect_finished(QThread* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QThread>>(slot);
	return new QMetaObject::Connection(QThread::connect(self, &QThread::finished, self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QThread_finished(slot);
	}));
}

void QThread_delete(QThread* self) {
	delete self;
}

