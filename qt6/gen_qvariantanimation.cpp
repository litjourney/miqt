#include <memory>
#include <utility>
#include <QAbstractAnimation>
#include <QChildEvent>
#include <QEasingCurve>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPair>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <QVariantAnimation>
#include <qvariantanimation.h>
#include "gen_qvariantanimation.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QVariantAnimation(intptr_t);
void miqt_exec_callback_QVariantAnimation_valueChanged(intptr_t, QVariant*);
int miqt_exec_callback_QVariantAnimation_duration(const QVariantAnimation*, intptr_t);
bool miqt_exec_callback_QVariantAnimation_event(QVariantAnimation*, intptr_t, QEvent*);
void miqt_exec_callback_QVariantAnimation_updateCurrentTime(QVariantAnimation*, intptr_t, int);
void miqt_exec_callback_QVariantAnimation_updateState(QVariantAnimation*, intptr_t, int, int);
void miqt_exec_callback_QVariantAnimation_updateCurrentValue(QVariantAnimation*, intptr_t, QVariant*);
QVariant* miqt_exec_callback_QVariantAnimation_interpolated(const QVariantAnimation*, intptr_t, QVariant*, QVariant*, double);
void miqt_exec_callback_QVariantAnimation_updateDirection(QVariantAnimation*, intptr_t, int);
bool miqt_exec_callback_QVariantAnimation_eventFilter(QVariantAnimation*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QVariantAnimation_timerEvent(QVariantAnimation*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QVariantAnimation_childEvent(QVariantAnimation*, intptr_t, QChildEvent*);
void miqt_exec_callback_QVariantAnimation_customEvent(QVariantAnimation*, intptr_t, QEvent*);
void miqt_exec_callback_QVariantAnimation_connectNotify(QVariantAnimation*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QVariantAnimation_disconnectNotify(QVariantAnimation*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQVariantAnimation final : public QVariantAnimation {
public:

	MiqtVirtualQVariantAnimation(): QVariantAnimation() {}
	MiqtVirtualQVariantAnimation(QObject* parent): QVariantAnimation(parent) {}

	virtual ~MiqtVirtualQVariantAnimation() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVariantAnimation> handle__duration;

	// Subclass to allow providing a Go implementation
	virtual int duration() const override {
		if (!handle__duration) {
			return QVariantAnimation::duration();
		}

		int callback_return_value = miqt_exec_callback_QVariantAnimation_duration(this, handle__duration.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QVariantAnimation_virtualbase_duration(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVariantAnimation> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QVariantAnimation::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QVariantAnimation_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QVariantAnimation_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVariantAnimation> handle__updateCurrentTime;

	// Subclass to allow providing a Go implementation
	virtual void updateCurrentTime(int param1) override {
		if (!handle__updateCurrentTime) {
			QVariantAnimation::updateCurrentTime(param1);
			return;
		}

		int sigval1 = param1;
		miqt_exec_callback_QVariantAnimation_updateCurrentTime(this, handle__updateCurrentTime.value(), sigval1);

	}

	friend void QVariantAnimation_virtualbase_updateCurrentTime(void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVariantAnimation> handle__updateState;

	// Subclass to allow providing a Go implementation
	virtual void updateState(QAbstractAnimation::State newState, QAbstractAnimation::State oldState) override {
		if (!handle__updateState) {
			QVariantAnimation::updateState(newState, oldState);
			return;
		}

		QAbstractAnimation::State newState_ret = newState;
		int sigval1 = static_cast<int>(newState_ret);
		QAbstractAnimation::State oldState_ret = oldState;
		int sigval2 = static_cast<int>(oldState_ret);
		miqt_exec_callback_QVariantAnimation_updateState(this, handle__updateState.value(), sigval1, sigval2);

	}

	friend void QVariantAnimation_virtualbase_updateState(void* self, int newState, int oldState);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVariantAnimation> handle__updateCurrentValue;

	// Subclass to allow providing a Go implementation
	virtual void updateCurrentValue(const QVariant& value) override {
		if (!handle__updateCurrentValue) {
			QVariantAnimation::updateCurrentValue(value);
			return;
		}

		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&value_ret);
		miqt_exec_callback_QVariantAnimation_updateCurrentValue(this, handle__updateCurrentValue.value(), sigval1);

	}

	friend void QVariantAnimation_virtualbase_updateCurrentValue(void* self, QVariant* value);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVariantAnimation> handle__interpolated;
	bool owns_return__interpolated = false;

	// Subclass to allow providing a Go implementation
	virtual QVariant interpolated(const QVariant& from, const QVariant& to, qreal progress) const override {
		if (!handle__interpolated) {
			return QVariantAnimation::interpolated(from, to, progress);
		}

		const QVariant& from_ret = from;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&from_ret);
		const QVariant& to_ret = to;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&to_ret);
		qreal progress_ret = progress;
		double sigval3 = static_cast<double>(progress_ret);
		QVariant* callback_return_value = miqt_exec_callback_QVariantAnimation_interpolated(this, handle__interpolated.value(), sigval1, sigval2, sigval3);
		std::unique_ptr<QVariant> callback_return_value_owner;
		if (owns_return__interpolated) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QVariant* QVariantAnimation_virtualbase_interpolated(const void* self, QVariant* from, QVariant* to, double progress);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVariantAnimation> handle__updateDirection;

	// Subclass to allow providing a Go implementation
	virtual void updateDirection(QAbstractAnimation::Direction direction) override {
		if (!handle__updateDirection) {
			QVariantAnimation::updateDirection(direction);
			return;
		}

		QAbstractAnimation::Direction direction_ret = direction;
		int sigval1 = static_cast<int>(direction_ret);
		miqt_exec_callback_QVariantAnimation_updateDirection(this, handle__updateDirection.value(), sigval1);

	}

	friend void QVariantAnimation_virtualbase_updateDirection(void* self, int direction);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVariantAnimation> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QVariantAnimation::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QVariantAnimation_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QVariantAnimation_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVariantAnimation> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QVariantAnimation::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QVariantAnimation_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QVariantAnimation_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVariantAnimation> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QVariantAnimation::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QVariantAnimation_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QVariantAnimation_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVariantAnimation> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QVariantAnimation::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QVariantAnimation_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QVariantAnimation_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVariantAnimation> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QVariantAnimation::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QVariantAnimation_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QVariantAnimation_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVariantAnimation> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QVariantAnimation::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QVariantAnimation_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QVariantAnimation_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QVariantAnimation_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QVariantAnimation_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QVariantAnimation_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QVariantAnimation_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QVariantAnimation* QVariantAnimation_new() {
	return new (std::nothrow) MiqtVirtualQVariantAnimation();
}

QVariantAnimation* QVariantAnimation_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQVariantAnimation(parent);
}

void QVariantAnimation_virtbase(QVariantAnimation* src, QAbstractAnimation** outptr_QAbstractAnimation) {
	*outptr_QAbstractAnimation = static_cast<QAbstractAnimation*>(src);
}

QMetaObject* QVariantAnimation_metaObject(const QVariantAnimation* self) {
	return (QMetaObject*) self->metaObject();
}

void* QVariantAnimation_metacast(QVariantAnimation* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QVariantAnimation_tr(const char* s) {
	QString _ret = QVariantAnimation::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QVariant* QVariantAnimation_startValue(const QVariantAnimation* self) {
	return new QVariant(self->startValue());
}

void QVariantAnimation_setStartValue(QVariantAnimation* self, QVariant* value) {
	self->setStartValue(*value);
}

QVariant* QVariantAnimation_endValue(const QVariantAnimation* self) {
	return new QVariant(self->endValue());
}

void QVariantAnimation_setEndValue(QVariantAnimation* self, QVariant* value) {
	self->setEndValue(*value);
}

QVariant* QVariantAnimation_keyValueAt(const QVariantAnimation* self, double step) {
	return new QVariant(self->keyValueAt(static_cast<qreal>(step)));
}

void QVariantAnimation_setKeyValueAt(QVariantAnimation* self, double step, QVariant* value) {
	self->setKeyValueAt(static_cast<qreal>(step), *value);
}

struct miqt_array /* of struct miqt_map  tuple of double and QVariant*   */  QVariantAnimation_keyValues(const QVariantAnimation* self) {
	QVariantAnimation::KeyValues _ret = self->keyValues();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_map /* tuple of double and QVariant* */ * _arr = static_cast<struct miqt_map /* tuple of double and QVariant* */ *>(malloc(sizeof(struct miqt_map /* tuple of double and QVariant* */ ) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QPair<double, QVariant> _lv_ret = _ret[i];
		// Convert QPair<> from C++ memory to manually-managed C memory
		double* _lv_first_arr = static_cast<double*>(malloc(sizeof(double)));
		QVariant** _lv_second_arr = static_cast<QVariant**>(malloc(sizeof(QVariant*)));
		_lv_first_arr[0] = _lv_ret.first;
		_lv_second_arr[0] = new QVariant(_lv_ret.second);
		struct miqt_map _lv_out;
		_lv_out.len = 1;
		_lv_out.keys = static_cast<void*>(_lv_first_arr);
		_lv_out.values = static_cast<void*>(_lv_second_arr);
		_arr[i] = _lv_out;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QVariantAnimation_setKeyValues(QVariantAnimation* self, struct miqt_array /* of struct miqt_map  tuple of double and QVariant*   */  values) {
	QVariantAnimation::KeyValues values_QList;
	values_QList.reserve(values.len);
	struct miqt_map /* tuple of double and QVariant* */ * values_arr = static_cast<struct miqt_map /* tuple of double and QVariant* */ *>(values.data);
	for(size_t i = 0; i < values.len; ++i) {
		QPair<double, QVariant> values_arr_i_QPair;
		double* values_arr_i_first_arr = static_cast<double*>(values_arr[i].keys);
		QVariant** values_arr_i_second_arr = static_cast<QVariant**>(values_arr[i].values);
		values_arr_i_QPair.first = static_cast<double>(values_arr_i_first_arr[0]);
		values_arr_i_QPair.second = *(values_arr_i_second_arr[0]);
		values_QList.push_back(values_arr_i_QPair);
	}
	self->setKeyValues(values_QList);
}

QVariant* QVariantAnimation_currentValue(const QVariantAnimation* self) {
	return new QVariant(self->currentValue());
}

int QVariantAnimation_duration(const QVariantAnimation* self) {
	return self->duration();
}

void QVariantAnimation_setDuration(QVariantAnimation* self, int msecs) {
	self->setDuration(static_cast<int>(msecs));
}

QEasingCurve* QVariantAnimation_easingCurve(const QVariantAnimation* self) {
	return new QEasingCurve(self->easingCurve());
}

void QVariantAnimation_setEasingCurve(QVariantAnimation* self, QEasingCurve* easing) {
	self->setEasingCurve(*easing);
}

void QVariantAnimation_valueChanged(QVariantAnimation* self, QVariant* value) {
	self->valueChanged(*value);
}

void* QVariantAnimation_connect_valueChanged(QVariantAnimation* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QVariantAnimation>>(slot);
	return new QMetaObject::Connection(QVariantAnimation::connect(self, static_cast<void (QVariantAnimation::*)(const QVariant&)>(&QVariantAnimation::valueChanged), self, [slot_handle](const QVariant& value) {
		intptr_t slot = slot_handle->value();
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&value_ret);
		miqt_exec_callback_QVariantAnimation_valueChanged(slot, sigval1);
	}));
}

struct miqt_string QVariantAnimation_tr2(const char* s, const char* c) {
	QString _ret = QVariantAnimation::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVariantAnimation_tr3(const char* s, const char* c, int n) {
	QString _ret = QVariantAnimation::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QVariantAnimation_override_virtual_duration(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVariantAnimation> slot_handle(slot);
	MiqtVirtualQVariantAnimation* self_cast = dynamic_cast<MiqtVirtualQVariantAnimation*>( (QVariantAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__duration = std::move(slot_handle);
	return true;
}

int QVariantAnimation_virtualbase_duration(const void* self) {
	return static_cast<const MiqtVirtualQVariantAnimation*>(self)->QVariantAnimation::duration();
}

bool QVariantAnimation_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVariantAnimation> slot_handle(slot);
	MiqtVirtualQVariantAnimation* self_cast = dynamic_cast<MiqtVirtualQVariantAnimation*>( (QVariantAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QVariantAnimation_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQVariantAnimation*>(self)->QVariantAnimation::event(event);
}

bool QVariantAnimation_override_virtual_updateCurrentTime(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVariantAnimation> slot_handle(slot);
	MiqtVirtualQVariantAnimation* self_cast = dynamic_cast<MiqtVirtualQVariantAnimation*>( (QVariantAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateCurrentTime = std::move(slot_handle);
	return true;
}

void QVariantAnimation_virtualbase_updateCurrentTime(void* self, int param1) {
	static_cast<MiqtVirtualQVariantAnimation*>(self)->QVariantAnimation::updateCurrentTime(static_cast<int>(param1));
}

bool QVariantAnimation_override_virtual_updateState(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVariantAnimation> slot_handle(slot);
	MiqtVirtualQVariantAnimation* self_cast = dynamic_cast<MiqtVirtualQVariantAnimation*>( (QVariantAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateState = std::move(slot_handle);
	return true;
}

void QVariantAnimation_virtualbase_updateState(void* self, int newState, int oldState) {
	static_cast<MiqtVirtualQVariantAnimation*>(self)->QVariantAnimation::updateState(static_cast<MiqtVirtualQVariantAnimation::State>(newState), static_cast<MiqtVirtualQVariantAnimation::State>(oldState));
}

bool QVariantAnimation_override_virtual_updateCurrentValue(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVariantAnimation> slot_handle(slot);
	MiqtVirtualQVariantAnimation* self_cast = dynamic_cast<MiqtVirtualQVariantAnimation*>( (QVariantAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateCurrentValue = std::move(slot_handle);
	return true;
}

void QVariantAnimation_virtualbase_updateCurrentValue(void* self, QVariant* value) {
	static_cast<MiqtVirtualQVariantAnimation*>(self)->QVariantAnimation::updateCurrentValue(*value);
}

bool QVariantAnimation_override_virtual_interpolated(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVariantAnimation> slot_handle(slot);
	MiqtVirtualQVariantAnimation* self_cast = dynamic_cast<MiqtVirtualQVariantAnimation*>( (QVariantAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__interpolated = std::move(slot_handle);
	self_cast->owns_return__interpolated = false;
	return true;
}

bool QVariantAnimation_override_virtual_owned_interpolated(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVariantAnimation> slot_handle(slot);
	MiqtVirtualQVariantAnimation* self_cast = dynamic_cast<MiqtVirtualQVariantAnimation*>( (QVariantAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__interpolated = std::move(slot_handle);
	self_cast->owns_return__interpolated = true;
	return true;
}

QVariant* QVariantAnimation_virtualbase_interpolated(const void* self, QVariant* from, QVariant* to, double progress) {
	return new QVariant(static_cast<const MiqtVirtualQVariantAnimation*>(self)->QVariantAnimation::interpolated(*from, *to, static_cast<qreal>(progress)));
}

bool QVariantAnimation_override_virtual_updateDirection(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVariantAnimation> slot_handle(slot);
	MiqtVirtualQVariantAnimation* self_cast = dynamic_cast<MiqtVirtualQVariantAnimation*>( (QVariantAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateDirection = std::move(slot_handle);
	return true;
}

void QVariantAnimation_virtualbase_updateDirection(void* self, int direction) {
	static_cast<MiqtVirtualQVariantAnimation*>(self)->QVariantAnimation::updateDirection(static_cast<MiqtVirtualQVariantAnimation::Direction>(direction));
}

bool QVariantAnimation_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVariantAnimation> slot_handle(slot);
	MiqtVirtualQVariantAnimation* self_cast = dynamic_cast<MiqtVirtualQVariantAnimation*>( (QVariantAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QVariantAnimation_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQVariantAnimation*>(self)->QVariantAnimation::eventFilter(watched, event);
}

bool QVariantAnimation_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVariantAnimation> slot_handle(slot);
	MiqtVirtualQVariantAnimation* self_cast = dynamic_cast<MiqtVirtualQVariantAnimation*>( (QVariantAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QVariantAnimation_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQVariantAnimation*>(self)->QVariantAnimation::timerEvent(event);
}

bool QVariantAnimation_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVariantAnimation> slot_handle(slot);
	MiqtVirtualQVariantAnimation* self_cast = dynamic_cast<MiqtVirtualQVariantAnimation*>( (QVariantAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QVariantAnimation_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQVariantAnimation*>(self)->QVariantAnimation::childEvent(event);
}

bool QVariantAnimation_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVariantAnimation> slot_handle(slot);
	MiqtVirtualQVariantAnimation* self_cast = dynamic_cast<MiqtVirtualQVariantAnimation*>( (QVariantAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QVariantAnimation_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQVariantAnimation*>(self)->QVariantAnimation::customEvent(event);
}

bool QVariantAnimation_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVariantAnimation> slot_handle(slot);
	MiqtVirtualQVariantAnimation* self_cast = dynamic_cast<MiqtVirtualQVariantAnimation*>( (QVariantAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QVariantAnimation_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQVariantAnimation*>(self)->QVariantAnimation::connectNotify(*signal);
}

bool QVariantAnimation_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVariantAnimation> slot_handle(slot);
	MiqtVirtualQVariantAnimation* self_cast = dynamic_cast<MiqtVirtualQVariantAnimation*>( (QVariantAnimation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QVariantAnimation_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQVariantAnimation*>(self)->QVariantAnimation::disconnectNotify(*signal);
}

QObject* QVariantAnimation_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVariantAnimation* self_cast = dynamic_cast<MiqtVirtualQVariantAnimation*>( (QVariantAnimation*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QVariantAnimation_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVariantAnimation* self_cast = dynamic_cast<MiqtVirtualQVariantAnimation*>( (QVariantAnimation*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QVariantAnimation_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQVariantAnimation* self_cast = dynamic_cast<MiqtVirtualQVariantAnimation*>( (QVariantAnimation*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QVariantAnimation_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQVariantAnimation* self_cast = dynamic_cast<MiqtVirtualQVariantAnimation*>( (QVariantAnimation*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QVariantAnimation_delete(QVariantAnimation* self) {
	delete self;
}

