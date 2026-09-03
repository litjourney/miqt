#include <memory>
#include <utility>
#include <QChildEvent>
#include <QEvent>
#include <QFile>
#include <QFileDevice>
#include <QIODevice>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTemporaryFile>
#include <QTimerEvent>
#include <qtemporaryfile.h>
#include "gen_qtemporaryfile.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QTemporaryFile(intptr_t);
struct miqt_string miqt_exec_callback_QTemporaryFile_fileName(const QTemporaryFile*, intptr_t);
bool miqt_exec_callback_QTemporaryFile_openWithFlags(QTemporaryFile*, intptr_t, int);
long long miqt_exec_callback_QTemporaryFile_size(const QTemporaryFile*, intptr_t);
bool miqt_exec_callback_QTemporaryFile_resize(QTemporaryFile*, intptr_t, long long);
int miqt_exec_callback_QTemporaryFile_permissions(const QTemporaryFile*, intptr_t);
bool miqt_exec_callback_QTemporaryFile_setPermissions(QTemporaryFile*, intptr_t, int);
void miqt_exec_callback_QTemporaryFile_close(QTemporaryFile*, intptr_t);
bool miqt_exec_callback_QTemporaryFile_isSequential(const QTemporaryFile*, intptr_t);
long long miqt_exec_callback_QTemporaryFile_pos(const QTemporaryFile*, intptr_t);
bool miqt_exec_callback_QTemporaryFile_seek(QTemporaryFile*, intptr_t, long long);
bool miqt_exec_callback_QTemporaryFile_atEnd(const QTemporaryFile*, intptr_t);
long long miqt_exec_callback_QTemporaryFile_readData(QTemporaryFile*, intptr_t, char*, long long);
long long miqt_exec_callback_QTemporaryFile_writeData(QTemporaryFile*, intptr_t, const char*, long long);
long long miqt_exec_callback_QTemporaryFile_readLineData(QTemporaryFile*, intptr_t, char*, long long);
bool miqt_exec_callback_QTemporaryFile_reset(QTemporaryFile*, intptr_t);
long long miqt_exec_callback_QTemporaryFile_bytesAvailable(const QTemporaryFile*, intptr_t);
long long miqt_exec_callback_QTemporaryFile_bytesToWrite(const QTemporaryFile*, intptr_t);
bool miqt_exec_callback_QTemporaryFile_canReadLine(const QTemporaryFile*, intptr_t);
bool miqt_exec_callback_QTemporaryFile_waitForReadyRead(QTemporaryFile*, intptr_t, int);
bool miqt_exec_callback_QTemporaryFile_waitForBytesWritten(QTemporaryFile*, intptr_t, int);
bool miqt_exec_callback_QTemporaryFile_event(QTemporaryFile*, intptr_t, QEvent*);
bool miqt_exec_callback_QTemporaryFile_eventFilter(QTemporaryFile*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QTemporaryFile_timerEvent(QTemporaryFile*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QTemporaryFile_childEvent(QTemporaryFile*, intptr_t, QChildEvent*);
void miqt_exec_callback_QTemporaryFile_customEvent(QTemporaryFile*, intptr_t, QEvent*);
void miqt_exec_callback_QTemporaryFile_connectNotify(QTemporaryFile*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QTemporaryFile_disconnectNotify(QTemporaryFile*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQTemporaryFile final : public QTemporaryFile {
public:

	MiqtVirtualQTemporaryFile(): QTemporaryFile() {}
	MiqtVirtualQTemporaryFile(const QString& templateName): QTemporaryFile(templateName) {}
	MiqtVirtualQTemporaryFile(QObject* parent): QTemporaryFile(parent) {}
	MiqtVirtualQTemporaryFile(const QString& templateName, QObject* parent): QTemporaryFile(templateName, parent) {}

	virtual ~MiqtVirtualQTemporaryFile() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> handle__fileName;

	// Subclass to allow providing a Go implementation
	virtual QString fileName() const override {
		if (!handle__fileName) {
			return QTemporaryFile::fileName();
		}

		struct miqt_string callback_return_value = miqt_exec_callback_QTemporaryFile_fileName(this, handle__fileName.value());
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		free(callback_return_value.data);
		return callback_return_value_QString;
	}

	friend struct miqt_string QTemporaryFile_virtualbase_fileName(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> handle__openWithFlags;

	// Subclass to allow providing a Go implementation
	virtual bool open(QIODevice::OpenMode flags) override {
		if (!handle__openWithFlags) {
			return QTemporaryFile::open(flags);
		}

		QIODevice::OpenMode flags_ret = flags;
		int sigval1 = static_cast<int>(flags_ret);
		bool callback_return_value = miqt_exec_callback_QTemporaryFile_openWithFlags(this, handle__openWithFlags.value(), sigval1);
		return callback_return_value;
	}

	friend bool QTemporaryFile_virtualbase_openWithFlags(void* self, int flags);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> handle__size;

	// Subclass to allow providing a Go implementation
	virtual qint64 size() const override {
		if (!handle__size) {
			return QTemporaryFile::size();
		}

		long long callback_return_value = miqt_exec_callback_QTemporaryFile_size(this, handle__size.value());
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QTemporaryFile_virtualbase_size(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> handle__resize;

	// Subclass to allow providing a Go implementation
	virtual bool resize(qint64 sz) override {
		if (!handle__resize) {
			return QTemporaryFile::resize(sz);
		}

		qint64 sz_ret = sz;
		long long sigval1 = static_cast<long long>(sz_ret);
		bool callback_return_value = miqt_exec_callback_QTemporaryFile_resize(this, handle__resize.value(), sigval1);
		return callback_return_value;
	}

	friend bool QTemporaryFile_virtualbase_resize(void* self, long long sz);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> handle__permissions;

	// Subclass to allow providing a Go implementation
	virtual QFileDevice::Permissions permissions() const override {
		if (!handle__permissions) {
			return QTemporaryFile::permissions();
		}

		int callback_return_value = miqt_exec_callback_QTemporaryFile_permissions(this, handle__permissions.value());
		return static_cast<QFileDevice::Permissions>(callback_return_value);
	}

	friend int QTemporaryFile_virtualbase_permissions(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> handle__setPermissions;

	// Subclass to allow providing a Go implementation
	virtual bool setPermissions(QFileDevice::Permissions permissionSpec) override {
		if (!handle__setPermissions) {
			return QTemporaryFile::setPermissions(permissionSpec);
		}

		QFileDevice::Permissions permissionSpec_ret = permissionSpec;
		int sigval1 = static_cast<int>(permissionSpec_ret);
		bool callback_return_value = miqt_exec_callback_QTemporaryFile_setPermissions(this, handle__setPermissions.value(), sigval1);
		return callback_return_value;
	}

	friend bool QTemporaryFile_virtualbase_setPermissions(void* self, int permissionSpec);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> handle__close;

	// Subclass to allow providing a Go implementation
	virtual void close() override {
		if (!handle__close) {
			QTemporaryFile::close();
			return;
		}

		miqt_exec_callback_QTemporaryFile_close(this, handle__close.value());

	}

	friend void QTemporaryFile_virtualbase_close(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> handle__isSequential;

	// Subclass to allow providing a Go implementation
	virtual bool isSequential() const override {
		if (!handle__isSequential) {
			return QTemporaryFile::isSequential();
		}

		bool callback_return_value = miqt_exec_callback_QTemporaryFile_isSequential(this, handle__isSequential.value());
		return callback_return_value;
	}

	friend bool QTemporaryFile_virtualbase_isSequential(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> handle__pos;

	// Subclass to allow providing a Go implementation
	virtual qint64 pos() const override {
		if (!handle__pos) {
			return QTemporaryFile::pos();
		}

		long long callback_return_value = miqt_exec_callback_QTemporaryFile_pos(this, handle__pos.value());
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QTemporaryFile_virtualbase_pos(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> handle__seek;

	// Subclass to allow providing a Go implementation
	virtual bool seek(qint64 offset) override {
		if (!handle__seek) {
			return QTemporaryFile::seek(offset);
		}

		qint64 offset_ret = offset;
		long long sigval1 = static_cast<long long>(offset_ret);
		bool callback_return_value = miqt_exec_callback_QTemporaryFile_seek(this, handle__seek.value(), sigval1);
		return callback_return_value;
	}

	friend bool QTemporaryFile_virtualbase_seek(void* self, long long offset);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> handle__atEnd;

	// Subclass to allow providing a Go implementation
	virtual bool atEnd() const override {
		if (!handle__atEnd) {
			return QTemporaryFile::atEnd();
		}

		bool callback_return_value = miqt_exec_callback_QTemporaryFile_atEnd(this, handle__atEnd.value());
		return callback_return_value;
	}

	friend bool QTemporaryFile_virtualbase_atEnd(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> handle__readData;

	// Subclass to allow providing a Go implementation
	virtual qint64 readData(char* data, qint64 maxlen) override {
		if (!handle__readData) {
			return QTemporaryFile::readData(data, maxlen);
		}

		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);
		long long callback_return_value = miqt_exec_callback_QTemporaryFile_readData(this, handle__readData.value(), sigval1, sigval2);
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QTemporaryFile_virtualbase_readData(void* self, char* data, long long maxlen);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> handle__writeData;

	// Subclass to allow providing a Go implementation
	virtual qint64 writeData(const char* data, qint64 len) override {
		if (!handle__writeData) {
			return QTemporaryFile::writeData(data, len);
		}

		const char* sigval1 = (const char*) data;
		qint64 len_ret = len;
		long long sigval2 = static_cast<long long>(len_ret);
		long long callback_return_value = miqt_exec_callback_QTemporaryFile_writeData(this, handle__writeData.value(), sigval1, sigval2);
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QTemporaryFile_virtualbase_writeData(void* self, const char* data, long long len);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> handle__readLineData;

	// Subclass to allow providing a Go implementation
	virtual qint64 readLineData(char* data, qint64 maxlen) override {
		if (!handle__readLineData) {
			return QTemporaryFile::readLineData(data, maxlen);
		}

		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);
		long long callback_return_value = miqt_exec_callback_QTemporaryFile_readLineData(this, handle__readLineData.value(), sigval1, sigval2);
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QTemporaryFile_virtualbase_readLineData(void* self, char* data, long long maxlen);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> handle__reset;

	// Subclass to allow providing a Go implementation
	virtual bool reset() override {
		if (!handle__reset) {
			return QTemporaryFile::reset();
		}

		bool callback_return_value = miqt_exec_callback_QTemporaryFile_reset(this, handle__reset.value());
		return callback_return_value;
	}

	friend bool QTemporaryFile_virtualbase_reset(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> handle__bytesAvailable;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesAvailable() const override {
		if (!handle__bytesAvailable) {
			return QTemporaryFile::bytesAvailable();
		}

		long long callback_return_value = miqt_exec_callback_QTemporaryFile_bytesAvailable(this, handle__bytesAvailable.value());
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QTemporaryFile_virtualbase_bytesAvailable(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> handle__bytesToWrite;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesToWrite() const override {
		if (!handle__bytesToWrite) {
			return QTemporaryFile::bytesToWrite();
		}

		long long callback_return_value = miqt_exec_callback_QTemporaryFile_bytesToWrite(this, handle__bytesToWrite.value());
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QTemporaryFile_virtualbase_bytesToWrite(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> handle__canReadLine;

	// Subclass to allow providing a Go implementation
	virtual bool canReadLine() const override {
		if (!handle__canReadLine) {
			return QTemporaryFile::canReadLine();
		}

		bool callback_return_value = miqt_exec_callback_QTemporaryFile_canReadLine(this, handle__canReadLine.value());
		return callback_return_value;
	}

	friend bool QTemporaryFile_virtualbase_canReadLine(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> handle__waitForReadyRead;

	// Subclass to allow providing a Go implementation
	virtual bool waitForReadyRead(int msecs) override {
		if (!handle__waitForReadyRead) {
			return QTemporaryFile::waitForReadyRead(msecs);
		}

		int sigval1 = msecs;
		bool callback_return_value = miqt_exec_callback_QTemporaryFile_waitForReadyRead(this, handle__waitForReadyRead.value(), sigval1);
		return callback_return_value;
	}

	friend bool QTemporaryFile_virtualbase_waitForReadyRead(void* self, int msecs);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> handle__waitForBytesWritten;

	// Subclass to allow providing a Go implementation
	virtual bool waitForBytesWritten(int msecs) override {
		if (!handle__waitForBytesWritten) {
			return QTemporaryFile::waitForBytesWritten(msecs);
		}

		int sigval1 = msecs;
		bool callback_return_value = miqt_exec_callback_QTemporaryFile_waitForBytesWritten(this, handle__waitForBytesWritten.value(), sigval1);
		return callback_return_value;
	}

	friend bool QTemporaryFile_virtualbase_waitForBytesWritten(void* self, int msecs);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QTemporaryFile::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QTemporaryFile_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QTemporaryFile_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QTemporaryFile::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QTemporaryFile_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QTemporaryFile_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QTemporaryFile::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QTemporaryFile_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QTemporaryFile_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QTemporaryFile::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QTemporaryFile_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QTemporaryFile_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QTemporaryFile::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QTemporaryFile_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QTemporaryFile_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QTemporaryFile::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QTemporaryFile_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QTemporaryFile_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QTemporaryFile::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QTemporaryFile_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QTemporaryFile_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QTemporaryFile_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode);
	friend void QTemporaryFile_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString);
	friend QObject* QTemporaryFile_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QTemporaryFile_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QTemporaryFile_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QTemporaryFile_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QTemporaryFile* QTemporaryFile_new() {
	return new (std::nothrow) MiqtVirtualQTemporaryFile();
}

QTemporaryFile* QTemporaryFile_new2(struct miqt_string templateName) {
	QString templateName_QString = QString::fromUtf8(templateName.data, templateName.len);
	return new (std::nothrow) MiqtVirtualQTemporaryFile(templateName_QString);
}

QTemporaryFile* QTemporaryFile_new3(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQTemporaryFile(parent);
}

QTemporaryFile* QTemporaryFile_new4(struct miqt_string templateName, QObject* parent) {
	QString templateName_QString = QString::fromUtf8(templateName.data, templateName.len);
	return new (std::nothrow) MiqtVirtualQTemporaryFile(templateName_QString, parent);
}

void QTemporaryFile_virtbase(QTemporaryFile* src, QFile** outptr_QFile) {
	*outptr_QFile = static_cast<QFile*>(src);
}

QMetaObject* QTemporaryFile_metaObject(const QTemporaryFile* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTemporaryFile_metacast(QTemporaryFile* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTemporaryFile_tr(const char* s) {
	QString _ret = QTemporaryFile::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTemporaryFile_trUtf8(const char* s) {
	QString _ret = QTemporaryFile::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTemporaryFile_autoRemove(const QTemporaryFile* self) {
	return self->autoRemove();
}

void QTemporaryFile_setAutoRemove(QTemporaryFile* self, bool b) {
	self->setAutoRemove(b);
}

bool QTemporaryFile_open(QTemporaryFile* self) {
	return self->open();
}

struct miqt_string QTemporaryFile_fileName(const QTemporaryFile* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTemporaryFile_fileTemplate(const QTemporaryFile* self) {
	QString _ret = self->fileTemplate();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTemporaryFile_setFileTemplate(QTemporaryFile* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setFileTemplate(name_QString);
}

bool QTemporaryFile_rename(QTemporaryFile* self, struct miqt_string newName) {
	QString newName_QString = QString::fromUtf8(newName.data, newName.len);
	return self->rename(newName_QString);
}

QTemporaryFile* QTemporaryFile_createLocalFile(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return QTemporaryFile::createLocalFile(fileName_QString);
}

QTemporaryFile* QTemporaryFile_createLocalFileWithFile(QFile* file) {
	return QTemporaryFile::createLocalFile(*file);
}

QTemporaryFile* QTemporaryFile_createNativeFile(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return QTemporaryFile::createNativeFile(fileName_QString);
}

QTemporaryFile* QTemporaryFile_createNativeFileWithFile(QFile* file) {
	return QTemporaryFile::createNativeFile(*file);
}

struct miqt_string QTemporaryFile_tr2(const char* s, const char* c) {
	QString _ret = QTemporaryFile::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTemporaryFile_tr3(const char* s, const char* c, int n) {
	QString _ret = QTemporaryFile::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTemporaryFile_trUtf82(const char* s, const char* c) {
	QString _ret = QTemporaryFile::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTemporaryFile_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QTemporaryFile::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTemporaryFile_override_virtual_fileName(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> slot_handle(slot);
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__fileName = std::move(slot_handle);
	return true;
}

struct miqt_string QTemporaryFile_virtualbase_fileName(const void* self) {
	QString _ret = static_cast<const MiqtVirtualQTemporaryFile*>(self)->QTemporaryFile::fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QTemporaryFile_override_virtual_openWithFlags(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> slot_handle(slot);
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__openWithFlags = std::move(slot_handle);
	return true;
}

bool QTemporaryFile_virtualbase_openWithFlags(void* self, int flags) {
	return static_cast<MiqtVirtualQTemporaryFile*>(self)->QTemporaryFile::open(static_cast<MiqtVirtualQTemporaryFile::OpenMode>(flags));
}

bool QTemporaryFile_override_virtual_size(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> slot_handle(slot);
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__size = std::move(slot_handle);
	return true;
}

long long QTemporaryFile_virtualbase_size(const void* self) {
	qint64 _ret = static_cast<const MiqtVirtualQTemporaryFile*>(self)->QTemporaryFile::size();
	return static_cast<long long>(_ret);
}

bool QTemporaryFile_override_virtual_resize(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> slot_handle(slot);
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resize = std::move(slot_handle);
	return true;
}

bool QTemporaryFile_virtualbase_resize(void* self, long long sz) {
	return static_cast<MiqtVirtualQTemporaryFile*>(self)->QTemporaryFile::resize(static_cast<qint64>(sz));
}

bool QTemporaryFile_override_virtual_permissions(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> slot_handle(slot);
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__permissions = std::move(slot_handle);
	return true;
}

int QTemporaryFile_virtualbase_permissions(const void* self) {
	MiqtVirtualQTemporaryFile::Permissions _ret = static_cast<const MiqtVirtualQTemporaryFile*>(self)->QTemporaryFile::permissions();
	return static_cast<int>(_ret);
}

bool QTemporaryFile_override_virtual_setPermissions(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> slot_handle(slot);
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setPermissions = std::move(slot_handle);
	return true;
}

bool QTemporaryFile_virtualbase_setPermissions(void* self, int permissionSpec) {
	return static_cast<MiqtVirtualQTemporaryFile*>(self)->QTemporaryFile::setPermissions(static_cast<MiqtVirtualQTemporaryFile::Permissions>(permissionSpec));
}

bool QTemporaryFile_override_virtual_close(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> slot_handle(slot);
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__close = std::move(slot_handle);
	return true;
}

void QTemporaryFile_virtualbase_close(void* self) {
	static_cast<MiqtVirtualQTemporaryFile*>(self)->QTemporaryFile::close();
}

bool QTemporaryFile_override_virtual_isSequential(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> slot_handle(slot);
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isSequential = std::move(slot_handle);
	return true;
}

bool QTemporaryFile_virtualbase_isSequential(const void* self) {
	return static_cast<const MiqtVirtualQTemporaryFile*>(self)->QTemporaryFile::isSequential();
}

bool QTemporaryFile_override_virtual_pos(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> slot_handle(slot);
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__pos = std::move(slot_handle);
	return true;
}

long long QTemporaryFile_virtualbase_pos(const void* self) {
	qint64 _ret = static_cast<const MiqtVirtualQTemporaryFile*>(self)->QTemporaryFile::pos();
	return static_cast<long long>(_ret);
}

bool QTemporaryFile_override_virtual_seek(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> slot_handle(slot);
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__seek = std::move(slot_handle);
	return true;
}

bool QTemporaryFile_virtualbase_seek(void* self, long long offset) {
	return static_cast<MiqtVirtualQTemporaryFile*>(self)->QTemporaryFile::seek(static_cast<qint64>(offset));
}

bool QTemporaryFile_override_virtual_atEnd(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> slot_handle(slot);
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__atEnd = std::move(slot_handle);
	return true;
}

bool QTemporaryFile_virtualbase_atEnd(const void* self) {
	return static_cast<const MiqtVirtualQTemporaryFile*>(self)->QTemporaryFile::atEnd();
}

bool QTemporaryFile_override_virtual_readData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> slot_handle(slot);
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__readData = std::move(slot_handle);
	return true;
}

long long QTemporaryFile_virtualbase_readData(void* self, char* data, long long maxlen) {
	qint64 _ret = static_cast<MiqtVirtualQTemporaryFile*>(self)->QTemporaryFile::readData(data, static_cast<qint64>(maxlen));
	return static_cast<long long>(_ret);
}

bool QTemporaryFile_override_virtual_writeData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> slot_handle(slot);
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__writeData = std::move(slot_handle);
	return true;
}

long long QTemporaryFile_virtualbase_writeData(void* self, const char* data, long long len) {
	qint64 _ret = static_cast<MiqtVirtualQTemporaryFile*>(self)->QTemporaryFile::writeData(data, static_cast<qint64>(len));
	return static_cast<long long>(_ret);
}

bool QTemporaryFile_override_virtual_readLineData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> slot_handle(slot);
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__readLineData = std::move(slot_handle);
	return true;
}

long long QTemporaryFile_virtualbase_readLineData(void* self, char* data, long long maxlen) {
	qint64 _ret = static_cast<MiqtVirtualQTemporaryFile*>(self)->QTemporaryFile::readLineData(data, static_cast<qint64>(maxlen));
	return static_cast<long long>(_ret);
}

bool QTemporaryFile_override_virtual_reset(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> slot_handle(slot);
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__reset = std::move(slot_handle);
	return true;
}

bool QTemporaryFile_virtualbase_reset(void* self) {
	return static_cast<MiqtVirtualQTemporaryFile*>(self)->QTemporaryFile::reset();
}

bool QTemporaryFile_override_virtual_bytesAvailable(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> slot_handle(slot);
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__bytesAvailable = std::move(slot_handle);
	return true;
}

long long QTemporaryFile_virtualbase_bytesAvailable(const void* self) {
	qint64 _ret = static_cast<const MiqtVirtualQTemporaryFile*>(self)->QTemporaryFile::bytesAvailable();
	return static_cast<long long>(_ret);
}

bool QTemporaryFile_override_virtual_bytesToWrite(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> slot_handle(slot);
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__bytesToWrite = std::move(slot_handle);
	return true;
}

long long QTemporaryFile_virtualbase_bytesToWrite(const void* self) {
	qint64 _ret = static_cast<const MiqtVirtualQTemporaryFile*>(self)->QTemporaryFile::bytesToWrite();
	return static_cast<long long>(_ret);
}

bool QTemporaryFile_override_virtual_canReadLine(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> slot_handle(slot);
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__canReadLine = std::move(slot_handle);
	return true;
}

bool QTemporaryFile_virtualbase_canReadLine(const void* self) {
	return static_cast<const MiqtVirtualQTemporaryFile*>(self)->QTemporaryFile::canReadLine();
}

bool QTemporaryFile_override_virtual_waitForReadyRead(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> slot_handle(slot);
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__waitForReadyRead = std::move(slot_handle);
	return true;
}

bool QTemporaryFile_virtualbase_waitForReadyRead(void* self, int msecs) {
	return static_cast<MiqtVirtualQTemporaryFile*>(self)->QTemporaryFile::waitForReadyRead(static_cast<int>(msecs));
}

bool QTemporaryFile_override_virtual_waitForBytesWritten(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> slot_handle(slot);
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__waitForBytesWritten = std::move(slot_handle);
	return true;
}

bool QTemporaryFile_virtualbase_waitForBytesWritten(void* self, int msecs) {
	return static_cast<MiqtVirtualQTemporaryFile*>(self)->QTemporaryFile::waitForBytesWritten(static_cast<int>(msecs));
}

bool QTemporaryFile_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> slot_handle(slot);
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QTemporaryFile_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQTemporaryFile*>(self)->QTemporaryFile::event(event);
}

bool QTemporaryFile_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> slot_handle(slot);
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QTemporaryFile_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQTemporaryFile*>(self)->QTemporaryFile::eventFilter(watched, event);
}

bool QTemporaryFile_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> slot_handle(slot);
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QTemporaryFile_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQTemporaryFile*>(self)->QTemporaryFile::timerEvent(event);
}

bool QTemporaryFile_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> slot_handle(slot);
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QTemporaryFile_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQTemporaryFile*>(self)->QTemporaryFile::childEvent(event);
}

bool QTemporaryFile_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> slot_handle(slot);
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QTemporaryFile_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQTemporaryFile*>(self)->QTemporaryFile::customEvent(event);
}

bool QTemporaryFile_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> slot_handle(slot);
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QTemporaryFile_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQTemporaryFile*>(self)->QTemporaryFile::connectNotify(*signal);
}

bool QTemporaryFile_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTemporaryFile> slot_handle(slot);
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QTemporaryFile_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQTemporaryFile*>(self)->QTemporaryFile::disconnectNotify(*signal);
}

void QTemporaryFile_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode) {
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setOpenMode(static_cast<MiqtVirtualQTemporaryFile::OpenMode>(openMode));
}

void QTemporaryFile_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString) {
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
		QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
	self_cast->setErrorString(errorString_QString);
}

QObject* QTemporaryFile_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QTemporaryFile_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QTemporaryFile_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QTemporaryFile_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQTemporaryFile* self_cast = dynamic_cast<MiqtVirtualQTemporaryFile*>( (QTemporaryFile*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QTemporaryFile_delete(QTemporaryFile* self) {
	delete self;
}

