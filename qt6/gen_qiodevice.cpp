#include <memory>
#include <utility>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QIODeviceBase>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qiodevice.h>
#include "gen_qiodevice.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QIODevice(intptr_t);
void miqt_exec_callback_QIODevice_readyRead(intptr_t);
void miqt_exec_callback_QIODevice_channelReadyRead(intptr_t, int);
void miqt_exec_callback_QIODevice_bytesWritten(intptr_t, long long);
void miqt_exec_callback_QIODevice_channelBytesWritten(intptr_t, int, long long);
void miqt_exec_callback_QIODevice_aboutToClose(intptr_t);
void miqt_exec_callback_QIODevice_readChannelFinished(intptr_t);
bool miqt_exec_callback_QIODevice_isSequential(const QIODevice*, intptr_t);
bool miqt_exec_callback_QIODevice_open(QIODevice*, intptr_t, int);
void miqt_exec_callback_QIODevice_close(QIODevice*, intptr_t);
long long miqt_exec_callback_QIODevice_pos(const QIODevice*, intptr_t);
long long miqt_exec_callback_QIODevice_size(const QIODevice*, intptr_t);
bool miqt_exec_callback_QIODevice_seek(QIODevice*, intptr_t, long long);
bool miqt_exec_callback_QIODevice_atEnd(const QIODevice*, intptr_t);
bool miqt_exec_callback_QIODevice_reset(QIODevice*, intptr_t);
long long miqt_exec_callback_QIODevice_bytesAvailable(const QIODevice*, intptr_t);
long long miqt_exec_callback_QIODevice_bytesToWrite(const QIODevice*, intptr_t);
bool miqt_exec_callback_QIODevice_canReadLine(const QIODevice*, intptr_t);
bool miqt_exec_callback_QIODevice_waitForReadyRead(QIODevice*, intptr_t, int);
bool miqt_exec_callback_QIODevice_waitForBytesWritten(QIODevice*, intptr_t, int);
long long miqt_exec_callback_QIODevice_readData(QIODevice*, intptr_t, char*, long long);
long long miqt_exec_callback_QIODevice_readLineData(QIODevice*, intptr_t, char*, long long);
long long miqt_exec_callback_QIODevice_skipData(QIODevice*, intptr_t, long long);
long long miqt_exec_callback_QIODevice_writeData(QIODevice*, intptr_t, const char*, long long);
bool miqt_exec_callback_QIODevice_event(QIODevice*, intptr_t, QEvent*);
bool miqt_exec_callback_QIODevice_eventFilter(QIODevice*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QIODevice_timerEvent(QIODevice*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QIODevice_childEvent(QIODevice*, intptr_t, QChildEvent*);
void miqt_exec_callback_QIODevice_customEvent(QIODevice*, intptr_t, QEvent*);
void miqt_exec_callback_QIODevice_connectNotify(QIODevice*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QIODevice_disconnectNotify(QIODevice*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQIODevice final : public QIODevice {
public:

	MiqtVirtualQIODevice(): QIODevice() {}
	MiqtVirtualQIODevice(QObject* parent): QIODevice(parent) {}

	virtual ~MiqtVirtualQIODevice() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> handle__isSequential;

	// Subclass to allow providing a Go implementation
	virtual bool isSequential() const override {
		if (!handle__isSequential) {
			return QIODevice::isSequential();
		}

		bool callback_return_value = miqt_exec_callback_QIODevice_isSequential(this, handle__isSequential.value());
		return callback_return_value;
	}

	friend bool QIODevice_virtualbase_isSequential(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> handle__open;

	// Subclass to allow providing a Go implementation
	virtual bool open(QIODeviceBase::OpenMode mode) override {
		if (!handle__open) {
			return QIODevice::open(mode);
		}

		QIODeviceBase::OpenMode mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);
		bool callback_return_value = miqt_exec_callback_QIODevice_open(this, handle__open.value(), sigval1);
		return callback_return_value;
	}

	friend bool QIODevice_virtualbase_open(void* self, int mode);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> handle__close;

	// Subclass to allow providing a Go implementation
	virtual void close() override {
		if (!handle__close) {
			QIODevice::close();
			return;
		}

		miqt_exec_callback_QIODevice_close(this, handle__close.value());

	}

	friend void QIODevice_virtualbase_close(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> handle__pos;

	// Subclass to allow providing a Go implementation
	virtual qint64 pos() const override {
		if (!handle__pos) {
			return QIODevice::pos();
		}

		long long callback_return_value = miqt_exec_callback_QIODevice_pos(this, handle__pos.value());
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QIODevice_virtualbase_pos(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> handle__size;

	// Subclass to allow providing a Go implementation
	virtual qint64 size() const override {
		if (!handle__size) {
			return QIODevice::size();
		}

		long long callback_return_value = miqt_exec_callback_QIODevice_size(this, handle__size.value());
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QIODevice_virtualbase_size(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> handle__seek;

	// Subclass to allow providing a Go implementation
	virtual bool seek(qint64 pos) override {
		if (!handle__seek) {
			return QIODevice::seek(pos);
		}

		qint64 pos_ret = pos;
		long long sigval1 = static_cast<long long>(pos_ret);
		bool callback_return_value = miqt_exec_callback_QIODevice_seek(this, handle__seek.value(), sigval1);
		return callback_return_value;
	}

	friend bool QIODevice_virtualbase_seek(void* self, long long pos);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> handle__atEnd;

	// Subclass to allow providing a Go implementation
	virtual bool atEnd() const override {
		if (!handle__atEnd) {
			return QIODevice::atEnd();
		}

		bool callback_return_value = miqt_exec_callback_QIODevice_atEnd(this, handle__atEnd.value());
		return callback_return_value;
	}

	friend bool QIODevice_virtualbase_atEnd(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> handle__reset;

	// Subclass to allow providing a Go implementation
	virtual bool reset() override {
		if (!handle__reset) {
			return QIODevice::reset();
		}

		bool callback_return_value = miqt_exec_callback_QIODevice_reset(this, handle__reset.value());
		return callback_return_value;
	}

	friend bool QIODevice_virtualbase_reset(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> handle__bytesAvailable;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesAvailable() const override {
		if (!handle__bytesAvailable) {
			return QIODevice::bytesAvailable();
		}

		long long callback_return_value = miqt_exec_callback_QIODevice_bytesAvailable(this, handle__bytesAvailable.value());
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QIODevice_virtualbase_bytesAvailable(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> handle__bytesToWrite;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesToWrite() const override {
		if (!handle__bytesToWrite) {
			return QIODevice::bytesToWrite();
		}

		long long callback_return_value = miqt_exec_callback_QIODevice_bytesToWrite(this, handle__bytesToWrite.value());
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QIODevice_virtualbase_bytesToWrite(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> handle__canReadLine;

	// Subclass to allow providing a Go implementation
	virtual bool canReadLine() const override {
		if (!handle__canReadLine) {
			return QIODevice::canReadLine();
		}

		bool callback_return_value = miqt_exec_callback_QIODevice_canReadLine(this, handle__canReadLine.value());
		return callback_return_value;
	}

	friend bool QIODevice_virtualbase_canReadLine(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> handle__waitForReadyRead;

	// Subclass to allow providing a Go implementation
	virtual bool waitForReadyRead(int msecs) override {
		if (!handle__waitForReadyRead) {
			return QIODevice::waitForReadyRead(msecs);
		}

		int sigval1 = msecs;
		bool callback_return_value = miqt_exec_callback_QIODevice_waitForReadyRead(this, handle__waitForReadyRead.value(), sigval1);
		return callback_return_value;
	}

	friend bool QIODevice_virtualbase_waitForReadyRead(void* self, int msecs);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> handle__waitForBytesWritten;

	// Subclass to allow providing a Go implementation
	virtual bool waitForBytesWritten(int msecs) override {
		if (!handle__waitForBytesWritten) {
			return QIODevice::waitForBytesWritten(msecs);
		}

		int sigval1 = msecs;
		bool callback_return_value = miqt_exec_callback_QIODevice_waitForBytesWritten(this, handle__waitForBytesWritten.value(), sigval1);
		return callback_return_value;
	}

	friend bool QIODevice_virtualbase_waitForBytesWritten(void* self, int msecs);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> handle__readData;

	// Subclass to allow providing a Go implementation
	virtual qint64 readData(char* data, qint64 maxlen) override {
		if (!handle__readData) {
			return 0; // Pure virtual, there is no base we can call
		}

		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);
		long long callback_return_value = miqt_exec_callback_QIODevice_readData(this, handle__readData.value(), sigval1, sigval2);
		return static_cast<qint64>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> handle__readLineData;

	// Subclass to allow providing a Go implementation
	virtual qint64 readLineData(char* data, qint64 maxlen) override {
		if (!handle__readLineData) {
			return QIODevice::readLineData(data, maxlen);
		}

		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);
		long long callback_return_value = miqt_exec_callback_QIODevice_readLineData(this, handle__readLineData.value(), sigval1, sigval2);
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QIODevice_virtualbase_readLineData(void* self, char* data, long long maxlen);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> handle__skipData;

	// Subclass to allow providing a Go implementation
	virtual qint64 skipData(qint64 maxSize) override {
		if (!handle__skipData) {
			return QIODevice::skipData(maxSize);
		}

		qint64 maxSize_ret = maxSize;
		long long sigval1 = static_cast<long long>(maxSize_ret);
		long long callback_return_value = miqt_exec_callback_QIODevice_skipData(this, handle__skipData.value(), sigval1);
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QIODevice_virtualbase_skipData(void* self, long long maxSize);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> handle__writeData;

	// Subclass to allow providing a Go implementation
	virtual qint64 writeData(const char* data, qint64 len) override {
		if (!handle__writeData) {
			return 0; // Pure virtual, there is no base we can call
		}

		const char* sigval1 = (const char*) data;
		qint64 len_ret = len;
		long long sigval2 = static_cast<long long>(len_ret);
		long long callback_return_value = miqt_exec_callback_QIODevice_writeData(this, handle__writeData.value(), sigval1, sigval2);
		return static_cast<qint64>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QIODevice::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QIODevice_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QIODevice_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QIODevice::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QIODevice_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QIODevice_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QIODevice::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QIODevice_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QIODevice_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QIODevice::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QIODevice_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QIODevice_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QIODevice::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QIODevice_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QIODevice_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QIODevice::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QIODevice_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QIODevice_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QIODevice::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QIODevice_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QIODevice_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QIODevice_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode);
	friend void QIODevice_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString);
	friend QObject* QIODevice_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QIODevice_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QIODevice_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QIODevice_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QIODevice* QIODevice_new() {
	return new (std::nothrow) MiqtVirtualQIODevice();
}

QIODevice* QIODevice_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQIODevice(parent);
}

void QIODevice_virtbase(QIODevice* src, QObject** outptr_QObject, QIODeviceBase** outptr_QIODeviceBase) {
	*outptr_QObject = static_cast<QObject*>(src);
	*outptr_QIODeviceBase = static_cast<QIODeviceBase*>(src);
}

QMetaObject* QIODevice_metaObject(const QIODevice* self) {
	return (QMetaObject*) self->metaObject();
}

void* QIODevice_metacast(QIODevice* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QIODevice_tr(const char* s) {
	QString _ret = QIODevice::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QIODevice_openMode(const QIODevice* self) {
	QIODeviceBase::OpenMode _ret = self->openMode();
	return static_cast<int>(_ret);
}

void QIODevice_setTextModeEnabled(QIODevice* self, bool enabled) {
	self->setTextModeEnabled(enabled);
}

bool QIODevice_isTextModeEnabled(const QIODevice* self) {
	return self->isTextModeEnabled();
}

bool QIODevice_isOpen(const QIODevice* self) {
	return self->isOpen();
}

bool QIODevice_isReadable(const QIODevice* self) {
	return self->isReadable();
}

bool QIODevice_isWritable(const QIODevice* self) {
	return self->isWritable();
}

bool QIODevice_isSequential(const QIODevice* self) {
	return self->isSequential();
}

int QIODevice_readChannelCount(const QIODevice* self) {
	return self->readChannelCount();
}

int QIODevice_writeChannelCount(const QIODevice* self) {
	return self->writeChannelCount();
}

int QIODevice_currentReadChannel(const QIODevice* self) {
	return self->currentReadChannel();
}

void QIODevice_setCurrentReadChannel(QIODevice* self, int channel) {
	self->setCurrentReadChannel(static_cast<int>(channel));
}

int QIODevice_currentWriteChannel(const QIODevice* self) {
	return self->currentWriteChannel();
}

void QIODevice_setCurrentWriteChannel(QIODevice* self, int channel) {
	self->setCurrentWriteChannel(static_cast<int>(channel));
}

bool QIODevice_open(QIODevice* self, int mode) {
	return self->open(static_cast<QIODeviceBase::OpenMode>(mode));
}

void QIODevice_close(QIODevice* self) {
	self->close();
}

long long QIODevice_pos(const QIODevice* self) {
	qint64 _ret = self->pos();
	return static_cast<long long>(_ret);
}

long long QIODevice_size(const QIODevice* self) {
	qint64 _ret = self->size();
	return static_cast<long long>(_ret);
}

bool QIODevice_seek(QIODevice* self, long long pos) {
	return self->seek(static_cast<qint64>(pos));
}

bool QIODevice_atEnd(const QIODevice* self) {
	return self->atEnd();
}

bool QIODevice_reset(QIODevice* self) {
	return self->reset();
}

long long QIODevice_bytesAvailable(const QIODevice* self) {
	qint64 _ret = self->bytesAvailable();
	return static_cast<long long>(_ret);
}

long long QIODevice_bytesToWrite(const QIODevice* self) {
	qint64 _ret = self->bytesToWrite();
	return static_cast<long long>(_ret);
}

long long QIODevice_read(QIODevice* self, char* data, long long maxlen) {
	qint64 _ret = self->read(data, static_cast<qint64>(maxlen));
	return static_cast<long long>(_ret);
}

struct miqt_string QIODevice_readWithMaxlen(QIODevice* self, long long maxlen) {
	QByteArray _qb = self->read(static_cast<qint64>(maxlen));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QIODevice_readAll(QIODevice* self) {
	QByteArray _qb = self->readAll();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

long long QIODevice_readLine(QIODevice* self, char* data, long long maxlen) {
	qint64 _ret = self->readLine(data, static_cast<qint64>(maxlen));
	return static_cast<long long>(_ret);
}

struct miqt_string QIODevice_readLine2(QIODevice* self) {
	QByteArray _qb = self->readLine();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

bool QIODevice_canReadLine(const QIODevice* self) {
	return self->canReadLine();
}

void QIODevice_startTransaction(QIODevice* self) {
	self->startTransaction();
}

void QIODevice_commitTransaction(QIODevice* self) {
	self->commitTransaction();
}

void QIODevice_rollbackTransaction(QIODevice* self) {
	self->rollbackTransaction();
}

bool QIODevice_isTransactionStarted(const QIODevice* self) {
	return self->isTransactionStarted();
}

long long QIODevice_write(QIODevice* self, const char* data, long long len) {
	qint64 _ret = self->write(data, static_cast<qint64>(len));
	return static_cast<long long>(_ret);
}

long long QIODevice_writeWithData(QIODevice* self, const char* data) {
	qint64 _ret = self->write(data);
	return static_cast<long long>(_ret);
}

long long QIODevice_write2(QIODevice* self, struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	qint64 _ret = self->write(data_QByteArray);
	return static_cast<long long>(_ret);
}

long long QIODevice_peek(QIODevice* self, char* data, long long maxlen) {
	qint64 _ret = self->peek(data, static_cast<qint64>(maxlen));
	return static_cast<long long>(_ret);
}

struct miqt_string QIODevice_peekWithMaxlen(QIODevice* self, long long maxlen) {
	QByteArray _qb = self->peek(static_cast<qint64>(maxlen));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

long long QIODevice_skip(QIODevice* self, long long maxSize) {
	qint64 _ret = self->skip(static_cast<qint64>(maxSize));
	return static_cast<long long>(_ret);
}

bool QIODevice_waitForReadyRead(QIODevice* self, int msecs) {
	return self->waitForReadyRead(static_cast<int>(msecs));
}

bool QIODevice_waitForBytesWritten(QIODevice* self, int msecs) {
	return self->waitForBytesWritten(static_cast<int>(msecs));
}

void QIODevice_ungetChar(QIODevice* self, char c) {
	self->ungetChar(static_cast<char>(c));
}

bool QIODevice_putChar(QIODevice* self, char c) {
	return self->putChar(static_cast<char>(c));
}

bool QIODevice_getChar(QIODevice* self, char* c) {
	return self->getChar(c);
}

struct miqt_string QIODevice_errorString(const QIODevice* self) {
	QString _ret = self->errorString();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QIODevice_readyRead(QIODevice* self) {
	self->readyRead();
}

void* QIODevice_connect_readyRead(QIODevice* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice>>(slot);
	return new QMetaObject::Connection(QIODevice::connect(self, static_cast<void (QIODevice::*)()>(&QIODevice::readyRead), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QIODevice_readyRead(slot);
	}));
}

void QIODevice_channelReadyRead(QIODevice* self, int channel) {
	self->channelReadyRead(static_cast<int>(channel));
}

void* QIODevice_connect_channelReadyRead(QIODevice* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice>>(slot);
	return new QMetaObject::Connection(QIODevice::connect(self, static_cast<void (QIODevice::*)(int)>(&QIODevice::channelReadyRead), self, [slot_handle](int channel) {
		intptr_t slot = slot_handle->value();
		int sigval1 = channel;
		miqt_exec_callback_QIODevice_channelReadyRead(slot, sigval1);
	}));
}

void QIODevice_bytesWritten(QIODevice* self, long long bytes) {
	self->bytesWritten(static_cast<qint64>(bytes));
}

void* QIODevice_connect_bytesWritten(QIODevice* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice>>(slot);
	return new QMetaObject::Connection(QIODevice::connect(self, static_cast<void (QIODevice::*)(qint64)>(&QIODevice::bytesWritten), self, [slot_handle](qint64 bytes) {
		intptr_t slot = slot_handle->value();
		qint64 bytes_ret = bytes;
		long long sigval1 = static_cast<long long>(bytes_ret);
		miqt_exec_callback_QIODevice_bytesWritten(slot, sigval1);
	}));
}

void QIODevice_channelBytesWritten(QIODevice* self, int channel, long long bytes) {
	self->channelBytesWritten(static_cast<int>(channel), static_cast<qint64>(bytes));
}

void* QIODevice_connect_channelBytesWritten(QIODevice* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice>>(slot);
	return new QMetaObject::Connection(QIODevice::connect(self, static_cast<void (QIODevice::*)(int, qint64)>(&QIODevice::channelBytesWritten), self, [slot_handle](int channel, qint64 bytes) {
		intptr_t slot = slot_handle->value();
		int sigval1 = channel;
		qint64 bytes_ret = bytes;
		long long sigval2 = static_cast<long long>(bytes_ret);
		miqt_exec_callback_QIODevice_channelBytesWritten(slot, sigval1, sigval2);
	}));
}

void QIODevice_aboutToClose(QIODevice* self) {
	self->aboutToClose();
}

void* QIODevice_connect_aboutToClose(QIODevice* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice>>(slot);
	return new QMetaObject::Connection(QIODevice::connect(self, static_cast<void (QIODevice::*)()>(&QIODevice::aboutToClose), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QIODevice_aboutToClose(slot);
	}));
}

void QIODevice_readChannelFinished(QIODevice* self) {
	self->readChannelFinished();
}

void* QIODevice_connect_readChannelFinished(QIODevice* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice>>(slot);
	return new QMetaObject::Connection(QIODevice::connect(self, static_cast<void (QIODevice::*)()>(&QIODevice::readChannelFinished), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QIODevice_readChannelFinished(slot);
	}));
}

struct miqt_string QIODevice_tr2(const char* s, const char* c) {
	QString _ret = QIODevice::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QIODevice_tr3(const char* s, const char* c, int n) {
	QString _ret = QIODevice::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QIODevice_readLineWithMaxlen(QIODevice* self, long long maxlen) {
	QByteArray _qb = self->readLine(static_cast<qint64>(maxlen));
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

bool QIODevice_override_virtual_isSequential(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> slot_handle(slot);
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isSequential = std::move(slot_handle);
	return true;
}

bool QIODevice_virtualbase_isSequential(const void* self) {
	return static_cast<const MiqtVirtualQIODevice*>(self)->QIODevice::isSequential();
}

bool QIODevice_override_virtual_open(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> slot_handle(slot);
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__open = std::move(slot_handle);
	return true;
}

bool QIODevice_virtualbase_open(void* self, int mode) {
	return static_cast<MiqtVirtualQIODevice*>(self)->QIODevice::open(static_cast<MiqtVirtualQIODevice::OpenMode>(mode));
}

bool QIODevice_override_virtual_close(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> slot_handle(slot);
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__close = std::move(slot_handle);
	return true;
}

void QIODevice_virtualbase_close(void* self) {
	static_cast<MiqtVirtualQIODevice*>(self)->QIODevice::close();
}

bool QIODevice_override_virtual_pos(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> slot_handle(slot);
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__pos = std::move(slot_handle);
	return true;
}

long long QIODevice_virtualbase_pos(const void* self) {
	qint64 _ret = static_cast<const MiqtVirtualQIODevice*>(self)->QIODevice::pos();
	return static_cast<long long>(_ret);
}

bool QIODevice_override_virtual_size(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> slot_handle(slot);
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__size = std::move(slot_handle);
	return true;
}

long long QIODevice_virtualbase_size(const void* self) {
	qint64 _ret = static_cast<const MiqtVirtualQIODevice*>(self)->QIODevice::size();
	return static_cast<long long>(_ret);
}

bool QIODevice_override_virtual_seek(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> slot_handle(slot);
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__seek = std::move(slot_handle);
	return true;
}

bool QIODevice_virtualbase_seek(void* self, long long pos) {
	return static_cast<MiqtVirtualQIODevice*>(self)->QIODevice::seek(static_cast<qint64>(pos));
}

bool QIODevice_override_virtual_atEnd(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> slot_handle(slot);
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__atEnd = std::move(slot_handle);
	return true;
}

bool QIODevice_virtualbase_atEnd(const void* self) {
	return static_cast<const MiqtVirtualQIODevice*>(self)->QIODevice::atEnd();
}

bool QIODevice_override_virtual_reset(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> slot_handle(slot);
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__reset = std::move(slot_handle);
	return true;
}

bool QIODevice_virtualbase_reset(void* self) {
	return static_cast<MiqtVirtualQIODevice*>(self)->QIODevice::reset();
}

bool QIODevice_override_virtual_bytesAvailable(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> slot_handle(slot);
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__bytesAvailable = std::move(slot_handle);
	return true;
}

long long QIODevice_virtualbase_bytesAvailable(const void* self) {
	qint64 _ret = static_cast<const MiqtVirtualQIODevice*>(self)->QIODevice::bytesAvailable();
	return static_cast<long long>(_ret);
}

bool QIODevice_override_virtual_bytesToWrite(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> slot_handle(slot);
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__bytesToWrite = std::move(slot_handle);
	return true;
}

long long QIODevice_virtualbase_bytesToWrite(const void* self) {
	qint64 _ret = static_cast<const MiqtVirtualQIODevice*>(self)->QIODevice::bytesToWrite();
	return static_cast<long long>(_ret);
}

bool QIODevice_override_virtual_canReadLine(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> slot_handle(slot);
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__canReadLine = std::move(slot_handle);
	return true;
}

bool QIODevice_virtualbase_canReadLine(const void* self) {
	return static_cast<const MiqtVirtualQIODevice*>(self)->QIODevice::canReadLine();
}

bool QIODevice_override_virtual_waitForReadyRead(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> slot_handle(slot);
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__waitForReadyRead = std::move(slot_handle);
	return true;
}

bool QIODevice_virtualbase_waitForReadyRead(void* self, int msecs) {
	return static_cast<MiqtVirtualQIODevice*>(self)->QIODevice::waitForReadyRead(static_cast<int>(msecs));
}

bool QIODevice_override_virtual_waitForBytesWritten(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> slot_handle(slot);
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__waitForBytesWritten = std::move(slot_handle);
	return true;
}

bool QIODevice_virtualbase_waitForBytesWritten(void* self, int msecs) {
	return static_cast<MiqtVirtualQIODevice*>(self)->QIODevice::waitForBytesWritten(static_cast<int>(msecs));
}

bool QIODevice_override_virtual_readData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> slot_handle(slot);
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__readData = std::move(slot_handle);
	return true;
}

bool QIODevice_override_virtual_readLineData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> slot_handle(slot);
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__readLineData = std::move(slot_handle);
	return true;
}

long long QIODevice_virtualbase_readLineData(void* self, char* data, long long maxlen) {
	qint64 _ret = static_cast<MiqtVirtualQIODevice*>(self)->QIODevice::readLineData(data, static_cast<qint64>(maxlen));
	return static_cast<long long>(_ret);
}

bool QIODevice_override_virtual_skipData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> slot_handle(slot);
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__skipData = std::move(slot_handle);
	return true;
}

long long QIODevice_virtualbase_skipData(void* self, long long maxSize) {
	qint64 _ret = static_cast<MiqtVirtualQIODevice*>(self)->QIODevice::skipData(static_cast<qint64>(maxSize));
	return static_cast<long long>(_ret);
}

bool QIODevice_override_virtual_writeData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> slot_handle(slot);
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__writeData = std::move(slot_handle);
	return true;
}

bool QIODevice_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> slot_handle(slot);
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QIODevice_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQIODevice*>(self)->QIODevice::event(event);
}

bool QIODevice_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> slot_handle(slot);
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QIODevice_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQIODevice*>(self)->QIODevice::eventFilter(watched, event);
}

bool QIODevice_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> slot_handle(slot);
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QIODevice_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQIODevice*>(self)->QIODevice::timerEvent(event);
}

bool QIODevice_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> slot_handle(slot);
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QIODevice_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQIODevice*>(self)->QIODevice::childEvent(event);
}

bool QIODevice_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> slot_handle(slot);
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QIODevice_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQIODevice*>(self)->QIODevice::customEvent(event);
}

bool QIODevice_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> slot_handle(slot);
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QIODevice_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQIODevice*>(self)->QIODevice::connectNotify(*signal);
}

bool QIODevice_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QIODevice> slot_handle(slot);
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QIODevice_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQIODevice*>(self)->QIODevice::disconnectNotify(*signal);
}

void QIODevice_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setOpenMode(static_cast<MiqtVirtualQIODevice::OpenMode>(openMode));
}

void QIODevice_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
		QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
	self_cast->setErrorString(errorString_QString);
}

QObject* QIODevice_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QIODevice_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QIODevice_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QIODevice_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQIODevice* self_cast = dynamic_cast<MiqtVirtualQIODevice*>( (QIODevice*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QIODevice_delete(QIODevice* self) {
	delete self;
}

