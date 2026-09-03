#include <memory>
#include <utility>
#include <QDesignerOptionsPageInterface>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <abstractoptionspage.h>
#include "gen_abstractoptionspage.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QDesignerOptionsPageInterface(intptr_t);
struct miqt_string miqt_exec_callback_QDesignerOptionsPageInterface_name(const QDesignerOptionsPageInterface*, intptr_t);
QWidget* miqt_exec_callback_QDesignerOptionsPageInterface_createPage(QDesignerOptionsPageInterface*, intptr_t, QWidget*);
void miqt_exec_callback_QDesignerOptionsPageInterface_apply(QDesignerOptionsPageInterface*, intptr_t);
void miqt_exec_callback_QDesignerOptionsPageInterface_finish(QDesignerOptionsPageInterface*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQDesignerOptionsPageInterface final : public QDesignerOptionsPageInterface {
public:

	MiqtVirtualQDesignerOptionsPageInterface(): QDesignerOptionsPageInterface() {}

	virtual ~MiqtVirtualQDesignerOptionsPageInterface() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerOptionsPageInterface> handle__name;

	// Subclass to allow providing a Go implementation
	virtual QString name() const override {
		if (!handle__name) {
			return QString(); // Pure virtual, there is no base we can call
		}

		struct miqt_string callback_return_value = miqt_exec_callback_QDesignerOptionsPageInterface_name(this, handle__name.value());
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		free(callback_return_value.data);
		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerOptionsPageInterface> handle__createPage;

	// Subclass to allow providing a Go implementation
	virtual QWidget* createPage(QWidget* parent) override {
		if (!handle__createPage) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		QWidget* sigval1 = parent;
		QWidget* callback_return_value = miqt_exec_callback_QDesignerOptionsPageInterface_createPage(this, handle__createPage.value(), sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerOptionsPageInterface> handle__apply;

	// Subclass to allow providing a Go implementation
	virtual void apply() override {
		if (!handle__apply) {
			return; // Pure virtual, there is no base we can call
		}

		miqt_exec_callback_QDesignerOptionsPageInterface_apply(this, handle__apply.value());

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerOptionsPageInterface> handle__finish;

	// Subclass to allow providing a Go implementation
	virtual void finish() override {
		if (!handle__finish) {
			return; // Pure virtual, there is no base we can call
		}

		miqt_exec_callback_QDesignerOptionsPageInterface_finish(this, handle__finish.value());

	}

};

QDesignerOptionsPageInterface* QDesignerOptionsPageInterface_new() {
	return new (std::nothrow) MiqtVirtualQDesignerOptionsPageInterface();
}

struct miqt_string QDesignerOptionsPageInterface_name(const QDesignerOptionsPageInterface* self) {
	QString _ret = self->name();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QWidget* QDesignerOptionsPageInterface_createPage(QDesignerOptionsPageInterface* self, QWidget* parent) {
	return self->createPage(parent);
}

void QDesignerOptionsPageInterface_apply(QDesignerOptionsPageInterface* self) {
	self->apply();
}

void QDesignerOptionsPageInterface_finish(QDesignerOptionsPageInterface* self) {
	self->finish();
}

bool QDesignerOptionsPageInterface_override_virtual_name(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerOptionsPageInterface> slot_handle(slot);
	MiqtVirtualQDesignerOptionsPageInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerOptionsPageInterface*>( (QDesignerOptionsPageInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__name = std::move(slot_handle);
	return true;
}

bool QDesignerOptionsPageInterface_override_virtual_createPage(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerOptionsPageInterface> slot_handle(slot);
	MiqtVirtualQDesignerOptionsPageInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerOptionsPageInterface*>( (QDesignerOptionsPageInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__createPage = std::move(slot_handle);
	return true;
}

bool QDesignerOptionsPageInterface_override_virtual_apply(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerOptionsPageInterface> slot_handle(slot);
	MiqtVirtualQDesignerOptionsPageInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerOptionsPageInterface*>( (QDesignerOptionsPageInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__apply = std::move(slot_handle);
	return true;
}

bool QDesignerOptionsPageInterface_override_virtual_finish(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerOptionsPageInterface> slot_handle(slot);
	MiqtVirtualQDesignerOptionsPageInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerOptionsPageInterface*>( (QDesignerOptionsPageInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__finish = std::move(slot_handle);
	return true;
}

void QDesignerOptionsPageInterface_delete(QDesignerOptionsPageInterface* self) {
	delete self;
}

