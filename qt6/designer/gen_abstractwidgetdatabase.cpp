#include <memory>
#include <utility>
#include <QChildEvent>
#include <QDesignerFormEditorInterface>
#include <QDesignerWidgetDataBaseInterface>
#include <QDesignerWidgetDataBaseItemInterface>
#include <QEvent>
#include <QIcon>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <abstractwidgetdatabase.h>
#include "gen_abstractwidgetdatabase.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface(intptr_t);
struct miqt_string miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_name(const QDesignerWidgetDataBaseItemInterface*, intptr_t);
void miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setName(QDesignerWidgetDataBaseItemInterface*, intptr_t, struct miqt_string);
struct miqt_string miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_group(const QDesignerWidgetDataBaseItemInterface*, intptr_t);
void miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setGroup(QDesignerWidgetDataBaseItemInterface*, intptr_t, struct miqt_string);
struct miqt_string miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_toolTip(const QDesignerWidgetDataBaseItemInterface*, intptr_t);
void miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setToolTip(QDesignerWidgetDataBaseItemInterface*, intptr_t, struct miqt_string);
struct miqt_string miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_whatsThis(const QDesignerWidgetDataBaseItemInterface*, intptr_t);
void miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setWhatsThis(QDesignerWidgetDataBaseItemInterface*, intptr_t, struct miqt_string);
struct miqt_string miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_includeFile(const QDesignerWidgetDataBaseItemInterface*, intptr_t);
void miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setIncludeFile(QDesignerWidgetDataBaseItemInterface*, intptr_t, struct miqt_string);
QIcon* miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_icon(const QDesignerWidgetDataBaseItemInterface*, intptr_t);
void miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setIcon(QDesignerWidgetDataBaseItemInterface*, intptr_t, QIcon*);
bool miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_isCompat(const QDesignerWidgetDataBaseItemInterface*, intptr_t);
void miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setCompat(QDesignerWidgetDataBaseItemInterface*, intptr_t, bool);
bool miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_isContainer(const QDesignerWidgetDataBaseItemInterface*, intptr_t);
void miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setContainer(QDesignerWidgetDataBaseItemInterface*, intptr_t, bool);
bool miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_isCustom(const QDesignerWidgetDataBaseItemInterface*, intptr_t);
void miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setCustom(QDesignerWidgetDataBaseItemInterface*, intptr_t, bool);
struct miqt_string miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_pluginPath(const QDesignerWidgetDataBaseItemInterface*, intptr_t);
void miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setPluginPath(QDesignerWidgetDataBaseItemInterface*, intptr_t, struct miqt_string);
bool miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_isPromoted(const QDesignerWidgetDataBaseItemInterface*, intptr_t);
void miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setPromoted(QDesignerWidgetDataBaseItemInterface*, intptr_t, bool);
struct miqt_string miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_extends(const QDesignerWidgetDataBaseItemInterface*, intptr_t);
void miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setExtends(QDesignerWidgetDataBaseItemInterface*, intptr_t, struct miqt_string);
void miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setDefaultPropertyValues(QDesignerWidgetDataBaseItemInterface*, intptr_t, struct miqt_array /* of QVariant* */ );
struct miqt_array /* of QVariant* */  miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_defaultPropertyValues(const QDesignerWidgetDataBaseItemInterface*, intptr_t);
void miqt_exec_callback_handle_release_QDesignerWidgetDataBaseInterface(intptr_t);
void miqt_exec_callback_QDesignerWidgetDataBaseInterface_changed(intptr_t);
int miqt_exec_callback_QDesignerWidgetDataBaseInterface_count(const QDesignerWidgetDataBaseInterface*, intptr_t);
QDesignerWidgetDataBaseItemInterface* miqt_exec_callback_QDesignerWidgetDataBaseInterface_item(const QDesignerWidgetDataBaseInterface*, intptr_t, int);
int miqt_exec_callback_QDesignerWidgetDataBaseInterface_indexOf(const QDesignerWidgetDataBaseInterface*, intptr_t, QDesignerWidgetDataBaseItemInterface*);
void miqt_exec_callback_QDesignerWidgetDataBaseInterface_insert(QDesignerWidgetDataBaseInterface*, intptr_t, int, QDesignerWidgetDataBaseItemInterface*);
void miqt_exec_callback_QDesignerWidgetDataBaseInterface_append(QDesignerWidgetDataBaseInterface*, intptr_t, QDesignerWidgetDataBaseItemInterface*);
int miqt_exec_callback_QDesignerWidgetDataBaseInterface_indexOfObject(const QDesignerWidgetDataBaseInterface*, intptr_t, QObject*, bool);
int miqt_exec_callback_QDesignerWidgetDataBaseInterface_indexOfClassName(const QDesignerWidgetDataBaseInterface*, intptr_t, struct miqt_string, bool);
QDesignerFormEditorInterface* miqt_exec_callback_QDesignerWidgetDataBaseInterface_core(const QDesignerWidgetDataBaseInterface*, intptr_t);
bool miqt_exec_callback_QDesignerWidgetDataBaseInterface_event(QDesignerWidgetDataBaseInterface*, intptr_t, QEvent*);
bool miqt_exec_callback_QDesignerWidgetDataBaseInterface_eventFilter(QDesignerWidgetDataBaseInterface*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QDesignerWidgetDataBaseInterface_timerEvent(QDesignerWidgetDataBaseInterface*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QDesignerWidgetDataBaseInterface_childEvent(QDesignerWidgetDataBaseInterface*, intptr_t, QChildEvent*);
void miqt_exec_callback_QDesignerWidgetDataBaseInterface_customEvent(QDesignerWidgetDataBaseInterface*, intptr_t, QEvent*);
void miqt_exec_callback_QDesignerWidgetDataBaseInterface_connectNotify(QDesignerWidgetDataBaseInterface*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDesignerWidgetDataBaseInterface_disconnectNotify(QDesignerWidgetDataBaseInterface*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQDesignerWidgetDataBaseItemInterface final : public QDesignerWidgetDataBaseItemInterface {
public:

	MiqtVirtualQDesignerWidgetDataBaseItemInterface(): QDesignerWidgetDataBaseItemInterface() {}

	virtual ~MiqtVirtualQDesignerWidgetDataBaseItemInterface() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> handle__name;

	// Subclass to allow providing a Go implementation
	virtual QString name() const override {
		if (!handle__name) {
			return QString(); // Pure virtual, there is no base we can call
		}

		struct miqt_string callback_return_value = miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_name(this, handle__name.value());
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		free(callback_return_value.data);
		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> handle__setName;

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
		miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setName(this, handle__setName.value(), sigval1);

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> handle__group;

	// Subclass to allow providing a Go implementation
	virtual QString group() const override {
		if (!handle__group) {
			return QString(); // Pure virtual, there is no base we can call
		}

		struct miqt_string callback_return_value = miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_group(this, handle__group.value());
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		free(callback_return_value.data);
		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> handle__setGroup;

	// Subclass to allow providing a Go implementation
	virtual void setGroup(const QString& group) override {
		if (!handle__setGroup) {
			return; // Pure virtual, there is no base we can call
		}

		const QString group_ret = group;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray group_b = group_ret.toUtf8();
		struct miqt_string group_ms;
		group_ms.len = group_b.length();
		group_ms.data = static_cast<char*>(malloc(group_ms.len));
		memcpy(group_ms.data, group_b.data(), group_ms.len);
		struct miqt_string sigval1 = group_ms;
		miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setGroup(this, handle__setGroup.value(), sigval1);

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> handle__toolTip;

	// Subclass to allow providing a Go implementation
	virtual QString toolTip() const override {
		if (!handle__toolTip) {
			return QString(); // Pure virtual, there is no base we can call
		}

		struct miqt_string callback_return_value = miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_toolTip(this, handle__toolTip.value());
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		free(callback_return_value.data);
		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> handle__setToolTip;

	// Subclass to allow providing a Go implementation
	virtual void setToolTip(const QString& toolTip) override {
		if (!handle__setToolTip) {
			return; // Pure virtual, there is no base we can call
		}

		const QString toolTip_ret = toolTip;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray toolTip_b = toolTip_ret.toUtf8();
		struct miqt_string toolTip_ms;
		toolTip_ms.len = toolTip_b.length();
		toolTip_ms.data = static_cast<char*>(malloc(toolTip_ms.len));
		memcpy(toolTip_ms.data, toolTip_b.data(), toolTip_ms.len);
		struct miqt_string sigval1 = toolTip_ms;
		miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setToolTip(this, handle__setToolTip.value(), sigval1);

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> handle__whatsThis;

	// Subclass to allow providing a Go implementation
	virtual QString whatsThis() const override {
		if (!handle__whatsThis) {
			return QString(); // Pure virtual, there is no base we can call
		}

		struct miqt_string callback_return_value = miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_whatsThis(this, handle__whatsThis.value());
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		free(callback_return_value.data);
		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> handle__setWhatsThis;

	// Subclass to allow providing a Go implementation
	virtual void setWhatsThis(const QString& whatsThis) override {
		if (!handle__setWhatsThis) {
			return; // Pure virtual, there is no base we can call
		}

		const QString whatsThis_ret = whatsThis;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray whatsThis_b = whatsThis_ret.toUtf8();
		struct miqt_string whatsThis_ms;
		whatsThis_ms.len = whatsThis_b.length();
		whatsThis_ms.data = static_cast<char*>(malloc(whatsThis_ms.len));
		memcpy(whatsThis_ms.data, whatsThis_b.data(), whatsThis_ms.len);
		struct miqt_string sigval1 = whatsThis_ms;
		miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setWhatsThis(this, handle__setWhatsThis.value(), sigval1);

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> handle__includeFile;

	// Subclass to allow providing a Go implementation
	virtual QString includeFile() const override {
		if (!handle__includeFile) {
			return QString(); // Pure virtual, there is no base we can call
		}

		struct miqt_string callback_return_value = miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_includeFile(this, handle__includeFile.value());
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		free(callback_return_value.data);
		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> handle__setIncludeFile;

	// Subclass to allow providing a Go implementation
	virtual void setIncludeFile(const QString& includeFile) override {
		if (!handle__setIncludeFile) {
			return; // Pure virtual, there is no base we can call
		}

		const QString includeFile_ret = includeFile;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray includeFile_b = includeFile_ret.toUtf8();
		struct miqt_string includeFile_ms;
		includeFile_ms.len = includeFile_b.length();
		includeFile_ms.data = static_cast<char*>(malloc(includeFile_ms.len));
		memcpy(includeFile_ms.data, includeFile_b.data(), includeFile_ms.len);
		struct miqt_string sigval1 = includeFile_ms;
		miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setIncludeFile(this, handle__setIncludeFile.value(), sigval1);

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> handle__icon;
	bool owns_return__icon = false;

	// Subclass to allow providing a Go implementation
	virtual QIcon icon() const override {
		if (!handle__icon) {
			return QIcon(); // Pure virtual, there is no base we can call
		}

		QIcon* callback_return_value = miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_icon(this, handle__icon.value());
		std::unique_ptr<QIcon> callback_return_value_owner;
		if (owns_return__icon) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> handle__setIcon;

	// Subclass to allow providing a Go implementation
	virtual void setIcon(const QIcon& icon) override {
		if (!handle__setIcon) {
			return; // Pure virtual, there is no base we can call
		}

		const QIcon& icon_ret = icon;
		// Cast returned reference into pointer
		QIcon* sigval1 = const_cast<QIcon*>(&icon_ret);
		miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setIcon(this, handle__setIcon.value(), sigval1);

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> handle__isCompat;

	// Subclass to allow providing a Go implementation
	virtual bool isCompat() const override {
		if (!handle__isCompat) {
			return false; // Pure virtual, there is no base we can call
		}

		bool callback_return_value = miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_isCompat(this, handle__isCompat.value());
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> handle__setCompat;

	// Subclass to allow providing a Go implementation
	virtual void setCompat(bool compat) override {
		if (!handle__setCompat) {
			return; // Pure virtual, there is no base we can call
		}

		bool sigval1 = compat;
		miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setCompat(this, handle__setCompat.value(), sigval1);

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> handle__isContainer;

	// Subclass to allow providing a Go implementation
	virtual bool isContainer() const override {
		if (!handle__isContainer) {
			return false; // Pure virtual, there is no base we can call
		}

		bool callback_return_value = miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_isContainer(this, handle__isContainer.value());
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> handle__setContainer;

	// Subclass to allow providing a Go implementation
	virtual void setContainer(bool container) override {
		if (!handle__setContainer) {
			return; // Pure virtual, there is no base we can call
		}

		bool sigval1 = container;
		miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setContainer(this, handle__setContainer.value(), sigval1);

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> handle__isCustom;

	// Subclass to allow providing a Go implementation
	virtual bool isCustom() const override {
		if (!handle__isCustom) {
			return false; // Pure virtual, there is no base we can call
		}

		bool callback_return_value = miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_isCustom(this, handle__isCustom.value());
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> handle__setCustom;

	// Subclass to allow providing a Go implementation
	virtual void setCustom(bool custom) override {
		if (!handle__setCustom) {
			return; // Pure virtual, there is no base we can call
		}

		bool sigval1 = custom;
		miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setCustom(this, handle__setCustom.value(), sigval1);

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> handle__pluginPath;

	// Subclass to allow providing a Go implementation
	virtual QString pluginPath() const override {
		if (!handle__pluginPath) {
			return QString(); // Pure virtual, there is no base we can call
		}

		struct miqt_string callback_return_value = miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_pluginPath(this, handle__pluginPath.value());
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		free(callback_return_value.data);
		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> handle__setPluginPath;

	// Subclass to allow providing a Go implementation
	virtual void setPluginPath(const QString& path) override {
		if (!handle__setPluginPath) {
			return; // Pure virtual, there is no base we can call
		}

		const QString path_ret = path;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray path_b = path_ret.toUtf8();
		struct miqt_string path_ms;
		path_ms.len = path_b.length();
		path_ms.data = static_cast<char*>(malloc(path_ms.len));
		memcpy(path_ms.data, path_b.data(), path_ms.len);
		struct miqt_string sigval1 = path_ms;
		miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setPluginPath(this, handle__setPluginPath.value(), sigval1);

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> handle__isPromoted;

	// Subclass to allow providing a Go implementation
	virtual bool isPromoted() const override {
		if (!handle__isPromoted) {
			return false; // Pure virtual, there is no base we can call
		}

		bool callback_return_value = miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_isPromoted(this, handle__isPromoted.value());
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> handle__setPromoted;

	// Subclass to allow providing a Go implementation
	virtual void setPromoted(bool b) override {
		if (!handle__setPromoted) {
			return; // Pure virtual, there is no base we can call
		}

		bool sigval1 = b;
		miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setPromoted(this, handle__setPromoted.value(), sigval1);

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> handle__extends;

	// Subclass to allow providing a Go implementation
	virtual QString extends() const override {
		if (!handle__extends) {
			return QString(); // Pure virtual, there is no base we can call
		}

		struct miqt_string callback_return_value = miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_extends(this, handle__extends.value());
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		free(callback_return_value.data);
		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> handle__setExtends;

	// Subclass to allow providing a Go implementation
	virtual void setExtends(const QString& s) override {
		if (!handle__setExtends) {
			return; // Pure virtual, there is no base we can call
		}

		const QString s_ret = s;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray s_b = s_ret.toUtf8();
		struct miqt_string s_ms;
		s_ms.len = s_b.length();
		s_ms.data = static_cast<char*>(malloc(s_ms.len));
		memcpy(s_ms.data, s_b.data(), s_ms.len);
		struct miqt_string sigval1 = s_ms;
		miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setExtends(this, handle__setExtends.value(), sigval1);

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> handle__setDefaultPropertyValues;

	// Subclass to allow providing a Go implementation
	virtual void setDefaultPropertyValues(const QList<QVariant>& list) override {
		if (!handle__setDefaultPropertyValues) {
			return; // Pure virtual, there is no base we can call
		}

		const QList<QVariant>& list_ret = list;
		// Convert QList<> from C++ memory to manually-managed C memory
		QVariant** list_arr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * list_ret.length()));
		for (size_t i = 0, e = list_ret.length(); i < e; ++i) {
			list_arr[i] = new QVariant(list_ret[i]);
		}
		struct miqt_array list_out;
		list_out.len = list_ret.length();
		list_out.data = static_cast<void*>(list_arr);
		struct miqt_array /* of QVariant* */  sigval1 = list_out;
		miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_setDefaultPropertyValues(this, handle__setDefaultPropertyValues.value(), sigval1);

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> handle__defaultPropertyValues;

	// Subclass to allow providing a Go implementation
	virtual QList<QVariant> defaultPropertyValues() const override {
		if (!handle__defaultPropertyValues) {
			return QList<QVariant>(); // Pure virtual, there is no base we can call
		}

		struct miqt_array /* of QVariant* */  callback_return_value = miqt_exec_callback_QDesignerWidgetDataBaseItemInterface_defaultPropertyValues(this, handle__defaultPropertyValues.value());
		QList<QVariant> callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QVariant** callback_return_value_arr = static_cast<QVariant**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(*(callback_return_value_arr[i]));
		}
		free(callback_return_value.data);
		return callback_return_value_QList;
	}

};

QDesignerWidgetDataBaseItemInterface* QDesignerWidgetDataBaseItemInterface_new() {
	return new (std::nothrow) MiqtVirtualQDesignerWidgetDataBaseItemInterface();
}

struct miqt_string QDesignerWidgetDataBaseItemInterface_name(const QDesignerWidgetDataBaseItemInterface* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDesignerWidgetDataBaseItemInterface_setName(QDesignerWidgetDataBaseItemInterface* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setName(name_QString);
}

struct miqt_string QDesignerWidgetDataBaseItemInterface_group(const QDesignerWidgetDataBaseItemInterface* self) {
	QString _ret = self->group();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDesignerWidgetDataBaseItemInterface_setGroup(QDesignerWidgetDataBaseItemInterface* self, struct miqt_string group) {
	QString group_QString = QString::fromUtf8(group.data, group.len);
	self->setGroup(group_QString);
}

struct miqt_string QDesignerWidgetDataBaseItemInterface_toolTip(const QDesignerWidgetDataBaseItemInterface* self) {
	QString _ret = self->toolTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDesignerWidgetDataBaseItemInterface_setToolTip(QDesignerWidgetDataBaseItemInterface* self, struct miqt_string toolTip) {
	QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
	self->setToolTip(toolTip_QString);
}

struct miqt_string QDesignerWidgetDataBaseItemInterface_whatsThis(const QDesignerWidgetDataBaseItemInterface* self) {
	QString _ret = self->whatsThis();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDesignerWidgetDataBaseItemInterface_setWhatsThis(QDesignerWidgetDataBaseItemInterface* self, struct miqt_string whatsThis) {
	QString whatsThis_QString = QString::fromUtf8(whatsThis.data, whatsThis.len);
	self->setWhatsThis(whatsThis_QString);
}

struct miqt_string QDesignerWidgetDataBaseItemInterface_includeFile(const QDesignerWidgetDataBaseItemInterface* self) {
	QString _ret = self->includeFile();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDesignerWidgetDataBaseItemInterface_setIncludeFile(QDesignerWidgetDataBaseItemInterface* self, struct miqt_string includeFile) {
	QString includeFile_QString = QString::fromUtf8(includeFile.data, includeFile.len);
	self->setIncludeFile(includeFile_QString);
}

QIcon* QDesignerWidgetDataBaseItemInterface_icon(const QDesignerWidgetDataBaseItemInterface* self) {
	return new QIcon(self->icon());
}

void QDesignerWidgetDataBaseItemInterface_setIcon(QDesignerWidgetDataBaseItemInterface* self, QIcon* icon) {
	self->setIcon(*icon);
}

bool QDesignerWidgetDataBaseItemInterface_isCompat(const QDesignerWidgetDataBaseItemInterface* self) {
	return self->isCompat();
}

void QDesignerWidgetDataBaseItemInterface_setCompat(QDesignerWidgetDataBaseItemInterface* self, bool compat) {
	self->setCompat(compat);
}

bool QDesignerWidgetDataBaseItemInterface_isContainer(const QDesignerWidgetDataBaseItemInterface* self) {
	return self->isContainer();
}

void QDesignerWidgetDataBaseItemInterface_setContainer(QDesignerWidgetDataBaseItemInterface* self, bool container) {
	self->setContainer(container);
}

bool QDesignerWidgetDataBaseItemInterface_isCustom(const QDesignerWidgetDataBaseItemInterface* self) {
	return self->isCustom();
}

void QDesignerWidgetDataBaseItemInterface_setCustom(QDesignerWidgetDataBaseItemInterface* self, bool custom) {
	self->setCustom(custom);
}

struct miqt_string QDesignerWidgetDataBaseItemInterface_pluginPath(const QDesignerWidgetDataBaseItemInterface* self) {
	QString _ret = self->pluginPath();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDesignerWidgetDataBaseItemInterface_setPluginPath(QDesignerWidgetDataBaseItemInterface* self, struct miqt_string path) {
	QString path_QString = QString::fromUtf8(path.data, path.len);
	self->setPluginPath(path_QString);
}

bool QDesignerWidgetDataBaseItemInterface_isPromoted(const QDesignerWidgetDataBaseItemInterface* self) {
	return self->isPromoted();
}

void QDesignerWidgetDataBaseItemInterface_setPromoted(QDesignerWidgetDataBaseItemInterface* self, bool b) {
	self->setPromoted(b);
}

struct miqt_string QDesignerWidgetDataBaseItemInterface_extends(const QDesignerWidgetDataBaseItemInterface* self) {
	QString _ret = self->extends();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDesignerWidgetDataBaseItemInterface_setExtends(QDesignerWidgetDataBaseItemInterface* self, struct miqt_string s) {
	QString s_QString = QString::fromUtf8(s.data, s.len);
	self->setExtends(s_QString);
}

void QDesignerWidgetDataBaseItemInterface_setDefaultPropertyValues(QDesignerWidgetDataBaseItemInterface* self, struct miqt_array /* of QVariant* */  list) {
	QList<QVariant> list_QList;
	list_QList.reserve(list.len);
	QVariant** list_arr = static_cast<QVariant**>(list.data);
	for(size_t i = 0; i < list.len; ++i) {
		list_QList.push_back(*(list_arr[i]));
	}
	self->setDefaultPropertyValues(list_QList);
}

struct miqt_array /* of QVariant* */  QDesignerWidgetDataBaseItemInterface_defaultPropertyValues(const QDesignerWidgetDataBaseItemInterface* self) {
	QList<QVariant> _ret = self->defaultPropertyValues();
	// Convert QList<> from C++ memory to manually-managed C memory
	QVariant** _arr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QVariant(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QDesignerWidgetDataBaseItemInterface_override_virtual_name(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetDataBaseItemInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseItemInterface*>( (QDesignerWidgetDataBaseItemInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__name = std::move(slot_handle);
	return true;
}

bool QDesignerWidgetDataBaseItemInterface_override_virtual_setName(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetDataBaseItemInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseItemInterface*>( (QDesignerWidgetDataBaseItemInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setName = std::move(slot_handle);
	return true;
}

bool QDesignerWidgetDataBaseItemInterface_override_virtual_group(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetDataBaseItemInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseItemInterface*>( (QDesignerWidgetDataBaseItemInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__group = std::move(slot_handle);
	return true;
}

bool QDesignerWidgetDataBaseItemInterface_override_virtual_setGroup(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetDataBaseItemInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseItemInterface*>( (QDesignerWidgetDataBaseItemInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setGroup = std::move(slot_handle);
	return true;
}

bool QDesignerWidgetDataBaseItemInterface_override_virtual_toolTip(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetDataBaseItemInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseItemInterface*>( (QDesignerWidgetDataBaseItemInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__toolTip = std::move(slot_handle);
	return true;
}

bool QDesignerWidgetDataBaseItemInterface_override_virtual_setToolTip(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetDataBaseItemInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseItemInterface*>( (QDesignerWidgetDataBaseItemInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setToolTip = std::move(slot_handle);
	return true;
}

bool QDesignerWidgetDataBaseItemInterface_override_virtual_whatsThis(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetDataBaseItemInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseItemInterface*>( (QDesignerWidgetDataBaseItemInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__whatsThis = std::move(slot_handle);
	return true;
}

bool QDesignerWidgetDataBaseItemInterface_override_virtual_setWhatsThis(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetDataBaseItemInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseItemInterface*>( (QDesignerWidgetDataBaseItemInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setWhatsThis = std::move(slot_handle);
	return true;
}

bool QDesignerWidgetDataBaseItemInterface_override_virtual_includeFile(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetDataBaseItemInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseItemInterface*>( (QDesignerWidgetDataBaseItemInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__includeFile = std::move(slot_handle);
	return true;
}

bool QDesignerWidgetDataBaseItemInterface_override_virtual_setIncludeFile(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetDataBaseItemInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseItemInterface*>( (QDesignerWidgetDataBaseItemInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setIncludeFile = std::move(slot_handle);
	return true;
}

bool QDesignerWidgetDataBaseItemInterface_override_virtual_icon(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetDataBaseItemInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseItemInterface*>( (QDesignerWidgetDataBaseItemInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__icon = std::move(slot_handle);
	self_cast->owns_return__icon = false;
	return true;
}

bool QDesignerWidgetDataBaseItemInterface_override_virtual_owned_icon(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetDataBaseItemInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseItemInterface*>( (QDesignerWidgetDataBaseItemInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__icon = std::move(slot_handle);
	self_cast->owns_return__icon = true;
	return true;
}

bool QDesignerWidgetDataBaseItemInterface_override_virtual_setIcon(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetDataBaseItemInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseItemInterface*>( (QDesignerWidgetDataBaseItemInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setIcon = std::move(slot_handle);
	return true;
}

bool QDesignerWidgetDataBaseItemInterface_override_virtual_isCompat(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetDataBaseItemInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseItemInterface*>( (QDesignerWidgetDataBaseItemInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isCompat = std::move(slot_handle);
	return true;
}

bool QDesignerWidgetDataBaseItemInterface_override_virtual_setCompat(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetDataBaseItemInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseItemInterface*>( (QDesignerWidgetDataBaseItemInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setCompat = std::move(slot_handle);
	return true;
}

bool QDesignerWidgetDataBaseItemInterface_override_virtual_isContainer(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetDataBaseItemInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseItemInterface*>( (QDesignerWidgetDataBaseItemInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isContainer = std::move(slot_handle);
	return true;
}

bool QDesignerWidgetDataBaseItemInterface_override_virtual_setContainer(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetDataBaseItemInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseItemInterface*>( (QDesignerWidgetDataBaseItemInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setContainer = std::move(slot_handle);
	return true;
}

bool QDesignerWidgetDataBaseItemInterface_override_virtual_isCustom(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetDataBaseItemInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseItemInterface*>( (QDesignerWidgetDataBaseItemInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isCustom = std::move(slot_handle);
	return true;
}

bool QDesignerWidgetDataBaseItemInterface_override_virtual_setCustom(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetDataBaseItemInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseItemInterface*>( (QDesignerWidgetDataBaseItemInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setCustom = std::move(slot_handle);
	return true;
}

bool QDesignerWidgetDataBaseItemInterface_override_virtual_pluginPath(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetDataBaseItemInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseItemInterface*>( (QDesignerWidgetDataBaseItemInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__pluginPath = std::move(slot_handle);
	return true;
}

bool QDesignerWidgetDataBaseItemInterface_override_virtual_setPluginPath(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetDataBaseItemInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseItemInterface*>( (QDesignerWidgetDataBaseItemInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setPluginPath = std::move(slot_handle);
	return true;
}

bool QDesignerWidgetDataBaseItemInterface_override_virtual_isPromoted(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetDataBaseItemInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseItemInterface*>( (QDesignerWidgetDataBaseItemInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isPromoted = std::move(slot_handle);
	return true;
}

bool QDesignerWidgetDataBaseItemInterface_override_virtual_setPromoted(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetDataBaseItemInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseItemInterface*>( (QDesignerWidgetDataBaseItemInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setPromoted = std::move(slot_handle);
	return true;
}

bool QDesignerWidgetDataBaseItemInterface_override_virtual_extends(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetDataBaseItemInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseItemInterface*>( (QDesignerWidgetDataBaseItemInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__extends = std::move(slot_handle);
	return true;
}

bool QDesignerWidgetDataBaseItemInterface_override_virtual_setExtends(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetDataBaseItemInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseItemInterface*>( (QDesignerWidgetDataBaseItemInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setExtends = std::move(slot_handle);
	return true;
}

bool QDesignerWidgetDataBaseItemInterface_override_virtual_setDefaultPropertyValues(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetDataBaseItemInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseItemInterface*>( (QDesignerWidgetDataBaseItemInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setDefaultPropertyValues = std::move(slot_handle);
	return true;
}

bool QDesignerWidgetDataBaseItemInterface_override_virtual_defaultPropertyValues(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseItemInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetDataBaseItemInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseItemInterface*>( (QDesignerWidgetDataBaseItemInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultPropertyValues = std::move(slot_handle);
	return true;
}

void QDesignerWidgetDataBaseItemInterface_delete(QDesignerWidgetDataBaseItemInterface* self) {
	delete self;
}

class MiqtVirtualQDesignerWidgetDataBaseInterface final : public QDesignerWidgetDataBaseInterface {
public:

	MiqtVirtualQDesignerWidgetDataBaseInterface(): QDesignerWidgetDataBaseInterface() {}
	MiqtVirtualQDesignerWidgetDataBaseInterface(QObject* parent): QDesignerWidgetDataBaseInterface(parent) {}

	virtual ~MiqtVirtualQDesignerWidgetDataBaseInterface() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseInterface> handle__count;

	// Subclass to allow providing a Go implementation
	virtual int count() const override {
		if (!handle__count) {
			return QDesignerWidgetDataBaseInterface::count();
		}

		int callback_return_value = miqt_exec_callback_QDesignerWidgetDataBaseInterface_count(this, handle__count.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QDesignerWidgetDataBaseInterface_virtualbase_count(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseInterface> handle__item;

	// Subclass to allow providing a Go implementation
	virtual QDesignerWidgetDataBaseItemInterface* item(int index) const override {
		if (!handle__item) {
			return QDesignerWidgetDataBaseInterface::item(index);
		}

		int sigval1 = index;
		QDesignerWidgetDataBaseItemInterface* callback_return_value = miqt_exec_callback_QDesignerWidgetDataBaseInterface_item(this, handle__item.value(), sigval1);
		return callback_return_value;
	}

	friend QDesignerWidgetDataBaseItemInterface* QDesignerWidgetDataBaseInterface_virtualbase_item(const void* self, int index);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseInterface> handle__indexOf;

	// Subclass to allow providing a Go implementation
	virtual int indexOf(QDesignerWidgetDataBaseItemInterface* item) const override {
		if (!handle__indexOf) {
			return QDesignerWidgetDataBaseInterface::indexOf(item);
		}

		QDesignerWidgetDataBaseItemInterface* sigval1 = item;
		int callback_return_value = miqt_exec_callback_QDesignerWidgetDataBaseInterface_indexOf(this, handle__indexOf.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QDesignerWidgetDataBaseInterface_virtualbase_indexOf(const void* self, QDesignerWidgetDataBaseItemInterface* item);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseInterface> handle__insert;

	// Subclass to allow providing a Go implementation
	virtual void insert(int index, QDesignerWidgetDataBaseItemInterface* item) override {
		if (!handle__insert) {
			QDesignerWidgetDataBaseInterface::insert(index, item);
			return;
		}

		int sigval1 = index;
		QDesignerWidgetDataBaseItemInterface* sigval2 = item;
		miqt_exec_callback_QDesignerWidgetDataBaseInterface_insert(this, handle__insert.value(), sigval1, sigval2);

	}

	friend void QDesignerWidgetDataBaseInterface_virtualbase_insert(void* self, int index, QDesignerWidgetDataBaseItemInterface* item);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseInterface> handle__append;

	// Subclass to allow providing a Go implementation
	virtual void append(QDesignerWidgetDataBaseItemInterface* item) override {
		if (!handle__append) {
			QDesignerWidgetDataBaseInterface::append(item);
			return;
		}

		QDesignerWidgetDataBaseItemInterface* sigval1 = item;
		miqt_exec_callback_QDesignerWidgetDataBaseInterface_append(this, handle__append.value(), sigval1);

	}

	friend void QDesignerWidgetDataBaseInterface_virtualbase_append(void* self, QDesignerWidgetDataBaseItemInterface* item);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseInterface> handle__indexOfObject;

	// Subclass to allow providing a Go implementation
	virtual int indexOfObject(QObject* object, bool resolveName) const override {
		if (!handle__indexOfObject) {
			return QDesignerWidgetDataBaseInterface::indexOfObject(object, resolveName);
		}

		QObject* sigval1 = object;
		bool sigval2 = resolveName;
		int callback_return_value = miqt_exec_callback_QDesignerWidgetDataBaseInterface_indexOfObject(this, handle__indexOfObject.value(), sigval1, sigval2);
		return static_cast<int>(callback_return_value);
	}

	friend int QDesignerWidgetDataBaseInterface_virtualbase_indexOfObject(const void* self, QObject* object, bool resolveName);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseInterface> handle__indexOfClassName;

	// Subclass to allow providing a Go implementation
	virtual int indexOfClassName(const QString& className, bool resolveName) const override {
		if (!handle__indexOfClassName) {
			return QDesignerWidgetDataBaseInterface::indexOfClassName(className, resolveName);
		}

		const QString className_ret = className;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray className_b = className_ret.toUtf8();
		struct miqt_string className_ms;
		className_ms.len = className_b.length();
		className_ms.data = static_cast<char*>(malloc(className_ms.len));
		memcpy(className_ms.data, className_b.data(), className_ms.len);
		struct miqt_string sigval1 = className_ms;
		bool sigval2 = resolveName;
		int callback_return_value = miqt_exec_callback_QDesignerWidgetDataBaseInterface_indexOfClassName(this, handle__indexOfClassName.value(), sigval1, sigval2);
		return static_cast<int>(callback_return_value);
	}

	friend int QDesignerWidgetDataBaseInterface_virtualbase_indexOfClassName(const void* self, struct miqt_string className, bool resolveName);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseInterface> handle__core;

	// Subclass to allow providing a Go implementation
	virtual QDesignerFormEditorInterface* core() const override {
		if (!handle__core) {
			return QDesignerWidgetDataBaseInterface::core();
		}

		QDesignerFormEditorInterface* callback_return_value = miqt_exec_callback_QDesignerWidgetDataBaseInterface_core(this, handle__core.value());
		return callback_return_value;
	}

	friend QDesignerFormEditorInterface* QDesignerWidgetDataBaseInterface_virtualbase_core(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseInterface> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QDesignerWidgetDataBaseInterface::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QDesignerWidgetDataBaseInterface_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QDesignerWidgetDataBaseInterface_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseInterface> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QDesignerWidgetDataBaseInterface::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QDesignerWidgetDataBaseInterface_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QDesignerWidgetDataBaseInterface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseInterface> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QDesignerWidgetDataBaseInterface::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QDesignerWidgetDataBaseInterface_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QDesignerWidgetDataBaseInterface_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseInterface> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QDesignerWidgetDataBaseInterface::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QDesignerWidgetDataBaseInterface_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QDesignerWidgetDataBaseInterface_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseInterface> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QDesignerWidgetDataBaseInterface::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QDesignerWidgetDataBaseInterface_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QDesignerWidgetDataBaseInterface_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseInterface> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QDesignerWidgetDataBaseInterface::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QDesignerWidgetDataBaseInterface_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QDesignerWidgetDataBaseInterface_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseInterface> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QDesignerWidgetDataBaseInterface::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QDesignerWidgetDataBaseInterface_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QDesignerWidgetDataBaseInterface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QDesignerWidgetDataBaseInterface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QDesignerWidgetDataBaseInterface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QDesignerWidgetDataBaseInterface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QDesignerWidgetDataBaseInterface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QDesignerWidgetDataBaseInterface* QDesignerWidgetDataBaseInterface_new() {
	return new (std::nothrow) MiqtVirtualQDesignerWidgetDataBaseInterface();
}

QDesignerWidgetDataBaseInterface* QDesignerWidgetDataBaseInterface_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQDesignerWidgetDataBaseInterface(parent);
}

void QDesignerWidgetDataBaseInterface_virtbase(QDesignerWidgetDataBaseInterface* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QDesignerWidgetDataBaseInterface_metaObject(const QDesignerWidgetDataBaseInterface* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDesignerWidgetDataBaseInterface_metacast(QDesignerWidgetDataBaseInterface* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDesignerWidgetDataBaseInterface_tr(const char* s) {
	QString _ret = QDesignerWidgetDataBaseInterface::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QDesignerWidgetDataBaseInterface_count(const QDesignerWidgetDataBaseInterface* self) {
	return self->count();
}

QDesignerWidgetDataBaseItemInterface* QDesignerWidgetDataBaseInterface_item(const QDesignerWidgetDataBaseInterface* self, int index) {
	return self->item(static_cast<int>(index));
}

int QDesignerWidgetDataBaseInterface_indexOf(const QDesignerWidgetDataBaseInterface* self, QDesignerWidgetDataBaseItemInterface* item) {
	return self->indexOf(item);
}

void QDesignerWidgetDataBaseInterface_insert(QDesignerWidgetDataBaseInterface* self, int index, QDesignerWidgetDataBaseItemInterface* item) {
	self->insert(static_cast<int>(index), item);
}

void QDesignerWidgetDataBaseInterface_append(QDesignerWidgetDataBaseInterface* self, QDesignerWidgetDataBaseItemInterface* item) {
	self->append(item);
}

int QDesignerWidgetDataBaseInterface_indexOfObject(const QDesignerWidgetDataBaseInterface* self, QObject* object, bool resolveName) {
	return self->indexOfObject(object, resolveName);
}

int QDesignerWidgetDataBaseInterface_indexOfClassName(const QDesignerWidgetDataBaseInterface* self, struct miqt_string className, bool resolveName) {
	QString className_QString = QString::fromUtf8(className.data, className.len);
	return self->indexOfClassName(className_QString, resolveName);
}

QDesignerFormEditorInterface* QDesignerWidgetDataBaseInterface_core(const QDesignerWidgetDataBaseInterface* self) {
	return self->core();
}

bool QDesignerWidgetDataBaseInterface_isContainer(const QDesignerWidgetDataBaseInterface* self, QObject* object) {
	return self->isContainer(object);
}

bool QDesignerWidgetDataBaseInterface_isCustom(const QDesignerWidgetDataBaseInterface* self, QObject* object) {
	return self->isCustom(object);
}

void QDesignerWidgetDataBaseInterface_changed(QDesignerWidgetDataBaseInterface* self) {
	self->changed();
}

void* QDesignerWidgetDataBaseInterface_connect_changed(QDesignerWidgetDataBaseInterface* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseInterface>>(slot);
	return new QMetaObject::Connection(QDesignerWidgetDataBaseInterface::connect(self, static_cast<void (QDesignerWidgetDataBaseInterface::*)()>(&QDesignerWidgetDataBaseInterface::changed), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QDesignerWidgetDataBaseInterface_changed(slot);
	}));
}

struct miqt_string QDesignerWidgetDataBaseInterface_tr2(const char* s, const char* c) {
	QString _ret = QDesignerWidgetDataBaseInterface::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerWidgetDataBaseInterface_tr3(const char* s, const char* c, int n) {
	QString _ret = QDesignerWidgetDataBaseInterface::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDesignerWidgetDataBaseInterface_isContainer2(const QDesignerWidgetDataBaseInterface* self, QObject* object, bool resolveName) {
	return self->isContainer(object, resolveName);
}

bool QDesignerWidgetDataBaseInterface_isCustom2(const QDesignerWidgetDataBaseInterface* self, QObject* object, bool resolveName) {
	return self->isCustom(object, resolveName);
}

bool QDesignerWidgetDataBaseInterface_override_virtual_count(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>( (QDesignerWidgetDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__count = std::move(slot_handle);
	return true;
}

int QDesignerWidgetDataBaseInterface_virtualbase_count(const void* self) {
	return static_cast<const MiqtVirtualQDesignerWidgetDataBaseInterface*>(self)->QDesignerWidgetDataBaseInterface::count();
}

bool QDesignerWidgetDataBaseInterface_override_virtual_item(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>( (QDesignerWidgetDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__item = std::move(slot_handle);
	return true;
}

QDesignerWidgetDataBaseItemInterface* QDesignerWidgetDataBaseInterface_virtualbase_item(const void* self, int index) {
	return static_cast<const MiqtVirtualQDesignerWidgetDataBaseInterface*>(self)->QDesignerWidgetDataBaseInterface::item(static_cast<int>(index));
}

bool QDesignerWidgetDataBaseInterface_override_virtual_indexOf(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>( (QDesignerWidgetDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__indexOf = std::move(slot_handle);
	return true;
}

int QDesignerWidgetDataBaseInterface_virtualbase_indexOf(const void* self, QDesignerWidgetDataBaseItemInterface* item) {
	return static_cast<const MiqtVirtualQDesignerWidgetDataBaseInterface*>(self)->QDesignerWidgetDataBaseInterface::indexOf(item);
}

bool QDesignerWidgetDataBaseInterface_override_virtual_insert(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>( (QDesignerWidgetDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__insert = std::move(slot_handle);
	return true;
}

void QDesignerWidgetDataBaseInterface_virtualbase_insert(void* self, int index, QDesignerWidgetDataBaseItemInterface* item) {
	static_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>(self)->QDesignerWidgetDataBaseInterface::insert(static_cast<int>(index), item);
}

bool QDesignerWidgetDataBaseInterface_override_virtual_append(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>( (QDesignerWidgetDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__append = std::move(slot_handle);
	return true;
}

void QDesignerWidgetDataBaseInterface_virtualbase_append(void* self, QDesignerWidgetDataBaseItemInterface* item) {
	static_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>(self)->QDesignerWidgetDataBaseInterface::append(item);
}

bool QDesignerWidgetDataBaseInterface_override_virtual_indexOfObject(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>( (QDesignerWidgetDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__indexOfObject = std::move(slot_handle);
	return true;
}

int QDesignerWidgetDataBaseInterface_virtualbase_indexOfObject(const void* self, QObject* object, bool resolveName) {
	return static_cast<const MiqtVirtualQDesignerWidgetDataBaseInterface*>(self)->QDesignerWidgetDataBaseInterface::indexOfObject(object, resolveName);
}

bool QDesignerWidgetDataBaseInterface_override_virtual_indexOfClassName(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>( (QDesignerWidgetDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__indexOfClassName = std::move(slot_handle);
	return true;
}

int QDesignerWidgetDataBaseInterface_virtualbase_indexOfClassName(const void* self, struct miqt_string className, bool resolveName) {
	QString className_QString = QString::fromUtf8(className.data, className.len);
	return static_cast<const MiqtVirtualQDesignerWidgetDataBaseInterface*>(self)->QDesignerWidgetDataBaseInterface::indexOfClassName(className_QString, resolveName);
}

bool QDesignerWidgetDataBaseInterface_override_virtual_core(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>( (QDesignerWidgetDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__core = std::move(slot_handle);
	return true;
}

QDesignerFormEditorInterface* QDesignerWidgetDataBaseInterface_virtualbase_core(const void* self) {
	return static_cast<const MiqtVirtualQDesignerWidgetDataBaseInterface*>(self)->QDesignerWidgetDataBaseInterface::core();
}

bool QDesignerWidgetDataBaseInterface_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>( (QDesignerWidgetDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QDesignerWidgetDataBaseInterface_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>(self)->QDesignerWidgetDataBaseInterface::event(event);
}

bool QDesignerWidgetDataBaseInterface_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>( (QDesignerWidgetDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QDesignerWidgetDataBaseInterface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>(self)->QDesignerWidgetDataBaseInterface::eventFilter(watched, event);
}

bool QDesignerWidgetDataBaseInterface_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>( (QDesignerWidgetDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QDesignerWidgetDataBaseInterface_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>(self)->QDesignerWidgetDataBaseInterface::timerEvent(event);
}

bool QDesignerWidgetDataBaseInterface_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>( (QDesignerWidgetDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QDesignerWidgetDataBaseInterface_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>(self)->QDesignerWidgetDataBaseInterface::childEvent(event);
}

bool QDesignerWidgetDataBaseInterface_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>( (QDesignerWidgetDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QDesignerWidgetDataBaseInterface_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>(self)->QDesignerWidgetDataBaseInterface::customEvent(event);
}

bool QDesignerWidgetDataBaseInterface_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>( (QDesignerWidgetDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QDesignerWidgetDataBaseInterface_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>(self)->QDesignerWidgetDataBaseInterface::connectNotify(*signal);
}

bool QDesignerWidgetDataBaseInterface_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerWidgetDataBaseInterface> slot_handle(slot);
	MiqtVirtualQDesignerWidgetDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>( (QDesignerWidgetDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QDesignerWidgetDataBaseInterface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>(self)->QDesignerWidgetDataBaseInterface::disconnectNotify(*signal);
}

QObject* QDesignerWidgetDataBaseInterface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDesignerWidgetDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>( (QDesignerWidgetDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QDesignerWidgetDataBaseInterface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDesignerWidgetDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>( (QDesignerWidgetDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QDesignerWidgetDataBaseInterface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQDesignerWidgetDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>( (QDesignerWidgetDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QDesignerWidgetDataBaseInterface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQDesignerWidgetDataBaseInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerWidgetDataBaseInterface*>( (QDesignerWidgetDataBaseInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QDesignerWidgetDataBaseInterface_delete(QDesignerWidgetDataBaseInterface* self) {
	delete self;
}

