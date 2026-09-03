#include <memory>
#include <utility>
#include <QAbstractAnimation>
#include <QAnimationGroup>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qanimationgroup.h>
#include "gen_qanimationgroup.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QAnimationGroup(intptr_t);
bool miqt_exec_callback_QAnimationGroup_event(QAnimationGroup*, intptr_t, QEvent*);
int miqt_exec_callback_QAnimationGroup_duration(const QAnimationGroup*, intptr_t);
void miqt_exec_callback_QAnimationGroup_updateCurrentTime(QAnimationGroup*, intptr_t, int);
void miqt_exec_callback_QAnimationGroup_updateState(QAnimationGroup*, intptr_t, int, int);
void miqt_exec_callback_QAnimationGroup_updateDirection(QAnimationGroup*, intptr_t, int);
bool miqt_exec_callback_QAnimationGroup_eventFilter(QAnimationGroup*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAnimationGroup_timerEvent(QAnimationGroup*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAnimationGroup_childEvent(QAnimationGroup*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAnimationGroup_customEvent(QAnimationGroup*, intptr_t, QEvent*);
void miqt_exec_callback_QAnimationGroup_connectNotify(QAnimationGroup*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAnimationGroup_disconnectNotify(QAnimationGroup*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAnimationGroup final : public QAnimationGroup {
public:

	MiqtVirtualQAnimationGroup(): QAnimationGroup() {}
	MiqtVirtualQAnimationGroup(QObject* parent): QAnimationGroup(parent) {}

	virtual ~MiqtVirtualQAnimationGroup() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAnimationGroup> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QAnimationGroup::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QAnimationGroup_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QAnimationGroup_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAnimationGroup> handle__duration;

	// Subclass to allow providing a Go implementation
	virtual int duration() const override {
		if (!handle__duration) {
			return 0; // Pure virtual, there is no base we can call
		}

		int callback_return_value = miqt_exec_callback_QAnimationGroup_duration(this, handle__duration.value());
		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAnimationGroup> handle__updateCurrentTime;

	// Subclass to allow providing a Go implementation
	virtual void updateCurrentTime(int currentTime) override {
		if (!handle__updateCurrentTime) {
			return; // Pure virtual, there is no base we can call
		}

		int sigval1 = currentTime;
		miqt_exec_callback_QAnimationGroup_updateCurrentTime(this, handle__updateCurrentTime.value(), sigval1);

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAnimationGroup> handle__updateState;

	// Subclass to allow providing a Go implementation
	virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) override {
		if (!handle__updateState) {
			QAnimationGroup::updateState(newState, oldState);
			return;
		}

		QAbstractAnimation::State newState_ret = newState;
		int sigval1 = static_cast<int>(newState_ret);
		QAbstractAnimation::State oldState_ret = oldState;
		int sigval2 = static_cast<int>(oldState_ret);
		miqt_exec_callback_QAnimationGroup_updateState(this, handle__updateState.value(), sigval1, sigval2);

	}

	friend void QAnimationGroup_virtualbase_updateState(void* self, int newState, int oldState);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAnimationGroup> handle__updateDirection;

	// Subclass to allow providing a Go implementation
	virtual void updateDirection(QAbstractAnimation::Direction direction) override {
		if (!handle__updateDirection) {
			QAnimationGroup::updateDirection(direction);
			return;
		}

		QAbstractAnimation::Direction direction_ret = direction;
		int sigval1 = static_cast<int>(direction_ret);
		miqt_exec_callback_QAnimationGroup_updateDirection(this, handle__updateDirection.value(), sigval1);

	}

	friend void QAnimationGroup_virtualbase_updateDirection(void* self, int direction);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAnimationGroup> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QAnimationGroup::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QAnimationGroup_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QAnimationGroup_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAnimationGroup> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QAnimationGroup::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QAnimationGroup_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QAnimationGroup_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAnimationGroup> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QAnimationGroup::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QAnimationGroup_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QAnimationGroup_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAnimationGroup> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QAnimationGroup::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QAnimationGroup_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QAnimationGroup_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAnimationGroup> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QAnimationGroup::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QAnimationGroup_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QAnimationGroup_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAnimationGroup> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QAnimationGroup::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QAnimationGroup_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QAnimationGroup_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QAnimationGroup_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAnimationGroup_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAnimationGroup_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAnimationGroup_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QAnimationGroup* QAnimationGroup_new() {
	return new (std::nothrow) MiqtVirtualQAnimationGroup();
}

QAnimationGroup* QAnimationGroup_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQAnimationGroup(parent);
}

void QAnimationGroup_virtbase(QAnimationGroup* src, QAbstractAnimation** outptr_QAbstractAnimation) {
	*outptr_QAbstractAnimation = static_cast<QAbstractAnimation*>(src);
}

QMetaObject* QAnimationGroup_metaObject(const QAnimationGroup* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAnimationGroup_metacast(QAnimationGroup* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAnimationGroup_tr(const char* s) {
	QString _ret = QAnimationGroup::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAbstractAnimation* QAnimationGroup_animationAt(const QAnimationGroup* self, int index) {
	return self->animationAt(static_cast<int>(index));
}

int QAnimationGroup_animationCount(const QAnimationGroup* self) {
	return self->animationCount();
}

int QAnimationGroup_indexOfAnimation(const QAnimationGroup* self, QAbstractAnimation* animation) {
	return self->indexOfAnimation(animation);
}

void QAnimationGroup_addAnimation(QAnimationGroup* self, QAbstractAnimation* animation) {
	self->addAnimation(animation);
}

void QAnimationGroup_insertAnimation(QAnimationGroup* self, int index, QAbstractAnimation* animation) {
	self->insertAnimation(static_cast<int>(index), animation);
}

void QAnimationGroup_removeAnimation(QAnimationGroup* self, QAbstractAnimation* animation) {
	self->removeAnimation(animation);
}

QAbstractAnimation* QAnimationGroup_takeAnimation(QAnimationGroup* self, int index) {
	return self->takeAnimation(static_cast<int>(index));
}

void QAnimationGroup_clear(QAnimationGroup* self) {
	self->clear();
}

struct miqt_string QAnimationGroup_tr2(const char* s, const char* c) {
	QString _ret = QAnimationGroup::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAnimationGroup_tr3(const char* s, const char* c, int n) {
	QString _ret = QAnimationGroup::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAnimationGroup_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAnimationGroup> slot_handle(slot);
	MiqtVirtualQAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQAnimationGroup*>( (QAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QAnimationGroup_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQAnimationGroup*>(self)->QAnimationGroup::event(event);
}

bool QAnimationGroup_override_virtual_duration(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAnimationGroup> slot_handle(slot);
	MiqtVirtualQAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQAnimationGroup*>( (QAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__duration = std::move(slot_handle);
	return true;
}

bool QAnimationGroup_override_virtual_updateCurrentTime(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAnimationGroup> slot_handle(slot);
	MiqtVirtualQAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQAnimationGroup*>( (QAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateCurrentTime = std::move(slot_handle);
	return true;
}

bool QAnimationGroup_override_virtual_updateState(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAnimationGroup> slot_handle(slot);
	MiqtVirtualQAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQAnimationGroup*>( (QAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateState = std::move(slot_handle);
	return true;
}

void QAnimationGroup_virtualbase_updateState(void* self, int newState, int oldState) {
	static_cast<MiqtVirtualQAnimationGroup*>(self)->QAnimationGroup::updateState(static_cast<MiqtVirtualQAnimationGroup::State>(newState), static_cast<MiqtVirtualQAnimationGroup::State>(oldState));
}

bool QAnimationGroup_override_virtual_updateDirection(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAnimationGroup> slot_handle(slot);
	MiqtVirtualQAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQAnimationGroup*>( (QAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateDirection = std::move(slot_handle);
	return true;
}

void QAnimationGroup_virtualbase_updateDirection(void* self, int direction) {
	static_cast<MiqtVirtualQAnimationGroup*>(self)->QAnimationGroup::updateDirection(static_cast<MiqtVirtualQAnimationGroup::Direction>(direction));
}

bool QAnimationGroup_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAnimationGroup> slot_handle(slot);
	MiqtVirtualQAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQAnimationGroup*>( (QAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QAnimationGroup_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQAnimationGroup*>(self)->QAnimationGroup::eventFilter(watched, event);
}

bool QAnimationGroup_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAnimationGroup> slot_handle(slot);
	MiqtVirtualQAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQAnimationGroup*>( (QAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QAnimationGroup_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQAnimationGroup*>(self)->QAnimationGroup::timerEvent(event);
}

bool QAnimationGroup_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAnimationGroup> slot_handle(slot);
	MiqtVirtualQAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQAnimationGroup*>( (QAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QAnimationGroup_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQAnimationGroup*>(self)->QAnimationGroup::childEvent(event);
}

bool QAnimationGroup_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAnimationGroup> slot_handle(slot);
	MiqtVirtualQAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQAnimationGroup*>( (QAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QAnimationGroup_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQAnimationGroup*>(self)->QAnimationGroup::customEvent(event);
}

bool QAnimationGroup_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAnimationGroup> slot_handle(slot);
	MiqtVirtualQAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQAnimationGroup*>( (QAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QAnimationGroup_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQAnimationGroup*>(self)->QAnimationGroup::connectNotify(*signal);
}

bool QAnimationGroup_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAnimationGroup> slot_handle(slot);
	MiqtVirtualQAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQAnimationGroup*>( (QAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QAnimationGroup_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQAnimationGroup*>(self)->QAnimationGroup::disconnectNotify(*signal);
}

QObject* QAnimationGroup_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQAnimationGroup*>( (QAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QAnimationGroup_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQAnimationGroup*>( (QAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QAnimationGroup_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQAnimationGroup*>( (QAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QAnimationGroup_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAnimationGroup* self_cast = dynamic_cast<MiqtVirtualQAnimationGroup*>( (QAnimationGroup*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QAnimationGroup_delete(QAnimationGroup* self) {
	delete self;
}

