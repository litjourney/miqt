#include <memory>
#include <utility>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QOffscreenSurface>
#include <QScreen>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSurface>
#include <QSurfaceFormat>
#include <QTimerEvent>
#include <qoffscreensurface.h>
#include "gen_qoffscreensurface.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QOffscreenSurface(intptr_t);
void miqt_exec_callback_QOffscreenSurface_screenChanged(intptr_t, QScreen*);
int miqt_exec_callback_QOffscreenSurface_surfaceType(const QOffscreenSurface*, intptr_t);
QSurfaceFormat* miqt_exec_callback_QOffscreenSurface_format(const QOffscreenSurface*, intptr_t);
QSize* miqt_exec_callback_QOffscreenSurface_size(const QOffscreenSurface*, intptr_t);
bool miqt_exec_callback_QOffscreenSurface_event(QOffscreenSurface*, intptr_t, QEvent*);
bool miqt_exec_callback_QOffscreenSurface_eventFilter(QOffscreenSurface*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QOffscreenSurface_timerEvent(QOffscreenSurface*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QOffscreenSurface_childEvent(QOffscreenSurface*, intptr_t, QChildEvent*);
void miqt_exec_callback_QOffscreenSurface_customEvent(QOffscreenSurface*, intptr_t, QEvent*);
void miqt_exec_callback_QOffscreenSurface_connectNotify(QOffscreenSurface*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QOffscreenSurface_disconnectNotify(QOffscreenSurface*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQOffscreenSurface final : public QOffscreenSurface {
public:

	MiqtVirtualQOffscreenSurface(QScreen* screen, QObject* parent): QOffscreenSurface(screen, parent) {}
	MiqtVirtualQOffscreenSurface(): QOffscreenSurface() {}
	MiqtVirtualQOffscreenSurface(QScreen* screen): QOffscreenSurface(screen) {}

	virtual ~MiqtVirtualQOffscreenSurface() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QOffscreenSurface> handle__surfaceType;

	// Subclass to allow providing a Go implementation
	virtual QSurface::SurfaceType surfaceType() const override {
		if (!handle__surfaceType) {
			return QOffscreenSurface::surfaceType();
		}

		int callback_return_value = miqt_exec_callback_QOffscreenSurface_surfaceType(this, handle__surfaceType.value());
		return static_cast<QSurface::SurfaceType>(callback_return_value);
	}

	friend int QOffscreenSurface_virtualbase_surfaceType(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QOffscreenSurface> handle__format;

	// Subclass to allow providing a Go implementation
	virtual QSurfaceFormat format() const override {
		if (!handle__format) {
			return QOffscreenSurface::format();
		}

		QSurfaceFormat* callback_return_value = miqt_exec_callback_QOffscreenSurface_format(this, handle__format.value());
		return *callback_return_value;
	}

	friend QSurfaceFormat* QOffscreenSurface_virtualbase_format(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QOffscreenSurface> handle__size;

	// Subclass to allow providing a Go implementation
	virtual QSize size() const override {
		if (!handle__size) {
			return QOffscreenSurface::size();
		}

		QSize* callback_return_value = miqt_exec_callback_QOffscreenSurface_size(this, handle__size.value());
		return *callback_return_value;
	}

	friend QSize* QOffscreenSurface_virtualbase_size(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QOffscreenSurface> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QOffscreenSurface::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QOffscreenSurface_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QOffscreenSurface_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QOffscreenSurface> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QOffscreenSurface::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QOffscreenSurface_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QOffscreenSurface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QOffscreenSurface> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QOffscreenSurface::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QOffscreenSurface_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QOffscreenSurface_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QOffscreenSurface> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QOffscreenSurface::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QOffscreenSurface_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QOffscreenSurface_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QOffscreenSurface> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QOffscreenSurface::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QOffscreenSurface_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QOffscreenSurface_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QOffscreenSurface> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QOffscreenSurface::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QOffscreenSurface_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QOffscreenSurface_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QOffscreenSurface> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QOffscreenSurface::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QOffscreenSurface_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QOffscreenSurface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QOffscreenSurface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QOffscreenSurface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QOffscreenSurface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QOffscreenSurface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QOffscreenSurface* QOffscreenSurface_new(QScreen* screen, QObject* parent) {
	return new (std::nothrow) MiqtVirtualQOffscreenSurface(screen, parent);
}

QOffscreenSurface* QOffscreenSurface_new2() {
	return new (std::nothrow) MiqtVirtualQOffscreenSurface();
}

QOffscreenSurface* QOffscreenSurface_new3(QScreen* screen) {
	return new (std::nothrow) MiqtVirtualQOffscreenSurface(screen);
}

void QOffscreenSurface_virtbase(QOffscreenSurface* src, QObject** outptr_QObject, QSurface** outptr_QSurface) {
	*outptr_QObject = static_cast<QObject*>(src);
	*outptr_QSurface = static_cast<QSurface*>(src);
}

QMetaObject* QOffscreenSurface_metaObject(const QOffscreenSurface* self) {
	return (QMetaObject*) self->metaObject();
}

void* QOffscreenSurface_metacast(QOffscreenSurface* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QOffscreenSurface_tr(const char* s) {
	QString _ret = QOffscreenSurface::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QOffscreenSurface_trUtf8(const char* s) {
	QString _ret = QOffscreenSurface::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QOffscreenSurface_surfaceType(const QOffscreenSurface* self) {
	QSurface::SurfaceType _ret = self->surfaceType();
	return static_cast<int>(_ret);
}

void QOffscreenSurface_create(QOffscreenSurface* self) {
	self->create();
}

void QOffscreenSurface_destroy(QOffscreenSurface* self) {
	self->destroy();
}

bool QOffscreenSurface_isValid(const QOffscreenSurface* self) {
	return self->isValid();
}

void QOffscreenSurface_setFormat(QOffscreenSurface* self, QSurfaceFormat* format) {
	self->setFormat(*format);
}

QSurfaceFormat* QOffscreenSurface_format(const QOffscreenSurface* self) {
	return new QSurfaceFormat(self->format());
}

QSurfaceFormat* QOffscreenSurface_requestedFormat(const QOffscreenSurface* self) {
	return new QSurfaceFormat(self->requestedFormat());
}

QSize* QOffscreenSurface_size(const QOffscreenSurface* self) {
	return new QSize(self->size());
}

QScreen* QOffscreenSurface_screen(const QOffscreenSurface* self) {
	return self->screen();
}

void QOffscreenSurface_setScreen(QOffscreenSurface* self, QScreen* screen) {
	self->setScreen(screen);
}

void* QOffscreenSurface_nativeHandle(const QOffscreenSurface* self) {
	return self->nativeHandle();
}

void QOffscreenSurface_setNativeHandle(QOffscreenSurface* self, void* handle) {
	self->setNativeHandle(handle);
}

void QOffscreenSurface_screenChanged(QOffscreenSurface* self, QScreen* screen) {
	self->screenChanged(screen);
}

void* QOffscreenSurface_connect_screenChanged(QOffscreenSurface* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QOffscreenSurface>>(slot);
	return new QMetaObject::Connection(QOffscreenSurface::connect(self, static_cast<void (QOffscreenSurface::*)(QScreen*)>(&QOffscreenSurface::screenChanged), self, [slot_handle](QScreen* screen) {
		intptr_t slot = slot_handle->value();
		QScreen* sigval1 = screen;
		miqt_exec_callback_QOffscreenSurface_screenChanged(slot, sigval1);
	}));
}

struct miqt_string QOffscreenSurface_tr2(const char* s, const char* c) {
	QString _ret = QOffscreenSurface::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QOffscreenSurface_tr3(const char* s, const char* c, int n) {
	QString _ret = QOffscreenSurface::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QOffscreenSurface_trUtf82(const char* s, const char* c) {
	QString _ret = QOffscreenSurface::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QOffscreenSurface_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QOffscreenSurface::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QOffscreenSurface_override_virtual_surfaceType(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QOffscreenSurface> slot_handle(slot);
	MiqtVirtualQOffscreenSurface* self_cast = dynamic_cast<MiqtVirtualQOffscreenSurface*>( (QOffscreenSurface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__surfaceType = std::move(slot_handle);
	return true;
}

int QOffscreenSurface_virtualbase_surfaceType(const void* self) {
	MiqtVirtualQOffscreenSurface::SurfaceType _ret = static_cast<const MiqtVirtualQOffscreenSurface*>(self)->QOffscreenSurface::surfaceType();
	return static_cast<int>(_ret);
}

bool QOffscreenSurface_override_virtual_format(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QOffscreenSurface> slot_handle(slot);
	MiqtVirtualQOffscreenSurface* self_cast = dynamic_cast<MiqtVirtualQOffscreenSurface*>( (QOffscreenSurface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__format = std::move(slot_handle);
	return true;
}

QSurfaceFormat* QOffscreenSurface_virtualbase_format(const void* self) {
	return new QSurfaceFormat(static_cast<const MiqtVirtualQOffscreenSurface*>(self)->QOffscreenSurface::format());
}

bool QOffscreenSurface_override_virtual_size(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QOffscreenSurface> slot_handle(slot);
	MiqtVirtualQOffscreenSurface* self_cast = dynamic_cast<MiqtVirtualQOffscreenSurface*>( (QOffscreenSurface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__size = std::move(slot_handle);
	return true;
}

QSize* QOffscreenSurface_virtualbase_size(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQOffscreenSurface*>(self)->QOffscreenSurface::size());
}

bool QOffscreenSurface_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QOffscreenSurface> slot_handle(slot);
	MiqtVirtualQOffscreenSurface* self_cast = dynamic_cast<MiqtVirtualQOffscreenSurface*>( (QOffscreenSurface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QOffscreenSurface_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQOffscreenSurface*>(self)->QOffscreenSurface::event(event);
}

bool QOffscreenSurface_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QOffscreenSurface> slot_handle(slot);
	MiqtVirtualQOffscreenSurface* self_cast = dynamic_cast<MiqtVirtualQOffscreenSurface*>( (QOffscreenSurface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QOffscreenSurface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQOffscreenSurface*>(self)->QOffscreenSurface::eventFilter(watched, event);
}

bool QOffscreenSurface_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QOffscreenSurface> slot_handle(slot);
	MiqtVirtualQOffscreenSurface* self_cast = dynamic_cast<MiqtVirtualQOffscreenSurface*>( (QOffscreenSurface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QOffscreenSurface_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQOffscreenSurface*>(self)->QOffscreenSurface::timerEvent(event);
}

bool QOffscreenSurface_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QOffscreenSurface> slot_handle(slot);
	MiqtVirtualQOffscreenSurface* self_cast = dynamic_cast<MiqtVirtualQOffscreenSurface*>( (QOffscreenSurface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QOffscreenSurface_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQOffscreenSurface*>(self)->QOffscreenSurface::childEvent(event);
}

bool QOffscreenSurface_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QOffscreenSurface> slot_handle(slot);
	MiqtVirtualQOffscreenSurface* self_cast = dynamic_cast<MiqtVirtualQOffscreenSurface*>( (QOffscreenSurface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QOffscreenSurface_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQOffscreenSurface*>(self)->QOffscreenSurface::customEvent(event);
}

bool QOffscreenSurface_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QOffscreenSurface> slot_handle(slot);
	MiqtVirtualQOffscreenSurface* self_cast = dynamic_cast<MiqtVirtualQOffscreenSurface*>( (QOffscreenSurface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QOffscreenSurface_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQOffscreenSurface*>(self)->QOffscreenSurface::connectNotify(*signal);
}

bool QOffscreenSurface_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QOffscreenSurface> slot_handle(slot);
	MiqtVirtualQOffscreenSurface* self_cast = dynamic_cast<MiqtVirtualQOffscreenSurface*>( (QOffscreenSurface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QOffscreenSurface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQOffscreenSurface*>(self)->QOffscreenSurface::disconnectNotify(*signal);
}

QObject* QOffscreenSurface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQOffscreenSurface* self_cast = dynamic_cast<MiqtVirtualQOffscreenSurface*>( (QOffscreenSurface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QOffscreenSurface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQOffscreenSurface* self_cast = dynamic_cast<MiqtVirtualQOffscreenSurface*>( (QOffscreenSurface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QOffscreenSurface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQOffscreenSurface* self_cast = dynamic_cast<MiqtVirtualQOffscreenSurface*>( (QOffscreenSurface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QOffscreenSurface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQOffscreenSurface* self_cast = dynamic_cast<MiqtVirtualQOffscreenSurface*>( (QOffscreenSurface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QOffscreenSurface_delete(QOffscreenSurface* self) {
	delete self;
}

