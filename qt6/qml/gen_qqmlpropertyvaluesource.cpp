#include <memory>
#include <utility>
#include <QQmlProperty>
#include <QQmlPropertyValueSource>
#include <qqmlpropertyvaluesource.h>
#include "gen_qqmlpropertyvaluesource.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QQmlPropertyValueSource(intptr_t);
void miqt_exec_callback_QQmlPropertyValueSource_setTarget(QQmlPropertyValueSource*, intptr_t, QQmlProperty*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQQmlPropertyValueSource final : public QQmlPropertyValueSource {
public:

	MiqtVirtualQQmlPropertyValueSource(): QQmlPropertyValueSource() {}

	virtual ~MiqtVirtualQQmlPropertyValueSource() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlPropertyValueSource> handle__setTarget;

	// Subclass to allow providing a Go implementation
	virtual void setTarget(const QQmlProperty& target) override {
		if (!handle__setTarget) {
			return; // Pure virtual, there is no base we can call
		}

		const QQmlProperty& target_ret = target;
		// Cast returned reference into pointer
		QQmlProperty* sigval1 = const_cast<QQmlProperty*>(&target_ret);
		miqt_exec_callback_QQmlPropertyValueSource_setTarget(this, handle__setTarget.value(), sigval1);

	}

};

QQmlPropertyValueSource* QQmlPropertyValueSource_new() {
	return new (std::nothrow) MiqtVirtualQQmlPropertyValueSource();
}

void QQmlPropertyValueSource_setTarget(QQmlPropertyValueSource* self, QQmlProperty* target) {
	self->setTarget(*target);
}

void QQmlPropertyValueSource_operatorAssign(QQmlPropertyValueSource* self, QQmlPropertyValueSource* param1) {
	self->operator=(*param1);
}

bool QQmlPropertyValueSource_override_virtual_setTarget(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QQmlPropertyValueSource> slot_handle(slot);
	MiqtVirtualQQmlPropertyValueSource* self_cast = dynamic_cast<MiqtVirtualQQmlPropertyValueSource*>( (QQmlPropertyValueSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setTarget = std::move(slot_handle);
	return true;
}

void QQmlPropertyValueSource_delete(QQmlPropertyValueSource* self) {
	delete self;
}

