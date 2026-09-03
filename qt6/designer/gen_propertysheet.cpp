#include <memory>
#include <utility>
#include <QDesignerPropertySheetExtension>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <propertysheet.h>
#include "gen_propertysheet.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QDesignerPropertySheetExtension(intptr_t);
int miqt_exec_callback_QDesignerPropertySheetExtension_count(const QDesignerPropertySheetExtension*, intptr_t);
int miqt_exec_callback_QDesignerPropertySheetExtension_indexOf(const QDesignerPropertySheetExtension*, intptr_t, struct miqt_string);
struct miqt_string miqt_exec_callback_QDesignerPropertySheetExtension_propertyName(const QDesignerPropertySheetExtension*, intptr_t, int);
struct miqt_string miqt_exec_callback_QDesignerPropertySheetExtension_propertyGroup(const QDesignerPropertySheetExtension*, intptr_t, int);
void miqt_exec_callback_QDesignerPropertySheetExtension_setPropertyGroup(QDesignerPropertySheetExtension*, intptr_t, int, struct miqt_string);
bool miqt_exec_callback_QDesignerPropertySheetExtension_hasReset(const QDesignerPropertySheetExtension*, intptr_t, int);
bool miqt_exec_callback_QDesignerPropertySheetExtension_reset(QDesignerPropertySheetExtension*, intptr_t, int);
bool miqt_exec_callback_QDesignerPropertySheetExtension_isVisible(const QDesignerPropertySheetExtension*, intptr_t, int);
void miqt_exec_callback_QDesignerPropertySheetExtension_setVisible(QDesignerPropertySheetExtension*, intptr_t, int, bool);
bool miqt_exec_callback_QDesignerPropertySheetExtension_isAttribute(const QDesignerPropertySheetExtension*, intptr_t, int);
void miqt_exec_callback_QDesignerPropertySheetExtension_setAttribute(QDesignerPropertySheetExtension*, intptr_t, int, bool);
QVariant* miqt_exec_callback_QDesignerPropertySheetExtension_property(const QDesignerPropertySheetExtension*, intptr_t, int);
void miqt_exec_callback_QDesignerPropertySheetExtension_setProperty(QDesignerPropertySheetExtension*, intptr_t, int, QVariant*);
bool miqt_exec_callback_QDesignerPropertySheetExtension_isChanged(const QDesignerPropertySheetExtension*, intptr_t, int);
void miqt_exec_callback_QDesignerPropertySheetExtension_setChanged(QDesignerPropertySheetExtension*, intptr_t, int, bool);
bool miqt_exec_callback_QDesignerPropertySheetExtension_isEnabled(const QDesignerPropertySheetExtension*, intptr_t, int);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQDesignerPropertySheetExtension final : public QDesignerPropertySheetExtension {
public:

	MiqtVirtualQDesignerPropertySheetExtension(): QDesignerPropertySheetExtension() {}

	virtual ~MiqtVirtualQDesignerPropertySheetExtension() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerPropertySheetExtension> handle__count;

	// Subclass to allow providing a Go implementation
	virtual int count() const override {
		if (!handle__count) {
			return 0; // Pure virtual, there is no base we can call
		}

		int callback_return_value = miqt_exec_callback_QDesignerPropertySheetExtension_count(this, handle__count.value());
		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerPropertySheetExtension> handle__indexOf;

	// Subclass to allow providing a Go implementation
	virtual int indexOf(const QString& name) const override {
		if (!handle__indexOf) {
			return 0; // Pure virtual, there is no base we can call
		}

		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		int callback_return_value = miqt_exec_callback_QDesignerPropertySheetExtension_indexOf(this, handle__indexOf.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerPropertySheetExtension> handle__propertyName;

	// Subclass to allow providing a Go implementation
	virtual QString propertyName(int index) const override {
		if (!handle__propertyName) {
			return QString(); // Pure virtual, there is no base we can call
		}

		int sigval1 = index;
		struct miqt_string callback_return_value = miqt_exec_callback_QDesignerPropertySheetExtension_propertyName(this, handle__propertyName.value(), sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		free(callback_return_value.data);
		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerPropertySheetExtension> handle__propertyGroup;

	// Subclass to allow providing a Go implementation
	virtual QString propertyGroup(int index) const override {
		if (!handle__propertyGroup) {
			return QString(); // Pure virtual, there is no base we can call
		}

		int sigval1 = index;
		struct miqt_string callback_return_value = miqt_exec_callback_QDesignerPropertySheetExtension_propertyGroup(this, handle__propertyGroup.value(), sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		free(callback_return_value.data);
		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerPropertySheetExtension> handle__setPropertyGroup;

	// Subclass to allow providing a Go implementation
	virtual void setPropertyGroup(int index, const QString& group) override {
		if (!handle__setPropertyGroup) {
			return; // Pure virtual, there is no base we can call
		}

		int sigval1 = index;
		const QString group_ret = group;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray group_b = group_ret.toUtf8();
		struct miqt_string group_ms;
		group_ms.len = group_b.length();
		group_ms.data = static_cast<char*>(malloc(group_ms.len));
		memcpy(group_ms.data, group_b.data(), group_ms.len);
		struct miqt_string sigval2 = group_ms;
		miqt_exec_callback_QDesignerPropertySheetExtension_setPropertyGroup(this, handle__setPropertyGroup.value(), sigval1, sigval2);

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerPropertySheetExtension> handle__hasReset;

	// Subclass to allow providing a Go implementation
	virtual bool hasReset(int index) const override {
		if (!handle__hasReset) {
			return false; // Pure virtual, there is no base we can call
		}

		int sigval1 = index;
		bool callback_return_value = miqt_exec_callback_QDesignerPropertySheetExtension_hasReset(this, handle__hasReset.value(), sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerPropertySheetExtension> handle__reset;

	// Subclass to allow providing a Go implementation
	virtual bool reset(int index) override {
		if (!handle__reset) {
			return false; // Pure virtual, there is no base we can call
		}

		int sigval1 = index;
		bool callback_return_value = miqt_exec_callback_QDesignerPropertySheetExtension_reset(this, handle__reset.value(), sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerPropertySheetExtension> handle__isVisible;

	// Subclass to allow providing a Go implementation
	virtual bool isVisible(int index) const override {
		if (!handle__isVisible) {
			return false; // Pure virtual, there is no base we can call
		}

		int sigval1 = index;
		bool callback_return_value = miqt_exec_callback_QDesignerPropertySheetExtension_isVisible(this, handle__isVisible.value(), sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerPropertySheetExtension> handle__setVisible;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(int index, bool b) override {
		if (!handle__setVisible) {
			return; // Pure virtual, there is no base we can call
		}

		int sigval1 = index;
		bool sigval2 = b;
		miqt_exec_callback_QDesignerPropertySheetExtension_setVisible(this, handle__setVisible.value(), sigval1, sigval2);

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerPropertySheetExtension> handle__isAttribute;

	// Subclass to allow providing a Go implementation
	virtual bool isAttribute(int index) const override {
		if (!handle__isAttribute) {
			return false; // Pure virtual, there is no base we can call
		}

		int sigval1 = index;
		bool callback_return_value = miqt_exec_callback_QDesignerPropertySheetExtension_isAttribute(this, handle__isAttribute.value(), sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerPropertySheetExtension> handle__setAttribute;

	// Subclass to allow providing a Go implementation
	virtual void setAttribute(int index, bool b) override {
		if (!handle__setAttribute) {
			return; // Pure virtual, there is no base we can call
		}

		int sigval1 = index;
		bool sigval2 = b;
		miqt_exec_callback_QDesignerPropertySheetExtension_setAttribute(this, handle__setAttribute.value(), sigval1, sigval2);

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerPropertySheetExtension> handle__property;

	// Subclass to allow providing a Go implementation
	virtual QVariant property(int index) const override {
		if (!handle__property) {
			return QVariant(); // Pure virtual, there is no base we can call
		}

		int sigval1 = index;
		QVariant* callback_return_value = miqt_exec_callback_QDesignerPropertySheetExtension_property(this, handle__property.value(), sigval1);
		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerPropertySheetExtension> handle__setProperty;

	// Subclass to allow providing a Go implementation
	virtual void setProperty(int index, const QVariant& value) override {
		if (!handle__setProperty) {
			return; // Pure virtual, there is no base we can call
		}

		int sigval1 = index;
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		miqt_exec_callback_QDesignerPropertySheetExtension_setProperty(this, handle__setProperty.value(), sigval1, sigval2);

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerPropertySheetExtension> handle__isChanged;

	// Subclass to allow providing a Go implementation
	virtual bool isChanged(int index) const override {
		if (!handle__isChanged) {
			return false; // Pure virtual, there is no base we can call
		}

		int sigval1 = index;
		bool callback_return_value = miqt_exec_callback_QDesignerPropertySheetExtension_isChanged(this, handle__isChanged.value(), sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerPropertySheetExtension> handle__setChanged;

	// Subclass to allow providing a Go implementation
	virtual void setChanged(int index, bool changed) override {
		if (!handle__setChanged) {
			return; // Pure virtual, there is no base we can call
		}

		int sigval1 = index;
		bool sigval2 = changed;
		miqt_exec_callback_QDesignerPropertySheetExtension_setChanged(this, handle__setChanged.value(), sigval1, sigval2);

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerPropertySheetExtension> handle__isEnabled;

	// Subclass to allow providing a Go implementation
	virtual bool isEnabled(int index) const override {
		if (!handle__isEnabled) {
			return false; // Pure virtual, there is no base we can call
		}

		int sigval1 = index;
		bool callback_return_value = miqt_exec_callback_QDesignerPropertySheetExtension_isEnabled(this, handle__isEnabled.value(), sigval1);
		return callback_return_value;
	}

};

QDesignerPropertySheetExtension* QDesignerPropertySheetExtension_new() {
	return new (std::nothrow) MiqtVirtualQDesignerPropertySheetExtension();
}

int QDesignerPropertySheetExtension_count(const QDesignerPropertySheetExtension* self) {
	return self->count();
}

int QDesignerPropertySheetExtension_indexOf(const QDesignerPropertySheetExtension* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->indexOf(name_QString);
}

struct miqt_string QDesignerPropertySheetExtension_propertyName(const QDesignerPropertySheetExtension* self, int index) {
	QString _ret = self->propertyName(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerPropertySheetExtension_propertyGroup(const QDesignerPropertySheetExtension* self, int index) {
	QString _ret = self->propertyGroup(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QDesignerPropertySheetExtension_setPropertyGroup(QDesignerPropertySheetExtension* self, int index, struct miqt_string group) {
	QString group_QString = QString::fromUtf8(group.data, group.len);
	self->setPropertyGroup(static_cast<int>(index), group_QString);
}

bool QDesignerPropertySheetExtension_hasReset(const QDesignerPropertySheetExtension* self, int index) {
	return self->hasReset(static_cast<int>(index));
}

bool QDesignerPropertySheetExtension_reset(QDesignerPropertySheetExtension* self, int index) {
	return self->reset(static_cast<int>(index));
}

bool QDesignerPropertySheetExtension_isVisible(const QDesignerPropertySheetExtension* self, int index) {
	return self->isVisible(static_cast<int>(index));
}

void QDesignerPropertySheetExtension_setVisible(QDesignerPropertySheetExtension* self, int index, bool b) {
	self->setVisible(static_cast<int>(index), b);
}

bool QDesignerPropertySheetExtension_isAttribute(const QDesignerPropertySheetExtension* self, int index) {
	return self->isAttribute(static_cast<int>(index));
}

void QDesignerPropertySheetExtension_setAttribute(QDesignerPropertySheetExtension* self, int index, bool b) {
	self->setAttribute(static_cast<int>(index), b);
}

QVariant* QDesignerPropertySheetExtension_property(const QDesignerPropertySheetExtension* self, int index) {
	return new QVariant(self->property(static_cast<int>(index)));
}

void QDesignerPropertySheetExtension_setProperty(QDesignerPropertySheetExtension* self, int index, QVariant* value) {
	self->setProperty(static_cast<int>(index), *value);
}

bool QDesignerPropertySheetExtension_isChanged(const QDesignerPropertySheetExtension* self, int index) {
	return self->isChanged(static_cast<int>(index));
}

void QDesignerPropertySheetExtension_setChanged(QDesignerPropertySheetExtension* self, int index, bool changed) {
	self->setChanged(static_cast<int>(index), changed);
}

bool QDesignerPropertySheetExtension_isEnabled(const QDesignerPropertySheetExtension* self, int index) {
	return self->isEnabled(static_cast<int>(index));
}

bool QDesignerPropertySheetExtension_override_virtual_count(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerPropertySheetExtension> slot_handle(slot);
	MiqtVirtualQDesignerPropertySheetExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertySheetExtension*>( (QDesignerPropertySheetExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__count = std::move(slot_handle);
	return true;
}

bool QDesignerPropertySheetExtension_override_virtual_indexOf(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerPropertySheetExtension> slot_handle(slot);
	MiqtVirtualQDesignerPropertySheetExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertySheetExtension*>( (QDesignerPropertySheetExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__indexOf = std::move(slot_handle);
	return true;
}

bool QDesignerPropertySheetExtension_override_virtual_propertyName(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerPropertySheetExtension> slot_handle(slot);
	MiqtVirtualQDesignerPropertySheetExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertySheetExtension*>( (QDesignerPropertySheetExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__propertyName = std::move(slot_handle);
	return true;
}

bool QDesignerPropertySheetExtension_override_virtual_propertyGroup(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerPropertySheetExtension> slot_handle(slot);
	MiqtVirtualQDesignerPropertySheetExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertySheetExtension*>( (QDesignerPropertySheetExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__propertyGroup = std::move(slot_handle);
	return true;
}

bool QDesignerPropertySheetExtension_override_virtual_setPropertyGroup(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerPropertySheetExtension> slot_handle(slot);
	MiqtVirtualQDesignerPropertySheetExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertySheetExtension*>( (QDesignerPropertySheetExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setPropertyGroup = std::move(slot_handle);
	return true;
}

bool QDesignerPropertySheetExtension_override_virtual_hasReset(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerPropertySheetExtension> slot_handle(slot);
	MiqtVirtualQDesignerPropertySheetExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertySheetExtension*>( (QDesignerPropertySheetExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasReset = std::move(slot_handle);
	return true;
}

bool QDesignerPropertySheetExtension_override_virtual_reset(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerPropertySheetExtension> slot_handle(slot);
	MiqtVirtualQDesignerPropertySheetExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertySheetExtension*>( (QDesignerPropertySheetExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__reset = std::move(slot_handle);
	return true;
}

bool QDesignerPropertySheetExtension_override_virtual_isVisible(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerPropertySheetExtension> slot_handle(slot);
	MiqtVirtualQDesignerPropertySheetExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertySheetExtension*>( (QDesignerPropertySheetExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isVisible = std::move(slot_handle);
	return true;
}

bool QDesignerPropertySheetExtension_override_virtual_setVisible(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerPropertySheetExtension> slot_handle(slot);
	MiqtVirtualQDesignerPropertySheetExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertySheetExtension*>( (QDesignerPropertySheetExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = std::move(slot_handle);
	return true;
}

bool QDesignerPropertySheetExtension_override_virtual_isAttribute(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerPropertySheetExtension> slot_handle(slot);
	MiqtVirtualQDesignerPropertySheetExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertySheetExtension*>( (QDesignerPropertySheetExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isAttribute = std::move(slot_handle);
	return true;
}

bool QDesignerPropertySheetExtension_override_virtual_setAttribute(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerPropertySheetExtension> slot_handle(slot);
	MiqtVirtualQDesignerPropertySheetExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertySheetExtension*>( (QDesignerPropertySheetExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setAttribute = std::move(slot_handle);
	return true;
}

bool QDesignerPropertySheetExtension_override_virtual_property(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerPropertySheetExtension> slot_handle(slot);
	MiqtVirtualQDesignerPropertySheetExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertySheetExtension*>( (QDesignerPropertySheetExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__property = std::move(slot_handle);
	return true;
}

bool QDesignerPropertySheetExtension_override_virtual_setProperty(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerPropertySheetExtension> slot_handle(slot);
	MiqtVirtualQDesignerPropertySheetExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertySheetExtension*>( (QDesignerPropertySheetExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setProperty = std::move(slot_handle);
	return true;
}

bool QDesignerPropertySheetExtension_override_virtual_isChanged(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerPropertySheetExtension> slot_handle(slot);
	MiqtVirtualQDesignerPropertySheetExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertySheetExtension*>( (QDesignerPropertySheetExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isChanged = std::move(slot_handle);
	return true;
}

bool QDesignerPropertySheetExtension_override_virtual_setChanged(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerPropertySheetExtension> slot_handle(slot);
	MiqtVirtualQDesignerPropertySheetExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertySheetExtension*>( (QDesignerPropertySheetExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setChanged = std::move(slot_handle);
	return true;
}

bool QDesignerPropertySheetExtension_override_virtual_isEnabled(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerPropertySheetExtension> slot_handle(slot);
	MiqtVirtualQDesignerPropertySheetExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerPropertySheetExtension*>( (QDesignerPropertySheetExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isEnabled = std::move(slot_handle);
	return true;
}

void QDesignerPropertySheetExtension_delete(QDesignerPropertySheetExtension* self) {
	delete self;
}

