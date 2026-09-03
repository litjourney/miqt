#include <memory>
#include <utility>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSqlDriver>
#include <QSqlDriverPlugin>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qsqldriverplugin.h>
#include "gen_qsqldriverplugin.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QSqlDriverPlugin(intptr_t);
QSqlDriver* miqt_exec_callback_QSqlDriverPlugin_create(QSqlDriverPlugin*, intptr_t, struct miqt_string);
bool miqt_exec_callback_QSqlDriverPlugin_event(QSqlDriverPlugin*, intptr_t, QEvent*);
bool miqt_exec_callback_QSqlDriverPlugin_eventFilter(QSqlDriverPlugin*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSqlDriverPlugin_timerEvent(QSqlDriverPlugin*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSqlDriverPlugin_childEvent(QSqlDriverPlugin*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSqlDriverPlugin_customEvent(QSqlDriverPlugin*, intptr_t, QEvent*);
void miqt_exec_callback_QSqlDriverPlugin_connectNotify(QSqlDriverPlugin*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSqlDriverPlugin_disconnectNotify(QSqlDriverPlugin*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSqlDriverPlugin final : public QSqlDriverPlugin {
public:

	MiqtVirtualQSqlDriverPlugin(): QSqlDriverPlugin() {}
	MiqtVirtualQSqlDriverPlugin(QObject* parent): QSqlDriverPlugin(parent) {}

	virtual ~MiqtVirtualQSqlDriverPlugin() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSqlDriverPlugin> handle__create;

	// Subclass to allow providing a Go implementation
	virtual QSqlDriver* create(const QString& key) override {
		if (!handle__create) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		const QString key_ret = key;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray key_b = key_ret.toUtf8();
		struct miqt_string key_ms;
		key_ms.len = key_b.length();
		key_ms.data = static_cast<char*>(malloc(key_ms.len));
		memcpy(key_ms.data, key_b.data(), key_ms.len);
		struct miqt_string sigval1 = key_ms;
		QSqlDriver* callback_return_value = miqt_exec_callback_QSqlDriverPlugin_create(this, handle__create.value(), sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSqlDriverPlugin> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QSqlDriverPlugin::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QSqlDriverPlugin_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QSqlDriverPlugin_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSqlDriverPlugin> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QSqlDriverPlugin::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QSqlDriverPlugin_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QSqlDriverPlugin_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSqlDriverPlugin> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QSqlDriverPlugin::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QSqlDriverPlugin_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QSqlDriverPlugin_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSqlDriverPlugin> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QSqlDriverPlugin::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QSqlDriverPlugin_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QSqlDriverPlugin_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSqlDriverPlugin> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QSqlDriverPlugin::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QSqlDriverPlugin_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QSqlDriverPlugin_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSqlDriverPlugin> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QSqlDriverPlugin::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QSqlDriverPlugin_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QSqlDriverPlugin_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSqlDriverPlugin> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QSqlDriverPlugin::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QSqlDriverPlugin_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QSqlDriverPlugin_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QSqlDriverPlugin_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QSqlDriverPlugin_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QSqlDriverPlugin_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QSqlDriverPlugin_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QSqlDriverPlugin* QSqlDriverPlugin_new() {
	return new (std::nothrow) MiqtVirtualQSqlDriverPlugin();
}

QSqlDriverPlugin* QSqlDriverPlugin_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQSqlDriverPlugin(parent);
}

void QSqlDriverPlugin_virtbase(QSqlDriverPlugin* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QSqlDriverPlugin_metaObject(const QSqlDriverPlugin* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSqlDriverPlugin_metacast(QSqlDriverPlugin* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSqlDriverPlugin_tr(const char* s) {
	QString _ret = QSqlDriverPlugin::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSqlDriverPlugin_trUtf8(const char* s) {
	QString _ret = QSqlDriverPlugin::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSqlDriver* QSqlDriverPlugin_create(QSqlDriverPlugin* self, struct miqt_string key) {
	QString key_QString = QString::fromUtf8(key.data, key.len);
	return self->create(key_QString);
}

struct miqt_string QSqlDriverPlugin_tr2(const char* s, const char* c) {
	QString _ret = QSqlDriverPlugin::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSqlDriverPlugin_tr3(const char* s, const char* c, int n) {
	QString _ret = QSqlDriverPlugin::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSqlDriverPlugin_trUtf82(const char* s, const char* c) {
	QString _ret = QSqlDriverPlugin::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSqlDriverPlugin_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QSqlDriverPlugin::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSqlDriverPlugin_override_virtual_create(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSqlDriverPlugin> slot_handle(slot);
	MiqtVirtualQSqlDriverPlugin* self_cast = dynamic_cast<MiqtVirtualQSqlDriverPlugin*>( (QSqlDriverPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__create = std::move(slot_handle);
	return true;
}

bool QSqlDriverPlugin_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSqlDriverPlugin> slot_handle(slot);
	MiqtVirtualQSqlDriverPlugin* self_cast = dynamic_cast<MiqtVirtualQSqlDriverPlugin*>( (QSqlDriverPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QSqlDriverPlugin_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQSqlDriverPlugin*>(self)->QSqlDriverPlugin::event(event);
}

bool QSqlDriverPlugin_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSqlDriverPlugin> slot_handle(slot);
	MiqtVirtualQSqlDriverPlugin* self_cast = dynamic_cast<MiqtVirtualQSqlDriverPlugin*>( (QSqlDriverPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QSqlDriverPlugin_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQSqlDriverPlugin*>(self)->QSqlDriverPlugin::eventFilter(watched, event);
}

bool QSqlDriverPlugin_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSqlDriverPlugin> slot_handle(slot);
	MiqtVirtualQSqlDriverPlugin* self_cast = dynamic_cast<MiqtVirtualQSqlDriverPlugin*>( (QSqlDriverPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QSqlDriverPlugin_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQSqlDriverPlugin*>(self)->QSqlDriverPlugin::timerEvent(event);
}

bool QSqlDriverPlugin_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSqlDriverPlugin> slot_handle(slot);
	MiqtVirtualQSqlDriverPlugin* self_cast = dynamic_cast<MiqtVirtualQSqlDriverPlugin*>( (QSqlDriverPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QSqlDriverPlugin_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQSqlDriverPlugin*>(self)->QSqlDriverPlugin::childEvent(event);
}

bool QSqlDriverPlugin_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSqlDriverPlugin> slot_handle(slot);
	MiqtVirtualQSqlDriverPlugin* self_cast = dynamic_cast<MiqtVirtualQSqlDriverPlugin*>( (QSqlDriverPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QSqlDriverPlugin_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQSqlDriverPlugin*>(self)->QSqlDriverPlugin::customEvent(event);
}

bool QSqlDriverPlugin_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSqlDriverPlugin> slot_handle(slot);
	MiqtVirtualQSqlDriverPlugin* self_cast = dynamic_cast<MiqtVirtualQSqlDriverPlugin*>( (QSqlDriverPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QSqlDriverPlugin_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQSqlDriverPlugin*>(self)->QSqlDriverPlugin::connectNotify(*signal);
}

bool QSqlDriverPlugin_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSqlDriverPlugin> slot_handle(slot);
	MiqtVirtualQSqlDriverPlugin* self_cast = dynamic_cast<MiqtVirtualQSqlDriverPlugin*>( (QSqlDriverPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QSqlDriverPlugin_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQSqlDriverPlugin*>(self)->QSqlDriverPlugin::disconnectNotify(*signal);
}

QObject* QSqlDriverPlugin_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSqlDriverPlugin* self_cast = dynamic_cast<MiqtVirtualQSqlDriverPlugin*>( (QSqlDriverPlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QSqlDriverPlugin_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSqlDriverPlugin* self_cast = dynamic_cast<MiqtVirtualQSqlDriverPlugin*>( (QSqlDriverPlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QSqlDriverPlugin_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQSqlDriverPlugin* self_cast = dynamic_cast<MiqtVirtualQSqlDriverPlugin*>( (QSqlDriverPlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QSqlDriverPlugin_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQSqlDriverPlugin* self_cast = dynamic_cast<MiqtVirtualQSqlDriverPlugin*>( (QSqlDriverPlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QSqlDriverPlugin_delete(QSqlDriverPlugin* self) {
	delete self;
}

