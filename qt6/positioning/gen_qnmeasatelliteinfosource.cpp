#include <memory>
#include <utility>
#include <QChildEvent>
#include <QEvent>
#include <QGeoSatelliteInfo>
#include <QGeoSatelliteInfoSource>
#include <QIODevice>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNmeaSatelliteInfoSource>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qnmeasatelliteinfosource.h>
#include "gen_qnmeasatelliteinfosource.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QNmeaSatelliteInfoSource(intptr_t);
void miqt_exec_callback_QNmeaSatelliteInfoSource_setUpdateInterval(QNmeaSatelliteInfoSource*, intptr_t, int);
int miqt_exec_callback_QNmeaSatelliteInfoSource_minimumUpdateInterval(const QNmeaSatelliteInfoSource*, intptr_t);
int miqt_exec_callback_QNmeaSatelliteInfoSource_error(const QNmeaSatelliteInfoSource*, intptr_t);
bool miqt_exec_callback_QNmeaSatelliteInfoSource_setBackendProperty(QNmeaSatelliteInfoSource*, intptr_t, struct miqt_string, QVariant*);
QVariant* miqt_exec_callback_QNmeaSatelliteInfoSource_backendProperty(const QNmeaSatelliteInfoSource*, intptr_t, struct miqt_string);
void miqt_exec_callback_QNmeaSatelliteInfoSource_startUpdates(QNmeaSatelliteInfoSource*, intptr_t);
void miqt_exec_callback_QNmeaSatelliteInfoSource_stopUpdates(QNmeaSatelliteInfoSource*, intptr_t);
void miqt_exec_callback_QNmeaSatelliteInfoSource_requestUpdate(QNmeaSatelliteInfoSource*, intptr_t, int);
int miqt_exec_callback_QNmeaSatelliteInfoSource_parseSatellitesInUseFromNmea(QNmeaSatelliteInfoSource*, intptr_t, const char*, int, struct miqt_array /* of int */ );
int miqt_exec_callback_QNmeaSatelliteInfoSource_parseSatelliteInfoFromNmea(QNmeaSatelliteInfoSource*, intptr_t, const char*, int, struct miqt_array /* of QGeoSatelliteInfo* */ , int*);
bool miqt_exec_callback_QNmeaSatelliteInfoSource_event(QNmeaSatelliteInfoSource*, intptr_t, QEvent*);
bool miqt_exec_callback_QNmeaSatelliteInfoSource_eventFilter(QNmeaSatelliteInfoSource*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QNmeaSatelliteInfoSource_timerEvent(QNmeaSatelliteInfoSource*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QNmeaSatelliteInfoSource_childEvent(QNmeaSatelliteInfoSource*, intptr_t, QChildEvent*);
void miqt_exec_callback_QNmeaSatelliteInfoSource_customEvent(QNmeaSatelliteInfoSource*, intptr_t, QEvent*);
void miqt_exec_callback_QNmeaSatelliteInfoSource_connectNotify(QNmeaSatelliteInfoSource*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QNmeaSatelliteInfoSource_disconnectNotify(QNmeaSatelliteInfoSource*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQNmeaSatelliteInfoSource final : public QNmeaSatelliteInfoSource {
public:

	MiqtVirtualQNmeaSatelliteInfoSource(QNmeaSatelliteInfoSource::UpdateMode mode): QNmeaSatelliteInfoSource(mode) {}
	MiqtVirtualQNmeaSatelliteInfoSource(QNmeaSatelliteInfoSource::UpdateMode mode, QObject* parent): QNmeaSatelliteInfoSource(mode, parent) {}

	virtual ~MiqtVirtualQNmeaSatelliteInfoSource() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaSatelliteInfoSource> handle__setUpdateInterval;

	// Subclass to allow providing a Go implementation
	virtual void setUpdateInterval(int msec) override {
		if (!handle__setUpdateInterval) {
			QNmeaSatelliteInfoSource::setUpdateInterval(msec);
			return;
		}

		int sigval1 = msec;
		miqt_exec_callback_QNmeaSatelliteInfoSource_setUpdateInterval(this, handle__setUpdateInterval.value(), sigval1);

	}

	friend void QNmeaSatelliteInfoSource_virtualbase_setUpdateInterval(void* self, int msec);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaSatelliteInfoSource> handle__minimumUpdateInterval;

	// Subclass to allow providing a Go implementation
	virtual int minimumUpdateInterval() const override {
		if (!handle__minimumUpdateInterval) {
			return QNmeaSatelliteInfoSource::minimumUpdateInterval();
		}

		int callback_return_value = miqt_exec_callback_QNmeaSatelliteInfoSource_minimumUpdateInterval(this, handle__minimumUpdateInterval.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QNmeaSatelliteInfoSource_virtualbase_minimumUpdateInterval(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaSatelliteInfoSource> handle__error;

	// Subclass to allow providing a Go implementation
	virtual QGeoSatelliteInfoSource::Error error() const override {
		if (!handle__error) {
			return QNmeaSatelliteInfoSource::error();
		}

		int callback_return_value = miqt_exec_callback_QNmeaSatelliteInfoSource_error(this, handle__error.value());
		return static_cast<QGeoSatelliteInfoSource::Error>(callback_return_value);
	}

	friend int QNmeaSatelliteInfoSource_virtualbase_error(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaSatelliteInfoSource> handle__setBackendProperty;

	// Subclass to allow providing a Go implementation
	virtual bool setBackendProperty(const QString& name, const QVariant& value) override {
		if (!handle__setBackendProperty) {
			return QNmeaSatelliteInfoSource::setBackendProperty(name, value);
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
		bool callback_return_value = miqt_exec_callback_QNmeaSatelliteInfoSource_setBackendProperty(this, handle__setBackendProperty.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QNmeaSatelliteInfoSource_virtualbase_setBackendProperty(void* self, struct miqt_string name, QVariant* value);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaSatelliteInfoSource> handle__backendProperty;
	bool owns_return__backendProperty = false;

	// Subclass to allow providing a Go implementation
	virtual QVariant backendProperty(const QString& name) const override {
		if (!handle__backendProperty) {
			return QNmeaSatelliteInfoSource::backendProperty(name);
		}

		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		QVariant* callback_return_value = miqt_exec_callback_QNmeaSatelliteInfoSource_backendProperty(this, handle__backendProperty.value(), sigval1);
		std::unique_ptr<QVariant> callback_return_value_owner;
		if (owns_return__backendProperty) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QVariant* QNmeaSatelliteInfoSource_virtualbase_backendProperty(const void* self, struct miqt_string name);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaSatelliteInfoSource> handle__startUpdates;

	// Subclass to allow providing a Go implementation
	virtual void startUpdates() override {
		if (!handle__startUpdates) {
			QNmeaSatelliteInfoSource::startUpdates();
			return;
		}

		miqt_exec_callback_QNmeaSatelliteInfoSource_startUpdates(this, handle__startUpdates.value());

	}

	friend void QNmeaSatelliteInfoSource_virtualbase_startUpdates(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaSatelliteInfoSource> handle__stopUpdates;

	// Subclass to allow providing a Go implementation
	virtual void stopUpdates() override {
		if (!handle__stopUpdates) {
			QNmeaSatelliteInfoSource::stopUpdates();
			return;
		}

		miqt_exec_callback_QNmeaSatelliteInfoSource_stopUpdates(this, handle__stopUpdates.value());

	}

	friend void QNmeaSatelliteInfoSource_virtualbase_stopUpdates(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaSatelliteInfoSource> handle__requestUpdate;

	// Subclass to allow providing a Go implementation
	virtual void requestUpdate(int timeout) override {
		if (!handle__requestUpdate) {
			QNmeaSatelliteInfoSource::requestUpdate(timeout);
			return;
		}

		int sigval1 = timeout;
		miqt_exec_callback_QNmeaSatelliteInfoSource_requestUpdate(this, handle__requestUpdate.value(), sigval1);

	}

	friend void QNmeaSatelliteInfoSource_virtualbase_requestUpdate(void* self, int timeout);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaSatelliteInfoSource> handle__parseSatellitesInUseFromNmea;

	// Subclass to allow providing a Go implementation
	virtual QGeoSatelliteInfo::SatelliteSystem parseSatellitesInUseFromNmea(const char* data, int size, QList<int>& pnrsInUse) override {
		if (!handle__parseSatellitesInUseFromNmea) {
			return QNmeaSatelliteInfoSource::parseSatellitesInUseFromNmea(data, size, pnrsInUse);
		}

		const char* sigval1 = (const char*) data;
		int sigval2 = size;
		QList<int>& pnrsInUse_ret = pnrsInUse;
		// Convert QList<> from C++ memory to manually-managed C memory
		int* pnrsInUse_arr = static_cast<int*>(malloc(sizeof(int) * pnrsInUse_ret.length()));
		for (size_t i = 0, e = pnrsInUse_ret.length(); i < e; ++i) {
			pnrsInUse_arr[i] = pnrsInUse_ret[i];
		}
		struct miqt_array pnrsInUse_out;
		pnrsInUse_out.len = pnrsInUse_ret.length();
		pnrsInUse_out.data = static_cast<void*>(pnrsInUse_arr);
		struct miqt_array /* of int */  sigval3 = pnrsInUse_out;
		int callback_return_value = miqt_exec_callback_QNmeaSatelliteInfoSource_parseSatellitesInUseFromNmea(this, handle__parseSatellitesInUseFromNmea.value(), sigval1, sigval2, sigval3);
		return static_cast<QGeoSatelliteInfo::SatelliteSystem>(callback_return_value);
	}

	friend int QNmeaSatelliteInfoSource_virtualbase_parseSatellitesInUseFromNmea(void* self, const char* data, int size, struct miqt_array /* of int */  pnrsInUse);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaSatelliteInfoSource> handle__parseSatelliteInfoFromNmea;

	// Subclass to allow providing a Go implementation
	virtual QNmeaSatelliteInfoSource::SatelliteInfoParseStatus parseSatelliteInfoFromNmea(const char* data, int size, QList<QGeoSatelliteInfo>& infos, QGeoSatelliteInfo::SatelliteSystem& system) override {
		if (!handle__parseSatelliteInfoFromNmea) {
			return QNmeaSatelliteInfoSource::parseSatelliteInfoFromNmea(data, size, infos, system);
		}

		const char* sigval1 = (const char*) data;
		int sigval2 = size;
		QList<QGeoSatelliteInfo>& infos_ret = infos;
		// Convert QList<> from C++ memory to manually-managed C memory
		QGeoSatelliteInfo** infos_arr = static_cast<QGeoSatelliteInfo**>(malloc(sizeof(QGeoSatelliteInfo*) * infos_ret.length()));
		for (size_t i = 0, e = infos_ret.length(); i < e; ++i) {
			infos_arr[i] = new QGeoSatelliteInfo(infos_ret[i]);
		}
		struct miqt_array infos_out;
		infos_out.len = infos_ret.length();
		infos_out.data = static_cast<void*>(infos_arr);
		struct miqt_array /* of QGeoSatelliteInfo* */  sigval3 = infos_out;
		QGeoSatelliteInfo::SatelliteSystem& system_ret = system;
		int* sigval4 = reinterpret_cast<int*>(&system_ret);
		int callback_return_value = miqt_exec_callback_QNmeaSatelliteInfoSource_parseSatelliteInfoFromNmea(this, handle__parseSatelliteInfoFromNmea.value(), sigval1, sigval2, sigval3, sigval4);
		return static_cast<QNmeaSatelliteInfoSource::SatelliteInfoParseStatus>(callback_return_value);
	}

	friend int QNmeaSatelliteInfoSource_virtualbase_parseSatelliteInfoFromNmea(void* self, const char* data, int size, struct miqt_array /* of QGeoSatelliteInfo* */  infos, int* system);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaSatelliteInfoSource> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QNmeaSatelliteInfoSource::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QNmeaSatelliteInfoSource_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QNmeaSatelliteInfoSource_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaSatelliteInfoSource> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QNmeaSatelliteInfoSource::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QNmeaSatelliteInfoSource_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QNmeaSatelliteInfoSource_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaSatelliteInfoSource> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QNmeaSatelliteInfoSource::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QNmeaSatelliteInfoSource_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QNmeaSatelliteInfoSource_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaSatelliteInfoSource> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QNmeaSatelliteInfoSource::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QNmeaSatelliteInfoSource_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QNmeaSatelliteInfoSource_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaSatelliteInfoSource> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QNmeaSatelliteInfoSource::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QNmeaSatelliteInfoSource_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QNmeaSatelliteInfoSource_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaSatelliteInfoSource> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QNmeaSatelliteInfoSource::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QNmeaSatelliteInfoSource_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QNmeaSatelliteInfoSource_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaSatelliteInfoSource> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QNmeaSatelliteInfoSource::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QNmeaSatelliteInfoSource_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QNmeaSatelliteInfoSource_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QNmeaSatelliteInfoSource_protectedbase_setError(bool* _dynamic_cast_ok, void* self, int satelliteError);
	friend QObject* QNmeaSatelliteInfoSource_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QNmeaSatelliteInfoSource_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QNmeaSatelliteInfoSource_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QNmeaSatelliteInfoSource_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QNmeaSatelliteInfoSource* QNmeaSatelliteInfoSource_new(int mode) {
	return new (std::nothrow) MiqtVirtualQNmeaSatelliteInfoSource(static_cast<QNmeaSatelliteInfoSource::UpdateMode>(mode));
}

QNmeaSatelliteInfoSource* QNmeaSatelliteInfoSource_new2(int mode, QObject* parent) {
	return new (std::nothrow) MiqtVirtualQNmeaSatelliteInfoSource(static_cast<QNmeaSatelliteInfoSource::UpdateMode>(mode), parent);
}

void QNmeaSatelliteInfoSource_virtbase(QNmeaSatelliteInfoSource* src, QGeoSatelliteInfoSource** outptr_QGeoSatelliteInfoSource) {
	*outptr_QGeoSatelliteInfoSource = static_cast<QGeoSatelliteInfoSource*>(src);
}

QMetaObject* QNmeaSatelliteInfoSource_metaObject(const QNmeaSatelliteInfoSource* self) {
	return (QMetaObject*) self->metaObject();
}

void* QNmeaSatelliteInfoSource_metacast(QNmeaSatelliteInfoSource* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QNmeaSatelliteInfoSource_tr(const char* s) {
	QString _ret = QNmeaSatelliteInfoSource::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QNmeaSatelliteInfoSource_updateMode(const QNmeaSatelliteInfoSource* self) {
	QNmeaSatelliteInfoSource::UpdateMode _ret = self->updateMode();
	return static_cast<int>(_ret);
}

void QNmeaSatelliteInfoSource_setDevice(QNmeaSatelliteInfoSource* self, QIODevice* source) {
	self->setDevice(source);
}

QIODevice* QNmeaSatelliteInfoSource_device(const QNmeaSatelliteInfoSource* self) {
	return self->device();
}

void QNmeaSatelliteInfoSource_setUpdateInterval(QNmeaSatelliteInfoSource* self, int msec) {
	self->setUpdateInterval(static_cast<int>(msec));
}

int QNmeaSatelliteInfoSource_minimumUpdateInterval(const QNmeaSatelliteInfoSource* self) {
	return self->minimumUpdateInterval();
}

int QNmeaSatelliteInfoSource_error(const QNmeaSatelliteInfoSource* self) {
	QGeoSatelliteInfoSource::Error _ret = self->error();
	return static_cast<int>(_ret);
}

bool QNmeaSatelliteInfoSource_setBackendProperty(QNmeaSatelliteInfoSource* self, struct miqt_string name, QVariant* value) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->setBackendProperty(name_QString, *value);
}

QVariant* QNmeaSatelliteInfoSource_backendProperty(const QNmeaSatelliteInfoSource* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QVariant(self->backendProperty(name_QString));
}

void QNmeaSatelliteInfoSource_startUpdates(QNmeaSatelliteInfoSource* self) {
	self->startUpdates();
}

void QNmeaSatelliteInfoSource_stopUpdates(QNmeaSatelliteInfoSource* self) {
	self->stopUpdates();
}

void QNmeaSatelliteInfoSource_requestUpdate(QNmeaSatelliteInfoSource* self, int timeout) {
	self->requestUpdate(static_cast<int>(timeout));
}

struct miqt_string QNmeaSatelliteInfoSource_tr2(const char* s, const char* c) {
	QString _ret = QNmeaSatelliteInfoSource::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QNmeaSatelliteInfoSource_tr3(const char* s, const char* c, int n) {
	QString _ret = QNmeaSatelliteInfoSource::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QNmeaSatelliteInfoSource_override_virtual_setUpdateInterval(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaSatelliteInfoSource> slot_handle(slot);
	MiqtVirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setUpdateInterval = std::move(slot_handle);
	return true;
}

void QNmeaSatelliteInfoSource_virtualbase_setUpdateInterval(void* self, int msec) {
	static_cast<MiqtVirtualQNmeaSatelliteInfoSource*>(self)->QNmeaSatelliteInfoSource::setUpdateInterval(static_cast<int>(msec));
}

bool QNmeaSatelliteInfoSource_override_virtual_minimumUpdateInterval(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaSatelliteInfoSource> slot_handle(slot);
	MiqtVirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumUpdateInterval = std::move(slot_handle);
	return true;
}

int QNmeaSatelliteInfoSource_virtualbase_minimumUpdateInterval(const void* self) {
	return static_cast<const MiqtVirtualQNmeaSatelliteInfoSource*>(self)->QNmeaSatelliteInfoSource::minimumUpdateInterval();
}

bool QNmeaSatelliteInfoSource_override_virtual_error(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaSatelliteInfoSource> slot_handle(slot);
	MiqtVirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__error = std::move(slot_handle);
	return true;
}

int QNmeaSatelliteInfoSource_virtualbase_error(const void* self) {
	MiqtVirtualQNmeaSatelliteInfoSource::Error _ret = static_cast<const MiqtVirtualQNmeaSatelliteInfoSource*>(self)->QNmeaSatelliteInfoSource::error();
	return static_cast<int>(_ret);
}

bool QNmeaSatelliteInfoSource_override_virtual_setBackendProperty(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaSatelliteInfoSource> slot_handle(slot);
	MiqtVirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setBackendProperty = std::move(slot_handle);
	return true;
}

bool QNmeaSatelliteInfoSource_virtualbase_setBackendProperty(void* self, struct miqt_string name, QVariant* value) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return static_cast<MiqtVirtualQNmeaSatelliteInfoSource*>(self)->QNmeaSatelliteInfoSource::setBackendProperty(name_QString, *value);
}

bool QNmeaSatelliteInfoSource_override_virtual_backendProperty(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaSatelliteInfoSource> slot_handle(slot);
	MiqtVirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__backendProperty = std::move(slot_handle);
	self_cast->owns_return__backendProperty = false;
	return true;
}

bool QNmeaSatelliteInfoSource_override_virtual_owned_backendProperty(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaSatelliteInfoSource> slot_handle(slot);
	MiqtVirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__backendProperty = std::move(slot_handle);
	self_cast->owns_return__backendProperty = true;
	return true;
}

QVariant* QNmeaSatelliteInfoSource_virtualbase_backendProperty(const void* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QVariant(static_cast<const MiqtVirtualQNmeaSatelliteInfoSource*>(self)->QNmeaSatelliteInfoSource::backendProperty(name_QString));
}

bool QNmeaSatelliteInfoSource_override_virtual_startUpdates(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaSatelliteInfoSource> slot_handle(slot);
	MiqtVirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__startUpdates = std::move(slot_handle);
	return true;
}

void QNmeaSatelliteInfoSource_virtualbase_startUpdates(void* self) {
	static_cast<MiqtVirtualQNmeaSatelliteInfoSource*>(self)->QNmeaSatelliteInfoSource::startUpdates();
}

bool QNmeaSatelliteInfoSource_override_virtual_stopUpdates(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaSatelliteInfoSource> slot_handle(slot);
	MiqtVirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__stopUpdates = std::move(slot_handle);
	return true;
}

void QNmeaSatelliteInfoSource_virtualbase_stopUpdates(void* self) {
	static_cast<MiqtVirtualQNmeaSatelliteInfoSource*>(self)->QNmeaSatelliteInfoSource::stopUpdates();
}

bool QNmeaSatelliteInfoSource_override_virtual_requestUpdate(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaSatelliteInfoSource> slot_handle(slot);
	MiqtVirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__requestUpdate = std::move(slot_handle);
	return true;
}

void QNmeaSatelliteInfoSource_virtualbase_requestUpdate(void* self, int timeout) {
	static_cast<MiqtVirtualQNmeaSatelliteInfoSource*>(self)->QNmeaSatelliteInfoSource::requestUpdate(static_cast<int>(timeout));
}

bool QNmeaSatelliteInfoSource_override_virtual_parseSatellitesInUseFromNmea(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaSatelliteInfoSource> slot_handle(slot);
	MiqtVirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__parseSatellitesInUseFromNmea = std::move(slot_handle);
	return true;
}

int QNmeaSatelliteInfoSource_virtualbase_parseSatellitesInUseFromNmea(void* self, const char* data, int size, struct miqt_array /* of int */  pnrsInUse) {
	QList<int> pnrsInUse_QList;
	pnrsInUse_QList.reserve(pnrsInUse.len);
	int* pnrsInUse_arr = static_cast<int*>(pnrsInUse.data);
	for(size_t i = 0; i < pnrsInUse.len; ++i) {
		pnrsInUse_QList.push_back(static_cast<int>(pnrsInUse_arr[i]));
	}
	QGeoSatelliteInfo::SatelliteSystem _ret = static_cast<MiqtVirtualQNmeaSatelliteInfoSource*>(self)->QNmeaSatelliteInfoSource::parseSatellitesInUseFromNmea(data, static_cast<int>(size), pnrsInUse_QList);
	return static_cast<int>(_ret);
}

bool QNmeaSatelliteInfoSource_override_virtual_parseSatelliteInfoFromNmea(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaSatelliteInfoSource> slot_handle(slot);
	MiqtVirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__parseSatelliteInfoFromNmea = std::move(slot_handle);
	return true;
}

int QNmeaSatelliteInfoSource_virtualbase_parseSatelliteInfoFromNmea(void* self, const char* data, int size, struct miqt_array /* of QGeoSatelliteInfo* */  infos, int* system) {
	QList<QGeoSatelliteInfo> infos_QList;
	infos_QList.reserve(infos.len);
	QGeoSatelliteInfo** infos_arr = static_cast<QGeoSatelliteInfo**>(infos.data);
	for(size_t i = 0; i < infos.len; ++i) {
		infos_QList.push_back(*(infos_arr[i]));
	}
	MiqtVirtualQNmeaSatelliteInfoSource::SatelliteInfoParseStatus _ret = static_cast<MiqtVirtualQNmeaSatelliteInfoSource*>(self)->QNmeaSatelliteInfoSource::parseSatelliteInfoFromNmea(data, static_cast<int>(size), infos_QList, (QGeoSatelliteInfo::SatelliteSystem&)(*system));
	return static_cast<int>(_ret);
}

bool QNmeaSatelliteInfoSource_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaSatelliteInfoSource> slot_handle(slot);
	MiqtVirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QNmeaSatelliteInfoSource_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQNmeaSatelliteInfoSource*>(self)->QNmeaSatelliteInfoSource::event(event);
}

bool QNmeaSatelliteInfoSource_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaSatelliteInfoSource> slot_handle(slot);
	MiqtVirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QNmeaSatelliteInfoSource_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQNmeaSatelliteInfoSource*>(self)->QNmeaSatelliteInfoSource::eventFilter(watched, event);
}

bool QNmeaSatelliteInfoSource_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaSatelliteInfoSource> slot_handle(slot);
	MiqtVirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QNmeaSatelliteInfoSource_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQNmeaSatelliteInfoSource*>(self)->QNmeaSatelliteInfoSource::timerEvent(event);
}

bool QNmeaSatelliteInfoSource_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaSatelliteInfoSource> slot_handle(slot);
	MiqtVirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QNmeaSatelliteInfoSource_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQNmeaSatelliteInfoSource*>(self)->QNmeaSatelliteInfoSource::childEvent(event);
}

bool QNmeaSatelliteInfoSource_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaSatelliteInfoSource> slot_handle(slot);
	MiqtVirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QNmeaSatelliteInfoSource_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQNmeaSatelliteInfoSource*>(self)->QNmeaSatelliteInfoSource::customEvent(event);
}

bool QNmeaSatelliteInfoSource_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaSatelliteInfoSource> slot_handle(slot);
	MiqtVirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QNmeaSatelliteInfoSource_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQNmeaSatelliteInfoSource*>(self)->QNmeaSatelliteInfoSource::connectNotify(*signal);
}

bool QNmeaSatelliteInfoSource_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QNmeaSatelliteInfoSource> slot_handle(slot);
	MiqtVirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QNmeaSatelliteInfoSource_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQNmeaSatelliteInfoSource*>(self)->QNmeaSatelliteInfoSource::disconnectNotify(*signal);
}

void QNmeaSatelliteInfoSource_protectedbase_setError(bool* _dynamic_cast_ok, void* self, int satelliteError) {
	MiqtVirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setError(static_cast<MiqtVirtualQNmeaSatelliteInfoSource::Error>(satelliteError));
}

QObject* QNmeaSatelliteInfoSource_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QNmeaSatelliteInfoSource_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QNmeaSatelliteInfoSource_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QNmeaSatelliteInfoSource_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQNmeaSatelliteInfoSource* self_cast = dynamic_cast<MiqtVirtualQNmeaSatelliteInfoSource*>( (QNmeaSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QNmeaSatelliteInfoSource_delete(QNmeaSatelliteInfoSource* self) {
	delete self;
}

