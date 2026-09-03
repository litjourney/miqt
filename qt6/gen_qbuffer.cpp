#include <memory>
#include <utility>
#include <QBuffer>
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
#include <qbuffer.h>
#include "gen_qbuffer.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QBuffer(intptr_t);
bool miqt_exec_callback_QBuffer_open(QBuffer*, intptr_t, int);
void miqt_exec_callback_QBuffer_close(QBuffer*, intptr_t);
long long miqt_exec_callback_QBuffer_size(const QBuffer*, intptr_t);
long long miqt_exec_callback_QBuffer_pos(const QBuffer*, intptr_t);
bool miqt_exec_callback_QBuffer_seek(QBuffer*, intptr_t, long long);
bool miqt_exec_callback_QBuffer_atEnd(const QBuffer*, intptr_t);
bool miqt_exec_callback_QBuffer_canReadLine(const QBuffer*, intptr_t);
void miqt_exec_callback_QBuffer_connectNotify(QBuffer*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QBuffer_disconnectNotify(QBuffer*, intptr_t, QMetaMethod*);
long long miqt_exec_callback_QBuffer_readData(QBuffer*, intptr_t, char*, long long);
long long miqt_exec_callback_QBuffer_writeData(QBuffer*, intptr_t, const char*, long long);
bool miqt_exec_callback_QBuffer_isSequential(const QBuffer*, intptr_t);
bool miqt_exec_callback_QBuffer_reset(QBuffer*, intptr_t);
long long miqt_exec_callback_QBuffer_bytesAvailable(const QBuffer*, intptr_t);
long long miqt_exec_callback_QBuffer_bytesToWrite(const QBuffer*, intptr_t);
bool miqt_exec_callback_QBuffer_waitForReadyRead(QBuffer*, intptr_t, int);
bool miqt_exec_callback_QBuffer_waitForBytesWritten(QBuffer*, intptr_t, int);
long long miqt_exec_callback_QBuffer_readLineData(QBuffer*, intptr_t, char*, long long);
long long miqt_exec_callback_QBuffer_skipData(QBuffer*, intptr_t, long long);
bool miqt_exec_callback_QBuffer_event(QBuffer*, intptr_t, QEvent*);
bool miqt_exec_callback_QBuffer_eventFilter(QBuffer*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QBuffer_timerEvent(QBuffer*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QBuffer_childEvent(QBuffer*, intptr_t, QChildEvent*);
void miqt_exec_callback_QBuffer_customEvent(QBuffer*, intptr_t, QEvent*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQBuffer final : public QBuffer {
public:

	MiqtVirtualQBuffer(): QBuffer() {}
	MiqtVirtualQBuffer(QObject* parent): QBuffer(parent) {}

	virtual ~MiqtVirtualQBuffer() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> handle__open;

	// Subclass to allow providing a Go implementation
	virtual bool open(QIODeviceBase::OpenMode openMode) override {
		if (!handle__open) {
			return QBuffer::open(openMode);
		}

		QIODeviceBase::OpenMode openMode_ret = openMode;
		int sigval1 = static_cast<int>(openMode_ret);
		bool callback_return_value = miqt_exec_callback_QBuffer_open(this, handle__open.value(), sigval1);
		return callback_return_value;
	}

	friend bool QBuffer_virtualbase_open(void* self, int openMode);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> handle__close;

	// Subclass to allow providing a Go implementation
	virtual void close() override {
		if (!handle__close) {
			QBuffer::close();
			return;
		}

		miqt_exec_callback_QBuffer_close(this, handle__close.value());

	}

	friend void QBuffer_virtualbase_close(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> handle__size;

	// Subclass to allow providing a Go implementation
	virtual qint64 size() const override {
		if (!handle__size) {
			return QBuffer::size();
		}

		long long callback_return_value = miqt_exec_callback_QBuffer_size(this, handle__size.value());
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QBuffer_virtualbase_size(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> handle__pos;

	// Subclass to allow providing a Go implementation
	virtual qint64 pos() const override {
		if (!handle__pos) {
			return QBuffer::pos();
		}

		long long callback_return_value = miqt_exec_callback_QBuffer_pos(this, handle__pos.value());
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QBuffer_virtualbase_pos(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> handle__seek;

	// Subclass to allow providing a Go implementation
	virtual bool seek(qint64 off) override {
		if (!handle__seek) {
			return QBuffer::seek(off);
		}

		qint64 off_ret = off;
		long long sigval1 = static_cast<long long>(off_ret);
		bool callback_return_value = miqt_exec_callback_QBuffer_seek(this, handle__seek.value(), sigval1);
		return callback_return_value;
	}

	friend bool QBuffer_virtualbase_seek(void* self, long long off);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> handle__atEnd;

	// Subclass to allow providing a Go implementation
	virtual bool atEnd() const override {
		if (!handle__atEnd) {
			return QBuffer::atEnd();
		}

		bool callback_return_value = miqt_exec_callback_QBuffer_atEnd(this, handle__atEnd.value());
		return callback_return_value;
	}

	friend bool QBuffer_virtualbase_atEnd(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> handle__canReadLine;

	// Subclass to allow providing a Go implementation
	virtual bool canReadLine() const override {
		if (!handle__canReadLine) {
			return QBuffer::canReadLine();
		}

		bool callback_return_value = miqt_exec_callback_QBuffer_canReadLine(this, handle__canReadLine.value());
		return callback_return_value;
	}

	friend bool QBuffer_virtualbase_canReadLine(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& param1) override {
		if (!handle__connectNotify) {
			QBuffer::connectNotify(param1);
			return;
		}

		const QMetaMethod& param1_ret = param1;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&param1_ret);
		miqt_exec_callback_QBuffer_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QBuffer_virtualbase_connectNotify(void* self, QMetaMethod* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& param1) override {
		if (!handle__disconnectNotify) {
			QBuffer::disconnectNotify(param1);
			return;
		}

		const QMetaMethod& param1_ret = param1;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&param1_ret);
		miqt_exec_callback_QBuffer_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QBuffer_virtualbase_disconnectNotify(void* self, QMetaMethod* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> handle__readData;

	// Subclass to allow providing a Go implementation
	virtual qint64 readData(char* data, qint64 maxlen) override {
		if (!handle__readData) {
			return QBuffer::readData(data, maxlen);
		}

		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);
		long long callback_return_value = miqt_exec_callback_QBuffer_readData(this, handle__readData.value(), sigval1, sigval2);
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QBuffer_virtualbase_readData(void* self, char* data, long long maxlen);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> handle__writeData;

	// Subclass to allow providing a Go implementation
	virtual qint64 writeData(const char* data, qint64 len) override {
		if (!handle__writeData) {
			return QBuffer::writeData(data, len);
		}

		const char* sigval1 = (const char*) data;
		qint64 len_ret = len;
		long long sigval2 = static_cast<long long>(len_ret);
		long long callback_return_value = miqt_exec_callback_QBuffer_writeData(this, handle__writeData.value(), sigval1, sigval2);
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QBuffer_virtualbase_writeData(void* self, const char* data, long long len);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> handle__isSequential;

	// Subclass to allow providing a Go implementation
	virtual bool isSequential() const override {
		if (!handle__isSequential) {
			return QBuffer::isSequential();
		}

		bool callback_return_value = miqt_exec_callback_QBuffer_isSequential(this, handle__isSequential.value());
		return callback_return_value;
	}

	friend bool QBuffer_virtualbase_isSequential(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> handle__reset;

	// Subclass to allow providing a Go implementation
	virtual bool reset() override {
		if (!handle__reset) {
			return QBuffer::reset();
		}

		bool callback_return_value = miqt_exec_callback_QBuffer_reset(this, handle__reset.value());
		return callback_return_value;
	}

	friend bool QBuffer_virtualbase_reset(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> handle__bytesAvailable;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesAvailable() const override {
		if (!handle__bytesAvailable) {
			return QBuffer::bytesAvailable();
		}

		long long callback_return_value = miqt_exec_callback_QBuffer_bytesAvailable(this, handle__bytesAvailable.value());
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QBuffer_virtualbase_bytesAvailable(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> handle__bytesToWrite;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesToWrite() const override {
		if (!handle__bytesToWrite) {
			return QBuffer::bytesToWrite();
		}

		long long callback_return_value = miqt_exec_callback_QBuffer_bytesToWrite(this, handle__bytesToWrite.value());
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QBuffer_virtualbase_bytesToWrite(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> handle__waitForReadyRead;

	// Subclass to allow providing a Go implementation
	virtual bool waitForReadyRead(int msecs) override {
		if (!handle__waitForReadyRead) {
			return QBuffer::waitForReadyRead(msecs);
		}

		int sigval1 = msecs;
		bool callback_return_value = miqt_exec_callback_QBuffer_waitForReadyRead(this, handle__waitForReadyRead.value(), sigval1);
		return callback_return_value;
	}

	friend bool QBuffer_virtualbase_waitForReadyRead(void* self, int msecs);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> handle__waitForBytesWritten;

	// Subclass to allow providing a Go implementation
	virtual bool waitForBytesWritten(int msecs) override {
		if (!handle__waitForBytesWritten) {
			return QBuffer::waitForBytesWritten(msecs);
		}

		int sigval1 = msecs;
		bool callback_return_value = miqt_exec_callback_QBuffer_waitForBytesWritten(this, handle__waitForBytesWritten.value(), sigval1);
		return callback_return_value;
	}

	friend bool QBuffer_virtualbase_waitForBytesWritten(void* self, int msecs);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> handle__readLineData;

	// Subclass to allow providing a Go implementation
	virtual qint64 readLineData(char* data, qint64 maxlen) override {
		if (!handle__readLineData) {
			return QBuffer::readLineData(data, maxlen);
		}

		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);
		long long callback_return_value = miqt_exec_callback_QBuffer_readLineData(this, handle__readLineData.value(), sigval1, sigval2);
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QBuffer_virtualbase_readLineData(void* self, char* data, long long maxlen);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> handle__skipData;

	// Subclass to allow providing a Go implementation
	virtual qint64 skipData(qint64 maxSize) override {
		if (!handle__skipData) {
			return QBuffer::skipData(maxSize);
		}

		qint64 maxSize_ret = maxSize;
		long long sigval1 = static_cast<long long>(maxSize_ret);
		long long callback_return_value = miqt_exec_callback_QBuffer_skipData(this, handle__skipData.value(), sigval1);
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QBuffer_virtualbase_skipData(void* self, long long maxSize);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QBuffer::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QBuffer_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QBuffer_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QBuffer::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QBuffer_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QBuffer_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QBuffer::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QBuffer_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QBuffer_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QBuffer::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QBuffer_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QBuffer_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QBuffer::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QBuffer_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QBuffer_virtualbase_customEvent(void* self, QEvent* event);

	// Wrappers to allow calling protected methods:
	friend void QBuffer_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode);
	friend void QBuffer_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString);
	friend QObject* QBuffer_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QBuffer_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QBuffer_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QBuffer_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QBuffer* QBuffer_new() {
	return new (std::nothrow) MiqtVirtualQBuffer();
}

QBuffer* QBuffer_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQBuffer(parent);
}

void QBuffer_virtbase(QBuffer* src, QIODevice** outptr_QIODevice) {
	*outptr_QIODevice = static_cast<QIODevice*>(src);
}

QMetaObject* QBuffer_metaObject(const QBuffer* self) {
	return (QMetaObject*) self->metaObject();
}

void* QBuffer_metacast(QBuffer* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QBuffer_tr(const char* s) {
	QString _ret = QBuffer::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QBuffer_buffer(QBuffer* self) {
	QByteArray _qb = self->buffer();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QBuffer_buffer2(const QBuffer* self) {
	const QByteArray _qb = self->buffer();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

void QBuffer_setData(QBuffer* self, struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	self->setData(data_QByteArray);
}

void QBuffer_setData2(QBuffer* self, const char* data, int len) {
	self->setData(data, static_cast<int>(len));
}

struct miqt_string QBuffer_data(const QBuffer* self) {
	const QByteArray _qb = self->data();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

bool QBuffer_open(QBuffer* self, int openMode) {
	return self->open(static_cast<QIODeviceBase::OpenMode>(openMode));
}

void QBuffer_close(QBuffer* self) {
	self->close();
}

long long QBuffer_size(const QBuffer* self) {
	qint64 _ret = self->size();
	return static_cast<long long>(_ret);
}

long long QBuffer_pos(const QBuffer* self) {
	qint64 _ret = self->pos();
	return static_cast<long long>(_ret);
}

bool QBuffer_seek(QBuffer* self, long long off) {
	return self->seek(static_cast<qint64>(off));
}

bool QBuffer_atEnd(const QBuffer* self) {
	return self->atEnd();
}

bool QBuffer_canReadLine(const QBuffer* self) {
	return self->canReadLine();
}

struct miqt_string QBuffer_tr2(const char* s, const char* c) {
	QString _ret = QBuffer::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QBuffer_tr3(const char* s, const char* c, int n) {
	QString _ret = QBuffer::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QBuffer_override_virtual_open(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> slot_handle(slot);
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__open = std::move(slot_handle);
	return true;
}

bool QBuffer_virtualbase_open(void* self, int openMode) {
	return static_cast<MiqtVirtualQBuffer*>(self)->QBuffer::open(static_cast<MiqtVirtualQBuffer::OpenMode>(openMode));
}

bool QBuffer_override_virtual_close(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> slot_handle(slot);
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__close = std::move(slot_handle);
	return true;
}

void QBuffer_virtualbase_close(void* self) {
	static_cast<MiqtVirtualQBuffer*>(self)->QBuffer::close();
}

bool QBuffer_override_virtual_size(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> slot_handle(slot);
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__size = std::move(slot_handle);
	return true;
}

long long QBuffer_virtualbase_size(const void* self) {
	qint64 _ret = static_cast<const MiqtVirtualQBuffer*>(self)->QBuffer::size();
	return static_cast<long long>(_ret);
}

bool QBuffer_override_virtual_pos(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> slot_handle(slot);
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__pos = std::move(slot_handle);
	return true;
}

long long QBuffer_virtualbase_pos(const void* self) {
	qint64 _ret = static_cast<const MiqtVirtualQBuffer*>(self)->QBuffer::pos();
	return static_cast<long long>(_ret);
}

bool QBuffer_override_virtual_seek(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> slot_handle(slot);
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__seek = std::move(slot_handle);
	return true;
}

bool QBuffer_virtualbase_seek(void* self, long long off) {
	return static_cast<MiqtVirtualQBuffer*>(self)->QBuffer::seek(static_cast<qint64>(off));
}

bool QBuffer_override_virtual_atEnd(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> slot_handle(slot);
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__atEnd = std::move(slot_handle);
	return true;
}

bool QBuffer_virtualbase_atEnd(const void* self) {
	return static_cast<const MiqtVirtualQBuffer*>(self)->QBuffer::atEnd();
}

bool QBuffer_override_virtual_canReadLine(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> slot_handle(slot);
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__canReadLine = std::move(slot_handle);
	return true;
}

bool QBuffer_virtualbase_canReadLine(const void* self) {
	return static_cast<const MiqtVirtualQBuffer*>(self)->QBuffer::canReadLine();
}

bool QBuffer_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> slot_handle(slot);
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QBuffer_virtualbase_connectNotify(void* self, QMetaMethod* param1) {
	static_cast<MiqtVirtualQBuffer*>(self)->QBuffer::connectNotify(*param1);
}

bool QBuffer_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> slot_handle(slot);
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QBuffer_virtualbase_disconnectNotify(void* self, QMetaMethod* param1) {
	static_cast<MiqtVirtualQBuffer*>(self)->QBuffer::disconnectNotify(*param1);
}

bool QBuffer_override_virtual_readData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> slot_handle(slot);
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__readData = std::move(slot_handle);
	return true;
}

long long QBuffer_virtualbase_readData(void* self, char* data, long long maxlen) {
	qint64 _ret = static_cast<MiqtVirtualQBuffer*>(self)->QBuffer::readData(data, static_cast<qint64>(maxlen));
	return static_cast<long long>(_ret);
}

bool QBuffer_override_virtual_writeData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> slot_handle(slot);
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__writeData = std::move(slot_handle);
	return true;
}

long long QBuffer_virtualbase_writeData(void* self, const char* data, long long len) {
	qint64 _ret = static_cast<MiqtVirtualQBuffer*>(self)->QBuffer::writeData(data, static_cast<qint64>(len));
	return static_cast<long long>(_ret);
}

bool QBuffer_override_virtual_isSequential(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> slot_handle(slot);
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isSequential = std::move(slot_handle);
	return true;
}

bool QBuffer_virtualbase_isSequential(const void* self) {
	return static_cast<const MiqtVirtualQBuffer*>(self)->QBuffer::isSequential();
}

bool QBuffer_override_virtual_reset(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> slot_handle(slot);
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__reset = std::move(slot_handle);
	return true;
}

bool QBuffer_virtualbase_reset(void* self) {
	return static_cast<MiqtVirtualQBuffer*>(self)->QBuffer::reset();
}

bool QBuffer_override_virtual_bytesAvailable(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> slot_handle(slot);
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__bytesAvailable = std::move(slot_handle);
	return true;
}

long long QBuffer_virtualbase_bytesAvailable(const void* self) {
	qint64 _ret = static_cast<const MiqtVirtualQBuffer*>(self)->QBuffer::bytesAvailable();
	return static_cast<long long>(_ret);
}

bool QBuffer_override_virtual_bytesToWrite(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> slot_handle(slot);
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__bytesToWrite = std::move(slot_handle);
	return true;
}

long long QBuffer_virtualbase_bytesToWrite(const void* self) {
	qint64 _ret = static_cast<const MiqtVirtualQBuffer*>(self)->QBuffer::bytesToWrite();
	return static_cast<long long>(_ret);
}

bool QBuffer_override_virtual_waitForReadyRead(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> slot_handle(slot);
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__waitForReadyRead = std::move(slot_handle);
	return true;
}

bool QBuffer_virtualbase_waitForReadyRead(void* self, int msecs) {
	return static_cast<MiqtVirtualQBuffer*>(self)->QBuffer::waitForReadyRead(static_cast<int>(msecs));
}

bool QBuffer_override_virtual_waitForBytesWritten(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> slot_handle(slot);
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__waitForBytesWritten = std::move(slot_handle);
	return true;
}

bool QBuffer_virtualbase_waitForBytesWritten(void* self, int msecs) {
	return static_cast<MiqtVirtualQBuffer*>(self)->QBuffer::waitForBytesWritten(static_cast<int>(msecs));
}

bool QBuffer_override_virtual_readLineData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> slot_handle(slot);
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__readLineData = std::move(slot_handle);
	return true;
}

long long QBuffer_virtualbase_readLineData(void* self, char* data, long long maxlen) {
	qint64 _ret = static_cast<MiqtVirtualQBuffer*>(self)->QBuffer::readLineData(data, static_cast<qint64>(maxlen));
	return static_cast<long long>(_ret);
}

bool QBuffer_override_virtual_skipData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> slot_handle(slot);
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__skipData = std::move(slot_handle);
	return true;
}

long long QBuffer_virtualbase_skipData(void* self, long long maxSize) {
	qint64 _ret = static_cast<MiqtVirtualQBuffer*>(self)->QBuffer::skipData(static_cast<qint64>(maxSize));
	return static_cast<long long>(_ret);
}

bool QBuffer_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> slot_handle(slot);
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QBuffer_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQBuffer*>(self)->QBuffer::event(event);
}

bool QBuffer_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> slot_handle(slot);
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QBuffer_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQBuffer*>(self)->QBuffer::eventFilter(watched, event);
}

bool QBuffer_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> slot_handle(slot);
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QBuffer_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQBuffer*>(self)->QBuffer::timerEvent(event);
}

bool QBuffer_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> slot_handle(slot);
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QBuffer_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQBuffer*>(self)->QBuffer::childEvent(event);
}

bool QBuffer_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QBuffer> slot_handle(slot);
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QBuffer_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQBuffer*>(self)->QBuffer::customEvent(event);
}

void QBuffer_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode) {
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setOpenMode(static_cast<MiqtVirtualQBuffer::OpenMode>(openMode));
}

void QBuffer_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString) {
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
		QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
	self_cast->setErrorString(errorString_QString);
}

QObject* QBuffer_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QBuffer_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QBuffer_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QBuffer_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQBuffer* self_cast = dynamic_cast<MiqtVirtualQBuffer*>( (QBuffer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QBuffer_delete(QBuffer* self) {
	delete self;
}

