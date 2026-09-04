#include <memory>
#include <utility>
#include <QAbstractSeries>
#include <QBrush>
#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPen>
#include <QScatterSeries>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QXYSeries>
#include <qscatterseries.h>
#include "gen_qscatterseries.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QScatterSeries(intptr_t);
void miqt_exec_callback_QScatterSeries_colorChanged(intptr_t, QColor*);
void miqt_exec_callback_QScatterSeries_borderColorChanged(intptr_t, QColor*);
void miqt_exec_callback_QScatterSeries_markerShapeChanged(intptr_t, int);
void miqt_exec_callback_QScatterSeries_markerSizeChanged(intptr_t, double);
int miqt_exec_callback_QScatterSeries_type(const QScatterSeries*, intptr_t);
void miqt_exec_callback_QScatterSeries_setPen(QScatterSeries*, intptr_t, QPen*);
void miqt_exec_callback_QScatterSeries_setBrush(QScatterSeries*, intptr_t, QBrush*);
void miqt_exec_callback_QScatterSeries_setColor(QScatterSeries*, intptr_t, QColor*);
QColor* miqt_exec_callback_QScatterSeries_color(const QScatterSeries*, intptr_t);
bool miqt_exec_callback_QScatterSeries_event(QScatterSeries*, intptr_t, QEvent*);
bool miqt_exec_callback_QScatterSeries_eventFilter(QScatterSeries*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QScatterSeries_timerEvent(QScatterSeries*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QScatterSeries_childEvent(QScatterSeries*, intptr_t, QChildEvent*);
void miqt_exec_callback_QScatterSeries_customEvent(QScatterSeries*, intptr_t, QEvent*);
void miqt_exec_callback_QScatterSeries_connectNotify(QScatterSeries*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QScatterSeries_disconnectNotify(QScatterSeries*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQScatterSeries final : public QScatterSeries {
public:

	MiqtVirtualQScatterSeries(): QScatterSeries() {}
	MiqtVirtualQScatterSeries(QObject* parent): QScatterSeries(parent) {}

	virtual ~MiqtVirtualQScatterSeries() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QScatterSeries> handle__type;

	// Subclass to allow providing a Go implementation
	virtual QAbstractSeries::SeriesType type() const override {
		if (!handle__type) {
			return QScatterSeries::type();
		}

		int callback_return_value = miqt_exec_callback_QScatterSeries_type(this, handle__type.value());
		return static_cast<QAbstractSeries::SeriesType>(callback_return_value);
	}

	friend int QScatterSeries_virtualbase_type(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QScatterSeries> handle__setPen;

	// Subclass to allow providing a Go implementation
	virtual void setPen(const QPen& pen) override {
		if (!handle__setPen) {
			QScatterSeries::setPen(pen);
			return;
		}

		const QPen& pen_ret = pen;
		// Cast returned reference into pointer
		QPen* sigval1 = const_cast<QPen*>(&pen_ret);
		miqt_exec_callback_QScatterSeries_setPen(this, handle__setPen.value(), sigval1);

	}

	friend void QScatterSeries_virtualbase_setPen(void* self, QPen* pen);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QScatterSeries> handle__setBrush;

	// Subclass to allow providing a Go implementation
	virtual void setBrush(const QBrush& brush) override {
		if (!handle__setBrush) {
			QScatterSeries::setBrush(brush);
			return;
		}

		const QBrush& brush_ret = brush;
		// Cast returned reference into pointer
		QBrush* sigval1 = const_cast<QBrush*>(&brush_ret);
		miqt_exec_callback_QScatterSeries_setBrush(this, handle__setBrush.value(), sigval1);

	}

	friend void QScatterSeries_virtualbase_setBrush(void* self, QBrush* brush);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QScatterSeries> handle__setColor;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& color) override {
		if (!handle__setColor) {
			QScatterSeries::setColor(color);
			return;
		}

		const QColor& color_ret = color;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&color_ret);
		miqt_exec_callback_QScatterSeries_setColor(this, handle__setColor.value(), sigval1);

	}

	friend void QScatterSeries_virtualbase_setColor(void* self, QColor* color);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QScatterSeries> handle__color;
	bool owns_return__color = false;

	// Subclass to allow providing a Go implementation
	virtual QColor color() const override {
		if (!handle__color) {
			return QScatterSeries::color();
		}

		QColor* callback_return_value = miqt_exec_callback_QScatterSeries_color(this, handle__color.value());
		std::unique_ptr<QColor> callback_return_value_owner;
		if (owns_return__color) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QColor* QScatterSeries_virtualbase_color(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QScatterSeries> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QScatterSeries::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QScatterSeries_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QScatterSeries_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QScatterSeries> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QScatterSeries::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QScatterSeries_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QScatterSeries_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QScatterSeries> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QScatterSeries::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QScatterSeries_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QScatterSeries_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QScatterSeries> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QScatterSeries::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QScatterSeries_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QScatterSeries_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QScatterSeries> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QScatterSeries::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QScatterSeries_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QScatterSeries_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QScatterSeries> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QScatterSeries::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QScatterSeries_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QScatterSeries_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QScatterSeries> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QScatterSeries::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QScatterSeries_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QScatterSeries_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QScatterSeries_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QScatterSeries_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QScatterSeries_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QScatterSeries_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QScatterSeries* QScatterSeries_new() {
	return new (std::nothrow) MiqtVirtualQScatterSeries();
}

QScatterSeries* QScatterSeries_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQScatterSeries(parent);
}

void QScatterSeries_virtbase(QScatterSeries* src, QXYSeries** outptr_QXYSeries) {
	*outptr_QXYSeries = static_cast<QXYSeries*>(src);
}

QMetaObject* QScatterSeries_metaObject(const QScatterSeries* self) {
	return (QMetaObject*) self->metaObject();
}

void* QScatterSeries_metacast(QScatterSeries* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QScatterSeries_tr(const char* s) {
	QString _ret = QScatterSeries::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QScatterSeries_type(const QScatterSeries* self) {
	QAbstractSeries::SeriesType _ret = self->type();
	return static_cast<int>(_ret);
}

void QScatterSeries_setPen(QScatterSeries* self, QPen* pen) {
	self->setPen(*pen);
}

void QScatterSeries_setBrush(QScatterSeries* self, QBrush* brush) {
	self->setBrush(*brush);
}

QBrush* QScatterSeries_brush(const QScatterSeries* self) {
	return new QBrush(self->brush());
}

void QScatterSeries_setColor(QScatterSeries* self, QColor* color) {
	self->setColor(*color);
}

QColor* QScatterSeries_color(const QScatterSeries* self) {
	return new QColor(self->color());
}

void QScatterSeries_setBorderColor(QScatterSeries* self, QColor* color) {
	self->setBorderColor(*color);
}

QColor* QScatterSeries_borderColor(const QScatterSeries* self) {
	return new QColor(self->borderColor());
}

int QScatterSeries_markerShape(const QScatterSeries* self) {
	QScatterSeries::MarkerShape _ret = self->markerShape();
	return static_cast<int>(_ret);
}

void QScatterSeries_setMarkerShape(QScatterSeries* self, int shape) {
	self->setMarkerShape(static_cast<QScatterSeries::MarkerShape>(shape));
}

double QScatterSeries_markerSize(const QScatterSeries* self) {
	qreal _ret = self->markerSize();
	return static_cast<double>(_ret);
}

void QScatterSeries_setMarkerSize(QScatterSeries* self, double size) {
	self->setMarkerSize(static_cast<qreal>(size));
}

void QScatterSeries_colorChanged(QScatterSeries* self, QColor* color) {
	self->colorChanged(*color);
}

void* QScatterSeries_connect_colorChanged(QScatterSeries* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QScatterSeries>>(slot);
	return new QMetaObject::Connection(QScatterSeries::connect(self, static_cast<void (QScatterSeries::*)(QColor)>(&QScatterSeries::colorChanged), self, [slot_handle](QColor color) {
		intptr_t slot = slot_handle->value();
		QColor* sigval1 = new QColor(color);
		miqt_exec_callback_QScatterSeries_colorChanged(slot, sigval1);
	}));
}

void QScatterSeries_borderColorChanged(QScatterSeries* self, QColor* color) {
	self->borderColorChanged(*color);
}

void* QScatterSeries_connect_borderColorChanged(QScatterSeries* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QScatterSeries>>(slot);
	return new QMetaObject::Connection(QScatterSeries::connect(self, static_cast<void (QScatterSeries::*)(QColor)>(&QScatterSeries::borderColorChanged), self, [slot_handle](QColor color) {
		intptr_t slot = slot_handle->value();
		QColor* sigval1 = new QColor(color);
		miqt_exec_callback_QScatterSeries_borderColorChanged(slot, sigval1);
	}));
}

void QScatterSeries_markerShapeChanged(QScatterSeries* self, int shape) {
	self->markerShapeChanged(static_cast<QScatterSeries::MarkerShape>(shape));
}

void* QScatterSeries_connect_markerShapeChanged(QScatterSeries* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QScatterSeries>>(slot);
	return new QMetaObject::Connection(QScatterSeries::connect(self, static_cast<void (QScatterSeries::*)(QScatterSeries::MarkerShape)>(&QScatterSeries::markerShapeChanged), self, [slot_handle](QScatterSeries::MarkerShape shape) {
		intptr_t slot = slot_handle->value();
		QScatterSeries::MarkerShape shape_ret = shape;
		int sigval1 = static_cast<int>(shape_ret);
		miqt_exec_callback_QScatterSeries_markerShapeChanged(slot, sigval1);
	}));
}

void QScatterSeries_markerSizeChanged(QScatterSeries* self, double size) {
	self->markerSizeChanged(static_cast<qreal>(size));
}

void* QScatterSeries_connect_markerSizeChanged(QScatterSeries* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QScatterSeries>>(slot);
	return new QMetaObject::Connection(QScatterSeries::connect(self, static_cast<void (QScatterSeries::*)(qreal)>(&QScatterSeries::markerSizeChanged), self, [slot_handle](qreal size) {
		intptr_t slot = slot_handle->value();
		qreal size_ret = size;
		double sigval1 = static_cast<double>(size_ret);
		miqt_exec_callback_QScatterSeries_markerSizeChanged(slot, sigval1);
	}));
}

struct miqt_string QScatterSeries_tr2(const char* s, const char* c) {
	QString _ret = QScatterSeries::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QScatterSeries_tr3(const char* s, const char* c, int n) {
	QString _ret = QScatterSeries::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QScatterSeries_override_virtual_type(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QScatterSeries> slot_handle(slot);
	MiqtVirtualQScatterSeries* self_cast = dynamic_cast<MiqtVirtualQScatterSeries*>( (QScatterSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__type = std::move(slot_handle);
	return true;
}

int QScatterSeries_virtualbase_type(const void* self) {
	MiqtVirtualQScatterSeries::SeriesType _ret = static_cast<const MiqtVirtualQScatterSeries*>(self)->QScatterSeries::type();
	return static_cast<int>(_ret);
}

bool QScatterSeries_override_virtual_setPen(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QScatterSeries> slot_handle(slot);
	MiqtVirtualQScatterSeries* self_cast = dynamic_cast<MiqtVirtualQScatterSeries*>( (QScatterSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setPen = std::move(slot_handle);
	return true;
}

void QScatterSeries_virtualbase_setPen(void* self, QPen* pen) {
	static_cast<MiqtVirtualQScatterSeries*>(self)->QScatterSeries::setPen(*pen);
}

bool QScatterSeries_override_virtual_setBrush(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QScatterSeries> slot_handle(slot);
	MiqtVirtualQScatterSeries* self_cast = dynamic_cast<MiqtVirtualQScatterSeries*>( (QScatterSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setBrush = std::move(slot_handle);
	return true;
}

void QScatterSeries_virtualbase_setBrush(void* self, QBrush* brush) {
	static_cast<MiqtVirtualQScatterSeries*>(self)->QScatterSeries::setBrush(*brush);
}

bool QScatterSeries_override_virtual_setColor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QScatterSeries> slot_handle(slot);
	MiqtVirtualQScatterSeries* self_cast = dynamic_cast<MiqtVirtualQScatterSeries*>( (QScatterSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setColor = std::move(slot_handle);
	return true;
}

void QScatterSeries_virtualbase_setColor(void* self, QColor* color) {
	static_cast<MiqtVirtualQScatterSeries*>(self)->QScatterSeries::setColor(*color);
}

bool QScatterSeries_override_virtual_color(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QScatterSeries> slot_handle(slot);
	MiqtVirtualQScatterSeries* self_cast = dynamic_cast<MiqtVirtualQScatterSeries*>( (QScatterSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__color = std::move(slot_handle);
	self_cast->owns_return__color = false;
	return true;
}

bool QScatterSeries_override_virtual_owned_color(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QScatterSeries> slot_handle(slot);
	MiqtVirtualQScatterSeries* self_cast = dynamic_cast<MiqtVirtualQScatterSeries*>( (QScatterSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__color = std::move(slot_handle);
	self_cast->owns_return__color = true;
	return true;
}

QColor* QScatterSeries_virtualbase_color(const void* self) {
	return new QColor(static_cast<const MiqtVirtualQScatterSeries*>(self)->QScatterSeries::color());
}

bool QScatterSeries_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QScatterSeries> slot_handle(slot);
	MiqtVirtualQScatterSeries* self_cast = dynamic_cast<MiqtVirtualQScatterSeries*>( (QScatterSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QScatterSeries_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQScatterSeries*>(self)->QScatterSeries::event(event);
}

bool QScatterSeries_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QScatterSeries> slot_handle(slot);
	MiqtVirtualQScatterSeries* self_cast = dynamic_cast<MiqtVirtualQScatterSeries*>( (QScatterSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QScatterSeries_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQScatterSeries*>(self)->QScatterSeries::eventFilter(watched, event);
}

bool QScatterSeries_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QScatterSeries> slot_handle(slot);
	MiqtVirtualQScatterSeries* self_cast = dynamic_cast<MiqtVirtualQScatterSeries*>( (QScatterSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QScatterSeries_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQScatterSeries*>(self)->QScatterSeries::timerEvent(event);
}

bool QScatterSeries_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QScatterSeries> slot_handle(slot);
	MiqtVirtualQScatterSeries* self_cast = dynamic_cast<MiqtVirtualQScatterSeries*>( (QScatterSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QScatterSeries_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQScatterSeries*>(self)->QScatterSeries::childEvent(event);
}

bool QScatterSeries_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QScatterSeries> slot_handle(slot);
	MiqtVirtualQScatterSeries* self_cast = dynamic_cast<MiqtVirtualQScatterSeries*>( (QScatterSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QScatterSeries_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQScatterSeries*>(self)->QScatterSeries::customEvent(event);
}

bool QScatterSeries_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QScatterSeries> slot_handle(slot);
	MiqtVirtualQScatterSeries* self_cast = dynamic_cast<MiqtVirtualQScatterSeries*>( (QScatterSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QScatterSeries_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQScatterSeries*>(self)->QScatterSeries::connectNotify(*signal);
}

bool QScatterSeries_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QScatterSeries> slot_handle(slot);
	MiqtVirtualQScatterSeries* self_cast = dynamic_cast<MiqtVirtualQScatterSeries*>( (QScatterSeries*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QScatterSeries_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQScatterSeries*>(self)->QScatterSeries::disconnectNotify(*signal);
}

QObject* QScatterSeries_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQScatterSeries* self_cast = dynamic_cast<MiqtVirtualQScatterSeries*>( (QScatterSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QScatterSeries_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQScatterSeries* self_cast = dynamic_cast<MiqtVirtualQScatterSeries*>( (QScatterSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QScatterSeries_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQScatterSeries* self_cast = dynamic_cast<MiqtVirtualQScatterSeries*>( (QScatterSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QScatterSeries_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQScatterSeries* self_cast = dynamic_cast<MiqtVirtualQScatterSeries*>( (QScatterSeries*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QScatterSeries_delete(QScatterSeries* self) {
	delete self;
}

