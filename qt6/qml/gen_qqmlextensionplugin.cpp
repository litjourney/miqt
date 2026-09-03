#include <memory>
#include <utility>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QQmlEngine>
#include <QQmlEngineExtensionInterface>
#include <QQmlEngineExtensionPlugin>
#include <QQmlExtensionInterface>
#include <QQmlExtensionPlugin>
#include <QQmlTypesExtensionInterface>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QUrl>
#include <qqmlextensionplugin.h>
#include "gen_qqmlextensionplugin.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QQmlExtensionPlugin(intptr_t);
void miqt_exec_callback_QQmlExtensionPlugin_registerTypes(QQmlExtensionPlugin*, intptr_t, const char*);
void miqt_exec_callback_QQmlExtensionPlugin_unregisterTypes(QQmlExtensionPlugin*, intptr_t);
void miqt_exec_callback_QQmlExtensionPlugin_initializeEngine(QQmlExtensionPlugin*, intptr_t, QQmlEngine*, const char*);
bool miqt_exec_callback_QQmlExtensionPlugin_event(QQmlExtensionPlugin*, intptr_t, QEvent*);
bool miqt_exec_callback_QQmlExtensionPlugin_eventFilter(QQmlExtensionPlugin*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QQmlExtensionPlugin_timerEvent(QQmlExtensionPlugin*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QQmlExtensionPlugin_childEvent(QQmlExtensionPlugin*, intptr_t, QChildEvent*);
void miqt_exec_callback_QQmlExtensionPlugin_customEvent(QQmlExtensionPlugin*, intptr_t, QEvent*);
void miqt_exec_callback_QQmlExtensionPlugin_connectNotify(QQmlExtensionPlugin*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QQmlExtensionPlugin_disconnectNotify(QQmlExtensionPlugin*, intptr_t, QMetaMethod*);
void miqt_exec_callback_handle_release_QQmlEngineExtensionPlugin(intptr_t);
void miqt_exec_callback_QQmlEngineExtensionPlugin_initializeEngine(QQmlEngineExtensionPlugin*, intptr_t, QQmlEngine*, const char*);
bool miqt_exec_callback_QQmlEngineExtensionPlugin_event(QQmlEngineExtensionPlugin*, intptr_t, QEvent*);
bool miqt_exec_callback_QQmlEngineExtensionPlugin_eventFilter(QQmlEngineExtensionPlugin*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QQmlEngineExtensionPlugin_timerEvent(QQmlEngineExtensionPlugin*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QQmlEngineExtensionPlugin_childEvent(QQmlEngineExtensionPlugin*, intptr_t, QChildEvent*);
void miqt_exec_callback_QQmlEngineExtensionPlugin_customEvent(QQmlEngineExtensionPlugin*, intptr_t, QEvent*);
void miqt_exec_callback_QQmlEngineExtensionPlugin_connectNotify(QQmlEngineExtensionPlugin*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QQmlEngineExtensionPlugin_disconnectNotify(QQmlEngineExtensionPlugin*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQQmlExtensionPlugin final : public QQmlExtensionPlugin {
public:

	MiqtVirtualQQmlExtensionPlugin(): QQmlExtensionPlugin() {}
	MiqtVirtualQQmlExtensionPlugin(QObject* parent): QQmlExtensionPlugin(parent) {}

	virtual ~MiqtVirtualQQmlExtensionPlugin() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlExtensionPlugin> handle__registerTypes;

	// Subclass to allow providing a Go implementation
	virtual void registerTypes(const char* uri) override {
		if (!handle__registerTypes) {
			return; // Pure virtual, there is no base we can call
		}

		const char* sigval1 = (const char*) uri;
		miqt_exec_callback_QQmlExtensionPlugin_registerTypes(this, handle__registerTypes.value(), sigval1);

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlExtensionPlugin> handle__unregisterTypes;

	// Subclass to allow providing a Go implementation
	virtual void unregisterTypes() override {
		if (!handle__unregisterTypes) {
			QQmlExtensionPlugin::unregisterTypes();
			return;
		}

		miqt_exec_callback_QQmlExtensionPlugin_unregisterTypes(this, handle__unregisterTypes.value());

	}

	friend void QQmlExtensionPlugin_virtualbase_unregisterTypes(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlExtensionPlugin> handle__initializeEngine;

	// Subclass to allow providing a Go implementation
	virtual void initializeEngine(QQmlEngine* engine, const char* uri) override {
		if (!handle__initializeEngine) {
			QQmlExtensionPlugin::initializeEngine(engine, uri);
			return;
		}

		QQmlEngine* sigval1 = engine;
		const char* sigval2 = (const char*) uri;
		miqt_exec_callback_QQmlExtensionPlugin_initializeEngine(this, handle__initializeEngine.value(), sigval1, sigval2);

	}

	friend void QQmlExtensionPlugin_virtualbase_initializeEngine(void* self, QQmlEngine* engine, const char* uri);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlExtensionPlugin> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QQmlExtensionPlugin::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QQmlExtensionPlugin_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QQmlExtensionPlugin_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlExtensionPlugin> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QQmlExtensionPlugin::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QQmlExtensionPlugin_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QQmlExtensionPlugin_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlExtensionPlugin> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QQmlExtensionPlugin::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QQmlExtensionPlugin_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QQmlExtensionPlugin_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlExtensionPlugin> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QQmlExtensionPlugin::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QQmlExtensionPlugin_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QQmlExtensionPlugin_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlExtensionPlugin> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QQmlExtensionPlugin::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QQmlExtensionPlugin_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QQmlExtensionPlugin_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlExtensionPlugin> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QQmlExtensionPlugin::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QQmlExtensionPlugin_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QQmlExtensionPlugin_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlExtensionPlugin> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QQmlExtensionPlugin::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QQmlExtensionPlugin_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QQmlExtensionPlugin_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QQmlExtensionPlugin_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QQmlExtensionPlugin_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QQmlExtensionPlugin_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QQmlExtensionPlugin_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QQmlExtensionPlugin* QQmlExtensionPlugin_new() {
	return new (std::nothrow) MiqtVirtualQQmlExtensionPlugin();
}

QQmlExtensionPlugin* QQmlExtensionPlugin_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQQmlExtensionPlugin(parent);
}

void QQmlExtensionPlugin_virtbase(QQmlExtensionPlugin* src, QObject** outptr_QObject, QQmlExtensionInterface** outptr_QQmlExtensionInterface) {
	*outptr_QObject = static_cast<QObject*>(src);
	*outptr_QQmlExtensionInterface = static_cast<QQmlExtensionInterface*>(src);
}

QMetaObject* QQmlExtensionPlugin_metaObject(const QQmlExtensionPlugin* self) {
	return (QMetaObject*) self->metaObject();
}

void* QQmlExtensionPlugin_metacast(QQmlExtensionPlugin* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QQmlExtensionPlugin_tr(const char* s) {
	QString _ret = QQmlExtensionPlugin::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QUrl* QQmlExtensionPlugin_baseUrl(const QQmlExtensionPlugin* self) {
	return new QUrl(self->baseUrl());
}

void QQmlExtensionPlugin_registerTypes(QQmlExtensionPlugin* self, const char* uri) {
	self->registerTypes(uri);
}

void QQmlExtensionPlugin_unregisterTypes(QQmlExtensionPlugin* self) {
	self->unregisterTypes();
}

void QQmlExtensionPlugin_initializeEngine(QQmlExtensionPlugin* self, QQmlEngine* engine, const char* uri) {
	self->initializeEngine(engine, uri);
}

struct miqt_string QQmlExtensionPlugin_tr2(const char* s, const char* c) {
	QString _ret = QQmlExtensionPlugin::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QQmlExtensionPlugin_tr3(const char* s, const char* c, int n) {
	QString _ret = QQmlExtensionPlugin::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QQmlExtensionPlugin_override_virtual_registerTypes(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlExtensionPlugin> slot_handle(slot);
	MiqtVirtualQQmlExtensionPlugin* self_cast = dynamic_cast<MiqtVirtualQQmlExtensionPlugin*>( (QQmlExtensionPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__registerTypes = std::move(slot_handle);
	return true;
}

bool QQmlExtensionPlugin_override_virtual_unregisterTypes(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlExtensionPlugin> slot_handle(slot);
	MiqtVirtualQQmlExtensionPlugin* self_cast = dynamic_cast<MiqtVirtualQQmlExtensionPlugin*>( (QQmlExtensionPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__unregisterTypes = std::move(slot_handle);
	return true;
}

void QQmlExtensionPlugin_virtualbase_unregisterTypes(void* self) {
	static_cast<MiqtVirtualQQmlExtensionPlugin*>(self)->QQmlExtensionPlugin::unregisterTypes();
}

bool QQmlExtensionPlugin_override_virtual_initializeEngine(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlExtensionPlugin> slot_handle(slot);
	MiqtVirtualQQmlExtensionPlugin* self_cast = dynamic_cast<MiqtVirtualQQmlExtensionPlugin*>( (QQmlExtensionPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initializeEngine = std::move(slot_handle);
	return true;
}

void QQmlExtensionPlugin_virtualbase_initializeEngine(void* self, QQmlEngine* engine, const char* uri) {
	static_cast<MiqtVirtualQQmlExtensionPlugin*>(self)->QQmlExtensionPlugin::initializeEngine(engine, uri);
}

bool QQmlExtensionPlugin_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlExtensionPlugin> slot_handle(slot);
	MiqtVirtualQQmlExtensionPlugin* self_cast = dynamic_cast<MiqtVirtualQQmlExtensionPlugin*>( (QQmlExtensionPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QQmlExtensionPlugin_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQQmlExtensionPlugin*>(self)->QQmlExtensionPlugin::event(event);
}

bool QQmlExtensionPlugin_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlExtensionPlugin> slot_handle(slot);
	MiqtVirtualQQmlExtensionPlugin* self_cast = dynamic_cast<MiqtVirtualQQmlExtensionPlugin*>( (QQmlExtensionPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QQmlExtensionPlugin_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQQmlExtensionPlugin*>(self)->QQmlExtensionPlugin::eventFilter(watched, event);
}

bool QQmlExtensionPlugin_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlExtensionPlugin> slot_handle(slot);
	MiqtVirtualQQmlExtensionPlugin* self_cast = dynamic_cast<MiqtVirtualQQmlExtensionPlugin*>( (QQmlExtensionPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QQmlExtensionPlugin_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQQmlExtensionPlugin*>(self)->QQmlExtensionPlugin::timerEvent(event);
}

bool QQmlExtensionPlugin_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlExtensionPlugin> slot_handle(slot);
	MiqtVirtualQQmlExtensionPlugin* self_cast = dynamic_cast<MiqtVirtualQQmlExtensionPlugin*>( (QQmlExtensionPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QQmlExtensionPlugin_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQQmlExtensionPlugin*>(self)->QQmlExtensionPlugin::childEvent(event);
}

bool QQmlExtensionPlugin_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlExtensionPlugin> slot_handle(slot);
	MiqtVirtualQQmlExtensionPlugin* self_cast = dynamic_cast<MiqtVirtualQQmlExtensionPlugin*>( (QQmlExtensionPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QQmlExtensionPlugin_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQQmlExtensionPlugin*>(self)->QQmlExtensionPlugin::customEvent(event);
}

bool QQmlExtensionPlugin_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlExtensionPlugin> slot_handle(slot);
	MiqtVirtualQQmlExtensionPlugin* self_cast = dynamic_cast<MiqtVirtualQQmlExtensionPlugin*>( (QQmlExtensionPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QQmlExtensionPlugin_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQQmlExtensionPlugin*>(self)->QQmlExtensionPlugin::connectNotify(*signal);
}

bool QQmlExtensionPlugin_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlExtensionPlugin> slot_handle(slot);
	MiqtVirtualQQmlExtensionPlugin* self_cast = dynamic_cast<MiqtVirtualQQmlExtensionPlugin*>( (QQmlExtensionPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QQmlExtensionPlugin_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQQmlExtensionPlugin*>(self)->QQmlExtensionPlugin::disconnectNotify(*signal);
}

QObject* QQmlExtensionPlugin_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQQmlExtensionPlugin* self_cast = dynamic_cast<MiqtVirtualQQmlExtensionPlugin*>( (QQmlExtensionPlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QQmlExtensionPlugin_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQQmlExtensionPlugin* self_cast = dynamic_cast<MiqtVirtualQQmlExtensionPlugin*>( (QQmlExtensionPlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QQmlExtensionPlugin_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQQmlExtensionPlugin* self_cast = dynamic_cast<MiqtVirtualQQmlExtensionPlugin*>( (QQmlExtensionPlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QQmlExtensionPlugin_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQQmlExtensionPlugin* self_cast = dynamic_cast<MiqtVirtualQQmlExtensionPlugin*>( (QQmlExtensionPlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QQmlExtensionPlugin_delete(QQmlExtensionPlugin* self) {
	delete self;
}

class MiqtVirtualQQmlEngineExtensionPlugin final : public QQmlEngineExtensionPlugin {
public:

	MiqtVirtualQQmlEngineExtensionPlugin(): QQmlEngineExtensionPlugin() {}
	MiqtVirtualQQmlEngineExtensionPlugin(QObject* parent): QQmlEngineExtensionPlugin(parent) {}

	virtual ~MiqtVirtualQQmlEngineExtensionPlugin() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlEngineExtensionPlugin> handle__initializeEngine;

	// Subclass to allow providing a Go implementation
	virtual void initializeEngine(QQmlEngine* engine, const char* uri) override {
		if (!handle__initializeEngine) {
			QQmlEngineExtensionPlugin::initializeEngine(engine, uri);
			return;
		}

		QQmlEngine* sigval1 = engine;
		const char* sigval2 = (const char*) uri;
		miqt_exec_callback_QQmlEngineExtensionPlugin_initializeEngine(this, handle__initializeEngine.value(), sigval1, sigval2);

	}

	friend void QQmlEngineExtensionPlugin_virtualbase_initializeEngine(void* self, QQmlEngine* engine, const char* uri);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlEngineExtensionPlugin> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QQmlEngineExtensionPlugin::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QQmlEngineExtensionPlugin_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QQmlEngineExtensionPlugin_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlEngineExtensionPlugin> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QQmlEngineExtensionPlugin::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QQmlEngineExtensionPlugin_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QQmlEngineExtensionPlugin_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlEngineExtensionPlugin> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QQmlEngineExtensionPlugin::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QQmlEngineExtensionPlugin_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QQmlEngineExtensionPlugin_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlEngineExtensionPlugin> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QQmlEngineExtensionPlugin::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QQmlEngineExtensionPlugin_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QQmlEngineExtensionPlugin_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlEngineExtensionPlugin> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QQmlEngineExtensionPlugin::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QQmlEngineExtensionPlugin_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QQmlEngineExtensionPlugin_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlEngineExtensionPlugin> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QQmlEngineExtensionPlugin::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QQmlEngineExtensionPlugin_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QQmlEngineExtensionPlugin_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlEngineExtensionPlugin> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QQmlEngineExtensionPlugin::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QQmlEngineExtensionPlugin_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QQmlEngineExtensionPlugin_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QQmlEngineExtensionPlugin_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QQmlEngineExtensionPlugin_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QQmlEngineExtensionPlugin_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QQmlEngineExtensionPlugin_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QQmlEngineExtensionPlugin* QQmlEngineExtensionPlugin_new() {
	return new (std::nothrow) MiqtVirtualQQmlEngineExtensionPlugin();
}

QQmlEngineExtensionPlugin* QQmlEngineExtensionPlugin_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQQmlEngineExtensionPlugin(parent);
}

void QQmlEngineExtensionPlugin_virtbase(QQmlEngineExtensionPlugin* src, QObject** outptr_QObject, QQmlEngineExtensionInterface** outptr_QQmlEngineExtensionInterface) {
	*outptr_QObject = static_cast<QObject*>(src);
	*outptr_QQmlEngineExtensionInterface = static_cast<QQmlEngineExtensionInterface*>(src);
}

QMetaObject* QQmlEngineExtensionPlugin_metaObject(const QQmlEngineExtensionPlugin* self) {
	return (QMetaObject*) self->metaObject();
}

void* QQmlEngineExtensionPlugin_metacast(QQmlEngineExtensionPlugin* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QQmlEngineExtensionPlugin_tr(const char* s) {
	QString _ret = QQmlEngineExtensionPlugin::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QQmlEngineExtensionPlugin_initializeEngine(QQmlEngineExtensionPlugin* self, QQmlEngine* engine, const char* uri) {
	self->initializeEngine(engine, uri);
}

struct miqt_string QQmlEngineExtensionPlugin_tr2(const char* s, const char* c) {
	QString _ret = QQmlEngineExtensionPlugin::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QQmlEngineExtensionPlugin_tr3(const char* s, const char* c, int n) {
	QString _ret = QQmlEngineExtensionPlugin::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QQmlEngineExtensionPlugin_override_virtual_initializeEngine(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlEngineExtensionPlugin> slot_handle(slot);
	MiqtVirtualQQmlEngineExtensionPlugin* self_cast = dynamic_cast<MiqtVirtualQQmlEngineExtensionPlugin*>( (QQmlEngineExtensionPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initializeEngine = std::move(slot_handle);
	return true;
}

void QQmlEngineExtensionPlugin_virtualbase_initializeEngine(void* self, QQmlEngine* engine, const char* uri) {
	static_cast<MiqtVirtualQQmlEngineExtensionPlugin*>(self)->QQmlEngineExtensionPlugin::initializeEngine(engine, uri);
}

bool QQmlEngineExtensionPlugin_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlEngineExtensionPlugin> slot_handle(slot);
	MiqtVirtualQQmlEngineExtensionPlugin* self_cast = dynamic_cast<MiqtVirtualQQmlEngineExtensionPlugin*>( (QQmlEngineExtensionPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QQmlEngineExtensionPlugin_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQQmlEngineExtensionPlugin*>(self)->QQmlEngineExtensionPlugin::event(event);
}

bool QQmlEngineExtensionPlugin_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlEngineExtensionPlugin> slot_handle(slot);
	MiqtVirtualQQmlEngineExtensionPlugin* self_cast = dynamic_cast<MiqtVirtualQQmlEngineExtensionPlugin*>( (QQmlEngineExtensionPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QQmlEngineExtensionPlugin_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQQmlEngineExtensionPlugin*>(self)->QQmlEngineExtensionPlugin::eventFilter(watched, event);
}

bool QQmlEngineExtensionPlugin_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlEngineExtensionPlugin> slot_handle(slot);
	MiqtVirtualQQmlEngineExtensionPlugin* self_cast = dynamic_cast<MiqtVirtualQQmlEngineExtensionPlugin*>( (QQmlEngineExtensionPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QQmlEngineExtensionPlugin_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQQmlEngineExtensionPlugin*>(self)->QQmlEngineExtensionPlugin::timerEvent(event);
}

bool QQmlEngineExtensionPlugin_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlEngineExtensionPlugin> slot_handle(slot);
	MiqtVirtualQQmlEngineExtensionPlugin* self_cast = dynamic_cast<MiqtVirtualQQmlEngineExtensionPlugin*>( (QQmlEngineExtensionPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QQmlEngineExtensionPlugin_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQQmlEngineExtensionPlugin*>(self)->QQmlEngineExtensionPlugin::childEvent(event);
}

bool QQmlEngineExtensionPlugin_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlEngineExtensionPlugin> slot_handle(slot);
	MiqtVirtualQQmlEngineExtensionPlugin* self_cast = dynamic_cast<MiqtVirtualQQmlEngineExtensionPlugin*>( (QQmlEngineExtensionPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QQmlEngineExtensionPlugin_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQQmlEngineExtensionPlugin*>(self)->QQmlEngineExtensionPlugin::customEvent(event);
}

bool QQmlEngineExtensionPlugin_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlEngineExtensionPlugin> slot_handle(slot);
	MiqtVirtualQQmlEngineExtensionPlugin* self_cast = dynamic_cast<MiqtVirtualQQmlEngineExtensionPlugin*>( (QQmlEngineExtensionPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QQmlEngineExtensionPlugin_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQQmlEngineExtensionPlugin*>(self)->QQmlEngineExtensionPlugin::connectNotify(*signal);
}

bool QQmlEngineExtensionPlugin_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlEngineExtensionPlugin> slot_handle(slot);
	MiqtVirtualQQmlEngineExtensionPlugin* self_cast = dynamic_cast<MiqtVirtualQQmlEngineExtensionPlugin*>( (QQmlEngineExtensionPlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QQmlEngineExtensionPlugin_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQQmlEngineExtensionPlugin*>(self)->QQmlEngineExtensionPlugin::disconnectNotify(*signal);
}

QObject* QQmlEngineExtensionPlugin_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQQmlEngineExtensionPlugin* self_cast = dynamic_cast<MiqtVirtualQQmlEngineExtensionPlugin*>( (QQmlEngineExtensionPlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QQmlEngineExtensionPlugin_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQQmlEngineExtensionPlugin* self_cast = dynamic_cast<MiqtVirtualQQmlEngineExtensionPlugin*>( (QQmlEngineExtensionPlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QQmlEngineExtensionPlugin_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQQmlEngineExtensionPlugin* self_cast = dynamic_cast<MiqtVirtualQQmlEngineExtensionPlugin*>( (QQmlEngineExtensionPlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QQmlEngineExtensionPlugin_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQQmlEngineExtensionPlugin* self_cast = dynamic_cast<MiqtVirtualQQmlEngineExtensionPlugin*>( (QQmlEngineExtensionPlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QQmlEngineExtensionPlugin_delete(QQmlEngineExtensionPlugin* self) {
	delete self;
}

