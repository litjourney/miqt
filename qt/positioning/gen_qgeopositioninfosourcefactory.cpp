#include <memory>
#include <utility>
#include <QGeoAreaMonitorSource>
#include <QGeoPositionInfoSource>
#include <QGeoPositionInfoSourceFactory>
#include <QGeoSatelliteInfoSource>
#include <QMap>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qgeopositioninfosourcefactory.h>
#include "gen_qgeopositioninfosourcefactory.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QGeoPositionInfoSourceFactory(intptr_t);
QGeoPositionInfoSource* miqt_exec_callback_QGeoPositionInfoSourceFactory_positionInfoSource(QGeoPositionInfoSourceFactory*, intptr_t, QObject*);
QGeoSatelliteInfoSource* miqt_exec_callback_QGeoPositionInfoSourceFactory_satelliteInfoSource(QGeoPositionInfoSourceFactory*, intptr_t, QObject*);
QGeoAreaMonitorSource* miqt_exec_callback_QGeoPositionInfoSourceFactory_areaMonitor(QGeoPositionInfoSourceFactory*, intptr_t, QObject*);
void miqt_exec_callback_handle_release_QGeoPositionInfoSourceFactoryV2(intptr_t);
QGeoPositionInfoSource* miqt_exec_callback_QGeoPositionInfoSourceFactoryV2_positionInfoSourceWithParameters(QGeoPositionInfoSourceFactoryV2*, intptr_t, QObject*, struct miqt_map /* of struct miqt_string to QVariant* */ );
QGeoSatelliteInfoSource* miqt_exec_callback_QGeoPositionInfoSourceFactoryV2_satelliteInfoSourceWithParameters(QGeoPositionInfoSourceFactoryV2*, intptr_t, QObject*, struct miqt_map /* of struct miqt_string to QVariant* */ );
QGeoAreaMonitorSource* miqt_exec_callback_QGeoPositionInfoSourceFactoryV2_areaMonitorWithParameters(QGeoPositionInfoSourceFactoryV2*, intptr_t, QObject*, struct miqt_map /* of struct miqt_string to QVariant* */ );
QGeoPositionInfoSource* miqt_exec_callback_QGeoPositionInfoSourceFactoryV2_positionInfoSource(QGeoPositionInfoSourceFactoryV2*, intptr_t, QObject*);
QGeoSatelliteInfoSource* miqt_exec_callback_QGeoPositionInfoSourceFactoryV2_satelliteInfoSource(QGeoPositionInfoSourceFactoryV2*, intptr_t, QObject*);
QGeoAreaMonitorSource* miqt_exec_callback_QGeoPositionInfoSourceFactoryV2_areaMonitor(QGeoPositionInfoSourceFactoryV2*, intptr_t, QObject*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGeoPositionInfoSourceFactory final : public QGeoPositionInfoSourceFactory {
public:

	MiqtVirtualQGeoPositionInfoSourceFactory(const QGeoPositionInfoSourceFactory& param1): QGeoPositionInfoSourceFactory(param1) {}

	virtual ~MiqtVirtualQGeoPositionInfoSourceFactory() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoPositionInfoSourceFactory> handle__positionInfoSource;

	// Subclass to allow providing a Go implementation
	virtual QGeoPositionInfoSource* positionInfoSource(QObject* parent) override {
		if (!handle__positionInfoSource) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		QObject* sigval1 = parent;
		QGeoPositionInfoSource* callback_return_value = miqt_exec_callback_QGeoPositionInfoSourceFactory_positionInfoSource(this, handle__positionInfoSource.value(), sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoPositionInfoSourceFactory> handle__satelliteInfoSource;

	// Subclass to allow providing a Go implementation
	virtual QGeoSatelliteInfoSource* satelliteInfoSource(QObject* parent) override {
		if (!handle__satelliteInfoSource) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		QObject* sigval1 = parent;
		QGeoSatelliteInfoSource* callback_return_value = miqt_exec_callback_QGeoPositionInfoSourceFactory_satelliteInfoSource(this, handle__satelliteInfoSource.value(), sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoPositionInfoSourceFactory> handle__areaMonitor;

	// Subclass to allow providing a Go implementation
	virtual QGeoAreaMonitorSource* areaMonitor(QObject* parent) override {
		if (!handle__areaMonitor) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		QObject* sigval1 = parent;
		QGeoAreaMonitorSource* callback_return_value = miqt_exec_callback_QGeoPositionInfoSourceFactory_areaMonitor(this, handle__areaMonitor.value(), sigval1);
		return callback_return_value;
	}

};

QGeoPositionInfoSourceFactory* QGeoPositionInfoSourceFactory_new(QGeoPositionInfoSourceFactory* param1) {
	return new (std::nothrow) MiqtVirtualQGeoPositionInfoSourceFactory(*param1);
}

QGeoPositionInfoSource* QGeoPositionInfoSourceFactory_positionInfoSource(QGeoPositionInfoSourceFactory* self, QObject* parent) {
	return self->positionInfoSource(parent);
}

QGeoSatelliteInfoSource* QGeoPositionInfoSourceFactory_satelliteInfoSource(QGeoPositionInfoSourceFactory* self, QObject* parent) {
	return self->satelliteInfoSource(parent);
}

QGeoAreaMonitorSource* QGeoPositionInfoSourceFactory_areaMonitor(QGeoPositionInfoSourceFactory* self, QObject* parent) {
	return self->areaMonitor(parent);
}

void QGeoPositionInfoSourceFactory_operatorAssign(QGeoPositionInfoSourceFactory* self, QGeoPositionInfoSourceFactory* param1) {
	self->operator=(*param1);
}

bool QGeoPositionInfoSourceFactory_override_virtual_positionInfoSource(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoPositionInfoSourceFactory> slot_handle(slot);
	MiqtVirtualQGeoPositionInfoSourceFactory* self_cast = dynamic_cast<MiqtVirtualQGeoPositionInfoSourceFactory*>( (QGeoPositionInfoSourceFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__positionInfoSource = std::move(slot_handle);
	return true;
}

bool QGeoPositionInfoSourceFactory_override_virtual_satelliteInfoSource(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoPositionInfoSourceFactory> slot_handle(slot);
	MiqtVirtualQGeoPositionInfoSourceFactory* self_cast = dynamic_cast<MiqtVirtualQGeoPositionInfoSourceFactory*>( (QGeoPositionInfoSourceFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__satelliteInfoSource = std::move(slot_handle);
	return true;
}

bool QGeoPositionInfoSourceFactory_override_virtual_areaMonitor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoPositionInfoSourceFactory> slot_handle(slot);
	MiqtVirtualQGeoPositionInfoSourceFactory* self_cast = dynamic_cast<MiqtVirtualQGeoPositionInfoSourceFactory*>( (QGeoPositionInfoSourceFactory*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__areaMonitor = std::move(slot_handle);
	return true;
}

void QGeoPositionInfoSourceFactory_delete(QGeoPositionInfoSourceFactory* self) {
	delete self;
}

class MiqtVirtualQGeoPositionInfoSourceFactoryV2 final : public QGeoPositionInfoSourceFactoryV2 {
public:

	MiqtVirtualQGeoPositionInfoSourceFactoryV2(const QGeoPositionInfoSourceFactoryV2& param1): QGeoPositionInfoSourceFactoryV2(param1) {}

	virtual ~MiqtVirtualQGeoPositionInfoSourceFactoryV2() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoPositionInfoSourceFactoryV2> handle__positionInfoSourceWithParameters;

	// Subclass to allow providing a Go implementation
	virtual QGeoPositionInfoSource* positionInfoSourceWithParameters(QObject* parent, const QVariantMap& parameters) override {
		if (!handle__positionInfoSourceWithParameters) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		QObject* sigval1 = parent;
		const QVariantMap& parameters_ret = parameters;
		// Convert QMap<> from C++ memory to manually-managed C memory
		struct miqt_string* parameters_karr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * parameters_ret.size()));
		QVariant** parameters_varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * parameters_ret.size()));
		int parameters_ctr = 0;
		for (auto parameters_itr = parameters_ret.keyValueBegin(); parameters_itr != parameters_ret.keyValueEnd(); ++parameters_itr) {
			QString parameters_mapkey_ret = parameters_itr->first;
			// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
			QByteArray parameters_mapkey_b = parameters_mapkey_ret.toUtf8();
			struct miqt_string parameters_mapkey_ms;
			parameters_mapkey_ms.len = parameters_mapkey_b.length();
			parameters_mapkey_ms.data = static_cast<char*>(malloc(parameters_mapkey_ms.len));
			memcpy(parameters_mapkey_ms.data, parameters_mapkey_b.data(), parameters_mapkey_ms.len);
			parameters_karr[parameters_ctr] = parameters_mapkey_ms;
			parameters_varr[parameters_ctr] = new QVariant(parameters_itr->second);
			parameters_ctr++;
		}
		struct miqt_map parameters_out;
		parameters_out.len = parameters_ret.size();
		parameters_out.keys = static_cast<void*>(parameters_karr);
		parameters_out.values = static_cast<void*>(parameters_varr);
		struct miqt_map /* of struct miqt_string to QVariant* */  sigval2 = parameters_out;
		QGeoPositionInfoSource* callback_return_value = miqt_exec_callback_QGeoPositionInfoSourceFactoryV2_positionInfoSourceWithParameters(this, handle__positionInfoSourceWithParameters.value(), sigval1, sigval2);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoPositionInfoSourceFactoryV2> handle__satelliteInfoSourceWithParameters;

	// Subclass to allow providing a Go implementation
	virtual QGeoSatelliteInfoSource* satelliteInfoSourceWithParameters(QObject* parent, const QVariantMap& parameters) override {
		if (!handle__satelliteInfoSourceWithParameters) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		QObject* sigval1 = parent;
		const QVariantMap& parameters_ret = parameters;
		// Convert QMap<> from C++ memory to manually-managed C memory
		struct miqt_string* parameters_karr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * parameters_ret.size()));
		QVariant** parameters_varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * parameters_ret.size()));
		int parameters_ctr = 0;
		for (auto parameters_itr = parameters_ret.keyValueBegin(); parameters_itr != parameters_ret.keyValueEnd(); ++parameters_itr) {
			QString parameters_mapkey_ret = parameters_itr->first;
			// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
			QByteArray parameters_mapkey_b = parameters_mapkey_ret.toUtf8();
			struct miqt_string parameters_mapkey_ms;
			parameters_mapkey_ms.len = parameters_mapkey_b.length();
			parameters_mapkey_ms.data = static_cast<char*>(malloc(parameters_mapkey_ms.len));
			memcpy(parameters_mapkey_ms.data, parameters_mapkey_b.data(), parameters_mapkey_ms.len);
			parameters_karr[parameters_ctr] = parameters_mapkey_ms;
			parameters_varr[parameters_ctr] = new QVariant(parameters_itr->second);
			parameters_ctr++;
		}
		struct miqt_map parameters_out;
		parameters_out.len = parameters_ret.size();
		parameters_out.keys = static_cast<void*>(parameters_karr);
		parameters_out.values = static_cast<void*>(parameters_varr);
		struct miqt_map /* of struct miqt_string to QVariant* */  sigval2 = parameters_out;
		QGeoSatelliteInfoSource* callback_return_value = miqt_exec_callback_QGeoPositionInfoSourceFactoryV2_satelliteInfoSourceWithParameters(this, handle__satelliteInfoSourceWithParameters.value(), sigval1, sigval2);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoPositionInfoSourceFactoryV2> handle__areaMonitorWithParameters;

	// Subclass to allow providing a Go implementation
	virtual QGeoAreaMonitorSource* areaMonitorWithParameters(QObject* parent, const QVariantMap& parameters) override {
		if (!handle__areaMonitorWithParameters) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		QObject* sigval1 = parent;
		const QVariantMap& parameters_ret = parameters;
		// Convert QMap<> from C++ memory to manually-managed C memory
		struct miqt_string* parameters_karr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * parameters_ret.size()));
		QVariant** parameters_varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * parameters_ret.size()));
		int parameters_ctr = 0;
		for (auto parameters_itr = parameters_ret.keyValueBegin(); parameters_itr != parameters_ret.keyValueEnd(); ++parameters_itr) {
			QString parameters_mapkey_ret = parameters_itr->first;
			// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
			QByteArray parameters_mapkey_b = parameters_mapkey_ret.toUtf8();
			struct miqt_string parameters_mapkey_ms;
			parameters_mapkey_ms.len = parameters_mapkey_b.length();
			parameters_mapkey_ms.data = static_cast<char*>(malloc(parameters_mapkey_ms.len));
			memcpy(parameters_mapkey_ms.data, parameters_mapkey_b.data(), parameters_mapkey_ms.len);
			parameters_karr[parameters_ctr] = parameters_mapkey_ms;
			parameters_varr[parameters_ctr] = new QVariant(parameters_itr->second);
			parameters_ctr++;
		}
		struct miqt_map parameters_out;
		parameters_out.len = parameters_ret.size();
		parameters_out.keys = static_cast<void*>(parameters_karr);
		parameters_out.values = static_cast<void*>(parameters_varr);
		struct miqt_map /* of struct miqt_string to QVariant* */  sigval2 = parameters_out;
		QGeoAreaMonitorSource* callback_return_value = miqt_exec_callback_QGeoPositionInfoSourceFactoryV2_areaMonitorWithParameters(this, handle__areaMonitorWithParameters.value(), sigval1, sigval2);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoPositionInfoSourceFactoryV2> handle__positionInfoSource;

	// Subclass to allow providing a Go implementation
	virtual QGeoPositionInfoSource* positionInfoSource(QObject* parent) override {
		if (!handle__positionInfoSource) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		QObject* sigval1 = parent;
		QGeoPositionInfoSource* callback_return_value = miqt_exec_callback_QGeoPositionInfoSourceFactoryV2_positionInfoSource(this, handle__positionInfoSource.value(), sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoPositionInfoSourceFactoryV2> handle__satelliteInfoSource;

	// Subclass to allow providing a Go implementation
	virtual QGeoSatelliteInfoSource* satelliteInfoSource(QObject* parent) override {
		if (!handle__satelliteInfoSource) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		QObject* sigval1 = parent;
		QGeoSatelliteInfoSource* callback_return_value = miqt_exec_callback_QGeoPositionInfoSourceFactoryV2_satelliteInfoSource(this, handle__satelliteInfoSource.value(), sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoPositionInfoSourceFactoryV2> handle__areaMonitor;

	// Subclass to allow providing a Go implementation
	virtual QGeoAreaMonitorSource* areaMonitor(QObject* parent) override {
		if (!handle__areaMonitor) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		QObject* sigval1 = parent;
		QGeoAreaMonitorSource* callback_return_value = miqt_exec_callback_QGeoPositionInfoSourceFactoryV2_areaMonitor(this, handle__areaMonitor.value(), sigval1);
		return callback_return_value;
	}

};

QGeoPositionInfoSourceFactoryV2* QGeoPositionInfoSourceFactoryV2_new(QGeoPositionInfoSourceFactoryV2* param1) {
	return new (std::nothrow) MiqtVirtualQGeoPositionInfoSourceFactoryV2(*param1);
}

void QGeoPositionInfoSourceFactoryV2_virtbase(QGeoPositionInfoSourceFactoryV2* src, QGeoPositionInfoSourceFactory** outptr_QGeoPositionInfoSourceFactory) {
	*outptr_QGeoPositionInfoSourceFactory = static_cast<QGeoPositionInfoSourceFactory*>(src);
}

QGeoPositionInfoSource* QGeoPositionInfoSourceFactoryV2_positionInfoSourceWithParameters(QGeoPositionInfoSourceFactoryV2* self, QObject* parent, struct miqt_map /* of struct miqt_string to QVariant* */  parameters) {
	QVariantMap parameters_QMap;
	struct miqt_string* parameters_karr = static_cast<struct miqt_string*>(parameters.keys);
	QVariant** parameters_varr = static_cast<QVariant**>(parameters.values);
	for(size_t i = 0; i < parameters.len; ++i) {
		QString parameters_karr_i_QString = QString::fromUtf8(parameters_karr[i].data, parameters_karr[i].len);
		parameters_QMap[parameters_karr_i_QString] = *(parameters_varr[i]);
	}
	return self->positionInfoSourceWithParameters(parent, parameters_QMap);
}

QGeoSatelliteInfoSource* QGeoPositionInfoSourceFactoryV2_satelliteInfoSourceWithParameters(QGeoPositionInfoSourceFactoryV2* self, QObject* parent, struct miqt_map /* of struct miqt_string to QVariant* */  parameters) {
	QVariantMap parameters_QMap;
	struct miqt_string* parameters_karr = static_cast<struct miqt_string*>(parameters.keys);
	QVariant** parameters_varr = static_cast<QVariant**>(parameters.values);
	for(size_t i = 0; i < parameters.len; ++i) {
		QString parameters_karr_i_QString = QString::fromUtf8(parameters_karr[i].data, parameters_karr[i].len);
		parameters_QMap[parameters_karr_i_QString] = *(parameters_varr[i]);
	}
	return self->satelliteInfoSourceWithParameters(parent, parameters_QMap);
}

QGeoAreaMonitorSource* QGeoPositionInfoSourceFactoryV2_areaMonitorWithParameters(QGeoPositionInfoSourceFactoryV2* self, QObject* parent, struct miqt_map /* of struct miqt_string to QVariant* */  parameters) {
	QVariantMap parameters_QMap;
	struct miqt_string* parameters_karr = static_cast<struct miqt_string*>(parameters.keys);
	QVariant** parameters_varr = static_cast<QVariant**>(parameters.values);
	for(size_t i = 0; i < parameters.len; ++i) {
		QString parameters_karr_i_QString = QString::fromUtf8(parameters_karr[i].data, parameters_karr[i].len);
		parameters_QMap[parameters_karr_i_QString] = *(parameters_varr[i]);
	}
	return self->areaMonitorWithParameters(parent, parameters_QMap);
}

void QGeoPositionInfoSourceFactoryV2_operatorAssign(QGeoPositionInfoSourceFactoryV2* self, QGeoPositionInfoSourceFactoryV2* param1) {
	self->operator=(*param1);
}

bool QGeoPositionInfoSourceFactoryV2_override_virtual_positionInfoSourceWithParameters(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoPositionInfoSourceFactoryV2> slot_handle(slot);
	MiqtVirtualQGeoPositionInfoSourceFactoryV2* self_cast = dynamic_cast<MiqtVirtualQGeoPositionInfoSourceFactoryV2*>( (QGeoPositionInfoSourceFactoryV2*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__positionInfoSourceWithParameters = std::move(slot_handle);
	return true;
}

bool QGeoPositionInfoSourceFactoryV2_override_virtual_satelliteInfoSourceWithParameters(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoPositionInfoSourceFactoryV2> slot_handle(slot);
	MiqtVirtualQGeoPositionInfoSourceFactoryV2* self_cast = dynamic_cast<MiqtVirtualQGeoPositionInfoSourceFactoryV2*>( (QGeoPositionInfoSourceFactoryV2*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__satelliteInfoSourceWithParameters = std::move(slot_handle);
	return true;
}

bool QGeoPositionInfoSourceFactoryV2_override_virtual_areaMonitorWithParameters(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoPositionInfoSourceFactoryV2> slot_handle(slot);
	MiqtVirtualQGeoPositionInfoSourceFactoryV2* self_cast = dynamic_cast<MiqtVirtualQGeoPositionInfoSourceFactoryV2*>( (QGeoPositionInfoSourceFactoryV2*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__areaMonitorWithParameters = std::move(slot_handle);
	return true;
}

bool QGeoPositionInfoSourceFactoryV2_override_virtual_positionInfoSource(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoPositionInfoSourceFactoryV2> slot_handle(slot);
	MiqtVirtualQGeoPositionInfoSourceFactoryV2* self_cast = dynamic_cast<MiqtVirtualQGeoPositionInfoSourceFactoryV2*>( (QGeoPositionInfoSourceFactoryV2*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__positionInfoSource = std::move(slot_handle);
	return true;
}

bool QGeoPositionInfoSourceFactoryV2_override_virtual_satelliteInfoSource(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoPositionInfoSourceFactoryV2> slot_handle(slot);
	MiqtVirtualQGeoPositionInfoSourceFactoryV2* self_cast = dynamic_cast<MiqtVirtualQGeoPositionInfoSourceFactoryV2*>( (QGeoPositionInfoSourceFactoryV2*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__satelliteInfoSource = std::move(slot_handle);
	return true;
}

bool QGeoPositionInfoSourceFactoryV2_override_virtual_areaMonitor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGeoPositionInfoSourceFactoryV2> slot_handle(slot);
	MiqtVirtualQGeoPositionInfoSourceFactoryV2* self_cast = dynamic_cast<MiqtVirtualQGeoPositionInfoSourceFactoryV2*>( (QGeoPositionInfoSourceFactoryV2*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__areaMonitor = std::move(slot_handle);
	return true;
}

void QGeoPositionInfoSourceFactoryV2_delete(QGeoPositionInfoSourceFactoryV2* self) {
	delete self;
}

