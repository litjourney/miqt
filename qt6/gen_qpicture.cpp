#include <memory>
#include <utility>
#include <QIODevice>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPainter>
#include <QPicture>
#include <QPoint>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qpicture.h>
#include "gen_qpicture.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QPicture(intptr_t);
int miqt_exec_callback_QPicture_devType(const QPicture*, intptr_t);
void miqt_exec_callback_QPicture_setData(QPicture*, intptr_t, const char*, unsigned int);
QPaintEngine* miqt_exec_callback_QPicture_paintEngine(const QPicture*, intptr_t);
int miqt_exec_callback_QPicture_metric(const QPicture*, intptr_t, int);
void miqt_exec_callback_QPicture_initPainter(const QPicture*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QPicture_redirected(const QPicture*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QPicture_sharedPainter(const QPicture*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQPicture final : public QPicture {
public:

	MiqtVirtualQPicture(): QPicture() {}
	MiqtVirtualQPicture(const QPicture& param1): QPicture(param1) {}
	MiqtVirtualQPicture(int formatVersion): QPicture(formatVersion) {}

	virtual ~MiqtVirtualQPicture() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPicture> handle__devType;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (!handle__devType) {
			return QPicture::devType();
		}

		int callback_return_value = miqt_exec_callback_QPicture_devType(this, handle__devType.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QPicture_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPicture> handle__setData;

	// Subclass to allow providing a Go implementation
	virtual void setData(const char* data, uint size) override {
		if (!handle__setData) {
			QPicture::setData(data, size);
			return;
		}

		const char* sigval1 = (const char*) data;
		uint size_ret = size;
		unsigned int sigval2 = static_cast<unsigned int>(size_ret);
		miqt_exec_callback_QPicture_setData(this, handle__setData.value(), sigval1, sigval2);

	}

	friend void QPicture_virtualbase_setData(void* self, const char* data, unsigned int size);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPicture> handle__paintEngine;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (!handle__paintEngine) {
			return QPicture::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QPicture_paintEngine(this, handle__paintEngine.value());
		return callback_return_value;
	}

	friend QPaintEngine* QPicture_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPicture> handle__metric;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric m) const override {
		if (!handle__metric) {
			return QPicture::metric(m);
		}

		QPaintDevice::PaintDeviceMetric m_ret = m;
		int sigval1 = static_cast<int>(m_ret);
		int callback_return_value = miqt_exec_callback_QPicture_metric(this, handle__metric.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QPicture_virtualbase_metric(const void* self, int m);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPicture> handle__initPainter;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (!handle__initPainter) {
			QPicture::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QPicture_initPainter(this, handle__initPainter.value(), sigval1);

	}

	friend void QPicture_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPicture> handle__redirected;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (!handle__redirected) {
			return QPicture::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QPicture_redirected(this, handle__redirected.value(), sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QPicture_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPicture> handle__sharedPainter;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (!handle__sharedPainter) {
			return QPicture::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QPicture_sharedPainter(this, handle__sharedPainter.value());
		return callback_return_value;
	}

	friend QPainter* QPicture_virtualbase_sharedPainter(const void* self);

};

QPicture* QPicture_new() {
	return new (std::nothrow) MiqtVirtualQPicture();
}

QPicture* QPicture_new2(QPicture* param1) {
	return new (std::nothrow) MiqtVirtualQPicture(*param1);
}

QPicture* QPicture_new3(int formatVersion) {
	return new (std::nothrow) MiqtVirtualQPicture(static_cast<int>(formatVersion));
}

void QPicture_virtbase(QPicture* src, QPaintDevice** outptr_QPaintDevice) {
	*outptr_QPaintDevice = static_cast<QPaintDevice*>(src);
}

bool QPicture_isNull(const QPicture* self) {
	return self->isNull();
}

int QPicture_devType(const QPicture* self) {
	return self->devType();
}

unsigned int QPicture_size(const QPicture* self) {
	uint _ret = self->size();
	return static_cast<unsigned int>(_ret);
}

const char* QPicture_data(const QPicture* self) {
	return (const char*) self->data();
}

void QPicture_setData(QPicture* self, const char* data, unsigned int size) {
	self->setData(data, static_cast<uint>(size));
}

bool QPicture_play(QPicture* self, QPainter* p) {
	return self->play(p);
}

bool QPicture_load(QPicture* self, QIODevice* dev) {
	return self->load(dev);
}

bool QPicture_loadWithFileName(QPicture* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->load(fileName_QString);
}

bool QPicture_save(QPicture* self, QIODevice* dev) {
	return self->save(dev);
}

bool QPicture_saveWithFileName(QPicture* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return self->save(fileName_QString);
}

QRect* QPicture_boundingRect(const QPicture* self) {
	return new QRect(self->boundingRect());
}

void QPicture_setBoundingRect(QPicture* self, QRect* r) {
	self->setBoundingRect(*r);
}

void QPicture_operatorAssign(QPicture* self, QPicture* p) {
	self->operator=(*p);
}

void QPicture_swap(QPicture* self, QPicture* other) {
	self->swap(*other);
}

void QPicture_detach(QPicture* self) {
	self->detach();
}

bool QPicture_isDetached(const QPicture* self) {
	return self->isDetached();
}

QPaintEngine* QPicture_paintEngine(const QPicture* self) {
	return self->paintEngine();
}

bool QPicture_override_virtual_devType(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPicture> slot_handle(slot);
	MiqtVirtualQPicture* self_cast = dynamic_cast<MiqtVirtualQPicture*>( (QPicture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = std::move(slot_handle);
	return true;
}

int QPicture_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQPicture*>(self)->QPicture::devType();
}

bool QPicture_override_virtual_setData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPicture> slot_handle(slot);
	MiqtVirtualQPicture* self_cast = dynamic_cast<MiqtVirtualQPicture*>( (QPicture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setData = std::move(slot_handle);
	return true;
}

void QPicture_virtualbase_setData(void* self, const char* data, unsigned int size) {
	static_cast<MiqtVirtualQPicture*>(self)->QPicture::setData(data, static_cast<uint>(size));
}

bool QPicture_override_virtual_paintEngine(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPicture> slot_handle(slot);
	MiqtVirtualQPicture* self_cast = dynamic_cast<MiqtVirtualQPicture*>( (QPicture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = std::move(slot_handle);
	return true;
}

QPaintEngine* QPicture_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQPicture*>(self)->QPicture::paintEngine();
}

bool QPicture_override_virtual_metric(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPicture> slot_handle(slot);
	MiqtVirtualQPicture* self_cast = dynamic_cast<MiqtVirtualQPicture*>( (QPicture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = std::move(slot_handle);
	return true;
}

int QPicture_virtualbase_metric(const void* self, int m) {
	return static_cast<const MiqtVirtualQPicture*>(self)->QPicture::metric(static_cast<MiqtVirtualQPicture::PaintDeviceMetric>(m));
}

bool QPicture_override_virtual_initPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPicture> slot_handle(slot);
	MiqtVirtualQPicture* self_cast = dynamic_cast<MiqtVirtualQPicture*>( (QPicture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = std::move(slot_handle);
	return true;
}

void QPicture_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQPicture*>(self)->QPicture::initPainter(painter);
}

bool QPicture_override_virtual_redirected(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPicture> slot_handle(slot);
	MiqtVirtualQPicture* self_cast = dynamic_cast<MiqtVirtualQPicture*>( (QPicture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = std::move(slot_handle);
	return true;
}

QPaintDevice* QPicture_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQPicture*>(self)->QPicture::redirected(offset);
}

bool QPicture_override_virtual_sharedPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPicture> slot_handle(slot);
	MiqtVirtualQPicture* self_cast = dynamic_cast<MiqtVirtualQPicture*>( (QPicture*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = std::move(slot_handle);
	return true;
}

QPainter* QPicture_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQPicture*>(self)->QPicture::sharedPainter();
}

void QPicture_delete(QPicture* self) {
	delete self;
}

