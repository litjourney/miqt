#include <memory>
#include <utility>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPdfLink>
#include <QPdfPageNavigator>
#include <QPointF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qpdfpagenavigator.h>
#include "gen_qpdfpagenavigator.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QPdfPageNavigator(intptr_t);
void miqt_exec_callback_QPdfPageNavigator_currentPageChanged(intptr_t, int);
void miqt_exec_callback_QPdfPageNavigator_currentLocationChanged(intptr_t, QPointF*);
void miqt_exec_callback_QPdfPageNavigator_currentZoomChanged(intptr_t, double);
void miqt_exec_callback_QPdfPageNavigator_backAvailableChanged(intptr_t, bool);
void miqt_exec_callback_QPdfPageNavigator_forwardAvailableChanged(intptr_t, bool);
void miqt_exec_callback_QPdfPageNavigator_jumped(intptr_t, QPdfLink*);
bool miqt_exec_callback_QPdfPageNavigator_event(QPdfPageNavigator*, intptr_t, QEvent*);
bool miqt_exec_callback_QPdfPageNavigator_eventFilter(QPdfPageNavigator*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QPdfPageNavigator_timerEvent(QPdfPageNavigator*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QPdfPageNavigator_childEvent(QPdfPageNavigator*, intptr_t, QChildEvent*);
void miqt_exec_callback_QPdfPageNavigator_customEvent(QPdfPageNavigator*, intptr_t, QEvent*);
void miqt_exec_callback_QPdfPageNavigator_connectNotify(QPdfPageNavigator*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPdfPageNavigator_disconnectNotify(QPdfPageNavigator*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQPdfPageNavigator final : public QPdfPageNavigator {
public:

	MiqtVirtualQPdfPageNavigator(): QPdfPageNavigator() {}
	MiqtVirtualQPdfPageNavigator(QObject* parent): QPdfPageNavigator(parent) {}

	virtual ~MiqtVirtualQPdfPageNavigator() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPdfPageNavigator> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QPdfPageNavigator::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QPdfPageNavigator_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QPdfPageNavigator_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPdfPageNavigator> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QPdfPageNavigator::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QPdfPageNavigator_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QPdfPageNavigator_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPdfPageNavigator> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QPdfPageNavigator::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QPdfPageNavigator_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QPdfPageNavigator_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPdfPageNavigator> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QPdfPageNavigator::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QPdfPageNavigator_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QPdfPageNavigator_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPdfPageNavigator> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QPdfPageNavigator::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QPdfPageNavigator_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QPdfPageNavigator_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPdfPageNavigator> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QPdfPageNavigator::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QPdfPageNavigator_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QPdfPageNavigator_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPdfPageNavigator> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QPdfPageNavigator::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QPdfPageNavigator_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QPdfPageNavigator_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QPdfLink* QPdfPageNavigator_protectedbase_currentLink(bool* _dynamic_cast_ok, const void* self);
	friend QObject* QPdfPageNavigator_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QPdfPageNavigator_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QPdfPageNavigator_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QPdfPageNavigator_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QPdfPageNavigator* QPdfPageNavigator_new() {
	return new (std::nothrow) MiqtVirtualQPdfPageNavigator();
}

QPdfPageNavigator* QPdfPageNavigator_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQPdfPageNavigator(parent);
}

void QPdfPageNavigator_virtbase(QPdfPageNavigator* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QPdfPageNavigator_metaObject(const QPdfPageNavigator* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPdfPageNavigator_metacast(QPdfPageNavigator* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPdfPageNavigator_tr(const char* s) {
	QString _ret = QPdfPageNavigator::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QPdfPageNavigator_currentPage(const QPdfPageNavigator* self) {
	return self->currentPage();
}

QPointF* QPdfPageNavigator_currentLocation(const QPdfPageNavigator* self) {
	return new QPointF(self->currentLocation());
}

double QPdfPageNavigator_currentZoom(const QPdfPageNavigator* self) {
	qreal _ret = self->currentZoom();
	return static_cast<double>(_ret);
}

bool QPdfPageNavigator_backAvailable(const QPdfPageNavigator* self) {
	return self->backAvailable();
}

bool QPdfPageNavigator_forwardAvailable(const QPdfPageNavigator* self) {
	return self->forwardAvailable();
}

void QPdfPageNavigator_clear(QPdfPageNavigator* self) {
	self->clear();
}

void QPdfPageNavigator_jump(QPdfPageNavigator* self, QPdfLink* destination) {
	self->jump(*destination);
}

void QPdfPageNavigator_jump2(QPdfPageNavigator* self, int page, QPointF* location) {
	self->jump(static_cast<int>(page), *location);
}

void QPdfPageNavigator_update(QPdfPageNavigator* self, int page, QPointF* location, double zoom) {
	self->update(static_cast<int>(page), *location, static_cast<qreal>(zoom));
}

void QPdfPageNavigator_forward(QPdfPageNavigator* self) {
	self->forward();
}

void QPdfPageNavigator_back(QPdfPageNavigator* self) {
	self->back();
}

void QPdfPageNavigator_currentPageChanged(QPdfPageNavigator* self, int page) {
	self->currentPageChanged(static_cast<int>(page));
}

void* QPdfPageNavigator_connect_currentPageChanged(QPdfPageNavigator* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QPdfPageNavigator>>(slot);
	return new QMetaObject::Connection(QPdfPageNavigator::connect(self, static_cast<void (QPdfPageNavigator::*)(int)>(&QPdfPageNavigator::currentPageChanged), self, [slot_handle](int page) {
		intptr_t slot = slot_handle->value();
		int sigval1 = page;
		miqt_exec_callback_QPdfPageNavigator_currentPageChanged(slot, sigval1);
	}));
}

void QPdfPageNavigator_currentLocationChanged(QPdfPageNavigator* self, QPointF* location) {
	self->currentLocationChanged(*location);
}

void* QPdfPageNavigator_connect_currentLocationChanged(QPdfPageNavigator* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QPdfPageNavigator>>(slot);
	return new QMetaObject::Connection(QPdfPageNavigator::connect(self, static_cast<void (QPdfPageNavigator::*)(QPointF)>(&QPdfPageNavigator::currentLocationChanged), self, [slot_handle](QPointF location) {
		intptr_t slot = slot_handle->value();
		QPointF* sigval1 = new QPointF(location);
		miqt_exec_callback_QPdfPageNavigator_currentLocationChanged(slot, sigval1);
	}));
}

void QPdfPageNavigator_currentZoomChanged(QPdfPageNavigator* self, double zoom) {
	self->currentZoomChanged(static_cast<qreal>(zoom));
}

void* QPdfPageNavigator_connect_currentZoomChanged(QPdfPageNavigator* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QPdfPageNavigator>>(slot);
	return new QMetaObject::Connection(QPdfPageNavigator::connect(self, static_cast<void (QPdfPageNavigator::*)(qreal)>(&QPdfPageNavigator::currentZoomChanged), self, [slot_handle](qreal zoom) {
		intptr_t slot = slot_handle->value();
		qreal zoom_ret = zoom;
		double sigval1 = static_cast<double>(zoom_ret);
		miqt_exec_callback_QPdfPageNavigator_currentZoomChanged(slot, sigval1);
	}));
}

void QPdfPageNavigator_backAvailableChanged(QPdfPageNavigator* self, bool available) {
	self->backAvailableChanged(available);
}

void* QPdfPageNavigator_connect_backAvailableChanged(QPdfPageNavigator* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QPdfPageNavigator>>(slot);
	return new QMetaObject::Connection(QPdfPageNavigator::connect(self, static_cast<void (QPdfPageNavigator::*)(bool)>(&QPdfPageNavigator::backAvailableChanged), self, [slot_handle](bool available) {
		intptr_t slot = slot_handle->value();
		bool sigval1 = available;
		miqt_exec_callback_QPdfPageNavigator_backAvailableChanged(slot, sigval1);
	}));
}

void QPdfPageNavigator_forwardAvailableChanged(QPdfPageNavigator* self, bool available) {
	self->forwardAvailableChanged(available);
}

void* QPdfPageNavigator_connect_forwardAvailableChanged(QPdfPageNavigator* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QPdfPageNavigator>>(slot);
	return new QMetaObject::Connection(QPdfPageNavigator::connect(self, static_cast<void (QPdfPageNavigator::*)(bool)>(&QPdfPageNavigator::forwardAvailableChanged), self, [slot_handle](bool available) {
		intptr_t slot = slot_handle->value();
		bool sigval1 = available;
		miqt_exec_callback_QPdfPageNavigator_forwardAvailableChanged(slot, sigval1);
	}));
}

void QPdfPageNavigator_jumped(QPdfPageNavigator* self, QPdfLink* current) {
	self->jumped(*current);
}

void* QPdfPageNavigator_connect_jumped(QPdfPageNavigator* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QPdfPageNavigator>>(slot);
	return new QMetaObject::Connection(QPdfPageNavigator::connect(self, static_cast<void (QPdfPageNavigator::*)(QPdfLink)>(&QPdfPageNavigator::jumped), self, [slot_handle](QPdfLink current) {
		intptr_t slot = slot_handle->value();
		QPdfLink* sigval1 = new QPdfLink(current);
		miqt_exec_callback_QPdfPageNavigator_jumped(slot, sigval1);
	}));
}

struct miqt_string QPdfPageNavigator_tr2(const char* s, const char* c) {
	QString _ret = QPdfPageNavigator::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPdfPageNavigator_tr3(const char* s, const char* c, int n) {
	QString _ret = QPdfPageNavigator::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPdfPageNavigator_jump3(QPdfPageNavigator* self, int page, QPointF* location, double zoom) {
	self->jump(static_cast<int>(page), *location, static_cast<qreal>(zoom));
}

bool QPdfPageNavigator_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPdfPageNavigator> slot_handle(slot);
	MiqtVirtualQPdfPageNavigator* self_cast = dynamic_cast<MiqtVirtualQPdfPageNavigator*>( (QPdfPageNavigator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QPdfPageNavigator_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQPdfPageNavigator*>(self)->QPdfPageNavigator::event(event);
}

bool QPdfPageNavigator_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPdfPageNavigator> slot_handle(slot);
	MiqtVirtualQPdfPageNavigator* self_cast = dynamic_cast<MiqtVirtualQPdfPageNavigator*>( (QPdfPageNavigator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QPdfPageNavigator_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQPdfPageNavigator*>(self)->QPdfPageNavigator::eventFilter(watched, event);
}

bool QPdfPageNavigator_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPdfPageNavigator> slot_handle(slot);
	MiqtVirtualQPdfPageNavigator* self_cast = dynamic_cast<MiqtVirtualQPdfPageNavigator*>( (QPdfPageNavigator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QPdfPageNavigator_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQPdfPageNavigator*>(self)->QPdfPageNavigator::timerEvent(event);
}

bool QPdfPageNavigator_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPdfPageNavigator> slot_handle(slot);
	MiqtVirtualQPdfPageNavigator* self_cast = dynamic_cast<MiqtVirtualQPdfPageNavigator*>( (QPdfPageNavigator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QPdfPageNavigator_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQPdfPageNavigator*>(self)->QPdfPageNavigator::childEvent(event);
}

bool QPdfPageNavigator_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPdfPageNavigator> slot_handle(slot);
	MiqtVirtualQPdfPageNavigator* self_cast = dynamic_cast<MiqtVirtualQPdfPageNavigator*>( (QPdfPageNavigator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QPdfPageNavigator_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQPdfPageNavigator*>(self)->QPdfPageNavigator::customEvent(event);
}

bool QPdfPageNavigator_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPdfPageNavigator> slot_handle(slot);
	MiqtVirtualQPdfPageNavigator* self_cast = dynamic_cast<MiqtVirtualQPdfPageNavigator*>( (QPdfPageNavigator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QPdfPageNavigator_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQPdfPageNavigator*>(self)->QPdfPageNavigator::connectNotify(*signal);
}

bool QPdfPageNavigator_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPdfPageNavigator> slot_handle(slot);
	MiqtVirtualQPdfPageNavigator* self_cast = dynamic_cast<MiqtVirtualQPdfPageNavigator*>( (QPdfPageNavigator*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QPdfPageNavigator_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQPdfPageNavigator*>(self)->QPdfPageNavigator::disconnectNotify(*signal);
}

QPdfLink* QPdfPageNavigator_protectedbase_currentLink(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPdfPageNavigator* self_cast = dynamic_cast<MiqtVirtualQPdfPageNavigator*>( (QPdfPageNavigator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QPdfLink(self_cast->currentLink());
}

QObject* QPdfPageNavigator_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPdfPageNavigator* self_cast = dynamic_cast<MiqtVirtualQPdfPageNavigator*>( (QPdfPageNavigator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QPdfPageNavigator_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPdfPageNavigator* self_cast = dynamic_cast<MiqtVirtualQPdfPageNavigator*>( (QPdfPageNavigator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QPdfPageNavigator_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQPdfPageNavigator* self_cast = dynamic_cast<MiqtVirtualQPdfPageNavigator*>( (QPdfPageNavigator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QPdfPageNavigator_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQPdfPageNavigator* self_cast = dynamic_cast<MiqtVirtualQPdfPageNavigator*>( (QPdfPageNavigator*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QPdfPageNavigator_delete(QPdfPageNavigator* self) {
	delete self;
}

