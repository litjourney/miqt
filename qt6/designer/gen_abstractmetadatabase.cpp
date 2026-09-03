#include <memory>
#include <utility>
#include <QChildEvent>
#include <QDesignerFormEditorInterface>
#include <QDesignerMetaDataBaseInterface>
#include <QDesignerMetaDataBaseItemInterface>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWidget>
#include <abstractmetadatabase.h>
#include "gen_abstractmetadatabase.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QDesignerMetaDataBaseItemInterface(intptr_t);
struct miqt_string miqt_exec_callback_QDesignerMetaDataBaseItemInterface_name(const QDesignerMetaDataBaseItemInterface*, intptr_t);
void miqt_exec_callback_QDesignerMetaDataBaseItemInterface_setName(QDesignerMetaDataBaseItemInterface*, intptr_t, struct miqt_string);
struct miqt_array /* of QWidget* */  miqt_exec_callback_QDesignerMetaDataBaseItemInterface_tabOrder(const QDesignerMetaDataBaseItemInterface*, intptr_t);
void miqt_exec_callback_QDesignerMetaDataBaseItemInterface_setTabOrder(QDesignerMetaDataBaseItemInterface*, intptr_t, struct miqt_array /* of QWidget* */ );
bool miqt_exec_callback_QDesignerMetaDataBaseItemInterface_enabled(const QDesignerMetaDataBaseItemInterface*, intptr_t);
void miqt_exec_callback_QDesignerMetaDataBaseItemInterface_setEnabled(QDesignerMetaDataBaseItemInterface*, intptr_t, bool);
void miqt_exec_callback_handle_release_QDesignerMetaDataBaseInterface(intptr_t);
void miqt_exec_callback_QDesignerMetaDataBaseInterface_changed(intptr_t);
QDesignerMetaDataBaseItemInterface* miqt_exec_callback_QDesignerMetaDataBaseInterface_item(const QDesignerMetaDataBaseInterface*, intptr_t, QObject*);
void miqt_exec_callback_QDesignerMetaDataBaseInterface_add(QDesignerMetaDataBaseInterface*, intptr_t, QObject*);
void miqt_exec_callback_QDesignerMetaDataBaseInterface_remove(QDesignerMetaDataBaseInterface*, intptr_t, QObject*);
struct miqt_array /* of QObject* */  miqt_exec_callback_QDesignerMetaDataBaseInterface_objects(const QDesignerMetaDataBaseInterface*, intptr_t);
QDesignerFormEditorInterface* miqt_exec_callback_QDesignerMetaDataBaseInterface_core(const QDesignerMetaDataBaseInterface*, intptr_t);
bool miqt_exec_callback_QDesignerMetaDataBaseInterface_event(QDesignerMetaDataBaseInterface*, intptr_t, QEvent*);
bool miqt_exec_callback_QDesignerMetaDataBaseInterface_eventFilter(QDesignerMetaDataBaseInterface*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QDesignerMetaDataBaseInterface_timerEvent(QDesignerMetaDataBaseInterface*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QDesignerMetaDataBaseInterface_childEvent(QDesignerMetaDataBaseInterface*, intptr_t, QChildEvent*);
void miqt_exec_callback_QDesignerMetaDataBaseInterface_customEvent(QDesignerMetaDataBaseInterface*, intptr_t, QEvent*);
void miqt_exec_callback_QDesignerMetaDataBaseInterface_connectNotify(QDesignerMetaDataBaseInterface*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDesignerMetaDataBaseInterface_disconnectNotify(QDesignerMetaDataBaseInterface*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQDesignerMetaDataBaseItemInterface final : public QDesignerMetaDataBaseItemInterface {
public:

	MiqtVirtualQDesignerMetaDataBaseItemInterface(): QDesignerMetaDataBaseItemInterface() {}

	virtual ~MiqtVirtualQDesignerMetaDataBaseItemInterface() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerMetaDataBaseItemInterface> handle__name;

	// Subclass to allow providing a Go implementation
	virtual QString name() const override {
		if (!handle__name) {
			return QString(); // Pure virtual, there is no base we can call
		}

		struct miqt_string callback_return_value = miqt_exec_callback_QDesignerMetaDataBaseItemInterface_name(this, handle__name.value());
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		free(callback_return_value.data);
		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerMetaDataBaseItemInterface> handle__setName;

	// Subclass to allow providing a Go implementation
	virtual void setName(const QString& name) override {
		if (!handle__setName) {
			return; // Pure virtual, there is no base we can call
		}

		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		miqt_exec_callback_QDesignerMetaDataBaseItemInterface_setName(this, handle__setName.value(), sigval1);

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerMetaDataBaseItemInterface> handle__tabOrder;

	// Subclass to allow providing a Go implementation
	virtual QList<QWidget *> tabOrder() const override {
		if (!handle__tabOrder) {
			return QList<QWidget *>(); // Pure virtual, there is no base we can call
		}

		struct miqt_array /* of QWidget* */  callback_return_value = miqt_exec_callback_QDesignerMetaDataBaseItemInterface_tabOrder(this, handle__tabOrder.value());
		QList<QWidget *> callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QWidget** callback_return_value_arr = static_cast<QWidget**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(callback_return_value_arr[i]);
		}
		free(callback_return_value.data);
		return callback_return_value_QList;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerMetaDataBaseItemInterface> handle__setTabOrder;

	// Subclass to allow providing a Go implementation
	virtual void setTabOrder(const QList<QWidget *>& tabOrder) override {
		if (!handle__setTabOrder) {
			return; // Pure virtual, there is no base we can call
		}

		const QList<QWidget *>& tabOrder_ret = tabOrder;
		// Convert QList<> from C++ memory to manually-managed C memory
		QWidget** tabOrder_arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * tabOrder_ret.length()));
		for (size_t i = 0, e = tabOrder_ret.length(); i < e; ++i) {
			tabOrder_arr[i] = tabOrder_ret[i];
		}
		struct miqt_array tabOrder_out;
		tabOrder_out.len = tabOrder_ret.length();
		tabOrder_out.data = static_cast<void*>(tabOrder_arr);
		struct miqt_array /* of QWidget* */  sigval1 = tabOrder_out;
		miqt_exec_callback_QDesignerMetaDataBaseItemInterface_setTabOrder(this, handle__setTabOrder.value(), sigval1);

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerMetaDataBaseItemInterface> handle__enabled;

	// Subclass to allow providing a Go implementation
	virtual bool enabled() const override {
		if (!handle__enabled) {
			return false; // Pure virtual, there is no base we can call
		}

		bool callback_return_value = miqt_exec_callback_QDesignerMetaDataBaseItemInterface_enabled(this, handle__enabled.value());
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerMetaDataBaseItemInterface> handle__setEnabled;

	// Subclass to allow providing a Go implementation
	virtual void setEnabled(bool b) override {
		if (!handle__setEnabled) {
			return; // Pure virtual, there is no base we can call
		}

		bool sigval1 = b;
		miqt_exec_callback_QDesignerMetaDataBaseItemInterface_setEnabled(this, handle__setEnabled.value(), sigval1);

	}

};

QDesignerMetaDataBaseItemInterface* QDesignerMetaDataBaseItemInterface_new() {
	return new (std::nothrow) MiqtVirtualQDesignerMetaDataBaseItemInterface();
}

struct miqt_string QDesignerMetaDataBaseItemInterface_name(const QDesignerMetaDataBaseItemInterface* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDesignerMetaDataBaseItemInterface_setName(QDesignerMetaDataBaseItemInterface* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setName(name_QString);
}

struct miqt_array /* of QWidget* */  QDesignerMetaDataBaseItemInterface_tabOrder(const QDesignerMetaDataBaseItemInterface* self) {
	QList<QWidget *> _ret = self->tabOrder();
	// Convert QList<> from C++ memory to manually-managed C memory
	QWidget** _arr = static_cast<QWidget**>(malloc(sizeof(QWidget*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QDesignerMetaDataBaseItemInterface_setTabOrder(QDesignerMetaDataBaseItemInterface* self, struct miqt_array /* of QWidget* */  tabOrder) {
	QList<QWidget *> tabOrder_QList;
	tabOrder_QList.reserve(tabOrder.len);
	QWidget** tabOrder_arr = static_cast<QWidget**>(tabOrder.data);
	for(size_t i = 0; i < tabOrder.len; ++i) {
		tabOrder_QList.push_back(tabOrder_arr[i]);
	}
	self->setTabOrder(tabOrder_QList);
}

bool QDesignerMetaDataBaseItemInterface_enabled(const QDesignerMetaDataBaseItemInterface* self) {
	return self->enabled();
}

void QDesignerMetaDataBaseItemInterface_setEnabled(QDesignerMetaDataBaseItemInterface* self, bool b) {
	self->setEnabled(b);
}

bool QDesignerMetaDataBaseItemInterface_override_virtual_name(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerMetaDataBaseItemInterface> slot_handle(slot);
	MiqtVirtualQDesignerMetaDataBaseItemInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerMetaDataBaseItemInterface*>( (QDesignerMetaDataBaseItemInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__name = std::move(slot_handle);
	return true;
}

bool QDesignerMetaDataBaseItemInterface_override_virtual_setName(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerMetaDataBaseItemInterface> slot_handle(slot);
	MiqtVirtualQDesignerMetaDataBaseItemInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerMetaDataBaseItemInterface*>( (QDesignerMetaDataBaseItemInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setName = std::move(slot_handle);
	return true;
}

bool QDesignerMetaDataBaseItemInterface_override_virtual_tabOrder(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerMetaDataBaseItemInterface> slot_handle(slot);
	MiqtVirtualQDesignerMetaDataBaseItemInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerMetaDataBaseItemInterface*>( (QDesignerMetaDataBaseItemInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabOrder = std::move(slot_handle);
	return true;
}

bool QDesignerMetaDataBaseItemInterface_override_virtual_setTabOrder(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerMetaDataBaseItemInterface> slot_handle(slot);
	MiqtVirtualQDesignerMetaDataBaseItemInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerMetaDataBaseItemInterface*>( (QDesignerMetaDataBaseItemInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setTabOrder = std::move(slot_handle);
	return true;
}

bool QDesignerMetaDataBaseItemInterface_override_virtual_enabled(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerMetaDataBaseItemInterface> slot_handle(slot);
	MiqtVirtualQDesignerMetaDataBaseItemInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerMetaDataBaseItemInterface*>( (QDesignerMetaDataBaseItemInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enabled = std::move(slot_handle);
	return true;
}

bool QDesignerMetaDataBaseItemInterface_override_virtual_setEnabled(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerMetaDataBaseItemInterface> slot_handle(slot);
	MiqtVirtualQDesignerMetaDataBaseItemInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerMetaDataBaseItemInterface*>( (QDesignerMetaDataBaseItemInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setEnabled = std::move(slot_handle);
	return true;
}

void QDesignerMetaDataBaseItemInterface_delete(QDesignerMetaDataBaseItemInterface* self) {
	delete self;
}

class MiqtVirtualQDesignerMetaDataBaseInterface final : public QDesignerMetaDataBaseInterface {
public:

	MiqtVirtualQDesignerMetaDataBaseInterface(): QDesignerMetaDataBaseInterface() {}
	MiqtVirtualQDesignerMetaDataBaseInterface(QObject* parent): QDesignerMetaDataBaseInterface(parent) {}

	virtual ~MiqtVirtualQDesignerMetaDataBaseInterface() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerMetaDataBaseInterface> handle__item;

	// Subclass to allow providing a Go implementation
	virtual QDesignerMetaDataBaseItemInterface* item(QObject* object) const override {
		if (!handle__item) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		QObject* sigval1 = object;
		QDesignerMetaDataBaseItemInterface* callback_return_value = miqt_exec_callback_QDesignerMetaDataBaseInterface_item(this, handle__item.value(), sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerMetaDataBaseInterface> handle__add;

	// Subclass to allow providing a Go implementation
	virtual void add(QObject* object) override {
		if (!handle__add) {
			return; // Pure virtual, there is no base we can call
		}

		QObject* sigval1 = object;
		miqt_exec_callback_QDesignerMetaDataBaseInterface_add(this, handle__add.value(), sigval1);

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerMetaDataBaseInterface> handle__remove;

	// Subclass to allow providing a Go implementation
	virtual void remove(QObject* object) override {
		if (!handle__remove) {
			return; // Pure virtual, there is no base we can call
		}

		QObject* sigval1 = object;
		miqt_exec_callback_QDesignerMetaDataBaseInterface_remove(this, handle__remove.value(), sigval1);

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerMetaDataBaseInterface> handle__objects;

	// Subclass to allow providing a Go implementation
	virtual QList<QObject *> objects() const override {
		if (!handle__objects) {
			return QList<QObject *>(); // Pure virtual, there is no base we can call
		}

		struct miqt_array /* of QObject* */  callback_return_value = miqt_exec_callback_QDesignerMetaDataBaseInterface_objects(this, handle__objects.value());
		QList<QObject *> callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QObject** callback_return_value_arr = static_cast<QObject**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(callback_return_value_arr[i]);
		}
		free(callback_return_value.data);
		return callback_return_value_QList;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerMetaDataBaseInterface> handle__core;

	// Subclass to allow providing a Go implementation
	virtual QDesignerFormEditorInterface* core() const override {
		if (!handle__core) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		QDesignerFormEditorInterface* callback_return_value = miqt_exec_callback_QDesignerMetaDataBaseInterface_core(this, handle__core.value());
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerMetaDataBaseInterface> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QDesignerMetaDataBaseInterface::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QDesignerMetaDataBaseInterface_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QDesignerMetaDataBaseInterface_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerMetaDataBaseInterface> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QDesignerMetaDataBaseInterface::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QDesignerMetaDataBaseInterface_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QDesignerMetaDataBaseInterface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerMetaDataBaseInterface> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QDesignerMetaDataBaseInterface::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QDesignerMetaDataBaseInterface_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QDesignerMetaDataBaseInterface_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerMetaDataBaseInterface> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QDesignerMetaDataBaseInterface::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QDesignerMetaDataBaseInterface_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QDesignerMetaDataBaseInterface_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerMetaDataBaseInterface> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QDesignerMetaDataBaseInterface::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QDesignerMetaDataBaseInterface_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QDesignerMetaDataBaseInterface_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerMetaDataBaseInterface> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QDesignerMetaDataBaseInterface::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QDesignerMetaDataBaseInterface_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QDesignerMetaDataBaseInterface_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerMetaDataBaseInterface> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QDesignerMetaDataBaseInterface::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QDesignerMetaDataBaseInterface_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QDesignerMetaDataBaseInterface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QDesignerMetaDataBaseInterface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QDesignerMetaDataBaseInterface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QDesignerMetaDataBaseInterface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QDesignerMetaDataBaseInterface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QDesignerMetaDataBaseInterface* QDesignerMetaDataBaseInterface_new() {
	return new (std::nothrow) MiqtVirtualQDesignerMetaDataBaseInterface();
}

QDesignerMetaDataBaseInterface* QDesignerMetaDataBaseInterface_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQDesignerMetaDataBaseInterface(parent);
}

void QDesignerMetaDataBaseInterface_virtbase(QDesignerMetaDataBaseInterface* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QDesignerMetaDataBaseInterface_metaObject(const QDesignerMetaDataBaseInterface* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDesignerMetaDataBaseInterface_metacast(QDesignerMetaDataBaseInterface* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDesignerMetaDataBaseInterface_tr(const char* s) {
	QString _ret = QDesignerMetaDataBaseInterface::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDesignerMetaDataBaseItemInterface* QDesignerMetaDataBaseInterface_item(const QDesignerMetaDataBaseInterface* self, QObject* object) {
	return self->item(object);
}

void QDesignerMetaDataBaseInterface_add(QDesignerMetaDataBaseInterface* self, QObject* object) {
	self->add(object);
}

void QDesignerMetaDataBaseInterface_remove(QDesignerMetaDataBaseInterface* self, QObject* object) {
	self->remove(object);
}

struct miqt_array /* of QObject* */  QDesignerMetaDataBaseInterface_objects(const QDesignerMetaDataBaseInterface* self) {
	QList<QObject *> _ret = self->objects();
	// Convert QList<> from C++ memory to manually-managed C memory
	QObject** _arr = static_cast<QObject**>(malloc(sizeof(QObject*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QDesignerFormEditorInterface* QDesignerMetaDataBaseInterface_core(const QDesignerMetaDataBaseInterface* self) {
	return self->core();
}

void QDesignerMetaDataBaseInterface_changed(QDesignerMetaDataBaseInterface* self) {
	self->changed();
}

void* QDesignerMetaDataBaseInterface_connect_changed(QDesignerMetaDataBaseInterface* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerMetaDataBaseInterface>>(slot);
	return new QMetaObject::Connection(QDesignerMetaDataBaseInterface::connect(self, static_cast<void (QDesignerMetaDataBaseInterface::*)()>(&QDesignerMetaDataBaseInterface::changed), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QDesignerMetaDataBaseInterface_changed(slot);
	}));
}

struct miqt_string QDesignerMetaDataBaseInterface_tr2(const char* s, const char* c) {
	QString _ret = QDesignerMetaDataBaseInterface::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerMetaDataBaseInterface_tr3(const char* s, const char* c, int n) {
	QString _ret = QDesignerMetaDataBaseInterface::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDesignerMetaDataBaseInterface_override_virtual_item(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerMetaDataBaseInterface> slot_handle(slot);
	MiqtVirtualQDesignerMetaDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>( (QDesignerMetaDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__item = std::move(slot_handle);
	return true;
}

bool QDesignerMetaDataBaseInterface_override_virtual_add(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerMetaDataBaseInterface> slot_handle(slot);
	MiqtVirtualQDesignerMetaDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>( (QDesignerMetaDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__add = std::move(slot_handle);
	return true;
}

bool QDesignerMetaDataBaseInterface_override_virtual_remove(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerMetaDataBaseInterface> slot_handle(slot);
	MiqtVirtualQDesignerMetaDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>( (QDesignerMetaDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__remove = std::move(slot_handle);
	return true;
}

bool QDesignerMetaDataBaseInterface_override_virtual_objects(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerMetaDataBaseInterface> slot_handle(slot);
	MiqtVirtualQDesignerMetaDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>( (QDesignerMetaDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__objects = std::move(slot_handle);
	return true;
}

bool QDesignerMetaDataBaseInterface_override_virtual_core(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerMetaDataBaseInterface> slot_handle(slot);
	MiqtVirtualQDesignerMetaDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>( (QDesignerMetaDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__core = std::move(slot_handle);
	return true;
}

bool QDesignerMetaDataBaseInterface_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerMetaDataBaseInterface> slot_handle(slot);
	MiqtVirtualQDesignerMetaDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>( (QDesignerMetaDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QDesignerMetaDataBaseInterface_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>(self)->QDesignerMetaDataBaseInterface::event(event);
}

bool QDesignerMetaDataBaseInterface_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerMetaDataBaseInterface> slot_handle(slot);
	MiqtVirtualQDesignerMetaDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>( (QDesignerMetaDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QDesignerMetaDataBaseInterface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>(self)->QDesignerMetaDataBaseInterface::eventFilter(watched, event);
}

bool QDesignerMetaDataBaseInterface_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerMetaDataBaseInterface> slot_handle(slot);
	MiqtVirtualQDesignerMetaDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>( (QDesignerMetaDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QDesignerMetaDataBaseInterface_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>(self)->QDesignerMetaDataBaseInterface::timerEvent(event);
}

bool QDesignerMetaDataBaseInterface_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerMetaDataBaseInterface> slot_handle(slot);
	MiqtVirtualQDesignerMetaDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>( (QDesignerMetaDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QDesignerMetaDataBaseInterface_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>(self)->QDesignerMetaDataBaseInterface::childEvent(event);
}

bool QDesignerMetaDataBaseInterface_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerMetaDataBaseInterface> slot_handle(slot);
	MiqtVirtualQDesignerMetaDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>( (QDesignerMetaDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QDesignerMetaDataBaseInterface_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>(self)->QDesignerMetaDataBaseInterface::customEvent(event);
}

bool QDesignerMetaDataBaseInterface_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerMetaDataBaseInterface> slot_handle(slot);
	MiqtVirtualQDesignerMetaDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>( (QDesignerMetaDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QDesignerMetaDataBaseInterface_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>(self)->QDesignerMetaDataBaseInterface::connectNotify(*signal);
}

bool QDesignerMetaDataBaseInterface_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerMetaDataBaseInterface> slot_handle(slot);
	MiqtVirtualQDesignerMetaDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>( (QDesignerMetaDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QDesignerMetaDataBaseInterface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>(self)->QDesignerMetaDataBaseInterface::disconnectNotify(*signal);
}

QObject* QDesignerMetaDataBaseInterface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDesignerMetaDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>( (QDesignerMetaDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QDesignerMetaDataBaseInterface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDesignerMetaDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>( (QDesignerMetaDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QDesignerMetaDataBaseInterface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQDesignerMetaDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>( (QDesignerMetaDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QDesignerMetaDataBaseInterface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQDesignerMetaDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerMetaDataBaseInterface*>( (QDesignerMetaDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QDesignerMetaDataBaseInterface_delete(QDesignerMetaDataBaseInterface* self) {
	delete self;
}

