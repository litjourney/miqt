#include <memory>
#include <utility>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QFile>
#include <QFileDevice>
#include <QIODevice>
#include <QIODeviceBase>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qfile.h>
#include "gen_qfile.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QFile(intptr_t);
struct miqt_string miqt_exec_callback_QFile_fileName(const QFile*, intptr_t);
bool miqt_exec_callback_QFile_open(QFile*, intptr_t, int);
long long miqt_exec_callback_QFile_size(const QFile*, intptr_t);
bool miqt_exec_callback_QFile_resize(QFile*, intptr_t, long long);
int miqt_exec_callback_QFile_permissions(const QFile*, intptr_t);
bool miqt_exec_callback_QFile_setPermissions(QFile*, intptr_t, int);
void miqt_exec_callback_QFile_close(QFile*, intptr_t);
bool miqt_exec_callback_QFile_isSequential(const QFile*, intptr_t);
long long miqt_exec_callback_QFile_pos(const QFile*, intptr_t);
bool miqt_exec_callback_QFile_seek(QFile*, intptr_t, long long);
bool miqt_exec_callback_QFile_atEnd(const QFile*, intptr_t);
long long miqt_exec_callback_QFile_readData(QFile*, intptr_t, char*, long long);
long long miqt_exec_callback_QFile_writeData(QFile*, intptr_t, const char*, long long);
long long miqt_exec_callback_QFile_readLineData(QFile*, intptr_t, char*, long long);
bool miqt_exec_callback_QFile_reset(QFile*, intptr_t);
long long miqt_exec_callback_QFile_bytesAvailable(const QFile*, intptr_t);
long long miqt_exec_callback_QFile_bytesToWrite(const QFile*, intptr_t);
bool miqt_exec_callback_QFile_canReadLine(const QFile*, intptr_t);
bool miqt_exec_callback_QFile_waitForReadyRead(QFile*, intptr_t, int);
bool miqt_exec_callback_QFile_waitForBytesWritten(QFile*, intptr_t, int);
long long miqt_exec_callback_QFile_skipData(QFile*, intptr_t, long long);
bool miqt_exec_callback_QFile_event(QFile*, intptr_t, QEvent*);
bool miqt_exec_callback_QFile_eventFilter(QFile*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QFile_timerEvent(QFile*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QFile_childEvent(QFile*, intptr_t, QChildEvent*);
void miqt_exec_callback_QFile_customEvent(QFile*, intptr_t, QEvent*);
void miqt_exec_callback_QFile_connectNotify(QFile*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QFile_disconnectNotify(QFile*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQFile final : public QFile {
public:

	MiqtVirtualQFile(): QFile() {}
	MiqtVirtualQFile(const QString& name): QFile(name) {}
	MiqtVirtualQFile(QObject* parent): QFile(parent) {}
	MiqtVirtualQFile(const QString& name, QObject* parent): QFile(name, parent) {}

	virtual ~MiqtVirtualQFile() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> handle__fileName;

	// Subclass to allow providing a Go implementation
	virtual QString fileName() const override {
		if (!handle__fileName) {
			return QFile::fileName();
		}

		struct miqt_string callback_return_value = miqt_exec_callback_QFile_fileName(this, handle__fileName.value());
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		free(callback_return_value.data);
		return callback_return_value_QString;
	}

	friend struct miqt_string QFile_virtualbase_fileName(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> handle__open;

	// Subclass to allow providing a Go implementation
	virtual bool open(QIODeviceBase::OpenMode flags) override {
		if (!handle__open) {
			return QFile::open(flags);
		}

		QIODeviceBase::OpenMode flags_ret = flags;
		int sigval1 = static_cast<int>(flags_ret);
		bool callback_return_value = miqt_exec_callback_QFile_open(this, handle__open.value(), sigval1);
		return callback_return_value;
	}

	friend bool QFile_virtualbase_open(void* self, int flags);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> handle__size;

	// Subclass to allow providing a Go implementation
	virtual qint64 size() const override {
		if (!handle__size) {
			return QFile::size();
		}

		long long callback_return_value = miqt_exec_callback_QFile_size(this, handle__size.value());
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QFile_virtualbase_size(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> handle__resize;

	// Subclass to allow providing a Go implementation
	virtual bool resize(qint64 sz) override {
		if (!handle__resize) {
			return QFile::resize(sz);
		}

		qint64 sz_ret = sz;
		long long sigval1 = static_cast<long long>(sz_ret);
		bool callback_return_value = miqt_exec_callback_QFile_resize(this, handle__resize.value(), sigval1);
		return callback_return_value;
	}

	friend bool QFile_virtualbase_resize(void* self, long long sz);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> handle__permissions;

	// Subclass to allow providing a Go implementation
	virtual QFileDevice::Permissions permissions() const override {
		if (!handle__permissions) {
			return QFile::permissions();
		}

		int callback_return_value = miqt_exec_callback_QFile_permissions(this, handle__permissions.value());
		return static_cast<QFileDevice::Permissions>(callback_return_value);
	}

	friend int QFile_virtualbase_permissions(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> handle__setPermissions;

	// Subclass to allow providing a Go implementation
	virtual bool setPermissions(QFileDevice::Permissions permissionSpec) override {
		if (!handle__setPermissions) {
			return QFile::setPermissions(permissionSpec);
		}

		QFileDevice::Permissions permissionSpec_ret = permissionSpec;
		int sigval1 = static_cast<int>(permissionSpec_ret);
		bool callback_return_value = miqt_exec_callback_QFile_setPermissions(this, handle__setPermissions.value(), sigval1);
		return callback_return_value;
	}

	friend bool QFile_virtualbase_setPermissions(void* self, int permissionSpec);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> handle__close;

	// Subclass to allow providing a Go implementation
	virtual void close() override {
		if (!handle__close) {
			QFile::close();
			return;
		}

		miqt_exec_callback_QFile_close(this, handle__close.value());

	}

	friend void QFile_virtualbase_close(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> handle__isSequential;

	// Subclass to allow providing a Go implementation
	virtual bool isSequential() const override {
		if (!handle__isSequential) {
			return QFile::isSequential();
		}

		bool callback_return_value = miqt_exec_callback_QFile_isSequential(this, handle__isSequential.value());
		return callback_return_value;
	}

	friend bool QFile_virtualbase_isSequential(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> handle__pos;

	// Subclass to allow providing a Go implementation
	virtual qint64 pos() const override {
		if (!handle__pos) {
			return QFile::pos();
		}

		long long callback_return_value = miqt_exec_callback_QFile_pos(this, handle__pos.value());
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QFile_virtualbase_pos(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> handle__seek;

	// Subclass to allow providing a Go implementation
	virtual bool seek(qint64 offset) override {
		if (!handle__seek) {
			return QFile::seek(offset);
		}

		qint64 offset_ret = offset;
		long long sigval1 = static_cast<long long>(offset_ret);
		bool callback_return_value = miqt_exec_callback_QFile_seek(this, handle__seek.value(), sigval1);
		return callback_return_value;
	}

	friend bool QFile_virtualbase_seek(void* self, long long offset);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> handle__atEnd;

	// Subclass to allow providing a Go implementation
	virtual bool atEnd() const override {
		if (!handle__atEnd) {
			return QFile::atEnd();
		}

		bool callback_return_value = miqt_exec_callback_QFile_atEnd(this, handle__atEnd.value());
		return callback_return_value;
	}

	friend bool QFile_virtualbase_atEnd(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> handle__readData;

	// Subclass to allow providing a Go implementation
	virtual qint64 readData(char* data, qint64 maxlen) override {
		if (!handle__readData) {
			return QFile::readData(data, maxlen);
		}

		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);
		long long callback_return_value = miqt_exec_callback_QFile_readData(this, handle__readData.value(), sigval1, sigval2);
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QFile_virtualbase_readData(void* self, char* data, long long maxlen);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> handle__writeData;

	// Subclass to allow providing a Go implementation
	virtual qint64 writeData(const char* data, qint64 len) override {
		if (!handle__writeData) {
			return QFile::writeData(data, len);
		}

		const char* sigval1 = (const char*) data;
		qint64 len_ret = len;
		long long sigval2 = static_cast<long long>(len_ret);
		long long callback_return_value = miqt_exec_callback_QFile_writeData(this, handle__writeData.value(), sigval1, sigval2);
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QFile_virtualbase_writeData(void* self, const char* data, long long len);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> handle__readLineData;

	// Subclass to allow providing a Go implementation
	virtual qint64 readLineData(char* data, qint64 maxlen) override {
		if (!handle__readLineData) {
			return QFile::readLineData(data, maxlen);
		}

		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);
		long long callback_return_value = miqt_exec_callback_QFile_readLineData(this, handle__readLineData.value(), sigval1, sigval2);
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QFile_virtualbase_readLineData(void* self, char* data, long long maxlen);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> handle__reset;

	// Subclass to allow providing a Go implementation
	virtual bool reset() override {
		if (!handle__reset) {
			return QFile::reset();
		}

		bool callback_return_value = miqt_exec_callback_QFile_reset(this, handle__reset.value());
		return callback_return_value;
	}

	friend bool QFile_virtualbase_reset(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> handle__bytesAvailable;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesAvailable() const override {
		if (!handle__bytesAvailable) {
			return QFile::bytesAvailable();
		}

		long long callback_return_value = miqt_exec_callback_QFile_bytesAvailable(this, handle__bytesAvailable.value());
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QFile_virtualbase_bytesAvailable(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> handle__bytesToWrite;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesToWrite() const override {
		if (!handle__bytesToWrite) {
			return QFile::bytesToWrite();
		}

		long long callback_return_value = miqt_exec_callback_QFile_bytesToWrite(this, handle__bytesToWrite.value());
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QFile_virtualbase_bytesToWrite(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> handle__canReadLine;

	// Subclass to allow providing a Go implementation
	virtual bool canReadLine() const override {
		if (!handle__canReadLine) {
			return QFile::canReadLine();
		}

		bool callback_return_value = miqt_exec_callback_QFile_canReadLine(this, handle__canReadLine.value());
		return callback_return_value;
	}

	friend bool QFile_virtualbase_canReadLine(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> handle__waitForReadyRead;

	// Subclass to allow providing a Go implementation
	virtual bool waitForReadyRead(int msecs) override {
		if (!handle__waitForReadyRead) {
			return QFile::waitForReadyRead(msecs);
		}

		int sigval1 = msecs;
		bool callback_return_value = miqt_exec_callback_QFile_waitForReadyRead(this, handle__waitForReadyRead.value(), sigval1);
		return callback_return_value;
	}

	friend bool QFile_virtualbase_waitForReadyRead(void* self, int msecs);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> handle__waitForBytesWritten;

	// Subclass to allow providing a Go implementation
	virtual bool waitForBytesWritten(int msecs) override {
		if (!handle__waitForBytesWritten) {
			return QFile::waitForBytesWritten(msecs);
		}

		int sigval1 = msecs;
		bool callback_return_value = miqt_exec_callback_QFile_waitForBytesWritten(this, handle__waitForBytesWritten.value(), sigval1);
		return callback_return_value;
	}

	friend bool QFile_virtualbase_waitForBytesWritten(void* self, int msecs);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> handle__skipData;

	// Subclass to allow providing a Go implementation
	virtual qint64 skipData(qint64 maxSize) override {
		if (!handle__skipData) {
			return QFile::skipData(maxSize);
		}

		qint64 maxSize_ret = maxSize;
		long long sigval1 = static_cast<long long>(maxSize_ret);
		long long callback_return_value = miqt_exec_callback_QFile_skipData(this, handle__skipData.value(), sigval1);
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QFile_virtualbase_skipData(void* self, long long maxSize);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QFile::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QFile_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QFile_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QFile::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QFile_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QFile_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QFile::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QFile_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QFile_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QFile::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QFile_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QFile_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QFile::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QFile_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QFile_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QFile::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QFile_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QFile_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QFile::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QFile_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QFile_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QFile_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode);
	friend void QFile_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString);
	friend QObject* QFile_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QFile_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QFile_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QFile_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QFile* QFile_new() {
	return new (std::nothrow) MiqtVirtualQFile();
}

QFile* QFile_new2(struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new (std::nothrow) MiqtVirtualQFile(name_QString);
}

QFile* QFile_new3(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQFile(parent);
}

QFile* QFile_new4(struct miqt_string name, QObject* parent) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new (std::nothrow) MiqtVirtualQFile(name_QString, parent);
}

void QFile_virtbase(QFile* src, QFileDevice** outptr_QFileDevice) {
	*outptr_QFileDevice = static_cast<QFileDevice*>(src);
}

QMetaObject* QFile_metaObject(const QFile* self) {
	return (QMetaObject*) self->metaObject();
}

void* QFile_metacast(QFile* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QFile_tr(const char* s) {
	QString _ret = QFile::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFile_fileName(const QFile* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFile_setFileName(QFile* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setFileName(name_QString);
}

struct miqt_string QFile_encodeName(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QByteArray _qb = QFile::encodeName(fileName_QString);
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QFile_decodeName(struct miqt_string localFileName) {
	QByteArray localFileName_QByteArray(localFileName.data, localFileName.len);
	QString _ret = QFile::decodeName(localFileName_QByteArray);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFile_decodeNameWithLocalFileName(const char* localFileName) {
	QString _ret = QFile::decodeName(localFileName);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QFile_exists(const QFile* self) {
	return self->exists();
}

bool QFile_existsWithFileName(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return QFile::exists(fileName_QString);
}

struct miqt_string QFile_symLinkTarget(const QFile* self) {
	QString _ret = self->symLinkTarget();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFile_symLinkTargetWithFileName(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QString _ret = QFile::symLinkTarget(fileName_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QFile_remove(QFile* self) {
	return self->remove();
}

bool QFile_removeWithFileName(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return QFile::remove(fileName_QString);
}

bool QFile_moveToTrash(QFile* self) {
	return self->moveToTrash();
}

bool QFile_moveToTrashWithFileName(struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	return QFile::moveToTrash(fileName_QString);
}

bool QFile_rename(QFile* self, struct miqt_string newName) {
	QString newName_QString = QString::fromUtf8(newName.data, newName.len);
	return self->rename(newName_QString);
}

bool QFile_rename2(struct miqt_string oldName, struct miqt_string newName) {
	QString oldName_QString = QString::fromUtf8(oldName.data, oldName.len);
	QString newName_QString = QString::fromUtf8(newName.data, newName.len);
	return QFile::rename(oldName_QString, newName_QString);
}

bool QFile_link(QFile* self, struct miqt_string newName) {
	QString newName_QString = QString::fromUtf8(newName.data, newName.len);
	return self->link(newName_QString);
}

bool QFile_link2(struct miqt_string fileName, struct miqt_string newName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QString newName_QString = QString::fromUtf8(newName.data, newName.len);
	return QFile::link(fileName_QString, newName_QString);
}

bool QFile_copy(QFile* self, struct miqt_string newName) {
	QString newName_QString = QString::fromUtf8(newName.data, newName.len);
	return self->copy(newName_QString);
}

bool QFile_copy2(struct miqt_string fileName, struct miqt_string newName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	QString newName_QString = QString::fromUtf8(newName.data, newName.len);
	return QFile::copy(fileName_QString, newName_QString);
}

bool QFile_open(QFile* self, int flags) {
	return self->open(static_cast<QIODeviceBase::OpenMode>(flags));
}

bool QFile_open2(QFile* self, int flags, int permissions) {
	return self->open(static_cast<QIODeviceBase::OpenMode>(flags), static_cast<QFileDevice::Permissions>(permissions));
}

bool QFile_open4(QFile* self, int fd, int ioFlags) {
	return self->open(static_cast<int>(fd), static_cast<QIODeviceBase::OpenMode>(ioFlags));
}

long long QFile_size(const QFile* self) {
	qint64 _ret = self->size();
	return static_cast<long long>(_ret);
}

bool QFile_resize(QFile* self, long long sz) {
	return self->resize(static_cast<qint64>(sz));
}

bool QFile_resize2(struct miqt_string filename, long long sz) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	return QFile::resize(filename_QString, static_cast<qint64>(sz));
}

int QFile_permissions(const QFile* self) {
	QFileDevice::Permissions _ret = self->permissions();
	return static_cast<int>(_ret);
}

int QFile_permissionsWithFilename(struct miqt_string filename) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	QFileDevice::Permissions _ret = QFile::permissions(filename_QString);
	return static_cast<int>(_ret);
}

bool QFile_setPermissions(QFile* self, int permissionSpec) {
	return self->setPermissions(static_cast<QFileDevice::Permissions>(permissionSpec));
}

bool QFile_setPermissions2(struct miqt_string filename, int permissionSpec) {
	QString filename_QString = QString::fromUtf8(filename.data, filename.len);
	return QFile::setPermissions(filename_QString, static_cast<QFileDevice::Permissions>(permissionSpec));
}

struct miqt_string QFile_tr2(const char* s, const char* c) {
	QString _ret = QFile::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFile_tr3(const char* s, const char* c, int n) {
	QString _ret = QFile::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QFile_open6(QFile* self, int fd, int ioFlags, int handleFlags) {
	return self->open(static_cast<int>(fd), static_cast<QIODeviceBase::OpenMode>(ioFlags), static_cast<QFileDevice::FileHandleFlags>(handleFlags));
}

bool QFile_override_virtual_fileName(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> slot_handle(slot);
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__fileName = std::move(slot_handle);
	return true;
}

struct miqt_string QFile_virtualbase_fileName(const void* self) {
	QString _ret = static_cast<const MiqtVirtualQFile*>(self)->QFile::fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QFile_override_virtual_open(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> slot_handle(slot);
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__open = std::move(slot_handle);
	return true;
}

bool QFile_virtualbase_open(void* self, int flags) {
	return static_cast<MiqtVirtualQFile*>(self)->QFile::open(static_cast<MiqtVirtualQFile::OpenMode>(flags));
}

bool QFile_override_virtual_size(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> slot_handle(slot);
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__size = std::move(slot_handle);
	return true;
}

long long QFile_virtualbase_size(const void* self) {
	qint64 _ret = static_cast<const MiqtVirtualQFile*>(self)->QFile::size();
	return static_cast<long long>(_ret);
}

bool QFile_override_virtual_resize(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> slot_handle(slot);
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resize = std::move(slot_handle);
	return true;
}

bool QFile_virtualbase_resize(void* self, long long sz) {
	return static_cast<MiqtVirtualQFile*>(self)->QFile::resize(static_cast<qint64>(sz));
}

bool QFile_override_virtual_permissions(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> slot_handle(slot);
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__permissions = std::move(slot_handle);
	return true;
}

int QFile_virtualbase_permissions(const void* self) {
	MiqtVirtualQFile::Permissions _ret = static_cast<const MiqtVirtualQFile*>(self)->QFile::permissions();
	return static_cast<int>(_ret);
}

bool QFile_override_virtual_setPermissions(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> slot_handle(slot);
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setPermissions = std::move(slot_handle);
	return true;
}

bool QFile_virtualbase_setPermissions(void* self, int permissionSpec) {
	return static_cast<MiqtVirtualQFile*>(self)->QFile::setPermissions(static_cast<MiqtVirtualQFile::Permissions>(permissionSpec));
}

bool QFile_override_virtual_close(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> slot_handle(slot);
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__close = std::move(slot_handle);
	return true;
}

void QFile_virtualbase_close(void* self) {
	static_cast<MiqtVirtualQFile*>(self)->QFile::close();
}

bool QFile_override_virtual_isSequential(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> slot_handle(slot);
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isSequential = std::move(slot_handle);
	return true;
}

bool QFile_virtualbase_isSequential(const void* self) {
	return static_cast<const MiqtVirtualQFile*>(self)->QFile::isSequential();
}

bool QFile_override_virtual_pos(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> slot_handle(slot);
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__pos = std::move(slot_handle);
	return true;
}

long long QFile_virtualbase_pos(const void* self) {
	qint64 _ret = static_cast<const MiqtVirtualQFile*>(self)->QFile::pos();
	return static_cast<long long>(_ret);
}

bool QFile_override_virtual_seek(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> slot_handle(slot);
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__seek = std::move(slot_handle);
	return true;
}

bool QFile_virtualbase_seek(void* self, long long offset) {
	return static_cast<MiqtVirtualQFile*>(self)->QFile::seek(static_cast<qint64>(offset));
}

bool QFile_override_virtual_atEnd(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> slot_handle(slot);
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__atEnd = std::move(slot_handle);
	return true;
}

bool QFile_virtualbase_atEnd(const void* self) {
	return static_cast<const MiqtVirtualQFile*>(self)->QFile::atEnd();
}

bool QFile_override_virtual_readData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> slot_handle(slot);
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__readData = std::move(slot_handle);
	return true;
}

long long QFile_virtualbase_readData(void* self, char* data, long long maxlen) {
	qint64 _ret = static_cast<MiqtVirtualQFile*>(self)->QFile::readData(data, static_cast<qint64>(maxlen));
	return static_cast<long long>(_ret);
}

bool QFile_override_virtual_writeData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> slot_handle(slot);
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__writeData = std::move(slot_handle);
	return true;
}

long long QFile_virtualbase_writeData(void* self, const char* data, long long len) {
	qint64 _ret = static_cast<MiqtVirtualQFile*>(self)->QFile::writeData(data, static_cast<qint64>(len));
	return static_cast<long long>(_ret);
}

bool QFile_override_virtual_readLineData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> slot_handle(slot);
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__readLineData = std::move(slot_handle);
	return true;
}

long long QFile_virtualbase_readLineData(void* self, char* data, long long maxlen) {
	qint64 _ret = static_cast<MiqtVirtualQFile*>(self)->QFile::readLineData(data, static_cast<qint64>(maxlen));
	return static_cast<long long>(_ret);
}

bool QFile_override_virtual_reset(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> slot_handle(slot);
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__reset = std::move(slot_handle);
	return true;
}

bool QFile_virtualbase_reset(void* self) {
	return static_cast<MiqtVirtualQFile*>(self)->QFile::reset();
}

bool QFile_override_virtual_bytesAvailable(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> slot_handle(slot);
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__bytesAvailable = std::move(slot_handle);
	return true;
}

long long QFile_virtualbase_bytesAvailable(const void* self) {
	qint64 _ret = static_cast<const MiqtVirtualQFile*>(self)->QFile::bytesAvailable();
	return static_cast<long long>(_ret);
}

bool QFile_override_virtual_bytesToWrite(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> slot_handle(slot);
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__bytesToWrite = std::move(slot_handle);
	return true;
}

long long QFile_virtualbase_bytesToWrite(const void* self) {
	qint64 _ret = static_cast<const MiqtVirtualQFile*>(self)->QFile::bytesToWrite();
	return static_cast<long long>(_ret);
}

bool QFile_override_virtual_canReadLine(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> slot_handle(slot);
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__canReadLine = std::move(slot_handle);
	return true;
}

bool QFile_virtualbase_canReadLine(const void* self) {
	return static_cast<const MiqtVirtualQFile*>(self)->QFile::canReadLine();
}

bool QFile_override_virtual_waitForReadyRead(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> slot_handle(slot);
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__waitForReadyRead = std::move(slot_handle);
	return true;
}

bool QFile_virtualbase_waitForReadyRead(void* self, int msecs) {
	return static_cast<MiqtVirtualQFile*>(self)->QFile::waitForReadyRead(static_cast<int>(msecs));
}

bool QFile_override_virtual_waitForBytesWritten(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> slot_handle(slot);
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__waitForBytesWritten = std::move(slot_handle);
	return true;
}

bool QFile_virtualbase_waitForBytesWritten(void* self, int msecs) {
	return static_cast<MiqtVirtualQFile*>(self)->QFile::waitForBytesWritten(static_cast<int>(msecs));
}

bool QFile_override_virtual_skipData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> slot_handle(slot);
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__skipData = std::move(slot_handle);
	return true;
}

long long QFile_virtualbase_skipData(void* self, long long maxSize) {
	qint64 _ret = static_cast<MiqtVirtualQFile*>(self)->QFile::skipData(static_cast<qint64>(maxSize));
	return static_cast<long long>(_ret);
}

bool QFile_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> slot_handle(slot);
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QFile_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQFile*>(self)->QFile::event(event);
}

bool QFile_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> slot_handle(slot);
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QFile_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQFile*>(self)->QFile::eventFilter(watched, event);
}

bool QFile_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> slot_handle(slot);
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QFile_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQFile*>(self)->QFile::timerEvent(event);
}

bool QFile_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> slot_handle(slot);
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QFile_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQFile*>(self)->QFile::childEvent(event);
}

bool QFile_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> slot_handle(slot);
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QFile_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQFile*>(self)->QFile::customEvent(event);
}

bool QFile_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> slot_handle(slot);
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QFile_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQFile*>(self)->QFile::connectNotify(*signal);
}

bool QFile_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFile> slot_handle(slot);
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QFile_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQFile*>(self)->QFile::disconnectNotify(*signal);
}

void QFile_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setOpenMode(static_cast<MiqtVirtualQFile::OpenMode>(openMode));
}

void QFile_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
		QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
	self_cast->setErrorString(errorString_QString);
}

QObject* QFile_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QFile_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QFile_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QFile_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQFile* self_cast = dynamic_cast<MiqtVirtualQFile*>( (QFile*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QFile_delete(QFile* self) {
	delete self;
}

