#include <memory>
#include <utility>
#include <QAbstractAxis>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QValueAxis>
#include <qvalueaxis.h>
#include "gen_qvalueaxis.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QValueAxis(intptr_t);
void miqt_exec_callback_QValueAxis_minChanged(intptr_t, double);
void miqt_exec_callback_QValueAxis_maxChanged(intptr_t, double);
void miqt_exec_callback_QValueAxis_rangeChanged(intptr_t, double, double);
void miqt_exec_callback_QValueAxis_tickCountChanged(intptr_t, int);
void miqt_exec_callback_QValueAxis_minorTickCountChanged(intptr_t, int);
void miqt_exec_callback_QValueAxis_labelFormatChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QValueAxis_tickIntervalChanged(intptr_t, double);
void miqt_exec_callback_QValueAxis_tickAnchorChanged(intptr_t, double);
void miqt_exec_callback_QValueAxis_tickTypeChanged(intptr_t, int);
int miqt_exec_callback_QValueAxis_type(const QValueAxis*, intptr_t);
bool miqt_exec_callback_QValueAxis_event(QValueAxis*, intptr_t, QEvent*);
bool miqt_exec_callback_QValueAxis_eventFilter(QValueAxis*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QValueAxis_timerEvent(QValueAxis*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QValueAxis_childEvent(QValueAxis*, intptr_t, QChildEvent*);
void miqt_exec_callback_QValueAxis_customEvent(QValueAxis*, intptr_t, QEvent*);
void miqt_exec_callback_QValueAxis_connectNotify(QValueAxis*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QValueAxis_disconnectNotify(QValueAxis*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQValueAxis final : public QValueAxis {
public:

	MiqtVirtualQValueAxis(): QValueAxis() {}
	MiqtVirtualQValueAxis(QObject* parent): QValueAxis(parent) {}

	virtual ~MiqtVirtualQValueAxis() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QValueAxis> handle__type;

	// Subclass to allow providing a Go implementation
	virtual QAbstractAxis::AxisType type() const override {
		if (!handle__type) {
			return QValueAxis::type();
		}

		int callback_return_value = miqt_exec_callback_QValueAxis_type(this, handle__type.value());
		return static_cast<QAbstractAxis::AxisType>(callback_return_value);
	}

	friend int QValueAxis_virtualbase_type(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QValueAxis> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QValueAxis::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QValueAxis_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QValueAxis_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QValueAxis> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QValueAxis::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QValueAxis_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QValueAxis_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QValueAxis> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QValueAxis::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QValueAxis_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QValueAxis_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QValueAxis> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QValueAxis::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QValueAxis_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QValueAxis_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QValueAxis> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QValueAxis::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QValueAxis_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QValueAxis_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QValueAxis> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QValueAxis::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QValueAxis_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QValueAxis_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QValueAxis> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QValueAxis::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QValueAxis_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QValueAxis_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QValueAxis_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QValueAxis_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QValueAxis_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QValueAxis_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QValueAxis* QValueAxis_new() {
	return new (std::nothrow) MiqtVirtualQValueAxis();
}

QValueAxis* QValueAxis_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQValueAxis(parent);
}

void QValueAxis_virtbase(QValueAxis* src, QAbstractAxis** outptr_QAbstractAxis) {
	*outptr_QAbstractAxis = static_cast<QAbstractAxis*>(src);
}

QMetaObject* QValueAxis_metaObject(const QValueAxis* self) {
	return (QMetaObject*) self->metaObject();
}

void* QValueAxis_metacast(QValueAxis* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QValueAxis_tr(const char* s) {
	QString _ret = QValueAxis::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QValueAxis_type(const QValueAxis* self) {
	QAbstractAxis::AxisType _ret = self->type();
	return static_cast<int>(_ret);
}

void QValueAxis_setMin(QValueAxis* self, double min) {
	self->setMin(static_cast<qreal>(min));
}

double QValueAxis_min(const QValueAxis* self) {
	qreal _ret = self->min();
	return static_cast<double>(_ret);
}

void QValueAxis_setMax(QValueAxis* self, double max) {
	self->setMax(static_cast<qreal>(max));
}

double QValueAxis_max(const QValueAxis* self) {
	qreal _ret = self->max();
	return static_cast<double>(_ret);
}

void QValueAxis_setRange(QValueAxis* self, double min, double max) {
	self->setRange(static_cast<qreal>(min), static_cast<qreal>(max));
}

void QValueAxis_setTickCount(QValueAxis* self, int count) {
	self->setTickCount(static_cast<int>(count));
}

int QValueAxis_tickCount(const QValueAxis* self) {
	return self->tickCount();
}

void QValueAxis_setMinorTickCount(QValueAxis* self, int count) {
	self->setMinorTickCount(static_cast<int>(count));
}

int QValueAxis_minorTickCount(const QValueAxis* self) {
	return self->minorTickCount();
}

void QValueAxis_setTickAnchor(QValueAxis* self, double anchor) {
	self->setTickAnchor(static_cast<qreal>(anchor));
}

double QValueAxis_tickAnchor(const QValueAxis* self) {
	qreal _ret = self->tickAnchor();
	return static_cast<double>(_ret);
}

void QValueAxis_setTickInterval(QValueAxis* self, double insterval) {
	self->setTickInterval(static_cast<qreal>(insterval));
}

double QValueAxis_tickInterval(const QValueAxis* self) {
	qreal _ret = self->tickInterval();
	return static_cast<double>(_ret);
}

void QValueAxis_setTickType(QValueAxis* self, int type) {
	self->setTickType(static_cast<QValueAxis::TickType>(type));
}

int QValueAxis_tickType(const QValueAxis* self) {
	QValueAxis::TickType _ret = self->tickType();
	return static_cast<int>(_ret);
}

void QValueAxis_setLabelFormat(QValueAxis* self, struct miqt_string format) {
	QString format_QString = QString::fromUtf8(format.data, format.len);
	self->setLabelFormat(format_QString);
}

struct miqt_string QValueAxis_labelFormat(const QValueAxis* self) {
	QString _ret = self->labelFormat();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QValueAxis_applyNiceNumbers(QValueAxis* self) {
	self->applyNiceNumbers();
}

void QValueAxis_minChanged(QValueAxis* self, double min) {
	self->minChanged(static_cast<qreal>(min));
}

void* QValueAxis_connect_minChanged(QValueAxis* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QValueAxis>>(slot);
	return new QMetaObject::Connection(QValueAxis::connect(self, static_cast<void (QValueAxis::*)(qreal)>(&QValueAxis::minChanged), self, [slot_handle](qreal min) {
		intptr_t slot = slot_handle->value();
		qreal min_ret = min;
		double sigval1 = static_cast<double>(min_ret);
		miqt_exec_callback_QValueAxis_minChanged(slot, sigval1);
	}));
}

void QValueAxis_maxChanged(QValueAxis* self, double max) {
	self->maxChanged(static_cast<qreal>(max));
}

void* QValueAxis_connect_maxChanged(QValueAxis* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QValueAxis>>(slot);
	return new QMetaObject::Connection(QValueAxis::connect(self, static_cast<void (QValueAxis::*)(qreal)>(&QValueAxis::maxChanged), self, [slot_handle](qreal max) {
		intptr_t slot = slot_handle->value();
		qreal max_ret = max;
		double sigval1 = static_cast<double>(max_ret);
		miqt_exec_callback_QValueAxis_maxChanged(slot, sigval1);
	}));
}

void QValueAxis_rangeChanged(QValueAxis* self, double min, double max) {
	self->rangeChanged(static_cast<qreal>(min), static_cast<qreal>(max));
}

void* QValueAxis_connect_rangeChanged(QValueAxis* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QValueAxis>>(slot);
	return new QMetaObject::Connection(QValueAxis::connect(self, static_cast<void (QValueAxis::*)(qreal, qreal)>(&QValueAxis::rangeChanged), self, [slot_handle](qreal min, qreal max) {
		intptr_t slot = slot_handle->value();
		qreal min_ret = min;
		double sigval1 = static_cast<double>(min_ret);
		qreal max_ret = max;
		double sigval2 = static_cast<double>(max_ret);
		miqt_exec_callback_QValueAxis_rangeChanged(slot, sigval1, sigval2);
	}));
}

void QValueAxis_tickCountChanged(QValueAxis* self, int tickCount) {
	self->tickCountChanged(static_cast<int>(tickCount));
}

void* QValueAxis_connect_tickCountChanged(QValueAxis* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QValueAxis>>(slot);
	return new QMetaObject::Connection(QValueAxis::connect(self, static_cast<void (QValueAxis::*)(int)>(&QValueAxis::tickCountChanged), self, [slot_handle](int tickCount) {
		intptr_t slot = slot_handle->value();
		int sigval1 = tickCount;
		miqt_exec_callback_QValueAxis_tickCountChanged(slot, sigval1);
	}));
}

void QValueAxis_minorTickCountChanged(QValueAxis* self, int tickCount) {
	self->minorTickCountChanged(static_cast<int>(tickCount));
}

void* QValueAxis_connect_minorTickCountChanged(QValueAxis* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QValueAxis>>(slot);
	return new QMetaObject::Connection(QValueAxis::connect(self, static_cast<void (QValueAxis::*)(int)>(&QValueAxis::minorTickCountChanged), self, [slot_handle](int tickCount) {
		intptr_t slot = slot_handle->value();
		int sigval1 = tickCount;
		miqt_exec_callback_QValueAxis_minorTickCountChanged(slot, sigval1);
	}));
}

void QValueAxis_labelFormatChanged(QValueAxis* self, struct miqt_string format) {
	QString format_QString = QString::fromUtf8(format.data, format.len);
	self->labelFormatChanged(format_QString);
}

void* QValueAxis_connect_labelFormatChanged(QValueAxis* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QValueAxis>>(slot);
	return new QMetaObject::Connection(QValueAxis::connect(self, static_cast<void (QValueAxis::*)(const QString&)>(&QValueAxis::labelFormatChanged), self, [slot_handle](const QString& format) {
		intptr_t slot = slot_handle->value();
		const QString format_ret = format;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray format_b = format_ret.toUtf8();
		struct miqt_string format_ms;
		format_ms.len = format_b.length();
		format_ms.data = static_cast<char*>(malloc(format_ms.len));
		memcpy(format_ms.data, format_b.data(), format_ms.len);
		struct miqt_string sigval1 = format_ms;
		miqt_exec_callback_QValueAxis_labelFormatChanged(slot, sigval1);
	}));
}

void QValueAxis_tickIntervalChanged(QValueAxis* self, double interval) {
	self->tickIntervalChanged(static_cast<qreal>(interval));
}

void* QValueAxis_connect_tickIntervalChanged(QValueAxis* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QValueAxis>>(slot);
	return new QMetaObject::Connection(QValueAxis::connect(self, static_cast<void (QValueAxis::*)(qreal)>(&QValueAxis::tickIntervalChanged), self, [slot_handle](qreal interval) {
		intptr_t slot = slot_handle->value();
		qreal interval_ret = interval;
		double sigval1 = static_cast<double>(interval_ret);
		miqt_exec_callback_QValueAxis_tickIntervalChanged(slot, sigval1);
	}));
}

void QValueAxis_tickAnchorChanged(QValueAxis* self, double anchor) {
	self->tickAnchorChanged(static_cast<qreal>(anchor));
}

void* QValueAxis_connect_tickAnchorChanged(QValueAxis* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QValueAxis>>(slot);
	return new QMetaObject::Connection(QValueAxis::connect(self, static_cast<void (QValueAxis::*)(qreal)>(&QValueAxis::tickAnchorChanged), self, [slot_handle](qreal anchor) {
		intptr_t slot = slot_handle->value();
		qreal anchor_ret = anchor;
		double sigval1 = static_cast<double>(anchor_ret);
		miqt_exec_callback_QValueAxis_tickAnchorChanged(slot, sigval1);
	}));
}

void QValueAxis_tickTypeChanged(QValueAxis* self, int type) {
	self->tickTypeChanged(static_cast<QValueAxis::TickType>(type));
}

void* QValueAxis_connect_tickTypeChanged(QValueAxis* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QValueAxis>>(slot);
	return new QMetaObject::Connection(QValueAxis::connect(self, static_cast<void (QValueAxis::*)(QValueAxis::TickType)>(&QValueAxis::tickTypeChanged), self, [slot_handle](QValueAxis::TickType type) {
		intptr_t slot = slot_handle->value();
		QValueAxis::TickType type_ret = type;
		int sigval1 = static_cast<int>(type_ret);
		miqt_exec_callback_QValueAxis_tickTypeChanged(slot, sigval1);
	}));
}

struct miqt_string QValueAxis_tr2(const char* s, const char* c) {
	QString _ret = QValueAxis::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QValueAxis_tr3(const char* s, const char* c, int n) {
	QString _ret = QValueAxis::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QValueAxis_override_virtual_type(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QValueAxis> slot_handle(slot);
	MiqtVirtualQValueAxis* self_cast = dynamic_cast<MiqtVirtualQValueAxis*>( (QValueAxis*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__type = std::move(slot_handle);
	return true;
}

int QValueAxis_virtualbase_type(const void* self) {
	MiqtVirtualQValueAxis::AxisType _ret = static_cast<const MiqtVirtualQValueAxis*>(self)->QValueAxis::type();
	return static_cast<int>(_ret);
}

bool QValueAxis_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QValueAxis> slot_handle(slot);
	MiqtVirtualQValueAxis* self_cast = dynamic_cast<MiqtVirtualQValueAxis*>( (QValueAxis*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QValueAxis_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQValueAxis*>(self)->QValueAxis::event(event);
}

bool QValueAxis_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QValueAxis> slot_handle(slot);
	MiqtVirtualQValueAxis* self_cast = dynamic_cast<MiqtVirtualQValueAxis*>( (QValueAxis*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QValueAxis_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQValueAxis*>(self)->QValueAxis::eventFilter(watched, event);
}

bool QValueAxis_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QValueAxis> slot_handle(slot);
	MiqtVirtualQValueAxis* self_cast = dynamic_cast<MiqtVirtualQValueAxis*>( (QValueAxis*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QValueAxis_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQValueAxis*>(self)->QValueAxis::timerEvent(event);
}

bool QValueAxis_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QValueAxis> slot_handle(slot);
	MiqtVirtualQValueAxis* self_cast = dynamic_cast<MiqtVirtualQValueAxis*>( (QValueAxis*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QValueAxis_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQValueAxis*>(self)->QValueAxis::childEvent(event);
}

bool QValueAxis_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QValueAxis> slot_handle(slot);
	MiqtVirtualQValueAxis* self_cast = dynamic_cast<MiqtVirtualQValueAxis*>( (QValueAxis*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QValueAxis_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQValueAxis*>(self)->QValueAxis::customEvent(event);
}

bool QValueAxis_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QValueAxis> slot_handle(slot);
	MiqtVirtualQValueAxis* self_cast = dynamic_cast<MiqtVirtualQValueAxis*>( (QValueAxis*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QValueAxis_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQValueAxis*>(self)->QValueAxis::connectNotify(*signal);
}

bool QValueAxis_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QValueAxis> slot_handle(slot);
	MiqtVirtualQValueAxis* self_cast = dynamic_cast<MiqtVirtualQValueAxis*>( (QValueAxis*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QValueAxis_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQValueAxis*>(self)->QValueAxis::disconnectNotify(*signal);
}

QObject* QValueAxis_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQValueAxis* self_cast = dynamic_cast<MiqtVirtualQValueAxis*>( (QValueAxis*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QValueAxis_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQValueAxis* self_cast = dynamic_cast<MiqtVirtualQValueAxis*>( (QValueAxis*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QValueAxis_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQValueAxis* self_cast = dynamic_cast<MiqtVirtualQValueAxis*>( (QValueAxis*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QValueAxis_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQValueAxis* self_cast = dynamic_cast<MiqtVirtualQValueAxis*>( (QValueAxis*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QValueAxis_delete(QValueAxis* self) {
	delete self;
}

