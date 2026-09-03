#include <memory>
#include <utility>
#include <QBoxSet>
#include <QBrush>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPen>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qboxset.h>
#include "gen_qboxset.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QBoxSet(intptr_t);
void miqt_exec_callback_QBoxSet_clicked(intptr_t);
void miqt_exec_callback_QBoxSet_hovered(intptr_t, bool);
void miqt_exec_callback_QBoxSet_pressed(intptr_t);
void miqt_exec_callback_QBoxSet_released(intptr_t);
void miqt_exec_callback_QBoxSet_doubleClicked(intptr_t);
void miqt_exec_callback_QBoxSet_penChanged(intptr_t);
void miqt_exec_callback_QBoxSet_brushChanged(intptr_t);
void miqt_exec_callback_QBoxSet_valuesChanged(intptr_t);
void miqt_exec_callback_QBoxSet_valueChanged(intptr_t, int);
void miqt_exec_callback_QBoxSet_cleared(intptr_t);
bool miqt_exec_callback_QBoxSet_event(QBoxSet*, intptr_t, QEvent*);
bool miqt_exec_callback_QBoxSet_eventFilter(QBoxSet*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QBoxSet_timerEvent(QBoxSet*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QBoxSet_childEvent(QBoxSet*, intptr_t, QChildEvent*);
void miqt_exec_callback_QBoxSet_customEvent(QBoxSet*, intptr_t, QEvent*);
void miqt_exec_callback_QBoxSet_connectNotify(QBoxSet*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QBoxSet_disconnectNotify(QBoxSet*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQBoxSet final : public QBoxSet {
public:

	MiqtVirtualQBoxSet(): QBoxSet() {}
	MiqtVirtualQBoxSet(const qreal le, const qreal lq, const qreal m, const qreal uq, const qreal ue): QBoxSet(le, lq, m, uq, ue) {}
	MiqtVirtualQBoxSet(const QString label): QBoxSet(label) {}
	MiqtVirtualQBoxSet(const QString label, QObject* parent): QBoxSet(label, parent) {}
	MiqtVirtualQBoxSet(const qreal le, const qreal lq, const qreal m, const qreal uq, const qreal ue, const QString label): QBoxSet(le, lq, m, uq, ue, label) {}
	MiqtVirtualQBoxSet(const qreal le, const qreal lq, const qreal m, const qreal uq, const qreal ue, const QString label, QObject* parent): QBoxSet(le, lq, m, uq, ue, label, parent) {}

	virtual ~MiqtVirtualQBoxSet() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBoxSet> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QBoxSet::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QBoxSet_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QBoxSet_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBoxSet> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QBoxSet::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QBoxSet_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QBoxSet_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBoxSet> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QBoxSet::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QBoxSet_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QBoxSet_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBoxSet> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QBoxSet::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QBoxSet_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QBoxSet_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBoxSet> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QBoxSet::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QBoxSet_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QBoxSet_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBoxSet> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QBoxSet::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QBoxSet_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QBoxSet_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBoxSet> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QBoxSet::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QBoxSet_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QBoxSet_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QBoxSet_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QBoxSet_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QBoxSet_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QBoxSet_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QBoxSet* QBoxSet_new() {
	return new (std::nothrow) MiqtVirtualQBoxSet();
}

QBoxSet* QBoxSet_new2(const double le, const double lq, const double m, const double uq, const double ue) {
	return new (std::nothrow) MiqtVirtualQBoxSet(static_cast<const qreal>(le), static_cast<const qreal>(lq), static_cast<const qreal>(m), static_cast<const qreal>(uq), static_cast<const qreal>(ue));
}

QBoxSet* QBoxSet_new3(struct miqt_string label) {
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return new (std::nothrow) MiqtVirtualQBoxSet(label_QString);
}

QBoxSet* QBoxSet_new4(struct miqt_string label, QObject* parent) {
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return new (std::nothrow) MiqtVirtualQBoxSet(label_QString, parent);
}

QBoxSet* QBoxSet_new5(const double le, const double lq, const double m, const double uq, const double ue, struct miqt_string label) {
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return new (std::nothrow) MiqtVirtualQBoxSet(static_cast<const qreal>(le), static_cast<const qreal>(lq), static_cast<const qreal>(m), static_cast<const qreal>(uq), static_cast<const qreal>(ue), label_QString);
}

QBoxSet* QBoxSet_new6(const double le, const double lq, const double m, const double uq, const double ue, struct miqt_string label, QObject* parent) {
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return new (std::nothrow) MiqtVirtualQBoxSet(static_cast<const qreal>(le), static_cast<const qreal>(lq), static_cast<const qreal>(m), static_cast<const qreal>(uq), static_cast<const qreal>(ue), label_QString, parent);
}

void QBoxSet_virtbase(QBoxSet* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QBoxSet_metaObject(const QBoxSet* self) {
	return (QMetaObject*) self->metaObject();
}

void* QBoxSet_metacast(QBoxSet* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QBoxSet_tr(const char* s) {
	QString _ret = QBoxSet::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QBoxSet_append(QBoxSet* self, const double value) {
	self->append(static_cast<const qreal>(value));
}

void QBoxSet_appendWithValues(QBoxSet* self, struct miqt_array /* of double */  values) {
	QList<qreal> values_QList;
	values_QList.reserve(values.len);
	double* values_arr = static_cast<double*>(values.data);
	for(size_t i = 0; i < values.len; ++i) {
		values_QList.push_back(static_cast<double>(values_arr[i]));
	}
	self->append(values_QList);
}

void QBoxSet_clear(QBoxSet* self) {
	self->clear();
}

void QBoxSet_setLabel(QBoxSet* self, struct miqt_string label) {
	QString label_QString = QString::fromUtf8(label.data, label.len);
	self->setLabel(label_QString);
}

struct miqt_string QBoxSet_label(const QBoxSet* self) {
	QString _ret = self->label();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QBoxSet* QBoxSet_operatorShiftLeft(QBoxSet* self, const double* value) {
	QBoxSet& _ret = self->operator<<(static_cast<const qreal&>(*value));
	// Cast returned reference into pointer
	return &_ret;
}

void QBoxSet_setValue(QBoxSet* self, const int index, const double value) {
	self->setValue(static_cast<const int>(index), static_cast<const qreal>(value));
}

double QBoxSet_at(const QBoxSet* self, const int index) {
	qreal _ret = self->at(static_cast<const int>(index));
	return static_cast<double>(_ret);
}

double QBoxSet_operatorSubscript(const QBoxSet* self, const int index) {
	qreal _ret = self->operator[](static_cast<const int>(index));
	return static_cast<double>(_ret);
}

int QBoxSet_count(const QBoxSet* self) {
	return self->count();
}

void QBoxSet_setPen(QBoxSet* self, QPen* pen) {
	self->setPen(*pen);
}

QPen* QBoxSet_pen(const QBoxSet* self) {
	return new QPen(self->pen());
}

void QBoxSet_setBrush(QBoxSet* self, QBrush* brush) {
	self->setBrush(*brush);
}

QBrush* QBoxSet_brush(const QBoxSet* self) {
	return new QBrush(self->brush());
}

void QBoxSet_clicked(QBoxSet* self) {
	self->clicked();
}

void* QBoxSet_connect_clicked(QBoxSet* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QBoxSet>>(slot);
	return new QMetaObject::Connection(QBoxSet::connect(self, static_cast<void (QBoxSet::*)()>(&QBoxSet::clicked), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QBoxSet_clicked(slot);
	}));
}

void QBoxSet_hovered(QBoxSet* self, bool status) {
	self->hovered(status);
}

void* QBoxSet_connect_hovered(QBoxSet* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QBoxSet>>(slot);
	return new QMetaObject::Connection(QBoxSet::connect(self, static_cast<void (QBoxSet::*)(bool)>(&QBoxSet::hovered), self, [slot_handle](bool status) {
		intptr_t slot = slot_handle->value();
		bool sigval1 = status;
		miqt_exec_callback_QBoxSet_hovered(slot, sigval1);
	}));
}

void QBoxSet_pressed(QBoxSet* self) {
	self->pressed();
}

void* QBoxSet_connect_pressed(QBoxSet* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QBoxSet>>(slot);
	return new QMetaObject::Connection(QBoxSet::connect(self, static_cast<void (QBoxSet::*)()>(&QBoxSet::pressed), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QBoxSet_pressed(slot);
	}));
}

void QBoxSet_released(QBoxSet* self) {
	self->released();
}

void* QBoxSet_connect_released(QBoxSet* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QBoxSet>>(slot);
	return new QMetaObject::Connection(QBoxSet::connect(self, static_cast<void (QBoxSet::*)()>(&QBoxSet::released), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QBoxSet_released(slot);
	}));
}

void QBoxSet_doubleClicked(QBoxSet* self) {
	self->doubleClicked();
}

void* QBoxSet_connect_doubleClicked(QBoxSet* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QBoxSet>>(slot);
	return new QMetaObject::Connection(QBoxSet::connect(self, static_cast<void (QBoxSet::*)()>(&QBoxSet::doubleClicked), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QBoxSet_doubleClicked(slot);
	}));
}

void QBoxSet_penChanged(QBoxSet* self) {
	self->penChanged();
}

void* QBoxSet_connect_penChanged(QBoxSet* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QBoxSet>>(slot);
	return new QMetaObject::Connection(QBoxSet::connect(self, static_cast<void (QBoxSet::*)()>(&QBoxSet::penChanged), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QBoxSet_penChanged(slot);
	}));
}

void QBoxSet_brushChanged(QBoxSet* self) {
	self->brushChanged();
}

void* QBoxSet_connect_brushChanged(QBoxSet* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QBoxSet>>(slot);
	return new QMetaObject::Connection(QBoxSet::connect(self, static_cast<void (QBoxSet::*)()>(&QBoxSet::brushChanged), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QBoxSet_brushChanged(slot);
	}));
}

void QBoxSet_valuesChanged(QBoxSet* self) {
	self->valuesChanged();
}

void* QBoxSet_connect_valuesChanged(QBoxSet* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QBoxSet>>(slot);
	return new QMetaObject::Connection(QBoxSet::connect(self, static_cast<void (QBoxSet::*)()>(&QBoxSet::valuesChanged), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QBoxSet_valuesChanged(slot);
	}));
}

void QBoxSet_valueChanged(QBoxSet* self, int index) {
	self->valueChanged(static_cast<int>(index));
}

void* QBoxSet_connect_valueChanged(QBoxSet* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QBoxSet>>(slot);
	return new QMetaObject::Connection(QBoxSet::connect(self, static_cast<void (QBoxSet::*)(int)>(&QBoxSet::valueChanged), self, [slot_handle](int index) {
		intptr_t slot = slot_handle->value();
		int sigval1 = index;
		miqt_exec_callback_QBoxSet_valueChanged(slot, sigval1);
	}));
}

void QBoxSet_cleared(QBoxSet* self) {
	self->cleared();
}

void* QBoxSet_connect_cleared(QBoxSet* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QBoxSet>>(slot);
	return new QMetaObject::Connection(QBoxSet::connect(self, static_cast<void (QBoxSet::*)()>(&QBoxSet::cleared), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QBoxSet_cleared(slot);
	}));
}

struct miqt_string QBoxSet_tr2(const char* s, const char* c) {
	QString _ret = QBoxSet::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QBoxSet_tr3(const char* s, const char* c, int n) {
	QString _ret = QBoxSet::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QBoxSet_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBoxSet> slot_handle(slot);
	MiqtVirtualQBoxSet* self_cast = dynamic_cast<MiqtVirtualQBoxSet*>( (QBoxSet*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QBoxSet_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQBoxSet*>(self)->QBoxSet::event(event);
}

bool QBoxSet_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBoxSet> slot_handle(slot);
	MiqtVirtualQBoxSet* self_cast = dynamic_cast<MiqtVirtualQBoxSet*>( (QBoxSet*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QBoxSet_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQBoxSet*>(self)->QBoxSet::eventFilter(watched, event);
}

bool QBoxSet_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBoxSet> slot_handle(slot);
	MiqtVirtualQBoxSet* self_cast = dynamic_cast<MiqtVirtualQBoxSet*>( (QBoxSet*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QBoxSet_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQBoxSet*>(self)->QBoxSet::timerEvent(event);
}

bool QBoxSet_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBoxSet> slot_handle(slot);
	MiqtVirtualQBoxSet* self_cast = dynamic_cast<MiqtVirtualQBoxSet*>( (QBoxSet*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QBoxSet_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQBoxSet*>(self)->QBoxSet::childEvent(event);
}

bool QBoxSet_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBoxSet> slot_handle(slot);
	MiqtVirtualQBoxSet* self_cast = dynamic_cast<MiqtVirtualQBoxSet*>( (QBoxSet*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QBoxSet_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQBoxSet*>(self)->QBoxSet::customEvent(event);
}

bool QBoxSet_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBoxSet> slot_handle(slot);
	MiqtVirtualQBoxSet* self_cast = dynamic_cast<MiqtVirtualQBoxSet*>( (QBoxSet*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QBoxSet_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQBoxSet*>(self)->QBoxSet::connectNotify(*signal);
}

bool QBoxSet_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBoxSet> slot_handle(slot);
	MiqtVirtualQBoxSet* self_cast = dynamic_cast<MiqtVirtualQBoxSet*>( (QBoxSet*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QBoxSet_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQBoxSet*>(self)->QBoxSet::disconnectNotify(*signal);
}

QObject* QBoxSet_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQBoxSet* self_cast = dynamic_cast<MiqtVirtualQBoxSet*>( (QBoxSet*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QBoxSet_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQBoxSet* self_cast = dynamic_cast<MiqtVirtualQBoxSet*>( (QBoxSet*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QBoxSet_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQBoxSet* self_cast = dynamic_cast<MiqtVirtualQBoxSet*>( (QBoxSet*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QBoxSet_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQBoxSet* self_cast = dynamic_cast<MiqtVirtualQBoxSet*>( (QBoxSet*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QBoxSet_delete(QBoxSet* self) {
	delete self;
}

