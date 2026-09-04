#include <memory>
#include <utility>
#include <QScriptEngine>
#include <QScriptEngineAgent>
#include <QScriptValue>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qscriptengineagent.h>
#include "gen_qscriptengineagent.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QScriptEngineAgent(intptr_t);
void miqt_exec_callback_QScriptEngineAgent_scriptLoad(QScriptEngineAgent*, intptr_t, long long, struct miqt_string, struct miqt_string, int);
void miqt_exec_callback_QScriptEngineAgent_scriptUnload(QScriptEngineAgent*, intptr_t, long long);
void miqt_exec_callback_QScriptEngineAgent_contextPush(QScriptEngineAgent*, intptr_t);
void miqt_exec_callback_QScriptEngineAgent_contextPop(QScriptEngineAgent*, intptr_t);
void miqt_exec_callback_QScriptEngineAgent_functionEntry(QScriptEngineAgent*, intptr_t, long long);
void miqt_exec_callback_QScriptEngineAgent_functionExit(QScriptEngineAgent*, intptr_t, long long, QScriptValue*);
void miqt_exec_callback_QScriptEngineAgent_positionChange(QScriptEngineAgent*, intptr_t, long long, int, int);
void miqt_exec_callback_QScriptEngineAgent_exceptionThrow(QScriptEngineAgent*, intptr_t, long long, QScriptValue*, bool);
void miqt_exec_callback_QScriptEngineAgent_exceptionCatch(QScriptEngineAgent*, intptr_t, long long, QScriptValue*);
bool miqt_exec_callback_QScriptEngineAgent_supportsExtension(const QScriptEngineAgent*, intptr_t, int);
QVariant* miqt_exec_callback_QScriptEngineAgent_extension(QScriptEngineAgent*, intptr_t, int, QVariant*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQScriptEngineAgent final : public QScriptEngineAgent {
public:

	MiqtVirtualQScriptEngineAgent(QScriptEngine* engine): QScriptEngineAgent(engine) {}

	virtual ~MiqtVirtualQScriptEngineAgent() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QScriptEngineAgent> handle__scriptLoad;

	// Subclass to allow providing a Go implementation
	virtual void scriptLoad(qint64 id, const QString& program, const QString& fileName, int baseLineNumber) override {
		if (!handle__scriptLoad) {
			QScriptEngineAgent::scriptLoad(id, program, fileName, baseLineNumber);
			return;
		}

		qint64 id_ret = id;
		long long sigval1 = static_cast<long long>(id_ret);
		const QString program_ret = program;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray program_b = program_ret.toUtf8();
		struct miqt_string program_ms;
		program_ms.len = program_b.length();
		program_ms.data = static_cast<char*>(malloc(program_ms.len));
		memcpy(program_ms.data, program_b.data(), program_ms.len);
		struct miqt_string sigval2 = program_ms;
		const QString fileName_ret = fileName;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray fileName_b = fileName_ret.toUtf8();
		struct miqt_string fileName_ms;
		fileName_ms.len = fileName_b.length();
		fileName_ms.data = static_cast<char*>(malloc(fileName_ms.len));
		memcpy(fileName_ms.data, fileName_b.data(), fileName_ms.len);
		struct miqt_string sigval3 = fileName_ms;
		int sigval4 = baseLineNumber;
		miqt_exec_callback_QScriptEngineAgent_scriptLoad(this, handle__scriptLoad.value(), sigval1, sigval2, sigval3, sigval4);

	}

	friend void QScriptEngineAgent_virtualbase_scriptLoad(void* self, long long id, struct miqt_string program, struct miqt_string fileName, int baseLineNumber);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QScriptEngineAgent> handle__scriptUnload;

	// Subclass to allow providing a Go implementation
	virtual void scriptUnload(qint64 id) override {
		if (!handle__scriptUnload) {
			QScriptEngineAgent::scriptUnload(id);
			return;
		}

		qint64 id_ret = id;
		long long sigval1 = static_cast<long long>(id_ret);
		miqt_exec_callback_QScriptEngineAgent_scriptUnload(this, handle__scriptUnload.value(), sigval1);

	}

	friend void QScriptEngineAgent_virtualbase_scriptUnload(void* self, long long id);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QScriptEngineAgent> handle__contextPush;

	// Subclass to allow providing a Go implementation
	virtual void contextPush() override {
		if (!handle__contextPush) {
			QScriptEngineAgent::contextPush();
			return;
		}

		miqt_exec_callback_QScriptEngineAgent_contextPush(this, handle__contextPush.value());

	}

	friend void QScriptEngineAgent_virtualbase_contextPush(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QScriptEngineAgent> handle__contextPop;

	// Subclass to allow providing a Go implementation
	virtual void contextPop() override {
		if (!handle__contextPop) {
			QScriptEngineAgent::contextPop();
			return;
		}

		miqt_exec_callback_QScriptEngineAgent_contextPop(this, handle__contextPop.value());

	}

	friend void QScriptEngineAgent_virtualbase_contextPop(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QScriptEngineAgent> handle__functionEntry;

	// Subclass to allow providing a Go implementation
	virtual void functionEntry(qint64 scriptId) override {
		if (!handle__functionEntry) {
			QScriptEngineAgent::functionEntry(scriptId);
			return;
		}

		qint64 scriptId_ret = scriptId;
		long long sigval1 = static_cast<long long>(scriptId_ret);
		miqt_exec_callback_QScriptEngineAgent_functionEntry(this, handle__functionEntry.value(), sigval1);

	}

	friend void QScriptEngineAgent_virtualbase_functionEntry(void* self, long long scriptId);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QScriptEngineAgent> handle__functionExit;

	// Subclass to allow providing a Go implementation
	virtual void functionExit(qint64 scriptId, const QScriptValue& returnValue) override {
		if (!handle__functionExit) {
			QScriptEngineAgent::functionExit(scriptId, returnValue);
			return;
		}

		qint64 scriptId_ret = scriptId;
		long long sigval1 = static_cast<long long>(scriptId_ret);
		const QScriptValue& returnValue_ret = returnValue;
		// Cast returned reference into pointer
		QScriptValue* sigval2 = const_cast<QScriptValue*>(&returnValue_ret);
		miqt_exec_callback_QScriptEngineAgent_functionExit(this, handle__functionExit.value(), sigval1, sigval2);

	}

	friend void QScriptEngineAgent_virtualbase_functionExit(void* self, long long scriptId, QScriptValue* returnValue);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QScriptEngineAgent> handle__positionChange;

	// Subclass to allow providing a Go implementation
	virtual void positionChange(qint64 scriptId, int lineNumber, int columnNumber) override {
		if (!handle__positionChange) {
			QScriptEngineAgent::positionChange(scriptId, lineNumber, columnNumber);
			return;
		}

		qint64 scriptId_ret = scriptId;
		long long sigval1 = static_cast<long long>(scriptId_ret);
		int sigval2 = lineNumber;
		int sigval3 = columnNumber;
		miqt_exec_callback_QScriptEngineAgent_positionChange(this, handle__positionChange.value(), sigval1, sigval2, sigval3);

	}

	friend void QScriptEngineAgent_virtualbase_positionChange(void* self, long long scriptId, int lineNumber, int columnNumber);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QScriptEngineAgent> handle__exceptionThrow;

	// Subclass to allow providing a Go implementation
	virtual void exceptionThrow(qint64 scriptId, const QScriptValue& exception, bool hasHandler) override {
		if (!handle__exceptionThrow) {
			QScriptEngineAgent::exceptionThrow(scriptId, exception, hasHandler);
			return;
		}

		qint64 scriptId_ret = scriptId;
		long long sigval1 = static_cast<long long>(scriptId_ret);
		const QScriptValue& exception_ret = exception;
		// Cast returned reference into pointer
		QScriptValue* sigval2 = const_cast<QScriptValue*>(&exception_ret);
		bool sigval3 = hasHandler;
		miqt_exec_callback_QScriptEngineAgent_exceptionThrow(this, handle__exceptionThrow.value(), sigval1, sigval2, sigval3);

	}

	friend void QScriptEngineAgent_virtualbase_exceptionThrow(void* self, long long scriptId, QScriptValue* exception, bool hasHandler);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QScriptEngineAgent> handle__exceptionCatch;

	// Subclass to allow providing a Go implementation
	virtual void exceptionCatch(qint64 scriptId, const QScriptValue& exception) override {
		if (!handle__exceptionCatch) {
			QScriptEngineAgent::exceptionCatch(scriptId, exception);
			return;
		}

		qint64 scriptId_ret = scriptId;
		long long sigval1 = static_cast<long long>(scriptId_ret);
		const QScriptValue& exception_ret = exception;
		// Cast returned reference into pointer
		QScriptValue* sigval2 = const_cast<QScriptValue*>(&exception_ret);
		miqt_exec_callback_QScriptEngineAgent_exceptionCatch(this, handle__exceptionCatch.value(), sigval1, sigval2);

	}

	friend void QScriptEngineAgent_virtualbase_exceptionCatch(void* self, long long scriptId, QScriptValue* exception);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QScriptEngineAgent> handle__supportsExtension;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QScriptEngineAgent::Extension extension) const override {
		if (!handle__supportsExtension) {
			return QScriptEngineAgent::supportsExtension(extension);
		}

		QScriptEngineAgent::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		bool callback_return_value = miqt_exec_callback_QScriptEngineAgent_supportsExtension(this, handle__supportsExtension.value(), sigval1);
		return callback_return_value;
	}

	friend bool QScriptEngineAgent_virtualbase_supportsExtension(const void* self, int extension);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QScriptEngineAgent> handle__extension;
	bool owns_return__extension = false;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(QScriptEngineAgent::Extension extension, const QVariant& argument) override {
		if (!handle__extension) {
			return QScriptEngineAgent::extension(extension, argument);
		}

		QScriptEngineAgent::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& argument_ret = argument;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&argument_ret);
		QVariant* callback_return_value = miqt_exec_callback_QScriptEngineAgent_extension(this, handle__extension.value(), sigval1, sigval2);
		std::unique_ptr<QVariant> callback_return_value_owner;
		if (owns_return__extension) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QVariant* QScriptEngineAgent_virtualbase_extension(void* self, int extension, QVariant* argument);

};

QScriptEngineAgent* QScriptEngineAgent_new(QScriptEngine* engine) {
	return new (std::nothrow) MiqtVirtualQScriptEngineAgent(engine);
}

void QScriptEngineAgent_scriptLoad(QScriptEngineAgent* self, long long id, struct miqt_string program, struct miqt_string fileName, int baseLineNumber) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->scriptLoad(static_cast<qint64>(id), program_QString, fileName_QString, static_cast<int>(baseLineNumber));
}

void QScriptEngineAgent_scriptUnload(QScriptEngineAgent* self, long long id) {
	self->scriptUnload(static_cast<qint64>(id));
}

void QScriptEngineAgent_contextPush(QScriptEngineAgent* self) {
	self->contextPush();
}

void QScriptEngineAgent_contextPop(QScriptEngineAgent* self) {
	self->contextPop();
}

void QScriptEngineAgent_functionEntry(QScriptEngineAgent* self, long long scriptId) {
	self->functionEntry(static_cast<qint64>(scriptId));
}

void QScriptEngineAgent_functionExit(QScriptEngineAgent* self, long long scriptId, QScriptValue* returnValue) {
	self->functionExit(static_cast<qint64>(scriptId), *returnValue);
}

void QScriptEngineAgent_positionChange(QScriptEngineAgent* self, long long scriptId, int lineNumber, int columnNumber) {
	self->positionChange(static_cast<qint64>(scriptId), static_cast<int>(lineNumber), static_cast<int>(columnNumber));
}

void QScriptEngineAgent_exceptionThrow(QScriptEngineAgent* self, long long scriptId, QScriptValue* exception, bool hasHandler) {
	self->exceptionThrow(static_cast<qint64>(scriptId), *exception, hasHandler);
}

void QScriptEngineAgent_exceptionCatch(QScriptEngineAgent* self, long long scriptId, QScriptValue* exception) {
	self->exceptionCatch(static_cast<qint64>(scriptId), *exception);
}

bool QScriptEngineAgent_supportsExtension(const QScriptEngineAgent* self, int extension) {
	return self->supportsExtension(static_cast<QScriptEngineAgent::Extension>(extension));
}

QVariant* QScriptEngineAgent_extension(QScriptEngineAgent* self, int extension, QVariant* argument) {
	return new QVariant(self->extension(static_cast<QScriptEngineAgent::Extension>(extension), *argument));
}

QScriptEngine* QScriptEngineAgent_engine(const QScriptEngineAgent* self) {
	return self->engine();
}

bool QScriptEngineAgent_override_virtual_scriptLoad(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QScriptEngineAgent> slot_handle(slot);
	MiqtVirtualQScriptEngineAgent* self_cast = dynamic_cast<MiqtVirtualQScriptEngineAgent*>( (QScriptEngineAgent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scriptLoad = std::move(slot_handle);
	return true;
}

void QScriptEngineAgent_virtualbase_scriptLoad(void* self, long long id, struct miqt_string program, struct miqt_string fileName, int baseLineNumber) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	static_cast<MiqtVirtualQScriptEngineAgent*>(self)->QScriptEngineAgent::scriptLoad(static_cast<qint64>(id), program_QString, fileName_QString, static_cast<int>(baseLineNumber));
}

bool QScriptEngineAgent_override_virtual_scriptUnload(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QScriptEngineAgent> slot_handle(slot);
	MiqtVirtualQScriptEngineAgent* self_cast = dynamic_cast<MiqtVirtualQScriptEngineAgent*>( (QScriptEngineAgent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scriptUnload = std::move(slot_handle);
	return true;
}

void QScriptEngineAgent_virtualbase_scriptUnload(void* self, long long id) {
	static_cast<MiqtVirtualQScriptEngineAgent*>(self)->QScriptEngineAgent::scriptUnload(static_cast<qint64>(id));
}

bool QScriptEngineAgent_override_virtual_contextPush(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QScriptEngineAgent> slot_handle(slot);
	MiqtVirtualQScriptEngineAgent* self_cast = dynamic_cast<MiqtVirtualQScriptEngineAgent*>( (QScriptEngineAgent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextPush = std::move(slot_handle);
	return true;
}

void QScriptEngineAgent_virtualbase_contextPush(void* self) {
	static_cast<MiqtVirtualQScriptEngineAgent*>(self)->QScriptEngineAgent::contextPush();
}

bool QScriptEngineAgent_override_virtual_contextPop(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QScriptEngineAgent> slot_handle(slot);
	MiqtVirtualQScriptEngineAgent* self_cast = dynamic_cast<MiqtVirtualQScriptEngineAgent*>( (QScriptEngineAgent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextPop = std::move(slot_handle);
	return true;
}

void QScriptEngineAgent_virtualbase_contextPop(void* self) {
	static_cast<MiqtVirtualQScriptEngineAgent*>(self)->QScriptEngineAgent::contextPop();
}

bool QScriptEngineAgent_override_virtual_functionEntry(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QScriptEngineAgent> slot_handle(slot);
	MiqtVirtualQScriptEngineAgent* self_cast = dynamic_cast<MiqtVirtualQScriptEngineAgent*>( (QScriptEngineAgent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__functionEntry = std::move(slot_handle);
	return true;
}

void QScriptEngineAgent_virtualbase_functionEntry(void* self, long long scriptId) {
	static_cast<MiqtVirtualQScriptEngineAgent*>(self)->QScriptEngineAgent::functionEntry(static_cast<qint64>(scriptId));
}

bool QScriptEngineAgent_override_virtual_functionExit(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QScriptEngineAgent> slot_handle(slot);
	MiqtVirtualQScriptEngineAgent* self_cast = dynamic_cast<MiqtVirtualQScriptEngineAgent*>( (QScriptEngineAgent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__functionExit = std::move(slot_handle);
	return true;
}

void QScriptEngineAgent_virtualbase_functionExit(void* self, long long scriptId, QScriptValue* returnValue) {
	static_cast<MiqtVirtualQScriptEngineAgent*>(self)->QScriptEngineAgent::functionExit(static_cast<qint64>(scriptId), *returnValue);
}

bool QScriptEngineAgent_override_virtual_positionChange(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QScriptEngineAgent> slot_handle(slot);
	MiqtVirtualQScriptEngineAgent* self_cast = dynamic_cast<MiqtVirtualQScriptEngineAgent*>( (QScriptEngineAgent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__positionChange = std::move(slot_handle);
	return true;
}

void QScriptEngineAgent_virtualbase_positionChange(void* self, long long scriptId, int lineNumber, int columnNumber) {
	static_cast<MiqtVirtualQScriptEngineAgent*>(self)->QScriptEngineAgent::positionChange(static_cast<qint64>(scriptId), static_cast<int>(lineNumber), static_cast<int>(columnNumber));
}

bool QScriptEngineAgent_override_virtual_exceptionThrow(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QScriptEngineAgent> slot_handle(slot);
	MiqtVirtualQScriptEngineAgent* self_cast = dynamic_cast<MiqtVirtualQScriptEngineAgent*>( (QScriptEngineAgent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__exceptionThrow = std::move(slot_handle);
	return true;
}

void QScriptEngineAgent_virtualbase_exceptionThrow(void* self, long long scriptId, QScriptValue* exception, bool hasHandler) {
	static_cast<MiqtVirtualQScriptEngineAgent*>(self)->QScriptEngineAgent::exceptionThrow(static_cast<qint64>(scriptId), *exception, hasHandler);
}

bool QScriptEngineAgent_override_virtual_exceptionCatch(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QScriptEngineAgent> slot_handle(slot);
	MiqtVirtualQScriptEngineAgent* self_cast = dynamic_cast<MiqtVirtualQScriptEngineAgent*>( (QScriptEngineAgent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__exceptionCatch = std::move(slot_handle);
	return true;
}

void QScriptEngineAgent_virtualbase_exceptionCatch(void* self, long long scriptId, QScriptValue* exception) {
	static_cast<MiqtVirtualQScriptEngineAgent*>(self)->QScriptEngineAgent::exceptionCatch(static_cast<qint64>(scriptId), *exception);
}

bool QScriptEngineAgent_override_virtual_supportsExtension(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QScriptEngineAgent> slot_handle(slot);
	MiqtVirtualQScriptEngineAgent* self_cast = dynamic_cast<MiqtVirtualQScriptEngineAgent*>( (QScriptEngineAgent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__supportsExtension = std::move(slot_handle);
	return true;
}

bool QScriptEngineAgent_virtualbase_supportsExtension(const void* self, int extension) {
	return static_cast<const MiqtVirtualQScriptEngineAgent*>(self)->QScriptEngineAgent::supportsExtension(static_cast<MiqtVirtualQScriptEngineAgent::Extension>(extension));
}

bool QScriptEngineAgent_override_virtual_extension(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QScriptEngineAgent> slot_handle(slot);
	MiqtVirtualQScriptEngineAgent* self_cast = dynamic_cast<MiqtVirtualQScriptEngineAgent*>( (QScriptEngineAgent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__extension = std::move(slot_handle);
	self_cast->owns_return__extension = false;
	return true;
}

bool QScriptEngineAgent_override_virtual_owned_extension(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QScriptEngineAgent> slot_handle(slot);
	MiqtVirtualQScriptEngineAgent* self_cast = dynamic_cast<MiqtVirtualQScriptEngineAgent*>( (QScriptEngineAgent*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__extension = std::move(slot_handle);
	self_cast->owns_return__extension = true;
	return true;
}

QVariant* QScriptEngineAgent_virtualbase_extension(void* self, int extension, QVariant* argument) {
	return new QVariant(static_cast<MiqtVirtualQScriptEngineAgent*>(self)->QScriptEngineAgent::extension(static_cast<MiqtVirtualQScriptEngineAgent::Extension>(extension), *argument));
}

void QScriptEngineAgent_delete(QScriptEngineAgent* self) {
	delete self;
}

