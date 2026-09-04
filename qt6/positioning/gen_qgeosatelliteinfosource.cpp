#include <memory>
#include <utility>
#include <QChildEvent>
#include <QEvent>
#include <QGeoSatelliteInfo>
#include <QGeoSatelliteInfoSource>
#include <QList>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qgeosatelliteinfosource.h>
#include "gen_qgeosatelliteinfosource.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QGeoSatelliteInfoSource(intptr_t);
void miqt_exec_callback_QGeoSatelliteInfoSource_satellitesInViewUpdated(intptr_t, struct miqt_array /* of QGeoSatelliteInfo* */ );
void miqt_exec_callback_QGeoSatelliteInfoSource_satellitesInUseUpdated(intptr_t, struct miqt_array /* of QGeoSatelliteInfo* */ );
void miqt_exec_callback_QGeoSatelliteInfoSource_errorOccurred(intptr_t, int);
void miqt_exec_callback_QGeoSatelliteInfoSource_setUpdateInterval(QGeoSatelliteInfoSource*, intptr_t, int);
int miqt_exec_callback_QGeoSatelliteInfoSource_minimumUpdateInterval(const QGeoSatelliteInfoSource*, intptr_t);
int miqt_exec_callback_QGeoSatelliteInfoSource_error(const QGeoSatelliteInfoSource*, intptr_t);
bool miqt_exec_callback_QGeoSatelliteInfoSource_setBackendProperty(QGeoSatelliteInfoSource*, intptr_t, struct miqt_string, QVariant*);
QVariant* miqt_exec_callback_QGeoSatelliteInfoSource_backendProperty(const QGeoSatelliteInfoSource*, intptr_t, struct miqt_string);
void miqt_exec_callback_QGeoSatelliteInfoSource_startUpdates(QGeoSatelliteInfoSource*, intptr_t);
void miqt_exec_callback_QGeoSatelliteInfoSource_stopUpdates(QGeoSatelliteInfoSource*, intptr_t);
void miqt_exec_callback_QGeoSatelliteInfoSource_requestUpdate(QGeoSatelliteInfoSource*, intptr_t, int);
bool miqt_exec_callback_QGeoSatelliteInfoSource_event(QGeoSatelliteInfoSource*, intptr_t, QEvent*);
bool miqt_exec_callback_QGeoSatelliteInfoSource_eventFilter(QGeoSatelliteInfoSource*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QGeoSatelliteInfoSource_timerEvent(QGeoSatelliteInfoSource*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QGeoSatelliteInfoSource_childEvent(QGeoSatelliteInfoSource*, intptr_t, QChildEvent*);
void miqt_exec_callback_QGeoSatelliteInfoSource_customEvent(QGeoSatelliteInfoSource*, intptr_t, QEvent*);
void miqt_exec_callback_QGeoSatelliteInfoSource_connectNotify(QGeoSatelliteInfoSource*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGeoSatelliteInfoSource_disconnectNotify(QGeoSatelliteInfoSource*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGeoSatelliteInfoSource final : public QGeoSatelliteInfoSource {
public:

	MiqtVirtualQGeoSatelliteInfoSource(QObject* parent): QGeoSatelliteInfoSource(parent) {}

	virtual ~MiqtVirtualQGeoSatelliteInfoSource() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoSatelliteInfoSource> handle__setUpdateInterval;

	// Subclass to allow providing a Go implementation
	virtual void setUpdateInterval(int msec) override {
		if (!handle__setUpdateInterval) {
			QGeoSatelliteInfoSource::setUpdateInterval(msec);
			return;
		}

		int sigval1 = msec;
		miqt_exec_callback_QGeoSatelliteInfoSource_setUpdateInterval(this, handle__setUpdateInterval.value(), sigval1);

	}

	friend void QGeoSatelliteInfoSource_virtualbase_setUpdateInterval(void* self, int msec);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoSatelliteInfoSource> handle__minimumUpdateInterval;

	// Subclass to allow providing a Go implementation
	virtual int minimumUpdateInterval() const override {
		if (!handle__minimumUpdateInterval) {
			return 0; // Pure virtual, there is no base we can call
		}

		int callback_return_value = miqt_exec_callback_QGeoSatelliteInfoSource_minimumUpdateInterval(this, handle__minimumUpdateInterval.value());
		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoSatelliteInfoSource> handle__error;

	// Subclass to allow providing a Go implementation
	virtual QGeoSatelliteInfoSource::Error error() const override {
		if (!handle__error) {
			return (QGeoSatelliteInfoSource::Error)(0); // Pure virtual, there is no base we can call
		}

		int callback_return_value = miqt_exec_callback_QGeoSatelliteInfoSource_error(this, handle__error.value());
		return static_cast<QGeoSatelliteInfoSource::Error>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoSatelliteInfoSource> handle__setBackendProperty;

	// Subclass to allow providing a Go implementation
	virtual bool setBackendProperty(const QString& name, const QVariant& value) override {
		if (!handle__setBackendProperty) {
			return QGeoSatelliteInfoSource::setBackendProperty(name, value);
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
		bool callback_return_value = miqt_exec_callback_QGeoSatelliteInfoSource_setBackendProperty(this, handle__setBackendProperty.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QGeoSatelliteInfoSource_virtualbase_setBackendProperty(void* self, struct miqt_string name, QVariant* value);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoSatelliteInfoSource> handle__backendProperty;
	bool owns_return__backendProperty = false;

	// Subclass to allow providing a Go implementation
	virtual QVariant backendProperty(const QString& name) const override {
		if (!handle__backendProperty) {
			return QGeoSatelliteInfoSource::backendProperty(name);
		}

		const QString name_ret = name;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray name_b = name_ret.toUtf8();
		struct miqt_string name_ms;
		name_ms.len = name_b.length();
		name_ms.data = static_cast<char*>(malloc(name_ms.len));
		memcpy(name_ms.data, name_b.data(), name_ms.len);
		struct miqt_string sigval1 = name_ms;
		QVariant* callback_return_value = miqt_exec_callback_QGeoSatelliteInfoSource_backendProperty(this, handle__backendProperty.value(), sigval1);
		std::unique_ptr<QVariant> callback_return_value_owner;
		if (owns_return__backendProperty) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QVariant* QGeoSatelliteInfoSource_virtualbase_backendProperty(const void* self, struct miqt_string name);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoSatelliteInfoSource> handle__startUpdates;

	// Subclass to allow providing a Go implementation
	virtual void startUpdates() override {
		if (!handle__startUpdates) {
			return; // Pure virtual, there is no base we can call
		}

		miqt_exec_callback_QGeoSatelliteInfoSource_startUpdates(this, handle__startUpdates.value());

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoSatelliteInfoSource> handle__stopUpdates;

	// Subclass to allow providing a Go implementation
	virtual void stopUpdates() override {
		if (!handle__stopUpdates) {
			return; // Pure virtual, there is no base we can call
		}

		miqt_exec_callback_QGeoSatelliteInfoSource_stopUpdates(this, handle__stopUpdates.value());

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoSatelliteInfoSource> handle__requestUpdate;

	// Subclass to allow providing a Go implementation
	virtual void requestUpdate(int timeout) override {
		if (!handle__requestUpdate) {
			return; // Pure virtual, there is no base we can call
		}

		int sigval1 = timeout;
		miqt_exec_callback_QGeoSatelliteInfoSource_requestUpdate(this, handle__requestUpdate.value(), sigval1);

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoSatelliteInfoSource> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QGeoSatelliteInfoSource::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QGeoSatelliteInfoSource_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QGeoSatelliteInfoSource_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoSatelliteInfoSource> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QGeoSatelliteInfoSource::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QGeoSatelliteInfoSource_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QGeoSatelliteInfoSource_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoSatelliteInfoSource> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QGeoSatelliteInfoSource::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QGeoSatelliteInfoSource_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QGeoSatelliteInfoSource_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoSatelliteInfoSource> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QGeoSatelliteInfoSource::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QGeoSatelliteInfoSource_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QGeoSatelliteInfoSource_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoSatelliteInfoSource> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QGeoSatelliteInfoSource::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QGeoSatelliteInfoSource_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QGeoSatelliteInfoSource_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoSatelliteInfoSource> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QGeoSatelliteInfoSource::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QGeoSatelliteInfoSource_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QGeoSatelliteInfoSource_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoSatelliteInfoSource> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QGeoSatelliteInfoSource::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QGeoSatelliteInfoSource_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QGeoSatelliteInfoSource_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QGeoSatelliteInfoSource_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QGeoSatelliteInfoSource_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QGeoSatelliteInfoSource_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QGeoSatelliteInfoSource_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QGeoSatelliteInfoSource* QGeoSatelliteInfoSource_new(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQGeoSatelliteInfoSource(parent);
}

void QGeoSatelliteInfoSource_virtbase(QGeoSatelliteInfoSource* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QGeoSatelliteInfoSource_metaObject(const QGeoSatelliteInfoSource* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGeoSatelliteInfoSource_metacast(QGeoSatelliteInfoSource* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGeoSatelliteInfoSource_tr(const char* s) {
	QString _ret = QGeoSatelliteInfoSource::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QGeoSatelliteInfoSource* QGeoSatelliteInfoSource_createDefaultSource(QObject* parent) {
	return QGeoSatelliteInfoSource::createDefaultSource(parent);
}

QGeoSatelliteInfoSource* QGeoSatelliteInfoSource_createSource(struct miqt_string sourceName, QObject* parent) {
	QString sourceName_QString = QString::fromUtf8(sourceName.data, sourceName.len);
	return QGeoSatelliteInfoSource::createSource(sourceName_QString, parent);
}

QGeoSatelliteInfoSource* QGeoSatelliteInfoSource_createDefaultSource2(struct miqt_map /* of struct miqt_string to QVariant* */  parameters, QObject* parent) {
	QVariantMap parameters_QMap;
	struct miqt_string* parameters_karr = static_cast<struct miqt_string*>(parameters.keys);
	QVariant** parameters_varr = static_cast<QVariant**>(parameters.values);
	for(size_t i = 0; i < parameters.len; ++i) {
		QString parameters_karr_i_QString = QString::fromUtf8(parameters_karr[i].data, parameters_karr[i].len);
		parameters_QMap[parameters_karr_i_QString] = *(parameters_varr[i]);
	}
	return QGeoSatelliteInfoSource::createDefaultSource(parameters_QMap, parent);
}

QGeoSatelliteInfoSource* QGeoSatelliteInfoSource_createSource2(struct miqt_string sourceName, struct miqt_map /* of struct miqt_string to QVariant* */  parameters, QObject* parent) {
	QString sourceName_QString = QString::fromUtf8(sourceName.data, sourceName.len);
	QVariantMap parameters_QMap;
	struct miqt_string* parameters_karr = static_cast<struct miqt_string*>(parameters.keys);
	QVariant** parameters_varr = static_cast<QVariant**>(parameters.values);
	for(size_t i = 0; i < parameters.len; ++i) {
		QString parameters_karr_i_QString = QString::fromUtf8(parameters_karr[i].data, parameters_karr[i].len);
		parameters_QMap[parameters_karr_i_QString] = *(parameters_varr[i]);
	}
	return QGeoSatelliteInfoSource::createSource(sourceName_QString, parameters_QMap, parent);
}

struct miqt_array /* of struct miqt_string */  QGeoSatelliteInfoSource_availableSources() {
	QStringList _ret = QGeoSatelliteInfoSource::availableSources();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QGeoSatelliteInfoSource_sourceName(const QGeoSatelliteInfoSource* self) {
	QString _ret = self->sourceName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGeoSatelliteInfoSource_setUpdateInterval(QGeoSatelliteInfoSource* self, int msec) {
	self->setUpdateInterval(static_cast<int>(msec));
}

int QGeoSatelliteInfoSource_updateInterval(const QGeoSatelliteInfoSource* self) {
	return self->updateInterval();
}

int QGeoSatelliteInfoSource_minimumUpdateInterval(const QGeoSatelliteInfoSource* self) {
	return self->minimumUpdateInterval();
}

int QGeoSatelliteInfoSource_error(const QGeoSatelliteInfoSource* self) {
	QGeoSatelliteInfoSource::Error _ret = self->error();
	return static_cast<int>(_ret);
}

bool QGeoSatelliteInfoSource_setBackendProperty(QGeoSatelliteInfoSource* self, struct miqt_string name, QVariant* value) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->setBackendProperty(name_QString, *value);
}

QVariant* QGeoSatelliteInfoSource_backendProperty(const QGeoSatelliteInfoSource* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QVariant(self->backendProperty(name_QString));
}

void QGeoSatelliteInfoSource_startUpdates(QGeoSatelliteInfoSource* self) {
	self->startUpdates();
}

void QGeoSatelliteInfoSource_stopUpdates(QGeoSatelliteInfoSource* self) {
	self->stopUpdates();
}

void QGeoSatelliteInfoSource_requestUpdate(QGeoSatelliteInfoSource* self, int timeout) {
	self->requestUpdate(static_cast<int>(timeout));
}

void QGeoSatelliteInfoSource_satellitesInViewUpdated(QGeoSatelliteInfoSource* self, struct miqt_array /* of QGeoSatelliteInfo* */  satellites) {
	QList<QGeoSatelliteInfo> satellites_QList;
	satellites_QList.reserve(satellites.len);
	QGeoSatelliteInfo** satellites_arr = static_cast<QGeoSatelliteInfo**>(satellites.data);
	for(size_t i = 0; i < satellites.len; ++i) {
		satellites_QList.push_back(*(satellites_arr[i]));
	}
	self->satellitesInViewUpdated(satellites_QList);
}

void* QGeoSatelliteInfoSource_connect_satellitesInViewUpdated(QGeoSatelliteInfoSource* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QGeoSatelliteInfoSource>>(slot);
	return new QMetaObject::Connection(QGeoSatelliteInfoSource::connect(self, static_cast<void (QGeoSatelliteInfoSource::*)(const QList<QGeoSatelliteInfo>&)>(&QGeoSatelliteInfoSource::satellitesInViewUpdated), self, [slot_handle](const QList<QGeoSatelliteInfo>& satellites) {
		intptr_t slot = slot_handle->value();
		const QList<QGeoSatelliteInfo>& satellites_ret = satellites;
		// Convert QList<> from C++ memory to manually-managed C memory
		QGeoSatelliteInfo** satellites_arr = static_cast<QGeoSatelliteInfo**>(malloc(sizeof(QGeoSatelliteInfo*) * satellites_ret.length()));
		for (size_t i = 0, e = satellites_ret.length(); i < e; ++i) {
			satellites_arr[i] = new QGeoSatelliteInfo(satellites_ret[i]);
		}
		struct miqt_array satellites_out;
		satellites_out.len = satellites_ret.length();
		satellites_out.data = static_cast<void*>(satellites_arr);
		struct miqt_array /* of QGeoSatelliteInfo* */  sigval1 = satellites_out;
		miqt_exec_callback_QGeoSatelliteInfoSource_satellitesInViewUpdated(slot, sigval1);
	}));
}

void QGeoSatelliteInfoSource_satellitesInUseUpdated(QGeoSatelliteInfoSource* self, struct miqt_array /* of QGeoSatelliteInfo* */  satellites) {
	QList<QGeoSatelliteInfo> satellites_QList;
	satellites_QList.reserve(satellites.len);
	QGeoSatelliteInfo** satellites_arr = static_cast<QGeoSatelliteInfo**>(satellites.data);
	for(size_t i = 0; i < satellites.len; ++i) {
		satellites_QList.push_back(*(satellites_arr[i]));
	}
	self->satellitesInUseUpdated(satellites_QList);
}

void* QGeoSatelliteInfoSource_connect_satellitesInUseUpdated(QGeoSatelliteInfoSource* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QGeoSatelliteInfoSource>>(slot);
	return new QMetaObject::Connection(QGeoSatelliteInfoSource::connect(self, static_cast<void (QGeoSatelliteInfoSource::*)(const QList<QGeoSatelliteInfo>&)>(&QGeoSatelliteInfoSource::satellitesInUseUpdated), self, [slot_handle](const QList<QGeoSatelliteInfo>& satellites) {
		intptr_t slot = slot_handle->value();
		const QList<QGeoSatelliteInfo>& satellites_ret = satellites;
		// Convert QList<> from C++ memory to manually-managed C memory
		QGeoSatelliteInfo** satellites_arr = static_cast<QGeoSatelliteInfo**>(malloc(sizeof(QGeoSatelliteInfo*) * satellites_ret.length()));
		for (size_t i = 0, e = satellites_ret.length(); i < e; ++i) {
			satellites_arr[i] = new QGeoSatelliteInfo(satellites_ret[i]);
		}
		struct miqt_array satellites_out;
		satellites_out.len = satellites_ret.length();
		satellites_out.data = static_cast<void*>(satellites_arr);
		struct miqt_array /* of QGeoSatelliteInfo* */  sigval1 = satellites_out;
		miqt_exec_callback_QGeoSatelliteInfoSource_satellitesInUseUpdated(slot, sigval1);
	}));
}

void QGeoSatelliteInfoSource_errorOccurred(QGeoSatelliteInfoSource* self, int param1) {
	self->errorOccurred(static_cast<QGeoSatelliteInfoSource::Error>(param1));
}

void* QGeoSatelliteInfoSource_connect_errorOccurred(QGeoSatelliteInfoSource* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QGeoSatelliteInfoSource>>(slot);
	return new QMetaObject::Connection(QGeoSatelliteInfoSource::connect(self, static_cast<void (QGeoSatelliteInfoSource::*)(QGeoSatelliteInfoSource::Error)>(&QGeoSatelliteInfoSource::errorOccurred), self, [slot_handle](QGeoSatelliteInfoSource::Error param1) {
		intptr_t slot = slot_handle->value();
		QGeoSatelliteInfoSource::Error param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		miqt_exec_callback_QGeoSatelliteInfoSource_errorOccurred(slot, sigval1);
	}));
}

struct miqt_string QGeoSatelliteInfoSource_tr2(const char* s, const char* c) {
	QString _ret = QGeoSatelliteInfoSource::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGeoSatelliteInfoSource_tr3(const char* s, const char* c, int n) {
	QString _ret = QGeoSatelliteInfoSource::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QGeoSatelliteInfoSource_override_virtual_setUpdateInterval(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoSatelliteInfoSource> slot_handle(slot);
	MiqtVirtualQGeoSatelliteInfoSource* self_cast = dynamic_cast<MiqtVirtualQGeoSatelliteInfoSource*>( (QGeoSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setUpdateInterval = std::move(slot_handle);
	return true;
}

void QGeoSatelliteInfoSource_virtualbase_setUpdateInterval(void* self, int msec) {
	static_cast<MiqtVirtualQGeoSatelliteInfoSource*>(self)->QGeoSatelliteInfoSource::setUpdateInterval(static_cast<int>(msec));
}

bool QGeoSatelliteInfoSource_override_virtual_minimumUpdateInterval(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoSatelliteInfoSource> slot_handle(slot);
	MiqtVirtualQGeoSatelliteInfoSource* self_cast = dynamic_cast<MiqtVirtualQGeoSatelliteInfoSource*>( (QGeoSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumUpdateInterval = std::move(slot_handle);
	return true;
}

bool QGeoSatelliteInfoSource_override_virtual_error(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoSatelliteInfoSource> slot_handle(slot);
	MiqtVirtualQGeoSatelliteInfoSource* self_cast = dynamic_cast<MiqtVirtualQGeoSatelliteInfoSource*>( (QGeoSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__error = std::move(slot_handle);
	return true;
}

bool QGeoSatelliteInfoSource_override_virtual_setBackendProperty(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoSatelliteInfoSource> slot_handle(slot);
	MiqtVirtualQGeoSatelliteInfoSource* self_cast = dynamic_cast<MiqtVirtualQGeoSatelliteInfoSource*>( (QGeoSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setBackendProperty = std::move(slot_handle);
	return true;
}

bool QGeoSatelliteInfoSource_virtualbase_setBackendProperty(void* self, struct miqt_string name, QVariant* value) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return static_cast<MiqtVirtualQGeoSatelliteInfoSource*>(self)->QGeoSatelliteInfoSource::setBackendProperty(name_QString, *value);
}

bool QGeoSatelliteInfoSource_override_virtual_backendProperty(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoSatelliteInfoSource> slot_handle(slot);
	MiqtVirtualQGeoSatelliteInfoSource* self_cast = dynamic_cast<MiqtVirtualQGeoSatelliteInfoSource*>( (QGeoSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__backendProperty = std::move(slot_handle);
	self_cast->owns_return__backendProperty = false;
	return true;
}

bool QGeoSatelliteInfoSource_override_virtual_owned_backendProperty(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoSatelliteInfoSource> slot_handle(slot);
	MiqtVirtualQGeoSatelliteInfoSource* self_cast = dynamic_cast<MiqtVirtualQGeoSatelliteInfoSource*>( (QGeoSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__backendProperty = std::move(slot_handle);
	self_cast->owns_return__backendProperty = true;
	return true;
}

QVariant* QGeoSatelliteInfoSource_virtualbase_backendProperty(const void* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QVariant(static_cast<const MiqtVirtualQGeoSatelliteInfoSource*>(self)->QGeoSatelliteInfoSource::backendProperty(name_QString));
}

bool QGeoSatelliteInfoSource_override_virtual_startUpdates(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoSatelliteInfoSource> slot_handle(slot);
	MiqtVirtualQGeoSatelliteInfoSource* self_cast = dynamic_cast<MiqtVirtualQGeoSatelliteInfoSource*>( (QGeoSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__startUpdates = std::move(slot_handle);
	return true;
}

bool QGeoSatelliteInfoSource_override_virtual_stopUpdates(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoSatelliteInfoSource> slot_handle(slot);
	MiqtVirtualQGeoSatelliteInfoSource* self_cast = dynamic_cast<MiqtVirtualQGeoSatelliteInfoSource*>( (QGeoSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__stopUpdates = std::move(slot_handle);
	return true;
}

bool QGeoSatelliteInfoSource_override_virtual_requestUpdate(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoSatelliteInfoSource> slot_handle(slot);
	MiqtVirtualQGeoSatelliteInfoSource* self_cast = dynamic_cast<MiqtVirtualQGeoSatelliteInfoSource*>( (QGeoSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__requestUpdate = std::move(slot_handle);
	return true;
}

bool QGeoSatelliteInfoSource_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoSatelliteInfoSource> slot_handle(slot);
	MiqtVirtualQGeoSatelliteInfoSource* self_cast = dynamic_cast<MiqtVirtualQGeoSatelliteInfoSource*>( (QGeoSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QGeoSatelliteInfoSource_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQGeoSatelliteInfoSource*>(self)->QGeoSatelliteInfoSource::event(event);
}

bool QGeoSatelliteInfoSource_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoSatelliteInfoSource> slot_handle(slot);
	MiqtVirtualQGeoSatelliteInfoSource* self_cast = dynamic_cast<MiqtVirtualQGeoSatelliteInfoSource*>( (QGeoSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QGeoSatelliteInfoSource_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQGeoSatelliteInfoSource*>(self)->QGeoSatelliteInfoSource::eventFilter(watched, event);
}

bool QGeoSatelliteInfoSource_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoSatelliteInfoSource> slot_handle(slot);
	MiqtVirtualQGeoSatelliteInfoSource* self_cast = dynamic_cast<MiqtVirtualQGeoSatelliteInfoSource*>( (QGeoSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QGeoSatelliteInfoSource_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQGeoSatelliteInfoSource*>(self)->QGeoSatelliteInfoSource::timerEvent(event);
}

bool QGeoSatelliteInfoSource_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoSatelliteInfoSource> slot_handle(slot);
	MiqtVirtualQGeoSatelliteInfoSource* self_cast = dynamic_cast<MiqtVirtualQGeoSatelliteInfoSource*>( (QGeoSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QGeoSatelliteInfoSource_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQGeoSatelliteInfoSource*>(self)->QGeoSatelliteInfoSource::childEvent(event);
}

bool QGeoSatelliteInfoSource_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoSatelliteInfoSource> slot_handle(slot);
	MiqtVirtualQGeoSatelliteInfoSource* self_cast = dynamic_cast<MiqtVirtualQGeoSatelliteInfoSource*>( (QGeoSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QGeoSatelliteInfoSource_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQGeoSatelliteInfoSource*>(self)->QGeoSatelliteInfoSource::customEvent(event);
}

bool QGeoSatelliteInfoSource_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoSatelliteInfoSource> slot_handle(slot);
	MiqtVirtualQGeoSatelliteInfoSource* self_cast = dynamic_cast<MiqtVirtualQGeoSatelliteInfoSource*>( (QGeoSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QGeoSatelliteInfoSource_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQGeoSatelliteInfoSource*>(self)->QGeoSatelliteInfoSource::connectNotify(*signal);
}

bool QGeoSatelliteInfoSource_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoSatelliteInfoSource> slot_handle(slot);
	MiqtVirtualQGeoSatelliteInfoSource* self_cast = dynamic_cast<MiqtVirtualQGeoSatelliteInfoSource*>( (QGeoSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QGeoSatelliteInfoSource_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQGeoSatelliteInfoSource*>(self)->QGeoSatelliteInfoSource::disconnectNotify(*signal);
}

QObject* QGeoSatelliteInfoSource_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGeoSatelliteInfoSource* self_cast = dynamic_cast<MiqtVirtualQGeoSatelliteInfoSource*>( (QGeoSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QGeoSatelliteInfoSource_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGeoSatelliteInfoSource* self_cast = dynamic_cast<MiqtVirtualQGeoSatelliteInfoSource*>( (QGeoSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QGeoSatelliteInfoSource_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQGeoSatelliteInfoSource* self_cast = dynamic_cast<MiqtVirtualQGeoSatelliteInfoSource*>( (QGeoSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QGeoSatelliteInfoSource_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQGeoSatelliteInfoSource* self_cast = dynamic_cast<MiqtVirtualQGeoSatelliteInfoSource*>( (QGeoSatelliteInfoSource*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QGeoSatelliteInfoSource_delete(QGeoSatelliteInfoSource* self) {
	delete self;
}

