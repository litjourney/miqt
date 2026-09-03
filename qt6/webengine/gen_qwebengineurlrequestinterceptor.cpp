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
#include <QWebEngineUrlRequestInfo>
#include <QWebEngineUrlRequestInterceptor>
#include <qwebengineurlrequestinterceptor.h>
#include "gen_qwebengineurlrequestinterceptor.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QWebEngineUrlRequestInterceptor(intptr_t);
void miqt_exec_callback_QWebEngineUrlRequestInterceptor_interceptRequest(QWebEngineUrlRequestInterceptor*, intptr_t, QWebEngineUrlRequestInfo*);
bool miqt_exec_callback_QWebEngineUrlRequestInterceptor_event(QWebEngineUrlRequestInterceptor*, intptr_t, QEvent*);
bool miqt_exec_callback_QWebEngineUrlRequestInterceptor_eventFilter(QWebEngineUrlRequestInterceptor*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QWebEngineUrlRequestInterceptor_timerEvent(QWebEngineUrlRequestInterceptor*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QWebEngineUrlRequestInterceptor_childEvent(QWebEngineUrlRequestInterceptor*, intptr_t, QChildEvent*);
void miqt_exec_callback_QWebEngineUrlRequestInterceptor_customEvent(QWebEngineUrlRequestInterceptor*, intptr_t, QEvent*);
void miqt_exec_callback_QWebEngineUrlRequestInterceptor_connectNotify(QWebEngineUrlRequestInterceptor*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QWebEngineUrlRequestInterceptor_disconnectNotify(QWebEngineUrlRequestInterceptor*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQWebEngineUrlRequestInterceptor final : public QWebEngineUrlRequestInterceptor {
public:

	MiqtVirtualQWebEngineUrlRequestInterceptor(): QWebEngineUrlRequestInterceptor() {}
	MiqtVirtualQWebEngineUrlRequestInterceptor(QObject* p): QWebEngineUrlRequestInterceptor(p) {}

	virtual ~MiqtVirtualQWebEngineUrlRequestInterceptor() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineUrlRequestInterceptor> handle__interceptRequest;

	// Subclass to allow providing a Go implementation
	virtual void interceptRequest(QWebEngineUrlRequestInfo& info) override {
		if (!handle__interceptRequest) {
			return; // Pure virtual, there is no base we can call
		}

		QWebEngineUrlRequestInfo& info_ret = info;
		// Cast returned reference into pointer
		QWebEngineUrlRequestInfo* sigval1 = &info_ret;
		miqt_exec_callback_QWebEngineUrlRequestInterceptor_interceptRequest(this, handle__interceptRequest.value(), sigval1);

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineUrlRequestInterceptor> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QWebEngineUrlRequestInterceptor::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QWebEngineUrlRequestInterceptor_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QWebEngineUrlRequestInterceptor_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineUrlRequestInterceptor> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QWebEngineUrlRequestInterceptor::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QWebEngineUrlRequestInterceptor_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QWebEngineUrlRequestInterceptor_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineUrlRequestInterceptor> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QWebEngineUrlRequestInterceptor::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QWebEngineUrlRequestInterceptor_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QWebEngineUrlRequestInterceptor_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineUrlRequestInterceptor> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QWebEngineUrlRequestInterceptor::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QWebEngineUrlRequestInterceptor_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QWebEngineUrlRequestInterceptor_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineUrlRequestInterceptor> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QWebEngineUrlRequestInterceptor::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QWebEngineUrlRequestInterceptor_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QWebEngineUrlRequestInterceptor_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineUrlRequestInterceptor> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QWebEngineUrlRequestInterceptor::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QWebEngineUrlRequestInterceptor_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QWebEngineUrlRequestInterceptor_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineUrlRequestInterceptor> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QWebEngineUrlRequestInterceptor::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QWebEngineUrlRequestInterceptor_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QWebEngineUrlRequestInterceptor_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QWebEngineUrlRequestInterceptor_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QWebEngineUrlRequestInterceptor_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QWebEngineUrlRequestInterceptor_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QWebEngineUrlRequestInterceptor_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QWebEngineUrlRequestInterceptor* QWebEngineUrlRequestInterceptor_new() {
	return new (std::nothrow) MiqtVirtualQWebEngineUrlRequestInterceptor();
}

QWebEngineUrlRequestInterceptor* QWebEngineUrlRequestInterceptor_new2(QObject* p) {
	return new (std::nothrow) MiqtVirtualQWebEngineUrlRequestInterceptor(p);
}

void QWebEngineUrlRequestInterceptor_virtbase(QWebEngineUrlRequestInterceptor* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QWebEngineUrlRequestInterceptor_metaObject(const QWebEngineUrlRequestInterceptor* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebEngineUrlRequestInterceptor_metacast(QWebEngineUrlRequestInterceptor* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebEngineUrlRequestInterceptor_tr(const char* s) {
	QString _ret = QWebEngineUrlRequestInterceptor::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineUrlRequestInterceptor_interceptRequest(QWebEngineUrlRequestInterceptor* self, QWebEngineUrlRequestInfo* info) {
	self->interceptRequest(*info);
}

struct miqt_string QWebEngineUrlRequestInterceptor_tr2(const char* s, const char* c) {
	QString _ret = QWebEngineUrlRequestInterceptor::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineUrlRequestInterceptor_tr3(const char* s, const char* c, int n) {
	QString _ret = QWebEngineUrlRequestInterceptor::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QWebEngineUrlRequestInterceptor_override_virtual_interceptRequest(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineUrlRequestInterceptor> slot_handle(slot);
	MiqtVirtualQWebEngineUrlRequestInterceptor* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlRequestInterceptor*>( (QWebEngineUrlRequestInterceptor*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__interceptRequest = std::move(slot_handle);
	return true;
}

bool QWebEngineUrlRequestInterceptor_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineUrlRequestInterceptor> slot_handle(slot);
	MiqtVirtualQWebEngineUrlRequestInterceptor* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlRequestInterceptor*>( (QWebEngineUrlRequestInterceptor*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QWebEngineUrlRequestInterceptor_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQWebEngineUrlRequestInterceptor*>(self)->QWebEngineUrlRequestInterceptor::event(event);
}

bool QWebEngineUrlRequestInterceptor_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineUrlRequestInterceptor> slot_handle(slot);
	MiqtVirtualQWebEngineUrlRequestInterceptor* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlRequestInterceptor*>( (QWebEngineUrlRequestInterceptor*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QWebEngineUrlRequestInterceptor_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQWebEngineUrlRequestInterceptor*>(self)->QWebEngineUrlRequestInterceptor::eventFilter(watched, event);
}

bool QWebEngineUrlRequestInterceptor_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineUrlRequestInterceptor> slot_handle(slot);
	MiqtVirtualQWebEngineUrlRequestInterceptor* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlRequestInterceptor*>( (QWebEngineUrlRequestInterceptor*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QWebEngineUrlRequestInterceptor_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQWebEngineUrlRequestInterceptor*>(self)->QWebEngineUrlRequestInterceptor::timerEvent(event);
}

bool QWebEngineUrlRequestInterceptor_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineUrlRequestInterceptor> slot_handle(slot);
	MiqtVirtualQWebEngineUrlRequestInterceptor* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlRequestInterceptor*>( (QWebEngineUrlRequestInterceptor*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QWebEngineUrlRequestInterceptor_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQWebEngineUrlRequestInterceptor*>(self)->QWebEngineUrlRequestInterceptor::childEvent(event);
}

bool QWebEngineUrlRequestInterceptor_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineUrlRequestInterceptor> slot_handle(slot);
	MiqtVirtualQWebEngineUrlRequestInterceptor* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlRequestInterceptor*>( (QWebEngineUrlRequestInterceptor*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QWebEngineUrlRequestInterceptor_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQWebEngineUrlRequestInterceptor*>(self)->QWebEngineUrlRequestInterceptor::customEvent(event);
}

bool QWebEngineUrlRequestInterceptor_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineUrlRequestInterceptor> slot_handle(slot);
	MiqtVirtualQWebEngineUrlRequestInterceptor* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlRequestInterceptor*>( (QWebEngineUrlRequestInterceptor*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QWebEngineUrlRequestInterceptor_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQWebEngineUrlRequestInterceptor*>(self)->QWebEngineUrlRequestInterceptor::connectNotify(*signal);
}

bool QWebEngineUrlRequestInterceptor_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineUrlRequestInterceptor> slot_handle(slot);
	MiqtVirtualQWebEngineUrlRequestInterceptor* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlRequestInterceptor*>( (QWebEngineUrlRequestInterceptor*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QWebEngineUrlRequestInterceptor_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQWebEngineUrlRequestInterceptor*>(self)->QWebEngineUrlRequestInterceptor::disconnectNotify(*signal);
}

QObject* QWebEngineUrlRequestInterceptor_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWebEngineUrlRequestInterceptor* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlRequestInterceptor*>( (QWebEngineUrlRequestInterceptor*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QWebEngineUrlRequestInterceptor_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWebEngineUrlRequestInterceptor* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlRequestInterceptor*>( (QWebEngineUrlRequestInterceptor*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QWebEngineUrlRequestInterceptor_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQWebEngineUrlRequestInterceptor* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlRequestInterceptor*>( (QWebEngineUrlRequestInterceptor*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QWebEngineUrlRequestInterceptor_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQWebEngineUrlRequestInterceptor* self_cast = dynamic_cast<MiqtVirtualQWebEngineUrlRequestInterceptor*>( (QWebEngineUrlRequestInterceptor*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QWebEngineUrlRequestInterceptor_delete(QWebEngineUrlRequestInterceptor* self) {
	delete self;
}

