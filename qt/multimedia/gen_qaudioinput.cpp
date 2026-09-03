#include <memory>
#include <utility>
#include <QAudioDeviceInfo>
#include <QAudioFormat>
#include <QAudioInput>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qaudioinput.h>
#include "gen_qaudioinput.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QAudioInput(intptr_t);
void miqt_exec_callback_QAudioInput_stateChanged(intptr_t, int);
void miqt_exec_callback_QAudioInput_notify(intptr_t);
bool miqt_exec_callback_QAudioInput_event(QAudioInput*, intptr_t, QEvent*);
bool miqt_exec_callback_QAudioInput_eventFilter(QAudioInput*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAudioInput_timerEvent(QAudioInput*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAudioInput_childEvent(QAudioInput*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAudioInput_customEvent(QAudioInput*, intptr_t, QEvent*);
void miqt_exec_callback_QAudioInput_connectNotify(QAudioInput*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAudioInput_disconnectNotify(QAudioInput*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAudioInput final : public QAudioInput {
public:

	MiqtVirtualQAudioInput(): QAudioInput() {}
	MiqtVirtualQAudioInput(const QAudioDeviceInfo& audioDeviceInfo): QAudioInput(audioDeviceInfo) {}
	MiqtVirtualQAudioInput(const QAudioFormat& format): QAudioInput(format) {}
	MiqtVirtualQAudioInput(const QAudioFormat& format, QObject* parent): QAudioInput(format, parent) {}
	MiqtVirtualQAudioInput(const QAudioDeviceInfo& audioDeviceInfo, const QAudioFormat& format): QAudioInput(audioDeviceInfo, format) {}
	MiqtVirtualQAudioInput(const QAudioDeviceInfo& audioDeviceInfo, const QAudioFormat& format, QObject* parent): QAudioInput(audioDeviceInfo, format, parent) {}

	virtual ~MiqtVirtualQAudioInput() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAudioInput> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QAudioInput::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QAudioInput_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QAudioInput_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAudioInput> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QAudioInput::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QAudioInput_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QAudioInput_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAudioInput> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QAudioInput::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QAudioInput_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QAudioInput_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAudioInput> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QAudioInput::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QAudioInput_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QAudioInput_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAudioInput> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QAudioInput::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QAudioInput_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QAudioInput_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAudioInput> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QAudioInput::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QAudioInput_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QAudioInput_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAudioInput> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QAudioInput::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QAudioInput_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QAudioInput_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QAudioInput_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAudioInput_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAudioInput_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAudioInput_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QAudioInput* QAudioInput_new() {
	return new (std::nothrow) MiqtVirtualQAudioInput();
}

QAudioInput* QAudioInput_new2(QAudioDeviceInfo* audioDeviceInfo) {
	return new (std::nothrow) MiqtVirtualQAudioInput(*audioDeviceInfo);
}

QAudioInput* QAudioInput_new3(QAudioFormat* format) {
	return new (std::nothrow) MiqtVirtualQAudioInput(*format);
}

QAudioInput* QAudioInput_new4(QAudioFormat* format, QObject* parent) {
	return new (std::nothrow) MiqtVirtualQAudioInput(*format, parent);
}

QAudioInput* QAudioInput_new5(QAudioDeviceInfo* audioDeviceInfo, QAudioFormat* format) {
	return new (std::nothrow) MiqtVirtualQAudioInput(*audioDeviceInfo, *format);
}

QAudioInput* QAudioInput_new6(QAudioDeviceInfo* audioDeviceInfo, QAudioFormat* format, QObject* parent) {
	return new (std::nothrow) MiqtVirtualQAudioInput(*audioDeviceInfo, *format, parent);
}

void QAudioInput_virtbase(QAudioInput* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAudioInput_metaObject(const QAudioInput* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAudioInput_metacast(QAudioInput* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAudioInput_tr(const char* s) {
	QString _ret = QAudioInput::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioInput_trUtf8(const char* s) {
	QString _ret = QAudioInput::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAudioFormat* QAudioInput_format(const QAudioInput* self) {
	return new QAudioFormat(self->format());
}

void QAudioInput_start(QAudioInput* self, QIODevice* device) {
	self->start(device);
}

QIODevice* QAudioInput_start2(QAudioInput* self) {
	return self->start();
}

void QAudioInput_stop(QAudioInput* self) {
	self->stop();
}

void QAudioInput_reset(QAudioInput* self) {
	self->reset();
}

void QAudioInput_suspend(QAudioInput* self) {
	self->suspend();
}

void QAudioInput_resume(QAudioInput* self) {
	self->resume();
}

void QAudioInput_setBufferSize(QAudioInput* self, int bytes) {
	self->setBufferSize(static_cast<int>(bytes));
}

int QAudioInput_bufferSize(const QAudioInput* self) {
	return self->bufferSize();
}

int QAudioInput_bytesReady(const QAudioInput* self) {
	return self->bytesReady();
}

int QAudioInput_periodSize(const QAudioInput* self) {
	return self->periodSize();
}

void QAudioInput_setNotifyInterval(QAudioInput* self, int milliSeconds) {
	self->setNotifyInterval(static_cast<int>(milliSeconds));
}

int QAudioInput_notifyInterval(const QAudioInput* self) {
	return self->notifyInterval();
}

void QAudioInput_setVolume(QAudioInput* self, double volume) {
	self->setVolume(static_cast<qreal>(volume));
}

double QAudioInput_volume(const QAudioInput* self) {
	qreal _ret = self->volume();
	return static_cast<double>(_ret);
}

long long QAudioInput_processedUSecs(const QAudioInput* self) {
	qint64 _ret = self->processedUSecs();
	return static_cast<long long>(_ret);
}

long long QAudioInput_elapsedUSecs(const QAudioInput* self) {
	qint64 _ret = self->elapsedUSecs();
	return static_cast<long long>(_ret);
}

int QAudioInput_error(const QAudioInput* self) {
	QAudio::Error _ret = self->error();
	return static_cast<int>(_ret);
}

int QAudioInput_state(const QAudioInput* self) {
	QAudio::State _ret = self->state();
	return static_cast<int>(_ret);
}

void QAudioInput_stateChanged(QAudioInput* self, int state) {
	self->stateChanged(static_cast<QAudio::State>(state));
}

void* QAudioInput_connect_stateChanged(QAudioInput* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAudioInput>>(slot);
	return new QMetaObject::Connection(QAudioInput::connect(self, static_cast<void (QAudioInput::*)(QAudio::State)>(&QAudioInput::stateChanged), self, [slot_handle](QAudio::State state) {
		intptr_t slot = slot_handle->value();
		QAudio::State state_ret = state;
		int sigval1 = static_cast<int>(state_ret);
		miqt_exec_callback_QAudioInput_stateChanged(slot, sigval1);
	}));
}

void QAudioInput_notify(QAudioInput* self) {
	self->notify();
}

void* QAudioInput_connect_notify(QAudioInput* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAudioInput>>(slot);
	return new QMetaObject::Connection(QAudioInput::connect(self, static_cast<void (QAudioInput::*)()>(&QAudioInput::notify), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QAudioInput_notify(slot);
	}));
}

struct miqt_string QAudioInput_tr2(const char* s, const char* c) {
	QString _ret = QAudioInput::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioInput_tr3(const char* s, const char* c, int n) {
	QString _ret = QAudioInput::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioInput_trUtf82(const char* s, const char* c) {
	QString _ret = QAudioInput::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAudioInput_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QAudioInput::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAudioInput_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAudioInput> slot_handle(slot);
	MiqtVirtualQAudioInput* self_cast = dynamic_cast<MiqtVirtualQAudioInput*>( (QAudioInput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QAudioInput_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQAudioInput*>(self)->QAudioInput::event(event);
}

bool QAudioInput_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAudioInput> slot_handle(slot);
	MiqtVirtualQAudioInput* self_cast = dynamic_cast<MiqtVirtualQAudioInput*>( (QAudioInput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QAudioInput_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQAudioInput*>(self)->QAudioInput::eventFilter(watched, event);
}

bool QAudioInput_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAudioInput> slot_handle(slot);
	MiqtVirtualQAudioInput* self_cast = dynamic_cast<MiqtVirtualQAudioInput*>( (QAudioInput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QAudioInput_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQAudioInput*>(self)->QAudioInput::timerEvent(event);
}

bool QAudioInput_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAudioInput> slot_handle(slot);
	MiqtVirtualQAudioInput* self_cast = dynamic_cast<MiqtVirtualQAudioInput*>( (QAudioInput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QAudioInput_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQAudioInput*>(self)->QAudioInput::childEvent(event);
}

bool QAudioInput_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAudioInput> slot_handle(slot);
	MiqtVirtualQAudioInput* self_cast = dynamic_cast<MiqtVirtualQAudioInput*>( (QAudioInput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QAudioInput_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQAudioInput*>(self)->QAudioInput::customEvent(event);
}

bool QAudioInput_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAudioInput> slot_handle(slot);
	MiqtVirtualQAudioInput* self_cast = dynamic_cast<MiqtVirtualQAudioInput*>( (QAudioInput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QAudioInput_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQAudioInput*>(self)->QAudioInput::connectNotify(*signal);
}

bool QAudioInput_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAudioInput> slot_handle(slot);
	MiqtVirtualQAudioInput* self_cast = dynamic_cast<MiqtVirtualQAudioInput*>( (QAudioInput*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QAudioInput_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQAudioInput*>(self)->QAudioInput::disconnectNotify(*signal);
}

QObject* QAudioInput_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAudioInput* self_cast = dynamic_cast<MiqtVirtualQAudioInput*>( (QAudioInput*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QAudioInput_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAudioInput* self_cast = dynamic_cast<MiqtVirtualQAudioInput*>( (QAudioInput*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QAudioInput_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAudioInput* self_cast = dynamic_cast<MiqtVirtualQAudioInput*>( (QAudioInput*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QAudioInput_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAudioInput* self_cast = dynamic_cast<MiqtVirtualQAudioInput*>( (QAudioInput*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QAudioInput_delete(QAudioInput* self) {
	delete self;
}

