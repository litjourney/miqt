#include <memory>
#include <utility>
#include <QQmlParserStatus>
#include <qqmlparserstatus.h>
#include "gen_qqmlparserstatus.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QQmlParserStatus(intptr_t);
void miqt_exec_callback_QQmlParserStatus_classBegin(QQmlParserStatus*, intptr_t);
void miqt_exec_callback_QQmlParserStatus_componentComplete(QQmlParserStatus*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQQmlParserStatus final : public QQmlParserStatus {
public:

	MiqtVirtualQQmlParserStatus(): QQmlParserStatus() {}

	virtual ~MiqtVirtualQQmlParserStatus() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlParserStatus> handle__classBegin;

	// Subclass to allow providing a Go implementation
	virtual void classBegin() override {
		if (!handle__classBegin) {
			return; // Pure virtual, there is no base we can call
		}

		miqt_exec_callback_QQmlParserStatus_classBegin(this, handle__classBegin.value());

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlParserStatus> handle__componentComplete;

	// Subclass to allow providing a Go implementation
	virtual void componentComplete() override {
		if (!handle__componentComplete) {
			return; // Pure virtual, there is no base we can call
		}

		miqt_exec_callback_QQmlParserStatus_componentComplete(this, handle__componentComplete.value());

	}

};

QQmlParserStatus* QQmlParserStatus_new() {
	return new (std::nothrow) MiqtVirtualQQmlParserStatus();
}

void QQmlParserStatus_classBegin(QQmlParserStatus* self) {
	self->classBegin();
}

void QQmlParserStatus_componentComplete(QQmlParserStatus* self) {
	self->componentComplete();
}

void QQmlParserStatus_operatorAssign(QQmlParserStatus* self, QQmlParserStatus* param1) {
	self->operator=(*param1);
}

bool QQmlParserStatus_override_virtual_classBegin(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlParserStatus> slot_handle(slot);
	MiqtVirtualQQmlParserStatus* self_cast = dynamic_cast<MiqtVirtualQQmlParserStatus*>( (QQmlParserStatus*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__classBegin = std::move(slot_handle);
	return true;
}

bool QQmlParserStatus_override_virtual_componentComplete(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlParserStatus> slot_handle(slot);
	MiqtVirtualQQmlParserStatus* self_cast = dynamic_cast<MiqtVirtualQQmlParserStatus*>( (QQmlParserStatus*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__componentComplete = std::move(slot_handle);
	return true;
}

void QQmlParserStatus_delete(QQmlParserStatus* self) {
	delete self;
}

