#include <memory>
#include <utility>
#include <QRunnable>
#include <qrunnable.h>
#include "gen_qrunnable.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QRunnable(intptr_t);
void miqt_exec_callback_QRunnable_run(QRunnable*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQRunnable final : public QRunnable {
public:

	MiqtVirtualQRunnable(): QRunnable() {}

	virtual ~MiqtVirtualQRunnable() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QRunnable> handle__run;

	// Subclass to allow providing a Go implementation
	virtual void run() override {
		if (!handle__run) {
			return; // Pure virtual, there is no base we can call
		}

		miqt_exec_callback_QRunnable_run(this, handle__run.value());

	}

};

QRunnable* QRunnable_new() {
	return new (std::nothrow) MiqtVirtualQRunnable();
}

void QRunnable_run(QRunnable* self) {
	self->run();
}

bool QRunnable_autoDelete(const QRunnable* self) {
	return self->autoDelete();
}

void QRunnable_setAutoDelete(QRunnable* self, bool _autoDelete) {
	self->setAutoDelete(_autoDelete);
}

void QRunnable_operatorAssign(QRunnable* self, QRunnable* param1) {
	self->operator=(*param1);
}

bool QRunnable_override_virtual_run(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QRunnable> slot_handle(slot);
	MiqtVirtualQRunnable* self_cast = dynamic_cast<MiqtVirtualQRunnable*>( (QRunnable*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__run = std::move(slot_handle);
	return true;
}

void QRunnable_delete(QRunnable* self) {
	delete self;
}

