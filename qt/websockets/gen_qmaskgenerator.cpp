#include <memory>
#include <utility>
#include <QChildEvent>
#include <QEvent>
#include <QMaskGenerator>
#include <QMetaMethod>
#include <QObject>
#include <QTimerEvent>
#include <qmaskgenerator.h>
#include "gen_qmaskgenerator.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QMaskGenerator(intptr_t);
bool miqt_exec_callback_QMaskGenerator_seed(QMaskGenerator*, intptr_t);
unsigned int miqt_exec_callback_QMaskGenerator_nextMask(QMaskGenerator*, intptr_t);
bool miqt_exec_callback_QMaskGenerator_event(QMaskGenerator*, intptr_t, QEvent*);
bool miqt_exec_callback_QMaskGenerator_eventFilter(QMaskGenerator*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QMaskGenerator_timerEvent(QMaskGenerator*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QMaskGenerator_childEvent(QMaskGenerator*, intptr_t, QChildEvent*);
void miqt_exec_callback_QMaskGenerator_customEvent(QMaskGenerator*, intptr_t, QEvent*);
void miqt_exec_callback_QMaskGenerator_connectNotify(QMaskGenerator*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QMaskGenerator_disconnectNotify(QMaskGenerator*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQMaskGenerator final : public QMaskGenerator {
public:

	MiqtVirtualQMaskGenerator(): QMaskGenerator() {}
	MiqtVirtualQMaskGenerator(QObject* parent): QMaskGenerator(parent) {}

	virtual ~MiqtVirtualQMaskGenerator() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMaskGenerator> handle__seed;

	// Subclass to allow providing a Go implementation
	virtual bool seed() override {
		if (!handle__seed) {
			return false; // Pure virtual, there is no base we can call
		}

		bool callback_return_value = miqt_exec_callback_QMaskGenerator_seed(this, handle__seed.value());
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMaskGenerator> handle__nextMask;

	// Subclass to allow providing a Go implementation
	virtual quint32 nextMask() override {
		if (!handle__nextMask) {
			return 0; // Pure virtual, there is no base we can call
		}

		unsigned int callback_return_value = miqt_exec_callback_QMaskGenerator_nextMask(this, handle__nextMask.value());
		return static_cast<quint32>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMaskGenerator> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QMaskGenerator::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QMaskGenerator_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QMaskGenerator_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMaskGenerator> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QMaskGenerator::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QMaskGenerator_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QMaskGenerator_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMaskGenerator> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QMaskGenerator::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QMaskGenerator_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QMaskGenerator_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMaskGenerator> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QMaskGenerator::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QMaskGenerator_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QMaskGenerator_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMaskGenerator> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QMaskGenerator::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QMaskGenerator_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QMaskGenerator_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMaskGenerator> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QMaskGenerator::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QMaskGenerator_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QMaskGenerator_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMaskGenerator> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QMaskGenerator::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QMaskGenerator_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QMaskGenerator_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QMaskGenerator_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QMaskGenerator_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QMaskGenerator_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QMaskGenerator_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QMaskGenerator* QMaskGenerator_new() {
	return new (std::nothrow) MiqtVirtualQMaskGenerator();
}

QMaskGenerator* QMaskGenerator_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQMaskGenerator(parent);
}

void QMaskGenerator_virtbase(QMaskGenerator* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

bool QMaskGenerator_seed(QMaskGenerator* self) {
	return self->seed();
}

unsigned int QMaskGenerator_nextMask(QMaskGenerator* self) {
	quint32 _ret = self->nextMask();
	return static_cast<unsigned int>(_ret);
}

bool QMaskGenerator_override_virtual_seed(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMaskGenerator> slot_handle(slot);
	MiqtVirtualQMaskGenerator* self_cast = dynamic_cast<MiqtVirtualQMaskGenerator*>( (QMaskGenerator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__seed = std::move(slot_handle);
	return true;
}

bool QMaskGenerator_override_virtual_nextMask(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMaskGenerator> slot_handle(slot);
	MiqtVirtualQMaskGenerator* self_cast = dynamic_cast<MiqtVirtualQMaskGenerator*>( (QMaskGenerator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nextMask = std::move(slot_handle);
	return true;
}

bool QMaskGenerator_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMaskGenerator> slot_handle(slot);
	MiqtVirtualQMaskGenerator* self_cast = dynamic_cast<MiqtVirtualQMaskGenerator*>( (QMaskGenerator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QMaskGenerator_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQMaskGenerator*>(self)->QMaskGenerator::event(event);
}

bool QMaskGenerator_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMaskGenerator> slot_handle(slot);
	MiqtVirtualQMaskGenerator* self_cast = dynamic_cast<MiqtVirtualQMaskGenerator*>( (QMaskGenerator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QMaskGenerator_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQMaskGenerator*>(self)->QMaskGenerator::eventFilter(watched, event);
}

bool QMaskGenerator_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMaskGenerator> slot_handle(slot);
	MiqtVirtualQMaskGenerator* self_cast = dynamic_cast<MiqtVirtualQMaskGenerator*>( (QMaskGenerator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QMaskGenerator_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQMaskGenerator*>(self)->QMaskGenerator::timerEvent(event);
}

bool QMaskGenerator_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMaskGenerator> slot_handle(slot);
	MiqtVirtualQMaskGenerator* self_cast = dynamic_cast<MiqtVirtualQMaskGenerator*>( (QMaskGenerator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QMaskGenerator_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQMaskGenerator*>(self)->QMaskGenerator::childEvent(event);
}

bool QMaskGenerator_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMaskGenerator> slot_handle(slot);
	MiqtVirtualQMaskGenerator* self_cast = dynamic_cast<MiqtVirtualQMaskGenerator*>( (QMaskGenerator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QMaskGenerator_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQMaskGenerator*>(self)->QMaskGenerator::customEvent(event);
}

bool QMaskGenerator_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMaskGenerator> slot_handle(slot);
	MiqtVirtualQMaskGenerator* self_cast = dynamic_cast<MiqtVirtualQMaskGenerator*>( (QMaskGenerator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QMaskGenerator_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQMaskGenerator*>(self)->QMaskGenerator::connectNotify(*signal);
}

bool QMaskGenerator_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMaskGenerator> slot_handle(slot);
	MiqtVirtualQMaskGenerator* self_cast = dynamic_cast<MiqtVirtualQMaskGenerator*>( (QMaskGenerator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QMaskGenerator_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQMaskGenerator*>(self)->QMaskGenerator::disconnectNotify(*signal);
}

QObject* QMaskGenerator_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQMaskGenerator* self_cast = dynamic_cast<MiqtVirtualQMaskGenerator*>( (QMaskGenerator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QMaskGenerator_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQMaskGenerator* self_cast = dynamic_cast<MiqtVirtualQMaskGenerator*>( (QMaskGenerator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QMaskGenerator_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQMaskGenerator* self_cast = dynamic_cast<MiqtVirtualQMaskGenerator*>( (QMaskGenerator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QMaskGenerator_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQMaskGenerator* self_cast = dynamic_cast<MiqtVirtualQMaskGenerator*>( (QMaskGenerator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QMaskGenerator_delete(QMaskGenerator* self) {
	delete self;
}

