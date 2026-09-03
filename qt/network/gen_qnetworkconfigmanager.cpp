#include <memory>
#include <utility>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNetworkConfiguration>
#include <QNetworkConfigurationManager>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qnetworkconfigmanager.h>
#include "gen_qnetworkconfigmanager.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QNetworkConfigurationManager(intptr_t);
void miqt_exec_callback_QNetworkConfigurationManager_configurationAdded(intptr_t, QNetworkConfiguration*);
void miqt_exec_callback_QNetworkConfigurationManager_configurationRemoved(intptr_t, QNetworkConfiguration*);
void miqt_exec_callback_QNetworkConfigurationManager_configurationChanged(intptr_t, QNetworkConfiguration*);
void miqt_exec_callback_QNetworkConfigurationManager_onlineStateChanged(intptr_t, bool);
void miqt_exec_callback_QNetworkConfigurationManager_updateCompleted(intptr_t);
bool miqt_exec_callback_QNetworkConfigurationManager_event(QNetworkConfigurationManager*, intptr_t, QEvent*);
bool miqt_exec_callback_QNetworkConfigurationManager_eventFilter(QNetworkConfigurationManager*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QNetworkConfigurationManager_timerEvent(QNetworkConfigurationManager*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QNetworkConfigurationManager_childEvent(QNetworkConfigurationManager*, intptr_t, QChildEvent*);
void miqt_exec_callback_QNetworkConfigurationManager_customEvent(QNetworkConfigurationManager*, intptr_t, QEvent*);
void miqt_exec_callback_QNetworkConfigurationManager_connectNotify(QNetworkConfigurationManager*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QNetworkConfigurationManager_disconnectNotify(QNetworkConfigurationManager*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQNetworkConfigurationManager final : public QNetworkConfigurationManager {
public:

	MiqtVirtualQNetworkConfigurationManager(): QNetworkConfigurationManager() {}
	MiqtVirtualQNetworkConfigurationManager(QObject* parent): QNetworkConfigurationManager(parent) {}

	virtual ~MiqtVirtualQNetworkConfigurationManager() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QNetworkConfigurationManager> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QNetworkConfigurationManager::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QNetworkConfigurationManager_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QNetworkConfigurationManager_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QNetworkConfigurationManager> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QNetworkConfigurationManager::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QNetworkConfigurationManager_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QNetworkConfigurationManager_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QNetworkConfigurationManager> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QNetworkConfigurationManager::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QNetworkConfigurationManager_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QNetworkConfigurationManager_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QNetworkConfigurationManager> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QNetworkConfigurationManager::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QNetworkConfigurationManager_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QNetworkConfigurationManager_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QNetworkConfigurationManager> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QNetworkConfigurationManager::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QNetworkConfigurationManager_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QNetworkConfigurationManager_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QNetworkConfigurationManager> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QNetworkConfigurationManager::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QNetworkConfigurationManager_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QNetworkConfigurationManager_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QNetworkConfigurationManager> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QNetworkConfigurationManager::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QNetworkConfigurationManager_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QNetworkConfigurationManager_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QNetworkConfigurationManager_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QNetworkConfigurationManager_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QNetworkConfigurationManager_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QNetworkConfigurationManager_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QNetworkConfigurationManager* QNetworkConfigurationManager_new() {
	return new (std::nothrow) MiqtVirtualQNetworkConfigurationManager();
}

QNetworkConfigurationManager* QNetworkConfigurationManager_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQNetworkConfigurationManager(parent);
}

void QNetworkConfigurationManager_virtbase(QNetworkConfigurationManager* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QNetworkConfigurationManager_metaObject(const QNetworkConfigurationManager* self) {
	return (QMetaObject*) self->metaObject();
}

void* QNetworkConfigurationManager_metacast(QNetworkConfigurationManager* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QNetworkConfigurationManager_tr(const char* s) {
	QString _ret = QNetworkConfigurationManager::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkConfigurationManager_trUtf8(const char* s) {
	QString _ret = QNetworkConfigurationManager::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QNetworkConfigurationManager_capabilities(const QNetworkConfigurationManager* self) {
	QNetworkConfigurationManager::Capabilities _ret = self->capabilities();
	return static_cast<int>(_ret);
}

QNetworkConfiguration* QNetworkConfigurationManager_defaultConfiguration(const QNetworkConfigurationManager* self) {
	return new QNetworkConfiguration(self->defaultConfiguration());
}

struct miqt_array /* of QNetworkConfiguration* */  QNetworkConfigurationManager_allConfigurations(const QNetworkConfigurationManager* self) {
	QList<QNetworkConfiguration> _ret = self->allConfigurations();
	// Convert QList<> from C++ memory to manually-managed C memory
	QNetworkConfiguration** _arr = static_cast<QNetworkConfiguration**>(malloc(sizeof(QNetworkConfiguration*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QNetworkConfiguration(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QNetworkConfiguration* QNetworkConfigurationManager_configurationFromIdentifier(const QNetworkConfigurationManager* self, struct miqt_string identifier) {
	QString identifier_QString = QString::fromUtf8(identifier.data, identifier.len);
	return new QNetworkConfiguration(self->configurationFromIdentifier(identifier_QString));
}

bool QNetworkConfigurationManager_isOnline(const QNetworkConfigurationManager* self) {
	return self->isOnline();
}

void QNetworkConfigurationManager_updateConfigurations(QNetworkConfigurationManager* self) {
	self->updateConfigurations();
}

void QNetworkConfigurationManager_configurationAdded(QNetworkConfigurationManager* self, QNetworkConfiguration* config) {
	self->configurationAdded(*config);
}

void* QNetworkConfigurationManager_connect_configurationAdded(QNetworkConfigurationManager* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QNetworkConfigurationManager>>(slot);
	return new QMetaObject::Connection(QNetworkConfigurationManager::connect(self, static_cast<void (QNetworkConfigurationManager::*)(const QNetworkConfiguration&)>(&QNetworkConfigurationManager::configurationAdded), self, [slot_handle](const QNetworkConfiguration& config) {
		intptr_t slot = slot_handle->value();
		const QNetworkConfiguration& config_ret = config;
		// Cast returned reference into pointer
		QNetworkConfiguration* sigval1 = const_cast<QNetworkConfiguration*>(&config_ret);
		miqt_exec_callback_QNetworkConfigurationManager_configurationAdded(slot, sigval1);
	}));
}

void QNetworkConfigurationManager_configurationRemoved(QNetworkConfigurationManager* self, QNetworkConfiguration* config) {
	self->configurationRemoved(*config);
}

void* QNetworkConfigurationManager_connect_configurationRemoved(QNetworkConfigurationManager* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QNetworkConfigurationManager>>(slot);
	return new QMetaObject::Connection(QNetworkConfigurationManager::connect(self, static_cast<void (QNetworkConfigurationManager::*)(const QNetworkConfiguration&)>(&QNetworkConfigurationManager::configurationRemoved), self, [slot_handle](const QNetworkConfiguration& config) {
		intptr_t slot = slot_handle->value();
		const QNetworkConfiguration& config_ret = config;
		// Cast returned reference into pointer
		QNetworkConfiguration* sigval1 = const_cast<QNetworkConfiguration*>(&config_ret);
		miqt_exec_callback_QNetworkConfigurationManager_configurationRemoved(slot, sigval1);
	}));
}

void QNetworkConfigurationManager_configurationChanged(QNetworkConfigurationManager* self, QNetworkConfiguration* config) {
	self->configurationChanged(*config);
}

void* QNetworkConfigurationManager_connect_configurationChanged(QNetworkConfigurationManager* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QNetworkConfigurationManager>>(slot);
	return new QMetaObject::Connection(QNetworkConfigurationManager::connect(self, static_cast<void (QNetworkConfigurationManager::*)(const QNetworkConfiguration&)>(&QNetworkConfigurationManager::configurationChanged), self, [slot_handle](const QNetworkConfiguration& config) {
		intptr_t slot = slot_handle->value();
		const QNetworkConfiguration& config_ret = config;
		// Cast returned reference into pointer
		QNetworkConfiguration* sigval1 = const_cast<QNetworkConfiguration*>(&config_ret);
		miqt_exec_callback_QNetworkConfigurationManager_configurationChanged(slot, sigval1);
	}));
}

void QNetworkConfigurationManager_onlineStateChanged(QNetworkConfigurationManager* self, bool isOnline) {
	self->onlineStateChanged(isOnline);
}

void* QNetworkConfigurationManager_connect_onlineStateChanged(QNetworkConfigurationManager* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QNetworkConfigurationManager>>(slot);
	return new QMetaObject::Connection(QNetworkConfigurationManager::connect(self, static_cast<void (QNetworkConfigurationManager::*)(bool)>(&QNetworkConfigurationManager::onlineStateChanged), self, [slot_handle](bool isOnline) {
		intptr_t slot = slot_handle->value();
		bool sigval1 = isOnline;
		miqt_exec_callback_QNetworkConfigurationManager_onlineStateChanged(slot, sigval1);
	}));
}

void QNetworkConfigurationManager_updateCompleted(QNetworkConfigurationManager* self) {
	self->updateCompleted();
}

void* QNetworkConfigurationManager_connect_updateCompleted(QNetworkConfigurationManager* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QNetworkConfigurationManager>>(slot);
	return new QMetaObject::Connection(QNetworkConfigurationManager::connect(self, static_cast<void (QNetworkConfigurationManager::*)()>(&QNetworkConfigurationManager::updateCompleted), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QNetworkConfigurationManager_updateCompleted(slot);
	}));
}

struct miqt_string QNetworkConfigurationManager_tr2(const char* s, const char* c) {
	QString _ret = QNetworkConfigurationManager::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkConfigurationManager_tr3(const char* s, const char* c, int n) {
	QString _ret = QNetworkConfigurationManager::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkConfigurationManager_trUtf82(const char* s, const char* c) {
	QString _ret = QNetworkConfigurationManager::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNetworkConfigurationManager_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QNetworkConfigurationManager::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QNetworkConfiguration* */  QNetworkConfigurationManager_allConfigurationsWithFlags(const QNetworkConfigurationManager* self, int flags) {
	QList<QNetworkConfiguration> _ret = self->allConfigurations(static_cast<QNetworkConfiguration::StateFlags>(flags));
	// Convert QList<> from C++ memory to manually-managed C memory
	QNetworkConfiguration** _arr = static_cast<QNetworkConfiguration**>(malloc(sizeof(QNetworkConfiguration*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QNetworkConfiguration(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QNetworkConfigurationManager_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNetworkConfigurationManager> slot_handle(slot);
	MiqtVirtualQNetworkConfigurationManager* self_cast = dynamic_cast<MiqtVirtualQNetworkConfigurationManager*>( (QNetworkConfigurationManager*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QNetworkConfigurationManager_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQNetworkConfigurationManager*>(self)->QNetworkConfigurationManager::event(event);
}

bool QNetworkConfigurationManager_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNetworkConfigurationManager> slot_handle(slot);
	MiqtVirtualQNetworkConfigurationManager* self_cast = dynamic_cast<MiqtVirtualQNetworkConfigurationManager*>( (QNetworkConfigurationManager*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QNetworkConfigurationManager_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQNetworkConfigurationManager*>(self)->QNetworkConfigurationManager::eventFilter(watched, event);
}

bool QNetworkConfigurationManager_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNetworkConfigurationManager> slot_handle(slot);
	MiqtVirtualQNetworkConfigurationManager* self_cast = dynamic_cast<MiqtVirtualQNetworkConfigurationManager*>( (QNetworkConfigurationManager*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QNetworkConfigurationManager_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQNetworkConfigurationManager*>(self)->QNetworkConfigurationManager::timerEvent(event);
}

bool QNetworkConfigurationManager_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNetworkConfigurationManager> slot_handle(slot);
	MiqtVirtualQNetworkConfigurationManager* self_cast = dynamic_cast<MiqtVirtualQNetworkConfigurationManager*>( (QNetworkConfigurationManager*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QNetworkConfigurationManager_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQNetworkConfigurationManager*>(self)->QNetworkConfigurationManager::childEvent(event);
}

bool QNetworkConfigurationManager_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNetworkConfigurationManager> slot_handle(slot);
	MiqtVirtualQNetworkConfigurationManager* self_cast = dynamic_cast<MiqtVirtualQNetworkConfigurationManager*>( (QNetworkConfigurationManager*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QNetworkConfigurationManager_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQNetworkConfigurationManager*>(self)->QNetworkConfigurationManager::customEvent(event);
}

bool QNetworkConfigurationManager_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNetworkConfigurationManager> slot_handle(slot);
	MiqtVirtualQNetworkConfigurationManager* self_cast = dynamic_cast<MiqtVirtualQNetworkConfigurationManager*>( (QNetworkConfigurationManager*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QNetworkConfigurationManager_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQNetworkConfigurationManager*>(self)->QNetworkConfigurationManager::connectNotify(*signal);
}

bool QNetworkConfigurationManager_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNetworkConfigurationManager> slot_handle(slot);
	MiqtVirtualQNetworkConfigurationManager* self_cast = dynamic_cast<MiqtVirtualQNetworkConfigurationManager*>( (QNetworkConfigurationManager*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QNetworkConfigurationManager_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQNetworkConfigurationManager*>(self)->QNetworkConfigurationManager::disconnectNotify(*signal);
}

QObject* QNetworkConfigurationManager_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQNetworkConfigurationManager* self_cast = dynamic_cast<MiqtVirtualQNetworkConfigurationManager*>( (QNetworkConfigurationManager*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QNetworkConfigurationManager_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQNetworkConfigurationManager* self_cast = dynamic_cast<MiqtVirtualQNetworkConfigurationManager*>( (QNetworkConfigurationManager*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QNetworkConfigurationManager_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQNetworkConfigurationManager* self_cast = dynamic_cast<MiqtVirtualQNetworkConfigurationManager*>( (QNetworkConfigurationManager*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QNetworkConfigurationManager_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQNetworkConfigurationManager* self_cast = dynamic_cast<MiqtVirtualQNetworkConfigurationManager*>( (QNetworkConfigurationManager*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QNetworkConfigurationManager_delete(QNetworkConfigurationManager* self) {
	delete self;
}

