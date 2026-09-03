#include <memory>
#include <utility>
#include <QAbstractAxis>
#include <QChildEvent>
#include <QColorAxis>
#include <QEvent>
#include <QLinearGradient>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qcoloraxis.h>
#include "gen_qcoloraxis.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QColorAxis(intptr_t);
void miqt_exec_callback_QColorAxis_minChanged(intptr_t, double);
void miqt_exec_callback_QColorAxis_maxChanged(intptr_t, double);
void miqt_exec_callback_QColorAxis_rangeChanged(intptr_t, double, double);
void miqt_exec_callback_QColorAxis_tickCountChanged(intptr_t, int);
void miqt_exec_callback_QColorAxis_gradientChanged(intptr_t, QLinearGradient*);
void miqt_exec_callback_QColorAxis_sizeChanged(intptr_t, const double);
void miqt_exec_callback_QColorAxis_autoRangeChanged(intptr_t, bool);
int miqt_exec_callback_QColorAxis_type(const QColorAxis*, intptr_t);
bool miqt_exec_callback_QColorAxis_event(QColorAxis*, intptr_t, QEvent*);
bool miqt_exec_callback_QColorAxis_eventFilter(QColorAxis*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QColorAxis_timerEvent(QColorAxis*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QColorAxis_childEvent(QColorAxis*, intptr_t, QChildEvent*);
void miqt_exec_callback_QColorAxis_customEvent(QColorAxis*, intptr_t, QEvent*);
void miqt_exec_callback_QColorAxis_connectNotify(QColorAxis*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QColorAxis_disconnectNotify(QColorAxis*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQColorAxis final : public QColorAxis {
public:

	MiqtVirtualQColorAxis(): QColorAxis() {}
	MiqtVirtualQColorAxis(QObject* parent): QColorAxis(parent) {}

	virtual ~MiqtVirtualQColorAxis() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColorAxis> handle__type;

	// Subclass to allow providing a Go implementation
	virtual QAbstractAxis::AxisType type() const override {
		if (!handle__type) {
			return QColorAxis::type();
		}

		int callback_return_value = miqt_exec_callback_QColorAxis_type(this, handle__type.value());
		return static_cast<QAbstractAxis::AxisType>(callback_return_value);
	}

	friend int QColorAxis_virtualbase_type(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColorAxis> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QColorAxis::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QColorAxis_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QColorAxis_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColorAxis> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QColorAxis::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QColorAxis_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QColorAxis_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColorAxis> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QColorAxis::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QColorAxis_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QColorAxis_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColorAxis> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QColorAxis::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QColorAxis_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QColorAxis_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColorAxis> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QColorAxis::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QColorAxis_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QColorAxis_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColorAxis> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QColorAxis::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QColorAxis_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QColorAxis_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColorAxis> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QColorAxis::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QColorAxis_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QColorAxis_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QColorAxis_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QColorAxis_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QColorAxis_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QColorAxis_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QColorAxis* QColorAxis_new() {
	return new (std::nothrow) MiqtVirtualQColorAxis();
}

QColorAxis* QColorAxis_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQColorAxis(parent);
}

void QColorAxis_virtbase(QColorAxis* src, QAbstractAxis** outptr_QAbstractAxis) {
	*outptr_QAbstractAxis = static_cast<QAbstractAxis*>(src);
}

QMetaObject* QColorAxis_metaObject(const QColorAxis* self) {
	return (QMetaObject*) self->metaObject();
}

void* QColorAxis_metacast(QColorAxis* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QColorAxis_tr(const char* s) {
	QString _ret = QColorAxis::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QColorAxis_type(const QColorAxis* self) {
	QAbstractAxis::AxisType _ret = self->type();
	return static_cast<int>(_ret);
}

void QColorAxis_setMin(QColorAxis* self, double min) {
	self->setMin(static_cast<qreal>(min));
}

double QColorAxis_min(const QColorAxis* self) {
	qreal _ret = self->min();
	return static_cast<double>(_ret);
}

void QColorAxis_setMax(QColorAxis* self, double max) {
	self->setMax(static_cast<qreal>(max));
}

double QColorAxis_max(const QColorAxis* self) {
	qreal _ret = self->max();
	return static_cast<double>(_ret);
}

void QColorAxis_setRange(QColorAxis* self, double min, double max) {
	self->setRange(static_cast<qreal>(min), static_cast<qreal>(max));
}

void QColorAxis_setTickCount(QColorAxis* self, int count) {
	self->setTickCount(static_cast<int>(count));
}

int QColorAxis_tickCount(const QColorAxis* self) {
	return self->tickCount();
}

void QColorAxis_setSize(QColorAxis* self, const double size) {
	self->setSize(static_cast<const qreal>(size));
}

double QColorAxis_size(const QColorAxis* self) {
	qreal _ret = self->size();
	return static_cast<double>(_ret);
}

void QColorAxis_setGradient(QColorAxis* self, QLinearGradient* gradient) {
	self->setGradient(*gradient);
}

QLinearGradient* QColorAxis_gradient(const QColorAxis* self) {
	return new QLinearGradient(self->gradient());
}

void QColorAxis_setAutoRange(QColorAxis* self, bool autoRange) {
	self->setAutoRange(autoRange);
}

bool QColorAxis_autoRange(const QColorAxis* self) {
	return self->autoRange();
}

void QColorAxis_minChanged(QColorAxis* self, double min) {
	self->minChanged(static_cast<qreal>(min));
}

void* QColorAxis_connect_minChanged(QColorAxis* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QColorAxis>>(slot);
	return new QMetaObject::Connection(QColorAxis::connect(self, static_cast<void (QColorAxis::*)(qreal)>(&QColorAxis::minChanged), self, [slot_handle](qreal min) {
		intptr_t slot = slot_handle->value();
		qreal min_ret = min;
		double sigval1 = static_cast<double>(min_ret);
		miqt_exec_callback_QColorAxis_minChanged(slot, sigval1);
	}));
}

void QColorAxis_maxChanged(QColorAxis* self, double max) {
	self->maxChanged(static_cast<qreal>(max));
}

void* QColorAxis_connect_maxChanged(QColorAxis* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QColorAxis>>(slot);
	return new QMetaObject::Connection(QColorAxis::connect(self, static_cast<void (QColorAxis::*)(qreal)>(&QColorAxis::maxChanged), self, [slot_handle](qreal max) {
		intptr_t slot = slot_handle->value();
		qreal max_ret = max;
		double sigval1 = static_cast<double>(max_ret);
		miqt_exec_callback_QColorAxis_maxChanged(slot, sigval1);
	}));
}

void QColorAxis_rangeChanged(QColorAxis* self, double min, double max) {
	self->rangeChanged(static_cast<qreal>(min), static_cast<qreal>(max));
}

void* QColorAxis_connect_rangeChanged(QColorAxis* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QColorAxis>>(slot);
	return new QMetaObject::Connection(QColorAxis::connect(self, static_cast<void (QColorAxis::*)(qreal, qreal)>(&QColorAxis::rangeChanged), self, [slot_handle](qreal min, qreal max) {
		intptr_t slot = slot_handle->value();
		qreal min_ret = min;
		double sigval1 = static_cast<double>(min_ret);
		qreal max_ret = max;
		double sigval2 = static_cast<double>(max_ret);
		miqt_exec_callback_QColorAxis_rangeChanged(slot, sigval1, sigval2);
	}));
}

void QColorAxis_tickCountChanged(QColorAxis* self, int tickCount) {
	self->tickCountChanged(static_cast<int>(tickCount));
}

void* QColorAxis_connect_tickCountChanged(QColorAxis* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QColorAxis>>(slot);
	return new QMetaObject::Connection(QColorAxis::connect(self, static_cast<void (QColorAxis::*)(int)>(&QColorAxis::tickCountChanged), self, [slot_handle](int tickCount) {
		intptr_t slot = slot_handle->value();
		int sigval1 = tickCount;
		miqt_exec_callback_QColorAxis_tickCountChanged(slot, sigval1);
	}));
}

void QColorAxis_gradientChanged(QColorAxis* self, QLinearGradient* gradient) {
	self->gradientChanged(*gradient);
}

void* QColorAxis_connect_gradientChanged(QColorAxis* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QColorAxis>>(slot);
	return new QMetaObject::Connection(QColorAxis::connect(self, static_cast<void (QColorAxis::*)(const QLinearGradient&)>(&QColorAxis::gradientChanged), self, [slot_handle](const QLinearGradient& gradient) {
		intptr_t slot = slot_handle->value();
		const QLinearGradient& gradient_ret = gradient;
		// Cast returned reference into pointer
		QLinearGradient* sigval1 = const_cast<QLinearGradient*>(&gradient_ret);
		miqt_exec_callback_QColorAxis_gradientChanged(slot, sigval1);
	}));
}

void QColorAxis_sizeChanged(QColorAxis* self, const double size) {
	self->sizeChanged(static_cast<const qreal>(size));
}

void* QColorAxis_connect_sizeChanged(QColorAxis* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QColorAxis>>(slot);
	return new QMetaObject::Connection(QColorAxis::connect(self, static_cast<void (QColorAxis::*)(const qreal)>(&QColorAxis::sizeChanged), self, [slot_handle](const qreal size) {
		intptr_t slot = slot_handle->value();
		const qreal size_ret = size;
		const double sigval1 = static_cast<const double>(size_ret);
		miqt_exec_callback_QColorAxis_sizeChanged(slot, sigval1);
	}));
}

void QColorAxis_autoRangeChanged(QColorAxis* self, bool autoRange) {
	self->autoRangeChanged(autoRange);
}

void* QColorAxis_connect_autoRangeChanged(QColorAxis* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QColorAxis>>(slot);
	return new QMetaObject::Connection(QColorAxis::connect(self, static_cast<void (QColorAxis::*)(bool)>(&QColorAxis::autoRangeChanged), self, [slot_handle](bool autoRange) {
		intptr_t slot = slot_handle->value();
		bool sigval1 = autoRange;
		miqt_exec_callback_QColorAxis_autoRangeChanged(slot, sigval1);
	}));
}

struct miqt_string QColorAxis_tr2(const char* s, const char* c) {
	QString _ret = QColorAxis::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QColorAxis_tr3(const char* s, const char* c, int n) {
	QString _ret = QColorAxis::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QColorAxis_override_virtual_type(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColorAxis> slot_handle(slot);
	MiqtVirtualQColorAxis* self_cast = dynamic_cast<MiqtVirtualQColorAxis*>( (QColorAxis*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__type = std::move(slot_handle);
	return true;
}

int QColorAxis_virtualbase_type(const void* self) {
	MiqtVirtualQColorAxis::AxisType _ret = static_cast<const MiqtVirtualQColorAxis*>(self)->QColorAxis::type();
	return static_cast<int>(_ret);
}

bool QColorAxis_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColorAxis> slot_handle(slot);
	MiqtVirtualQColorAxis* self_cast = dynamic_cast<MiqtVirtualQColorAxis*>( (QColorAxis*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QColorAxis_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQColorAxis*>(self)->QColorAxis::event(event);
}

bool QColorAxis_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColorAxis> slot_handle(slot);
	MiqtVirtualQColorAxis* self_cast = dynamic_cast<MiqtVirtualQColorAxis*>( (QColorAxis*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QColorAxis_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQColorAxis*>(self)->QColorAxis::eventFilter(watched, event);
}

bool QColorAxis_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColorAxis> slot_handle(slot);
	MiqtVirtualQColorAxis* self_cast = dynamic_cast<MiqtVirtualQColorAxis*>( (QColorAxis*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QColorAxis_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQColorAxis*>(self)->QColorAxis::timerEvent(event);
}

bool QColorAxis_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColorAxis> slot_handle(slot);
	MiqtVirtualQColorAxis* self_cast = dynamic_cast<MiqtVirtualQColorAxis*>( (QColorAxis*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QColorAxis_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQColorAxis*>(self)->QColorAxis::childEvent(event);
}

bool QColorAxis_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColorAxis> slot_handle(slot);
	MiqtVirtualQColorAxis* self_cast = dynamic_cast<MiqtVirtualQColorAxis*>( (QColorAxis*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QColorAxis_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQColorAxis*>(self)->QColorAxis::customEvent(event);
}

bool QColorAxis_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColorAxis> slot_handle(slot);
	MiqtVirtualQColorAxis* self_cast = dynamic_cast<MiqtVirtualQColorAxis*>( (QColorAxis*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QColorAxis_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQColorAxis*>(self)->QColorAxis::connectNotify(*signal);
}

bool QColorAxis_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColorAxis> slot_handle(slot);
	MiqtVirtualQColorAxis* self_cast = dynamic_cast<MiqtVirtualQColorAxis*>( (QColorAxis*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QColorAxis_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQColorAxis*>(self)->QColorAxis::disconnectNotify(*signal);
}

QObject* QColorAxis_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQColorAxis* self_cast = dynamic_cast<MiqtVirtualQColorAxis*>( (QColorAxis*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QColorAxis_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQColorAxis* self_cast = dynamic_cast<MiqtVirtualQColorAxis*>( (QColorAxis*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QColorAxis_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQColorAxis* self_cast = dynamic_cast<MiqtVirtualQColorAxis*>( (QColorAxis*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QColorAxis_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQColorAxis* self_cast = dynamic_cast<MiqtVirtualQColorAxis*>( (QColorAxis*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QColorAxis_delete(QColorAxis* self) {
	delete self;
}

