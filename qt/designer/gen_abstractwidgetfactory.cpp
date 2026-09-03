#include <memory>
#include <utility>
#include <QChildEvent>
#include <QDesignerFormEditorInterface>
#include <QDesignerWidgetFactoryInterface>
#include <QEvent>
#include <QLayout>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWidget>
#include <abstractwidgetfactory.h>
#include "gen_abstractwidgetfactory.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QDesignerWidgetFactoryInterface(intptr_t);
QDesignerFormEditorInterface* miqt_exec_callback_QDesignerWidgetFactoryInterface_core(const QDesignerWidgetFactoryInterface*, intptr_t);
QWidget* miqt_exec_callback_QDesignerWidgetFactoryInterface_containerOfWidget(const QDesignerWidgetFactoryInterface*, intptr_t, QWidget*);
QWidget* miqt_exec_callback_QDesignerWidgetFactoryInterface_widgetOfContainer(const QDesignerWidgetFactoryInterface*, intptr_t, QWidget*);
QWidget* miqt_exec_callback_QDesignerWidgetFactoryInterface_createWidget(const QDesignerWidgetFactoryInterface*, intptr_t, struct miqt_string, QWidget*);
QLayout* miqt_exec_callback_QDesignerWidgetFactoryInterface_createLayout(const QDesignerWidgetFactoryInterface*, intptr_t, QWidget*, QLayout*, int);
bool miqt_exec_callback_QDesignerWidgetFactoryInterface_isPassiveInteractor(QDesignerWidgetFactoryInterface*, intptr_t, QWidget*);
void miqt_exec_callback_QDesignerWidgetFactoryInterface_initialize(const QDesignerWidgetFactoryInterface*, intptr_t, QObject*);
bool miqt_exec_callback_QDesignerWidgetFactoryInterface_event(QDesignerWidgetFactoryInterface*, intptr_t, QEvent*);
bool miqt_exec_callback_QDesignerWidgetFactoryInterface_eventFilter(QDesignerWidgetFactoryInterface*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QDesignerWidgetFactoryInterface_timerEvent(QDesignerWidgetFactoryInterface*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QDesignerWidgetFactoryInterface_childEvent(QDesignerWidgetFactoryInterface*, intptr_t, QChildEvent*);
void miqt_exec_callback_QDesignerWidgetFactoryInterface_customEvent(QDesignerWidgetFactoryInterface*, intptr_t, QEvent*);
void miqt_exec_callback_QDesignerWidgetFactoryInterface_connectNotify(QDesignerWidgetFactoryInterface*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDesignerWidgetFactoryInterface_disconnectNotify(QDesignerWidgetFactoryInterface*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQDesignerWidgetFactoryInterface final : public QDesignerWidgetFactoryInterface {
public:

	MiqtVirtualQDesignerWidgetFactoryInterface(): QDesignerWidgetFactoryInterface() {}
	MiqtVirtualQDesignerWidgetFactoryInterface(QObject* parent): QDesignerWidgetFactoryInterface(parent) {}

	virtual ~MiqtVirtualQDesignerWidgetFactoryInterface() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetFactoryInterface> handle__core;

	// Subclass to allow providing a Go implementation
	virtual QDesignerFormEditorInterface* core() const override {
		if (!handle__core) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		QDesignerFormEditorInterface* callback_return_value = miqt_exec_callback_QDesignerWidgetFactoryInterface_core(this, handle__core.value());
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetFactoryInterface> handle__containerOfWidget;

	// Subclass to allow providing a Go implementation
	virtual QWidget* containerOfWidget(QWidget* w) const override {
		if (!handle__containerOfWidget) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		QWidget* sigval1 = w;
		QWidget* callback_return_value = miqt_exec_callback_QDesignerWidgetFactoryInterface_containerOfWidget(this, handle__containerOfWidget.value(), sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetFactoryInterface> handle__widgetOfContainer;

	// Subclass to allow providing a Go implementation
	virtual QWidget* widgetOfContainer(QWidget* w) const override {
		if (!handle__widgetOfContainer) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		QWidget* sigval1 = w;
		QWidget* callback_return_value = miqt_exec_callback_QDesignerWidgetFactoryInterface_widgetOfContainer(this, handle__widgetOfContainer.value(), sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetFactoryInterface> handle__createWidget;

	// Subclass to allow providing a Go implementation
	virtual QWidget* createWidget(const QString& name, QWidget* parentWidget) const override {
		if (!handle__createWidget) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		QWidget* sigval2 = parentWidget;
		QWidget* callback_return_value = miqt_exec_callback_QDesignerWidgetFactoryInterface_createWidget(this, handle__createWidget.value(), sigval1, sigval2);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetFactoryInterface> handle__createLayout;

	// Subclass to allow providing a Go implementation
	virtual QLayout* createLayout(QWidget* widget, QLayout* layout, int type) const override {
		if (!handle__createLayout) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		QWidget* sigval1 = widget;
		QLayout* sigval2 = layout;
		int sigval3 = type;
		QLayout* callback_return_value = miqt_exec_callback_QDesignerWidgetFactoryInterface_createLayout(this, handle__createLayout.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetFactoryInterface> handle__isPassiveInteractor;

	// Subclass to allow providing a Go implementation
	virtual bool isPassiveInteractor(QWidget* widget) override {
		if (!handle__isPassiveInteractor) {
			return false; // Pure virtual, there is no base we can call
		}

		QWidget* sigval1 = widget;
		bool callback_return_value = miqt_exec_callback_QDesignerWidgetFactoryInterface_isPassiveInteractor(this, handle__isPassiveInteractor.value(), sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetFactoryInterface> handle__initialize;

	// Subclass to allow providing a Go implementation
	virtual void initialize(QObject* object) const override {
		if (!handle__initialize) {
			return; // Pure virtual, there is no base we can call
		}

		QObject* sigval1 = object;
		miqt_exec_callback_QDesignerWidgetFactoryInterface_initialize(this, handle__initialize.value(), sigval1);

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetFactoryInterface> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QDesignerWidgetFactoryInterface::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QDesignerWidgetFactoryInterface_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QDesignerWidgetFactoryInterface_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetFactoryInterface> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QDesignerWidgetFactoryInterface::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QDesignerWidgetFactoryInterface_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QDesignerWidgetFactoryInterface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetFactoryInterface> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QDesignerWidgetFactoryInterface::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QDesignerWidgetFactoryInterface_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QDesignerWidgetFactoryInterface_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetFactoryInterface> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QDesignerWidgetFactoryInterface::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QDesignerWidgetFactoryInterface_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QDesignerWidgetFactoryInterface_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetFactoryInterface> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QDesignerWidgetFactoryInterface::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QDesignerWidgetFactoryInterface_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QDesignerWidgetFactoryInterface_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetFactoryInterface> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QDesignerWidgetFactoryInterface::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QDesignerWidgetFactoryInterface_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QDesignerWidgetFactoryInterface_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetFactoryInterface> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QDesignerWidgetFactoryInterface::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QDesignerWidgetFactoryInterface_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QDesignerWidgetFactoryInterface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QDesignerWidgetFactoryInterface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QDesignerWidgetFactoryInterface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QDesignerWidgetFactoryInterface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QDesignerWidgetFactoryInterface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QDesignerWidgetFactoryInterface* QDesignerWidgetFactoryInterface_new() {
	return new (std::nothrow) MiqtVirtualQDesignerWidgetFactoryInterface();
}

QDesignerWidgetFactoryInterface* QDesignerWidgetFactoryInterface_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQDesignerWidgetFactoryInterface(parent);
}

void QDesignerWidgetFactoryInterface_virtbase(QDesignerWidgetFactoryInterface* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QDesignerWidgetFactoryInterface_metaObject(const QDesignerWidgetFactoryInterface* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDesignerWidgetFactoryInterface_metacast(QDesignerWidgetFactoryInterface* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDesignerWidgetFactoryInterface_tr(const char* s) {
	QString _ret = QDesignerWidgetFactoryInterface::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerWidgetFactoryInterface_trUtf8(const char* s) {
	QString _ret = QDesignerWidgetFactoryInterface::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDesignerFormEditorInterface* QDesignerWidgetFactoryInterface_core(const QDesignerWidgetFactoryInterface* self) {
	return self->core();
}

QWidget* QDesignerWidgetFactoryInterface_containerOfWidget(const QDesignerWidgetFactoryInterface* self, QWidget* w) {
	return self->containerOfWidget(w);
}

QWidget* QDesignerWidgetFactoryInterface_widgetOfContainer(const QDesignerWidgetFactoryInterface* self, QWidget* w) {
	return self->widgetOfContainer(w);
}

QWidget* QDesignerWidgetFactoryInterface_createWidget(const QDesignerWidgetFactoryInterface* self, struct miqt_string name, QWidget* parentWidget) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->createWidget(name_QString, parentWidget);
}

QLayout* QDesignerWidgetFactoryInterface_createLayout(const QDesignerWidgetFactoryInterface* self, QWidget* widget, QLayout* layout, int type) {
	return self->createLayout(widget, layout, static_cast<int>(type));
}

bool QDesignerWidgetFactoryInterface_isPassiveInteractor(QDesignerWidgetFactoryInterface* self, QWidget* widget) {
	return self->isPassiveInteractor(widget);
}

void QDesignerWidgetFactoryInterface_initialize(const QDesignerWidgetFactoryInterface* self, QObject* object) {
	self->initialize(object);
}

struct miqt_string QDesignerWidgetFactoryInterface_tr2(const char* s, const char* c) {
	QString _ret = QDesignerWidgetFactoryInterface::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerWidgetFactoryInterface_tr3(const char* s, const char* c, int n) {
	QString _ret = QDesignerWidgetFactoryInterface::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerWidgetFactoryInterface_trUtf82(const char* s, const char* c) {
	QString _ret = QDesignerWidgetFactoryInterface::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerWidgetFactoryInterface_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QDesignerWidgetFactoryInterface::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDesignerWidgetFactoryInterface_override_virtual_core(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetFactoryInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetFactoryInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetFactoryInterface*>( (QDesignerWidgetFactoryInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__core = std::move(slot_handle);
	return true;
}

bool QDesignerWidgetFactoryInterface_override_virtual_containerOfWidget(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetFactoryInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetFactoryInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetFactoryInterface*>( (QDesignerWidgetFactoryInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__containerOfWidget = std::move(slot_handle);
	return true;
}

bool QDesignerWidgetFactoryInterface_override_virtual_widgetOfContainer(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetFactoryInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetFactoryInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetFactoryInterface*>( (QDesignerWidgetFactoryInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetOfContainer = std::move(slot_handle);
	return true;
}

bool QDesignerWidgetFactoryInterface_override_virtual_createWidget(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetFactoryInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetFactoryInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetFactoryInterface*>( (QDesignerWidgetFactoryInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__createWidget = std::move(slot_handle);
	return true;
}

bool QDesignerWidgetFactoryInterface_override_virtual_createLayout(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetFactoryInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetFactoryInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetFactoryInterface*>( (QDesignerWidgetFactoryInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__createLayout = std::move(slot_handle);
	return true;
}

bool QDesignerWidgetFactoryInterface_override_virtual_isPassiveInteractor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetFactoryInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetFactoryInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetFactoryInterface*>( (QDesignerWidgetFactoryInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isPassiveInteractor = std::move(slot_handle);
	return true;
}

bool QDesignerWidgetFactoryInterface_override_virtual_initialize(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetFactoryInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetFactoryInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetFactoryInterface*>( (QDesignerWidgetFactoryInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initialize = std::move(slot_handle);
	return true;
}

bool QDesignerWidgetFactoryInterface_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetFactoryInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetFactoryInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetFactoryInterface*>( (QDesignerWidgetFactoryInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QDesignerWidgetFactoryInterface_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQDesignerWidgetFactoryInterface*>(self)->QDesignerWidgetFactoryInterface::event(event);
}

bool QDesignerWidgetFactoryInterface_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetFactoryInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetFactoryInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetFactoryInterface*>( (QDesignerWidgetFactoryInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QDesignerWidgetFactoryInterface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQDesignerWidgetFactoryInterface*>(self)->QDesignerWidgetFactoryInterface::eventFilter(watched, event);
}

bool QDesignerWidgetFactoryInterface_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetFactoryInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetFactoryInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetFactoryInterface*>( (QDesignerWidgetFactoryInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QDesignerWidgetFactoryInterface_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQDesignerWidgetFactoryInterface*>(self)->QDesignerWidgetFactoryInterface::timerEvent(event);
}

bool QDesignerWidgetFactoryInterface_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetFactoryInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetFactoryInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetFactoryInterface*>( (QDesignerWidgetFactoryInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QDesignerWidgetFactoryInterface_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQDesignerWidgetFactoryInterface*>(self)->QDesignerWidgetFactoryInterface::childEvent(event);
}

bool QDesignerWidgetFactoryInterface_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetFactoryInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetFactoryInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetFactoryInterface*>( (QDesignerWidgetFactoryInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QDesignerWidgetFactoryInterface_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQDesignerWidgetFactoryInterface*>(self)->QDesignerWidgetFactoryInterface::customEvent(event);
}

bool QDesignerWidgetFactoryInterface_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetFactoryInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetFactoryInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetFactoryInterface*>( (QDesignerWidgetFactoryInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QDesignerWidgetFactoryInterface_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQDesignerWidgetFactoryInterface*>(self)->QDesignerWidgetFactoryInterface::connectNotify(*signal);
}

bool QDesignerWidgetFactoryInterface_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetFactoryInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetFactoryInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetFactoryInterface*>( (QDesignerWidgetFactoryInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QDesignerWidgetFactoryInterface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQDesignerWidgetFactoryInterface*>(self)->QDesignerWidgetFactoryInterface::disconnectNotify(*signal);
}

QObject* QDesignerWidgetFactoryInterface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDesignerWidgetFactoryInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetFactoryInterface*>( (QDesignerWidgetFactoryInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QDesignerWidgetFactoryInterface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDesignerWidgetFactoryInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetFactoryInterface*>( (QDesignerWidgetFactoryInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QDesignerWidgetFactoryInterface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQDesignerWidgetFactoryInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetFactoryInterface*>( (QDesignerWidgetFactoryInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QDesignerWidgetFactoryInterface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQDesignerWidgetFactoryInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetFactoryInterface*>( (QDesignerWidgetFactoryInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QDesignerWidgetFactoryInterface_delete(QDesignerWidgetFactoryInterface* self) {
	delete self;
}

