#include <memory>
#include <utility>
#include <QLayout>
#include <QLayoutItem>
#include <QRect>
#include <QSize>
#include <QSizePolicy>
#include <QSpacerItem>
#include <QWidget>
#include <QWidgetItem>
#include <QWidgetItemV2>
#include <qlayoutitem.h>
#include "gen_qlayoutitem.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QLayoutItem(intptr_t);
QSize* miqt_exec_callback_QLayoutItem_sizeHint(const QLayoutItem*, intptr_t);
QSize* miqt_exec_callback_QLayoutItem_minimumSize(const QLayoutItem*, intptr_t);
QSize* miqt_exec_callback_QLayoutItem_maximumSize(const QLayoutItem*, intptr_t);
int miqt_exec_callback_QLayoutItem_expandingDirections(const QLayoutItem*, intptr_t);
void miqt_exec_callback_QLayoutItem_setGeometry(QLayoutItem*, intptr_t, QRect*);
QRect* miqt_exec_callback_QLayoutItem_geometry(const QLayoutItem*, intptr_t);
bool miqt_exec_callback_QLayoutItem_isEmpty(const QLayoutItem*, intptr_t);
bool miqt_exec_callback_QLayoutItem_hasHeightForWidth(const QLayoutItem*, intptr_t);
int miqt_exec_callback_QLayoutItem_heightForWidth(const QLayoutItem*, intptr_t, int);
int miqt_exec_callback_QLayoutItem_minimumHeightForWidth(const QLayoutItem*, intptr_t, int);
void miqt_exec_callback_QLayoutItem_invalidate(QLayoutItem*, intptr_t);
QWidget* miqt_exec_callback_QLayoutItem_widget(QLayoutItem*, intptr_t);
QLayout* miqt_exec_callback_QLayoutItem_layout(QLayoutItem*, intptr_t);
QSpacerItem* miqt_exec_callback_QLayoutItem_spacerItem(QLayoutItem*, intptr_t);
int miqt_exec_callback_QLayoutItem_controlTypes(const QLayoutItem*, intptr_t);
void miqt_exec_callback_handle_release_QSpacerItem(intptr_t);
QSize* miqt_exec_callback_QSpacerItem_sizeHint(const QSpacerItem*, intptr_t);
QSize* miqt_exec_callback_QSpacerItem_minimumSize(const QSpacerItem*, intptr_t);
QSize* miqt_exec_callback_QSpacerItem_maximumSize(const QSpacerItem*, intptr_t);
int miqt_exec_callback_QSpacerItem_expandingDirections(const QSpacerItem*, intptr_t);
bool miqt_exec_callback_QSpacerItem_isEmpty(const QSpacerItem*, intptr_t);
void miqt_exec_callback_QSpacerItem_setGeometry(QSpacerItem*, intptr_t, QRect*);
QRect* miqt_exec_callback_QSpacerItem_geometry(const QSpacerItem*, intptr_t);
QSpacerItem* miqt_exec_callback_QSpacerItem_spacerItem(QSpacerItem*, intptr_t);
bool miqt_exec_callback_QSpacerItem_hasHeightForWidth(const QSpacerItem*, intptr_t);
int miqt_exec_callback_QSpacerItem_heightForWidth(const QSpacerItem*, intptr_t, int);
int miqt_exec_callback_QSpacerItem_minimumHeightForWidth(const QSpacerItem*, intptr_t, int);
void miqt_exec_callback_QSpacerItem_invalidate(QSpacerItem*, intptr_t);
QWidget* miqt_exec_callback_QSpacerItem_widget(QSpacerItem*, intptr_t);
QLayout* miqt_exec_callback_QSpacerItem_layout(QSpacerItem*, intptr_t);
int miqt_exec_callback_QSpacerItem_controlTypes(const QSpacerItem*, intptr_t);
void miqt_exec_callback_handle_release_QWidgetItem(intptr_t);
QSize* miqt_exec_callback_QWidgetItem_sizeHint(const QWidgetItem*, intptr_t);
QSize* miqt_exec_callback_QWidgetItem_minimumSize(const QWidgetItem*, intptr_t);
QSize* miqt_exec_callback_QWidgetItem_maximumSize(const QWidgetItem*, intptr_t);
int miqt_exec_callback_QWidgetItem_expandingDirections(const QWidgetItem*, intptr_t);
bool miqt_exec_callback_QWidgetItem_isEmpty(const QWidgetItem*, intptr_t);
void miqt_exec_callback_QWidgetItem_setGeometry(QWidgetItem*, intptr_t, QRect*);
QRect* miqt_exec_callback_QWidgetItem_geometry(const QWidgetItem*, intptr_t);
QWidget* miqt_exec_callback_QWidgetItem_widget(QWidgetItem*, intptr_t);
bool miqt_exec_callback_QWidgetItem_hasHeightForWidth(const QWidgetItem*, intptr_t);
int miqt_exec_callback_QWidgetItem_heightForWidth(const QWidgetItem*, intptr_t, int);
int miqt_exec_callback_QWidgetItem_controlTypes(const QWidgetItem*, intptr_t);
int miqt_exec_callback_QWidgetItem_minimumHeightForWidth(const QWidgetItem*, intptr_t, int);
void miqt_exec_callback_QWidgetItem_invalidate(QWidgetItem*, intptr_t);
QLayout* miqt_exec_callback_QWidgetItem_layout(QWidgetItem*, intptr_t);
QSpacerItem* miqt_exec_callback_QWidgetItem_spacerItem(QWidgetItem*, intptr_t);
void miqt_exec_callback_handle_release_QWidgetItemV2(intptr_t);
QSize* miqt_exec_callback_QWidgetItemV2_sizeHint(const QWidgetItemV2*, intptr_t);
QSize* miqt_exec_callback_QWidgetItemV2_minimumSize(const QWidgetItemV2*, intptr_t);
QSize* miqt_exec_callback_QWidgetItemV2_maximumSize(const QWidgetItemV2*, intptr_t);
int miqt_exec_callback_QWidgetItemV2_heightForWidth(const QWidgetItemV2*, intptr_t, int);
int miqt_exec_callback_QWidgetItemV2_expandingDirections(const QWidgetItemV2*, intptr_t);
bool miqt_exec_callback_QWidgetItemV2_isEmpty(const QWidgetItemV2*, intptr_t);
void miqt_exec_callback_QWidgetItemV2_setGeometry(QWidgetItemV2*, intptr_t, QRect*);
QRect* miqt_exec_callback_QWidgetItemV2_geometry(const QWidgetItemV2*, intptr_t);
QWidget* miqt_exec_callback_QWidgetItemV2_widget(QWidgetItemV2*, intptr_t);
bool miqt_exec_callback_QWidgetItemV2_hasHeightForWidth(const QWidgetItemV2*, intptr_t);
int miqt_exec_callback_QWidgetItemV2_controlTypes(const QWidgetItemV2*, intptr_t);
int miqt_exec_callback_QWidgetItemV2_minimumHeightForWidth(const QWidgetItemV2*, intptr_t, int);
void miqt_exec_callback_QWidgetItemV2_invalidate(QWidgetItemV2*, intptr_t);
QLayout* miqt_exec_callback_QWidgetItemV2_layout(QWidgetItemV2*, intptr_t);
QSpacerItem* miqt_exec_callback_QWidgetItemV2_spacerItem(QWidgetItemV2*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQLayoutItem final : public QLayoutItem {
public:

	MiqtVirtualQLayoutItem(): QLayoutItem() {}
	MiqtVirtualQLayoutItem(const QLayoutItem& param1): QLayoutItem(param1) {}
	MiqtVirtualQLayoutItem(Qt::Alignment alignment): QLayoutItem(alignment) {}

	virtual ~MiqtVirtualQLayoutItem() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLayoutItem> handle__sizeHint;
	bool owns_return__sizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (!handle__sizeHint) {
			return QSize(); // Pure virtual, there is no base we can call
		}

		QSize* callback_return_value = miqt_exec_callback_QLayoutItem_sizeHint(this, handle__sizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__sizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLayoutItem> handle__minimumSize;
	bool owns_return__minimumSize = false;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSize() const override {
		if (!handle__minimumSize) {
			return QSize(); // Pure virtual, there is no base we can call
		}

		QSize* callback_return_value = miqt_exec_callback_QLayoutItem_minimumSize(this, handle__minimumSize.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__minimumSize) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLayoutItem> handle__maximumSize;
	bool owns_return__maximumSize = false;

	// Subclass to allow providing a Go implementation
	virtual QSize maximumSize() const override {
		if (!handle__maximumSize) {
			return QSize(); // Pure virtual, there is no base we can call
		}

		QSize* callback_return_value = miqt_exec_callback_QLayoutItem_maximumSize(this, handle__maximumSize.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__maximumSize) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLayoutItem> handle__expandingDirections;

	// Subclass to allow providing a Go implementation
	virtual Qt::Orientations expandingDirections() const override {
		if (!handle__expandingDirections) {
			return Qt::Orientations(); // Pure virtual, there is no base we can call
		}

		int callback_return_value = miqt_exec_callback_QLayoutItem_expandingDirections(this, handle__expandingDirections.value());
		return static_cast<Qt::Orientations>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLayoutItem> handle__setGeometry;

	// Subclass to allow providing a Go implementation
	virtual void setGeometry(const QRect& geometry) override {
		if (!handle__setGeometry) {
			return; // Pure virtual, there is no base we can call
		}

		const QRect& geometry_ret = geometry;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&geometry_ret);
		miqt_exec_callback_QLayoutItem_setGeometry(this, handle__setGeometry.value(), sigval1);

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLayoutItem> handle__geometry;
	bool owns_return__geometry = false;

	// Subclass to allow providing a Go implementation
	virtual QRect geometry() const override {
		if (!handle__geometry) {
			return QRect(); // Pure virtual, there is no base we can call
		}

		QRect* callback_return_value = miqt_exec_callback_QLayoutItem_geometry(this, handle__geometry.value());
		std::unique_ptr<QRect> callback_return_value_owner;
		if (owns_return__geometry) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLayoutItem> handle__isEmpty;

	// Subclass to allow providing a Go implementation
	virtual bool isEmpty() const override {
		if (!handle__isEmpty) {
			return false; // Pure virtual, there is no base we can call
		}

		bool callback_return_value = miqt_exec_callback_QLayoutItem_isEmpty(this, handle__isEmpty.value());
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLayoutItem> handle__hasHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (!handle__hasHeightForWidth) {
			return QLayoutItem::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QLayoutItem_hasHeightForWidth(this, handle__hasHeightForWidth.value());
		return callback_return_value;
	}

	friend bool QLayoutItem_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLayoutItem> handle__heightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (!handle__heightForWidth) {
			return QLayoutItem::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QLayoutItem_heightForWidth(this, handle__heightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QLayoutItem_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLayoutItem> handle__minimumHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int minimumHeightForWidth(int param1) const override {
		if (!handle__minimumHeightForWidth) {
			return QLayoutItem::minimumHeightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QLayoutItem_minimumHeightForWidth(this, handle__minimumHeightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QLayoutItem_virtualbase_minimumHeightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLayoutItem> handle__invalidate;

	// Subclass to allow providing a Go implementation
	virtual void invalidate() override {
		if (!handle__invalidate) {
			QLayoutItem::invalidate();
			return;
		}

		miqt_exec_callback_QLayoutItem_invalidate(this, handle__invalidate.value());

	}

	friend void QLayoutItem_virtualbase_invalidate(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLayoutItem> handle__widget;

	// Subclass to allow providing a Go implementation
	virtual QWidget* widget() override {
		if (!handle__widget) {
			return QLayoutItem::widget();
		}

		QWidget* callback_return_value = miqt_exec_callback_QLayoutItem_widget(this, handle__widget.value());
		return callback_return_value;
	}

	friend QWidget* QLayoutItem_virtualbase_widget(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLayoutItem> handle__layout;

	// Subclass to allow providing a Go implementation
	virtual QLayout* layout() override {
		if (!handle__layout) {
			return QLayoutItem::layout();
		}

		QLayout* callback_return_value = miqt_exec_callback_QLayoutItem_layout(this, handle__layout.value());
		return callback_return_value;
	}

	friend QLayout* QLayoutItem_virtualbase_layout(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLayoutItem> handle__spacerItem;

	// Subclass to allow providing a Go implementation
	virtual QSpacerItem* spacerItem() override {
		if (!handle__spacerItem) {
			return QLayoutItem::spacerItem();
		}

		QSpacerItem* callback_return_value = miqt_exec_callback_QLayoutItem_spacerItem(this, handle__spacerItem.value());
		return callback_return_value;
	}

	friend QSpacerItem* QLayoutItem_virtualbase_spacerItem(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLayoutItem> handle__controlTypes;

	// Subclass to allow providing a Go implementation
	virtual QSizePolicy::ControlTypes controlTypes() const override {
		if (!handle__controlTypes) {
			return QLayoutItem::controlTypes();
		}

		int callback_return_value = miqt_exec_callback_QLayoutItem_controlTypes(this, handle__controlTypes.value());
		return static_cast<QSizePolicy::ControlTypes>(callback_return_value);
	}

	friend int QLayoutItem_virtualbase_controlTypes(const void* self);

};

QLayoutItem* QLayoutItem_new() {
	return new (std::nothrow) MiqtVirtualQLayoutItem();
}

QLayoutItem* QLayoutItem_new2(QLayoutItem* param1) {
	return new (std::nothrow) MiqtVirtualQLayoutItem(*param1);
}

QLayoutItem* QLayoutItem_new3(int alignment) {
	return new (std::nothrow) MiqtVirtualQLayoutItem(static_cast<Qt::Alignment>(alignment));
}

QSize* QLayoutItem_sizeHint(const QLayoutItem* self) {
	return new QSize(self->sizeHint());
}

QSize* QLayoutItem_minimumSize(const QLayoutItem* self) {
	return new QSize(self->minimumSize());
}

QSize* QLayoutItem_maximumSize(const QLayoutItem* self) {
	return new QSize(self->maximumSize());
}

int QLayoutItem_expandingDirections(const QLayoutItem* self) {
	Qt::Orientations _ret = self->expandingDirections();
	return static_cast<int>(_ret);
}

void QLayoutItem_setGeometry(QLayoutItem* self, QRect* geometry) {
	self->setGeometry(*geometry);
}

QRect* QLayoutItem_geometry(const QLayoutItem* self) {
	return new QRect(self->geometry());
}

bool QLayoutItem_isEmpty(const QLayoutItem* self) {
	return self->isEmpty();
}

bool QLayoutItem_hasHeightForWidth(const QLayoutItem* self) {
	return self->hasHeightForWidth();
}

int QLayoutItem_heightForWidth(const QLayoutItem* self, int param1) {
	return self->heightForWidth(static_cast<int>(param1));
}

int QLayoutItem_minimumHeightForWidth(const QLayoutItem* self, int param1) {
	return self->minimumHeightForWidth(static_cast<int>(param1));
}

void QLayoutItem_invalidate(QLayoutItem* self) {
	self->invalidate();
}

QWidget* QLayoutItem_widget(QLayoutItem* self) {
	return self->widget();
}

QLayout* QLayoutItem_layout(QLayoutItem* self) {
	return self->layout();
}

QSpacerItem* QLayoutItem_spacerItem(QLayoutItem* self) {
	return self->spacerItem();
}

int QLayoutItem_alignment(const QLayoutItem* self) {
	Qt::Alignment _ret = self->alignment();
	return static_cast<int>(_ret);
}

void QLayoutItem_setAlignment(QLayoutItem* self, int a) {
	self->setAlignment(static_cast<Qt::Alignment>(a));
}

int QLayoutItem_controlTypes(const QLayoutItem* self) {
	QSizePolicy::ControlTypes _ret = self->controlTypes();
	return static_cast<int>(_ret);
}

void QLayoutItem_operatorAssign(QLayoutItem* self, QLayoutItem* param1) {
	self->operator=(*param1);
}

bool QLayoutItem_override_virtual_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLayoutItem> slot_handle(slot);
	MiqtVirtualQLayoutItem* self_cast = dynamic_cast<MiqtVirtualQLayoutItem*>( (QLayoutItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = false;
	return true;
}

bool QLayoutItem_override_virtual_owned_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLayoutItem> slot_handle(slot);
	MiqtVirtualQLayoutItem* self_cast = dynamic_cast<MiqtVirtualQLayoutItem*>( (QLayoutItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = true;
	return true;
}

bool QLayoutItem_override_virtual_minimumSize(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLayoutItem> slot_handle(slot);
	MiqtVirtualQLayoutItem* self_cast = dynamic_cast<MiqtVirtualQLayoutItem*>( (QLayoutItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSize = std::move(slot_handle);
	self_cast->owns_return__minimumSize = false;
	return true;
}

bool QLayoutItem_override_virtual_owned_minimumSize(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLayoutItem> slot_handle(slot);
	MiqtVirtualQLayoutItem* self_cast = dynamic_cast<MiqtVirtualQLayoutItem*>( (QLayoutItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSize = std::move(slot_handle);
	self_cast->owns_return__minimumSize = true;
	return true;
}

bool QLayoutItem_override_virtual_maximumSize(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLayoutItem> slot_handle(slot);
	MiqtVirtualQLayoutItem* self_cast = dynamic_cast<MiqtVirtualQLayoutItem*>( (QLayoutItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__maximumSize = std::move(slot_handle);
	self_cast->owns_return__maximumSize = false;
	return true;
}

bool QLayoutItem_override_virtual_owned_maximumSize(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLayoutItem> slot_handle(slot);
	MiqtVirtualQLayoutItem* self_cast = dynamic_cast<MiqtVirtualQLayoutItem*>( (QLayoutItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__maximumSize = std::move(slot_handle);
	self_cast->owns_return__maximumSize = true;
	return true;
}

bool QLayoutItem_override_virtual_expandingDirections(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLayoutItem> slot_handle(slot);
	MiqtVirtualQLayoutItem* self_cast = dynamic_cast<MiqtVirtualQLayoutItem*>( (QLayoutItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__expandingDirections = std::move(slot_handle);
	return true;
}

bool QLayoutItem_override_virtual_setGeometry(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLayoutItem> slot_handle(slot);
	MiqtVirtualQLayoutItem* self_cast = dynamic_cast<MiqtVirtualQLayoutItem*>( (QLayoutItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setGeometry = std::move(slot_handle);
	return true;
}

bool QLayoutItem_override_virtual_geometry(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLayoutItem> slot_handle(slot);
	MiqtVirtualQLayoutItem* self_cast = dynamic_cast<MiqtVirtualQLayoutItem*>( (QLayoutItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__geometry = std::move(slot_handle);
	self_cast->owns_return__geometry = false;
	return true;
}

bool QLayoutItem_override_virtual_owned_geometry(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLayoutItem> slot_handle(slot);
	MiqtVirtualQLayoutItem* self_cast = dynamic_cast<MiqtVirtualQLayoutItem*>( (QLayoutItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__geometry = std::move(slot_handle);
	self_cast->owns_return__geometry = true;
	return true;
}

bool QLayoutItem_override_virtual_isEmpty(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLayoutItem> slot_handle(slot);
	MiqtVirtualQLayoutItem* self_cast = dynamic_cast<MiqtVirtualQLayoutItem*>( (QLayoutItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isEmpty = std::move(slot_handle);
	return true;
}

bool QLayoutItem_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLayoutItem> slot_handle(slot);
	MiqtVirtualQLayoutItem* self_cast = dynamic_cast<MiqtVirtualQLayoutItem*>( (QLayoutItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = std::move(slot_handle);
	return true;
}

bool QLayoutItem_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQLayoutItem*>(self)->QLayoutItem::hasHeightForWidth();
}

bool QLayoutItem_override_virtual_heightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLayoutItem> slot_handle(slot);
	MiqtVirtualQLayoutItem* self_cast = dynamic_cast<MiqtVirtualQLayoutItem*>( (QLayoutItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = std::move(slot_handle);
	return true;
}

int QLayoutItem_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQLayoutItem*>(self)->QLayoutItem::heightForWidth(static_cast<int>(param1));
}

bool QLayoutItem_override_virtual_minimumHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLayoutItem> slot_handle(slot);
	MiqtVirtualQLayoutItem* self_cast = dynamic_cast<MiqtVirtualQLayoutItem*>( (QLayoutItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumHeightForWidth = std::move(slot_handle);
	return true;
}

int QLayoutItem_virtualbase_minimumHeightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQLayoutItem*>(self)->QLayoutItem::minimumHeightForWidth(static_cast<int>(param1));
}

bool QLayoutItem_override_virtual_invalidate(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLayoutItem> slot_handle(slot);
	MiqtVirtualQLayoutItem* self_cast = dynamic_cast<MiqtVirtualQLayoutItem*>( (QLayoutItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__invalidate = std::move(slot_handle);
	return true;
}

void QLayoutItem_virtualbase_invalidate(void* self) {
	static_cast<MiqtVirtualQLayoutItem*>(self)->QLayoutItem::invalidate();
}

bool QLayoutItem_override_virtual_widget(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLayoutItem> slot_handle(slot);
	MiqtVirtualQLayoutItem* self_cast = dynamic_cast<MiqtVirtualQLayoutItem*>( (QLayoutItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widget = std::move(slot_handle);
	return true;
}

QWidget* QLayoutItem_virtualbase_widget(void* self) {
	return static_cast<MiqtVirtualQLayoutItem*>(self)->QLayoutItem::widget();
}

bool QLayoutItem_override_virtual_layout(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLayoutItem> slot_handle(slot);
	MiqtVirtualQLayoutItem* self_cast = dynamic_cast<MiqtVirtualQLayoutItem*>( (QLayoutItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__layout = std::move(slot_handle);
	return true;
}

QLayout* QLayoutItem_virtualbase_layout(void* self) {
	return static_cast<MiqtVirtualQLayoutItem*>(self)->QLayoutItem::layout();
}

bool QLayoutItem_override_virtual_spacerItem(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLayoutItem> slot_handle(slot);
	MiqtVirtualQLayoutItem* self_cast = dynamic_cast<MiqtVirtualQLayoutItem*>( (QLayoutItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__spacerItem = std::move(slot_handle);
	return true;
}

QSpacerItem* QLayoutItem_virtualbase_spacerItem(void* self) {
	return static_cast<MiqtVirtualQLayoutItem*>(self)->QLayoutItem::spacerItem();
}

bool QLayoutItem_override_virtual_controlTypes(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLayoutItem> slot_handle(slot);
	MiqtVirtualQLayoutItem* self_cast = dynamic_cast<MiqtVirtualQLayoutItem*>( (QLayoutItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__controlTypes = std::move(slot_handle);
	return true;
}

int QLayoutItem_virtualbase_controlTypes(const void* self) {
	QSizePolicy::ControlTypes _ret = static_cast<const MiqtVirtualQLayoutItem*>(self)->QLayoutItem::controlTypes();
	return static_cast<int>(_ret);
}

void QLayoutItem_delete(QLayoutItem* self) {
	delete self;
}

class MiqtVirtualQSpacerItem final : public QSpacerItem {
public:

	MiqtVirtualQSpacerItem(int w, int h): QSpacerItem(w, h) {}
	MiqtVirtualQSpacerItem(const QSpacerItem& param1): QSpacerItem(param1) {}
	MiqtVirtualQSpacerItem(int w, int h, QSizePolicy::Policy hData): QSpacerItem(w, h, hData) {}
	MiqtVirtualQSpacerItem(int w, int h, QSizePolicy::Policy hData, QSizePolicy::Policy vData): QSpacerItem(w, h, hData, vData) {}

	virtual ~MiqtVirtualQSpacerItem() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSpacerItem> handle__sizeHint;
	bool owns_return__sizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (!handle__sizeHint) {
			return QSpacerItem::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QSpacerItem_sizeHint(this, handle__sizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__sizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QSpacerItem_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSpacerItem> handle__minimumSize;
	bool owns_return__minimumSize = false;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSize() const override {
		if (!handle__minimumSize) {
			return QSpacerItem::minimumSize();
		}

		QSize* callback_return_value = miqt_exec_callback_QSpacerItem_minimumSize(this, handle__minimumSize.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__minimumSize) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QSpacerItem_virtualbase_minimumSize(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSpacerItem> handle__maximumSize;
	bool owns_return__maximumSize = false;

	// Subclass to allow providing a Go implementation
	virtual QSize maximumSize() const override {
		if (!handle__maximumSize) {
			return QSpacerItem::maximumSize();
		}

		QSize* callback_return_value = miqt_exec_callback_QSpacerItem_maximumSize(this, handle__maximumSize.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__maximumSize) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QSpacerItem_virtualbase_maximumSize(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSpacerItem> handle__expandingDirections;

	// Subclass to allow providing a Go implementation
	virtual Qt::Orientations expandingDirections() const override {
		if (!handle__expandingDirections) {
			return QSpacerItem::expandingDirections();
		}

		int callback_return_value = miqt_exec_callback_QSpacerItem_expandingDirections(this, handle__expandingDirections.value());
		return static_cast<Qt::Orientations>(callback_return_value);
	}

	friend int QSpacerItem_virtualbase_expandingDirections(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSpacerItem> handle__isEmpty;

	// Subclass to allow providing a Go implementation
	virtual bool isEmpty() const override {
		if (!handle__isEmpty) {
			return QSpacerItem::isEmpty();
		}

		bool callback_return_value = miqt_exec_callback_QSpacerItem_isEmpty(this, handle__isEmpty.value());
		return callback_return_value;
	}

	friend bool QSpacerItem_virtualbase_isEmpty(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSpacerItem> handle__setGeometry;

	// Subclass to allow providing a Go implementation
	virtual void setGeometry(const QRect& geometry) override {
		if (!handle__setGeometry) {
			QSpacerItem::setGeometry(geometry);
			return;
		}

		const QRect& geometry_ret = geometry;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&geometry_ret);
		miqt_exec_callback_QSpacerItem_setGeometry(this, handle__setGeometry.value(), sigval1);

	}

	friend void QSpacerItem_virtualbase_setGeometry(void* self, QRect* geometry);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSpacerItem> handle__geometry;
	bool owns_return__geometry = false;

	// Subclass to allow providing a Go implementation
	virtual QRect geometry() const override {
		if (!handle__geometry) {
			return QSpacerItem::geometry();
		}

		QRect* callback_return_value = miqt_exec_callback_QSpacerItem_geometry(this, handle__geometry.value());
		std::unique_ptr<QRect> callback_return_value_owner;
		if (owns_return__geometry) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QRect* QSpacerItem_virtualbase_geometry(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSpacerItem> handle__spacerItem;

	// Subclass to allow providing a Go implementation
	virtual QSpacerItem* spacerItem() override {
		if (!handle__spacerItem) {
			return QSpacerItem::spacerItem();
		}

		QSpacerItem* callback_return_value = miqt_exec_callback_QSpacerItem_spacerItem(this, handle__spacerItem.value());
		return callback_return_value;
	}

	friend QSpacerItem* QSpacerItem_virtualbase_spacerItem(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSpacerItem> handle__hasHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (!handle__hasHeightForWidth) {
			return QSpacerItem::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QSpacerItem_hasHeightForWidth(this, handle__hasHeightForWidth.value());
		return callback_return_value;
	}

	friend bool QSpacerItem_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSpacerItem> handle__heightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (!handle__heightForWidth) {
			return QSpacerItem::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QSpacerItem_heightForWidth(this, handle__heightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QSpacerItem_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSpacerItem> handle__minimumHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int minimumHeightForWidth(int param1) const override {
		if (!handle__minimumHeightForWidth) {
			return QSpacerItem::minimumHeightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QSpacerItem_minimumHeightForWidth(this, handle__minimumHeightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QSpacerItem_virtualbase_minimumHeightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSpacerItem> handle__invalidate;

	// Subclass to allow providing a Go implementation
	virtual void invalidate() override {
		if (!handle__invalidate) {
			QSpacerItem::invalidate();
			return;
		}

		miqt_exec_callback_QSpacerItem_invalidate(this, handle__invalidate.value());

	}

	friend void QSpacerItem_virtualbase_invalidate(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSpacerItem> handle__widget;

	// Subclass to allow providing a Go implementation
	virtual QWidget* widget() override {
		if (!handle__widget) {
			return QSpacerItem::widget();
		}

		QWidget* callback_return_value = miqt_exec_callback_QSpacerItem_widget(this, handle__widget.value());
		return callback_return_value;
	}

	friend QWidget* QSpacerItem_virtualbase_widget(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSpacerItem> handle__layout;

	// Subclass to allow providing a Go implementation
	virtual QLayout* layout() override {
		if (!handle__layout) {
			return QSpacerItem::layout();
		}

		QLayout* callback_return_value = miqt_exec_callback_QSpacerItem_layout(this, handle__layout.value());
		return callback_return_value;
	}

	friend QLayout* QSpacerItem_virtualbase_layout(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSpacerItem> handle__controlTypes;

	// Subclass to allow providing a Go implementation
	virtual QSizePolicy::ControlTypes controlTypes() const override {
		if (!handle__controlTypes) {
			return QSpacerItem::controlTypes();
		}

		int callback_return_value = miqt_exec_callback_QSpacerItem_controlTypes(this, handle__controlTypes.value());
		return static_cast<QSizePolicy::ControlTypes>(callback_return_value);
	}

	friend int QSpacerItem_virtualbase_controlTypes(const void* self);

};

QSpacerItem* QSpacerItem_new(int w, int h) {
	return new (std::nothrow) MiqtVirtualQSpacerItem(static_cast<int>(w), static_cast<int>(h));
}

QSpacerItem* QSpacerItem_new2(QSpacerItem* param1) {
	return new (std::nothrow) MiqtVirtualQSpacerItem(*param1);
}

QSpacerItem* QSpacerItem_new3(int w, int h, int hData) {
	return new (std::nothrow) MiqtVirtualQSpacerItem(static_cast<int>(w), static_cast<int>(h), static_cast<QSizePolicy::Policy>(hData));
}

QSpacerItem* QSpacerItem_new4(int w, int h, int hData, int vData) {
	return new (std::nothrow) MiqtVirtualQSpacerItem(static_cast<int>(w), static_cast<int>(h), static_cast<QSizePolicy::Policy>(hData), static_cast<QSizePolicy::Policy>(vData));
}

void QSpacerItem_virtbase(QSpacerItem* src, QLayoutItem** outptr_QLayoutItem) {
	*outptr_QLayoutItem = static_cast<QLayoutItem*>(src);
}

void QSpacerItem_changeSize(QSpacerItem* self, int w, int h) {
	self->changeSize(static_cast<int>(w), static_cast<int>(h));
}

QSize* QSpacerItem_sizeHint(const QSpacerItem* self) {
	return new QSize(self->sizeHint());
}

QSize* QSpacerItem_minimumSize(const QSpacerItem* self) {
	return new QSize(self->minimumSize());
}

QSize* QSpacerItem_maximumSize(const QSpacerItem* self) {
	return new QSize(self->maximumSize());
}

int QSpacerItem_expandingDirections(const QSpacerItem* self) {
	Qt::Orientations _ret = self->expandingDirections();
	return static_cast<int>(_ret);
}

bool QSpacerItem_isEmpty(const QSpacerItem* self) {
	return self->isEmpty();
}

void QSpacerItem_setGeometry(QSpacerItem* self, QRect* geometry) {
	self->setGeometry(*geometry);
}

QRect* QSpacerItem_geometry(const QSpacerItem* self) {
	return new QRect(self->geometry());
}

QSpacerItem* QSpacerItem_spacerItem(QSpacerItem* self) {
	return self->spacerItem();
}

QSizePolicy* QSpacerItem_sizePolicy(const QSpacerItem* self) {
	return new QSizePolicy(self->sizePolicy());
}

void QSpacerItem_operatorAssign(QSpacerItem* self, QSpacerItem* param1) {
	self->operator=(*param1);
}

void QSpacerItem_changeSize2(QSpacerItem* self, int w, int h, int hData) {
	self->changeSize(static_cast<int>(w), static_cast<int>(h), static_cast<QSizePolicy::Policy>(hData));
}

void QSpacerItem_changeSize3(QSpacerItem* self, int w, int h, int hData, int vData) {
	self->changeSize(static_cast<int>(w), static_cast<int>(h), static_cast<QSizePolicy::Policy>(hData), static_cast<QSizePolicy::Policy>(vData));
}

bool QSpacerItem_override_virtual_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSpacerItem> slot_handle(slot);
	MiqtVirtualQSpacerItem* self_cast = dynamic_cast<MiqtVirtualQSpacerItem*>( (QSpacerItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = false;
	return true;
}

bool QSpacerItem_override_virtual_owned_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSpacerItem> slot_handle(slot);
	MiqtVirtualQSpacerItem* self_cast = dynamic_cast<MiqtVirtualQSpacerItem*>( (QSpacerItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = true;
	return true;
}

QSize* QSpacerItem_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQSpacerItem*>(self)->QSpacerItem::sizeHint());
}

bool QSpacerItem_override_virtual_minimumSize(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSpacerItem> slot_handle(slot);
	MiqtVirtualQSpacerItem* self_cast = dynamic_cast<MiqtVirtualQSpacerItem*>( (QSpacerItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSize = std::move(slot_handle);
	self_cast->owns_return__minimumSize = false;
	return true;
}

bool QSpacerItem_override_virtual_owned_minimumSize(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSpacerItem> slot_handle(slot);
	MiqtVirtualQSpacerItem* self_cast = dynamic_cast<MiqtVirtualQSpacerItem*>( (QSpacerItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSize = std::move(slot_handle);
	self_cast->owns_return__minimumSize = true;
	return true;
}

QSize* QSpacerItem_virtualbase_minimumSize(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQSpacerItem*>(self)->QSpacerItem::minimumSize());
}

bool QSpacerItem_override_virtual_maximumSize(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSpacerItem> slot_handle(slot);
	MiqtVirtualQSpacerItem* self_cast = dynamic_cast<MiqtVirtualQSpacerItem*>( (QSpacerItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__maximumSize = std::move(slot_handle);
	self_cast->owns_return__maximumSize = false;
	return true;
}

bool QSpacerItem_override_virtual_owned_maximumSize(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSpacerItem> slot_handle(slot);
	MiqtVirtualQSpacerItem* self_cast = dynamic_cast<MiqtVirtualQSpacerItem*>( (QSpacerItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__maximumSize = std::move(slot_handle);
	self_cast->owns_return__maximumSize = true;
	return true;
}

QSize* QSpacerItem_virtualbase_maximumSize(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQSpacerItem*>(self)->QSpacerItem::maximumSize());
}

bool QSpacerItem_override_virtual_expandingDirections(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSpacerItem> slot_handle(slot);
	MiqtVirtualQSpacerItem* self_cast = dynamic_cast<MiqtVirtualQSpacerItem*>( (QSpacerItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__expandingDirections = std::move(slot_handle);
	return true;
}

int QSpacerItem_virtualbase_expandingDirections(const void* self) {
	Qt::Orientations _ret = static_cast<const MiqtVirtualQSpacerItem*>(self)->QSpacerItem::expandingDirections();
	return static_cast<int>(_ret);
}

bool QSpacerItem_override_virtual_isEmpty(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSpacerItem> slot_handle(slot);
	MiqtVirtualQSpacerItem* self_cast = dynamic_cast<MiqtVirtualQSpacerItem*>( (QSpacerItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isEmpty = std::move(slot_handle);
	return true;
}

bool QSpacerItem_virtualbase_isEmpty(const void* self) {
	return static_cast<const MiqtVirtualQSpacerItem*>(self)->QSpacerItem::isEmpty();
}

bool QSpacerItem_override_virtual_setGeometry(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSpacerItem> slot_handle(slot);
	MiqtVirtualQSpacerItem* self_cast = dynamic_cast<MiqtVirtualQSpacerItem*>( (QSpacerItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setGeometry = std::move(slot_handle);
	return true;
}

void QSpacerItem_virtualbase_setGeometry(void* self, QRect* geometry) {
	static_cast<MiqtVirtualQSpacerItem*>(self)->QSpacerItem::setGeometry(*geometry);
}

bool QSpacerItem_override_virtual_geometry(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSpacerItem> slot_handle(slot);
	MiqtVirtualQSpacerItem* self_cast = dynamic_cast<MiqtVirtualQSpacerItem*>( (QSpacerItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__geometry = std::move(slot_handle);
	self_cast->owns_return__geometry = false;
	return true;
}

bool QSpacerItem_override_virtual_owned_geometry(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSpacerItem> slot_handle(slot);
	MiqtVirtualQSpacerItem* self_cast = dynamic_cast<MiqtVirtualQSpacerItem*>( (QSpacerItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__geometry = std::move(slot_handle);
	self_cast->owns_return__geometry = true;
	return true;
}

QRect* QSpacerItem_virtualbase_geometry(const void* self) {
	return new QRect(static_cast<const MiqtVirtualQSpacerItem*>(self)->QSpacerItem::geometry());
}

bool QSpacerItem_override_virtual_spacerItem(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSpacerItem> slot_handle(slot);
	MiqtVirtualQSpacerItem* self_cast = dynamic_cast<MiqtVirtualQSpacerItem*>( (QSpacerItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__spacerItem = std::move(slot_handle);
	return true;
}

QSpacerItem* QSpacerItem_virtualbase_spacerItem(void* self) {
	return static_cast<MiqtVirtualQSpacerItem*>(self)->QSpacerItem::spacerItem();
}

bool QSpacerItem_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSpacerItem> slot_handle(slot);
	MiqtVirtualQSpacerItem* self_cast = dynamic_cast<MiqtVirtualQSpacerItem*>( (QSpacerItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = std::move(slot_handle);
	return true;
}

bool QSpacerItem_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQSpacerItem*>(self)->QSpacerItem::hasHeightForWidth();
}

bool QSpacerItem_override_virtual_heightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSpacerItem> slot_handle(slot);
	MiqtVirtualQSpacerItem* self_cast = dynamic_cast<MiqtVirtualQSpacerItem*>( (QSpacerItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = std::move(slot_handle);
	return true;
}

int QSpacerItem_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQSpacerItem*>(self)->QSpacerItem::heightForWidth(static_cast<int>(param1));
}

bool QSpacerItem_override_virtual_minimumHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSpacerItem> slot_handle(slot);
	MiqtVirtualQSpacerItem* self_cast = dynamic_cast<MiqtVirtualQSpacerItem*>( (QSpacerItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumHeightForWidth = std::move(slot_handle);
	return true;
}

int QSpacerItem_virtualbase_minimumHeightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQSpacerItem*>(self)->QSpacerItem::minimumHeightForWidth(static_cast<int>(param1));
}

bool QSpacerItem_override_virtual_invalidate(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSpacerItem> slot_handle(slot);
	MiqtVirtualQSpacerItem* self_cast = dynamic_cast<MiqtVirtualQSpacerItem*>( (QSpacerItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__invalidate = std::move(slot_handle);
	return true;
}

void QSpacerItem_virtualbase_invalidate(void* self) {
	static_cast<MiqtVirtualQSpacerItem*>(self)->QSpacerItem::invalidate();
}

bool QSpacerItem_override_virtual_widget(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSpacerItem> slot_handle(slot);
	MiqtVirtualQSpacerItem* self_cast = dynamic_cast<MiqtVirtualQSpacerItem*>( (QSpacerItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widget = std::move(slot_handle);
	return true;
}

QWidget* QSpacerItem_virtualbase_widget(void* self) {
	return static_cast<MiqtVirtualQSpacerItem*>(self)->QSpacerItem::widget();
}

bool QSpacerItem_override_virtual_layout(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSpacerItem> slot_handle(slot);
	MiqtVirtualQSpacerItem* self_cast = dynamic_cast<MiqtVirtualQSpacerItem*>( (QSpacerItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__layout = std::move(slot_handle);
	return true;
}

QLayout* QSpacerItem_virtualbase_layout(void* self) {
	return static_cast<MiqtVirtualQSpacerItem*>(self)->QSpacerItem::layout();
}

bool QSpacerItem_override_virtual_controlTypes(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSpacerItem> slot_handle(slot);
	MiqtVirtualQSpacerItem* self_cast = dynamic_cast<MiqtVirtualQSpacerItem*>( (QSpacerItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__controlTypes = std::move(slot_handle);
	return true;
}

int QSpacerItem_virtualbase_controlTypes(const void* self) {
	QSizePolicy::ControlTypes _ret = static_cast<const MiqtVirtualQSpacerItem*>(self)->QSpacerItem::controlTypes();
	return static_cast<int>(_ret);
}

void QSpacerItem_delete(QSpacerItem* self) {
	delete self;
}

class MiqtVirtualQWidgetItem final : public QWidgetItem {
public:

	MiqtVirtualQWidgetItem(QWidget* w): QWidgetItem(w) {}

	virtual ~MiqtVirtualQWidgetItem() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItem> handle__sizeHint;
	bool owns_return__sizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (!handle__sizeHint) {
			return QWidgetItem::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QWidgetItem_sizeHint(this, handle__sizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__sizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QWidgetItem_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItem> handle__minimumSize;
	bool owns_return__minimumSize = false;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSize() const override {
		if (!handle__minimumSize) {
			return QWidgetItem::minimumSize();
		}

		QSize* callback_return_value = miqt_exec_callback_QWidgetItem_minimumSize(this, handle__minimumSize.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__minimumSize) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QWidgetItem_virtualbase_minimumSize(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItem> handle__maximumSize;
	bool owns_return__maximumSize = false;

	// Subclass to allow providing a Go implementation
	virtual QSize maximumSize() const override {
		if (!handle__maximumSize) {
			return QWidgetItem::maximumSize();
		}

		QSize* callback_return_value = miqt_exec_callback_QWidgetItem_maximumSize(this, handle__maximumSize.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__maximumSize) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QWidgetItem_virtualbase_maximumSize(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItem> handle__expandingDirections;

	// Subclass to allow providing a Go implementation
	virtual Qt::Orientations expandingDirections() const override {
		if (!handle__expandingDirections) {
			return QWidgetItem::expandingDirections();
		}

		int callback_return_value = miqt_exec_callback_QWidgetItem_expandingDirections(this, handle__expandingDirections.value());
		return static_cast<Qt::Orientations>(callback_return_value);
	}

	friend int QWidgetItem_virtualbase_expandingDirections(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItem> handle__isEmpty;

	// Subclass to allow providing a Go implementation
	virtual bool isEmpty() const override {
		if (!handle__isEmpty) {
			return QWidgetItem::isEmpty();
		}

		bool callback_return_value = miqt_exec_callback_QWidgetItem_isEmpty(this, handle__isEmpty.value());
		return callback_return_value;
	}

	friend bool QWidgetItem_virtualbase_isEmpty(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItem> handle__setGeometry;

	// Subclass to allow providing a Go implementation
	virtual void setGeometry(const QRect& geometry) override {
		if (!handle__setGeometry) {
			QWidgetItem::setGeometry(geometry);
			return;
		}

		const QRect& geometry_ret = geometry;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&geometry_ret);
		miqt_exec_callback_QWidgetItem_setGeometry(this, handle__setGeometry.value(), sigval1);

	}

	friend void QWidgetItem_virtualbase_setGeometry(void* self, QRect* geometry);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItem> handle__geometry;
	bool owns_return__geometry = false;

	// Subclass to allow providing a Go implementation
	virtual QRect geometry() const override {
		if (!handle__geometry) {
			return QWidgetItem::geometry();
		}

		QRect* callback_return_value = miqt_exec_callback_QWidgetItem_geometry(this, handle__geometry.value());
		std::unique_ptr<QRect> callback_return_value_owner;
		if (owns_return__geometry) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QRect* QWidgetItem_virtualbase_geometry(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItem> handle__widget;

	// Subclass to allow providing a Go implementation
	virtual QWidget* widget() override {
		if (!handle__widget) {
			return QWidgetItem::widget();
		}

		QWidget* callback_return_value = miqt_exec_callback_QWidgetItem_widget(this, handle__widget.value());
		return callback_return_value;
	}

	friend QWidget* QWidgetItem_virtualbase_widget(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItem> handle__hasHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (!handle__hasHeightForWidth) {
			return QWidgetItem::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QWidgetItem_hasHeightForWidth(this, handle__hasHeightForWidth.value());
		return callback_return_value;
	}

	friend bool QWidgetItem_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItem> handle__heightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (!handle__heightForWidth) {
			return QWidgetItem::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QWidgetItem_heightForWidth(this, handle__heightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QWidgetItem_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItem> handle__controlTypes;

	// Subclass to allow providing a Go implementation
	virtual QSizePolicy::ControlTypes controlTypes() const override {
		if (!handle__controlTypes) {
			return QWidgetItem::controlTypes();
		}

		int callback_return_value = miqt_exec_callback_QWidgetItem_controlTypes(this, handle__controlTypes.value());
		return static_cast<QSizePolicy::ControlTypes>(callback_return_value);
	}

	friend int QWidgetItem_virtualbase_controlTypes(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItem> handle__minimumHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int minimumHeightForWidth(int param1) const override {
		if (!handle__minimumHeightForWidth) {
			return QWidgetItem::minimumHeightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QWidgetItem_minimumHeightForWidth(this, handle__minimumHeightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QWidgetItem_virtualbase_minimumHeightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItem> handle__invalidate;

	// Subclass to allow providing a Go implementation
	virtual void invalidate() override {
		if (!handle__invalidate) {
			QWidgetItem::invalidate();
			return;
		}

		miqt_exec_callback_QWidgetItem_invalidate(this, handle__invalidate.value());

	}

	friend void QWidgetItem_virtualbase_invalidate(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItem> handle__layout;

	// Subclass to allow providing a Go implementation
	virtual QLayout* layout() override {
		if (!handle__layout) {
			return QWidgetItem::layout();
		}

		QLayout* callback_return_value = miqt_exec_callback_QWidgetItem_layout(this, handle__layout.value());
		return callback_return_value;
	}

	friend QLayout* QWidgetItem_virtualbase_layout(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItem> handle__spacerItem;

	// Subclass to allow providing a Go implementation
	virtual QSpacerItem* spacerItem() override {
		if (!handle__spacerItem) {
			return QWidgetItem::spacerItem();
		}

		QSpacerItem* callback_return_value = miqt_exec_callback_QWidgetItem_spacerItem(this, handle__spacerItem.value());
		return callback_return_value;
	}

	friend QSpacerItem* QWidgetItem_virtualbase_spacerItem(void* self);

};

QWidgetItem* QWidgetItem_new(QWidget* w) {
	return new (std::nothrow) MiqtVirtualQWidgetItem(w);
}

void QWidgetItem_virtbase(QWidgetItem* src, QLayoutItem** outptr_QLayoutItem) {
	*outptr_QLayoutItem = static_cast<QLayoutItem*>(src);
}

QSize* QWidgetItem_sizeHint(const QWidgetItem* self) {
	return new QSize(self->sizeHint());
}

QSize* QWidgetItem_minimumSize(const QWidgetItem* self) {
	return new QSize(self->minimumSize());
}

QSize* QWidgetItem_maximumSize(const QWidgetItem* self) {
	return new QSize(self->maximumSize());
}

int QWidgetItem_expandingDirections(const QWidgetItem* self) {
	Qt::Orientations _ret = self->expandingDirections();
	return static_cast<int>(_ret);
}

bool QWidgetItem_isEmpty(const QWidgetItem* self) {
	return self->isEmpty();
}

void QWidgetItem_setGeometry(QWidgetItem* self, QRect* geometry) {
	self->setGeometry(*geometry);
}

QRect* QWidgetItem_geometry(const QWidgetItem* self) {
	return new QRect(self->geometry());
}

QWidget* QWidgetItem_widget(QWidgetItem* self) {
	return self->widget();
}

bool QWidgetItem_hasHeightForWidth(const QWidgetItem* self) {
	return self->hasHeightForWidth();
}

int QWidgetItem_heightForWidth(const QWidgetItem* self, int param1) {
	return self->heightForWidth(static_cast<int>(param1));
}

int QWidgetItem_controlTypes(const QWidgetItem* self) {
	QSizePolicy::ControlTypes _ret = self->controlTypes();
	return static_cast<int>(_ret);
}

bool QWidgetItem_override_virtual_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItem> slot_handle(slot);
	MiqtVirtualQWidgetItem* self_cast = dynamic_cast<MiqtVirtualQWidgetItem*>( (QWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = false;
	return true;
}

bool QWidgetItem_override_virtual_owned_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItem> slot_handle(slot);
	MiqtVirtualQWidgetItem* self_cast = dynamic_cast<MiqtVirtualQWidgetItem*>( (QWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = true;
	return true;
}

QSize* QWidgetItem_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQWidgetItem*>(self)->QWidgetItem::sizeHint());
}

bool QWidgetItem_override_virtual_minimumSize(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItem> slot_handle(slot);
	MiqtVirtualQWidgetItem* self_cast = dynamic_cast<MiqtVirtualQWidgetItem*>( (QWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSize = std::move(slot_handle);
	self_cast->owns_return__minimumSize = false;
	return true;
}

bool QWidgetItem_override_virtual_owned_minimumSize(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItem> slot_handle(slot);
	MiqtVirtualQWidgetItem* self_cast = dynamic_cast<MiqtVirtualQWidgetItem*>( (QWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSize = std::move(slot_handle);
	self_cast->owns_return__minimumSize = true;
	return true;
}

QSize* QWidgetItem_virtualbase_minimumSize(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQWidgetItem*>(self)->QWidgetItem::minimumSize());
}

bool QWidgetItem_override_virtual_maximumSize(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItem> slot_handle(slot);
	MiqtVirtualQWidgetItem* self_cast = dynamic_cast<MiqtVirtualQWidgetItem*>( (QWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__maximumSize = std::move(slot_handle);
	self_cast->owns_return__maximumSize = false;
	return true;
}

bool QWidgetItem_override_virtual_owned_maximumSize(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItem> slot_handle(slot);
	MiqtVirtualQWidgetItem* self_cast = dynamic_cast<MiqtVirtualQWidgetItem*>( (QWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__maximumSize = std::move(slot_handle);
	self_cast->owns_return__maximumSize = true;
	return true;
}

QSize* QWidgetItem_virtualbase_maximumSize(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQWidgetItem*>(self)->QWidgetItem::maximumSize());
}

bool QWidgetItem_override_virtual_expandingDirections(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItem> slot_handle(slot);
	MiqtVirtualQWidgetItem* self_cast = dynamic_cast<MiqtVirtualQWidgetItem*>( (QWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__expandingDirections = std::move(slot_handle);
	return true;
}

int QWidgetItem_virtualbase_expandingDirections(const void* self) {
	Qt::Orientations _ret = static_cast<const MiqtVirtualQWidgetItem*>(self)->QWidgetItem::expandingDirections();
	return static_cast<int>(_ret);
}

bool QWidgetItem_override_virtual_isEmpty(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItem> slot_handle(slot);
	MiqtVirtualQWidgetItem* self_cast = dynamic_cast<MiqtVirtualQWidgetItem*>( (QWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isEmpty = std::move(slot_handle);
	return true;
}

bool QWidgetItem_virtualbase_isEmpty(const void* self) {
	return static_cast<const MiqtVirtualQWidgetItem*>(self)->QWidgetItem::isEmpty();
}

bool QWidgetItem_override_virtual_setGeometry(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItem> slot_handle(slot);
	MiqtVirtualQWidgetItem* self_cast = dynamic_cast<MiqtVirtualQWidgetItem*>( (QWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setGeometry = std::move(slot_handle);
	return true;
}

void QWidgetItem_virtualbase_setGeometry(void* self, QRect* geometry) {
	static_cast<MiqtVirtualQWidgetItem*>(self)->QWidgetItem::setGeometry(*geometry);
}

bool QWidgetItem_override_virtual_geometry(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItem> slot_handle(slot);
	MiqtVirtualQWidgetItem* self_cast = dynamic_cast<MiqtVirtualQWidgetItem*>( (QWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__geometry = std::move(slot_handle);
	self_cast->owns_return__geometry = false;
	return true;
}

bool QWidgetItem_override_virtual_owned_geometry(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItem> slot_handle(slot);
	MiqtVirtualQWidgetItem* self_cast = dynamic_cast<MiqtVirtualQWidgetItem*>( (QWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__geometry = std::move(slot_handle);
	self_cast->owns_return__geometry = true;
	return true;
}

QRect* QWidgetItem_virtualbase_geometry(const void* self) {
	return new QRect(static_cast<const MiqtVirtualQWidgetItem*>(self)->QWidgetItem::geometry());
}

bool QWidgetItem_override_virtual_widget(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItem> slot_handle(slot);
	MiqtVirtualQWidgetItem* self_cast = dynamic_cast<MiqtVirtualQWidgetItem*>( (QWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widget = std::move(slot_handle);
	return true;
}

QWidget* QWidgetItem_virtualbase_widget(void* self) {
	return static_cast<MiqtVirtualQWidgetItem*>(self)->QWidgetItem::widget();
}

bool QWidgetItem_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItem> slot_handle(slot);
	MiqtVirtualQWidgetItem* self_cast = dynamic_cast<MiqtVirtualQWidgetItem*>( (QWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = std::move(slot_handle);
	return true;
}

bool QWidgetItem_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQWidgetItem*>(self)->QWidgetItem::hasHeightForWidth();
}

bool QWidgetItem_override_virtual_heightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItem> slot_handle(slot);
	MiqtVirtualQWidgetItem* self_cast = dynamic_cast<MiqtVirtualQWidgetItem*>( (QWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = std::move(slot_handle);
	return true;
}

int QWidgetItem_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQWidgetItem*>(self)->QWidgetItem::heightForWidth(static_cast<int>(param1));
}

bool QWidgetItem_override_virtual_controlTypes(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItem> slot_handle(slot);
	MiqtVirtualQWidgetItem* self_cast = dynamic_cast<MiqtVirtualQWidgetItem*>( (QWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__controlTypes = std::move(slot_handle);
	return true;
}

int QWidgetItem_virtualbase_controlTypes(const void* self) {
	QSizePolicy::ControlTypes _ret = static_cast<const MiqtVirtualQWidgetItem*>(self)->QWidgetItem::controlTypes();
	return static_cast<int>(_ret);
}

bool QWidgetItem_override_virtual_minimumHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItem> slot_handle(slot);
	MiqtVirtualQWidgetItem* self_cast = dynamic_cast<MiqtVirtualQWidgetItem*>( (QWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumHeightForWidth = std::move(slot_handle);
	return true;
}

int QWidgetItem_virtualbase_minimumHeightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQWidgetItem*>(self)->QWidgetItem::minimumHeightForWidth(static_cast<int>(param1));
}

bool QWidgetItem_override_virtual_invalidate(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItem> slot_handle(slot);
	MiqtVirtualQWidgetItem* self_cast = dynamic_cast<MiqtVirtualQWidgetItem*>( (QWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__invalidate = std::move(slot_handle);
	return true;
}

void QWidgetItem_virtualbase_invalidate(void* self) {
	static_cast<MiqtVirtualQWidgetItem*>(self)->QWidgetItem::invalidate();
}

bool QWidgetItem_override_virtual_layout(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItem> slot_handle(slot);
	MiqtVirtualQWidgetItem* self_cast = dynamic_cast<MiqtVirtualQWidgetItem*>( (QWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__layout = std::move(slot_handle);
	return true;
}

QLayout* QWidgetItem_virtualbase_layout(void* self) {
	return static_cast<MiqtVirtualQWidgetItem*>(self)->QWidgetItem::layout();
}

bool QWidgetItem_override_virtual_spacerItem(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItem> slot_handle(slot);
	MiqtVirtualQWidgetItem* self_cast = dynamic_cast<MiqtVirtualQWidgetItem*>( (QWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__spacerItem = std::move(slot_handle);
	return true;
}

QSpacerItem* QWidgetItem_virtualbase_spacerItem(void* self) {
	return static_cast<MiqtVirtualQWidgetItem*>(self)->QWidgetItem::spacerItem();
}

void QWidgetItem_delete(QWidgetItem* self) {
	delete self;
}

class MiqtVirtualQWidgetItemV2 final : public QWidgetItemV2 {
public:

	MiqtVirtualQWidgetItemV2(QWidget* widget): QWidgetItemV2(widget) {}

	virtual ~MiqtVirtualQWidgetItemV2() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItemV2> handle__sizeHint;
	bool owns_return__sizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (!handle__sizeHint) {
			return QWidgetItemV2::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QWidgetItemV2_sizeHint(this, handle__sizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__sizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QWidgetItemV2_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItemV2> handle__minimumSize;
	bool owns_return__minimumSize = false;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSize() const override {
		if (!handle__minimumSize) {
			return QWidgetItemV2::minimumSize();
		}

		QSize* callback_return_value = miqt_exec_callback_QWidgetItemV2_minimumSize(this, handle__minimumSize.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__minimumSize) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QWidgetItemV2_virtualbase_minimumSize(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItemV2> handle__maximumSize;
	bool owns_return__maximumSize = false;

	// Subclass to allow providing a Go implementation
	virtual QSize maximumSize() const override {
		if (!handle__maximumSize) {
			return QWidgetItemV2::maximumSize();
		}

		QSize* callback_return_value = miqt_exec_callback_QWidgetItemV2_maximumSize(this, handle__maximumSize.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__maximumSize) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QWidgetItemV2_virtualbase_maximumSize(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItemV2> handle__heightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int width) const override {
		if (!handle__heightForWidth) {
			return QWidgetItemV2::heightForWidth(width);
		}

		int sigval1 = width;
		int callback_return_value = miqt_exec_callback_QWidgetItemV2_heightForWidth(this, handle__heightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QWidgetItemV2_virtualbase_heightForWidth(const void* self, int width);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItemV2> handle__expandingDirections;

	// Subclass to allow providing a Go implementation
	virtual Qt::Orientations expandingDirections() const override {
		if (!handle__expandingDirections) {
			return QWidgetItemV2::expandingDirections();
		}

		int callback_return_value = miqt_exec_callback_QWidgetItemV2_expandingDirections(this, handle__expandingDirections.value());
		return static_cast<Qt::Orientations>(callback_return_value);
	}

	friend int QWidgetItemV2_virtualbase_expandingDirections(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItemV2> handle__isEmpty;

	// Subclass to allow providing a Go implementation
	virtual bool isEmpty() const override {
		if (!handle__isEmpty) {
			return QWidgetItemV2::isEmpty();
		}

		bool callback_return_value = miqt_exec_callback_QWidgetItemV2_isEmpty(this, handle__isEmpty.value());
		return callback_return_value;
	}

	friend bool QWidgetItemV2_virtualbase_isEmpty(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItemV2> handle__setGeometry;

	// Subclass to allow providing a Go implementation
	virtual void setGeometry(const QRect& geometry) override {
		if (!handle__setGeometry) {
			QWidgetItemV2::setGeometry(geometry);
			return;
		}

		const QRect& geometry_ret = geometry;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&geometry_ret);
		miqt_exec_callback_QWidgetItemV2_setGeometry(this, handle__setGeometry.value(), sigval1);

	}

	friend void QWidgetItemV2_virtualbase_setGeometry(void* self, QRect* geometry);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItemV2> handle__geometry;
	bool owns_return__geometry = false;

	// Subclass to allow providing a Go implementation
	virtual QRect geometry() const override {
		if (!handle__geometry) {
			return QWidgetItemV2::geometry();
		}

		QRect* callback_return_value = miqt_exec_callback_QWidgetItemV2_geometry(this, handle__geometry.value());
		std::unique_ptr<QRect> callback_return_value_owner;
		if (owns_return__geometry) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QRect* QWidgetItemV2_virtualbase_geometry(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItemV2> handle__widget;

	// Subclass to allow providing a Go implementation
	virtual QWidget* widget() override {
		if (!handle__widget) {
			return QWidgetItemV2::widget();
		}

		QWidget* callback_return_value = miqt_exec_callback_QWidgetItemV2_widget(this, handle__widget.value());
		return callback_return_value;
	}

	friend QWidget* QWidgetItemV2_virtualbase_widget(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItemV2> handle__hasHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (!handle__hasHeightForWidth) {
			return QWidgetItemV2::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QWidgetItemV2_hasHeightForWidth(this, handle__hasHeightForWidth.value());
		return callback_return_value;
	}

	friend bool QWidgetItemV2_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItemV2> handle__controlTypes;

	// Subclass to allow providing a Go implementation
	virtual QSizePolicy::ControlTypes controlTypes() const override {
		if (!handle__controlTypes) {
			return QWidgetItemV2::controlTypes();
		}

		int callback_return_value = miqt_exec_callback_QWidgetItemV2_controlTypes(this, handle__controlTypes.value());
		return static_cast<QSizePolicy::ControlTypes>(callback_return_value);
	}

	friend int QWidgetItemV2_virtualbase_controlTypes(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItemV2> handle__minimumHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int minimumHeightForWidth(int param1) const override {
		if (!handle__minimumHeightForWidth) {
			return QWidgetItemV2::minimumHeightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QWidgetItemV2_minimumHeightForWidth(this, handle__minimumHeightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QWidgetItemV2_virtualbase_minimumHeightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItemV2> handle__invalidate;

	// Subclass to allow providing a Go implementation
	virtual void invalidate() override {
		if (!handle__invalidate) {
			QWidgetItemV2::invalidate();
			return;
		}

		miqt_exec_callback_QWidgetItemV2_invalidate(this, handle__invalidate.value());

	}

	friend void QWidgetItemV2_virtualbase_invalidate(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItemV2> handle__layout;

	// Subclass to allow providing a Go implementation
	virtual QLayout* layout() override {
		if (!handle__layout) {
			return QWidgetItemV2::layout();
		}

		QLayout* callback_return_value = miqt_exec_callback_QWidgetItemV2_layout(this, handle__layout.value());
		return callback_return_value;
	}

	friend QLayout* QWidgetItemV2_virtualbase_layout(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItemV2> handle__spacerItem;

	// Subclass to allow providing a Go implementation
	virtual QSpacerItem* spacerItem() override {
		if (!handle__spacerItem) {
			return QWidgetItemV2::spacerItem();
		}

		QSpacerItem* callback_return_value = miqt_exec_callback_QWidgetItemV2_spacerItem(this, handle__spacerItem.value());
		return callback_return_value;
	}

	friend QSpacerItem* QWidgetItemV2_virtualbase_spacerItem(void* self);

};

QWidgetItemV2* QWidgetItemV2_new(QWidget* widget) {
	return new (std::nothrow) MiqtVirtualQWidgetItemV2(widget);
}

void QWidgetItemV2_virtbase(QWidgetItemV2* src, QWidgetItem** outptr_QWidgetItem) {
	*outptr_QWidgetItem = static_cast<QWidgetItem*>(src);
}

QSize* QWidgetItemV2_sizeHint(const QWidgetItemV2* self) {
	return new QSize(self->sizeHint());
}

QSize* QWidgetItemV2_minimumSize(const QWidgetItemV2* self) {
	return new QSize(self->minimumSize());
}

QSize* QWidgetItemV2_maximumSize(const QWidgetItemV2* self) {
	return new QSize(self->maximumSize());
}

int QWidgetItemV2_heightForWidth(const QWidgetItemV2* self, int width) {
	return self->heightForWidth(static_cast<int>(width));
}

bool QWidgetItemV2_override_virtual_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItemV2> slot_handle(slot);
	MiqtVirtualQWidgetItemV2* self_cast = dynamic_cast<MiqtVirtualQWidgetItemV2*>( (QWidgetItemV2*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = false;
	return true;
}

bool QWidgetItemV2_override_virtual_owned_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItemV2> slot_handle(slot);
	MiqtVirtualQWidgetItemV2* self_cast = dynamic_cast<MiqtVirtualQWidgetItemV2*>( (QWidgetItemV2*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = true;
	return true;
}

QSize* QWidgetItemV2_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQWidgetItemV2*>(self)->QWidgetItemV2::sizeHint());
}

bool QWidgetItemV2_override_virtual_minimumSize(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItemV2> slot_handle(slot);
	MiqtVirtualQWidgetItemV2* self_cast = dynamic_cast<MiqtVirtualQWidgetItemV2*>( (QWidgetItemV2*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSize = std::move(slot_handle);
	self_cast->owns_return__minimumSize = false;
	return true;
}

bool QWidgetItemV2_override_virtual_owned_minimumSize(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItemV2> slot_handle(slot);
	MiqtVirtualQWidgetItemV2* self_cast = dynamic_cast<MiqtVirtualQWidgetItemV2*>( (QWidgetItemV2*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSize = std::move(slot_handle);
	self_cast->owns_return__minimumSize = true;
	return true;
}

QSize* QWidgetItemV2_virtualbase_minimumSize(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQWidgetItemV2*>(self)->QWidgetItemV2::minimumSize());
}

bool QWidgetItemV2_override_virtual_maximumSize(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItemV2> slot_handle(slot);
	MiqtVirtualQWidgetItemV2* self_cast = dynamic_cast<MiqtVirtualQWidgetItemV2*>( (QWidgetItemV2*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__maximumSize = std::move(slot_handle);
	self_cast->owns_return__maximumSize = false;
	return true;
}

bool QWidgetItemV2_override_virtual_owned_maximumSize(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItemV2> slot_handle(slot);
	MiqtVirtualQWidgetItemV2* self_cast = dynamic_cast<MiqtVirtualQWidgetItemV2*>( (QWidgetItemV2*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__maximumSize = std::move(slot_handle);
	self_cast->owns_return__maximumSize = true;
	return true;
}

QSize* QWidgetItemV2_virtualbase_maximumSize(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQWidgetItemV2*>(self)->QWidgetItemV2::maximumSize());
}

bool QWidgetItemV2_override_virtual_heightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItemV2> slot_handle(slot);
	MiqtVirtualQWidgetItemV2* self_cast = dynamic_cast<MiqtVirtualQWidgetItemV2*>( (QWidgetItemV2*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = std::move(slot_handle);
	return true;
}

int QWidgetItemV2_virtualbase_heightForWidth(const void* self, int width) {
	return static_cast<const MiqtVirtualQWidgetItemV2*>(self)->QWidgetItemV2::heightForWidth(static_cast<int>(width));
}

bool QWidgetItemV2_override_virtual_expandingDirections(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItemV2> slot_handle(slot);
	MiqtVirtualQWidgetItemV2* self_cast = dynamic_cast<MiqtVirtualQWidgetItemV2*>( (QWidgetItemV2*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__expandingDirections = std::move(slot_handle);
	return true;
}

int QWidgetItemV2_virtualbase_expandingDirections(const void* self) {
	Qt::Orientations _ret = static_cast<const MiqtVirtualQWidgetItemV2*>(self)->QWidgetItemV2::expandingDirections();
	return static_cast<int>(_ret);
}

bool QWidgetItemV2_override_virtual_isEmpty(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItemV2> slot_handle(slot);
	MiqtVirtualQWidgetItemV2* self_cast = dynamic_cast<MiqtVirtualQWidgetItemV2*>( (QWidgetItemV2*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isEmpty = std::move(slot_handle);
	return true;
}

bool QWidgetItemV2_virtualbase_isEmpty(const void* self) {
	return static_cast<const MiqtVirtualQWidgetItemV2*>(self)->QWidgetItemV2::isEmpty();
}

bool QWidgetItemV2_override_virtual_setGeometry(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItemV2> slot_handle(slot);
	MiqtVirtualQWidgetItemV2* self_cast = dynamic_cast<MiqtVirtualQWidgetItemV2*>( (QWidgetItemV2*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setGeometry = std::move(slot_handle);
	return true;
}

void QWidgetItemV2_virtualbase_setGeometry(void* self, QRect* geometry) {
	static_cast<MiqtVirtualQWidgetItemV2*>(self)->QWidgetItemV2::setGeometry(*geometry);
}

bool QWidgetItemV2_override_virtual_geometry(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItemV2> slot_handle(slot);
	MiqtVirtualQWidgetItemV2* self_cast = dynamic_cast<MiqtVirtualQWidgetItemV2*>( (QWidgetItemV2*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__geometry = std::move(slot_handle);
	self_cast->owns_return__geometry = false;
	return true;
}

bool QWidgetItemV2_override_virtual_owned_geometry(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItemV2> slot_handle(slot);
	MiqtVirtualQWidgetItemV2* self_cast = dynamic_cast<MiqtVirtualQWidgetItemV2*>( (QWidgetItemV2*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__geometry = std::move(slot_handle);
	self_cast->owns_return__geometry = true;
	return true;
}

QRect* QWidgetItemV2_virtualbase_geometry(const void* self) {
	return new QRect(static_cast<const MiqtVirtualQWidgetItemV2*>(self)->QWidgetItemV2::geometry());
}

bool QWidgetItemV2_override_virtual_widget(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItemV2> slot_handle(slot);
	MiqtVirtualQWidgetItemV2* self_cast = dynamic_cast<MiqtVirtualQWidgetItemV2*>( (QWidgetItemV2*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widget = std::move(slot_handle);
	return true;
}

QWidget* QWidgetItemV2_virtualbase_widget(void* self) {
	return static_cast<MiqtVirtualQWidgetItemV2*>(self)->QWidgetItemV2::widget();
}

bool QWidgetItemV2_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItemV2> slot_handle(slot);
	MiqtVirtualQWidgetItemV2* self_cast = dynamic_cast<MiqtVirtualQWidgetItemV2*>( (QWidgetItemV2*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = std::move(slot_handle);
	return true;
}

bool QWidgetItemV2_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQWidgetItemV2*>(self)->QWidgetItemV2::hasHeightForWidth();
}

bool QWidgetItemV2_override_virtual_controlTypes(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItemV2> slot_handle(slot);
	MiqtVirtualQWidgetItemV2* self_cast = dynamic_cast<MiqtVirtualQWidgetItemV2*>( (QWidgetItemV2*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__controlTypes = std::move(slot_handle);
	return true;
}

int QWidgetItemV2_virtualbase_controlTypes(const void* self) {
	QSizePolicy::ControlTypes _ret = static_cast<const MiqtVirtualQWidgetItemV2*>(self)->QWidgetItemV2::controlTypes();
	return static_cast<int>(_ret);
}

bool QWidgetItemV2_override_virtual_minimumHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItemV2> slot_handle(slot);
	MiqtVirtualQWidgetItemV2* self_cast = dynamic_cast<MiqtVirtualQWidgetItemV2*>( (QWidgetItemV2*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumHeightForWidth = std::move(slot_handle);
	return true;
}

int QWidgetItemV2_virtualbase_minimumHeightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQWidgetItemV2*>(self)->QWidgetItemV2::minimumHeightForWidth(static_cast<int>(param1));
}

bool QWidgetItemV2_override_virtual_invalidate(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItemV2> slot_handle(slot);
	MiqtVirtualQWidgetItemV2* self_cast = dynamic_cast<MiqtVirtualQWidgetItemV2*>( (QWidgetItemV2*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__invalidate = std::move(slot_handle);
	return true;
}

void QWidgetItemV2_virtualbase_invalidate(void* self) {
	static_cast<MiqtVirtualQWidgetItemV2*>(self)->QWidgetItemV2::invalidate();
}

bool QWidgetItemV2_override_virtual_layout(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItemV2> slot_handle(slot);
	MiqtVirtualQWidgetItemV2* self_cast = dynamic_cast<MiqtVirtualQWidgetItemV2*>( (QWidgetItemV2*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__layout = std::move(slot_handle);
	return true;
}

QLayout* QWidgetItemV2_virtualbase_layout(void* self) {
	return static_cast<MiqtVirtualQWidgetItemV2*>(self)->QWidgetItemV2::layout();
}

bool QWidgetItemV2_override_virtual_spacerItem(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWidgetItemV2> slot_handle(slot);
	MiqtVirtualQWidgetItemV2* self_cast = dynamic_cast<MiqtVirtualQWidgetItemV2*>( (QWidgetItemV2*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__spacerItem = std::move(slot_handle);
	return true;
}

QSpacerItem* QWidgetItemV2_virtualbase_spacerItem(void* self) {
	return static_cast<MiqtVirtualQWidgetItemV2*>(self)->QWidgetItemV2::spacerItem();
}

void QWidgetItemV2_delete(QWidgetItemV2* self) {
	delete self;
}

