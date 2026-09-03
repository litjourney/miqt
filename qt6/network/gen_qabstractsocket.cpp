#include <memory>
#include <utility>
#include <QAbstractSocket>
#include <QAuthenticator>
#include <QChildEvent>
#include <QEvent>
#include <QHostAddress>
#include <QIODevice>
#include <QIODeviceBase>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNetworkProxy>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qabstractsocket.h>
#include "gen_qabstractsocket.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QAbstractSocket(intptr_t);
void miqt_exec_callback_QAbstractSocket_hostFound(intptr_t);
void miqt_exec_callback_QAbstractSocket_connected(intptr_t);
void miqt_exec_callback_QAbstractSocket_disconnected(intptr_t);
void miqt_exec_callback_QAbstractSocket_stateChanged(intptr_t, int);
void miqt_exec_callback_QAbstractSocket_errorOccurred(intptr_t, int);
void miqt_exec_callback_QAbstractSocket_proxyAuthenticationRequired(intptr_t, QNetworkProxy*, QAuthenticator*);
void miqt_exec_callback_QAbstractSocket_resume(QAbstractSocket*, intptr_t);
bool miqt_exec_callback_QAbstractSocket_bind(QAbstractSocket*, intptr_t, QHostAddress*, unsigned short, int);
void miqt_exec_callback_QAbstractSocket_connectToHost(QAbstractSocket*, intptr_t, struct miqt_string, unsigned short, int, int);
void miqt_exec_callback_QAbstractSocket_disconnectFromHost(QAbstractSocket*, intptr_t);
long long miqt_exec_callback_QAbstractSocket_bytesAvailable(const QAbstractSocket*, intptr_t);
long long miqt_exec_callback_QAbstractSocket_bytesToWrite(const QAbstractSocket*, intptr_t);
void miqt_exec_callback_QAbstractSocket_setReadBufferSize(QAbstractSocket*, intptr_t, long long);
intptr_t miqt_exec_callback_QAbstractSocket_socketDescriptor(const QAbstractSocket*, intptr_t);
bool miqt_exec_callback_QAbstractSocket_setSocketDescriptor(QAbstractSocket*, intptr_t, intptr_t, int, int);
void miqt_exec_callback_QAbstractSocket_setSocketOption(QAbstractSocket*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QAbstractSocket_socketOption(QAbstractSocket*, intptr_t, int);
void miqt_exec_callback_QAbstractSocket_close(QAbstractSocket*, intptr_t);
bool miqt_exec_callback_QAbstractSocket_isSequential(const QAbstractSocket*, intptr_t);
bool miqt_exec_callback_QAbstractSocket_waitForConnected(QAbstractSocket*, intptr_t, int);
bool miqt_exec_callback_QAbstractSocket_waitForReadyRead(QAbstractSocket*, intptr_t, int);
bool miqt_exec_callback_QAbstractSocket_waitForBytesWritten(QAbstractSocket*, intptr_t, int);
bool miqt_exec_callback_QAbstractSocket_waitForDisconnected(QAbstractSocket*, intptr_t, int);
long long miqt_exec_callback_QAbstractSocket_readData(QAbstractSocket*, intptr_t, char*, long long);
long long miqt_exec_callback_QAbstractSocket_readLineData(QAbstractSocket*, intptr_t, char*, long long);
long long miqt_exec_callback_QAbstractSocket_skipData(QAbstractSocket*, intptr_t, long long);
long long miqt_exec_callback_QAbstractSocket_writeData(QAbstractSocket*, intptr_t, const char*, long long);
bool miqt_exec_callback_QAbstractSocket_open(QAbstractSocket*, intptr_t, int);
long long miqt_exec_callback_QAbstractSocket_pos(const QAbstractSocket*, intptr_t);
long long miqt_exec_callback_QAbstractSocket_size(const QAbstractSocket*, intptr_t);
bool miqt_exec_callback_QAbstractSocket_seek(QAbstractSocket*, intptr_t, long long);
bool miqt_exec_callback_QAbstractSocket_atEnd(const QAbstractSocket*, intptr_t);
bool miqt_exec_callback_QAbstractSocket_reset(QAbstractSocket*, intptr_t);
bool miqt_exec_callback_QAbstractSocket_canReadLine(const QAbstractSocket*, intptr_t);
bool miqt_exec_callback_QAbstractSocket_event(QAbstractSocket*, intptr_t, QEvent*);
bool miqt_exec_callback_QAbstractSocket_eventFilter(QAbstractSocket*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAbstractSocket_timerEvent(QAbstractSocket*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAbstractSocket_childEvent(QAbstractSocket*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAbstractSocket_customEvent(QAbstractSocket*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractSocket_connectNotify(QAbstractSocket*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAbstractSocket_disconnectNotify(QAbstractSocket*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAbstractSocket final : public QAbstractSocket {
public:

	MiqtVirtualQAbstractSocket(QAbstractSocket::SocketType socketType, QObject* parent): QAbstractSocket(socketType, parent) {}

	virtual ~MiqtVirtualQAbstractSocket() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> handle__resume;

	// Subclass to allow providing a Go implementation
	virtual void resume() override {
		if (!handle__resume) {
			QAbstractSocket::resume();
			return;
		}

		miqt_exec_callback_QAbstractSocket_resume(this, handle__resume.value());

	}

	friend void QAbstractSocket_virtualbase_resume(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> handle__bind;

	// Subclass to allow providing a Go implementation
	virtual bool bind(const QHostAddress& address, quint16 port, QAbstractSocket::BindMode mode) override {
		if (!handle__bind) {
			return QAbstractSocket::bind(address, port, mode);
		}

		const QHostAddress& address_ret = address;
		// Cast returned reference into pointer
		QHostAddress* sigval1 = const_cast<QHostAddress*>(&address_ret);
		quint16 port_ret = port;
		unsigned short sigval2 = static_cast<unsigned short>(port_ret);
		QAbstractSocket::BindMode mode_ret = mode;
		int sigval3 = static_cast<int>(mode_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractSocket_bind(this, handle__bind.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QAbstractSocket_virtualbase_bind(void* self, QHostAddress* address, unsigned short port, int mode);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> handle__connectToHost;

	// Subclass to allow providing a Go implementation
	virtual void connectToHost(const QString& hostName, quint16 port, QIODeviceBase::OpenMode mode, QAbstractSocket::NetworkLayerProtocol protocol) override {
		if (!handle__connectToHost) {
			QAbstractSocket::connectToHost(hostName, port, mode, protocol);
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
		miqt_exec_callback_QAbstractSocket_connectToHost(this, handle__connectToHost.value(), sigval1, sigval2, sigval3, sigval4);

	}

	friend void QAbstractSocket_virtualbase_connectToHost(void* self, struct miqt_string hostName, unsigned short port, int mode, int protocol);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> handle__disconnectFromHost;

	// Subclass to allow providing a Go implementation
	virtual void disconnectFromHost() override {
		if (!handle__disconnectFromHost) {
			QAbstractSocket::disconnectFromHost();
			return;
		}

		miqt_exec_callback_QAbstractSocket_disconnectFromHost(this, handle__disconnectFromHost.value());

	}

	friend void QAbstractSocket_virtualbase_disconnectFromHost(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> handle__bytesAvailable;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesAvailable() const override {
		if (!handle__bytesAvailable) {
			return QAbstractSocket::bytesAvailable();
		}

		long long callback_return_value = miqt_exec_callback_QAbstractSocket_bytesAvailable(this, handle__bytesAvailable.value());
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QAbstractSocket_virtualbase_bytesAvailable(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> handle__bytesToWrite;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesToWrite() const override {
		if (!handle__bytesToWrite) {
			return QAbstractSocket::bytesToWrite();
		}

		long long callback_return_value = miqt_exec_callback_QAbstractSocket_bytesToWrite(this, handle__bytesToWrite.value());
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QAbstractSocket_virtualbase_bytesToWrite(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> handle__setReadBufferSize;

	// Subclass to allow providing a Go implementation
	virtual void setReadBufferSize(qint64 size) override {
		if (!handle__setReadBufferSize) {
			QAbstractSocket::setReadBufferSize(size);
			return;
		}

		qint64 size_ret = size;
		long long sigval1 = static_cast<long long>(size_ret);
		miqt_exec_callback_QAbstractSocket_setReadBufferSize(this, handle__setReadBufferSize.value(), sigval1);

	}

	friend void QAbstractSocket_virtualbase_setReadBufferSize(void* self, long long size);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> handle__socketDescriptor;

	// Subclass to allow providing a Go implementation
	virtual qintptr socketDescriptor() const override {
		if (!handle__socketDescriptor) {
			return QAbstractSocket::socketDescriptor();
		}

		intptr_t callback_return_value = miqt_exec_callback_QAbstractSocket_socketDescriptor(this, handle__socketDescriptor.value());
		return (qintptr)(callback_return_value);
	}

	friend intptr_t QAbstractSocket_virtualbase_socketDescriptor(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> handle__setSocketDescriptor;

	// Subclass to allow providing a Go implementation
	virtual bool setSocketDescriptor(qintptr socketDescriptor, QAbstractSocket::SocketState state, QIODeviceBase::OpenMode openMode) override {
		if (!handle__setSocketDescriptor) {
			return QAbstractSocket::setSocketDescriptor(socketDescriptor, state, openMode);
		}

		qintptr socketDescriptor_ret = socketDescriptor;
		intptr_t sigval1 = (intptr_t)(socketDescriptor_ret);
		QAbstractSocket::SocketState state_ret = state;
		int sigval2 = static_cast<int>(state_ret);
		QIODeviceBase::OpenMode openMode_ret = openMode;
		int sigval3 = static_cast<int>(openMode_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractSocket_setSocketDescriptor(this, handle__setSocketDescriptor.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QAbstractSocket_virtualbase_setSocketDescriptor(void* self, intptr_t socketDescriptor, int state, int openMode);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> handle__setSocketOption;

	// Subclass to allow providing a Go implementation
	virtual void setSocketOption(QAbstractSocket::SocketOption option, const QVariant& value) override {
		if (!handle__setSocketOption) {
			QAbstractSocket::setSocketOption(option, value);
			return;
		}

		QAbstractSocket::SocketOption option_ret = option;
		int sigval1 = static_cast<int>(option_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		miqt_exec_callback_QAbstractSocket_setSocketOption(this, handle__setSocketOption.value(), sigval1, sigval2);

	}

	friend void QAbstractSocket_virtualbase_setSocketOption(void* self, int option, QVariant* value);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> handle__socketOption;

	// Subclass to allow providing a Go implementation
	virtual QVariant socketOption(QAbstractSocket::SocketOption option) override {
		if (!handle__socketOption) {
			return QAbstractSocket::socketOption(option);
		}

		QAbstractSocket::SocketOption option_ret = option;
		int sigval1 = static_cast<int>(option_ret);
		QVariant* callback_return_value = miqt_exec_callback_QAbstractSocket_socketOption(this, handle__socketOption.value(), sigval1);
		return *callback_return_value;
	}

	friend QVariant* QAbstractSocket_virtualbase_socketOption(void* self, int option);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> handle__close;

	// Subclass to allow providing a Go implementation
	virtual void close() override {
		if (!handle__close) {
			QAbstractSocket::close();
			return;
		}

		miqt_exec_callback_QAbstractSocket_close(this, handle__close.value());

	}

	friend void QAbstractSocket_virtualbase_close(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> handle__isSequential;

	// Subclass to allow providing a Go implementation
	virtual bool isSequential() const override {
		if (!handle__isSequential) {
			return QAbstractSocket::isSequential();
		}

		bool callback_return_value = miqt_exec_callback_QAbstractSocket_isSequential(this, handle__isSequential.value());
		return callback_return_value;
	}

	friend bool QAbstractSocket_virtualbase_isSequential(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> handle__waitForConnected;

	// Subclass to allow providing a Go implementation
	virtual bool waitForConnected(int msecs) override {
		if (!handle__waitForConnected) {
			return QAbstractSocket::waitForConnected(msecs);
		}

		int sigval1 = msecs;
		bool callback_return_value = miqt_exec_callback_QAbstractSocket_waitForConnected(this, handle__waitForConnected.value(), sigval1);
		return callback_return_value;
	}

	friend bool QAbstractSocket_virtualbase_waitForConnected(void* self, int msecs);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> handle__waitForReadyRead;

	// Subclass to allow providing a Go implementation
	virtual bool waitForReadyRead(int msecs) override {
		if (!handle__waitForReadyRead) {
			return QAbstractSocket::waitForReadyRead(msecs);
		}

		int sigval1 = msecs;
		bool callback_return_value = miqt_exec_callback_QAbstractSocket_waitForReadyRead(this, handle__waitForReadyRead.value(), sigval1);
		return callback_return_value;
	}

	friend bool QAbstractSocket_virtualbase_waitForReadyRead(void* self, int msecs);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> handle__waitForBytesWritten;

	// Subclass to allow providing a Go implementation
	virtual bool waitForBytesWritten(int msecs) override {
		if (!handle__waitForBytesWritten) {
			return QAbstractSocket::waitForBytesWritten(msecs);
		}

		int sigval1 = msecs;
		bool callback_return_value = miqt_exec_callback_QAbstractSocket_waitForBytesWritten(this, handle__waitForBytesWritten.value(), sigval1);
		return callback_return_value;
	}

	friend bool QAbstractSocket_virtualbase_waitForBytesWritten(void* self, int msecs);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> handle__waitForDisconnected;

	// Subclass to allow providing a Go implementation
	virtual bool waitForDisconnected(int msecs) override {
		if (!handle__waitForDisconnected) {
			return QAbstractSocket::waitForDisconnected(msecs);
		}

		int sigval1 = msecs;
		bool callback_return_value = miqt_exec_callback_QAbstractSocket_waitForDisconnected(this, handle__waitForDisconnected.value(), sigval1);
		return callback_return_value;
	}

	friend bool QAbstractSocket_virtualbase_waitForDisconnected(void* self, int msecs);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> handle__readData;

	// Subclass to allow providing a Go implementation
	virtual qint64 readData(char* data, qint64 maxlen) override {
		if (!handle__readData) {
			return QAbstractSocket::readData(data, maxlen);
		}

		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);
		long long callback_return_value = miqt_exec_callback_QAbstractSocket_readData(this, handle__readData.value(), sigval1, sigval2);
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QAbstractSocket_virtualbase_readData(void* self, char* data, long long maxlen);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> handle__readLineData;

	// Subclass to allow providing a Go implementation
	virtual qint64 readLineData(char* data, qint64 maxlen) override {
		if (!handle__readLineData) {
			return QAbstractSocket::readLineData(data, maxlen);
		}

		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);
		long long callback_return_value = miqt_exec_callback_QAbstractSocket_readLineData(this, handle__readLineData.value(), sigval1, sigval2);
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QAbstractSocket_virtualbase_readLineData(void* self, char* data, long long maxlen);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> handle__skipData;

	// Subclass to allow providing a Go implementation
	virtual qint64 skipData(qint64 maxSize) override {
		if (!handle__skipData) {
			return QAbstractSocket::skipData(maxSize);
		}

		qint64 maxSize_ret = maxSize;
		long long sigval1 = static_cast<long long>(maxSize_ret);
		long long callback_return_value = miqt_exec_callback_QAbstractSocket_skipData(this, handle__skipData.value(), sigval1);
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QAbstractSocket_virtualbase_skipData(void* self, long long maxSize);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> handle__writeData;

	// Subclass to allow providing a Go implementation
	virtual qint64 writeData(const char* data, qint64 len) override {
		if (!handle__writeData) {
			return QAbstractSocket::writeData(data, len);
		}

		const char* sigval1 = (const char*) data;
		qint64 len_ret = len;
		long long sigval2 = static_cast<long long>(len_ret);
		long long callback_return_value = miqt_exec_callback_QAbstractSocket_writeData(this, handle__writeData.value(), sigval1, sigval2);
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QAbstractSocket_virtualbase_writeData(void* self, const char* data, long long len);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> handle__open;

	// Subclass to allow providing a Go implementation
	virtual bool open(QIODeviceBase::OpenMode mode) override {
		if (!handle__open) {
			return QAbstractSocket::open(mode);
		}

		QIODeviceBase::OpenMode mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractSocket_open(this, handle__open.value(), sigval1);
		return callback_return_value;
	}

	friend bool QAbstractSocket_virtualbase_open(void* self, int mode);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> handle__pos;

	// Subclass to allow providing a Go implementation
	virtual qint64 pos() const override {
		if (!handle__pos) {
			return QAbstractSocket::pos();
		}

		long long callback_return_value = miqt_exec_callback_QAbstractSocket_pos(this, handle__pos.value());
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QAbstractSocket_virtualbase_pos(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> handle__size;

	// Subclass to allow providing a Go implementation
	virtual qint64 size() const override {
		if (!handle__size) {
			return QAbstractSocket::size();
		}

		long long callback_return_value = miqt_exec_callback_QAbstractSocket_size(this, handle__size.value());
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QAbstractSocket_virtualbase_size(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> handle__seek;

	// Subclass to allow providing a Go implementation
	virtual bool seek(qint64 pos) override {
		if (!handle__seek) {
			return QAbstractSocket::seek(pos);
		}

		qint64 pos_ret = pos;
		long long sigval1 = static_cast<long long>(pos_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractSocket_seek(this, handle__seek.value(), sigval1);
		return callback_return_value;
	}

	friend bool QAbstractSocket_virtualbase_seek(void* self, long long pos);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> handle__atEnd;

	// Subclass to allow providing a Go implementation
	virtual bool atEnd() const override {
		if (!handle__atEnd) {
			return QAbstractSocket::atEnd();
		}

		bool callback_return_value = miqt_exec_callback_QAbstractSocket_atEnd(this, handle__atEnd.value());
		return callback_return_value;
	}

	friend bool QAbstractSocket_virtualbase_atEnd(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> handle__reset;

	// Subclass to allow providing a Go implementation
	virtual bool reset() override {
		if (!handle__reset) {
			return QAbstractSocket::reset();
		}

		bool callback_return_value = miqt_exec_callback_QAbstractSocket_reset(this, handle__reset.value());
		return callback_return_value;
	}

	friend bool QAbstractSocket_virtualbase_reset(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> handle__canReadLine;

	// Subclass to allow providing a Go implementation
	virtual bool canReadLine() const override {
		if (!handle__canReadLine) {
			return QAbstractSocket::canReadLine();
		}

		bool callback_return_value = miqt_exec_callback_QAbstractSocket_canReadLine(this, handle__canReadLine.value());
		return callback_return_value;
	}

	friend bool QAbstractSocket_virtualbase_canReadLine(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QAbstractSocket::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QAbstractSocket_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QAbstractSocket_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QAbstractSocket::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QAbstractSocket_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QAbstractSocket_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QAbstractSocket::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QAbstractSocket_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QAbstractSocket_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QAbstractSocket::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QAbstractSocket_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QAbstractSocket_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QAbstractSocket::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QAbstractSocket_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QAbstractSocket_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QAbstractSocket::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QAbstractSocket_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QAbstractSocket_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QAbstractSocket::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QAbstractSocket_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QAbstractSocket_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QAbstractSocket_protectedbase_setSocketState(bool* _dynamic_cast_ok, void* self, int state);
	friend void QAbstractSocket_protectedbase_setSocketError(bool* _dynamic_cast_ok, void* self, int socketError);
	friend void QAbstractSocket_protectedbase_setLocalPort(bool* _dynamic_cast_ok, void* self, unsigned short port);
	friend void QAbstractSocket_protectedbase_setLocalAddress(bool* _dynamic_cast_ok, void* self, QHostAddress* address);
	friend void QAbstractSocket_protectedbase_setPeerPort(bool* _dynamic_cast_ok, void* self, unsigned short port);
	friend void QAbstractSocket_protectedbase_setPeerAddress(bool* _dynamic_cast_ok, void* self, QHostAddress* address);
	friend void QAbstractSocket_protectedbase_setPeerName(bool* _dynamic_cast_ok, void* self, struct miqt_string name);
	friend void QAbstractSocket_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode);
	friend void QAbstractSocket_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString);
	friend QObject* QAbstractSocket_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractSocket_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractSocket_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAbstractSocket_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QAbstractSocket* QAbstractSocket_new(int socketType, QObject* parent) {
	return new (std::nothrow) MiqtVirtualQAbstractSocket(static_cast<QAbstractSocket::SocketType>(socketType), parent);
}

void QAbstractSocket_virtbase(QAbstractSocket* src, QIODevice** outptr_QIODevice) {
	*outptr_QIODevice = static_cast<QIODevice*>(src);
}

QMetaObject* QAbstractSocket_metaObject(const QAbstractSocket* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractSocket_metacast(QAbstractSocket* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractSocket_tr(const char* s) {
	QString _ret = QAbstractSocket::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractSocket_resume(QAbstractSocket* self) {
	self->resume();
}

int QAbstractSocket_pauseMode(const QAbstractSocket* self) {
	QAbstractSocket::PauseModes _ret = self->pauseMode();
	return static_cast<int>(_ret);
}

void QAbstractSocket_setPauseMode(QAbstractSocket* self, int pauseMode) {
	self->setPauseMode(static_cast<QAbstractSocket::PauseModes>(pauseMode));
}

bool QAbstractSocket_bind(QAbstractSocket* self, QHostAddress* address, unsigned short port, int mode) {
	return self->bind(*address, static_cast<quint16>(port), static_cast<QAbstractSocket::BindMode>(mode));
}

bool QAbstractSocket_bind2(QAbstractSocket* self) {
	return self->bind();
}

void QAbstractSocket_connectToHost(QAbstractSocket* self, struct miqt_string hostName, unsigned short port, int mode, int protocol) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	self->connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<QIODeviceBase::OpenMode>(mode), static_cast<QAbstractSocket::NetworkLayerProtocol>(protocol));
}

void QAbstractSocket_connectToHost2(QAbstractSocket* self, QHostAddress* address, unsigned short port) {
	self->connectToHost(*address, static_cast<quint16>(port));
}

void QAbstractSocket_disconnectFromHost(QAbstractSocket* self) {
	self->disconnectFromHost();
}

bool QAbstractSocket_isValid(const QAbstractSocket* self) {
	return self->isValid();
}

long long QAbstractSocket_bytesAvailable(const QAbstractSocket* self) {
	qint64 _ret = self->bytesAvailable();
	return static_cast<long long>(_ret);
}

long long QAbstractSocket_bytesToWrite(const QAbstractSocket* self) {
	qint64 _ret = self->bytesToWrite();
	return static_cast<long long>(_ret);
}

unsigned short QAbstractSocket_localPort(const QAbstractSocket* self) {
	quint16 _ret = self->localPort();
	return static_cast<unsigned short>(_ret);
}

QHostAddress* QAbstractSocket_localAddress(const QAbstractSocket* self) {
	return new QHostAddress(self->localAddress());
}

unsigned short QAbstractSocket_peerPort(const QAbstractSocket* self) {
	quint16 _ret = self->peerPort();
	return static_cast<unsigned short>(_ret);
}

QHostAddress* QAbstractSocket_peerAddress(const QAbstractSocket* self) {
	return new QHostAddress(self->peerAddress());
}

struct miqt_string QAbstractSocket_peerName(const QAbstractSocket* self) {
	QString _ret = self->peerName();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

long long QAbstractSocket_readBufferSize(const QAbstractSocket* self) {
	qint64 _ret = self->readBufferSize();
	return static_cast<long long>(_ret);
}

void QAbstractSocket_setReadBufferSize(QAbstractSocket* self, long long size) {
	self->setReadBufferSize(static_cast<qint64>(size));
}

void QAbstractSocket_abort(QAbstractSocket* self) {
	self->abort();
}

intptr_t QAbstractSocket_socketDescriptor(const QAbstractSocket* self) {
	qintptr _ret = self->socketDescriptor();
	return (intptr_t)(_ret);
}

bool QAbstractSocket_setSocketDescriptor(QAbstractSocket* self, intptr_t socketDescriptor, int state, int openMode) {
	return self->setSocketDescriptor((qintptr)(socketDescriptor), static_cast<QAbstractSocket::SocketState>(state), static_cast<QIODeviceBase::OpenMode>(openMode));
}

void QAbstractSocket_setSocketOption(QAbstractSocket* self, int option, QVariant* value) {
	self->setSocketOption(static_cast<QAbstractSocket::SocketOption>(option), *value);
}

QVariant* QAbstractSocket_socketOption(QAbstractSocket* self, int option) {
	return new QVariant(self->socketOption(static_cast<QAbstractSocket::SocketOption>(option)));
}

int QAbstractSocket_socketType(const QAbstractSocket* self) {
	QAbstractSocket::SocketType _ret = self->socketType();
	return static_cast<int>(_ret);
}

int QAbstractSocket_state(const QAbstractSocket* self) {
	QAbstractSocket::SocketState _ret = self->state();
	return static_cast<int>(_ret);
}

int QAbstractSocket_error(const QAbstractSocket* self) {
	QAbstractSocket::SocketError _ret = self->error();
	return static_cast<int>(_ret);
}

void QAbstractSocket_close(QAbstractSocket* self) {
	self->close();
}

bool QAbstractSocket_isSequential(const QAbstractSocket* self) {
	return self->isSequential();
}

bool QAbstractSocket_flush(QAbstractSocket* self) {
	return self->flush();
}

bool QAbstractSocket_waitForConnected(QAbstractSocket* self, int msecs) {
	return self->waitForConnected(static_cast<int>(msecs));
}

bool QAbstractSocket_waitForReadyRead(QAbstractSocket* self, int msecs) {
	return self->waitForReadyRead(static_cast<int>(msecs));
}

bool QAbstractSocket_waitForBytesWritten(QAbstractSocket* self, int msecs) {
	return self->waitForBytesWritten(static_cast<int>(msecs));
}

bool QAbstractSocket_waitForDisconnected(QAbstractSocket* self, int msecs) {
	return self->waitForDisconnected(static_cast<int>(msecs));
}

void QAbstractSocket_setProxy(QAbstractSocket* self, QNetworkProxy* networkProxy) {
	self->setProxy(*networkProxy);
}

QNetworkProxy* QAbstractSocket_proxy(const QAbstractSocket* self) {
	return new QNetworkProxy(self->proxy());
}

struct miqt_string QAbstractSocket_protocolTag(const QAbstractSocket* self) {
	QString _ret = self->protocolTag();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractSocket_setProtocolTag(QAbstractSocket* self, struct miqt_string tag) {
	QString tag_QString = QString::fromUtf8(tag.data, tag.len);
	self->setProtocolTag(tag_QString);
}

void QAbstractSocket_hostFound(QAbstractSocket* self) {
	self->hostFound();
}

void* QAbstractSocket_connect_hostFound(QAbstractSocket* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket>>(slot);
	return new QMetaObject::Connection(QAbstractSocket::connect(self, static_cast<void (QAbstractSocket::*)()>(&QAbstractSocket::hostFound), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QAbstractSocket_hostFound(slot);
	}));
}

void QAbstractSocket_connected(QAbstractSocket* self) {
	self->connected();
}

void* QAbstractSocket_connect_connected(QAbstractSocket* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket>>(slot);
	return new QMetaObject::Connection(QAbstractSocket::connect(self, static_cast<void (QAbstractSocket::*)()>(&QAbstractSocket::connected), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QAbstractSocket_connected(slot);
	}));
}

void QAbstractSocket_disconnected(QAbstractSocket* self) {
	self->disconnected();
}

void* QAbstractSocket_connect_disconnected(QAbstractSocket* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket>>(slot);
	return new QMetaObject::Connection(QAbstractSocket::connect(self, static_cast<void (QAbstractSocket::*)()>(&QAbstractSocket::disconnected), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QAbstractSocket_disconnected(slot);
	}));
}

void QAbstractSocket_stateChanged(QAbstractSocket* self, int param1) {
	self->stateChanged(static_cast<QAbstractSocket::SocketState>(param1));
}

void* QAbstractSocket_connect_stateChanged(QAbstractSocket* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket>>(slot);
	return new QMetaObject::Connection(QAbstractSocket::connect(self, static_cast<void (QAbstractSocket::*)(QAbstractSocket::SocketState)>(&QAbstractSocket::stateChanged), self, [slot_handle](QAbstractSocket::SocketState param1) {
		intptr_t slot = slot_handle->value();
		QAbstractSocket::SocketState param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		miqt_exec_callback_QAbstractSocket_stateChanged(slot, sigval1);
	}));
}

void QAbstractSocket_errorOccurred(QAbstractSocket* self, int param1) {
	self->errorOccurred(static_cast<QAbstractSocket::SocketError>(param1));
}

void* QAbstractSocket_connect_errorOccurred(QAbstractSocket* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket>>(slot);
	return new QMetaObject::Connection(QAbstractSocket::connect(self, static_cast<void (QAbstractSocket::*)(QAbstractSocket::SocketError)>(&QAbstractSocket::errorOccurred), self, [slot_handle](QAbstractSocket::SocketError param1) {
		intptr_t slot = slot_handle->value();
		QAbstractSocket::SocketError param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		miqt_exec_callback_QAbstractSocket_errorOccurred(slot, sigval1);
	}));
}

void QAbstractSocket_proxyAuthenticationRequired(QAbstractSocket* self, QNetworkProxy* proxy, QAuthenticator* authenticator) {
	self->proxyAuthenticationRequired(*proxy, authenticator);
}

void* QAbstractSocket_connect_proxyAuthenticationRequired(QAbstractSocket* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket>>(slot);
	return new QMetaObject::Connection(QAbstractSocket::connect(self, static_cast<void (QAbstractSocket::*)(const QNetworkProxy&, QAuthenticator*)>(&QAbstractSocket::proxyAuthenticationRequired), self, [slot_handle](const QNetworkProxy& proxy, QAuthenticator* authenticator) {
		intptr_t slot = slot_handle->value();
		const QNetworkProxy& proxy_ret = proxy;
		// Cast returned reference into pointer
		QNetworkProxy* sigval1 = const_cast<QNetworkProxy*>(&proxy_ret);
		QAuthenticator* sigval2 = authenticator;
		miqt_exec_callback_QAbstractSocket_proxyAuthenticationRequired(slot, sigval1, sigval2);
	}));
}

struct miqt_string QAbstractSocket_tr2(const char* s, const char* c) {
	QString _ret = QAbstractSocket::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractSocket_tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractSocket::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractSocket_bindWithPort(QAbstractSocket* self, unsigned short port) {
	return self->bind(static_cast<quint16>(port));
}

bool QAbstractSocket_bind3(QAbstractSocket* self, unsigned short port, int mode) {
	return self->bind(static_cast<quint16>(port), static_cast<QAbstractSocket::BindMode>(mode));
}

void QAbstractSocket_connectToHost3(QAbstractSocket* self, QHostAddress* address, unsigned short port, int mode) {
	self->connectToHost(*address, static_cast<quint16>(port), static_cast<QIODeviceBase::OpenMode>(mode));
}

bool QAbstractSocket_override_virtual_resume(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> slot_handle(slot);
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resume = std::move(slot_handle);
	return true;
}

void QAbstractSocket_virtualbase_resume(void* self) {
	static_cast<MiqtVirtualQAbstractSocket*>(self)->QAbstractSocket::resume();
}

bool QAbstractSocket_override_virtual_bind(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> slot_handle(slot);
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__bind = std::move(slot_handle);
	return true;
}

bool QAbstractSocket_virtualbase_bind(void* self, QHostAddress* address, unsigned short port, int mode) {
	return static_cast<MiqtVirtualQAbstractSocket*>(self)->QAbstractSocket::bind(*address, static_cast<quint16>(port), static_cast<MiqtVirtualQAbstractSocket::BindMode>(mode));
}

bool QAbstractSocket_override_virtual_connectToHost(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> slot_handle(slot);
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectToHost = std::move(slot_handle);
	return true;
}

void QAbstractSocket_virtualbase_connectToHost(void* self, struct miqt_string hostName, unsigned short port, int mode, int protocol) {
	QString hostName_QString = QString::fromUtf8(hostName.data, hostName.len);
	static_cast<MiqtVirtualQAbstractSocket*>(self)->QAbstractSocket::connectToHost(hostName_QString, static_cast<quint16>(port), static_cast<MiqtVirtualQAbstractSocket::OpenMode>(mode), static_cast<MiqtVirtualQAbstractSocket::NetworkLayerProtocol>(protocol));
}

bool QAbstractSocket_override_virtual_disconnectFromHost(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> slot_handle(slot);
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectFromHost = std::move(slot_handle);
	return true;
}

void QAbstractSocket_virtualbase_disconnectFromHost(void* self) {
	static_cast<MiqtVirtualQAbstractSocket*>(self)->QAbstractSocket::disconnectFromHost();
}

bool QAbstractSocket_override_virtual_bytesAvailable(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> slot_handle(slot);
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__bytesAvailable = std::move(slot_handle);
	return true;
}

long long QAbstractSocket_virtualbase_bytesAvailable(const void* self) {
	qint64 _ret = static_cast<const MiqtVirtualQAbstractSocket*>(self)->QAbstractSocket::bytesAvailable();
	return static_cast<long long>(_ret);
}

bool QAbstractSocket_override_virtual_bytesToWrite(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> slot_handle(slot);
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__bytesToWrite = std::move(slot_handle);
	return true;
}

long long QAbstractSocket_virtualbase_bytesToWrite(const void* self) {
	qint64 _ret = static_cast<const MiqtVirtualQAbstractSocket*>(self)->QAbstractSocket::bytesToWrite();
	return static_cast<long long>(_ret);
}

bool QAbstractSocket_override_virtual_setReadBufferSize(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> slot_handle(slot);
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setReadBufferSize = std::move(slot_handle);
	return true;
}

void QAbstractSocket_virtualbase_setReadBufferSize(void* self, long long size) {
	static_cast<MiqtVirtualQAbstractSocket*>(self)->QAbstractSocket::setReadBufferSize(static_cast<qint64>(size));
}

bool QAbstractSocket_override_virtual_socketDescriptor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> slot_handle(slot);
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__socketDescriptor = std::move(slot_handle);
	return true;
}

intptr_t QAbstractSocket_virtualbase_socketDescriptor(const void* self) {
	qintptr _ret = static_cast<const MiqtVirtualQAbstractSocket*>(self)->QAbstractSocket::socketDescriptor();
	return (intptr_t)(_ret);
}

bool QAbstractSocket_override_virtual_setSocketDescriptor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> slot_handle(slot);
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setSocketDescriptor = std::move(slot_handle);
	return true;
}

bool QAbstractSocket_virtualbase_setSocketDescriptor(void* self, intptr_t socketDescriptor, int state, int openMode) {
	return static_cast<MiqtVirtualQAbstractSocket*>(self)->QAbstractSocket::setSocketDescriptor((qintptr)(socketDescriptor), static_cast<MiqtVirtualQAbstractSocket::SocketState>(state), static_cast<MiqtVirtualQAbstractSocket::OpenMode>(openMode));
}

bool QAbstractSocket_override_virtual_setSocketOption(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> slot_handle(slot);
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setSocketOption = std::move(slot_handle);
	return true;
}

void QAbstractSocket_virtualbase_setSocketOption(void* self, int option, QVariant* value) {
	static_cast<MiqtVirtualQAbstractSocket*>(self)->QAbstractSocket::setSocketOption(static_cast<MiqtVirtualQAbstractSocket::SocketOption>(option), *value);
}

bool QAbstractSocket_override_virtual_socketOption(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> slot_handle(slot);
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__socketOption = std::move(slot_handle);
	return true;
}

QVariant* QAbstractSocket_virtualbase_socketOption(void* self, int option) {
	return new QVariant(static_cast<MiqtVirtualQAbstractSocket*>(self)->QAbstractSocket::socketOption(static_cast<MiqtVirtualQAbstractSocket::SocketOption>(option)));
}

bool QAbstractSocket_override_virtual_close(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> slot_handle(slot);
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__close = std::move(slot_handle);
	return true;
}

void QAbstractSocket_virtualbase_close(void* self) {
	static_cast<MiqtVirtualQAbstractSocket*>(self)->QAbstractSocket::close();
}

bool QAbstractSocket_override_virtual_isSequential(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> slot_handle(slot);
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isSequential = std::move(slot_handle);
	return true;
}

bool QAbstractSocket_virtualbase_isSequential(const void* self) {
	return static_cast<const MiqtVirtualQAbstractSocket*>(self)->QAbstractSocket::isSequential();
}

bool QAbstractSocket_override_virtual_waitForConnected(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> slot_handle(slot);
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__waitForConnected = std::move(slot_handle);
	return true;
}

bool QAbstractSocket_virtualbase_waitForConnected(void* self, int msecs) {
	return static_cast<MiqtVirtualQAbstractSocket*>(self)->QAbstractSocket::waitForConnected(static_cast<int>(msecs));
}

bool QAbstractSocket_override_virtual_waitForReadyRead(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> slot_handle(slot);
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__waitForReadyRead = std::move(slot_handle);
	return true;
}

bool QAbstractSocket_virtualbase_waitForReadyRead(void* self, int msecs) {
	return static_cast<MiqtVirtualQAbstractSocket*>(self)->QAbstractSocket::waitForReadyRead(static_cast<int>(msecs));
}

bool QAbstractSocket_override_virtual_waitForBytesWritten(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> slot_handle(slot);
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__waitForBytesWritten = std::move(slot_handle);
	return true;
}

bool QAbstractSocket_virtualbase_waitForBytesWritten(void* self, int msecs) {
	return static_cast<MiqtVirtualQAbstractSocket*>(self)->QAbstractSocket::waitForBytesWritten(static_cast<int>(msecs));
}

bool QAbstractSocket_override_virtual_waitForDisconnected(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> slot_handle(slot);
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__waitForDisconnected = std::move(slot_handle);
	return true;
}

bool QAbstractSocket_virtualbase_waitForDisconnected(void* self, int msecs) {
	return static_cast<MiqtVirtualQAbstractSocket*>(self)->QAbstractSocket::waitForDisconnected(static_cast<int>(msecs));
}

bool QAbstractSocket_override_virtual_readData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> slot_handle(slot);
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__readData = std::move(slot_handle);
	return true;
}

long long QAbstractSocket_virtualbase_readData(void* self, char* data, long long maxlen) {
	qint64 _ret = static_cast<MiqtVirtualQAbstractSocket*>(self)->QAbstractSocket::readData(data, static_cast<qint64>(maxlen));
	return static_cast<long long>(_ret);
}

bool QAbstractSocket_override_virtual_readLineData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> slot_handle(slot);
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__readLineData = std::move(slot_handle);
	return true;
}

long long QAbstractSocket_virtualbase_readLineData(void* self, char* data, long long maxlen) {
	qint64 _ret = static_cast<MiqtVirtualQAbstractSocket*>(self)->QAbstractSocket::readLineData(data, static_cast<qint64>(maxlen));
	return static_cast<long long>(_ret);
}

bool QAbstractSocket_override_virtual_skipData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> slot_handle(slot);
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__skipData = std::move(slot_handle);
	return true;
}

long long QAbstractSocket_virtualbase_skipData(void* self, long long maxSize) {
	qint64 _ret = static_cast<MiqtVirtualQAbstractSocket*>(self)->QAbstractSocket::skipData(static_cast<qint64>(maxSize));
	return static_cast<long long>(_ret);
}

bool QAbstractSocket_override_virtual_writeData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> slot_handle(slot);
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__writeData = std::move(slot_handle);
	return true;
}

long long QAbstractSocket_virtualbase_writeData(void* self, const char* data, long long len) {
	qint64 _ret = static_cast<MiqtVirtualQAbstractSocket*>(self)->QAbstractSocket::writeData(data, static_cast<qint64>(len));
	return static_cast<long long>(_ret);
}

bool QAbstractSocket_override_virtual_open(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> slot_handle(slot);
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__open = std::move(slot_handle);
	return true;
}

bool QAbstractSocket_virtualbase_open(void* self, int mode) {
	return static_cast<MiqtVirtualQAbstractSocket*>(self)->QAbstractSocket::open(static_cast<MiqtVirtualQAbstractSocket::OpenMode>(mode));
}

bool QAbstractSocket_override_virtual_pos(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> slot_handle(slot);
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__pos = std::move(slot_handle);
	return true;
}

long long QAbstractSocket_virtualbase_pos(const void* self) {
	qint64 _ret = static_cast<const MiqtVirtualQAbstractSocket*>(self)->QAbstractSocket::pos();
	return static_cast<long long>(_ret);
}

bool QAbstractSocket_override_virtual_size(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> slot_handle(slot);
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__size = std::move(slot_handle);
	return true;
}

long long QAbstractSocket_virtualbase_size(const void* self) {
	qint64 _ret = static_cast<const MiqtVirtualQAbstractSocket*>(self)->QAbstractSocket::size();
	return static_cast<long long>(_ret);
}

bool QAbstractSocket_override_virtual_seek(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> slot_handle(slot);
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__seek = std::move(slot_handle);
	return true;
}

bool QAbstractSocket_virtualbase_seek(void* self, long long pos) {
	return static_cast<MiqtVirtualQAbstractSocket*>(self)->QAbstractSocket::seek(static_cast<qint64>(pos));
}

bool QAbstractSocket_override_virtual_atEnd(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> slot_handle(slot);
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__atEnd = std::move(slot_handle);
	return true;
}

bool QAbstractSocket_virtualbase_atEnd(const void* self) {
	return static_cast<const MiqtVirtualQAbstractSocket*>(self)->QAbstractSocket::atEnd();
}

bool QAbstractSocket_override_virtual_reset(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> slot_handle(slot);
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__reset = std::move(slot_handle);
	return true;
}

bool QAbstractSocket_virtualbase_reset(void* self) {
	return static_cast<MiqtVirtualQAbstractSocket*>(self)->QAbstractSocket::reset();
}

bool QAbstractSocket_override_virtual_canReadLine(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> slot_handle(slot);
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__canReadLine = std::move(slot_handle);
	return true;
}

bool QAbstractSocket_virtualbase_canReadLine(const void* self) {
	return static_cast<const MiqtVirtualQAbstractSocket*>(self)->QAbstractSocket::canReadLine();
}

bool QAbstractSocket_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> slot_handle(slot);
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QAbstractSocket_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQAbstractSocket*>(self)->QAbstractSocket::event(event);
}

bool QAbstractSocket_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> slot_handle(slot);
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QAbstractSocket_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQAbstractSocket*>(self)->QAbstractSocket::eventFilter(watched, event);
}

bool QAbstractSocket_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> slot_handle(slot);
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QAbstractSocket_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQAbstractSocket*>(self)->QAbstractSocket::timerEvent(event);
}

bool QAbstractSocket_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> slot_handle(slot);
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QAbstractSocket_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQAbstractSocket*>(self)->QAbstractSocket::childEvent(event);
}

bool QAbstractSocket_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> slot_handle(slot);
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QAbstractSocket_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQAbstractSocket*>(self)->QAbstractSocket::customEvent(event);
}

bool QAbstractSocket_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> slot_handle(slot);
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QAbstractSocket_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQAbstractSocket*>(self)->QAbstractSocket::connectNotify(*signal);
}

bool QAbstractSocket_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSocket> slot_handle(slot);
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QAbstractSocket_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQAbstractSocket*>(self)->QAbstractSocket::disconnectNotify(*signal);
}

void QAbstractSocket_protectedbase_setSocketState(bool* _dynamic_cast_ok, void* self, int state) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setSocketState(static_cast<MiqtVirtualQAbstractSocket::SocketState>(state));
}

void QAbstractSocket_protectedbase_setSocketError(bool* _dynamic_cast_ok, void* self, int socketError) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setSocketError(static_cast<MiqtVirtualQAbstractSocket::SocketError>(socketError));
}

void QAbstractSocket_protectedbase_setLocalPort(bool* _dynamic_cast_ok, void* self, unsigned short port) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setLocalPort(static_cast<quint16>(port));
}

void QAbstractSocket_protectedbase_setLocalAddress(bool* _dynamic_cast_ok, void* self, QHostAddress* address) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setLocalAddress(*address);
}

void QAbstractSocket_protectedbase_setPeerPort(bool* _dynamic_cast_ok, void* self, unsigned short port) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setPeerPort(static_cast<quint16>(port));
}

void QAbstractSocket_protectedbase_setPeerAddress(bool* _dynamic_cast_ok, void* self, QHostAddress* address) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setPeerAddress(*address);
}

void QAbstractSocket_protectedbase_setPeerName(bool* _dynamic_cast_ok, void* self, struct miqt_string name) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
		QString name_QString = QString::fromUtf8(name.data, name.len);
	self_cast->setPeerName(name_QString);
}

void QAbstractSocket_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setOpenMode(static_cast<MiqtVirtualQAbstractSocket::OpenMode>(openMode));
}

void QAbstractSocket_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
		QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
	self_cast->setErrorString(errorString_QString);
}

QObject* QAbstractSocket_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QAbstractSocket_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QAbstractSocket_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QAbstractSocket_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAbstractSocket* self_cast = dynamic_cast<MiqtVirtualQAbstractSocket*>( (QAbstractSocket*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QAbstractSocket_delete(QAbstractSocket* self) {
	delete self;
}

