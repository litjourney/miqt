#include <memory>
#include <utility>
#include <QChildEvent>
#include <QEvent>
#include <QJSEngine>
#include <QJSValue>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qjsengine.h>
#include "gen_qjsengine.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QJSEngine(intptr_t);
void miqt_exec_callback_QJSEngine_uiLanguageChanged(intptr_t);
bool miqt_exec_callback_QJSEngine_event(QJSEngine*, intptr_t, QEvent*);
bool miqt_exec_callback_QJSEngine_eventFilter(QJSEngine*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QJSEngine_timerEvent(QJSEngine*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QJSEngine_childEvent(QJSEngine*, intptr_t, QChildEvent*);
void miqt_exec_callback_QJSEngine_customEvent(QJSEngine*, intptr_t, QEvent*);
void miqt_exec_callback_QJSEngine_connectNotify(QJSEngine*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QJSEngine_disconnectNotify(QJSEngine*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQJSEngine final : public QJSEngine {
public:

	MiqtVirtualQJSEngine(): QJSEngine() {}
	MiqtVirtualQJSEngine(QObject* parent): QJSEngine(parent) {}

	virtual ~MiqtVirtualQJSEngine() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QJSEngine> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QJSEngine::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QJSEngine_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QJSEngine_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QJSEngine> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QJSEngine::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QJSEngine_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QJSEngine_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QJSEngine> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QJSEngine::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QJSEngine_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QJSEngine_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QJSEngine> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QJSEngine::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QJSEngine_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QJSEngine_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QJSEngine> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QJSEngine::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QJSEngine_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QJSEngine_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QJSEngine> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QJSEngine::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QJSEngine_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QJSEngine_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QJSEngine> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QJSEngine::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QJSEngine_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QJSEngine_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QJSEngine_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QJSEngine_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QJSEngine_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QJSEngine_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QJSEngine* QJSEngine_new() {
	return new (std::nothrow) MiqtVirtualQJSEngine();
}

QJSEngine* QJSEngine_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQJSEngine(parent);
}

void QJSEngine_virtbase(QJSEngine* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QJSEngine_metaObject(const QJSEngine* self) {
	return (QMetaObject*) self->metaObject();
}

void* QJSEngine_metacast(QJSEngine* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QJSEngine_tr(const char* s) {
	QString _ret = QJSEngine::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QJSValue* QJSEngine_globalObject(const QJSEngine* self) {
	return new QJSValue(self->globalObject());
}

QJSValue* QJSEngine_evaluate(QJSEngine* self, struct miqt_string program) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	return new QJSValue(self->evaluate(program_QString));
}

QJSValue* QJSEngine_importModule(QJSEngine* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new QJSValue(self->importModule(fileName_QString));
}

bool QJSEngine_registerModule(QJSEngine* self, struct miqt_string moduleName, QJSValue* value) {
	QString moduleName_QString = QString::fromUtf8(moduleName.data, moduleName.len);
	return self->registerModule(moduleName_QString, *value);
}

QJSValue* QJSEngine_newObject(QJSEngine* self) {
	return new QJSValue(self->newObject());
}

QJSValue* QJSEngine_newSymbol(QJSEngine* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new QJSValue(self->newSymbol(name_QString));
}

QJSValue* QJSEngine_newArray(QJSEngine* self) {
	return new QJSValue(self->newArray());
}

QJSValue* QJSEngine_newQObject(QJSEngine* self, QObject* object) {
	return new QJSValue(self->newQObject(object));
}

QJSValue* QJSEngine_newQMetaObject(QJSEngine* self, QMetaObject* metaObject) {
	return new QJSValue(self->newQMetaObject(metaObject));
}

QJSValue* QJSEngine_newErrorObject(QJSEngine* self, int errorType) {
	return new QJSValue(self->newErrorObject(static_cast<QJSValue::ErrorType>(errorType)));
}

void QJSEngine_collectGarbage(QJSEngine* self) {
	self->collectGarbage();
}

void QJSEngine_setObjectOwnership(QObject* param1, int param2) {
	QJSEngine::setObjectOwnership(param1, static_cast<QJSEngine::ObjectOwnership>(param2));
}

int QJSEngine_objectOwnership(QObject* param1) {
	QJSEngine::ObjectOwnership _ret = QJSEngine::objectOwnership(param1);
	return static_cast<int>(_ret);
}

void QJSEngine_installExtensions(QJSEngine* self, int extensions) {
	self->installExtensions(static_cast<QJSEngine::Extensions>(extensions));
}

void QJSEngine_setInterrupted(QJSEngine* self, bool interrupted) {
	self->setInterrupted(interrupted);
}

bool QJSEngine_isInterrupted(const QJSEngine* self) {
	return self->isInterrupted();
}

void QJSEngine_throwError(QJSEngine* self, struct miqt_string message) {
	QString message_QString = QString::fromUtf8(message.data, message.len);
	self->throwError(message_QString);
}

void QJSEngine_throwErrorWithErrorType(QJSEngine* self, int errorType) {
	self->throwError(static_cast<QJSValue::ErrorType>(errorType));
}

void QJSEngine_throwErrorWithError(QJSEngine* self, QJSValue* error) {
	self->throwError(*error);
}

bool QJSEngine_hasError(const QJSEngine* self) {
	return self->hasError();
}

QJSValue* QJSEngine_catchError(QJSEngine* self) {
	return new QJSValue(self->catchError());
}

struct miqt_string QJSEngine_uiLanguage(const QJSEngine* self) {
	QString _ret = self->uiLanguage();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QJSEngine_setUiLanguage(QJSEngine* self, struct miqt_string language) {
	QString language_QString = QString::fromUtf8(language.data, language.len);
	self->setUiLanguage(language_QString);
}

void QJSEngine_uiLanguageChanged(QJSEngine* self) {
	self->uiLanguageChanged();
}

void* QJSEngine_connect_uiLanguageChanged(QJSEngine* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QJSEngine>>(slot);
	return new QMetaObject::Connection(QJSEngine::connect(self, static_cast<void (QJSEngine::*)()>(&QJSEngine::uiLanguageChanged), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QJSEngine_uiLanguageChanged(slot);
	}));
}

struct miqt_string QJSEngine_tr2(const char* s, const char* c) {
	QString _ret = QJSEngine::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QJSEngine_tr3(const char* s, const char* c, int n) {
	QString _ret = QJSEngine::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QJSValue* QJSEngine_evaluate2(QJSEngine* self, struct miqt_string program, struct miqt_string fileName) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new QJSValue(self->evaluate(program_QString, fileName_QString));
}

QJSValue* QJSEngine_evaluate3(QJSEngine* self, struct miqt_string program, struct miqt_string fileName, int lineNumber) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return new QJSValue(self->evaluate(program_QString, fileName_QString, static_cast<int>(lineNumber)));
}

QJSValue* QJSEngine_evaluate4(QJSEngine* self, struct miqt_string program, struct miqt_string fileName, int lineNumber, struct miqt_array /* of struct miqt_string */  exceptionStackTrace) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QStringList exceptionStackTrace_QList;
	exceptionStackTrace_QList.reserve(exceptionStackTrace.len);
	struct miqt_string* exceptionStackTrace_arr = static_cast<struct miqt_string*>(exceptionStackTrace.data);
	for(size_t i = 0; i < exceptionStackTrace.len; ++i) {
		QString exceptionStackTrace_arr_i_QString = QString::fromUtf8(exceptionStackTrace_arr[i].data, exceptionStackTrace_arr[i].len);
		exceptionStackTrace_QList.push_back(exceptionStackTrace_arr_i_QString);
	}
	return new QJSValue(self->evaluate(program_QString, fileName_QString, static_cast<int>(lineNumber), &exceptionStackTrace_QList));
}

QJSValue* QJSEngine_newArrayWithLength(QJSEngine* self, unsigned int length) {
	return new QJSValue(self->newArray(static_cast<uint>(length)));
}

QJSValue* QJSEngine_newErrorObject2(QJSEngine* self, int errorType, struct miqt_string message) {
	QString message_QString = QString::fromUtf8(message.data, message.len);
	return new QJSValue(self->newErrorObject(static_cast<QJSValue::ErrorType>(errorType), message_QString));
}

void QJSEngine_installExtensions2(QJSEngine* self, int extensions, QJSValue* object) {
	self->installExtensions(static_cast<QJSEngine::Extensions>(extensions), *object);
}

void QJSEngine_throwError2(QJSEngine* self, int errorType, struct miqt_string message) {
	QString message_QString = QString::fromUtf8(message.data, message.len);
	self->throwError(static_cast<QJSValue::ErrorType>(errorType), message_QString);
}

bool QJSEngine_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QJSEngine> slot_handle(slot);
	MiqtVirtualQJSEngine* self_cast = dynamic_cast<MiqtVirtualQJSEngine*>( (QJSEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QJSEngine_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQJSEngine*>(self)->QJSEngine::event(event);
}

bool QJSEngine_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QJSEngine> slot_handle(slot);
	MiqtVirtualQJSEngine* self_cast = dynamic_cast<MiqtVirtualQJSEngine*>( (QJSEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QJSEngine_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQJSEngine*>(self)->QJSEngine::eventFilter(watched, event);
}

bool QJSEngine_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QJSEngine> slot_handle(slot);
	MiqtVirtualQJSEngine* self_cast = dynamic_cast<MiqtVirtualQJSEngine*>( (QJSEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QJSEngine_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQJSEngine*>(self)->QJSEngine::timerEvent(event);
}

bool QJSEngine_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QJSEngine> slot_handle(slot);
	MiqtVirtualQJSEngine* self_cast = dynamic_cast<MiqtVirtualQJSEngine*>( (QJSEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QJSEngine_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQJSEngine*>(self)->QJSEngine::childEvent(event);
}

bool QJSEngine_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QJSEngine> slot_handle(slot);
	MiqtVirtualQJSEngine* self_cast = dynamic_cast<MiqtVirtualQJSEngine*>( (QJSEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QJSEngine_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQJSEngine*>(self)->QJSEngine::customEvent(event);
}

bool QJSEngine_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QJSEngine> slot_handle(slot);
	MiqtVirtualQJSEngine* self_cast = dynamic_cast<MiqtVirtualQJSEngine*>( (QJSEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QJSEngine_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQJSEngine*>(self)->QJSEngine::connectNotify(*signal);
}

bool QJSEngine_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QJSEngine> slot_handle(slot);
	MiqtVirtualQJSEngine* self_cast = dynamic_cast<MiqtVirtualQJSEngine*>( (QJSEngine*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QJSEngine_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQJSEngine*>(self)->QJSEngine::disconnectNotify(*signal);
}

QObject* QJSEngine_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQJSEngine* self_cast = dynamic_cast<MiqtVirtualQJSEngine*>( (QJSEngine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QJSEngine_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQJSEngine* self_cast = dynamic_cast<MiqtVirtualQJSEngine*>( (QJSEngine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QJSEngine_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQJSEngine* self_cast = dynamic_cast<MiqtVirtualQJSEngine*>( (QJSEngine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QJSEngine_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQJSEngine* self_cast = dynamic_cast<MiqtVirtualQJSEngine*>( (QJSEngine*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QJSEngine_delete(QJSEngine* self) {
	delete self;
}

