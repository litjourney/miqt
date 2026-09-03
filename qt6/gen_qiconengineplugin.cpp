#include <memory>
#include <utility>
#include <QChildEvent>
#include <QEvent>
#include <QIconEngine>
#include <QIconEnginePlugin>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qiconengineplugin.h>
#include "gen_qiconengineplugin.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QIconEnginePlugin(intptr_t);
QIconEngine* miqt_exec_callback_QIconEnginePlugin_create(QIconEnginePlugin*, intptr_t, struct miqt_string);
bool miqt_exec_callback_QIconEnginePlugin_event(QIconEnginePlugin*, intptr_t, QEvent*);
bool miqt_exec_callback_QIconEnginePlugin_eventFilter(QIconEnginePlugin*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QIconEnginePlugin_timerEvent(QIconEnginePlugin*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QIconEnginePlugin_childEvent(QIconEnginePlugin*, intptr_t, QChildEvent*);
void miqt_exec_callback_QIconEnginePlugin_customEvent(QIconEnginePlugin*, intptr_t, QEvent*);
void miqt_exec_callback_QIconEnginePlugin_connectNotify(QIconEnginePlugin*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QIconEnginePlugin_disconnectNotify(QIconEnginePlugin*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQIconEnginePlugin final : public QIconEnginePlugin {
public:

	MiqtVirtualQIconEnginePlugin(): QIconEnginePlugin() {}
	MiqtVirtualQIconEnginePlugin(QObject* parent): QIconEnginePlugin(parent) {}

	virtual ~MiqtVirtualQIconEnginePlugin() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QIconEnginePlugin> handle__create;

	// Subclass to allow providing a Go implementation
	virtual QIconEngine* create(const QString& filename) override {
		if (!handle__create) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		const QString filename_ret = filename;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray filename_b = filename_ret.toUtf8();
		struct miqt_string filename_ms;
		filename_ms.len = filename_b.length();
		filename_ms.data = static_cast<char*>(malloc(filename_ms.len));
		memcpy(filename_ms.data, filename_b.data(), filename_ms.len);
		struct miqt_string sigval1 = filename_ms;
		QIconEngine* callback_return_value = miqt_exec_callback_QIconEnginePlugin_create(this, handle__create.value(), sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QIconEnginePlugin> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QIconEnginePlugin::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QIconEnginePlugin_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QIconEnginePlugin_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QIconEnginePlugin> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QIconEnginePlugin::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QIconEnginePlugin_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QIconEnginePlugin_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QIconEnginePlugin> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QIconEnginePlugin::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QIconEnginePlugin_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QIconEnginePlugin_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QIconEnginePlugin> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QIconEnginePlugin::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QIconEnginePlugin_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QIconEnginePlugin_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QIconEnginePlugin> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QIconEnginePlugin::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QIconEnginePlugin_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QIconEnginePlugin_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QIconEnginePlugin> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QIconEnginePlugin::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QIconEnginePlugin_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QIconEnginePlugin_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QIconEnginePlugin> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QIconEnginePlugin::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QIconEnginePlugin_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QIconEnginePlugin_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QIconEnginePlugin_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QIconEnginePlugin_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QIconEnginePlugin_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QIconEnginePlugin_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QIconEnginePlugin* QIconEnginePlugin_new() {
	return new (std::nothrow) MiqtVirtualQIconEnginePlugin();
}

QIconEnginePlugin* QIconEnginePlugin_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQIconEnginePlugin(parent);
}

void QIconEnginePlugin_virtbase(QIconEnginePlugin* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QIconEnginePlugin_metaObject(const QIconEnginePlugin* self) {
	return (QMetaObject*) self->metaObject();
}

void* QIconEnginePlugin_metacast(QIconEnginePlugin* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QIconEnginePlugin_tr(const char* s) {
	QString _ret = QIconEnginePlugin::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QIconEngine* QIconEnginePlugin_create(QIconEnginePlugin* self, struct miqt_string filename) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	return self->create(filename_QString);
}

struct miqt_string QIconEnginePlugin_tr2(const char* s, const char* c) {
	QString _ret = QIconEnginePlugin::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QIconEnginePlugin_tr3(const char* s, const char* c, int n) {
	QString _ret = QIconEnginePlugin::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QIconEnginePlugin_override_virtual_create(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QIconEnginePlugin> slot_handle(slot);
	MiqtVirtualQIconEnginePlugin* self_cast = dynamic_cast<MiqtVirtualQIconEnginePlugin*>( (QIconEnginePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__create = std::move(slot_handle);
	return true;
}

bool QIconEnginePlugin_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QIconEnginePlugin> slot_handle(slot);
	MiqtVirtualQIconEnginePlugin* self_cast = dynamic_cast<MiqtVirtualQIconEnginePlugin*>( (QIconEnginePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QIconEnginePlugin_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQIconEnginePlugin*>(self)->QIconEnginePlugin::event(event);
}

bool QIconEnginePlugin_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QIconEnginePlugin> slot_handle(slot);
	MiqtVirtualQIconEnginePlugin* self_cast = dynamic_cast<MiqtVirtualQIconEnginePlugin*>( (QIconEnginePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QIconEnginePlugin_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQIconEnginePlugin*>(self)->QIconEnginePlugin::eventFilter(watched, event);
}

bool QIconEnginePlugin_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QIconEnginePlugin> slot_handle(slot);
	MiqtVirtualQIconEnginePlugin* self_cast = dynamic_cast<MiqtVirtualQIconEnginePlugin*>( (QIconEnginePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QIconEnginePlugin_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQIconEnginePlugin*>(self)->QIconEnginePlugin::timerEvent(event);
}

bool QIconEnginePlugin_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QIconEnginePlugin> slot_handle(slot);
	MiqtVirtualQIconEnginePlugin* self_cast = dynamic_cast<MiqtVirtualQIconEnginePlugin*>( (QIconEnginePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QIconEnginePlugin_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQIconEnginePlugin*>(self)->QIconEnginePlugin::childEvent(event);
}

bool QIconEnginePlugin_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QIconEnginePlugin> slot_handle(slot);
	MiqtVirtualQIconEnginePlugin* self_cast = dynamic_cast<MiqtVirtualQIconEnginePlugin*>( (QIconEnginePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QIconEnginePlugin_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQIconEnginePlugin*>(self)->QIconEnginePlugin::customEvent(event);
}

bool QIconEnginePlugin_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QIconEnginePlugin> slot_handle(slot);
	MiqtVirtualQIconEnginePlugin* self_cast = dynamic_cast<MiqtVirtualQIconEnginePlugin*>( (QIconEnginePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QIconEnginePlugin_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQIconEnginePlugin*>(self)->QIconEnginePlugin::connectNotify(*signal);
}

bool QIconEnginePlugin_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QIconEnginePlugin> slot_handle(slot);
	MiqtVirtualQIconEnginePlugin* self_cast = dynamic_cast<MiqtVirtualQIconEnginePlugin*>( (QIconEnginePlugin*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QIconEnginePlugin_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQIconEnginePlugin*>(self)->QIconEnginePlugin::disconnectNotify(*signal);
}

QObject* QIconEnginePlugin_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQIconEnginePlugin* self_cast = dynamic_cast<MiqtVirtualQIconEnginePlugin*>( (QIconEnginePlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QIconEnginePlugin_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQIconEnginePlugin* self_cast = dynamic_cast<MiqtVirtualQIconEnginePlugin*>( (QIconEnginePlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QIconEnginePlugin_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQIconEnginePlugin* self_cast = dynamic_cast<MiqtVirtualQIconEnginePlugin*>( (QIconEnginePlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QIconEnginePlugin_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQIconEnginePlugin* self_cast = dynamic_cast<MiqtVirtualQIconEnginePlugin*>( (QIconEnginePlugin*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QIconEnginePlugin_delete(QIconEnginePlugin* self) {
	delete self;
}

