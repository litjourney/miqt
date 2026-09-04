#include <memory>
#include <utility>
#include <QEvent>
#include <QGraphicsItem>
#include <QGraphicsLayout>
#include <QGraphicsLayoutItem>
#include <QRectF>
#include <QSizeF>
#include <qgraphicslayout.h>
#include "gen_qgraphicslayout.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QGraphicsLayout(intptr_t);
void miqt_exec_callback_QGraphicsLayout_getContentsMargins(const QGraphicsLayout*, intptr_t, double*, double*, double*, double*);
void miqt_exec_callback_QGraphicsLayout_invalidate(QGraphicsLayout*, intptr_t);
void miqt_exec_callback_QGraphicsLayout_updateGeometry(QGraphicsLayout*, intptr_t);
void miqt_exec_callback_QGraphicsLayout_widgetEvent(QGraphicsLayout*, intptr_t, QEvent*);
int miqt_exec_callback_QGraphicsLayout_count(const QGraphicsLayout*, intptr_t);
QGraphicsLayoutItem* miqt_exec_callback_QGraphicsLayout_itemAt(const QGraphicsLayout*, intptr_t, int);
void miqt_exec_callback_QGraphicsLayout_removeAt(QGraphicsLayout*, intptr_t, int);
void miqt_exec_callback_QGraphicsLayout_setGeometry(QGraphicsLayout*, intptr_t, QRectF*);
QSizeF* miqt_exec_callback_QGraphicsLayout_sizeHint(const QGraphicsLayout*, intptr_t, int, QSizeF*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGraphicsLayout final : public QGraphicsLayout {
public:

	MiqtVirtualQGraphicsLayout(): QGraphicsLayout() {}
	MiqtVirtualQGraphicsLayout(QGraphicsLayoutItem* parent): QGraphicsLayout(parent) {}

	virtual ~MiqtVirtualQGraphicsLayout() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsLayout> handle__getContentsMargins;

	// Subclass to allow providing a Go implementation
	virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
		if (!handle__getContentsMargins) {
			QGraphicsLayout::getContentsMargins(left, top, right, bottom);
			return;
		}

		qreal* left_ret = left;
		double* sigval1 = static_cast<double*>(left_ret);
		qreal* top_ret = top;
		double* sigval2 = static_cast<double*>(top_ret);
		qreal* right_ret = right;
		double* sigval3 = static_cast<double*>(right_ret);
		qreal* bottom_ret = bottom;
		double* sigval4 = static_cast<double*>(bottom_ret);
		miqt_exec_callback_QGraphicsLayout_getContentsMargins(this, handle__getContentsMargins.value(), sigval1, sigval2, sigval3, sigval4);

	}

	friend void QGraphicsLayout_virtualbase_getContentsMargins(const void* self, double* left, double* top, double* right, double* bottom);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsLayout> handle__invalidate;

	// Subclass to allow providing a Go implementation
	virtual void invalidate() override {
		if (!handle__invalidate) {
			QGraphicsLayout::invalidate();
			return;
		}

		miqt_exec_callback_QGraphicsLayout_invalidate(this, handle__invalidate.value());

	}

	friend void QGraphicsLayout_virtualbase_invalidate(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsLayout> handle__updateGeometry;

	// Subclass to allow providing a Go implementation
	virtual void updateGeometry() override {
		if (!handle__updateGeometry) {
			QGraphicsLayout::updateGeometry();
			return;
		}

		miqt_exec_callback_QGraphicsLayout_updateGeometry(this, handle__updateGeometry.value());

	}

	friend void QGraphicsLayout_virtualbase_updateGeometry(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsLayout> handle__widgetEvent;

	// Subclass to allow providing a Go implementation
	virtual void widgetEvent(QEvent* e) override {
		if (!handle__widgetEvent) {
			QGraphicsLayout::widgetEvent(e);
			return;
		}

		QEvent* sigval1 = e;
		miqt_exec_callback_QGraphicsLayout_widgetEvent(this, handle__widgetEvent.value(), sigval1);

	}

	friend void QGraphicsLayout_virtualbase_widgetEvent(void* self, QEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsLayout> handle__count;

	// Subclass to allow providing a Go implementation
	virtual int count() const override {
		if (!handle__count) {
			return 0; // Pure virtual, there is no base we can call
		}

		int callback_return_value = miqt_exec_callback_QGraphicsLayout_count(this, handle__count.value());
		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsLayout> handle__itemAt;

	// Subclass to allow providing a Go implementation
	virtual QGraphicsLayoutItem* itemAt(int i) const override {
		if (!handle__itemAt) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		int sigval1 = i;
		QGraphicsLayoutItem* callback_return_value = miqt_exec_callback_QGraphicsLayout_itemAt(this, handle__itemAt.value(), sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsLayout> handle__removeAt;

	// Subclass to allow providing a Go implementation
	virtual void removeAt(int index) override {
		if (!handle__removeAt) {
			return; // Pure virtual, there is no base we can call
		}

		int sigval1 = index;
		miqt_exec_callback_QGraphicsLayout_removeAt(this, handle__removeAt.value(), sigval1);

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsLayout> handle__setGeometry;

	// Subclass to allow providing a Go implementation
	virtual void setGeometry(const QRectF& rect) override {
		if (!handle__setGeometry) {
			QGraphicsLayout::setGeometry(rect);
			return;
		}

		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&rect_ret);
		miqt_exec_callback_QGraphicsLayout_setGeometry(this, handle__setGeometry.value(), sigval1);

	}

	friend void QGraphicsLayout_virtualbase_setGeometry(void* self, QRectF* rect);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsLayout> handle__sizeHint;
	bool owns_return__sizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
		if (!handle__sizeHint) {
			return QSizeF(); // Pure virtual, there is no base we can call
		}

		Qt::SizeHint which_ret = which;
		int sigval1 = static_cast<int>(which_ret);
		const QSizeF& constraint_ret = constraint;
		// Cast returned reference into pointer
		QSizeF* sigval2 = const_cast<QSizeF*>(&constraint_ret);
		QSizeF* callback_return_value = miqt_exec_callback_QGraphicsLayout_sizeHint(this, handle__sizeHint.value(), sigval1, sigval2);
		std::unique_ptr<QSizeF> callback_return_value_owner;
		if (owns_return__sizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	// Wrappers to allow calling protected methods:
	friend void QGraphicsLayout_protectedbase_addChildLayoutItem(bool* _dynamic_cast_ok, void* self, QGraphicsLayoutItem* layoutItem);
	friend void QGraphicsLayout_protectedbase_setGraphicsItem(bool* _dynamic_cast_ok, void* self, QGraphicsItem* item);
	friend void QGraphicsLayout_protectedbase_setOwnedByLayout(bool* _dynamic_cast_ok, void* self, bool ownedByLayout);
};

QGraphicsLayout* QGraphicsLayout_new() {
	return new (std::nothrow) MiqtVirtualQGraphicsLayout();
}

QGraphicsLayout* QGraphicsLayout_new2(QGraphicsLayoutItem* parent) {
	return new (std::nothrow) MiqtVirtualQGraphicsLayout(parent);
}

void QGraphicsLayout_virtbase(QGraphicsLayout* src, QGraphicsLayoutItem** outptr_QGraphicsLayoutItem) {
	*outptr_QGraphicsLayoutItem = static_cast<QGraphicsLayoutItem*>(src);
}

void QGraphicsLayout_setContentsMargins(QGraphicsLayout* self, double left, double top, double right, double bottom) {
	self->setContentsMargins(static_cast<qreal>(left), static_cast<qreal>(top), static_cast<qreal>(right), static_cast<qreal>(bottom));
}

void QGraphicsLayout_getContentsMargins(const QGraphicsLayout* self, double* left, double* top, double* right, double* bottom) {
	self->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
}

void QGraphicsLayout_activate(QGraphicsLayout* self) {
	self->activate();
}

bool QGraphicsLayout_isActivated(const QGraphicsLayout* self) {
	return self->isActivated();
}

void QGraphicsLayout_invalidate(QGraphicsLayout* self) {
	self->invalidate();
}

void QGraphicsLayout_updateGeometry(QGraphicsLayout* self) {
	self->updateGeometry();
}

void QGraphicsLayout_widgetEvent(QGraphicsLayout* self, QEvent* e) {
	self->widgetEvent(e);
}

int QGraphicsLayout_count(const QGraphicsLayout* self) {
	return self->count();
}

QGraphicsLayoutItem* QGraphicsLayout_itemAt(const QGraphicsLayout* self, int i) {
	return self->itemAt(static_cast<int>(i));
}

void QGraphicsLayout_removeAt(QGraphicsLayout* self, int index) {
	self->removeAt(static_cast<int>(index));
}

void QGraphicsLayout_setInstantInvalidatePropagation(bool enable) {
	QGraphicsLayout::setInstantInvalidatePropagation(enable);
}

bool QGraphicsLayout_instantInvalidatePropagation() {
	return QGraphicsLayout::instantInvalidatePropagation();
}

bool QGraphicsLayout_override_virtual_getContentsMargins(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsLayout> slot_handle(slot);
	MiqtVirtualQGraphicsLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLayout*>( (QGraphicsLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__getContentsMargins = std::move(slot_handle);
	return true;
}

void QGraphicsLayout_virtualbase_getContentsMargins(const void* self, double* left, double* top, double* right, double* bottom) {
	static_cast<const MiqtVirtualQGraphicsLayout*>(self)->QGraphicsLayout::getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
}

bool QGraphicsLayout_override_virtual_invalidate(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsLayout> slot_handle(slot);
	MiqtVirtualQGraphicsLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLayout*>( (QGraphicsLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__invalidate = std::move(slot_handle);
	return true;
}

void QGraphicsLayout_virtualbase_invalidate(void* self) {
	static_cast<MiqtVirtualQGraphicsLayout*>(self)->QGraphicsLayout::invalidate();
}

bool QGraphicsLayout_override_virtual_updateGeometry(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsLayout> slot_handle(slot);
	MiqtVirtualQGraphicsLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLayout*>( (QGraphicsLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateGeometry = std::move(slot_handle);
	return true;
}

void QGraphicsLayout_virtualbase_updateGeometry(void* self) {
	static_cast<MiqtVirtualQGraphicsLayout*>(self)->QGraphicsLayout::updateGeometry();
}

bool QGraphicsLayout_override_virtual_widgetEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsLayout> slot_handle(slot);
	MiqtVirtualQGraphicsLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLayout*>( (QGraphicsLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetEvent = std::move(slot_handle);
	return true;
}

void QGraphicsLayout_virtualbase_widgetEvent(void* self, QEvent* e) {
	static_cast<MiqtVirtualQGraphicsLayout*>(self)->QGraphicsLayout::widgetEvent(e);
}

bool QGraphicsLayout_override_virtual_count(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsLayout> slot_handle(slot);
	MiqtVirtualQGraphicsLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLayout*>( (QGraphicsLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__count = std::move(slot_handle);
	return true;
}

bool QGraphicsLayout_override_virtual_itemAt(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsLayout> slot_handle(slot);
	MiqtVirtualQGraphicsLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLayout*>( (QGraphicsLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__itemAt = std::move(slot_handle);
	return true;
}

bool QGraphicsLayout_override_virtual_removeAt(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsLayout> slot_handle(slot);
	MiqtVirtualQGraphicsLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLayout*>( (QGraphicsLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__removeAt = std::move(slot_handle);
	return true;
}

bool QGraphicsLayout_override_virtual_setGeometry(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsLayout> slot_handle(slot);
	MiqtVirtualQGraphicsLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLayout*>( (QGraphicsLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setGeometry = std::move(slot_handle);
	return true;
}

void QGraphicsLayout_virtualbase_setGeometry(void* self, QRectF* rect) {
	static_cast<MiqtVirtualQGraphicsLayout*>(self)->QGraphicsLayout::setGeometry(*rect);
}

bool QGraphicsLayout_override_virtual_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsLayout> slot_handle(slot);
	MiqtVirtualQGraphicsLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLayout*>( (QGraphicsLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = false;
	return true;
}

bool QGraphicsLayout_override_virtual_owned_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsLayout> slot_handle(slot);
	MiqtVirtualQGraphicsLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLayout*>( (QGraphicsLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = true;
	return true;
}

void QGraphicsLayout_protectedbase_addChildLayoutItem(bool* _dynamic_cast_ok, void* self, QGraphicsLayoutItem* layoutItem) {
	MiqtVirtualQGraphicsLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLayout*>( (QGraphicsLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->addChildLayoutItem(layoutItem);
}

void QGraphicsLayout_protectedbase_setGraphicsItem(bool* _dynamic_cast_ok, void* self, QGraphicsItem* item) {
	MiqtVirtualQGraphicsLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLayout*>( (QGraphicsLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setGraphicsItem(item);
}

void QGraphicsLayout_protectedbase_setOwnedByLayout(bool* _dynamic_cast_ok, void* self, bool ownedByLayout) {
	MiqtVirtualQGraphicsLayout* self_cast = dynamic_cast<MiqtVirtualQGraphicsLayout*>( (QGraphicsLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setOwnedByLayout(ownedByLayout);
}

void QGraphicsLayout_delete(QGraphicsLayout* self) {
	delete self;
}

