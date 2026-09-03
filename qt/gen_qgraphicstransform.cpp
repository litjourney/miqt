#include <memory>
#include <utility>
#include <QChildEvent>
#include <QEvent>
#include <QGraphicsRotation>
#include <QGraphicsScale>
#include <QGraphicsTransform>
#include <QMatrix4x4>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVector3D>
#include <qgraphicstransform.h>
#include "gen_qgraphicstransform.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QGraphicsTransform(intptr_t);
void miqt_exec_callback_QGraphicsTransform_applyTo(const QGraphicsTransform*, intptr_t, QMatrix4x4*);
bool miqt_exec_callback_QGraphicsTransform_event(QGraphicsTransform*, intptr_t, QEvent*);
bool miqt_exec_callback_QGraphicsTransform_eventFilter(QGraphicsTransform*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QGraphicsTransform_timerEvent(QGraphicsTransform*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QGraphicsTransform_childEvent(QGraphicsTransform*, intptr_t, QChildEvent*);
void miqt_exec_callback_QGraphicsTransform_customEvent(QGraphicsTransform*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsTransform_connectNotify(QGraphicsTransform*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsTransform_disconnectNotify(QGraphicsTransform*, intptr_t, QMetaMethod*);
void miqt_exec_callback_handle_release_QGraphicsScale(intptr_t);
void miqt_exec_callback_QGraphicsScale_originChanged(intptr_t);
void miqt_exec_callback_QGraphicsScale_xScaleChanged(intptr_t);
void miqt_exec_callback_QGraphicsScale_yScaleChanged(intptr_t);
void miqt_exec_callback_QGraphicsScale_zScaleChanged(intptr_t);
void miqt_exec_callback_QGraphicsScale_scaleChanged(intptr_t);
void miqt_exec_callback_QGraphicsScale_applyTo(const QGraphicsScale*, intptr_t, QMatrix4x4*);
bool miqt_exec_callback_QGraphicsScale_event(QGraphicsScale*, intptr_t, QEvent*);
bool miqt_exec_callback_QGraphicsScale_eventFilter(QGraphicsScale*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QGraphicsScale_timerEvent(QGraphicsScale*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QGraphicsScale_childEvent(QGraphicsScale*, intptr_t, QChildEvent*);
void miqt_exec_callback_QGraphicsScale_customEvent(QGraphicsScale*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsScale_connectNotify(QGraphicsScale*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsScale_disconnectNotify(QGraphicsScale*, intptr_t, QMetaMethod*);
void miqt_exec_callback_handle_release_QGraphicsRotation(intptr_t);
void miqt_exec_callback_QGraphicsRotation_originChanged(intptr_t);
void miqt_exec_callback_QGraphicsRotation_angleChanged(intptr_t);
void miqt_exec_callback_QGraphicsRotation_axisChanged(intptr_t);
void miqt_exec_callback_QGraphicsRotation_applyTo(const QGraphicsRotation*, intptr_t, QMatrix4x4*);
bool miqt_exec_callback_QGraphicsRotation_event(QGraphicsRotation*, intptr_t, QEvent*);
bool miqt_exec_callback_QGraphicsRotation_eventFilter(QGraphicsRotation*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QGraphicsRotation_timerEvent(QGraphicsRotation*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QGraphicsRotation_childEvent(QGraphicsRotation*, intptr_t, QChildEvent*);
void miqt_exec_callback_QGraphicsRotation_customEvent(QGraphicsRotation*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsRotation_connectNotify(QGraphicsRotation*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsRotation_disconnectNotify(QGraphicsRotation*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGraphicsTransform final : public QGraphicsTransform {
public:

	MiqtVirtualQGraphicsTransform(): QGraphicsTransform() {}
	MiqtVirtualQGraphicsTransform(QObject* parent): QGraphicsTransform(parent) {}

	virtual ~MiqtVirtualQGraphicsTransform() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsTransform> handle__applyTo;

	// Subclass to allow providing a Go implementation
	virtual void applyTo(QMatrix4x4* matrix) const override {
		if (!handle__applyTo) {
			return; // Pure virtual, there is no base we can call
		}

		QMatrix4x4* sigval1 = matrix;
		miqt_exec_callback_QGraphicsTransform_applyTo(this, handle__applyTo.value(), sigval1);

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsTransform> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QGraphicsTransform::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QGraphicsTransform_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QGraphicsTransform_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsTransform> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QGraphicsTransform::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QGraphicsTransform_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QGraphicsTransform_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsTransform> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QGraphicsTransform::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsTransform_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QGraphicsTransform_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsTransform> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QGraphicsTransform::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsTransform_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QGraphicsTransform_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsTransform> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QGraphicsTransform::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsTransform_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QGraphicsTransform_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsTransform> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QGraphicsTransform::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QGraphicsTransform_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QGraphicsTransform_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsTransform> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QGraphicsTransform::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QGraphicsTransform_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QGraphicsTransform_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QGraphicsTransform_protectedbase_update(bool* _dynamic_cast_ok, void* self);
	friend QObject* QGraphicsTransform_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsTransform_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsTransform_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QGraphicsTransform_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QGraphicsTransform* QGraphicsTransform_new() {
	return new (std::nothrow) MiqtVirtualQGraphicsTransform();
}

QGraphicsTransform* QGraphicsTransform_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQGraphicsTransform(parent);
}

void QGraphicsTransform_virtbase(QGraphicsTransform* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QGraphicsTransform_metaObject(const QGraphicsTransform* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsTransform_metacast(QGraphicsTransform* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsTransform_tr(const char* s) {
	QString _ret = QGraphicsTransform::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsTransform_trUtf8(const char* s) {
	QString _ret = QGraphicsTransform::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsTransform_applyTo(const QGraphicsTransform* self, QMatrix4x4* matrix) {
	self->applyTo(matrix);
}

struct miqt_string QGraphicsTransform_tr2(const char* s, const char* c) {
	QString _ret = QGraphicsTransform::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsTransform_tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsTransform::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsTransform_trUtf82(const char* s, const char* c) {
	QString _ret = QGraphicsTransform::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsTransform_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QGraphicsTransform::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QGraphicsTransform_override_virtual_applyTo(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsTransform> slot_handle(slot);
	MiqtVirtualQGraphicsTransform* self_cast = dynamic_cast<MiqtVirtualQGraphicsTransform*>( (QGraphicsTransform*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__applyTo = std::move(slot_handle);
	return true;
}

bool QGraphicsTransform_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsTransform> slot_handle(slot);
	MiqtVirtualQGraphicsTransform* self_cast = dynamic_cast<MiqtVirtualQGraphicsTransform*>( (QGraphicsTransform*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QGraphicsTransform_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQGraphicsTransform*>(self)->QGraphicsTransform::event(event);
}

bool QGraphicsTransform_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsTransform> slot_handle(slot);
	MiqtVirtualQGraphicsTransform* self_cast = dynamic_cast<MiqtVirtualQGraphicsTransform*>( (QGraphicsTransform*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QGraphicsTransform_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQGraphicsTransform*>(self)->QGraphicsTransform::eventFilter(watched, event);
}

bool QGraphicsTransform_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsTransform> slot_handle(slot);
	MiqtVirtualQGraphicsTransform* self_cast = dynamic_cast<MiqtVirtualQGraphicsTransform*>( (QGraphicsTransform*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QGraphicsTransform_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQGraphicsTransform*>(self)->QGraphicsTransform::timerEvent(event);
}

bool QGraphicsTransform_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsTransform> slot_handle(slot);
	MiqtVirtualQGraphicsTransform* self_cast = dynamic_cast<MiqtVirtualQGraphicsTransform*>( (QGraphicsTransform*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QGraphicsTransform_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQGraphicsTransform*>(self)->QGraphicsTransform::childEvent(event);
}

bool QGraphicsTransform_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsTransform> slot_handle(slot);
	MiqtVirtualQGraphicsTransform* self_cast = dynamic_cast<MiqtVirtualQGraphicsTransform*>( (QGraphicsTransform*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QGraphicsTransform_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQGraphicsTransform*>(self)->QGraphicsTransform::customEvent(event);
}

bool QGraphicsTransform_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsTransform> slot_handle(slot);
	MiqtVirtualQGraphicsTransform* self_cast = dynamic_cast<MiqtVirtualQGraphicsTransform*>( (QGraphicsTransform*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QGraphicsTransform_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQGraphicsTransform*>(self)->QGraphicsTransform::connectNotify(*signal);
}

bool QGraphicsTransform_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsTransform> slot_handle(slot);
	MiqtVirtualQGraphicsTransform* self_cast = dynamic_cast<MiqtVirtualQGraphicsTransform*>( (QGraphicsTransform*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QGraphicsTransform_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQGraphicsTransform*>(self)->QGraphicsTransform::disconnectNotify(*signal);
}

void QGraphicsTransform_protectedbase_update(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsTransform* self_cast = dynamic_cast<MiqtVirtualQGraphicsTransform*>( (QGraphicsTransform*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->update();
}

QObject* QGraphicsTransform_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsTransform* self_cast = dynamic_cast<MiqtVirtualQGraphicsTransform*>( (QGraphicsTransform*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QGraphicsTransform_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsTransform* self_cast = dynamic_cast<MiqtVirtualQGraphicsTransform*>( (QGraphicsTransform*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QGraphicsTransform_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQGraphicsTransform* self_cast = dynamic_cast<MiqtVirtualQGraphicsTransform*>( (QGraphicsTransform*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QGraphicsTransform_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQGraphicsTransform* self_cast = dynamic_cast<MiqtVirtualQGraphicsTransform*>( (QGraphicsTransform*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QGraphicsTransform_delete(QGraphicsTransform* self) {
	delete self;
}

class MiqtVirtualQGraphicsScale final : public QGraphicsScale {
public:

	MiqtVirtualQGraphicsScale(): QGraphicsScale() {}
	MiqtVirtualQGraphicsScale(QObject* parent): QGraphicsScale(parent) {}

	virtual ~MiqtVirtualQGraphicsScale() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScale> handle__applyTo;

	// Subclass to allow providing a Go implementation
	virtual void applyTo(QMatrix4x4* matrix) const override {
		if (!handle__applyTo) {
			QGraphicsScale::applyTo(matrix);
			return;
		}

		QMatrix4x4* sigval1 = matrix;
		miqt_exec_callback_QGraphicsScale_applyTo(this, handle__applyTo.value(), sigval1);

	}

	friend void QGraphicsScale_virtualbase_applyTo(const void* self, QMatrix4x4* matrix);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScale> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QGraphicsScale::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QGraphicsScale_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QGraphicsScale_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScale> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QGraphicsScale::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QGraphicsScale_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QGraphicsScale_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScale> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QGraphicsScale::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsScale_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QGraphicsScale_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScale> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QGraphicsScale::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsScale_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QGraphicsScale_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScale> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QGraphicsScale::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsScale_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QGraphicsScale_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScale> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QGraphicsScale::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QGraphicsScale_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QGraphicsScale_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScale> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QGraphicsScale::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QGraphicsScale_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QGraphicsScale_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QGraphicsScale_protectedbase_update(bool* _dynamic_cast_ok, void* self);
	friend QObject* QGraphicsScale_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsScale_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsScale_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QGraphicsScale_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QGraphicsScale* QGraphicsScale_new() {
	return new (std::nothrow) MiqtVirtualQGraphicsScale();
}

QGraphicsScale* QGraphicsScale_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQGraphicsScale(parent);
}

void QGraphicsScale_virtbase(QGraphicsScale* src, QGraphicsTransform** outptr_QGraphicsTransform) {
	*outptr_QGraphicsTransform = static_cast<QGraphicsTransform*>(src);
}

QMetaObject* QGraphicsScale_metaObject(const QGraphicsScale* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsScale_metacast(QGraphicsScale* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsScale_tr(const char* s) {
	QString _ret = QGraphicsScale::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsScale_trUtf8(const char* s) {
	QString _ret = QGraphicsScale::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QVector3D* QGraphicsScale_origin(const QGraphicsScale* self) {
	return new QVector3D(self->origin());
}

void QGraphicsScale_setOrigin(QGraphicsScale* self, QVector3D* point) {
	self->setOrigin(*point);
}

double QGraphicsScale_xScale(const QGraphicsScale* self) {
	qreal _ret = self->xScale();
	return static_cast<double>(_ret);
}

void QGraphicsScale_setXScale(QGraphicsScale* self, double xScale) {
	self->setXScale(static_cast<qreal>(xScale));
}

double QGraphicsScale_yScale(const QGraphicsScale* self) {
	qreal _ret = self->yScale();
	return static_cast<double>(_ret);
}

void QGraphicsScale_setYScale(QGraphicsScale* self, double yScale) {
	self->setYScale(static_cast<qreal>(yScale));
}

double QGraphicsScale_zScale(const QGraphicsScale* self) {
	qreal _ret = self->zScale();
	return static_cast<double>(_ret);
}

void QGraphicsScale_setZScale(QGraphicsScale* self, double zScale) {
	self->setZScale(static_cast<qreal>(zScale));
}

void QGraphicsScale_applyTo(const QGraphicsScale* self, QMatrix4x4* matrix) {
	self->applyTo(matrix);
}

void QGraphicsScale_originChanged(QGraphicsScale* self) {
	self->originChanged();
}

void* QGraphicsScale_connect_originChanged(QGraphicsScale* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScale>>(slot);
	return new QMetaObject::Connection(QGraphicsScale::connect(self, static_cast<void (QGraphicsScale::*)()>(&QGraphicsScale::originChanged), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QGraphicsScale_originChanged(slot);
	}));
}

void QGraphicsScale_xScaleChanged(QGraphicsScale* self) {
	self->xScaleChanged();
}

void* QGraphicsScale_connect_xScaleChanged(QGraphicsScale* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScale>>(slot);
	return new QMetaObject::Connection(QGraphicsScale::connect(self, static_cast<void (QGraphicsScale::*)()>(&QGraphicsScale::xScaleChanged), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QGraphicsScale_xScaleChanged(slot);
	}));
}

void QGraphicsScale_yScaleChanged(QGraphicsScale* self) {
	self->yScaleChanged();
}

void* QGraphicsScale_connect_yScaleChanged(QGraphicsScale* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScale>>(slot);
	return new QMetaObject::Connection(QGraphicsScale::connect(self, static_cast<void (QGraphicsScale::*)()>(&QGraphicsScale::yScaleChanged), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QGraphicsScale_yScaleChanged(slot);
	}));
}

void QGraphicsScale_zScaleChanged(QGraphicsScale* self) {
	self->zScaleChanged();
}

void* QGraphicsScale_connect_zScaleChanged(QGraphicsScale* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScale>>(slot);
	return new QMetaObject::Connection(QGraphicsScale::connect(self, static_cast<void (QGraphicsScale::*)()>(&QGraphicsScale::zScaleChanged), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QGraphicsScale_zScaleChanged(slot);
	}));
}

void QGraphicsScale_scaleChanged(QGraphicsScale* self) {
	self->scaleChanged();
}

void* QGraphicsScale_connect_scaleChanged(QGraphicsScale* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScale>>(slot);
	return new QMetaObject::Connection(QGraphicsScale::connect(self, static_cast<void (QGraphicsScale::*)()>(&QGraphicsScale::scaleChanged), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QGraphicsScale_scaleChanged(slot);
	}));
}

struct miqt_string QGraphicsScale_tr2(const char* s, const char* c) {
	QString _ret = QGraphicsScale::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsScale_tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsScale::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsScale_trUtf82(const char* s, const char* c) {
	QString _ret = QGraphicsScale::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsScale_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QGraphicsScale::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QGraphicsScale_override_virtual_applyTo(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScale> slot_handle(slot);
	MiqtVirtualQGraphicsScale* self_cast = dynamic_cast<MiqtVirtualQGraphicsScale*>( (QGraphicsScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__applyTo = std::move(slot_handle);
	return true;
}

void QGraphicsScale_virtualbase_applyTo(const void* self, QMatrix4x4* matrix) {
	static_cast<const MiqtVirtualQGraphicsScale*>(self)->QGraphicsScale::applyTo(matrix);
}

bool QGraphicsScale_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScale> slot_handle(slot);
	MiqtVirtualQGraphicsScale* self_cast = dynamic_cast<MiqtVirtualQGraphicsScale*>( (QGraphicsScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QGraphicsScale_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQGraphicsScale*>(self)->QGraphicsScale::event(event);
}

bool QGraphicsScale_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScale> slot_handle(slot);
	MiqtVirtualQGraphicsScale* self_cast = dynamic_cast<MiqtVirtualQGraphicsScale*>( (QGraphicsScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QGraphicsScale_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQGraphicsScale*>(self)->QGraphicsScale::eventFilter(watched, event);
}

bool QGraphicsScale_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScale> slot_handle(slot);
	MiqtVirtualQGraphicsScale* self_cast = dynamic_cast<MiqtVirtualQGraphicsScale*>( (QGraphicsScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QGraphicsScale_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQGraphicsScale*>(self)->QGraphicsScale::timerEvent(event);
}

bool QGraphicsScale_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScale> slot_handle(slot);
	MiqtVirtualQGraphicsScale* self_cast = dynamic_cast<MiqtVirtualQGraphicsScale*>( (QGraphicsScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QGraphicsScale_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQGraphicsScale*>(self)->QGraphicsScale::childEvent(event);
}

bool QGraphicsScale_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScale> slot_handle(slot);
	MiqtVirtualQGraphicsScale* self_cast = dynamic_cast<MiqtVirtualQGraphicsScale*>( (QGraphicsScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QGraphicsScale_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQGraphicsScale*>(self)->QGraphicsScale::customEvent(event);
}

bool QGraphicsScale_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScale> slot_handle(slot);
	MiqtVirtualQGraphicsScale* self_cast = dynamic_cast<MiqtVirtualQGraphicsScale*>( (QGraphicsScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QGraphicsScale_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQGraphicsScale*>(self)->QGraphicsScale::connectNotify(*signal);
}

bool QGraphicsScale_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScale> slot_handle(slot);
	MiqtVirtualQGraphicsScale* self_cast = dynamic_cast<MiqtVirtualQGraphicsScale*>( (QGraphicsScale*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QGraphicsScale_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQGraphicsScale*>(self)->QGraphicsScale::disconnectNotify(*signal);
}

void QGraphicsScale_protectedbase_update(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsScale* self_cast = dynamic_cast<MiqtVirtualQGraphicsScale*>( (QGraphicsScale*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->update();
}

QObject* QGraphicsScale_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsScale* self_cast = dynamic_cast<MiqtVirtualQGraphicsScale*>( (QGraphicsScale*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QGraphicsScale_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsScale* self_cast = dynamic_cast<MiqtVirtualQGraphicsScale*>( (QGraphicsScale*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QGraphicsScale_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQGraphicsScale* self_cast = dynamic_cast<MiqtVirtualQGraphicsScale*>( (QGraphicsScale*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QGraphicsScale_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQGraphicsScale* self_cast = dynamic_cast<MiqtVirtualQGraphicsScale*>( (QGraphicsScale*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QGraphicsScale_delete(QGraphicsScale* self) {
	delete self;
}

class MiqtVirtualQGraphicsRotation final : public QGraphicsRotation {
public:

	MiqtVirtualQGraphicsRotation(): QGraphicsRotation() {}
	MiqtVirtualQGraphicsRotation(QObject* parent): QGraphicsRotation(parent) {}

	virtual ~MiqtVirtualQGraphicsRotation() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsRotation> handle__applyTo;

	// Subclass to allow providing a Go implementation
	virtual void applyTo(QMatrix4x4* matrix) const override {
		if (!handle__applyTo) {
			QGraphicsRotation::applyTo(matrix);
			return;
		}

		QMatrix4x4* sigval1 = matrix;
		miqt_exec_callback_QGraphicsRotation_applyTo(this, handle__applyTo.value(), sigval1);

	}

	friend void QGraphicsRotation_virtualbase_applyTo(const void* self, QMatrix4x4* matrix);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsRotation> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QGraphicsRotation::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QGraphicsRotation_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QGraphicsRotation_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsRotation> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QGraphicsRotation::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QGraphicsRotation_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QGraphicsRotation_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsRotation> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QGraphicsRotation::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsRotation_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QGraphicsRotation_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsRotation> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QGraphicsRotation::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsRotation_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QGraphicsRotation_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsRotation> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QGraphicsRotation::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsRotation_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QGraphicsRotation_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsRotation> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QGraphicsRotation::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QGraphicsRotation_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QGraphicsRotation_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsRotation> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QGraphicsRotation::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QGraphicsRotation_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QGraphicsRotation_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QGraphicsRotation_protectedbase_update(bool* _dynamic_cast_ok, void* self);
	friend QObject* QGraphicsRotation_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsRotation_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsRotation_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QGraphicsRotation_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QGraphicsRotation* QGraphicsRotation_new() {
	return new (std::nothrow) MiqtVirtualQGraphicsRotation();
}

QGraphicsRotation* QGraphicsRotation_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQGraphicsRotation(parent);
}

void QGraphicsRotation_virtbase(QGraphicsRotation* src, QGraphicsTransform** outptr_QGraphicsTransform) {
	*outptr_QGraphicsTransform = static_cast<QGraphicsTransform*>(src);
}

QMetaObject* QGraphicsRotation_metaObject(const QGraphicsRotation* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsRotation_metacast(QGraphicsRotation* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsRotation_tr(const char* s) {
	QString _ret = QGraphicsRotation::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsRotation_trUtf8(const char* s) {
	QString _ret = QGraphicsRotation::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QVector3D* QGraphicsRotation_origin(const QGraphicsRotation* self) {
	return new QVector3D(self->origin());
}

void QGraphicsRotation_setOrigin(QGraphicsRotation* self, QVector3D* point) {
	self->setOrigin(*point);
}

double QGraphicsRotation_angle(const QGraphicsRotation* self) {
	qreal _ret = self->angle();
	return static_cast<double>(_ret);
}

void QGraphicsRotation_setAngle(QGraphicsRotation* self, double angle) {
	self->setAngle(static_cast<qreal>(angle));
}

QVector3D* QGraphicsRotation_axis(const QGraphicsRotation* self) {
	return new QVector3D(self->axis());
}

void QGraphicsRotation_setAxis(QGraphicsRotation* self, QVector3D* axis) {
	self->setAxis(*axis);
}

void QGraphicsRotation_setAxisWithAxis(QGraphicsRotation* self, int axis) {
	self->setAxis(static_cast<Qt::Axis>(axis));
}

void QGraphicsRotation_applyTo(const QGraphicsRotation* self, QMatrix4x4* matrix) {
	self->applyTo(matrix);
}

void QGraphicsRotation_originChanged(QGraphicsRotation* self) {
	self->originChanged();
}

void* QGraphicsRotation_connect_originChanged(QGraphicsRotation* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsRotation>>(slot);
	return new QMetaObject::Connection(QGraphicsRotation::connect(self, static_cast<void (QGraphicsRotation::*)()>(&QGraphicsRotation::originChanged), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QGraphicsRotation_originChanged(slot);
	}));
}

void QGraphicsRotation_angleChanged(QGraphicsRotation* self) {
	self->angleChanged();
}

void* QGraphicsRotation_connect_angleChanged(QGraphicsRotation* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsRotation>>(slot);
	return new QMetaObject::Connection(QGraphicsRotation::connect(self, static_cast<void (QGraphicsRotation::*)()>(&QGraphicsRotation::angleChanged), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QGraphicsRotation_angleChanged(slot);
	}));
}

void QGraphicsRotation_axisChanged(QGraphicsRotation* self) {
	self->axisChanged();
}

void* QGraphicsRotation_connect_axisChanged(QGraphicsRotation* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsRotation>>(slot);
	return new QMetaObject::Connection(QGraphicsRotation::connect(self, static_cast<void (QGraphicsRotation::*)()>(&QGraphicsRotation::axisChanged), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QGraphicsRotation_axisChanged(slot);
	}));
}

struct miqt_string QGraphicsRotation_tr2(const char* s, const char* c) {
	QString _ret = QGraphicsRotation::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsRotation_tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsRotation::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsRotation_trUtf82(const char* s, const char* c) {
	QString _ret = QGraphicsRotation::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsRotation_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QGraphicsRotation::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QGraphicsRotation_override_virtual_applyTo(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsRotation> slot_handle(slot);
	MiqtVirtualQGraphicsRotation* self_cast = dynamic_cast<MiqtVirtualQGraphicsRotation*>( (QGraphicsRotation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__applyTo = std::move(slot_handle);
	return true;
}

void QGraphicsRotation_virtualbase_applyTo(const void* self, QMatrix4x4* matrix) {
	static_cast<const MiqtVirtualQGraphicsRotation*>(self)->QGraphicsRotation::applyTo(matrix);
}

bool QGraphicsRotation_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsRotation> slot_handle(slot);
	MiqtVirtualQGraphicsRotation* self_cast = dynamic_cast<MiqtVirtualQGraphicsRotation*>( (QGraphicsRotation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QGraphicsRotation_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQGraphicsRotation*>(self)->QGraphicsRotation::event(event);
}

bool QGraphicsRotation_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsRotation> slot_handle(slot);
	MiqtVirtualQGraphicsRotation* self_cast = dynamic_cast<MiqtVirtualQGraphicsRotation*>( (QGraphicsRotation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QGraphicsRotation_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQGraphicsRotation*>(self)->QGraphicsRotation::eventFilter(watched, event);
}

bool QGraphicsRotation_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsRotation> slot_handle(slot);
	MiqtVirtualQGraphicsRotation* self_cast = dynamic_cast<MiqtVirtualQGraphicsRotation*>( (QGraphicsRotation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QGraphicsRotation_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQGraphicsRotation*>(self)->QGraphicsRotation::timerEvent(event);
}

bool QGraphicsRotation_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsRotation> slot_handle(slot);
	MiqtVirtualQGraphicsRotation* self_cast = dynamic_cast<MiqtVirtualQGraphicsRotation*>( (QGraphicsRotation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QGraphicsRotation_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQGraphicsRotation*>(self)->QGraphicsRotation::childEvent(event);
}

bool QGraphicsRotation_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsRotation> slot_handle(slot);
	MiqtVirtualQGraphicsRotation* self_cast = dynamic_cast<MiqtVirtualQGraphicsRotation*>( (QGraphicsRotation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QGraphicsRotation_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQGraphicsRotation*>(self)->QGraphicsRotation::customEvent(event);
}

bool QGraphicsRotation_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsRotation> slot_handle(slot);
	MiqtVirtualQGraphicsRotation* self_cast = dynamic_cast<MiqtVirtualQGraphicsRotation*>( (QGraphicsRotation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QGraphicsRotation_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQGraphicsRotation*>(self)->QGraphicsRotation::connectNotify(*signal);
}

bool QGraphicsRotation_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsRotation> slot_handle(slot);
	MiqtVirtualQGraphicsRotation* self_cast = dynamic_cast<MiqtVirtualQGraphicsRotation*>( (QGraphicsRotation*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QGraphicsRotation_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQGraphicsRotation*>(self)->QGraphicsRotation::disconnectNotify(*signal);
}

void QGraphicsRotation_protectedbase_update(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsRotation* self_cast = dynamic_cast<MiqtVirtualQGraphicsRotation*>( (QGraphicsRotation*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->update();
}

QObject* QGraphicsRotation_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsRotation* self_cast = dynamic_cast<MiqtVirtualQGraphicsRotation*>( (QGraphicsRotation*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QGraphicsRotation_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsRotation* self_cast = dynamic_cast<MiqtVirtualQGraphicsRotation*>( (QGraphicsRotation*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QGraphicsRotation_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQGraphicsRotation* self_cast = dynamic_cast<MiqtVirtualQGraphicsRotation*>( (QGraphicsRotation*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QGraphicsRotation_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQGraphicsRotation* self_cast = dynamic_cast<MiqtVirtualQGraphicsRotation*>( (QGraphicsRotation*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QGraphicsRotation_delete(QGraphicsRotation* self) {
	delete self;
}

