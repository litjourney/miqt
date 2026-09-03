#include <memory>
#include <utility>
#include <QChildEvent>
#include <QEvent>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQmlWebChannel>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <QWebChannel>
#include <qqmlwebchannel.h>
#include "gen_qqmlwebchannel.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QQmlWebChannel(intptr_t);
bool miqt_exec_callback_QQmlWebChannel_event(QQmlWebChannel*, intptr_t, QEvent*);
bool miqt_exec_callback_QQmlWebChannel_eventFilter(QQmlWebChannel*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QQmlWebChannel_timerEvent(QQmlWebChannel*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QQmlWebChannel_childEvent(QQmlWebChannel*, intptr_t, QChildEvent*);
void miqt_exec_callback_QQmlWebChannel_customEvent(QQmlWebChannel*, intptr_t, QEvent*);
void miqt_exec_callback_QQmlWebChannel_connectNotify(QQmlWebChannel*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QQmlWebChannel_disconnectNotify(QQmlWebChannel*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQQmlWebChannel final : public QQmlWebChannel {
public:

	MiqtVirtualQQmlWebChannel(): QQmlWebChannel() {}
	MiqtVirtualQQmlWebChannel(QObject* parent): QQmlWebChannel(parent) {}

	virtual ~MiqtVirtualQQmlWebChannel() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlWebChannel> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QQmlWebChannel::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QQmlWebChannel_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QQmlWebChannel_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlWebChannel> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QQmlWebChannel::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QQmlWebChannel_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QQmlWebChannel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlWebChannel> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QQmlWebChannel::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QQmlWebChannel_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QQmlWebChannel_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlWebChannel> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QQmlWebChannel::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QQmlWebChannel_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QQmlWebChannel_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlWebChannel> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QQmlWebChannel::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QQmlWebChannel_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QQmlWebChannel_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlWebChannel> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QQmlWebChannel::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QQmlWebChannel_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QQmlWebChannel_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlWebChannel> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QQmlWebChannel::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QQmlWebChannel_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QQmlWebChannel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QQmlWebChannel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QQmlWebChannel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QQmlWebChannel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QQmlWebChannel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QQmlWebChannel* QQmlWebChannel_new() {
	return new (std::nothrow) MiqtVirtualQQmlWebChannel();
}

QQmlWebChannel* QQmlWebChannel_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQQmlWebChannel(parent);
}

void QQmlWebChannel_virtbase(QQmlWebChannel* src, QWebChannel** outptr_QWebChannel) {
	*outptr_QWebChannel = static_cast<QWebChannel*>(src);
}

QMetaObject* QQmlWebChannel_metaObject(const QQmlWebChannel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QQmlWebChannel_metacast(QQmlWebChannel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QQmlWebChannel_tr(const char* s) {
	QString _ret = QQmlWebChannel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QQmlWebChannel_registerObjects(QQmlWebChannel* self, struct miqt_map /* of struct miqt_string to QVariant* */  objects) {
	QVariantMap objects_QMap;
	struct miqt_string* objects_karr = static_cast<struct miqt_string*>(objects.keys);
	QVariant** objects_varr = static_cast<QVariant**>(objects.values);
	for(size_t i = 0; i < objects.len; ++i) {
		QString objects_karr_i_QString = QString::fromUtf8(objects_karr[i].data, objects_karr[i].len);
		objects_QMap[objects_karr_i_QString] = *(objects_varr[i]);
	}
	self->registerObjects(objects_QMap);
}

void QQmlWebChannel_connectTo(QQmlWebChannel* self, QObject* transport) {
	self->connectTo(transport);
}

void QQmlWebChannel_disconnectFrom(QQmlWebChannel* self, QObject* transport) {
	self->disconnectFrom(transport);
}

struct miqt_string QQmlWebChannel_tr2(const char* s, const char* c) {
	QString _ret = QQmlWebChannel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QQmlWebChannel_tr3(const char* s, const char* c, int n) {
	QString _ret = QQmlWebChannel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QQmlWebChannel_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlWebChannel> slot_handle(slot);
	MiqtVirtualQQmlWebChannel* self_cast = dynamic_cast<MiqtVirtualQQmlWebChannel*>( (QQmlWebChannel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QQmlWebChannel_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQQmlWebChannel*>(self)->QQmlWebChannel::event(event);
}

bool QQmlWebChannel_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlWebChannel> slot_handle(slot);
	MiqtVirtualQQmlWebChannel* self_cast = dynamic_cast<MiqtVirtualQQmlWebChannel*>( (QQmlWebChannel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QQmlWebChannel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQQmlWebChannel*>(self)->QQmlWebChannel::eventFilter(watched, event);
}

bool QQmlWebChannel_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlWebChannel> slot_handle(slot);
	MiqtVirtualQQmlWebChannel* self_cast = dynamic_cast<MiqtVirtualQQmlWebChannel*>( (QQmlWebChannel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QQmlWebChannel_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQQmlWebChannel*>(self)->QQmlWebChannel::timerEvent(event);
}

bool QQmlWebChannel_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlWebChannel> slot_handle(slot);
	MiqtVirtualQQmlWebChannel* self_cast = dynamic_cast<MiqtVirtualQQmlWebChannel*>( (QQmlWebChannel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QQmlWebChannel_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQQmlWebChannel*>(self)->QQmlWebChannel::childEvent(event);
}

bool QQmlWebChannel_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlWebChannel> slot_handle(slot);
	MiqtVirtualQQmlWebChannel* self_cast = dynamic_cast<MiqtVirtualQQmlWebChannel*>( (QQmlWebChannel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QQmlWebChannel_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQQmlWebChannel*>(self)->QQmlWebChannel::customEvent(event);
}

bool QQmlWebChannel_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlWebChannel> slot_handle(slot);
	MiqtVirtualQQmlWebChannel* self_cast = dynamic_cast<MiqtVirtualQQmlWebChannel*>( (QQmlWebChannel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QQmlWebChannel_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQQmlWebChannel*>(self)->QQmlWebChannel::connectNotify(*signal);
}

bool QQmlWebChannel_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlWebChannel> slot_handle(slot);
	MiqtVirtualQQmlWebChannel* self_cast = dynamic_cast<MiqtVirtualQQmlWebChannel*>( (QQmlWebChannel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QQmlWebChannel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQQmlWebChannel*>(self)->QQmlWebChannel::disconnectNotify(*signal);
}

QObject* QQmlWebChannel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQQmlWebChannel* self_cast = dynamic_cast<MiqtVirtualQQmlWebChannel*>( (QQmlWebChannel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QQmlWebChannel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQQmlWebChannel* self_cast = dynamic_cast<MiqtVirtualQQmlWebChannel*>( (QQmlWebChannel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QQmlWebChannel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQQmlWebChannel* self_cast = dynamic_cast<MiqtVirtualQQmlWebChannel*>( (QQmlWebChannel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QQmlWebChannel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQQmlWebChannel* self_cast = dynamic_cast<MiqtVirtualQQmlWebChannel*>( (QQmlWebChannel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QQmlWebChannel_delete(QQmlWebChannel* self) {
	delete self;
}

