#include <memory>
#include <utility>
#include <QAudioFormat>
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
#include <QWaveDecoder>
#include <qwavedecoder.h>
#include "gen_qwavedecoder.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QWaveDecoder(intptr_t);
void miqt_exec_callback_QWaveDecoder_formatKnown(intptr_t);
void miqt_exec_callback_QWaveDecoder_parsingError(intptr_t);
bool miqt_exec_callback_QWaveDecoder_open(QWaveDecoder*, intptr_t, int);
void miqt_exec_callback_QWaveDecoder_close(QWaveDecoder*, intptr_t);
bool miqt_exec_callback_QWaveDecoder_seek(QWaveDecoder*, intptr_t, long long);
long long miqt_exec_callback_QWaveDecoder_pos(const QWaveDecoder*, intptr_t);
long long miqt_exec_callback_QWaveDecoder_size(const QWaveDecoder*, intptr_t);
bool miqt_exec_callback_QWaveDecoder_isSequential(const QWaveDecoder*, intptr_t);
long long miqt_exec_callback_QWaveDecoder_bytesAvailable(const QWaveDecoder*, intptr_t);
bool miqt_exec_callback_QWaveDecoder_atEnd(const QWaveDecoder*, intptr_t);
bool miqt_exec_callback_QWaveDecoder_reset(QWaveDecoder*, intptr_t);
long long miqt_exec_callback_QWaveDecoder_bytesToWrite(const QWaveDecoder*, intptr_t);
bool miqt_exec_callback_QWaveDecoder_canReadLine(const QWaveDecoder*, intptr_t);
bool miqt_exec_callback_QWaveDecoder_waitForReadyRead(QWaveDecoder*, intptr_t, int);
bool miqt_exec_callback_QWaveDecoder_waitForBytesWritten(QWaveDecoder*, intptr_t, int);
long long miqt_exec_callback_QWaveDecoder_readLineData(QWaveDecoder*, intptr_t, char*, long long);
long long miqt_exec_callback_QWaveDecoder_skipData(QWaveDecoder*, intptr_t, long long);
bool miqt_exec_callback_QWaveDecoder_event(QWaveDecoder*, intptr_t, QEvent*);
bool miqt_exec_callback_QWaveDecoder_eventFilter(QWaveDecoder*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QWaveDecoder_timerEvent(QWaveDecoder*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QWaveDecoder_childEvent(QWaveDecoder*, intptr_t, QChildEvent*);
void miqt_exec_callback_QWaveDecoder_customEvent(QWaveDecoder*, intptr_t, QEvent*);
void miqt_exec_callback_QWaveDecoder_connectNotify(QWaveDecoder*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QWaveDecoder_disconnectNotify(QWaveDecoder*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQWaveDecoder final : public QWaveDecoder {
public:

	MiqtVirtualQWaveDecoder(QIODevice* device): QWaveDecoder(device) {}
	MiqtVirtualQWaveDecoder(QIODevice* device, const QAudioFormat& format): QWaveDecoder(device, format) {}
	MiqtVirtualQWaveDecoder(QIODevice* device, QObject* parent): QWaveDecoder(device, parent) {}
	MiqtVirtualQWaveDecoder(QIODevice* device, const QAudioFormat& format, QObject* parent): QWaveDecoder(device, format, parent) {}

	virtual ~MiqtVirtualQWaveDecoder() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> handle__open;

	// Subclass to allow providing a Go implementation
	virtual bool open(QIODevice::OpenMode mode) override {
		if (!handle__open) {
			return QWaveDecoder::open(mode);
		}

		QIODevice::OpenMode mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);
		bool callback_return_value = miqt_exec_callback_QWaveDecoder_open(this, handle__open.value(), sigval1);
		return callback_return_value;
	}

	friend bool QWaveDecoder_virtualbase_open(void* self, int mode);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> handle__close;

	// Subclass to allow providing a Go implementation
	virtual void close() override {
		if (!handle__close) {
			QWaveDecoder::close();
			return;
		}

		miqt_exec_callback_QWaveDecoder_close(this, handle__close.value());

	}

	friend void QWaveDecoder_virtualbase_close(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> handle__seek;

	// Subclass to allow providing a Go implementation
	virtual bool seek(qint64 pos) override {
		if (!handle__seek) {
			return QWaveDecoder::seek(pos);
		}

		qint64 pos_ret = pos;
		long long sigval1 = static_cast<long long>(pos_ret);
		bool callback_return_value = miqt_exec_callback_QWaveDecoder_seek(this, handle__seek.value(), sigval1);
		return callback_return_value;
	}

	friend bool QWaveDecoder_virtualbase_seek(void* self, long long pos);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> handle__pos;

	// Subclass to allow providing a Go implementation
	virtual qint64 pos() const override {
		if (!handle__pos) {
			return QWaveDecoder::pos();
		}

		long long callback_return_value = miqt_exec_callback_QWaveDecoder_pos(this, handle__pos.value());
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QWaveDecoder_virtualbase_pos(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> handle__size;

	// Subclass to allow providing a Go implementation
	virtual qint64 size() const override {
		if (!handle__size) {
			return QWaveDecoder::size();
		}

		long long callback_return_value = miqt_exec_callback_QWaveDecoder_size(this, handle__size.value());
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QWaveDecoder_virtualbase_size(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> handle__isSequential;

	// Subclass to allow providing a Go implementation
	virtual bool isSequential() const override {
		if (!handle__isSequential) {
			return QWaveDecoder::isSequential();
		}

		bool callback_return_value = miqt_exec_callback_QWaveDecoder_isSequential(this, handle__isSequential.value());
		return callback_return_value;
	}

	friend bool QWaveDecoder_virtualbase_isSequential(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> handle__bytesAvailable;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesAvailable() const override {
		if (!handle__bytesAvailable) {
			return QWaveDecoder::bytesAvailable();
		}

		long long callback_return_value = miqt_exec_callback_QWaveDecoder_bytesAvailable(this, handle__bytesAvailable.value());
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QWaveDecoder_virtualbase_bytesAvailable(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> handle__atEnd;

	// Subclass to allow providing a Go implementation
	virtual bool atEnd() const override {
		if (!handle__atEnd) {
			return QWaveDecoder::atEnd();
		}

		bool callback_return_value = miqt_exec_callback_QWaveDecoder_atEnd(this, handle__atEnd.value());
		return callback_return_value;
	}

	friend bool QWaveDecoder_virtualbase_atEnd(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> handle__reset;

	// Subclass to allow providing a Go implementation
	virtual bool reset() override {
		if (!handle__reset) {
			return QWaveDecoder::reset();
		}

		bool callback_return_value = miqt_exec_callback_QWaveDecoder_reset(this, handle__reset.value());
		return callback_return_value;
	}

	friend bool QWaveDecoder_virtualbase_reset(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> handle__bytesToWrite;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesToWrite() const override {
		if (!handle__bytesToWrite) {
			return QWaveDecoder::bytesToWrite();
		}

		long long callback_return_value = miqt_exec_callback_QWaveDecoder_bytesToWrite(this, handle__bytesToWrite.value());
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QWaveDecoder_virtualbase_bytesToWrite(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> handle__canReadLine;

	// Subclass to allow providing a Go implementation
	virtual bool canReadLine() const override {
		if (!handle__canReadLine) {
			return QWaveDecoder::canReadLine();
		}

		bool callback_return_value = miqt_exec_callback_QWaveDecoder_canReadLine(this, handle__canReadLine.value());
		return callback_return_value;
	}

	friend bool QWaveDecoder_virtualbase_canReadLine(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> handle__waitForReadyRead;

	// Subclass to allow providing a Go implementation
	virtual bool waitForReadyRead(int msecs) override {
		if (!handle__waitForReadyRead) {
			return QWaveDecoder::waitForReadyRead(msecs);
		}

		int sigval1 = msecs;
		bool callback_return_value = miqt_exec_callback_QWaveDecoder_waitForReadyRead(this, handle__waitForReadyRead.value(), sigval1);
		return callback_return_value;
	}

	friend bool QWaveDecoder_virtualbase_waitForReadyRead(void* self, int msecs);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> handle__waitForBytesWritten;

	// Subclass to allow providing a Go implementation
	virtual bool waitForBytesWritten(int msecs) override {
		if (!handle__waitForBytesWritten) {
			return QWaveDecoder::waitForBytesWritten(msecs);
		}

		int sigval1 = msecs;
		bool callback_return_value = miqt_exec_callback_QWaveDecoder_waitForBytesWritten(this, handle__waitForBytesWritten.value(), sigval1);
		return callback_return_value;
	}

	friend bool QWaveDecoder_virtualbase_waitForBytesWritten(void* self, int msecs);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> handle__readLineData;

	// Subclass to allow providing a Go implementation
	virtual qint64 readLineData(char* data, qint64 maxlen) override {
		if (!handle__readLineData) {
			return QWaveDecoder::readLineData(data, maxlen);
		}

		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);
		long long callback_return_value = miqt_exec_callback_QWaveDecoder_readLineData(this, handle__readLineData.value(), sigval1, sigval2);
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QWaveDecoder_virtualbase_readLineData(void* self, char* data, long long maxlen);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> handle__skipData;

	// Subclass to allow providing a Go implementation
	virtual qint64 skipData(qint64 maxSize) override {
		if (!handle__skipData) {
			return QWaveDecoder::skipData(maxSize);
		}

		qint64 maxSize_ret = maxSize;
		long long sigval1 = static_cast<long long>(maxSize_ret);
		long long callback_return_value = miqt_exec_callback_QWaveDecoder_skipData(this, handle__skipData.value(), sigval1);
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QWaveDecoder_virtualbase_skipData(void* self, long long maxSize);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QWaveDecoder::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QWaveDecoder_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QWaveDecoder_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QWaveDecoder::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QWaveDecoder_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QWaveDecoder_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QWaveDecoder::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QWaveDecoder_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QWaveDecoder_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QWaveDecoder::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QWaveDecoder_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QWaveDecoder_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QWaveDecoder::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QWaveDecoder_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QWaveDecoder_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QWaveDecoder::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QWaveDecoder_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QWaveDecoder_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QWaveDecoder::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QWaveDecoder_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QWaveDecoder_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QWaveDecoder_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode);
	friend void QWaveDecoder_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString);
	friend QObject* QWaveDecoder_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QWaveDecoder_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QWaveDecoder_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QWaveDecoder_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QWaveDecoder* QWaveDecoder_new(QIODevice* device) {
	return new (std::nothrow) MiqtVirtualQWaveDecoder(device);
}

QWaveDecoder* QWaveDecoder_new2(QIODevice* device, QAudioFormat* format) {
	return new (std::nothrow) MiqtVirtualQWaveDecoder(device, *format);
}

QWaveDecoder* QWaveDecoder_new3(QIODevice* device, QObject* parent) {
	return new (std::nothrow) MiqtVirtualQWaveDecoder(device, parent);
}

QWaveDecoder* QWaveDecoder_new4(QIODevice* device, QAudioFormat* format, QObject* parent) {
	return new (std::nothrow) MiqtVirtualQWaveDecoder(device, *format, parent);
}

void QWaveDecoder_virtbase(QWaveDecoder* src, QIODevice** outptr_QIODevice) {
	*outptr_QIODevice = static_cast<QIODevice*>(src);
}

QMetaObject* QWaveDecoder_metaObject(const QWaveDecoder* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWaveDecoder_metacast(QWaveDecoder* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWaveDecoder_tr(const char* s) {
	QString _ret = QWaveDecoder::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAudioFormat* QWaveDecoder_audioFormat(const QWaveDecoder* self) {
	return new QAudioFormat(self->audioFormat());
}

QIODevice* QWaveDecoder_getDevice(QWaveDecoder* self) {
	return self->getDevice();
}

int QWaveDecoder_duration(const QWaveDecoder* self) {
	return self->duration();
}

long long QWaveDecoder_headerLength() {
	qint64 _ret = QWaveDecoder::headerLength();
	return static_cast<long long>(_ret);
}

bool QWaveDecoder_open(QWaveDecoder* self, int mode) {
	return self->open(static_cast<QIODevice::OpenMode>(mode));
}

void QWaveDecoder_close(QWaveDecoder* self) {
	self->close();
}

bool QWaveDecoder_seek(QWaveDecoder* self, long long pos) {
	return self->seek(static_cast<qint64>(pos));
}

long long QWaveDecoder_pos(const QWaveDecoder* self) {
	qint64 _ret = self->pos();
	return static_cast<long long>(_ret);
}

long long QWaveDecoder_size(const QWaveDecoder* self) {
	qint64 _ret = self->size();
	return static_cast<long long>(_ret);
}

bool QWaveDecoder_isSequential(const QWaveDecoder* self) {
	return self->isSequential();
}

long long QWaveDecoder_bytesAvailable(const QWaveDecoder* self) {
	qint64 _ret = self->bytesAvailable();
	return static_cast<long long>(_ret);
}

void QWaveDecoder_formatKnown(QWaveDecoder* self) {
	self->formatKnown();
}

void* QWaveDecoder_connect_formatKnown(QWaveDecoder* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder>>(slot);
	return new QMetaObject::Connection(QWaveDecoder::connect(self, static_cast<void (QWaveDecoder::*)()>(&QWaveDecoder::formatKnown), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QWaveDecoder_formatKnown(slot);
	}));
}

void QWaveDecoder_parsingError(QWaveDecoder* self) {
	self->parsingError();
}

void* QWaveDecoder_connect_parsingError(QWaveDecoder* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder>>(slot);
	return new QMetaObject::Connection(QWaveDecoder::connect(self, static_cast<void (QWaveDecoder::*)()>(&QWaveDecoder::parsingError), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QWaveDecoder_parsingError(slot);
	}));
}

struct miqt_string QWaveDecoder_tr2(const char* s, const char* c) {
	QString _ret = QWaveDecoder::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWaveDecoder_tr3(const char* s, const char* c, int n) {
	QString _ret = QWaveDecoder::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QWaveDecoder_override_virtual_open(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> slot_handle(slot);
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__open = std::move(slot_handle);
	return true;
}

bool QWaveDecoder_virtualbase_open(void* self, int mode) {
	return static_cast<MiqtVirtualQWaveDecoder*>(self)->QWaveDecoder::open(static_cast<MiqtVirtualQWaveDecoder::OpenMode>(mode));
}

bool QWaveDecoder_override_virtual_close(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> slot_handle(slot);
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__close = std::move(slot_handle);
	return true;
}

void QWaveDecoder_virtualbase_close(void* self) {
	static_cast<MiqtVirtualQWaveDecoder*>(self)->QWaveDecoder::close();
}

bool QWaveDecoder_override_virtual_seek(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> slot_handle(slot);
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__seek = std::move(slot_handle);
	return true;
}

bool QWaveDecoder_virtualbase_seek(void* self, long long pos) {
	return static_cast<MiqtVirtualQWaveDecoder*>(self)->QWaveDecoder::seek(static_cast<qint64>(pos));
}

bool QWaveDecoder_override_virtual_pos(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> slot_handle(slot);
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__pos = std::move(slot_handle);
	return true;
}

long long QWaveDecoder_virtualbase_pos(const void* self) {
	qint64 _ret = static_cast<const MiqtVirtualQWaveDecoder*>(self)->QWaveDecoder::pos();
	return static_cast<long long>(_ret);
}

bool QWaveDecoder_override_virtual_size(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> slot_handle(slot);
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__size = std::move(slot_handle);
	return true;
}

long long QWaveDecoder_virtualbase_size(const void* self) {
	qint64 _ret = static_cast<const MiqtVirtualQWaveDecoder*>(self)->QWaveDecoder::size();
	return static_cast<long long>(_ret);
}

bool QWaveDecoder_override_virtual_isSequential(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> slot_handle(slot);
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isSequential = std::move(slot_handle);
	return true;
}

bool QWaveDecoder_virtualbase_isSequential(const void* self) {
	return static_cast<const MiqtVirtualQWaveDecoder*>(self)->QWaveDecoder::isSequential();
}

bool QWaveDecoder_override_virtual_bytesAvailable(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> slot_handle(slot);
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__bytesAvailable = std::move(slot_handle);
	return true;
}

long long QWaveDecoder_virtualbase_bytesAvailable(const void* self) {
	qint64 _ret = static_cast<const MiqtVirtualQWaveDecoder*>(self)->QWaveDecoder::bytesAvailable();
	return static_cast<long long>(_ret);
}

bool QWaveDecoder_override_virtual_atEnd(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> slot_handle(slot);
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__atEnd = std::move(slot_handle);
	return true;
}

bool QWaveDecoder_virtualbase_atEnd(const void* self) {
	return static_cast<const MiqtVirtualQWaveDecoder*>(self)->QWaveDecoder::atEnd();
}

bool QWaveDecoder_override_virtual_reset(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> slot_handle(slot);
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__reset = std::move(slot_handle);
	return true;
}

bool QWaveDecoder_virtualbase_reset(void* self) {
	return static_cast<MiqtVirtualQWaveDecoder*>(self)->QWaveDecoder::reset();
}

bool QWaveDecoder_override_virtual_bytesToWrite(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> slot_handle(slot);
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__bytesToWrite = std::move(slot_handle);
	return true;
}

long long QWaveDecoder_virtualbase_bytesToWrite(const void* self) {
	qint64 _ret = static_cast<const MiqtVirtualQWaveDecoder*>(self)->QWaveDecoder::bytesToWrite();
	return static_cast<long long>(_ret);
}

bool QWaveDecoder_override_virtual_canReadLine(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> slot_handle(slot);
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__canReadLine = std::move(slot_handle);
	return true;
}

bool QWaveDecoder_virtualbase_canReadLine(const void* self) {
	return static_cast<const MiqtVirtualQWaveDecoder*>(self)->QWaveDecoder::canReadLine();
}

bool QWaveDecoder_override_virtual_waitForReadyRead(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> slot_handle(slot);
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__waitForReadyRead = std::move(slot_handle);
	return true;
}

bool QWaveDecoder_virtualbase_waitForReadyRead(void* self, int msecs) {
	return static_cast<MiqtVirtualQWaveDecoder*>(self)->QWaveDecoder::waitForReadyRead(static_cast<int>(msecs));
}

bool QWaveDecoder_override_virtual_waitForBytesWritten(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> slot_handle(slot);
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__waitForBytesWritten = std::move(slot_handle);
	return true;
}

bool QWaveDecoder_virtualbase_waitForBytesWritten(void* self, int msecs) {
	return static_cast<MiqtVirtualQWaveDecoder*>(self)->QWaveDecoder::waitForBytesWritten(static_cast<int>(msecs));
}

bool QWaveDecoder_override_virtual_readLineData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> slot_handle(slot);
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__readLineData = std::move(slot_handle);
	return true;
}

long long QWaveDecoder_virtualbase_readLineData(void* self, char* data, long long maxlen) {
	qint64 _ret = static_cast<MiqtVirtualQWaveDecoder*>(self)->QWaveDecoder::readLineData(data, static_cast<qint64>(maxlen));
	return static_cast<long long>(_ret);
}

bool QWaveDecoder_override_virtual_skipData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> slot_handle(slot);
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__skipData = std::move(slot_handle);
	return true;
}

long long QWaveDecoder_virtualbase_skipData(void* self, long long maxSize) {
	qint64 _ret = static_cast<MiqtVirtualQWaveDecoder*>(self)->QWaveDecoder::skipData(static_cast<qint64>(maxSize));
	return static_cast<long long>(_ret);
}

bool QWaveDecoder_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> slot_handle(slot);
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QWaveDecoder_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQWaveDecoder*>(self)->QWaveDecoder::event(event);
}

bool QWaveDecoder_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> slot_handle(slot);
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QWaveDecoder_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQWaveDecoder*>(self)->QWaveDecoder::eventFilter(watched, event);
}

bool QWaveDecoder_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> slot_handle(slot);
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QWaveDecoder_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQWaveDecoder*>(self)->QWaveDecoder::timerEvent(event);
}

bool QWaveDecoder_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> slot_handle(slot);
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QWaveDecoder_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQWaveDecoder*>(self)->QWaveDecoder::childEvent(event);
}

bool QWaveDecoder_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> slot_handle(slot);
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QWaveDecoder_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQWaveDecoder*>(self)->QWaveDecoder::customEvent(event);
}

bool QWaveDecoder_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> slot_handle(slot);
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QWaveDecoder_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQWaveDecoder*>(self)->QWaveDecoder::connectNotify(*signal);
}

bool QWaveDecoder_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWaveDecoder> slot_handle(slot);
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QWaveDecoder_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQWaveDecoder*>(self)->QWaveDecoder::disconnectNotify(*signal);
}

void QWaveDecoder_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode) {
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setOpenMode(static_cast<MiqtVirtualQWaveDecoder::OpenMode>(openMode));
}

void QWaveDecoder_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString) {
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
		QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
	self_cast->setErrorString(errorString_QString);
}

QObject* QWaveDecoder_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QWaveDecoder_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QWaveDecoder_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QWaveDecoder_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQWaveDecoder* self_cast = dynamic_cast<MiqtVirtualQWaveDecoder*>( (QWaveDecoder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QWaveDecoder_delete(QWaveDecoder* self) {
	delete self;
}

