#include <memory>
#include <utility>
#include <QDesignerContainerExtension>
#include <QWidget>
#include <container.h>
#include "gen_container.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QDesignerContainerExtension(intptr_t);
int miqt_exec_callback_QDesignerContainerExtension_count(const QDesignerContainerExtension*, intptr_t);
QWidget* miqt_exec_callback_QDesignerContainerExtension_widget(const QDesignerContainerExtension*, intptr_t, int);
int miqt_exec_callback_QDesignerContainerExtension_currentIndex(const QDesignerContainerExtension*, intptr_t);
void miqt_exec_callback_QDesignerContainerExtension_setCurrentIndex(QDesignerContainerExtension*, intptr_t, int);
bool miqt_exec_callback_QDesignerContainerExtension_canAddWidget(const QDesignerContainerExtension*, intptr_t);
void miqt_exec_callback_QDesignerContainerExtension_addWidget(QDesignerContainerExtension*, intptr_t, QWidget*);
void miqt_exec_callback_QDesignerContainerExtension_insertWidget(QDesignerContainerExtension*, intptr_t, int, QWidget*);
bool miqt_exec_callback_QDesignerContainerExtension_canRemove(const QDesignerContainerExtension*, intptr_t, int);
void miqt_exec_callback_QDesignerContainerExtension_remove(QDesignerContainerExtension*, intptr_t, int);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQDesignerContainerExtension final : public QDesignerContainerExtension {
public:

	MiqtVirtualQDesignerContainerExtension(): QDesignerContainerExtension() {}

	virtual ~MiqtVirtualQDesignerContainerExtension() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerContainerExtension> handle__count;

	// Subclass to allow providing a Go implementation
	virtual int count() const override {
		if (!handle__count) {
			return 0; // Pure virtual, there is no base we can call
		}

		int callback_return_value = miqt_exec_callback_QDesignerContainerExtension_count(this, handle__count.value());
		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerContainerExtension> handle__widget;

	// Subclass to allow providing a Go implementation
	virtual QWidget* widget(int index) const override {
		if (!handle__widget) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		int sigval1 = index;
		QWidget* callback_return_value = miqt_exec_callback_QDesignerContainerExtension_widget(this, handle__widget.value(), sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerContainerExtension> handle__currentIndex;

	// Subclass to allow providing a Go implementation
	virtual int currentIndex() const override {
		if (!handle__currentIndex) {
			return 0; // Pure virtual, there is no base we can call
		}

		int callback_return_value = miqt_exec_callback_QDesignerContainerExtension_currentIndex(this, handle__currentIndex.value());
		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerContainerExtension> handle__setCurrentIndex;

	// Subclass to allow providing a Go implementation
	virtual void setCurrentIndex(int index) override {
		if (!handle__setCurrentIndex) {
			return; // Pure virtual, there is no base we can call
		}

		int sigval1 = index;
		miqt_exec_callback_QDesignerContainerExtension_setCurrentIndex(this, handle__setCurrentIndex.value(), sigval1);

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerContainerExtension> handle__canAddWidget;

	// Subclass to allow providing a Go implementation
	virtual bool canAddWidget() const override {
		if (!handle__canAddWidget) {
			return false; // Pure virtual, there is no base we can call
		}

		bool callback_return_value = miqt_exec_callback_QDesignerContainerExtension_canAddWidget(this, handle__canAddWidget.value());
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerContainerExtension> handle__addWidget;

	// Subclass to allow providing a Go implementation
	virtual void addWidget(QWidget* widget) override {
		if (!handle__addWidget) {
			return; // Pure virtual, there is no base we can call
		}

		QWidget* sigval1 = widget;
		miqt_exec_callback_QDesignerContainerExtension_addWidget(this, handle__addWidget.value(), sigval1);

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerContainerExtension> handle__insertWidget;

	// Subclass to allow providing a Go implementation
	virtual void insertWidget(int index, QWidget* widget) override {
		if (!handle__insertWidget) {
			return; // Pure virtual, there is no base we can call
		}

		int sigval1 = index;
		QWidget* sigval2 = widget;
		miqt_exec_callback_QDesignerContainerExtension_insertWidget(this, handle__insertWidget.value(), sigval1, sigval2);

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerContainerExtension> handle__canRemove;

	// Subclass to allow providing a Go implementation
	virtual bool canRemove(int index) const override {
		if (!handle__canRemove) {
			return false; // Pure virtual, there is no base we can call
		}

		int sigval1 = index;
		bool callback_return_value = miqt_exec_callback_QDesignerContainerExtension_canRemove(this, handle__canRemove.value(), sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerContainerExtension> handle__remove;

	// Subclass to allow providing a Go implementation
	virtual void remove(int index) override {
		if (!handle__remove) {
			return; // Pure virtual, there is no base we can call
		}

		int sigval1 = index;
		miqt_exec_callback_QDesignerContainerExtension_remove(this, handle__remove.value(), sigval1);

	}

};

QDesignerContainerExtension* QDesignerContainerExtension_new() {
	return new (std::nothrow) MiqtVirtualQDesignerContainerExtension();
}

int QDesignerContainerExtension_count(const QDesignerContainerExtension* self) {
	return self->count();
}

QWidget* QDesignerContainerExtension_widget(const QDesignerContainerExtension* self, int index) {
	return self->widget(static_cast<int>(index));
}

int QDesignerContainerExtension_currentIndex(const QDesignerContainerExtension* self) {
	return self->currentIndex();
}

void QDesignerContainerExtension_setCurrentIndex(QDesignerContainerExtension* self, int index) {
	self->setCurrentIndex(static_cast<int>(index));
}

bool QDesignerContainerExtension_canAddWidget(const QDesignerContainerExtension* self) {
	return self->canAddWidget();
}

void QDesignerContainerExtension_addWidget(QDesignerContainerExtension* self, QWidget* widget) {
	self->addWidget(widget);
}

void QDesignerContainerExtension_insertWidget(QDesignerContainerExtension* self, int index, QWidget* widget) {
	self->insertWidget(static_cast<int>(index), widget);
}

bool QDesignerContainerExtension_canRemove(const QDesignerContainerExtension* self, int index) {
	return self->canRemove(static_cast<int>(index));
}

void QDesignerContainerExtension_remove(QDesignerContainerExtension* self, int index) {
	self->remove(static_cast<int>(index));
}

bool QDesignerContainerExtension_override_virtual_count(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerContainerExtension> slot_handle(slot);
	MiqtVirtualQDesignerContainerExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerContainerExtension*>( (QDesignerContainerExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__count = std::move(slot_handle);
	return true;
}

bool QDesignerContainerExtension_override_virtual_widget(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerContainerExtension> slot_handle(slot);
	MiqtVirtualQDesignerContainerExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerContainerExtension*>( (QDesignerContainerExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widget = std::move(slot_handle);
	return true;
}

bool QDesignerContainerExtension_override_virtual_currentIndex(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerContainerExtension> slot_handle(slot);
	MiqtVirtualQDesignerContainerExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerContainerExtension*>( (QDesignerContainerExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__currentIndex = std::move(slot_handle);
	return true;
}

bool QDesignerContainerExtension_override_virtual_setCurrentIndex(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerContainerExtension> slot_handle(slot);
	MiqtVirtualQDesignerContainerExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerContainerExtension*>( (QDesignerContainerExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setCurrentIndex = std::move(slot_handle);
	return true;
}

bool QDesignerContainerExtension_override_virtual_canAddWidget(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerContainerExtension> slot_handle(slot);
	MiqtVirtualQDesignerContainerExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerContainerExtension*>( (QDesignerContainerExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__canAddWidget = std::move(slot_handle);
	return true;
}

bool QDesignerContainerExtension_override_virtual_addWidget(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerContainerExtension> slot_handle(slot);
	MiqtVirtualQDesignerContainerExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerContainerExtension*>( (QDesignerContainerExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__addWidget = std::move(slot_handle);
	return true;
}

bool QDesignerContainerExtension_override_virtual_insertWidget(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerContainerExtension> slot_handle(slot);
	MiqtVirtualQDesignerContainerExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerContainerExtension*>( (QDesignerContainerExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__insertWidget = std::move(slot_handle);
	return true;
}

bool QDesignerContainerExtension_override_virtual_canRemove(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerContainerExtension> slot_handle(slot);
	MiqtVirtualQDesignerContainerExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerContainerExtension*>( (QDesignerContainerExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__canRemove = std::move(slot_handle);
	return true;
}

bool QDesignerContainerExtension_override_virtual_remove(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerContainerExtension> slot_handle(slot);
	MiqtVirtualQDesignerContainerExtension* self_cast = dynamic_cast<MiqtVirtualQDesignerContainerExtension*>( (QDesignerContainerExtension*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__remove = std::move(slot_handle);
	return true;
}

void QDesignerContainerExtension_delete(QDesignerContainerExtension* self) {
	delete self;
}

