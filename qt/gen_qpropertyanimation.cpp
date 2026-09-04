#include <memory>
#include <utility>
#include <QAbstractAnimation>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPropertyAnimation>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <QVariantAnimation>
#include <qpropertyanimation.h>
#include "gen_qpropertyanimation.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QPropertyAnimation(intptr_t);
bool miqt_exec_callback_QPropertyAnimation_event(QPropertyAnimation*, intptr_t, QEvent*);
void miqt_exec_callback_QPropertyAnimation_updateCurrentValue(QPropertyAnimation*, intptr_t, QVariant*);
void miqt_exec_callback_QPropertyAnimation_updateState(QPropertyAnimation*, intptr_t, int, int);
int miqt_exec_callback_QPropertyAnimation_duration(const QPropertyAnimation*, intptr_t);
void miqt_exec_callback_QPropertyAnimation_updateCurrentTime(QPropertyAnimation*, intptr_t, int);
QVariant* miqt_exec_callback_QPropertyAnimation_interpolated(const QPropertyAnimation*, intptr_t, QVariant*, QVariant*, double);
void miqt_exec_callback_QPropertyAnimation_updateDirection(QPropertyAnimation*, intptr_t, int);
bool miqt_exec_callback_QPropertyAnimation_eventFilter(QPropertyAnimation*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QPropertyAnimation_timerEvent(QPropertyAnimation*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QPropertyAnimation_childEvent(QPropertyAnimation*, intptr_t, QChildEvent*);
void miqt_exec_callback_QPropertyAnimation_customEvent(QPropertyAnimation*, intptr_t, QEvent*);
void miqt_exec_callback_QPropertyAnimation_connectNotify(QPropertyAnimation*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPropertyAnimation_disconnectNotify(QPropertyAnimation*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQPropertyAnimation final : public QPropertyAnimation {
public:

	MiqtVirtualQPropertyAnimation(): QPropertyAnimation() {}
	MiqtVirtualQPropertyAnimation(QObject* target, const QByteArray& propertyName): QPropertyAnimation(target, propertyName) {}
	MiqtVirtualQPropertyAnimation(QObject* parent): QPropertyAnimation(parent) {}
	MiqtVirtualQPropertyAnimation(QObject* target, const QByteArray& propertyName, QObject* parent): QPropertyAnimation(target, propertyName, parent) {}

	virtual ~MiqtVirtualQPropertyAnimation() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPropertyAnimation> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QPropertyAnimation::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QPropertyAnimation_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QPropertyAnimation_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPropertyAnimation> handle__updateCurrentValue;

	// Subclass to allow providing a Go implementation
	virtual void updateCurrentValue(const QVariant& value) override {
		if (!handle__updateCurrentValue) {
			QPropertyAnimation::updateCurrentValue(value);
			return;
		}

		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&value_ret);
		miqt_exec_callback_QPropertyAnimation_updateCurrentValue(this, handle__updateCurrentValue.value(), sigval1);

	}

	friend void QPropertyAnimation_virtualbase_updateCurrentValue(void* self, QVariant* value);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPropertyAnimation> handle__updateState;

	// Subclass to allow providing a Go implementation
	virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) override {
		if (!handle__updateState) {
			QPropertyAnimation::updateState(newState, oldState);
			return;
		}

		QAbstractAnimation::State newState_ret = newState;
		int sigval1 = static_cast<int>(newState_ret);
		QAbstractAnimation::State oldState_ret = oldState;
		int sigval2 = static_cast<int>(oldState_ret);
		miqt_exec_callback_QPropertyAnimation_updateState(this, handle__updateState.value(), sigval1, sigval2);

	}

	friend void QPropertyAnimation_virtualbase_updateState(void* self, int newState, int oldState);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPropertyAnimation> handle__duration;

	// Subclass to allow providing a Go implementation
	virtual int duration() const override {
		if (!handle__duration) {
			return QPropertyAnimation::duration();
		}

		int callback_return_value = miqt_exec_callback_QPropertyAnimation_duration(this, handle__duration.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QPropertyAnimation_virtualbase_duration(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPropertyAnimation> handle__updateCurrentTime;

	// Subclass to allow providing a Go implementation
	virtual void updateCurrentTime(int param1) override {
		if (!handle__updateCurrentTime) {
			QPropertyAnimation::updateCurrentTime(param1);
			return;
		}

		int sigval1 = param1;
		miqt_exec_callback_QPropertyAnimation_updateCurrentTime(this, handle__updateCurrentTime.value(), sigval1);

	}

	friend void QPropertyAnimation_virtualbase_updateCurrentTime(void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPropertyAnimation> handle__interpolated;
	bool owns_return__interpolated = false;

	// Subclass to allow providing a Go implementation
	virtual QVariant interpolated(const QVariant& from, const QVariant& to, qreal progress) const override {
		if (!handle__interpolated) {
			return QPropertyAnimation::interpolated(from, to, progress);
		}

		const QVariant& from_ret = from;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&from_ret);
		const QVariant& to_ret = to;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&to_ret);
		qreal progress_ret = progress;
		double sigval3 = static_cast<double>(progress_ret);
		QVariant* callback_return_value = miqt_exec_callback_QPropertyAnimation_interpolated(this, handle__interpolated.value(), sigval1, sigval2, sigval3);
		std::unique_ptr<QVariant> callback_return_value_owner;
		if (owns_return__interpolated) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QVariant* QPropertyAnimation_virtualbase_interpolated(const void* self, QVariant* from, QVariant* to, double progress);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPropertyAnimation> handle__updateDirection;

	// Subclass to allow providing a Go implementation
	virtual void updateDirection(QAbstractAnimation::Direction direction) override {
		if (!handle__updateDirection) {
			QPropertyAnimation::updateDirection(direction);
			return;
		}

		QAbstractAnimation::Direction direction_ret = direction;
		int sigval1 = static_cast<int>(direction_ret);
		miqt_exec_callback_QPropertyAnimation_updateDirection(this, handle__updateDirection.value(), sigval1);

	}

	friend void QPropertyAnimation_virtualbase_updateDirection(void* self, int direction);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPropertyAnimation> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QPropertyAnimation::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QPropertyAnimation_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QPropertyAnimation_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPropertyAnimation> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QPropertyAnimation::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QPropertyAnimation_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QPropertyAnimation_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPropertyAnimation> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QPropertyAnimation::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QPropertyAnimation_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QPropertyAnimation_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPropertyAnimation> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QPropertyAnimation::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QPropertyAnimation_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QPropertyAnimation_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPropertyAnimation> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QPropertyAnimation::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QPropertyAnimation_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QPropertyAnimation_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPropertyAnimation> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QPropertyAnimation::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QPropertyAnimation_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QPropertyAnimation_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QPropertyAnimation_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QPropertyAnimation_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QPropertyAnimation_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QPropertyAnimation_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QPropertyAnimation* QPropertyAnimation_new() {
	return new (std::nothrow) MiqtVirtualQPropertyAnimation();
}

QPropertyAnimation* QPropertyAnimation_new2(QObject* target, struct miqt_string propertyName) {
	QByteArray propertyName_QByteArray(propertyName.data, propertyName.len);
	return new (std::nothrow) MiqtVirtualQPropertyAnimation(target, propertyName_QByteArray);
}

QPropertyAnimation* QPropertyAnimation_new3(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQPropertyAnimation(parent);
}

QPropertyAnimation* QPropertyAnimation_new4(QObject* target, struct miqt_string propertyName, QObject* parent) {
	QByteArray propertyName_QByteArray(propertyName.data, propertyName.len);
	return new (std::nothrow) MiqtVirtualQPropertyAnimation(target, propertyName_QByteArray, parent);
}

void QPropertyAnimation_virtbase(QPropertyAnimation* src, QVariantAnimation** outptr_QVariantAnimation) {
	*outptr_QVariantAnimation = static_cast<QVariantAnimation*>(src);
}

QMetaObject* QPropertyAnimation_metaObject(const QPropertyAnimation* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPropertyAnimation_metacast(QPropertyAnimation* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPropertyAnimation_tr(const char* s) {
	QString _ret = QPropertyAnimation::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPropertyAnimation_trUtf8(const char* s) {
	QString _ret = QPropertyAnimation::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QObject* QPropertyAnimation_targetObject(const QPropertyAnimation* self) {
	return self->targetObject();
}

void QPropertyAnimation_setTargetObject(QPropertyAnimation* self, QObject* target) {
	self->setTargetObject(target);
}

struct miqt_string QPropertyAnimation_propertyName(const QPropertyAnimation* self) {
	QByteArray _qb = self->propertyName();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QPropertyAnimation_setPropertyName(QPropertyAnimation* self, struct miqt_string propertyName) {
	QByteArray propertyName_QByteArray(propertyName.data, propertyName.len);
	self->setPropertyName(propertyName_QByteArray);
}

struct miqt_string QPropertyAnimation_tr2(const char* s, const char* c) {
	QString _ret = QPropertyAnimation::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPropertyAnimation_tr3(const char* s, const char* c, int n) {
	QString _ret = QPropertyAnimation::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPropertyAnimation_trUtf82(const char* s, const char* c) {
	QString _ret = QPropertyAnimation::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPropertyAnimation_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QPropertyAnimation::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPropertyAnimation_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPropertyAnimation> slot_handle(slot);
	MiqtVirtualQPropertyAnimation* self_cast = dynamic_cast<MiqtVirtualQPropertyAnimation*>( (QPropertyAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QPropertyAnimation_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQPropertyAnimation*>(self)->QPropertyAnimation::event(event);
}

bool QPropertyAnimation_override_virtual_updateCurrentValue(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPropertyAnimation> slot_handle(slot);
	MiqtVirtualQPropertyAnimation* self_cast = dynamic_cast<MiqtVirtualQPropertyAnimation*>( (QPropertyAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateCurrentValue = std::move(slot_handle);
	return true;
}

void QPropertyAnimation_virtualbase_updateCurrentValue(void* self, QVariant* value) {
	static_cast<MiqtVirtualQPropertyAnimation*>(self)->QPropertyAnimation::updateCurrentValue(*value);
}

bool QPropertyAnimation_override_virtual_updateState(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPropertyAnimation> slot_handle(slot);
	MiqtVirtualQPropertyAnimation* self_cast = dynamic_cast<MiqtVirtualQPropertyAnimation*>( (QPropertyAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateState = std::move(slot_handle);
	return true;
}

void QPropertyAnimation_virtualbase_updateState(void* self, int newState, int oldState) {
	static_cast<MiqtVirtualQPropertyAnimation*>(self)->QPropertyAnimation::updateState(static_cast<MiqtVirtualQPropertyAnimation::State>(newState), static_cast<MiqtVirtualQPropertyAnimation::State>(oldState));
}

bool QPropertyAnimation_override_virtual_duration(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPropertyAnimation> slot_handle(slot);
	MiqtVirtualQPropertyAnimation* self_cast = dynamic_cast<MiqtVirtualQPropertyAnimation*>( (QPropertyAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__duration = std::move(slot_handle);
	return true;
}

int QPropertyAnimation_virtualbase_duration(const void* self) {
	return static_cast<const MiqtVirtualQPropertyAnimation*>(self)->QPropertyAnimation::duration();
}

bool QPropertyAnimation_override_virtual_updateCurrentTime(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPropertyAnimation> slot_handle(slot);
	MiqtVirtualQPropertyAnimation* self_cast = dynamic_cast<MiqtVirtualQPropertyAnimation*>( (QPropertyAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateCurrentTime = std::move(slot_handle);
	return true;
}

void QPropertyAnimation_virtualbase_updateCurrentTime(void* self, int param1) {
	static_cast<MiqtVirtualQPropertyAnimation*>(self)->QPropertyAnimation::updateCurrentTime(static_cast<int>(param1));
}

bool QPropertyAnimation_override_virtual_interpolated(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPropertyAnimation> slot_handle(slot);
	MiqtVirtualQPropertyAnimation* self_cast = dynamic_cast<MiqtVirtualQPropertyAnimation*>( (QPropertyAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__interpolated = std::move(slot_handle);
	self_cast->owns_return__interpolated = false;
	return true;
}

bool QPropertyAnimation_override_virtual_owned_interpolated(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPropertyAnimation> slot_handle(slot);
	MiqtVirtualQPropertyAnimation* self_cast = dynamic_cast<MiqtVirtualQPropertyAnimation*>( (QPropertyAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__interpolated = std::move(slot_handle);
	self_cast->owns_return__interpolated = true;
	return true;
}

QVariant* QPropertyAnimation_virtualbase_interpolated(const void* self, QVariant* from, QVariant* to, double progress) {
	return new QVariant(static_cast<const MiqtVirtualQPropertyAnimation*>(self)->QPropertyAnimation::interpolated(*from, *to, static_cast<qreal>(progress)));
}

bool QPropertyAnimation_override_virtual_updateDirection(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPropertyAnimation> slot_handle(slot);
	MiqtVirtualQPropertyAnimation* self_cast = dynamic_cast<MiqtVirtualQPropertyAnimation*>( (QPropertyAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateDirection = std::move(slot_handle);
	return true;
}

void QPropertyAnimation_virtualbase_updateDirection(void* self, int direction) {
	static_cast<MiqtVirtualQPropertyAnimation*>(self)->QPropertyAnimation::updateDirection(static_cast<MiqtVirtualQPropertyAnimation::Direction>(direction));
}

bool QPropertyAnimation_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPropertyAnimation> slot_handle(slot);
	MiqtVirtualQPropertyAnimation* self_cast = dynamic_cast<MiqtVirtualQPropertyAnimation*>( (QPropertyAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QPropertyAnimation_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQPropertyAnimation*>(self)->QPropertyAnimation::eventFilter(watched, event);
}

bool QPropertyAnimation_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPropertyAnimation> slot_handle(slot);
	MiqtVirtualQPropertyAnimation* self_cast = dynamic_cast<MiqtVirtualQPropertyAnimation*>( (QPropertyAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QPropertyAnimation_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQPropertyAnimation*>(self)->QPropertyAnimation::timerEvent(event);
}

bool QPropertyAnimation_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPropertyAnimation> slot_handle(slot);
	MiqtVirtualQPropertyAnimation* self_cast = dynamic_cast<MiqtVirtualQPropertyAnimation*>( (QPropertyAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QPropertyAnimation_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQPropertyAnimation*>(self)->QPropertyAnimation::childEvent(event);
}

bool QPropertyAnimation_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPropertyAnimation> slot_handle(slot);
	MiqtVirtualQPropertyAnimation* self_cast = dynamic_cast<MiqtVirtualQPropertyAnimation*>( (QPropertyAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QPropertyAnimation_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQPropertyAnimation*>(self)->QPropertyAnimation::customEvent(event);
}

bool QPropertyAnimation_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPropertyAnimation> slot_handle(slot);
	MiqtVirtualQPropertyAnimation* self_cast = dynamic_cast<MiqtVirtualQPropertyAnimation*>( (QPropertyAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QPropertyAnimation_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQPropertyAnimation*>(self)->QPropertyAnimation::connectNotify(*signal);
}

bool QPropertyAnimation_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPropertyAnimation> slot_handle(slot);
	MiqtVirtualQPropertyAnimation* self_cast = dynamic_cast<MiqtVirtualQPropertyAnimation*>( (QPropertyAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QPropertyAnimation_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQPropertyAnimation*>(self)->QPropertyAnimation::disconnectNotify(*signal);
}

QObject* QPropertyAnimation_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPropertyAnimation* self_cast = dynamic_cast<MiqtVirtualQPropertyAnimation*>( (QPropertyAnimation*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QPropertyAnimation_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPropertyAnimation* self_cast = dynamic_cast<MiqtVirtualQPropertyAnimation*>( (QPropertyAnimation*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QPropertyAnimation_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQPropertyAnimation* self_cast = dynamic_cast<MiqtVirtualQPropertyAnimation*>( (QPropertyAnimation*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QPropertyAnimation_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQPropertyAnimation* self_cast = dynamic_cast<MiqtVirtualQPropertyAnimation*>( (QPropertyAnimation*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QPropertyAnimation_delete(QPropertyAnimation* self) {
	delete self;
}

