#include <memory>
#include <utility>
#include <QAction>
#include <QDesignerFormEditorInterface>
#include <QDesignerFormEditorPluginInterface>
#include <abstractformeditorplugin.h>
#include "gen_abstractformeditorplugin.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QDesignerFormEditorPluginInterface(intptr_t);
bool miqt_exec_callback_QDesignerFormEditorPluginInterface_isInitialized(const QDesignerFormEditorPluginInterface*, intptr_t);
void miqt_exec_callback_QDesignerFormEditorPluginInterface_initialize(QDesignerFormEditorPluginInterface*, intptr_t, QDesignerFormEditorInterface*);
QAction* miqt_exec_callback_QDesignerFormEditorPluginInterface_action(const QDesignerFormEditorPluginInterface*, intptr_t);
QDesignerFormEditorInterface* miqt_exec_callback_QDesignerFormEditorPluginInterface_core(const QDesignerFormEditorPluginInterface*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQDesignerFormEditorPluginInterface final : public QDesignerFormEditorPluginInterface {
public:

	MiqtVirtualQDesignerFormEditorPluginInterface(): QDesignerFormEditorPluginInterface() {}

	virtual ~MiqtVirtualQDesignerFormEditorPluginInterface() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerFormEditorPluginInterface> handle__isInitialized;

	// Subclass to allow providing a Go implementation
	virtual bool isInitialized() const override {
		if (!handle__isInitialized) {
			return false; // Pure virtual, there is no base we can call
		}

		bool callback_return_value = miqt_exec_callback_QDesignerFormEditorPluginInterface_isInitialized(this, handle__isInitialized.value());
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerFormEditorPluginInterface> handle__initialize;

	// Subclass to allow providing a Go implementation
	virtual void initialize(QDesignerFormEditorInterface* core) override {
		if (!handle__initialize) {
			return; // Pure virtual, there is no base we can call
		}

		QDesignerFormEditorInterface* sigval1 = core;
		miqt_exec_callback_QDesignerFormEditorPluginInterface_initialize(this, handle__initialize.value(), sigval1);

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerFormEditorPluginInterface> handle__action;

	// Subclass to allow providing a Go implementation
	virtual QAction* action() const override {
		if (!handle__action) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		QAction* callback_return_value = miqt_exec_callback_QDesignerFormEditorPluginInterface_action(this, handle__action.value());
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerFormEditorPluginInterface> handle__core;

	// Subclass to allow providing a Go implementation
	virtual QDesignerFormEditorInterface* core() const override {
		if (!handle__core) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		QDesignerFormEditorInterface* callback_return_value = miqt_exec_callback_QDesignerFormEditorPluginInterface_core(this, handle__core.value());
		return callback_return_value;
	}

};

QDesignerFormEditorPluginInterface* QDesignerFormEditorPluginInterface_new() {
	return new (std::nothrow) MiqtVirtualQDesignerFormEditorPluginInterface();
}

bool QDesignerFormEditorPluginInterface_isInitialized(const QDesignerFormEditorPluginInterface* self) {
	return self->isInitialized();
}

void QDesignerFormEditorPluginInterface_initialize(QDesignerFormEditorPluginInterface* self, QDesignerFormEditorInterface* core) {
	self->initialize(core);
}

QAction* QDesignerFormEditorPluginInterface_action(const QDesignerFormEditorPluginInterface* self) {
	return self->action();
}

QDesignerFormEditorInterface* QDesignerFormEditorPluginInterface_core(const QDesignerFormEditorPluginInterface* self) {
	return self->core();
}

bool QDesignerFormEditorPluginInterface_override_virtual_isInitialized(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerFormEditorPluginInterface> slot_handle(slot);
	MiqtVirtualQDesignerFormEditorPluginInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormEditorPluginInterface*>( (QDesignerFormEditorPluginInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isInitialized = std::move(slot_handle);
	return true;
}

bool QDesignerFormEditorPluginInterface_override_virtual_initialize(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerFormEditorPluginInterface> slot_handle(slot);
	MiqtVirtualQDesignerFormEditorPluginInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormEditorPluginInterface*>( (QDesignerFormEditorPluginInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initialize = std::move(slot_handle);
	return true;
}

bool QDesignerFormEditorPluginInterface_override_virtual_action(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerFormEditorPluginInterface> slot_handle(slot);
	MiqtVirtualQDesignerFormEditorPluginInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormEditorPluginInterface*>( (QDesignerFormEditorPluginInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__action = std::move(slot_handle);
	return true;
}

bool QDesignerFormEditorPluginInterface_override_virtual_core(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerFormEditorPluginInterface> slot_handle(slot);
	MiqtVirtualQDesignerFormEditorPluginInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerFormEditorPluginInterface*>( (QDesignerFormEditorPluginInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__core = std::move(slot_handle);
	return true;
}

void QDesignerFormEditorPluginInterface_delete(QDesignerFormEditorPluginInterface* self) {
	delete self;
}

