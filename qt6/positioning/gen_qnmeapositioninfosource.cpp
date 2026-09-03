#include <memory>
#include <utility>
#include <QChildEvent>
#include <QEvent>
#include <QGeoPositionInfo>
#include <QGeoPositionInfoSource>
#include <QIODevice>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNmeaPositionInfoSource>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qnmeapositioninfosource.h>
#include "gen_qnmeapositioninfosource.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QNmeaPositionInfoSource(intptr_t);
void miqt_exec_callback_QNmeaPositionInfoSource_setUpdateInterval(QNmeaPositionInfoSource*, intptr_t, int);
QGeoPositionInfo* miqt_exec_callback_QNmeaPositionInfoSource_lastKnownPosition(const QNmeaPositionInfoSource*, intptr_t, bool);
int miqt_exec_callback_QNmeaPositionInfoSource_supportedPositioningMethods(const QNmeaPositionInfoSource*, intptr_t);
int miqt_exec_callback_QNmeaPositionInfoSource_minimumUpdateInterval(const QNmeaPositionInfoSource*, intptr_t);
int miqt_exec_callback_QNmeaPositionInfoSource_error(const QNmeaPositionInfoSource*, intptr_t);
void miqt_exec_callback_QNmeaPositionInfoSource_startUpdates(QNmeaPositionInfoSource*, intptr_t);
void miqt_exec_callback_QNmeaPositionInfoSource_stopUpdates(QNmeaPositionInfoSource*, intptr_t);
void miqt_exec_callback_QNmeaPositionInfoSource_requestUpdate(QNmeaPositionInfoSource*, intptr_t, int);
bool miqt_exec_callback_QNmeaPositionInfoSource_parsePosInfoFromNmeaData(QNmeaPositionInfoSource*, intptr_t, const char*, int, QGeoPositionInfo*, bool*);
void miqt_exec_callback_QNmeaPositionInfoSource_setPreferredPositioningMethods(QNmeaPositionInfoSource*, intptr_t, int);
bool miqt_exec_callback_QNmeaPositionInfoSource_setBackendProperty(QNmeaPositionInfoSource*, intptr_t, struct miqt_string, QVariant*);
QVariant* miqt_exec_callback_QNmeaPositionInfoSource_backendProperty(const QNmeaPositionInfoSource*, intptr_t, struct miqt_string);
bool miqt_exec_callback_QNmeaPositionInfoSource_event(QNmeaPositionInfoSource*, intptr_t, QEvent*);
bool miqt_exec_callback_QNmeaPositionInfoSource_eventFilter(QNmeaPositionInfoSource*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QNmeaPositionInfoSource_timerEvent(QNmeaPositionInfoSource*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QNmeaPositionInfoSource_childEvent(QNmeaPositionInfoSource*, intptr_t, QChildEvent*);
void miqt_exec_callback_QNmeaPositionInfoSource_customEvent(QNmeaPositionInfoSource*, intptr_t, QEvent*);
void miqt_exec_callback_QNmeaPositionInfoSource_connectNotify(QNmeaPositionInfoSource*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QNmeaPositionInfoSource_disconnectNotify(QNmeaPositionInfoSource*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQNmeaPositionInfoSource final : public QNmeaPositionInfoSource {
public:

	MiqtVirtualQNmeaPositionInfoSource(QNmeaPositionInfoSource::UpdateMode updateMode): QNmeaPositionInfoSource(updateMode) {}
	MiqtVirtualQNmeaPositionInfoSource(QNmeaPositionInfoSource::UpdateMode updateMode, QObject* parent): QNmeaPositionInfoSource(updateMode, parent) {}

	virtual ~MiqtVirtualQNmeaPositionInfoSource() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaPositionInfoSource> handle__setUpdateInterval;

	// Subclass to allow providing a Go implementation
	virtual void setUpdateInterval(int msec) override {
		if (!handle__setUpdateInterval) {
			QNmeaPositionInfoSource::setUpdateInterval(msec);
			return;
		}

		int sigval1 = msec;
		miqt_exec_callback_QNmeaPositionInfoSource_setUpdateInterval(this, handle__setUpdateInterval.value(), sigval1);

	}

	friend void QNmeaPositionInfoSource_virtualbase_setUpdateInterval(void* self, int msec);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaPositionInfoSource> handle__lastKnownPosition;

	// Subclass to allow providing a Go implementation
	virtual QGeoPositionInfo lastKnownPosition(bool fromSatellitePositioningMethodsOnly) const override {
		if (!handle__lastKnownPosition) {
			return QNmeaPositionInfoSource::lastKnownPosition(fromSatellitePositioningMethodsOnly);
		}

		bool sigval1 = fromSatellitePositioningMethodsOnly;
		QGeoPositionInfo* callback_return_value = miqt_exec_callback_QNmeaPositionInfoSource_lastKnownPosition(this, handle__lastKnownPosition.value(), sigval1);
		return *callback_return_value;
	}

	friend QGeoPositionInfo* QNmeaPositionInfoSource_virtualbase_lastKnownPosition(const void* self, bool fromSatellitePositioningMethodsOnly);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaPositionInfoSource> handle__supportedPositioningMethods;

	// Subclass to allow providing a Go implementation
	virtual QGeoPositionInfoSource::PositioningMethods supportedPositioningMethods() const override {
		if (!handle__supportedPositioningMethods) {
			return QNmeaPositionInfoSource::supportedPositioningMethods();
		}

		int callback_return_value = miqt_exec_callback_QNmeaPositionInfoSource_supportedPositioningMethods(this, handle__supportedPositioningMethods.value());
		return static_cast<QGeoPositionInfoSource::PositioningMethods>(callback_return_value);
	}

	friend int QNmeaPositionInfoSource_virtualbase_supportedPositioningMethods(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaPositionInfoSource> handle__minimumUpdateInterval;

	// Subclass to allow providing a Go implementation
	virtual int minimumUpdateInterval() const override {
		if (!handle__minimumUpdateInterval) {
			return QNmeaPositionInfoSource::minimumUpdateInterval();
		}

		int callback_return_value = miqt_exec_callback_QNmeaPositionInfoSource_minimumUpdateInterval(this, handle__minimumUpdateInterval.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QNmeaPositionInfoSource_virtualbase_minimumUpdateInterval(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaPositionInfoSource> handle__error;

	// Subclass to allow providing a Go implementation
	virtual QGeoPositionInfoSource::Error error() const override {
		if (!handle__error) {
			return QNmeaPositionInfoSource::error();
		}

		int callback_return_value = miqt_exec_callback_QNmeaPositionInfoSource_error(this, handle__error.value());
		return static_cast<QGeoPositionInfoSource::Error>(callback_return_value);
	}

	friend int QNmeaPositionInfoSource_virtualbase_error(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaPositionInfoSource> handle__startUpdates;

	// Subclass to allow providing a Go implementation
	virtual void startUpdates() override {
		if (!handle__startUpdates) {
			QNmeaPositionInfoSource::startUpdates();
			return;
		}

		miqt_exec_callback_QNmeaPositionInfoSource_startUpdates(this, handle__startUpdates.value());

	}

	friend void QNmeaPositionInfoSource_virtualbase_startUpdates(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaPositionInfoSource> handle__stopUpdates;

	// Subclass to allow providing a Go implementation
	virtual void stopUpdates() override {
		if (!handle__stopUpdates) {
			QNmeaPositionInfoSource::stopUpdates();
			return;
		}

		miqt_exec_callback_QNmeaPositionInfoSource_stopUpdates(this, handle__stopUpdates.value());

	}

	friend void QNmeaPositionInfoSource_virtualbase_stopUpdates(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaPositionInfoSource> handle__requestUpdate;

	// Subclass to allow providing a Go implementation
	virtual void requestUpdate(int timeout) override {
		if (!handle__requestUpdate) {
			QNmeaPositionInfoSource::requestUpdate(timeout);
			return;
		}

		int sigval1 = timeout;
		miqt_exec_callback_QNmeaPositionInfoSource_requestUpdate(this, handle__requestUpdate.value(), sigval1);

	}

	friend void QNmeaPositionInfoSource_virtualbase_requestUpdate(void* self, int timeout);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaPositionInfoSource> handle__parsePosInfoFromNmeaData;

	// Subclass to allow providing a Go implementation
	virtual bool parsePosInfoFromNmeaData(const char* data, int size, QGeoPositionInfo* posInfo, bool* hasFix) override {
		if (!handle__parsePosInfoFromNmeaData) {
			return QNmeaPositionInfoSource::parsePosInfoFromNmeaData(data, size, posInfo, hasFix);
		}

		const char* sigval1 = (const char*) data;
		int sigval2 = size;
		QGeoPositionInfo* sigval3 = posInfo;
		bool* sigval4 = hasFix;
		bool callback_return_value = miqt_exec_callback_QNmeaPositionInfoSource_parsePosInfoFromNmeaData(this, handle__parsePosInfoFromNmeaData.value(), sigval1, sigval2, sigval3, sigval4);
		return callback_return_value;
	}

	friend bool QNmeaPositionInfoSource_virtualbase_parsePosInfoFromNmeaData(void* self, const char* data, int size, QGeoPositionInfo* posInfo, bool* hasFix);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaPositionInfoSource> handle__setPreferredPositioningMethods;

	// Subclass to allow providing a Go implementation
	virtual void setPreferredPositioningMethods(QGeoPositionInfoSource::PositioningMethods methods) override {
		if (!handle__setPreferredPositioningMethods) {
			QNmeaPositionInfoSource::setPreferredPositioningMethods(methods);
			return;
		}

		QGeoPositionInfoSource::PositioningMethods methods_ret = methods;
		int sigval1 = static_cast<int>(methods_ret);
		miqt_exec_callback_QNmeaPositionInfoSource_setPreferredPositioningMethods(this, handle__setPreferredPositioningMethods.value(), sigval1);

	}

	friend void QNmeaPositionInfoSource_virtualbase_setPreferredPositioningMethods(void* self, int methods);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaPositionInfoSource> handle__setBackendProperty;

	// Subclass to allow providing a Go implementation
	virtual bool setBackendProperty(const QString& name, const QVariant& value) override {
		if (!handle__setBackendProperty) {
			return QNmeaPositionInfoSource::setBackendProperty(name, value);
		}

		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		bool callback_return_value = miqt_exec_callback_QNmeaPositionInfoSource_setBackendProperty(this, handle__setBackendProperty.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QNmeaPositionInfoSource_virtualbase_setBackendProperty(void* self, struct miqt_string name, QVariant* value);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaPositionInfoSource> handle__backendProperty;

	// Subclass to allow providing a Go implementation
	virtual QVariant backendProperty(const QString& name) const override {
		if (!handle__backendProperty) {
			return QNmeaPositionInfoSource::backendProperty(name);
		}

		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		QVariant* callback_return_value = miqt_exec_callback_QNmeaPositionInfoSource_backendProperty(this, handle__backendProperty.value(), sigval1);
		return *callback_return_value;
	}

	friend QVariant* QNmeaPositionInfoSource_virtualbase_backendProperty(const void* self, struct miqt_string name);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaPositionInfoSource> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QNmeaPositionInfoSource::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QNmeaPositionInfoSource_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QNmeaPositionInfoSource_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaPositionInfoSource> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QNmeaPositionInfoSource::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QNmeaPositionInfoSource_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QNmeaPositionInfoSource_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaPositionInfoSource> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QNmeaPositionInfoSource::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QNmeaPositionInfoSource_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QNmeaPositionInfoSource_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaPositionInfoSource> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QNmeaPositionInfoSource::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QNmeaPositionInfoSource_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QNmeaPositionInfoSource_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaPositionInfoSource> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QNmeaPositionInfoSource::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QNmeaPositionInfoSource_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QNmeaPositionInfoSource_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaPositionInfoSource> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QNmeaPositionInfoSource::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QNmeaPositionInfoSource_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QNmeaPositionInfoSource_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaPositionInfoSource> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QNmeaPositionInfoSource::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QNmeaPositionInfoSource_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QNmeaPositionInfoSource_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QNmeaPositionInfoSource_protectedbase_setError(bool* _dynamic_cast_ok, void* self, int positionError);
	friend QObject* QNmeaPositionInfoSource_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QNmeaPositionInfoSource_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QNmeaPositionInfoSource_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QNmeaPositionInfoSource_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QNmeaPositionInfoSource* QNmeaPositionInfoSource_new(int updateMode) {
	return new (std::nothrow) MiqtVirtualQNmeaPositionInfoSource(static_cast<QNmeaPositionInfoSource::UpdateMode>(updateMode));
}

QNmeaPositionInfoSource* QNmeaPositionInfoSource_new2(int updateMode, QObject* parent) {
	return new (std::nothrow) MiqtVirtualQNmeaPositionInfoSource(static_cast<QNmeaPositionInfoSource::UpdateMode>(updateMode), parent);
}

void QNmeaPositionInfoSource_virtbase(QNmeaPositionInfoSource* src, QGeoPositionInfoSource** outptr_QGeoPositionInfoSource) {
	*outptr_QGeoPositionInfoSource = static_cast<QGeoPositionInfoSource*>(src);
}

QMetaObject* QNmeaPositionInfoSource_metaObject(const QNmeaPositionInfoSource* self) {
	return (QMetaObject*) self->metaObject();
}

void* QNmeaPositionInfoSource_metacast(QNmeaPositionInfoSource* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QNmeaPositionInfoSource_tr(const char* s) {
	QString _ret = QNmeaPositionInfoSource::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QNmeaPositionInfoSource_setUserEquivalentRangeError(QNmeaPositionInfoSource* self, double uere) {
	self->setUserEquivalentRangeError(static_cast<double>(uere));
}

double QNmeaPositionInfoSource_userEquivalentRangeError(const QNmeaPositionInfoSource* self) {
	return self->userEquivalentRangeError();
}

int QNmeaPositionInfoSource_updateMode(const QNmeaPositionInfoSource* self) {
	QNmeaPositionInfoSource::UpdateMode _ret = self->updateMode();
	return static_cast<int>(_ret);
}

void QNmeaPositionInfoSource_setDevice(QNmeaPositionInfoSource* self, QIODevice* source) {
	self->setDevice(source);
}

QIODevice* QNmeaPositionInfoSource_device(const QNmeaPositionInfoSource* self) {
	return self->device();
}

void QNmeaPositionInfoSource_setUpdateInterval(QNmeaPositionInfoSource* self, int msec) {
	self->setUpdateInterval(static_cast<int>(msec));
}

QGeoPositionInfo* QNmeaPositionInfoSource_lastKnownPosition(const QNmeaPositionInfoSource* self, bool fromSatellitePositioningMethodsOnly) {
	return new QGeoPositionInfo(self->lastKnownPosition(fromSatellitePositioningMethodsOnly));
}

int QNmeaPositionInfoSource_supportedPositioningMethods(const QNmeaPositionInfoSource* self) {
	QGeoPositionInfoSource::PositioningMethods _ret = self->supportedPositioningMethods();
	return static_cast<int>(_ret);
}

int QNmeaPositionInfoSource_minimumUpdateInterval(const QNmeaPositionInfoSource* self) {
	return self->minimumUpdateInterval();
}

int QNmeaPositionInfoSource_error(const QNmeaPositionInfoSource* self) {
	QGeoPositionInfoSource::Error _ret = self->error();
	return static_cast<int>(_ret);
}

void QNmeaPositionInfoSource_startUpdates(QNmeaPositionInfoSource* self) {
	self->startUpdates();
}

void QNmeaPositionInfoSource_stopUpdates(QNmeaPositionInfoSource* self) {
	self->stopUpdates();
}

void QNmeaPositionInfoSource_requestUpdate(QNmeaPositionInfoSource* self, int timeout) {
	self->requestUpdate(static_cast<int>(timeout));
}

struct miqt_string QNmeaPositionInfoSource_tr2(const char* s, const char* c) {
	QString _ret = QNmeaPositionInfoSource::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNmeaPositionInfoSource_tr3(const char* s, const char* c, int n) {
	QString _ret = QNmeaPositionInfoSource::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QNmeaPositionInfoSource_override_virtual_setUpdateInterval(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaPositionInfoSource> slot_handle(slot);
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setUpdateInterval = std::move(slot_handle);
	return true;
}

void QNmeaPositionInfoSource_virtualbase_setUpdateInterval(void* self, int msec) {
	static_cast<MiqtVirtualQNmeaPositionInfoSource*>(self)->QNmeaPositionInfoSource::setUpdateInterval(static_cast<int>(msec));
}

bool QNmeaPositionInfoSource_override_virtual_lastKnownPosition(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaPositionInfoSource> slot_handle(slot);
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__lastKnownPosition = std::move(slot_handle);
	return true;
}

QGeoPositionInfo* QNmeaPositionInfoSource_virtualbase_lastKnownPosition(const void* self, bool fromSatellitePositioningMethodsOnly) {
	return new QGeoPositionInfo(static_cast<const MiqtVirtualQNmeaPositionInfoSource*>(self)->QNmeaPositionInfoSource::lastKnownPosition(fromSatellitePositioningMethodsOnly));
}

bool QNmeaPositionInfoSource_override_virtual_supportedPositioningMethods(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaPositionInfoSource> slot_handle(slot);
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__supportedPositioningMethods = std::move(slot_handle);
	return true;
}

int QNmeaPositionInfoSource_virtualbase_supportedPositioningMethods(const void* self) {
	MiqtVirtualQNmeaPositionInfoSource::PositioningMethods _ret = static_cast<const MiqtVirtualQNmeaPositionInfoSource*>(self)->QNmeaPositionInfoSource::supportedPositioningMethods();
	return static_cast<int>(_ret);
}

bool QNmeaPositionInfoSource_override_virtual_minimumUpdateInterval(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaPositionInfoSource> slot_handle(slot);
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumUpdateInterval = std::move(slot_handle);
	return true;
}

int QNmeaPositionInfoSource_virtualbase_minimumUpdateInterval(const void* self) {
	return static_cast<const MiqtVirtualQNmeaPositionInfoSource*>(self)->QNmeaPositionInfoSource::minimumUpdateInterval();
}

bool QNmeaPositionInfoSource_override_virtual_error(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaPositionInfoSource> slot_handle(slot);
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__error = std::move(slot_handle);
	return true;
}

int QNmeaPositionInfoSource_virtualbase_error(const void* self) {
	MiqtVirtualQNmeaPositionInfoSource::Error _ret = static_cast<const MiqtVirtualQNmeaPositionInfoSource*>(self)->QNmeaPositionInfoSource::error();
	return static_cast<int>(_ret);
}

bool QNmeaPositionInfoSource_override_virtual_startUpdates(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaPositionInfoSource> slot_handle(slot);
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__startUpdates = std::move(slot_handle);
	return true;
}

void QNmeaPositionInfoSource_virtualbase_startUpdates(void* self) {
	static_cast<MiqtVirtualQNmeaPositionInfoSource*>(self)->QNmeaPositionInfoSource::startUpdates();
}

bool QNmeaPositionInfoSource_override_virtual_stopUpdates(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaPositionInfoSource> slot_handle(slot);
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__stopUpdates = std::move(slot_handle);
	return true;
}

void QNmeaPositionInfoSource_virtualbase_stopUpdates(void* self) {
	static_cast<MiqtVirtualQNmeaPositionInfoSource*>(self)->QNmeaPositionInfoSource::stopUpdates();
}

bool QNmeaPositionInfoSource_override_virtual_requestUpdate(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaPositionInfoSource> slot_handle(slot);
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__requestUpdate = std::move(slot_handle);
	return true;
}

void QNmeaPositionInfoSource_virtualbase_requestUpdate(void* self, int timeout) {
	static_cast<MiqtVirtualQNmeaPositionInfoSource*>(self)->QNmeaPositionInfoSource::requestUpdate(static_cast<int>(timeout));
}

bool QNmeaPositionInfoSource_override_virtual_parsePosInfoFromNmeaData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaPositionInfoSource> slot_handle(slot);
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__parsePosInfoFromNmeaData = std::move(slot_handle);
	return true;
}

bool QNmeaPositionInfoSource_virtualbase_parsePosInfoFromNmeaData(void* self, const char* data, int size, QGeoPositionInfo* posInfo, bool* hasFix) {
	return static_cast<MiqtVirtualQNmeaPositionInfoSource*>(self)->QNmeaPositionInfoSource::parsePosInfoFromNmeaData(data, static_cast<int>(size), posInfo, hasFix);
}

bool QNmeaPositionInfoSource_override_virtual_setPreferredPositioningMethods(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaPositionInfoSource> slot_handle(slot);
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setPreferredPositioningMethods = std::move(slot_handle);
	return true;
}

void QNmeaPositionInfoSource_virtualbase_setPreferredPositioningMethods(void* self, int methods) {
	static_cast<MiqtVirtualQNmeaPositionInfoSource*>(self)->QNmeaPositionInfoSource::setPreferredPositioningMethods(static_cast<MiqtVirtualQNmeaPositionInfoSource::PositioningMethods>(methods));
}

bool QNmeaPositionInfoSource_override_virtual_setBackendProperty(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaPositionInfoSource> slot_handle(slot);
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setBackendProperty = std::move(slot_handle);
	return true;
}

bool QNmeaPositionInfoSource_virtualbase_setBackendProperty(void* self, struct miqt_string name, QVariant* value) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return static_cast<MiqtVirtualQNmeaPositionInfoSource*>(self)->QNmeaPositionInfoSource::setBackendProperty(name_QString, *value);
}

bool QNmeaPositionInfoSource_override_virtual_backendProperty(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaPositionInfoSource> slot_handle(slot);
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__backendProperty = std::move(slot_handle);
	return true;
}

QVariant* QNmeaPositionInfoSource_virtualbase_backendProperty(const void* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QVariant(static_cast<const MiqtVirtualQNmeaPositionInfoSource*>(self)->QNmeaPositionInfoSource::backendProperty(name_QString));
}

bool QNmeaPositionInfoSource_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaPositionInfoSource> slot_handle(slot);
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QNmeaPositionInfoSource_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQNmeaPositionInfoSource*>(self)->QNmeaPositionInfoSource::event(event);
}

bool QNmeaPositionInfoSource_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaPositionInfoSource> slot_handle(slot);
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QNmeaPositionInfoSource_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQNmeaPositionInfoSource*>(self)->QNmeaPositionInfoSource::eventFilter(watched, event);
}

bool QNmeaPositionInfoSource_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaPositionInfoSource> slot_handle(slot);
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QNmeaPositionInfoSource_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQNmeaPositionInfoSource*>(self)->QNmeaPositionInfoSource::timerEvent(event);
}

bool QNmeaPositionInfoSource_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaPositionInfoSource> slot_handle(slot);
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QNmeaPositionInfoSource_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQNmeaPositionInfoSource*>(self)->QNmeaPositionInfoSource::childEvent(event);
}

bool QNmeaPositionInfoSource_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaPositionInfoSource> slot_handle(slot);
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QNmeaPositionInfoSource_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQNmeaPositionInfoSource*>(self)->QNmeaPositionInfoSource::customEvent(event);
}

bool QNmeaPositionInfoSource_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaPositionInfoSource> slot_handle(slot);
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QNmeaPositionInfoSource_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQNmeaPositionInfoSource*>(self)->QNmeaPositionInfoSource::connectNotify(*signal);
}

bool QNmeaPositionInfoSource_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaPositionInfoSource> slot_handle(slot);
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QNmeaPositionInfoSource_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQNmeaPositionInfoSource*>(self)->QNmeaPositionInfoSource::disconnectNotify(*signal);
}

void QNmeaPositionInfoSource_protectedbase_setError(bool* _dynamic_cast_ok, void* self, int positionError) {
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setError(static_cast<MiqtVirtualQNmeaPositionInfoSource::Error>(positionError));
}

QObject* QNmeaPositionInfoSource_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QNmeaPositionInfoSource_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QNmeaPositionInfoSource_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QNmeaPositionInfoSource_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQNmeaPositionInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaPositionInfoSource*>( (QNmeaPositionInfoSource*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QNmeaPositionInfoSource_delete(QNmeaPositionInfoSource* self) {
	delete self;
}

