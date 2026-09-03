#include <memory>
#include <utility>
#include <QAbstractExtensionFactory>
#include <QChildEvent>
#include <QEvent>
#include <QExtensionFactory>
#include <QExtensionManager>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <default_extensionfactory.h>
#include "gen_default_extensionfactory.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QExtensionFactory(intptr_t);
QObject* miqt_exec_callback_QExtensionFactory_extension(const QExtensionFactory*, intptr_t, QObject*, struct miqt_string);
QObject* miqt_exec_callback_QExtensionFactory_createExtension(const QExtensionFactory*, intptr_t, QObject*, struct miqt_string, QObject*);
bool miqt_exec_callback_QExtensionFactory_event(QExtensionFactory*, intptr_t, QEvent*);
bool miqt_exec_callback_QExtensionFactory_eventFilter(QExtensionFactory*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QExtensionFactory_timerEvent(QExtensionFactory*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QExtensionFactory_childEvent(QExtensionFactory*, intptr_t, QChildEvent*);
void miqt_exec_callback_QExtensionFactory_customEvent(QExtensionFactory*, intptr_t, QEvent*);
void miqt_exec_callback_QExtensionFactory_connectNotify(QExtensionFactory*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QExtensionFactory_disconnectNotify(QExtensionFactory*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQExtensionFactory final : public QExtensionFactory {
public:

	MiqtVirtualQExtensionFactory(): QExtensionFactory() {}
	MiqtVirtualQExtensionFactory(QExtensionManager* parent): QExtensionFactory(parent) {}

	virtual ~MiqtVirtualQExtensionFactory() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QExtensionFactory> handle__extension;

	// Subclass to allow providing a Go implementation
	virtual QObject* extension(QObject* object, const QString& iid) const override {
		if (!handle__extension) {
			return QExtensionFactory::extension(object, iid);
		}

		QObject* sigval1 = object;
		const QString iid_ret = iid;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray iid_b = iid_ret.toUtf8();
		struct miqt_string iid_ms;
		iid_ms.len = iid_b.length();
		iid_ms.data = static_cast<char*>(malloc(iid_ms.len));
		memcpy(iid_ms.data, iid_b.data(), iid_ms.len);
		struct miqt_string sigval2 = iid_ms;
		QObject* callback_return_value = miqt_exec_callback_QExtensionFactory_extension(this, handle__extension.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend QObject* QExtensionFactory_virtualbase_extension(const void* self, QObject* object, struct miqt_string iid);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QExtensionFactory> handle__createExtension;

	// Subclass to allow providing a Go implementation
	virtual QObject* createExtension(QObject* object, const QString& iid, QObject* parent) const override {
		if (!handle__createExtension) {
			return QExtensionFactory::createExtension(object, iid, parent);
		}

		QObject* sigval1 = object;
		const QString iid_ret = iid;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray iid_b = iid_ret.toUtf8();
		struct miqt_string iid_ms;
		iid_ms.len = iid_b.length();
		iid_ms.data = static_cast<char*>(malloc(iid_ms.len));
		memcpy(iid_ms.data, iid_b.data(), iid_ms.len);
		struct miqt_string sigval2 = iid_ms;
		QObject* sigval3 = parent;
		QObject* callback_return_value = miqt_exec_callback_QExtensionFactory_createExtension(this, handle__createExtension.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend QObject* QExtensionFactory_virtualbase_createExtension(const void* self, QObject* object, struct miqt_string iid, QObject* parent);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QExtensionFactory> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QExtensionFactory::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QExtensionFactory_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QExtensionFactory_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QExtensionFactory> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QExtensionFactory::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QExtensionFactory_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QExtensionFactory_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QExtensionFactory> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QExtensionFactory::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QExtensionFactory_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QExtensionFactory_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QExtensionFactory> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QExtensionFactory::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QExtensionFactory_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QExtensionFactory_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QExtensionFactory> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QExtensionFactory::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QExtensionFactory_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QExtensionFactory_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QExtensionFactory> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QExtensionFactory::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QExtensionFactory_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QExtensionFactory_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QExtensionFactory> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QExtensionFactory::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QExtensionFactory_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QExtensionFactory_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QExtensionFactory_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QExtensionFactory_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QExtensionFactory_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QExtensionFactory_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QExtensionFactory* QExtensionFactory_new() {
	return new (std::nothrow) MiqtVirtualQExtensionFactory();
}

QExtensionFactory* QExtensionFactory_new2(QExtensionManager* parent) {
	return new (std::nothrow) MiqtVirtualQExtensionFactory(parent);
}

void QExtensionFactory_virtbase(QExtensionFactory* src, QObject** outptr_QObject, QAbstractExtensionFactory** outptr_QAbstractExtensionFactory) {
	*outptr_QObject = static_cast<QObject*>(src);
	*outptr_QAbstractExtensionFactory = static_cast<QAbstractExtensionFactory*>(src);
}

QMetaObject* QExtensionFactory_metaObject(const QExtensionFactory* self) {
	return (QMetaObject*) self->metaObject();
}

void* QExtensionFactory_metacast(QExtensionFactory* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QExtensionFactory_tr(const char* s) {
	QString _ret = QExtensionFactory::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QObject* QExtensionFactory_extension(const QExtensionFactory* self, QObject* object, struct miqt_string iid) {
	QString iid_QString = QString::fromUtf8(iid.data, iid.len);
	return self->extension(object, iid_QString);
}

QExtensionManager* QExtensionFactory_extensionManager(const QExtensionFactory* self) {
	return self->extensionManager();
}

struct miqt_string QExtensionFactory_tr2(const char* s, const char* c) {
	QString _ret = QExtensionFactory::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QExtensionFactory_tr3(const char* s, const char* c, int n) {
	QString _ret = QExtensionFactory::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QExtensionFactory_override_virtual_extension(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QExtensionFactory> slot_handle(slot);
	MiqtVirtualQExtensionFactory* self_cast = dynamic_cast<MiqtVirtualQExtensionFactory*>( (QExtensionFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__extension = std::move(slot_handle);
	return true;
}

QObject* QExtensionFactory_virtualbase_extension(const void* self, QObject* object, struct miqt_string iid) {
	QString iid_QString = QString::fromUtf8(iid.data, iid.len);
	return static_cast<const MiqtVirtualQExtensionFactory*>(self)->QExtensionFactory::extension(object, iid_QString);
}

bool QExtensionFactory_override_virtual_createExtension(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QExtensionFactory> slot_handle(slot);
	MiqtVirtualQExtensionFactory* self_cast = dynamic_cast<MiqtVirtualQExtensionFactory*>( (QExtensionFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__createExtension = std::move(slot_handle);
	return true;
}

QObject* QExtensionFactory_virtualbase_createExtension(const void* self, QObject* object, struct miqt_string iid, QObject* parent) {
	QString iid_QString = QString::fromUtf8(iid.data, iid.len);
	return static_cast<const MiqtVirtualQExtensionFactory*>(self)->QExtensionFactory::createExtension(object, iid_QString, parent);
}

bool QExtensionFactory_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QExtensionFactory> slot_handle(slot);
	MiqtVirtualQExtensionFactory* self_cast = dynamic_cast<MiqtVirtualQExtensionFactory*>( (QExtensionFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QExtensionFactory_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQExtensionFactory*>(self)->QExtensionFactory::event(event);
}

bool QExtensionFactory_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QExtensionFactory> slot_handle(slot);
	MiqtVirtualQExtensionFactory* self_cast = dynamic_cast<MiqtVirtualQExtensionFactory*>( (QExtensionFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QExtensionFactory_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQExtensionFactory*>(self)->QExtensionFactory::eventFilter(watched, event);
}

bool QExtensionFactory_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QExtensionFactory> slot_handle(slot);
	MiqtVirtualQExtensionFactory* self_cast = dynamic_cast<MiqtVirtualQExtensionFactory*>( (QExtensionFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QExtensionFactory_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQExtensionFactory*>(self)->QExtensionFactory::timerEvent(event);
}

bool QExtensionFactory_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QExtensionFactory> slot_handle(slot);
	MiqtVirtualQExtensionFactory* self_cast = dynamic_cast<MiqtVirtualQExtensionFactory*>( (QExtensionFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QExtensionFactory_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQExtensionFactory*>(self)->QExtensionFactory::childEvent(event);
}

bool QExtensionFactory_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QExtensionFactory> slot_handle(slot);
	MiqtVirtualQExtensionFactory* self_cast = dynamic_cast<MiqtVirtualQExtensionFactory*>( (QExtensionFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QExtensionFactory_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQExtensionFactory*>(self)->QExtensionFactory::customEvent(event);
}

bool QExtensionFactory_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QExtensionFactory> slot_handle(slot);
	MiqtVirtualQExtensionFactory* self_cast = dynamic_cast<MiqtVirtualQExtensionFactory*>( (QExtensionFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QExtensionFactory_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQExtensionFactory*>(self)->QExtensionFactory::connectNotify(*signal);
}

bool QExtensionFactory_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QExtensionFactory> slot_handle(slot);
	MiqtVirtualQExtensionFactory* self_cast = dynamic_cast<MiqtVirtualQExtensionFactory*>( (QExtensionFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QExtensionFactory_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQExtensionFactory*>(self)->QExtensionFactory::disconnectNotify(*signal);
}

QObject* QExtensionFactory_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQExtensionFactory* self_cast = dynamic_cast<MiqtVirtualQExtensionFactory*>( (QExtensionFactory*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QExtensionFactory_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQExtensionFactory* self_cast = dynamic_cast<MiqtVirtualQExtensionFactory*>( (QExtensionFactory*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QExtensionFactory_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQExtensionFactory* self_cast = dynamic_cast<MiqtVirtualQExtensionFactory*>( (QExtensionFactory*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QExtensionFactory_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQExtensionFactory* self_cast = dynamic_cast<MiqtVirtualQExtensionFactory*>( (QExtensionFactory*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QExtensionFactory_delete(QExtensionFactory* self) {
	delete self;
}

