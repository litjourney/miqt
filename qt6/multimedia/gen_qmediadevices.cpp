#include <memory>
#include <utility>
#include <QAudioDevice>
#include <QCameraDevice>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMediaDevices>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qmediadevices.h>
#include "gen_qmediadevices.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QMediaDevices(intptr_t);
void miqt_exec_callback_QMediaDevices_audioInputsChanged(intptr_t);
void miqt_exec_callback_QMediaDevices_audioOutputsChanged(intptr_t);
void miqt_exec_callback_QMediaDevices_videoInputsChanged(intptr_t);
bool miqt_exec_callback_QMediaDevices_event(QMediaDevices*, intptr_t, QEvent*);
bool miqt_exec_callback_QMediaDevices_eventFilter(QMediaDevices*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QMediaDevices_timerEvent(QMediaDevices*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QMediaDevices_childEvent(QMediaDevices*, intptr_t, QChildEvent*);
void miqt_exec_callback_QMediaDevices_customEvent(QMediaDevices*, intptr_t, QEvent*);
void miqt_exec_callback_QMediaDevices_connectNotify(QMediaDevices*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QMediaDevices_disconnectNotify(QMediaDevices*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQMediaDevices final : public QMediaDevices {
public:

	MiqtVirtualQMediaDevices(): QMediaDevices() {}
	MiqtVirtualQMediaDevices(QObject* parent): QMediaDevices(parent) {}

	virtual ~MiqtVirtualQMediaDevices() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMediaDevices> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QMediaDevices::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QMediaDevices_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QMediaDevices_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMediaDevices> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QMediaDevices::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QMediaDevices_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QMediaDevices_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMediaDevices> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QMediaDevices::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QMediaDevices_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QMediaDevices_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMediaDevices> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QMediaDevices::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QMediaDevices_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QMediaDevices_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMediaDevices> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QMediaDevices::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QMediaDevices_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QMediaDevices_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMediaDevices> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QMediaDevices::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QMediaDevices_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QMediaDevices_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMediaDevices> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QMediaDevices::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QMediaDevices_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QMediaDevices_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QMediaDevices_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QMediaDevices_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QMediaDevices_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QMediaDevices_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QMediaDevices* QMediaDevices_new() {
	return new (std::nothrow) MiqtVirtualQMediaDevices();
}

QMediaDevices* QMediaDevices_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQMediaDevices(parent);
}

void QMediaDevices_virtbase(QMediaDevices* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QMediaDevices_metaObject(const QMediaDevices* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMediaDevices_metacast(QMediaDevices* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMediaDevices_tr(const char* s) {
	QString _ret = QMediaDevices::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QAudioDevice* */  QMediaDevices_audioInputs() {
	QList<QAudioDevice> _ret = QMediaDevices::audioInputs();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAudioDevice** _arr = static_cast<QAudioDevice**>(malloc(sizeof(QAudioDevice*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QAudioDevice(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QAudioDevice* */  QMediaDevices_audioOutputs() {
	QList<QAudioDevice> _ret = QMediaDevices::audioOutputs();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAudioDevice** _arr = static_cast<QAudioDevice**>(malloc(sizeof(QAudioDevice*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QAudioDevice(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QCameraDevice* */  QMediaDevices_videoInputs() {
	QList<QCameraDevice> _ret = QMediaDevices::videoInputs();
	// Convert QList<> from C++ memory to manually-managed C memory
	QCameraDevice** _arr = static_cast<QCameraDevice**>(malloc(sizeof(QCameraDevice*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QCameraDevice(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QAudioDevice* QMediaDevices_defaultAudioInput() {
	return new QAudioDevice(QMediaDevices::defaultAudioInput());
}

QAudioDevice* QMediaDevices_defaultAudioOutput() {
	return new QAudioDevice(QMediaDevices::defaultAudioOutput());
}

QCameraDevice* QMediaDevices_defaultVideoInput() {
	return new QCameraDevice(QMediaDevices::defaultVideoInput());
}

void QMediaDevices_audioInputsChanged(QMediaDevices* self) {
	self->audioInputsChanged();
}

void* QMediaDevices_connect_audioInputsChanged(QMediaDevices* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QMediaDevices>>(slot);
	return new QMetaObject::Connection(QMediaDevices::connect(self, static_cast<void (QMediaDevices::*)()>(&QMediaDevices::audioInputsChanged), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QMediaDevices_audioInputsChanged(slot);
	}));
}

void QMediaDevices_audioOutputsChanged(QMediaDevices* self) {
	self->audioOutputsChanged();
}

void* QMediaDevices_connect_audioOutputsChanged(QMediaDevices* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QMediaDevices>>(slot);
	return new QMetaObject::Connection(QMediaDevices::connect(self, static_cast<void (QMediaDevices::*)()>(&QMediaDevices::audioOutputsChanged), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QMediaDevices_audioOutputsChanged(slot);
	}));
}

void QMediaDevices_videoInputsChanged(QMediaDevices* self) {
	self->videoInputsChanged();
}

void* QMediaDevices_connect_videoInputsChanged(QMediaDevices* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QMediaDevices>>(slot);
	return new QMetaObject::Connection(QMediaDevices::connect(self, static_cast<void (QMediaDevices::*)()>(&QMediaDevices::videoInputsChanged), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QMediaDevices_videoInputsChanged(slot);
	}));
}

struct miqt_string QMediaDevices_tr2(const char* s, const char* c) {
	QString _ret = QMediaDevices::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaDevices_tr3(const char* s, const char* c, int n) {
	QString _ret = QMediaDevices::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QMediaDevices_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMediaDevices> slot_handle(slot);
	MiqtVirtualQMediaDevices* self_cast = dynamic_cast<MiqtVirtualQMediaDevices*>( (QMediaDevices*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QMediaDevices_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQMediaDevices*>(self)->QMediaDevices::event(event);
}

bool QMediaDevices_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMediaDevices> slot_handle(slot);
	MiqtVirtualQMediaDevices* self_cast = dynamic_cast<MiqtVirtualQMediaDevices*>( (QMediaDevices*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QMediaDevices_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQMediaDevices*>(self)->QMediaDevices::eventFilter(watched, event);
}

bool QMediaDevices_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMediaDevices> slot_handle(slot);
	MiqtVirtualQMediaDevices* self_cast = dynamic_cast<MiqtVirtualQMediaDevices*>( (QMediaDevices*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QMediaDevices_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQMediaDevices*>(self)->QMediaDevices::timerEvent(event);
}

bool QMediaDevices_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMediaDevices> slot_handle(slot);
	MiqtVirtualQMediaDevices* self_cast = dynamic_cast<MiqtVirtualQMediaDevices*>( (QMediaDevices*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QMediaDevices_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQMediaDevices*>(self)->QMediaDevices::childEvent(event);
}

bool QMediaDevices_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMediaDevices> slot_handle(slot);
	MiqtVirtualQMediaDevices* self_cast = dynamic_cast<MiqtVirtualQMediaDevices*>( (QMediaDevices*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QMediaDevices_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQMediaDevices*>(self)->QMediaDevices::customEvent(event);
}

bool QMediaDevices_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMediaDevices> slot_handle(slot);
	MiqtVirtualQMediaDevices* self_cast = dynamic_cast<MiqtVirtualQMediaDevices*>( (QMediaDevices*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QMediaDevices_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQMediaDevices*>(self)->QMediaDevices::connectNotify(*signal);
}

bool QMediaDevices_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMediaDevices> slot_handle(slot);
	MiqtVirtualQMediaDevices* self_cast = dynamic_cast<MiqtVirtualQMediaDevices*>( (QMediaDevices*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QMediaDevices_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQMediaDevices*>(self)->QMediaDevices::disconnectNotify(*signal);
}

QObject* QMediaDevices_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQMediaDevices* self_cast = dynamic_cast<MiqtVirtualQMediaDevices*>( (QMediaDevices*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QMediaDevices_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQMediaDevices* self_cast = dynamic_cast<MiqtVirtualQMediaDevices*>( (QMediaDevices*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QMediaDevices_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQMediaDevices* self_cast = dynamic_cast<MiqtVirtualQMediaDevices*>( (QMediaDevices*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QMediaDevices_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQMediaDevices* self_cast = dynamic_cast<MiqtVirtualQMediaDevices*>( (QMediaDevices*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QMediaDevices_delete(QMediaDevices* self) {
	delete self;
}

