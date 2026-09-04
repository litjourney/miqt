#include <memory>
#include <utility>
#include <QAbstractFileIconProvider>
#include <QFileInfo>
#include <QIcon>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qabstractfileiconprovider.h>
#include "gen_qabstractfileiconprovider.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QAbstractFileIconProvider(intptr_t);
QIcon* miqt_exec_callback_QAbstractFileIconProvider_icon(const QAbstractFileIconProvider*, intptr_t, int);
QIcon* miqt_exec_callback_QAbstractFileIconProvider_iconWithQFileInfo(const QAbstractFileIconProvider*, intptr_t, QFileInfo*);
struct miqt_string miqt_exec_callback_QAbstractFileIconProvider_type(const QAbstractFileIconProvider*, intptr_t, QFileInfo*);
void miqt_exec_callback_QAbstractFileIconProvider_setOptions(QAbstractFileIconProvider*, intptr_t, int);
int miqt_exec_callback_QAbstractFileIconProvider_options(const QAbstractFileIconProvider*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAbstractFileIconProvider final : public QAbstractFileIconProvider {
public:

	MiqtVirtualQAbstractFileIconProvider(): QAbstractFileIconProvider() {}

	virtual ~MiqtVirtualQAbstractFileIconProvider() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractFileIconProvider> handle__icon;
	bool owns_return__icon = false;

	// Subclass to allow providing a Go implementation
	virtual QIcon icon(QAbstractFileIconProvider::IconType param1) const override {
		if (!handle__icon) {
			return QAbstractFileIconProvider::icon(param1);
		}

		QAbstractFileIconProvider::IconType param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QIcon* callback_return_value = miqt_exec_callback_QAbstractFileIconProvider_icon(this, handle__icon.value(), sigval1);
		std::unique_ptr<QIcon> callback_return_value_owner;
		if (owns_return__icon) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QIcon* QAbstractFileIconProvider_virtualbase_icon(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractFileIconProvider> handle__iconWithQFileInfo;
	bool owns_return__iconWithQFileInfo = false;

	// Subclass to allow providing a Go implementation
	virtual QIcon icon(const QFileInfo& param1) const override {
		if (!handle__iconWithQFileInfo) {
			return QAbstractFileIconProvider::icon(param1);
		}

		const QFileInfo& param1_ret = param1;
		// Cast returned reference into pointer
		QFileInfo* sigval1 = const_cast<QFileInfo*>(&param1_ret);
		QIcon* callback_return_value = miqt_exec_callback_QAbstractFileIconProvider_iconWithQFileInfo(this, handle__iconWithQFileInfo.value(), sigval1);
		std::unique_ptr<QIcon> callback_return_value_owner;
		if (owns_return__iconWithQFileInfo) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QIcon* QAbstractFileIconProvider_virtualbase_iconWithQFileInfo(const void* self, QFileInfo* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractFileIconProvider> handle__type;

	// Subclass to allow providing a Go implementation
	virtual QString type(const QFileInfo& param1) const override {
		if (!handle__type) {
			return QAbstractFileIconProvider::type(param1);
		}

		const QFileInfo& param1_ret = param1;
		// Cast returned reference into pointer
		QFileInfo* sigval1 = const_cast<QFileInfo*>(&param1_ret);
		struct miqt_string callback_return_value = miqt_exec_callback_QAbstractFileIconProvider_type(this, handle__type.value(), sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		free(callback_return_value.data);
		return callback_return_value_QString;
	}

	friend struct miqt_string QAbstractFileIconProvider_virtualbase_type(const void* self, QFileInfo* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractFileIconProvider> handle__setOptions;

	// Subclass to allow providing a Go implementation
	virtual void setOptions(QAbstractFileIconProvider::Options options) override {
		if (!handle__setOptions) {
			QAbstractFileIconProvider::setOptions(options);
			return;
		}

		QAbstractFileIconProvider::Options options_ret = options;
		int sigval1 = static_cast<int>(options_ret);
		miqt_exec_callback_QAbstractFileIconProvider_setOptions(this, handle__setOptions.value(), sigval1);

	}

	friend void QAbstractFileIconProvider_virtualbase_setOptions(void* self, int options);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractFileIconProvider> handle__options;

	// Subclass to allow providing a Go implementation
	virtual QAbstractFileIconProvider::Options options() const override {
		if (!handle__options) {
			return QAbstractFileIconProvider::options();
		}

		int callback_return_value = miqt_exec_callback_QAbstractFileIconProvider_options(this, handle__options.value());
		return static_cast<QAbstractFileIconProvider::Options>(callback_return_value);
	}

	friend int QAbstractFileIconProvider_virtualbase_options(const void* self);

};

QAbstractFileIconProvider* QAbstractFileIconProvider_new() {
	return new (std::nothrow) MiqtVirtualQAbstractFileIconProvider();
}

QIcon* QAbstractFileIconProvider_icon(const QAbstractFileIconProvider* self, int param1) {
	return new QIcon(self->icon(static_cast<QAbstractFileIconProvider::IconType>(param1)));
}

QIcon* QAbstractFileIconProvider_iconWithQFileInfo(const QAbstractFileIconProvider* self, QFileInfo* param1) {
	return new QIcon(self->icon(*param1));
}

struct miqt_string QAbstractFileIconProvider_type(const QAbstractFileIconProvider* self, QFileInfo* param1) {
	QString _ret = self->type(*param1);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractFileIconProvider_setOptions(QAbstractFileIconProvider* self, int options) {
	self->setOptions(static_cast<QAbstractFileIconProvider::Options>(options));
}

int QAbstractFileIconProvider_options(const QAbstractFileIconProvider* self) {
	QAbstractFileIconProvider::Options _ret = self->options();
	return static_cast<int>(_ret);
}

bool QAbstractFileIconProvider_override_virtual_icon(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractFileIconProvider> slot_handle(slot);
	MiqtVirtualQAbstractFileIconProvider* self_cast = dynamic_cast<MiqtVirtualQAbstractFileIconProvider*>( (QAbstractFileIconProvider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__icon = std::move(slot_handle);
	self_cast->owns_return__icon = false;
	return true;
}

bool QAbstractFileIconProvider_override_virtual_owned_icon(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractFileIconProvider> slot_handle(slot);
	MiqtVirtualQAbstractFileIconProvider* self_cast = dynamic_cast<MiqtVirtualQAbstractFileIconProvider*>( (QAbstractFileIconProvider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__icon = std::move(slot_handle);
	self_cast->owns_return__icon = true;
	return true;
}

QIcon* QAbstractFileIconProvider_virtualbase_icon(const void* self, int param1) {
	return new QIcon(static_cast<const MiqtVirtualQAbstractFileIconProvider*>(self)->QAbstractFileIconProvider::icon(static_cast<MiqtVirtualQAbstractFileIconProvider::IconType>(param1)));
}

bool QAbstractFileIconProvider_override_virtual_iconWithQFileInfo(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractFileIconProvider> slot_handle(slot);
	MiqtVirtualQAbstractFileIconProvider* self_cast = dynamic_cast<MiqtVirtualQAbstractFileIconProvider*>( (QAbstractFileIconProvider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__iconWithQFileInfo = std::move(slot_handle);
	self_cast->owns_return__iconWithQFileInfo = false;
	return true;
}

bool QAbstractFileIconProvider_override_virtual_owned_iconWithQFileInfo(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractFileIconProvider> slot_handle(slot);
	MiqtVirtualQAbstractFileIconProvider* self_cast = dynamic_cast<MiqtVirtualQAbstractFileIconProvider*>( (QAbstractFileIconProvider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__iconWithQFileInfo = std::move(slot_handle);
	self_cast->owns_return__iconWithQFileInfo = true;
	return true;
}

QIcon* QAbstractFileIconProvider_virtualbase_iconWithQFileInfo(const void* self, QFileInfo* param1) {
	return new QIcon(static_cast<const MiqtVirtualQAbstractFileIconProvider*>(self)->QAbstractFileIconProvider::icon(*param1));
}

bool QAbstractFileIconProvider_override_virtual_type(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractFileIconProvider> slot_handle(slot);
	MiqtVirtualQAbstractFileIconProvider* self_cast = dynamic_cast<MiqtVirtualQAbstractFileIconProvider*>( (QAbstractFileIconProvider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__type = std::move(slot_handle);
	return true;
}

struct miqt_string QAbstractFileIconProvider_virtualbase_type(const void* self, QFileInfo* param1) {
	QString _ret = static_cast<const MiqtVirtualQAbstractFileIconProvider*>(self)->QAbstractFileIconProvider::type(*param1);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractFileIconProvider_override_virtual_setOptions(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractFileIconProvider> slot_handle(slot);
	MiqtVirtualQAbstractFileIconProvider* self_cast = dynamic_cast<MiqtVirtualQAbstractFileIconProvider*>( (QAbstractFileIconProvider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setOptions = std::move(slot_handle);
	return true;
}

void QAbstractFileIconProvider_virtualbase_setOptions(void* self, int options) {
	static_cast<MiqtVirtualQAbstractFileIconProvider*>(self)->QAbstractFileIconProvider::setOptions(static_cast<MiqtVirtualQAbstractFileIconProvider::Options>(options));
}

bool QAbstractFileIconProvider_override_virtual_options(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractFileIconProvider> slot_handle(slot);
	MiqtVirtualQAbstractFileIconProvider* self_cast = dynamic_cast<MiqtVirtualQAbstractFileIconProvider*>( (QAbstractFileIconProvider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__options = std::move(slot_handle);
	return true;
}

int QAbstractFileIconProvider_virtualbase_options(const void* self) {
	MiqtVirtualQAbstractFileIconProvider::Options _ret = static_cast<const MiqtVirtualQAbstractFileIconProvider*>(self)->QAbstractFileIconProvider::options();
	return static_cast<int>(_ret);
}

void QAbstractFileIconProvider_delete(QAbstractFileIconProvider* self) {
	delete self;
}

