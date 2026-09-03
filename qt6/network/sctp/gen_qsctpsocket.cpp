#include <memory>
#include <utility>
#include <QAbstractSocket>
#include <QChildEvent>
#include <QEvent>
#include <QHostAddress>
#include <QIODevice>
#include <QIODeviceBase>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNetworkDatagram>
#include <QObject>
#include <QSctpSocket>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTcpSocket>
#include <QTimerEvent>
#include <QVariant>
#include <qsctpsocket.h>
#include "gen_qsctpsocket.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QSctpSocket(intptr_t);
void miqt_exec_callback_QSctpSocket_close(QSctpSocket*, intptr_t);
void miqt_exec_callback_QSctpSocket_disconnectFromHost(QSctpSocket*, intptr_t);
long long miqt_exec_callback_QSctpSocket_readData(QSctpSocket*, intptr_t, char*, long long);
long long miqt_exec_callback_QSctpSocket_readLineData(QSctpSocket*, intptr_t, char*, long long);
void miqt_exec_callback_QSctpSocket_resume(QSctpSocket*, intptr_t);
bool miqt_exec_callback_QSctpSocket_bind(QSctpSocket*, intptr_t, QHostAddress*, unsigned short, int);
void miqt_exec_callback_QSctpSocket_connectToHost(QSctpSocket*, intptr_t, struct miqt_string, unsigned short, int, int);
long long miqt_exec_callback_QSctpSocket_bytesAvailable(const QSctpSocket*, intptr_t);
long long miqt_exec_callback_QSctpSocket_bytesToWrite(const QSctpSocket*, intptr_t);
void miqt_exec_callback_QSctpSocket_setReadBufferSize(QSctpSocket*, intptr_t, long long);
intptr_t miqt_exec_callback_QSctpSocket_socketDescriptor(const QSctpSocket*, intptr_t);
bool miqt_exec_callback_QSctpSocket_setSocketDescriptor(QSctpSocket*, intptr_t, intptr_t, int, int);
void miqt_exec_callback_QSctpSocket_setSocketOption(QSctpSocket*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QSctpSocket_socketOption(QSctpSocket*, intptr_t, int);
bool miqt_exec_callback_QSctpSocket_isSequential(const QSctpSocket*, intptr_t);
bool miqt_exec_callback_QSctpSocket_waitForConnected(QSctpSocket*, intptr_t, int);
bool miqt_exec_callback_QSctpSocket_waitForReadyRead(QSctpSocket*, intptr_t, int);
bool miqt_exec_callback_QSctpSocket_waitForBytesWritten(QSctpSocket*, intptr_t, int);
bool miqt_exec_callback_QSctpSocket_waitForDisconnected(QSctpSocket*, intptr_t, int);
long long miqt_exec_callback_QSctpSocket_skipData(QSctpSocket*, intptr_t, long long);
long long miqt_exec_callback_QSctpSocket_writeData(QSctpSocket*, intptr_t, const char*, long long);
bool miqt_exec_callback_QSctpSocket_open(QSctpSocket*, intptr_t, int);
long long miqt_exec_callback_QSctpSocket_pos(const QSctpSocket*, intptr_t);
long long miqt_exec_callback_QSctpSocket_size(const QSctpSocket*, intptr_t);
bool miqt_exec_callback_QSctpSocket_seek(QSctpSocket*, intptr_t, long long);
bool miqt_exec_callback_QSctpSocket_atEnd(const QSctpSocket*, intptr_t);
bool miqt_exec_callback_QSctpSocket_reset(QSctpSocket*, intptr_t);
bool miqt_exec_callback_QSctpSocket_canReadLine(const QSctpSocket*, intptr_t);
bool miqt_exec_callback_QSctpSocket_event(QSctpSocket*, intptr_t, QEvent*);
bool miqt_exec_callback_QSctpSocket_eventFilter(QSctpSocket*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QSctpSocket_timerEvent(QSctpSocket*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QSctpSocket_childEvent(QSctpSocket*, intptr_t, QChildEvent*);
void miqt_exec_callback_QSctpSocket_customEvent(QSctpSocket*, intptr_t, QEvent*);
void miqt_exec_callback_QSctpSocket_connectNotify(QSctpSocket*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QSctpSocket_disconnectNotify(QSctpSocket*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQSctpSocket final : public QSctpSocket {
public:

	MiqtVirtualQSctpSocket(): QSctpSocket() {}
	MiqtVirtualQSctpSocket(QObject* parent): QSctpSocket(parent) {}

	virtual ~MiqtVirtualQSctpSocket() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> handle__close;

	// Subclass to allow providing a Go implementation
	virtual void close() override {
		if (!handle__close) {
			QSctpSocket::close();
			return;
		}

		miqt_exec_callback_QSctpSocket_close(this, handle__close.value());

	}

	friend void QSctpSocket_virtualbase_close(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> handle__disconnectFromHost;

	// Subclass to allow providing a Go implementation
	virtual void disconnectFromHost() override {
		if (!handle__disconnectFromHost) {
			QSctpSocket::disconnectFromHost();
			return;
		}

		miqt_exec_callback_QSctpSocket_disconnectFromHost(this, handle__disconnectFromHost.value());

	}

	friend void QSctpSocket_virtualbase_disconnectFromHost(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> handle__readData;

	// Subclass to allow providing a Go implementation
	virtual qint64 readData(char* data, qint64 maxlen) override {
		if (!handle__readData) {
			return QSctpSocket::readData(data, maxlen);
		}

		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);
		long long callback_return_value = miqt_exec_callback_QSctpSocket_readData(this, handle__readData.value(), sigval1, sigval2);
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QSctpSocket_virtualbase_readData(void* self, char* data, long long maxlen);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> handle__readLineData;

	// Subclass to allow providing a Go implementation
	virtual qint64 readLineData(char* data, qint64 maxlen) override {
		if (!handle__readLineData) {
			return QSctpSocket::readLineData(data, maxlen);
		}

		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);
		long long callback_return_value = miqt_exec_callback_QSctpSocket_readLineData(this, handle__readLineData.value(), sigval1, sigval2);
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QSctpSocket_virtualbase_readLineData(void* self, char* data, long long maxlen);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> handle__resume;

	// Subclass to allow providing a Go implementation
	virtual void resume() override {
		if (!handle__resume) {
			QSctpSocket::resume();
			return;
		}

		miqt_exec_callback_QSctpSocket_resume(this, handle__resume.value());

	}

	friend void QSctpSocket_virtualbase_resume(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> handle__bind;

	// Subclass to allow providing a Go implementation
	virtual bool bind(const QHostAddress& address, quint16 port, QAbstractSocket::BindMode mode) override {
		if (!handle__bind) {
			return QSctpSocket::bind(address, port, mode);
		}

		const QHostAddress& address_ret = address;
		// Cast returned reference into pointer
		QHostAddress* sigval1 = const_cast<QHostAddress*>(&address_ret);
		quint16 port_ret = port;
		unsigned short sigval2 = static_cast<unsigned short>(port_ret);
		QAbstractSocket::BindMode mode_ret = mode;
		int sigval3 = static_cast<int>(mode_ret);
		bool callback_return_value = miqt_exec_callback_QSctpSocket_bind(this, handle__bind.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QSctpSocket_virtualbase_bind(void* self, QHostAddress* address, unsigned short port, int mode);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> handle__connectToHost;

	// Subclass to allow providing a Go implementation
	virtual void connectToHost(const QString& hostName, quint16 port, QIODeviceBase::OpenMode mode, QAbstractSocket::NetworkLayerProtocol protocol) override {
		if (!handle__connectToHost) {
			QSctpSocket::connectToHost(hostName, port, mode, protocol);
			return;
		}

		const QString hostName_ret = hostName;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray hostName_b = hostName_ret.toUtf8();
		struct miqt_string hostName_ms;
		hostName_ms.len = hostName_b.length();
		hostName_ms.data = static_cast<char*>(malloc(hostName_ms.len));
		memcpy(hostName_ms.data, hostName_b.data(), hostName_ms.len);
		struct miqt_string sigval1 = hostName_ms;
		quint16 port_ret = port;
		unsigned short sigval2 = static_cast<unsigned short>(port_ret);
		QIODeviceBase::OpenMode mode_ret = mode;
		int sigval3 = static_cast<int>(mode_ret);
		QAbstractSocket::NetworkLayerProtocol protocol_ret = protocol;
		int sigval4 = static_cast<int>(protocol_ret);
		miqt_exec_callback_QSctpSocket_connectToHost(this, handle__connectToHost.value(), sigval1, sigval2, sigval3, sigval4);

	}

	friend void QSctpSocket_virtualbase_connectToHost(void* self, struct miqt_string hostName, unsigned short port, int mode, int protocol);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> handle__bytesAvailable;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesAvailable() const override {
		if (!handle__bytesAvailable) {
			return QSctpSocket::bytesAvailable();
		}

		long long callback_return_value = miqt_exec_callback_QSctpSocket_bytesAvailable(this, handle__bytesAvailable.value());
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QSctpSocket_virtualbase_bytesAvailable(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> handle__bytesToWrite;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesToWrite() const override {
		if (!handle__bytesToWrite) {
			return QSctpSocket::bytesToWrite();
		}

		long long callback_return_value = miqt_exec_callback_QSctpSocket_bytesToWrite(this, handle__bytesToWrite.value());
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QSctpSocket_virtualbase_bytesToWrite(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> handle__setReadBufferSize;

	// Subclass to allow providing a Go implementation
	virtual void setReadBufferSize(qint64 size) override {
		if (!handle__setReadBufferSize) {
			QSctpSocket::setReadBufferSize(size);
			return;
		}

		qint64 size_ret = size;
		long long sigval1 = static_cast<long long>(size_ret);
		miqt_exec_callback_QSctpSocket_setReadBufferSize(this, handle__setReadBufferSize.value(), sigval1);

	}

	friend void QSctpSocket_virtualbase_setReadBufferSize(void* self, long long size);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> handle__socketDescriptor;

	// Subclass to allow providing a Go implementation
	virtual qintptr socketDescriptor() const override {
		if (!handle__socketDescriptor) {
			return QSctpSocket::socketDescriptor();
		}

		intptr_t callback_return_value = miqt_exec_callback_QSctpSocket_socketDescriptor(this, handle__socketDescriptor.value());
		return (qintptr)(callback_return_value);
	}

	friend intptr_t QSctpSocket_virtualbase_socketDescriptor(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> handle__setSocketDescriptor;

	// Subclass to allow providing a Go implementation
	virtual bool setSocketDescriptor(qintptr socketDescriptor, QAbstractSocket::SocketState state, QIODeviceBase::OpenMode openMode) override {
		if (!handle__setSocketDescriptor) {
			return QSctpSocket::setSocketDescriptor(socketDescriptor, state, openMode);
		}

		qintptr socketDescriptor_ret = socketDescriptor;
		intptr_t sigval1 = (intptr_t)(socketDescriptor_ret);
		QAbstractSocket::SocketState state_ret = state;
		int sigval2 = static_cast<int>(state_ret);
		QIODeviceBase::OpenMode openMode_ret = openMode;
		int sigval3 = static_cast<int>(openMode_ret);
		bool callback_return_value = miqt_exec_callback_QSctpSocket_setSocketDescriptor(this, handle__setSocketDescriptor.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QSctpSocket_virtualbase_setSocketDescriptor(void* self, intptr_t socketDescriptor, int state, int openMode);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> handle__setSocketOption;

	// Subclass to allow providing a Go implementation
	virtual void setSocketOption(QAbstractSocket::SocketOption option, const QVariant& value) override {
		if (!handle__setSocketOption) {
			QSctpSocket::setSocketOption(option, value);
			return;
		}

		QAbstractSocket::SocketOption option_ret = option;
		int sigval1 = static_cast<int>(option_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		miqt_exec_callback_QSctpSocket_setSocketOption(this, handle__setSocketOption.value(), sigval1, sigval2);

	}

	friend void QSctpSocket_virtualbase_setSocketOption(void* self, int option, QVariant* value);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> handle__socketOption;

	// Subclass to allow providing a Go implementation
	virtual QVariant socketOption(QAbstractSocket::SocketOption option) override {
		if (!handle__socketOption) {
			return QSctpSocket::socketOption(option);
		}

		QAbstractSocket::SocketOption option_ret = option;
		int sigval1 = static_cast<int>(option_ret);
		QVariant* callback_return_value = miqt_exec_callback_QSctpSocket_socketOption(this, handle__socketOption.value(), sigval1);
		return *callback_return_value;
	}

	friend QVariant* QSctpSocket_virtualbase_socketOption(void* self, int option);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> handle__isSequential;

	// Subclass to allow providing a Go implementation
	virtual bool isSequential() const override {
		if (!handle__isSequential) {
			return QSctpSocket::isSequential();
		}

		bool callback_return_value = miqt_exec_callback_QSctpSocket_isSequential(this, handle__isSequential.value());
		return callback_return_value;
	}

	friend bool QSctpSocket_virtualbase_isSequential(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> handle__waitForConnected;

	// Subclass to allow providing a Go implementation
	virtual bool waitForConnected(int msecs) override {
		if (!handle__waitForConnected) {
			return QSctpSocket::waitForConnected(msecs);
		}

		int sigval1 = msecs;
		bool callback_return_value = miqt_exec_callback_QSctpSocket_waitForConnected(this, handle__waitForConnected.value(), sigval1);
		return callback_return_value;
	}

	friend bool QSctpSocket_virtualbase_waitForConnected(void* self, int msecs);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> handle__waitForReadyRead;

	// Subclass to allow providing a Go implementation
	virtual bool waitForReadyRead(int msecs) override {
		if (!handle__waitForReadyRead) {
			return QSctpSocket::waitForReadyRead(msecs);
		}

		int sigval1 = msecs;
		bool callback_return_value = miqt_exec_callback_QSctpSocket_waitForReadyRead(this, handle__waitForReadyRead.value(), sigval1);
		return callback_return_value;
	}

	friend bool QSctpSocket_virtualbase_waitForReadyRead(void* self, int msecs);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> handle__waitForBytesWritten;

	// Subclass to allow providing a Go implementation
	virtual bool waitForBytesWritten(int msecs) override {
		if (!handle__waitForBytesWritten) {
			return QSctpSocket::waitForBytesWritten(msecs);
		}

		int sigval1 = msecs;
		bool callback_return_value = miqt_exec_callback_QSctpSocket_waitForBytesWritten(this, handle__waitForBytesWritten.value(), sigval1);
		return callback_return_value;
	}

	friend bool QSctpSocket_virtualbase_waitForBytesWritten(void* self, int msecs);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> handle__waitForDisconnected;

	// Subclass to allow providing a Go implementation
	virtual bool waitForDisconnected(int msecs) override {
		if (!handle__waitForDisconnected) {
			return QSctpSocket::waitForDisconnected(msecs);
		}

		int sigval1 = msecs;
		bool callback_return_value = miqt_exec_callback_QSctpSocket_waitForDisconnected(this, handle__waitForDisconnected.value(), sigval1);
		return callback_return_value;
	}

	friend bool QSctpSocket_virtualbase_waitForDisconnected(void* self, int msecs);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> handle__skipData;

	// Subclass to allow providing a Go implementation
	virtual qint64 skipData(qint64 maxSize) override {
		if (!handle__skipData) {
			return QSctpSocket::skipData(maxSize);
		}

		qint64 maxSize_ret = maxSize;
		long long sigval1 = static_cast<long long>(maxSize_ret);
		long long callback_return_value = miqt_exec_callback_QSctpSocket_skipData(this, handle__skipData.value(), sigval1);
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QSctpSocket_virtualbase_skipData(void* self, long long maxSize);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> handle__writeData;

	// Subclass to allow providing a Go implementation
	virtual qint64 writeData(const char* data, qint64 len) override {
		if (!handle__writeData) {
			return QSctpSocket::writeData(data, len);
		}

		const char* sigval1 = (const char*) data;
		qint64 len_ret = len;
		long long sigval2 = static_cast<long long>(len_ret);
		long long callback_return_value = miqt_exec_callback_QSctpSocket_writeData(this, handle__writeData.value(), sigval1, sigval2);
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QSctpSocket_virtualbase_writeData(void* self, const char* data, long long len);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> handle__open;

	// Subclass to allow providing a Go implementation
	virtual bool open(QIODeviceBase::OpenMode mode) override {
		if (!handle__open) {
			return QSctpSocket::open(mode);
		}

		QIODeviceBase::OpenMode mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);
		bool callback_return_value = miqt_exec_callback_QSctpSocket_open(this, handle__open.value(), sigval1);
		return callback_return_value;
	}

	friend bool QSctpSocket_virtualbase_open(void* self, int mode);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> handle__pos;

	// Subclass to allow providing a Go implementation
	virtual qint64 pos() const override {
		if (!handle__pos) {
			return QSctpSocket::pos();
		}

		long long callback_return_value = miqt_exec_callback_QSctpSocket_pos(this, handle__pos.value());
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QSctpSocket_virtualbase_pos(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> handle__size;

	// Subclass to allow providing a Go implementation
	virtual qint64 size() const override {
		if (!handle__size) {
			return QSctpSocket::size();
		}

		long long callback_return_value = miqt_exec_callback_QSctpSocket_size(this, handle__size.value());
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QSctpSocket_virtualbase_size(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> handle__seek;

	// Subclass to allow providing a Go implementation
	virtual bool seek(qint64 pos) override {
		if (!handle__seek) {
			return QSctpSocket::seek(pos);
		}

		qint64 pos_ret = pos;
		long long sigval1 = static_cast<long long>(pos_ret);
		bool callback_return_value = miqt_exec_callback_QSctpSocket_seek(this, handle__seek.value(), sigval1);
		return callback_return_value;
	}

	friend bool QSctpSocket_virtualbase_seek(void* self, long long pos);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> handle__atEnd;

	// Subclass to allow providing a Go implementation
	virtual bool atEnd() const override {
		if (!handle__atEnd) {
			return QSctpSocket::atEnd();
		}

		bool callback_return_value = miqt_exec_callback_QSctpSocket_atEnd(this, handle__atEnd.value());
		return callback_return_value;
	}

	friend bool QSctpSocket_virtualbase_atEnd(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> handle__reset;

	// Subclass to allow providing a Go implementation
	virtual bool reset() override {
		if (!handle__reset) {
			return QSctpSocket::reset();
		}

		bool callback_return_value = miqt_exec_callback_QSctpSocket_reset(this, handle__reset.value());
		return callback_return_value;
	}

	friend bool QSctpSocket_virtualbase_reset(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> handle__canReadLine;

	// Subclass to allow providing a Go implementation
	virtual bool canReadLine() const override {
		if (!handle__canReadLine) {
			return QSctpSocket::canReadLine();
		}

		bool callback_return_value = miqt_exec_callback_QSctpSocket_canReadLine(this, handle__canReadLine.value());
		return callback_return_value;
	}

	friend bool QSctpSocket_virtualbase_canReadLine(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QSctpSocket::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QSctpSocket_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QSctpSocket_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QSctpSocket::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QSctpSocket_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QSctpSocket_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QSctpSocket::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QSctpSocket_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QSctpSocket_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QSctpSocket::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QSctpSocket_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QSctpSocket_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QSctpSocket::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QSctpSocket_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QSctpSocket_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QSctpSocket::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QSctpSocket_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QSctpSocket_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QSctpSocket::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QSctpSocket_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QSctpSocket_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QSctpSocket_protectedbase_setSocketState(bool* _dynamic_cast_ok, void* self, int state);
	friend void QSctpSocket_protectedbase_setSocketError(bool* _dynamic_cast_ok, void* self, int socketError);
	friend void QSctpSocket_protectedbase_setLocalPort(bool* _dynamic_cast_ok, void* self, unsigned short port);
	friend void QSctpSocket_protectedbase_setLocalAddress(bool* _dynamic_cast_ok, void* self, QHostAddress* address);
	friend void QSctpSocket_protectedbase_setPeerPort(bool* _dynamic_cast_ok, void* self, unsigned short port);
	friend void QSctpSocket_protectedbase_setPeerAddress(bool* _dynamic_cast_ok, void* self, QHostAddress* address);
	friend void QSctpSocket_protectedbase_setPeerName(bool* _dynamic_cast_ok, void* self, struct miqt_string name);
	friend void QSctpSocket_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode);
	friend void QSctpSocket_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString);
	friend QObject* QSctpSocket_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QSctpSocket_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QSctpSocket_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QSctpSocket_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QSctpSocket* QSctpSocket_new() {
	return new (std::nothrow) MiqtVirtualQSctpSocket();
}

QSctpSocket* QSctpSocket_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQSctpSocket(parent);
}

void QSctpSocket_virtbase(QSctpSocket* src, QTcpSocket** outptr_QTcpSocket) {
	*outptr_QTcpSocket = static_cast<QTcpSocket*>(src);
}

QMetaObject* QSctpSocket_metaObject(const QSctpSocket* self) {
	return (QMetaObject*) self->metaObject();
}

void* QSctpSocket_metacast(QSctpSocket* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QSctpSocket_tr(const char* s) {
	QString _ret = QSctpSocket::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QSctpSocket_close(QSctpSocket* self) {
	self->close();
}

void QSctpSocket_disconnectFromHost(QSctpSocket* self) {
	self->disconnectFromHost();
}

void QSctpSocket_setMaximumChannelCount(QSctpSocket* self, int count) {
	self->setMaximumChannelCount(static_cast<int>(count));
}

int QSctpSocket_maximumChannelCount(const QSctpSocket* self) {
	return self->maximumChannelCount();
}

bool QSctpSocket_isInDatagramMode(const QSctpSocket* self) {
	return self->isInDatagramMode();
}

QNetworkDatagram* QSctpSocket_readDatagram(QSctpSocket* self) {
	return new QNetworkDatagram(self->readDatagram());
}

bool QSctpSocket_writeDatagram(QSctpSocket* self, QNetworkDatagram* datagram) {
	return self->writeDatagram(*datagram);
}

struct miqt_string QSctpSocket_tr2(const char* s, const char* c) {
	QString _ret = QSctpSocket::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QSctpSocket_tr3(const char* s, const char* c, int n) {
	QString _ret = QSctpSocket::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QSctpSocket_override_virtual_close(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> slot_handle(slot);
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__close = std::move(slot_handle);
	return true;
}

void QSctpSocket_virtualbase_close(void* self) {
	static_cast<MiqtVirtualQSctpSocket*>(self)->QSctpSocket::close();
}

bool QSctpSocket_override_virtual_disconnectFromHost(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> slot_handle(slot);
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectFromHost = std::move(slot_handle);
	return true;
}

void QSctpSocket_virtualbase_disconnectFromHost(void* self) {
	static_cast<MiqtVirtualQSctpSocket*>(self)->QSctpSocket::disconnectFromHost();
}

bool QSctpSocket_override_virtual_readData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> slot_handle(slot);
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__readData = std::move(slot_handle);
	return true;
}

long long QSctpSocket_virtualbase_readData(void* self, char* data, long long maxlen) {
	qint64 _ret = static_cast<MiqtVirtualQSctpSocket*>(self)->QSctpSocket::readData(data, static_cast<qint64>(maxlen));
	return static_cast<long long>(_ret);
}

bool QSctpSocket_override_virtual_readLineData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> slot_handle(slot);
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__readLineData = std::move(slot_handle);
	return true;
}

long long QSctpSocket_virtualbase_readLineData(void* self, char* data, long long maxlen) {
	qint64 _ret = static_cast<MiqtVirtualQSctpSocket*>(self)->QSctpSocket::readLineData(data, static_cast<qint64>(maxlen));
	return static_cast<long long>(_ret);
}

bool QSctpSocket_override_virtual_resume(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> slot_handle(slot);
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resume = std::move(slot_handle);
	return true;
}

void QSctpSocket_virtualbase_resume(void* self) {
	static_cast<MiqtVirtualQSctpSocket*>(self)->QSctpSocket::resume();
}

bool QSctpSocket_override_virtual_bind(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> slot_handle(slot);
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__bind = std::move(slot_handle);
	return true;
}

bool QSctpSocket_virtualbase_bind(void* self, QHostAddress* address, unsigned short port, int mode) {
	return static_cast<MiqtVirtualQSctpSocket*>(self)->QSctpSocket::bind(*address, static_cast<quint16>(port), static_cast<MiqtVirtualQSctpSocket::BindMode>(mode));
}

bool QSctpSocket_override_virtual_connectToHost(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> slot_handle(slot);
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectToHost = std::move(slot_handle);
	return true;
}

void QSctpSocket_virtualbase_connectToHost(void* self, struct miqt_string hostName, unsigned short port, int mode, int protocol) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	static_cast<MiqtVirtualQSctpSocket*>(self)->QSctpSocket::connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<MiqtVirtualQSctpSocket::OpenMode>(mode), static_cast<MiqtVirtualQSctpSocket::NetworkLayerProtocol>(protocol));
}

bool QSctpSocket_override_virtual_bytesAvailable(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> slot_handle(slot);
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__bytesAvailable = std::move(slot_handle);
	return true;
}

long long QSctpSocket_virtualbase_bytesAvailable(const void* self) {
	qint64 _ret = static_cast<const MiqtVirtualQSctpSocket*>(self)->QSctpSocket::bytesAvailable();
	return static_cast<long long>(_ret);
}

bool QSctpSocket_override_virtual_bytesToWrite(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> slot_handle(slot);
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__bytesToWrite = std::move(slot_handle);
	return true;
}

long long QSctpSocket_virtualbase_bytesToWrite(const void* self) {
	qint64 _ret = static_cast<const MiqtVirtualQSctpSocket*>(self)->QSctpSocket::bytesToWrite();
	return static_cast<long long>(_ret);
}

bool QSctpSocket_override_virtual_setReadBufferSize(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> slot_handle(slot);
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setReadBufferSize = std::move(slot_handle);
	return true;
}

void QSctpSocket_virtualbase_setReadBufferSize(void* self, long long size) {
	static_cast<MiqtVirtualQSctpSocket*>(self)->QSctpSocket::setReadBufferSize(static_cast<qint64>(size));
}

bool QSctpSocket_override_virtual_socketDescriptor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> slot_handle(slot);
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__socketDescriptor = std::move(slot_handle);
	return true;
}

intptr_t QSctpSocket_virtualbase_socketDescriptor(const void* self) {
	qintptr _ret = static_cast<const MiqtVirtualQSctpSocket*>(self)->QSctpSocket::socketDescriptor();
	return (intptr_t)(_ret);
}

bool QSctpSocket_override_virtual_setSocketDescriptor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> slot_handle(slot);
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setSocketDescriptor = std::move(slot_handle);
	return true;
}

bool QSctpSocket_virtualbase_setSocketDescriptor(void* self, intptr_t socketDescriptor, int state, int openMode) {
	return static_cast<MiqtVirtualQSctpSocket*>(self)->QSctpSocket::setSocketDescriptor((qintptr)(socketDescriptor), static_cast<MiqtVirtualQSctpSocket::SocketState>(state), static_cast<MiqtVirtualQSctpSocket::OpenMode>(openMode));
}

bool QSctpSocket_override_virtual_setSocketOption(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> slot_handle(slot);
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setSocketOption = std::move(slot_handle);
	return true;
}

void QSctpSocket_virtualbase_setSocketOption(void* self, int option, QVariant* value) {
	static_cast<MiqtVirtualQSctpSocket*>(self)->QSctpSocket::setSocketOption(static_cast<MiqtVirtualQSctpSocket::SocketOption>(option), *value);
}

bool QSctpSocket_override_virtual_socketOption(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> slot_handle(slot);
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__socketOption = std::move(slot_handle);
	return true;
}

QVariant* QSctpSocket_virtualbase_socketOption(void* self, int option) {
	return new QVariant(static_cast<MiqtVirtualQSctpSocket*>(self)->QSctpSocket::socketOption(static_cast<MiqtVirtualQSctpSocket::SocketOption>(option)));
}

bool QSctpSocket_override_virtual_isSequential(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> slot_handle(slot);
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isSequential = std::move(slot_handle);
	return true;
}

bool QSctpSocket_virtualbase_isSequential(const void* self) {
	return static_cast<const MiqtVirtualQSctpSocket*>(self)->QSctpSocket::isSequential();
}

bool QSctpSocket_override_virtual_waitForConnected(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> slot_handle(slot);
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__waitForConnected = std::move(slot_handle);
	return true;
}

bool QSctpSocket_virtualbase_waitForConnected(void* self, int msecs) {
	return static_cast<MiqtVirtualQSctpSocket*>(self)->QSctpSocket::waitForConnected(static_cast<int>(msecs));
}

bool QSctpSocket_override_virtual_waitForReadyRead(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> slot_handle(slot);
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__waitForReadyRead = std::move(slot_handle);
	return true;
}

bool QSctpSocket_virtualbase_waitForReadyRead(void* self, int msecs) {
	return static_cast<MiqtVirtualQSctpSocket*>(self)->QSctpSocket::waitForReadyRead(static_cast<int>(msecs));
}

bool QSctpSocket_override_virtual_waitForBytesWritten(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> slot_handle(slot);
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__waitForBytesWritten = std::move(slot_handle);
	return true;
}

bool QSctpSocket_virtualbase_waitForBytesWritten(void* self, int msecs) {
	return static_cast<MiqtVirtualQSctpSocket*>(self)->QSctpSocket::waitForBytesWritten(static_cast<int>(msecs));
}

bool QSctpSocket_override_virtual_waitForDisconnected(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> slot_handle(slot);
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__waitForDisconnected = std::move(slot_handle);
	return true;
}

bool QSctpSocket_virtualbase_waitForDisconnected(void* self, int msecs) {
	return static_cast<MiqtVirtualQSctpSocket*>(self)->QSctpSocket::waitForDisconnected(static_cast<int>(msecs));
}

bool QSctpSocket_override_virtual_skipData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> slot_handle(slot);
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__skipData = std::move(slot_handle);
	return true;
}

long long QSctpSocket_virtualbase_skipData(void* self, long long maxSize) {
	qint64 _ret = static_cast<MiqtVirtualQSctpSocket*>(self)->QSctpSocket::skipData(static_cast<qint64>(maxSize));
	return static_cast<long long>(_ret);
}

bool QSctpSocket_override_virtual_writeData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> slot_handle(slot);
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__writeData = std::move(slot_handle);
	return true;
}

long long QSctpSocket_virtualbase_writeData(void* self, const char* data, long long len) {
	qint64 _ret = static_cast<MiqtVirtualQSctpSocket*>(self)->QSctpSocket::writeData(data, static_cast<qint64>(len));
	return static_cast<long long>(_ret);
}

bool QSctpSocket_override_virtual_open(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> slot_handle(slot);
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__open = std::move(slot_handle);
	return true;
}

bool QSctpSocket_virtualbase_open(void* self, int mode) {
	return static_cast<MiqtVirtualQSctpSocket*>(self)->QSctpSocket::open(static_cast<MiqtVirtualQSctpSocket::OpenMode>(mode));
}

bool QSctpSocket_override_virtual_pos(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> slot_handle(slot);
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__pos = std::move(slot_handle);
	return true;
}

long long QSctpSocket_virtualbase_pos(const void* self) {
	qint64 _ret = static_cast<const MiqtVirtualQSctpSocket*>(self)->QSctpSocket::pos();
	return static_cast<long long>(_ret);
}

bool QSctpSocket_override_virtual_size(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> slot_handle(slot);
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__size = std::move(slot_handle);
	return true;
}

long long QSctpSocket_virtualbase_size(const void* self) {
	qint64 _ret = static_cast<const MiqtVirtualQSctpSocket*>(self)->QSctpSocket::size();
	return static_cast<long long>(_ret);
}

bool QSctpSocket_override_virtual_seek(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> slot_handle(slot);
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__seek = std::move(slot_handle);
	return true;
}

bool QSctpSocket_virtualbase_seek(void* self, long long pos) {
	return static_cast<MiqtVirtualQSctpSocket*>(self)->QSctpSocket::seek(static_cast<qint64>(pos));
}

bool QSctpSocket_override_virtual_atEnd(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> slot_handle(slot);
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__atEnd = std::move(slot_handle);
	return true;
}

bool QSctpSocket_virtualbase_atEnd(const void* self) {
	return static_cast<const MiqtVirtualQSctpSocket*>(self)->QSctpSocket::atEnd();
}

bool QSctpSocket_override_virtual_reset(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> slot_handle(slot);
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__reset = std::move(slot_handle);
	return true;
}

bool QSctpSocket_virtualbase_reset(void* self) {
	return static_cast<MiqtVirtualQSctpSocket*>(self)->QSctpSocket::reset();
}

bool QSctpSocket_override_virtual_canReadLine(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> slot_handle(slot);
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__canReadLine = std::move(slot_handle);
	return true;
}

bool QSctpSocket_virtualbase_canReadLine(const void* self) {
	return static_cast<const MiqtVirtualQSctpSocket*>(self)->QSctpSocket::canReadLine();
}

bool QSctpSocket_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> slot_handle(slot);
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QSctpSocket_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQSctpSocket*>(self)->QSctpSocket::event(event);
}

bool QSctpSocket_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> slot_handle(slot);
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QSctpSocket_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQSctpSocket*>(self)->QSctpSocket::eventFilter(watched, event);
}

bool QSctpSocket_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> slot_handle(slot);
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QSctpSocket_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQSctpSocket*>(self)->QSctpSocket::timerEvent(event);
}

bool QSctpSocket_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> slot_handle(slot);
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QSctpSocket_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQSctpSocket*>(self)->QSctpSocket::childEvent(event);
}

bool QSctpSocket_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> slot_handle(slot);
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QSctpSocket_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQSctpSocket*>(self)->QSctpSocket::customEvent(event);
}

bool QSctpSocket_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> slot_handle(slot);
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QSctpSocket_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQSctpSocket*>(self)->QSctpSocket::connectNotify(*signal);
}

bool QSctpSocket_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QSctpSocket> slot_handle(slot);
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QSctpSocket_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQSctpSocket*>(self)->QSctpSocket::disconnectNotify(*signal);
}

void QSctpSocket_protectedbase_setSocketState(bool* _dynamic_cast_ok, void* self, int state) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setSocketState(static_cast<MiqtVirtualQSctpSocket::SocketState>(state));
}

void QSctpSocket_protectedbase_setSocketError(bool* _dynamic_cast_ok, void* self, int socketError) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setSocketError(static_cast<MiqtVirtualQSctpSocket::SocketError>(socketError));
}

void QSctpSocket_protectedbase_setLocalPort(bool* _dynamic_cast_ok, void* self, unsigned short port) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setLocalPort(static_cast<quint16>(port));
}

void QSctpSocket_protectedbase_setLocalAddress(bool* _dynamic_cast_ok, void* self, QHostAddress* address) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setLocalAddress(*address);
}

void QSctpSocket_protectedbase_setPeerPort(bool* _dynamic_cast_ok, void* self, unsigned short port) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setPeerPort(static_cast<quint16>(port));
}

void QSctpSocket_protectedbase_setPeerAddress(bool* _dynamic_cast_ok, void* self, QHostAddress* address) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setPeerAddress(*address);
}

void QSctpSocket_protectedbase_setPeerName(bool* _dynamic_cast_ok, void* self, struct miqt_string name) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
		QString name_QString = QString::fromUtf8(name.data, name.len);
	self_cast->setPeerName(name_QString);
}

void QSctpSocket_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setOpenMode(static_cast<MiqtVirtualQSctpSocket::OpenMode>(openMode));
}

void QSctpSocket_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
		QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
	self_cast->setErrorString(errorString_QString);
}

QObject* QSctpSocket_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QSctpSocket_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QSctpSocket_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QSctpSocket_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQSctpSocket* self_cast = dynamic_cast<MiqtVirtualQSctpSocket*>( (QSctpSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QSctpSocket_delete(QSctpSocket* self) {
	delete self;
}

