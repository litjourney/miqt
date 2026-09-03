#include <memory>
#include <utility>
#include <QChildEvent>
#include <QEvent>
#include <QFileDevice>
#include <QIODevice>
#include <QIODeviceBase>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSaveFile>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qsavefile.h>
#include "gen_qsavefile.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QSaveFile(intptr_t);
struct miqt_string miqt_exec_callback_QSaveFile_fileName(const QSaveFile*, intptr_t);
bool miqt_exec_callback_QSaveFile_open(QSaveFile*, intptr_t, int);
long long miqt_exec_callback_QSaveFile_writeData(QSaveFile*, intptr_t, const char*, long long);
bool miqt_exec_callback_QSaveFile_isSequential(const QSaveFile*, intptr_t);
long long miqt_exec_callback_QSaveFile_pos(const QSaveFile*, intptr_t);
bool miqt_exec_callback_QSaveFile_seek(QSaveFile*, intptr_t, long long);
bool miqt_exec_callback_QSaveFile_atEnd(const QSaveFile*, intptr_t);
long long miqt_exec_callback_QSaveFile_size(const QSaveFile*, intptr_t);
bool miqt_exec_callback_QSaveFile_resize(QSaveFile*, intptr_t, long long);
int miqt_exec_callback_QSaveFile_permissions(const QSaveFile*, intptr_t);
bool miqt_exec_callback_QSaveFile_setPermissions(QSaveFile*, intptr_t, int);
long long miqt_exec_callback_QSaveFile_readData(QSaveFile*, intptr_t, char*, long long);
long long miqt_exec_callback_QSaveFile_readLineData(QSaveFile*, intptr_t, char*, long long);
bool miqt_exec_callback_QSaveFile_reset(QSaveFile*, intptr_t);
long long miqt_exec_callback_QSaveFile_bytesAvailable(const QSaveFile*, intptr_t);
long long miqt_exec_callback_QSaveFile_bytesToWrite(const QSaveFile*, intptr_t);
bool miqt_exec_callback_QSaveFile_canReadLine(const QSaveFile*, intptr_t);
bool miqt_exec_callback_QSaveFile_waitForReadyRead(QSaveFile*, intptr_t, int);
bool miqt_exec_callback_QSaveFile_waitForBytesWritten(QSaveFile*, intptr_t, int);
long long miqt_exec_callback_QSaveFile_skipData(QSaveFile*, intptr_t, long long);
bool miqt_exec_callback_QSaveFile_event(QSaveFile*, intptr_t, QEvent*);
bool miqt_exec_callback_QSaveFile_eventFilter(QSaveFile*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSaveFile_timerEvent(QSaveFile*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSaveFile_childEvent(QSaveFile*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSaveFile_customEvent(QSaveFile*, intptr_t, QEvent*);
void miqt_exec_callback_QSaveFile_connectNotify(QSaveFile*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSaveFile_disconnectNotify(QSaveFile*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSaveFile final : public QSaveFile {
public:

	MiqtVirtualQSaveFile(const QString& name): QSaveFile(name) {}
	MiqtVirtualQSaveFile(): QSaveFile() {}
	MiqtVirtualQSaveFile(const QString& name, QObject* parent): QSaveFile(name, parent) {}
	MiqtVirtualQSaveFile(QObject* parent): QSaveFile(parent) {}

	virtual ~MiqtVirtualQSaveFile() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> handle__fileName;

	// Subclass to allow providing a Go implementation
	virtual QString fileName() const override {
		if (!handle__fileName) {
			return QSaveFile::fileName();
		}

		struct miqt_string callback_return_value = miqt_exec_callback_QSaveFile_fileName(this, handle__fileName.value());
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		free(callback_return_value.data);
		return callback_return_value_QString;
	}

	friend struct miqt_string QSaveFile_virtualbase_fileName(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> handle__open;

	// Subclass to allow providing a Go implementation
	virtual bool open(QIODeviceBase::OpenMode flags) override {
		if (!handle__open) {
			return QSaveFile::open(flags);
		}

		QIODeviceBase::OpenMode flags_ret = flags;
		int sigval1 = static_cast<int>(flags_ret);
		bool callback_return_value = miqt_exec_callback_QSaveFile_open(this, handle__open.value(), sigval1);
		return callback_return_value;
	}

	friend bool QSaveFile_virtualbase_open(void* self, int flags);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> handle__writeData;

	// Subclass to allow providing a Go implementation
	virtual qint64 writeData(const char* data, qint64 len) override {
		if (!handle__writeData) {
			return QSaveFile::writeData(data, len);
		}

		const char* sigval1 = (const char*) data;
		qint64 len_ret = len;
		long long sigval2 = static_cast<long long>(len_ret);
		long long callback_return_value = miqt_exec_callback_QSaveFile_writeData(this, handle__writeData.value(), sigval1, sigval2);
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QSaveFile_virtualbase_writeData(void* self, const char* data, long long len);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> handle__isSequential;

	// Subclass to allow providing a Go implementation
	virtual bool isSequential() const override {
		if (!handle__isSequential) {
			return QSaveFile::isSequential();
		}

		bool callback_return_value = miqt_exec_callback_QSaveFile_isSequential(this, handle__isSequential.value());
		return callback_return_value;
	}

	friend bool QSaveFile_virtualbase_isSequential(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> handle__pos;

	// Subclass to allow providing a Go implementation
	virtual qint64 pos() const override {
		if (!handle__pos) {
			return QSaveFile::pos();
		}

		long long callback_return_value = miqt_exec_callback_QSaveFile_pos(this, handle__pos.value());
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QSaveFile_virtualbase_pos(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> handle__seek;

	// Subclass to allow providing a Go implementation
	virtual bool seek(qint64 offset) override {
		if (!handle__seek) {
			return QSaveFile::seek(offset);
		}

		qint64 offset_ret = offset;
		long long sigval1 = static_cast<long long>(offset_ret);
		bool callback_return_value = miqt_exec_callback_QSaveFile_seek(this, handle__seek.value(), sigval1);
		return callback_return_value;
	}

	friend bool QSaveFile_virtualbase_seek(void* self, long long offset);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> handle__atEnd;

	// Subclass to allow providing a Go implementation
	virtual bool atEnd() const override {
		if (!handle__atEnd) {
			return QSaveFile::atEnd();
		}

		bool callback_return_value = miqt_exec_callback_QSaveFile_atEnd(this, handle__atEnd.value());
		return callback_return_value;
	}

	friend bool QSaveFile_virtualbase_atEnd(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> handle__size;

	// Subclass to allow providing a Go implementation
	virtual qint64 size() const override {
		if (!handle__size) {
			return QSaveFile::size();
		}

		long long callback_return_value = miqt_exec_callback_QSaveFile_size(this, handle__size.value());
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QSaveFile_virtualbase_size(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> handle__resize;

	// Subclass to allow providing a Go implementation
	virtual bool resize(qint64 sz) override {
		if (!handle__resize) {
			return QSaveFile::resize(sz);
		}

		qint64 sz_ret = sz;
		long long sigval1 = static_cast<long long>(sz_ret);
		bool callback_return_value = miqt_exec_callback_QSaveFile_resize(this, handle__resize.value(), sigval1);
		return callback_return_value;
	}

	friend bool QSaveFile_virtualbase_resize(void* self, long long sz);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> handle__permissions;

	// Subclass to allow providing a Go implementation
	virtual QFileDevice::Permissions permissions() const override {
		if (!handle__permissions) {
			return QSaveFile::permissions();
		}

		int callback_return_value = miqt_exec_callback_QSaveFile_permissions(this, handle__permissions.value());
		return static_cast<QFileDevice::Permissions>(callback_return_value);
	}

	friend int QSaveFile_virtualbase_permissions(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> handle__setPermissions;

	// Subclass to allow providing a Go implementation
	virtual bool setPermissions(QFileDevice::Permissions permissionSpec) override {
		if (!handle__setPermissions) {
			return QSaveFile::setPermissions(permissionSpec);
		}

		QFileDevice::Permissions permissionSpec_ret = permissionSpec;
		int sigval1 = static_cast<int>(permissionSpec_ret);
		bool callback_return_value = miqt_exec_callback_QSaveFile_setPermissions(this, handle__setPermissions.value(), sigval1);
		return callback_return_value;
	}

	friend bool QSaveFile_virtualbase_setPermissions(void* self, int permissionSpec);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> handle__readData;

	// Subclass to allow providing a Go implementation
	virtual qint64 readData(char* data, qint64 maxlen) override {
		if (!handle__readData) {
			return QSaveFile::readData(data, maxlen);
		}

		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);
		long long callback_return_value = miqt_exec_callback_QSaveFile_readData(this, handle__readData.value(), sigval1, sigval2);
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QSaveFile_virtualbase_readData(void* self, char* data, long long maxlen);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> handle__readLineData;

	// Subclass to allow providing a Go implementation
	virtual qint64 readLineData(char* data, qint64 maxlen) override {
		if (!handle__readLineData) {
			return QSaveFile::readLineData(data, maxlen);
		}

		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);
		long long callback_return_value = miqt_exec_callback_QSaveFile_readLineData(this, handle__readLineData.value(), sigval1, sigval2);
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QSaveFile_virtualbase_readLineData(void* self, char* data, long long maxlen);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> handle__reset;

	// Subclass to allow providing a Go implementation
	virtual bool reset() override {
		if (!handle__reset) {
			return QSaveFile::reset();
		}

		bool callback_return_value = miqt_exec_callback_QSaveFile_reset(this, handle__reset.value());
		return callback_return_value;
	}

	friend bool QSaveFile_virtualbase_reset(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> handle__bytesAvailable;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesAvailable() const override {
		if (!handle__bytesAvailable) {
			return QSaveFile::bytesAvailable();
		}

		long long callback_return_value = miqt_exec_callback_QSaveFile_bytesAvailable(this, handle__bytesAvailable.value());
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QSaveFile_virtualbase_bytesAvailable(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> handle__bytesToWrite;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesToWrite() const override {
		if (!handle__bytesToWrite) {
			return QSaveFile::bytesToWrite();
		}

		long long callback_return_value = miqt_exec_callback_QSaveFile_bytesToWrite(this, handle__bytesToWrite.value());
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QSaveFile_virtualbase_bytesToWrite(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> handle__canReadLine;

	// Subclass to allow providing a Go implementation
	virtual bool canReadLine() const override {
		if (!handle__canReadLine) {
			return QSaveFile::canReadLine();
		}

		bool callback_return_value = miqt_exec_callback_QSaveFile_canReadLine(this, handle__canReadLine.value());
		return callback_return_value;
	}

	friend bool QSaveFile_virtualbase_canReadLine(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> handle__waitForReadyRead;

	// Subclass to allow providing a Go implementation
	virtual bool waitForReadyRead(int msecs) override {
		if (!handle__waitForReadyRead) {
			return QSaveFile::waitForReadyRead(msecs);
		}

		int sigval1 = msecs;
		bool callback_return_value = miqt_exec_callback_QSaveFile_waitForReadyRead(this, handle__waitForReadyRead.value(), sigval1);
		return callback_return_value;
	}

	friend bool QSaveFile_virtualbase_waitForReadyRead(void* self, int msecs);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> handle__waitForBytesWritten;

	// Subclass to allow providing a Go implementation
	virtual bool waitForBytesWritten(int msecs) override {
		if (!handle__waitForBytesWritten) {
			return QSaveFile::waitForBytesWritten(msecs);
		}

		int sigval1 = msecs;
		bool callback_return_value = miqt_exec_callback_QSaveFile_waitForBytesWritten(this, handle__waitForBytesWritten.value(), sigval1);
		return callback_return_value;
	}

	friend bool QSaveFile_virtualbase_waitForBytesWritten(void* self, int msecs);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> handle__skipData;

	// Subclass to allow providing a Go implementation
	virtual qint64 skipData(qint64 maxSize) override {
		if (!handle__skipData) {
			return QSaveFile::skipData(maxSize);
		}

		qint64 maxSize_ret = maxSize;
		long long sigval1 = static_cast<long long>(maxSize_ret);
		long long callback_return_value = miqt_exec_callback_QSaveFile_skipData(this, handle__skipData.value(), sigval1);
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QSaveFile_virtualbase_skipData(void* self, long long maxSize);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QSaveFile::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QSaveFile_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QSaveFile_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QSaveFile::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QSaveFile_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QSaveFile_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QSaveFile::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QSaveFile_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QSaveFile_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QSaveFile::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QSaveFile_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QSaveFile_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QSaveFile::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QSaveFile_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QSaveFile_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QSaveFile::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QSaveFile_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QSaveFile_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QSaveFile::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QSaveFile_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QSaveFile_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QSaveFile_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode);
	friend void QSaveFile_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString);
	friend QObject* QSaveFile_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QSaveFile_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QSaveFile_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QSaveFile_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QSaveFile* QSaveFile_new(struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new (std::nothrow) MiqtVirtualQSaveFile(name_QString);
}

QSaveFile* QSaveFile_new2() {
	return new (std::nothrow) MiqtVirtualQSaveFile();
}

QSaveFile* QSaveFile_new3(struct miqt_string name, QObject* parent) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return new (std::nothrow) MiqtVirtualQSaveFile(name_QString, parent);
}

QSaveFile* QSaveFile_new4(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQSaveFile(parent);
}

void QSaveFile_virtbase(QSaveFile* src, QFileDevice** outptr_QFileDevice) {
	*outptr_QFileDevice = static_cast<QFileDevice*>(src);
}

QMetaObject* QSaveFile_metaObject(const QSaveFile* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSaveFile_metacast(QSaveFile* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSaveFile_tr(const char* s) {
	QString _ret = QSaveFile::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSaveFile_fileName(const QSaveFile* self) {
	QString _ret = self->fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSaveFile_setFileName(QSaveFile* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->setFileName(name_QString);
}

bool QSaveFile_open(QSaveFile* self, int flags) {
	return self->open(static_cast<QIODeviceBase::OpenMode>(flags));
}

bool QSaveFile_commit(QSaveFile* self) {
	return self->commit();
}

void QSaveFile_cancelWriting(QSaveFile* self) {
	self->cancelWriting();
}

void QSaveFile_setDirectWriteFallback(QSaveFile* self, bool enabled) {
	self->setDirectWriteFallback(enabled);
}

bool QSaveFile_directWriteFallback(const QSaveFile* self) {
	return self->directWriteFallback();
}

struct miqt_string QSaveFile_tr2(const char* s, const char* c) {
	QString _ret = QSaveFile::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSaveFile_tr3(const char* s, const char* c, int n) {
	QString _ret = QSaveFile::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSaveFile_override_virtual_fileName(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> slot_handle(slot);
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__fileName = std::move(slot_handle);
	return true;
}

struct miqt_string QSaveFile_virtualbase_fileName(const void* self) {
	QString _ret = static_cast<const MiqtVirtualQSaveFile*>(self)->QSaveFile::fileName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSaveFile_override_virtual_open(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> slot_handle(slot);
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__open = std::move(slot_handle);
	return true;
}

bool QSaveFile_virtualbase_open(void* self, int flags) {
	return static_cast<MiqtVirtualQSaveFile*>(self)->QSaveFile::open(static_cast<MiqtVirtualQSaveFile::OpenMode>(flags));
}

bool QSaveFile_override_virtual_writeData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> slot_handle(slot);
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__writeData = std::move(slot_handle);
	return true;
}

long long QSaveFile_virtualbase_writeData(void* self, const char* data, long long len) {
	qint64 _ret = static_cast<MiqtVirtualQSaveFile*>(self)->QSaveFile::writeData(data, static_cast<qint64>(len));
	return static_cast<long long>(_ret);
}

bool QSaveFile_override_virtual_isSequential(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> slot_handle(slot);
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isSequential = std::move(slot_handle);
	return true;
}

bool QSaveFile_virtualbase_isSequential(const void* self) {
	return static_cast<const MiqtVirtualQSaveFile*>(self)->QSaveFile::isSequential();
}

bool QSaveFile_override_virtual_pos(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> slot_handle(slot);
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__pos = std::move(slot_handle);
	return true;
}

long long QSaveFile_virtualbase_pos(const void* self) {
	qint64 _ret = static_cast<const MiqtVirtualQSaveFile*>(self)->QSaveFile::pos();
	return static_cast<long long>(_ret);
}

bool QSaveFile_override_virtual_seek(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> slot_handle(slot);
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__seek = std::move(slot_handle);
	return true;
}

bool QSaveFile_virtualbase_seek(void* self, long long offset) {
	return static_cast<MiqtVirtualQSaveFile*>(self)->QSaveFile::seek(static_cast<qint64>(offset));
}

bool QSaveFile_override_virtual_atEnd(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> slot_handle(slot);
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__atEnd = std::move(slot_handle);
	return true;
}

bool QSaveFile_virtualbase_atEnd(const void* self) {
	return static_cast<const MiqtVirtualQSaveFile*>(self)->QSaveFile::atEnd();
}

bool QSaveFile_override_virtual_size(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> slot_handle(slot);
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__size = std::move(slot_handle);
	return true;
}

long long QSaveFile_virtualbase_size(const void* self) {
	qint64 _ret = static_cast<const MiqtVirtualQSaveFile*>(self)->QSaveFile::size();
	return static_cast<long long>(_ret);
}

bool QSaveFile_override_virtual_resize(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> slot_handle(slot);
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resize = std::move(slot_handle);
	return true;
}

bool QSaveFile_virtualbase_resize(void* self, long long sz) {
	return static_cast<MiqtVirtualQSaveFile*>(self)->QSaveFile::resize(static_cast<qint64>(sz));
}

bool QSaveFile_override_virtual_permissions(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> slot_handle(slot);
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__permissions = std::move(slot_handle);
	return true;
}

int QSaveFile_virtualbase_permissions(const void* self) {
	MiqtVirtualQSaveFile::Permissions _ret = static_cast<const MiqtVirtualQSaveFile*>(self)->QSaveFile::permissions();
	return static_cast<int>(_ret);
}

bool QSaveFile_override_virtual_setPermissions(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> slot_handle(slot);
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setPermissions = std::move(slot_handle);
	return true;
}

bool QSaveFile_virtualbase_setPermissions(void* self, int permissionSpec) {
	return static_cast<MiqtVirtualQSaveFile*>(self)->QSaveFile::setPermissions(static_cast<MiqtVirtualQSaveFile::Permissions>(permissionSpec));
}

bool QSaveFile_override_virtual_readData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> slot_handle(slot);
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__readData = std::move(slot_handle);
	return true;
}

long long QSaveFile_virtualbase_readData(void* self, char* data, long long maxlen) {
	qint64 _ret = static_cast<MiqtVirtualQSaveFile*>(self)->QSaveFile::readData(data, static_cast<qint64>(maxlen));
	return static_cast<long long>(_ret);
}

bool QSaveFile_override_virtual_readLineData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> slot_handle(slot);
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__readLineData = std::move(slot_handle);
	return true;
}

long long QSaveFile_virtualbase_readLineData(void* self, char* data, long long maxlen) {
	qint64 _ret = static_cast<MiqtVirtualQSaveFile*>(self)->QSaveFile::readLineData(data, static_cast<qint64>(maxlen));
	return static_cast<long long>(_ret);
}

bool QSaveFile_override_virtual_reset(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> slot_handle(slot);
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__reset = std::move(slot_handle);
	return true;
}

bool QSaveFile_virtualbase_reset(void* self) {
	return static_cast<MiqtVirtualQSaveFile*>(self)->QSaveFile::reset();
}

bool QSaveFile_override_virtual_bytesAvailable(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> slot_handle(slot);
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__bytesAvailable = std::move(slot_handle);
	return true;
}

long long QSaveFile_virtualbase_bytesAvailable(const void* self) {
	qint64 _ret = static_cast<const MiqtVirtualQSaveFile*>(self)->QSaveFile::bytesAvailable();
	return static_cast<long long>(_ret);
}

bool QSaveFile_override_virtual_bytesToWrite(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> slot_handle(slot);
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__bytesToWrite = std::move(slot_handle);
	return true;
}

long long QSaveFile_virtualbase_bytesToWrite(const void* self) {
	qint64 _ret = static_cast<const MiqtVirtualQSaveFile*>(self)->QSaveFile::bytesToWrite();
	return static_cast<long long>(_ret);
}

bool QSaveFile_override_virtual_canReadLine(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> slot_handle(slot);
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__canReadLine = std::move(slot_handle);
	return true;
}

bool QSaveFile_virtualbase_canReadLine(const void* self) {
	return static_cast<const MiqtVirtualQSaveFile*>(self)->QSaveFile::canReadLine();
}

bool QSaveFile_override_virtual_waitForReadyRead(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> slot_handle(slot);
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__waitForReadyRead = std::move(slot_handle);
	return true;
}

bool QSaveFile_virtualbase_waitForReadyRead(void* self, int msecs) {
	return static_cast<MiqtVirtualQSaveFile*>(self)->QSaveFile::waitForReadyRead(static_cast<int>(msecs));
}

bool QSaveFile_override_virtual_waitForBytesWritten(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> slot_handle(slot);
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__waitForBytesWritten = std::move(slot_handle);
	return true;
}

bool QSaveFile_virtualbase_waitForBytesWritten(void* self, int msecs) {
	return static_cast<MiqtVirtualQSaveFile*>(self)->QSaveFile::waitForBytesWritten(static_cast<int>(msecs));
}

bool QSaveFile_override_virtual_skipData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> slot_handle(slot);
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__skipData = std::move(slot_handle);
	return true;
}

long long QSaveFile_virtualbase_skipData(void* self, long long maxSize) {
	qint64 _ret = static_cast<MiqtVirtualQSaveFile*>(self)->QSaveFile::skipData(static_cast<qint64>(maxSize));
	return static_cast<long long>(_ret);
}

bool QSaveFile_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> slot_handle(slot);
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QSaveFile_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQSaveFile*>(self)->QSaveFile::event(event);
}

bool QSaveFile_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> slot_handle(slot);
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QSaveFile_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQSaveFile*>(self)->QSaveFile::eventFilter(watched, event);
}

bool QSaveFile_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> slot_handle(slot);
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QSaveFile_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQSaveFile*>(self)->QSaveFile::timerEvent(event);
}

bool QSaveFile_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> slot_handle(slot);
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QSaveFile_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQSaveFile*>(self)->QSaveFile::childEvent(event);
}

bool QSaveFile_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> slot_handle(slot);
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QSaveFile_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQSaveFile*>(self)->QSaveFile::customEvent(event);
}

bool QSaveFile_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> slot_handle(slot);
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QSaveFile_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQSaveFile*>(self)->QSaveFile::connectNotify(*signal);
}

bool QSaveFile_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSaveFile> slot_handle(slot);
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QSaveFile_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQSaveFile*>(self)->QSaveFile::disconnectNotify(*signal);
}

void QSaveFile_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setOpenMode(static_cast<MiqtVirtualQSaveFile::OpenMode>(openMode));
}

void QSaveFile_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
		QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
	self_cast->setErrorString(errorString_QString);
}

QObject* QSaveFile_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QSaveFile_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QSaveFile_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QSaveFile_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQSaveFile* self_cast = dynamic_cast<MiqtVirtualQSaveFile*>( (QSaveFile*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QSaveFile_delete(QSaveFile* self) {
	delete self;
}

