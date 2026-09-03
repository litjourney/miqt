#include <memory>
#include <utility>
#include <QAbstractFormBuilder>
#include <QAction>
#include <QActionGroup>
#include <QDir>
#include <QIODevice>
#include <QIcon>
#include <QLayout>
#include <QObject>
#include <QPair>
#include <QPixmap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <QWidget>
#include <abstractformbuilder.h>
#include "gen_abstractformbuilder.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QAbstractFormBuilder(intptr_t);
QWidget* miqt_exec_callback_QAbstractFormBuilder_load(QAbstractFormBuilder*, intptr_t, QIODevice*, QWidget*);
void miqt_exec_callback_QAbstractFormBuilder_save(QAbstractFormBuilder*, intptr_t, QIODevice*, QWidget*);
void miqt_exec_callback_QAbstractFormBuilder_addMenuAction(QAbstractFormBuilder*, intptr_t, QAction*);
QWidget* miqt_exec_callback_QAbstractFormBuilder_createWidget(QAbstractFormBuilder*, intptr_t, struct miqt_string, QWidget*, struct miqt_string);
QLayout* miqt_exec_callback_QAbstractFormBuilder_createLayout(QAbstractFormBuilder*, intptr_t, struct miqt_string, QObject*, struct miqt_string);
QAction* miqt_exec_callback_QAbstractFormBuilder_createAction(QAbstractFormBuilder*, intptr_t, QObject*, struct miqt_string);
QActionGroup* miqt_exec_callback_QAbstractFormBuilder_createActionGroup(QAbstractFormBuilder*, intptr_t, QObject*, struct miqt_string);
bool miqt_exec_callback_QAbstractFormBuilder_checkProperty(const QAbstractFormBuilder*, intptr_t, QObject*, struct miqt_string);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAbstractFormBuilder final : public QAbstractFormBuilder {
public:

	MiqtVirtualQAbstractFormBuilder(): QAbstractFormBuilder() {}

	virtual ~MiqtVirtualQAbstractFormBuilder() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractFormBuilder> handle__load;

	// Subclass to allow providing a Go implementation
	virtual QWidget* load(QIODevice* dev, QWidget* parentWidget) override {
		if (!handle__load) {
			return QAbstractFormBuilder::load(dev, parentWidget);
		}

		QIODevice* sigval1 = dev;
		QWidget* sigval2 = parentWidget;
		QWidget* callback_return_value = miqt_exec_callback_QAbstractFormBuilder_load(this, handle__load.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend QWidget* QAbstractFormBuilder_virtualbase_load(void* self, QIODevice* dev, QWidget* parentWidget);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractFormBuilder> handle__save;

	// Subclass to allow providing a Go implementation
	virtual void save(QIODevice* dev, QWidget* widget) override {
		if (!handle__save) {
			QAbstractFormBuilder::save(dev, widget);
			return;
		}

		QIODevice* sigval1 = dev;
		QWidget* sigval2 = widget;
		miqt_exec_callback_QAbstractFormBuilder_save(this, handle__save.value(), sigval1, sigval2);

	}

	friend void QAbstractFormBuilder_virtualbase_save(void* self, QIODevice* dev, QWidget* widget);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractFormBuilder> handle__addMenuAction;

	// Subclass to allow providing a Go implementation
	virtual void addMenuAction(QAction* action) override {
		if (!handle__addMenuAction) {
			QAbstractFormBuilder::addMenuAction(action);
			return;
		}

		QAction* sigval1 = action;
		miqt_exec_callback_QAbstractFormBuilder_addMenuAction(this, handle__addMenuAction.value(), sigval1);

	}

	friend void QAbstractFormBuilder_virtualbase_addMenuAction(void* self, QAction* action);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractFormBuilder> handle__createWidget;

	// Subclass to allow providing a Go implementation
	virtual QWidget* createWidget(const QString& widgetName, QWidget* parentWidget, const QString& name) override {
		if (!handle__createWidget) {
			return QAbstractFormBuilder::createWidget(widgetName, parentWidget, name);
		}

		const QString widgetName_ret = widgetName;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray widgetName_b = widgetName_ret.toUtf8();
		struct miqt_string widgetName_ms;
		widgetName_ms.len = widgetName_b.length();
		widgetName_ms.data = static_cast<char*>(malloc(widgetName_ms.len));
		memcpy(widgetName_ms.data, widgetName_b.data(), widgetName_ms.len);
		struct miqt_string sigval1 = widgetName_ms;
		QWidget* sigval2 = parentWidget;
		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval3 = name_ms;
		QWidget* callback_return_value = miqt_exec_callback_QAbstractFormBuilder_createWidget(this, handle__createWidget.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend QWidget* QAbstractFormBuilder_virtualbase_createWidget(void* self, struct miqt_string widgetName, QWidget* parentWidget, struct miqt_string name);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractFormBuilder> handle__createLayout;

	// Subclass to allow providing a Go implementation
	virtual QLayout* createLayout(const QString& layoutName, QObject* parent, const QString& name) override {
		if (!handle__createLayout) {
			return QAbstractFormBuilder::createLayout(layoutName, parent, name);
		}

		const QString layoutName_ret = layoutName;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray layoutName_b = layoutName_ret.toUtf8();
		struct miqt_string layoutName_ms;
		layoutName_ms.len = layoutName_b.length();
		layoutName_ms.data = static_cast<char*>(malloc(layoutName_ms.len));
		memcpy(layoutName_ms.data, layoutName_b.data(), layoutName_ms.len);
		struct miqt_string sigval1 = layoutName_ms;
		QObject* sigval2 = parent;
		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval3 = name_ms;
		QLayout* callback_return_value = miqt_exec_callback_QAbstractFormBuilder_createLayout(this, handle__createLayout.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend QLayout* QAbstractFormBuilder_virtualbase_createLayout(void* self, struct miqt_string layoutName, QObject* parent, struct miqt_string name);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractFormBuilder> handle__createAction;

	// Subclass to allow providing a Go implementation
	virtual QAction* createAction(QObject* parent, const QString& name) override {
		if (!handle__createAction) {
			return QAbstractFormBuilder::createAction(parent, name);
		}

		QObject* sigval1 = parent;
		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval2 = name_ms;
		QAction* callback_return_value = miqt_exec_callback_QAbstractFormBuilder_createAction(this, handle__createAction.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend QAction* QAbstractFormBuilder_virtualbase_createAction(void* self, QObject* parent, struct miqt_string name);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractFormBuilder> handle__createActionGroup;

	// Subclass to allow providing a Go implementation
	virtual QActionGroup* createActionGroup(QObject* parent, const QString& name) override {
		if (!handle__createActionGroup) {
			return QAbstractFormBuilder::createActionGroup(parent, name);
		}

		QObject* sigval1 = parent;
		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval2 = name_ms;
		QActionGroup* callback_return_value = miqt_exec_callback_QAbstractFormBuilder_createActionGroup(this, handle__createActionGroup.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend QActionGroup* QAbstractFormBuilder_virtualbase_createActionGroup(void* self, QObject* parent, struct miqt_string name);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractFormBuilder> handle__checkProperty;

	// Subclass to allow providing a Go implementation
	virtual bool checkProperty(QObject* obj, const QString& prop) const override {
		if (!handle__checkProperty) {
			return QAbstractFormBuilder::checkProperty(obj, prop);
		}

		QObject* sigval1 = obj;
		const QString prop_ret = prop;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray prop_b = prop_ret.toUtf8();
		struct miqt_string prop_ms;
		prop_ms.len = prop_b.length();
		prop_ms.data = static_cast<char*>(malloc(prop_ms.len));
		memcpy(prop_ms.data, prop_b.data(), prop_ms.len);
		struct miqt_string sigval2 = prop_ms;
		bool callback_return_value = miqt_exec_callback_QAbstractFormBuilder_checkProperty(this, handle__checkProperty.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QAbstractFormBuilder_virtualbase_checkProperty(const void* self, QObject* obj, struct miqt_string prop);

	// Wrappers to allow calling protected methods:
	friend bool QAbstractFormBuilder_protectedbase_applyPropertyInternally(bool* _dynamic_cast_ok, void* self, QObject* o, struct miqt_string propertyName, QVariant* value);
	friend void QAbstractFormBuilder_protectedbase_reset(bool* _dynamic_cast_ok, void* self);
	friend struct miqt_map /* tuple of struct miqt_string and struct miqt_string */  QAbstractFormBuilder_protectedbase_iconPaths(bool* _dynamic_cast_ok, const void* self, QIcon* param1);
	friend struct miqt_map /* tuple of struct miqt_string and struct miqt_string */  QAbstractFormBuilder_protectedbase_pixmapPaths(bool* _dynamic_cast_ok, const void* self, QPixmap* param1);
};

QAbstractFormBuilder* QAbstractFormBuilder_new() {
	return new (std::nothrow) MiqtVirtualQAbstractFormBuilder();
}

QDir* QAbstractFormBuilder_workingDirectory(const QAbstractFormBuilder* self) {
	return new QDir(self->workingDirectory());
}

void QAbstractFormBuilder_setWorkingDirectory(QAbstractFormBuilder* self, QDir* directory) {
	self->setWorkingDirectory(*directory);
}

QWidget* QAbstractFormBuilder_load(QAbstractFormBuilder* self, QIODevice* dev, QWidget* parentWidget) {
	return self->load(dev, parentWidget);
}

void QAbstractFormBuilder_save(QAbstractFormBuilder* self, QIODevice* dev, QWidget* widget) {
	self->save(dev, widget);
}

struct miqt_string QAbstractFormBuilder_errorString(const QAbstractFormBuilder* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractFormBuilder_override_virtual_load(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractFormBuilder> slot_handle(slot);
	MiqtVirtualQAbstractFormBuilder* self_cast = dynamic_cast<MiqtVirtualQAbstractFormBuilder*>( (QAbstractFormBuilder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__load = std::move(slot_handle);
	return true;
}

QWidget* QAbstractFormBuilder_virtualbase_load(void* self, QIODevice* dev, QWidget* parentWidget) {
	return static_cast<MiqtVirtualQAbstractFormBuilder*>(self)->QAbstractFormBuilder::load(dev, parentWidget);
}

bool QAbstractFormBuilder_override_virtual_save(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractFormBuilder> slot_handle(slot);
	MiqtVirtualQAbstractFormBuilder* self_cast = dynamic_cast<MiqtVirtualQAbstractFormBuilder*>( (QAbstractFormBuilder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__save = std::move(slot_handle);
	return true;
}

void QAbstractFormBuilder_virtualbase_save(void* self, QIODevice* dev, QWidget* widget) {
	static_cast<MiqtVirtualQAbstractFormBuilder*>(self)->QAbstractFormBuilder::save(dev, widget);
}

bool QAbstractFormBuilder_override_virtual_addMenuAction(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractFormBuilder> slot_handle(slot);
	MiqtVirtualQAbstractFormBuilder* self_cast = dynamic_cast<MiqtVirtualQAbstractFormBuilder*>( (QAbstractFormBuilder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__addMenuAction = std::move(slot_handle);
	return true;
}

void QAbstractFormBuilder_virtualbase_addMenuAction(void* self, QAction* action) {
	static_cast<MiqtVirtualQAbstractFormBuilder*>(self)->QAbstractFormBuilder::addMenuAction(action);
}

bool QAbstractFormBuilder_override_virtual_createWidget(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractFormBuilder> slot_handle(slot);
	MiqtVirtualQAbstractFormBuilder* self_cast = dynamic_cast<MiqtVirtualQAbstractFormBuilder*>( (QAbstractFormBuilder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__createWidget = std::move(slot_handle);
	return true;
}

QWidget* QAbstractFormBuilder_virtualbase_createWidget(void* self, struct miqt_string widgetName, QWidget* parentWidget, struct miqt_string name) {
	QString widgetName_QString = QString::fromUtf8(widgetName.data, widgetName.len);
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return static_cast<MiqtVirtualQAbstractFormBuilder*>(self)->QAbstractFormBuilder::createWidget(widgetName_QString, parentWidget, name_QString);
}

bool QAbstractFormBuilder_override_virtual_createLayout(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractFormBuilder> slot_handle(slot);
	MiqtVirtualQAbstractFormBuilder* self_cast = dynamic_cast<MiqtVirtualQAbstractFormBuilder*>( (QAbstractFormBuilder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__createLayout = std::move(slot_handle);
	return true;
}

QLayout* QAbstractFormBuilder_virtualbase_createLayout(void* self, struct miqt_string layoutName, QObject* parent, struct miqt_string name) {
	QString layoutName_QString = QString::fromUtf8(layoutName.data, layoutName.len);
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return static_cast<MiqtVirtualQAbstractFormBuilder*>(self)->QAbstractFormBuilder::createLayout(layoutName_QString, parent, name_QString);
}

bool QAbstractFormBuilder_override_virtual_createAction(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractFormBuilder> slot_handle(slot);
	MiqtVirtualQAbstractFormBuilder* self_cast = dynamic_cast<MiqtVirtualQAbstractFormBuilder*>( (QAbstractFormBuilder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__createAction = std::move(slot_handle);
	return true;
}

QAction* QAbstractFormBuilder_virtualbase_createAction(void* self, QObject* parent, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return static_cast<MiqtVirtualQAbstractFormBuilder*>(self)->QAbstractFormBuilder::createAction(parent, name_QString);
}

bool QAbstractFormBuilder_override_virtual_createActionGroup(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractFormBuilder> slot_handle(slot);
	MiqtVirtualQAbstractFormBuilder* self_cast = dynamic_cast<MiqtVirtualQAbstractFormBuilder*>( (QAbstractFormBuilder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__createActionGroup = std::move(slot_handle);
	return true;
}

QActionGroup* QAbstractFormBuilder_virtualbase_createActionGroup(void* self, QObject* parent, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return static_cast<MiqtVirtualQAbstractFormBuilder*>(self)->QAbstractFormBuilder::createActionGroup(parent, name_QString);
}

bool QAbstractFormBuilder_override_virtual_checkProperty(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractFormBuilder> slot_handle(slot);
	MiqtVirtualQAbstractFormBuilder* self_cast = dynamic_cast<MiqtVirtualQAbstractFormBuilder*>( (QAbstractFormBuilder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__checkProperty = std::move(slot_handle);
	return true;
}

bool QAbstractFormBuilder_virtualbase_checkProperty(const void* self, QObject* obj, struct miqt_string prop) {
	QString prop_QString = QString::fromUtf8(prop.data, prop.len);
	return static_cast<const MiqtVirtualQAbstractFormBuilder*>(self)->QAbstractFormBuilder::checkProperty(obj, prop_QString);
}

bool QAbstractFormBuilder_protectedbase_applyPropertyInternally(bool* _dynamic_cast_ok, void* self, QObject* o, struct miqt_string propertyName, QVariant* value) {
	MiqtVirtualQAbstractFormBuilder* self_cast = dynamic_cast<MiqtVirtualQAbstractFormBuilder*>( (QAbstractFormBuilder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
		QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);
	return self_cast->applyPropertyInternally(o, propertyName_QString, *value);
}

void QAbstractFormBuilder_protectedbase_reset(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractFormBuilder* self_cast = dynamic_cast<MiqtVirtualQAbstractFormBuilder*>( (QAbstractFormBuilder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->reset();
}

struct miqt_map /* tuple of struct miqt_string and struct miqt_string */  QAbstractFormBuilder_protectedbase_iconPaths(bool* _dynamic_cast_ok, const void* self, QIcon* param1) {
	MiqtVirtualQAbstractFormBuilder* self_cast = dynamic_cast<MiqtVirtualQAbstractFormBuilder*>( (QAbstractFormBuilder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (struct miqt_map){};
	}

	*_dynamic_cast_ok = true;
	MiqtVirtualQAbstractFormBuilder::IconPaths _ret = self_cast->iconPaths(*param1);
	// Convert QPair<> from C++ memory to manually-managed C memory
	struct miqt_string* _first_arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string)));
	struct miqt_string* _second_arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string)));
	QString _first_ret = _ret.first;
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _first_b = _first_ret.toUtf8();
	struct miqt_string _first_ms;
	_first_ms.len = _first_b.length();
	_first_ms.data = static_cast<char*>(malloc(_first_ms.len));
	memcpy(_first_ms.data, _first_b.data(), _first_ms.len);
	_first_arr[0] = _first_ms;
	QString _second_ret = _ret.second;
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _second_b = _second_ret.toUtf8();
	struct miqt_string _second_ms;
	_second_ms.len = _second_b.length();
	_second_ms.data = static_cast<char*>(malloc(_second_ms.len));
	memcpy(_second_ms.data, _second_b.data(), _second_ms.len);
	_second_arr[0] = _second_ms;
	struct miqt_map _out;
	_out.len = 1;
	_out.keys = static_cast<void*>(_first_arr);
	_out.values = static_cast<void*>(_second_arr);
	return _out;
}

struct miqt_map /* tuple of struct miqt_string and struct miqt_string */  QAbstractFormBuilder_protectedbase_pixmapPaths(bool* _dynamic_cast_ok, const void* self, QPixmap* param1) {
	MiqtVirtualQAbstractFormBuilder* self_cast = dynamic_cast<MiqtVirtualQAbstractFormBuilder*>( (QAbstractFormBuilder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (struct miqt_map){};
	}

	*_dynamic_cast_ok = true;
	MiqtVirtualQAbstractFormBuilder::IconPaths _ret = self_cast->pixmapPaths(*param1);
	// Convert QPair<> from C++ memory to manually-managed C memory
	struct miqt_string* _first_arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string)));
	struct miqt_string* _second_arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string)));
	QString _first_ret = _ret.first;
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _first_b = _first_ret.toUtf8();
	struct miqt_string _first_ms;
	_first_ms.len = _first_b.length();
	_first_ms.data = static_cast<char*>(malloc(_first_ms.len));
	memcpy(_first_ms.data, _first_b.data(), _first_ms.len);
	_first_arr[0] = _first_ms;
	QString _second_ret = _ret.second;
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _second_b = _second_ret.toUtf8();
	struct miqt_string _second_ms;
	_second_ms.len = _second_b.length();
	_second_ms.data = static_cast<char*>(malloc(_second_ms.len));
	memcpy(_second_ms.data, _second_b.data(), _second_ms.len);
	_second_arr[0] = _second_ms;
	struct miqt_map _out;
	_out.len = 1;
	_out.keys = static_cast<void*>(_first_arr);
	_out.values = static_cast<void*>(_second_arr);
	return _out;
}

void QAbstractFormBuilder_delete(QAbstractFormBuilder* self) {
	delete self;
}

