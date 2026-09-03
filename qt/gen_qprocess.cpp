#include <memory>
#include <utility>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QIODevice>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QProcess>
#include <QProcessEnvironment>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qprocess.h>
#include "gen_qprocess.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QProcess(intptr_t);
void miqt_exec_callback_QProcess_finished(intptr_t, int);
void miqt_exec_callback_QProcess_finished2(intptr_t, int, int);
void miqt_exec_callback_QProcess_errorWithError(intptr_t, int);
void miqt_exec_callback_QProcess_errorOccurred(intptr_t, int);
void miqt_exec_callback_QProcess_started(intptr_t);
void miqt_exec_callback_QProcess_stateChanged(intptr_t, int);
void miqt_exec_callback_QProcess_readyReadStandardOutput(intptr_t);
void miqt_exec_callback_QProcess_readyReadStandardError(intptr_t);
bool miqt_exec_callback_QProcess_open(QProcess*, intptr_t, int);
bool miqt_exec_callback_QProcess_waitForReadyRead(QProcess*, intptr_t, int);
bool miqt_exec_callback_QProcess_waitForBytesWritten(QProcess*, intptr_t, int);
long long miqt_exec_callback_QProcess_bytesAvailable(const QProcess*, intptr_t);
long long miqt_exec_callback_QProcess_bytesToWrite(const QProcess*, intptr_t);
bool miqt_exec_callback_QProcess_isSequential(const QProcess*, intptr_t);
bool miqt_exec_callback_QProcess_canReadLine(const QProcess*, intptr_t);
void miqt_exec_callback_QProcess_close(QProcess*, intptr_t);
bool miqt_exec_callback_QProcess_atEnd(const QProcess*, intptr_t);
void miqt_exec_callback_QProcess_setupChildProcess(QProcess*, intptr_t);
long long miqt_exec_callback_QProcess_readData(QProcess*, intptr_t, char*, long long);
long long miqt_exec_callback_QProcess_writeData(QProcess*, intptr_t, const char*, long long);
long long miqt_exec_callback_QProcess_pos(const QProcess*, intptr_t);
long long miqt_exec_callback_QProcess_size(const QProcess*, intptr_t);
bool miqt_exec_callback_QProcess_seek(QProcess*, intptr_t, long long);
bool miqt_exec_callback_QProcess_reset(QProcess*, intptr_t);
long long miqt_exec_callback_QProcess_readLineData(QProcess*, intptr_t, char*, long long);
bool miqt_exec_callback_QProcess_event(QProcess*, intptr_t, QEvent*);
bool miqt_exec_callback_QProcess_eventFilter(QProcess*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QProcess_timerEvent(QProcess*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QProcess_childEvent(QProcess*, intptr_t, QChildEvent*);
void miqt_exec_callback_QProcess_customEvent(QProcess*, intptr_t, QEvent*);
void miqt_exec_callback_QProcess_connectNotify(QProcess*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QProcess_disconnectNotify(QProcess*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

QProcessEnvironment* QProcessEnvironment_new() {
	return new (std::nothrow) QProcessEnvironment();
}

QProcessEnvironment* QProcessEnvironment_new2(QProcessEnvironment* other) {
	return new (std::nothrow) QProcessEnvironment(*other);
}

void QProcessEnvironment_operatorAssign(QProcessEnvironment* self, QProcessEnvironment* other) {
	self->operator=(*other);
}

void QProcessEnvironment_swap(QProcessEnvironment* self, QProcessEnvironment* other) {
	self->swap(*other);
}

bool QProcessEnvironment_operatorEqual(const QProcessEnvironment* self, QProcessEnvironment* other) {
	return (*self == *other);
}

bool QProcessEnvironment_operatorNotEqual(const QProcessEnvironment* self, QProcessEnvironment* other) {
	return (*self != *other);
}

bool QProcessEnvironment_isEmpty(const QProcessEnvironment* self) {
	return self->isEmpty();
}

void QProcessEnvironment_clear(QProcessEnvironment* self) {
	self->clear();
}

bool QProcessEnvironment_contains(const QProcessEnvironment* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	return self->contains(name_QString);
}

void QProcessEnvironment_insert(QProcessEnvironment* self, struct miqt_string name, struct miqt_string value) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString value_QString = QString::fromUtf8(value.data, value.len);
	self->insert(name_QString, value_QString);
}

void QProcessEnvironment_remove(QProcessEnvironment* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	self->remove(name_QString);
}

struct miqt_string QProcessEnvironment_value(const QProcessEnvironment* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString _ret = self->value(name_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of struct miqt_string */  QProcessEnvironment_toStringList(const QProcessEnvironment* self) {
	QStringList _ret = self->toStringList();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of struct miqt_string */  QProcessEnvironment_keys(const QProcessEnvironment* self) {
	QStringList _ret = self->keys();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QProcessEnvironment_insertWithQProcessEnvironment(QProcessEnvironment* self, QProcessEnvironment* e) {
	self->insert(*e);
}

QProcessEnvironment* QProcessEnvironment_systemEnvironment() {
	return new QProcessEnvironment(QProcessEnvironment::systemEnvironment());
}

struct miqt_string QProcessEnvironment_value2(const QProcessEnvironment* self, struct miqt_string name, struct miqt_string defaultValue) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString defaultValue_QString = QString::fromUtf8(defaultValue.data, defaultValue.len);
	QString _ret = self->value(name_QString, defaultValue_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QProcessEnvironment_delete(QProcessEnvironment* self) {
	delete self;
}

class MiqtVirtualQProcess final : public QProcess {
public:

	MiqtVirtualQProcess(): QProcess() {}
	MiqtVirtualQProcess(QObject* parent): QProcess(parent) {}

	virtual ~MiqtVirtualQProcess() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> handle__open;

	// Subclass to allow providing a Go implementation
	virtual bool open(QIODevice::OpenMode mode) override {
		if (!handle__open) {
			return QProcess::open(mode);
		}

		QIODevice::OpenMode mode_ret = mode;
		int sigval1 = static_cast<int>(mode_ret);
		bool callback_return_value = miqt_exec_callback_QProcess_open(this, handle__open.value(), sigval1);
		return callback_return_value;
	}

	friend bool QProcess_virtualbase_open(void* self, int mode);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> handle__waitForReadyRead;

	// Subclass to allow providing a Go implementation
	virtual bool waitForReadyRead(int msecs) override {
		if (!handle__waitForReadyRead) {
			return QProcess::waitForReadyRead(msecs);
		}

		int sigval1 = msecs;
		bool callback_return_value = miqt_exec_callback_QProcess_waitForReadyRead(this, handle__waitForReadyRead.value(), sigval1);
		return callback_return_value;
	}

	friend bool QProcess_virtualbase_waitForReadyRead(void* self, int msecs);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> handle__waitForBytesWritten;

	// Subclass to allow providing a Go implementation
	virtual bool waitForBytesWritten(int msecs) override {
		if (!handle__waitForBytesWritten) {
			return QProcess::waitForBytesWritten(msecs);
		}

		int sigval1 = msecs;
		bool callback_return_value = miqt_exec_callback_QProcess_waitForBytesWritten(this, handle__waitForBytesWritten.value(), sigval1);
		return callback_return_value;
	}

	friend bool QProcess_virtualbase_waitForBytesWritten(void* self, int msecs);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> handle__bytesAvailable;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesAvailable() const override {
		if (!handle__bytesAvailable) {
			return QProcess::bytesAvailable();
		}

		long long callback_return_value = miqt_exec_callback_QProcess_bytesAvailable(this, handle__bytesAvailable.value());
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QProcess_virtualbase_bytesAvailable(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> handle__bytesToWrite;

	// Subclass to allow providing a Go implementation
	virtual qint64 bytesToWrite() const override {
		if (!handle__bytesToWrite) {
			return QProcess::bytesToWrite();
		}

		long long callback_return_value = miqt_exec_callback_QProcess_bytesToWrite(this, handle__bytesToWrite.value());
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QProcess_virtualbase_bytesToWrite(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> handle__isSequential;

	// Subclass to allow providing a Go implementation
	virtual bool isSequential() const override {
		if (!handle__isSequential) {
			return QProcess::isSequential();
		}

		bool callback_return_value = miqt_exec_callback_QProcess_isSequential(this, handle__isSequential.value());
		return callback_return_value;
	}

	friend bool QProcess_virtualbase_isSequential(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> handle__canReadLine;

	// Subclass to allow providing a Go implementation
	virtual bool canReadLine() const override {
		if (!handle__canReadLine) {
			return QProcess::canReadLine();
		}

		bool callback_return_value = miqt_exec_callback_QProcess_canReadLine(this, handle__canReadLine.value());
		return callback_return_value;
	}

	friend bool QProcess_virtualbase_canReadLine(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> handle__close;

	// Subclass to allow providing a Go implementation
	virtual void close() override {
		if (!handle__close) {
			QProcess::close();
			return;
		}

		miqt_exec_callback_QProcess_close(this, handle__close.value());

	}

	friend void QProcess_virtualbase_close(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> handle__atEnd;

	// Subclass to allow providing a Go implementation
	virtual bool atEnd() const override {
		if (!handle__atEnd) {
			return QProcess::atEnd();
		}

		bool callback_return_value = miqt_exec_callback_QProcess_atEnd(this, handle__atEnd.value());
		return callback_return_value;
	}

	friend bool QProcess_virtualbase_atEnd(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> handle__setupChildProcess;

	// Subclass to allow providing a Go implementation
	virtual void setupChildProcess() override {
		if (!handle__setupChildProcess) {
			QProcess::setupChildProcess();
			return;
		}

		miqt_exec_callback_QProcess_setupChildProcess(this, handle__setupChildProcess.value());

	}

	friend void QProcess_virtualbase_setupChildProcess(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> handle__readData;

	// Subclass to allow providing a Go implementation
	virtual qint64 readData(char* data, qint64 maxlen) override {
		if (!handle__readData) {
			return QProcess::readData(data, maxlen);
		}

		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);
		long long callback_return_value = miqt_exec_callback_QProcess_readData(this, handle__readData.value(), sigval1, sigval2);
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QProcess_virtualbase_readData(void* self, char* data, long long maxlen);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> handle__writeData;

	// Subclass to allow providing a Go implementation
	virtual qint64 writeData(const char* data, qint64 len) override {
		if (!handle__writeData) {
			return QProcess::writeData(data, len);
		}

		const char* sigval1 = (const char*) data;
		qint64 len_ret = len;
		long long sigval2 = static_cast<long long>(len_ret);
		long long callback_return_value = miqt_exec_callback_QProcess_writeData(this, handle__writeData.value(), sigval1, sigval2);
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QProcess_virtualbase_writeData(void* self, const char* data, long long len);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> handle__pos;

	// Subclass to allow providing a Go implementation
	virtual qint64 pos() const override {
		if (!handle__pos) {
			return QProcess::pos();
		}

		long long callback_return_value = miqt_exec_callback_QProcess_pos(this, handle__pos.value());
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QProcess_virtualbase_pos(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> handle__size;

	// Subclass to allow providing a Go implementation
	virtual qint64 size() const override {
		if (!handle__size) {
			return QProcess::size();
		}

		long long callback_return_value = miqt_exec_callback_QProcess_size(this, handle__size.value());
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QProcess_virtualbase_size(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> handle__seek;

	// Subclass to allow providing a Go implementation
	virtual bool seek(qint64 pos) override {
		if (!handle__seek) {
			return QProcess::seek(pos);
		}

		qint64 pos_ret = pos;
		long long sigval1 = static_cast<long long>(pos_ret);
		bool callback_return_value = miqt_exec_callback_QProcess_seek(this, handle__seek.value(), sigval1);
		return callback_return_value;
	}

	friend bool QProcess_virtualbase_seek(void* self, long long pos);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> handle__reset;

	// Subclass to allow providing a Go implementation
	virtual bool reset() override {
		if (!handle__reset) {
			return QProcess::reset();
		}

		bool callback_return_value = miqt_exec_callback_QProcess_reset(this, handle__reset.value());
		return callback_return_value;
	}

	friend bool QProcess_virtualbase_reset(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> handle__readLineData;

	// Subclass to allow providing a Go implementation
	virtual qint64 readLineData(char* data, qint64 maxlen) override {
		if (!handle__readLineData) {
			return QProcess::readLineData(data, maxlen);
		}

		char* sigval1 = data;
		qint64 maxlen_ret = maxlen;
		long long sigval2 = static_cast<long long>(maxlen_ret);
		long long callback_return_value = miqt_exec_callback_QProcess_readLineData(this, handle__readLineData.value(), sigval1, sigval2);
		return static_cast<qint64>(callback_return_value);
	}

	friend long long QProcess_virtualbase_readLineData(void* self, char* data, long long maxlen);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QProcess::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QProcess_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QProcess_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QProcess::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QProcess_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QProcess_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QProcess::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QProcess_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QProcess_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QProcess::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QProcess_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QProcess_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QProcess::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QProcess_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QProcess_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QProcess::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QProcess_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QProcess_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QProcess::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QProcess_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QProcess_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QProcess_protectedbase_setProcessState(bool* _dynamic_cast_ok, void* self, int state);
	friend void QProcess_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode);
	friend void QProcess_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString);
	friend QObject* QProcess_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QProcess_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QProcess_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QProcess_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QProcess* QProcess_new() {
	return new (std::nothrow) MiqtVirtualQProcess();
}

QProcess* QProcess_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQProcess(parent);
}

void QProcess_virtbase(QProcess* src, QIODevice** outptr_QIODevice) {
	*outptr_QIODevice = static_cast<QIODevice*>(src);
}

QMetaObject* QProcess_metaObject(const QProcess* self) {
	return (QMetaObject*) self->metaObject();
}

void* QProcess_metacast(QProcess* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QProcess_tr(const char* s) {
	QString _ret = QProcess::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QProcess_trUtf8(const char* s) {
	QString _ret = QProcess::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QProcess_start(QProcess* self, struct miqt_string program, struct miqt_array /* of struct miqt_string */  arguments) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	QStringList arguments_QList;
	arguments_QList.reserve(arguments.len);
	struct miqt_string* arguments_arr = static_cast<struct miqt_string*>(arguments.data);
	for(size_t i = 0; i < arguments.len; ++i) {
		QString arguments_arr_i_QString = QString::fromUtf8(arguments_arr[i].data, arguments_arr[i].len);
		arguments_QList.push_back(arguments_arr_i_QString);
	}
	self->start(program_QString, arguments_QList);
}

void QProcess_startWithCommand(QProcess* self, struct miqt_string command) {
	QString command_QString = QString::fromUtf8(command.data, command.len);
	self->start(command_QString);
}

void QProcess_start2(QProcess* self) {
	self->start();
}

bool QProcess_startDetached(QProcess* self) {
	return self->startDetached();
}

bool QProcess_open(QProcess* self, int mode) {
	return self->open(static_cast<QIODevice::OpenMode>(mode));
}

struct miqt_string QProcess_program(const QProcess* self) {
	QString _ret = self->program();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QProcess_setProgram(QProcess* self, struct miqt_string program) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	self->setProgram(program_QString);
}

struct miqt_array /* of struct miqt_string */  QProcess_arguments(const QProcess* self) {
	QStringList _ret = self->arguments();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QProcess_setArguments(QProcess* self, struct miqt_array /* of struct miqt_string */  arguments) {
	QStringList arguments_QList;
	arguments_QList.reserve(arguments.len);
	struct miqt_string* arguments_arr = static_cast<struct miqt_string*>(arguments.data);
	for(size_t i = 0; i < arguments.len; ++i) {
		QString arguments_arr_i_QString = QString::fromUtf8(arguments_arr[i].data, arguments_arr[i].len);
		arguments_QList.push_back(arguments_arr_i_QString);
	}
	self->setArguments(arguments_QList);
}

int QProcess_readChannelMode(const QProcess* self) {
	QProcess::ProcessChannelMode _ret = self->readChannelMode();
	return static_cast<int>(_ret);
}

void QProcess_setReadChannelMode(QProcess* self, int mode) {
	self->setReadChannelMode(static_cast<QProcess::ProcessChannelMode>(mode));
}

int QProcess_processChannelMode(const QProcess* self) {
	QProcess::ProcessChannelMode _ret = self->processChannelMode();
	return static_cast<int>(_ret);
}

void QProcess_setProcessChannelMode(QProcess* self, int mode) {
	self->setProcessChannelMode(static_cast<QProcess::ProcessChannelMode>(mode));
}

int QProcess_inputChannelMode(const QProcess* self) {
	QProcess::InputChannelMode _ret = self->inputChannelMode();
	return static_cast<int>(_ret);
}

void QProcess_setInputChannelMode(QProcess* self, int mode) {
	self->setInputChannelMode(static_cast<QProcess::InputChannelMode>(mode));
}

int QProcess_readChannel(const QProcess* self) {
	QProcess::ProcessChannel _ret = self->readChannel();
	return static_cast<int>(_ret);
}

void QProcess_setReadChannel(QProcess* self, int channel) {
	self->setReadChannel(static_cast<QProcess::ProcessChannel>(channel));
}

void QProcess_closeReadChannel(QProcess* self, int channel) {
	self->closeReadChannel(static_cast<QProcess::ProcessChannel>(channel));
}

void QProcess_closeWriteChannel(QProcess* self) {
	self->closeWriteChannel();
}

void QProcess_setStandardInputFile(QProcess* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setStandardInputFile(fileName_QString);
}

void QProcess_setStandardOutputFile(QProcess* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setStandardOutputFile(fileName_QString);
}

void QProcess_setStandardErrorFile(QProcess* self, struct miqt_string fileName) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setStandardErrorFile(fileName_QString);
}

void QProcess_setStandardOutputProcess(QProcess* self, QProcess* destination) {
	self->setStandardOutputProcess(destination);
}

struct miqt_string QProcess_workingDirectory(const QProcess* self) {
	QString _ret = self->workingDirectory();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QProcess_setWorkingDirectory(QProcess* self, struct miqt_string dir) {
	QString dir_QString = QString::fromUtf8(dir.data, dir.len);
	self->setWorkingDirectory(dir_QString);
}

void QProcess_setEnvironment(QProcess* self, struct miqt_array /* of struct miqt_string */  environment) {
	QStringList environment_QList;
	environment_QList.reserve(environment.len);
	struct miqt_string* environment_arr = static_cast<struct miqt_string*>(environment.data);
	for(size_t i = 0; i < environment.len; ++i) {
		QString environment_arr_i_QString = QString::fromUtf8(environment_arr[i].data, environment_arr[i].len);
		environment_QList.push_back(environment_arr_i_QString);
	}
	self->setEnvironment(environment_QList);
}

struct miqt_array /* of struct miqt_string */  QProcess_environment(const QProcess* self) {
	QStringList _ret = self->environment();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QProcess_setProcessEnvironment(QProcess* self, QProcessEnvironment* environment) {
	self->setProcessEnvironment(*environment);
}

QProcessEnvironment* QProcess_processEnvironment(const QProcess* self) {
	return new QProcessEnvironment(self->processEnvironment());
}

int QProcess_error(const QProcess* self) {
	QProcess::ProcessError _ret = self->error();
	return static_cast<int>(_ret);
}

int QProcess_state(const QProcess* self) {
	QProcess::ProcessState _ret = self->state();
	return static_cast<int>(_ret);
}

long long QProcess_pid(const QProcess* self) {
#if defined(Q_OS_LINUX)
	Q_PID _ret = self->pid();
	return static_cast<long long>(_ret);
#else
	long long _ret_unavailable;
	return _ret_unavailable;
#endif
}

long long QProcess_processId(const QProcess* self) {
	qint64 _ret = self->processId();
	return static_cast<long long>(_ret);
}

bool QProcess_waitForStarted(QProcess* self) {
	return self->waitForStarted();
}

bool QProcess_waitForReadyRead(QProcess* self, int msecs) {
	return self->waitForReadyRead(static_cast<int>(msecs));
}

bool QProcess_waitForBytesWritten(QProcess* self, int msecs) {
	return self->waitForBytesWritten(static_cast<int>(msecs));
}

bool QProcess_waitForFinished(QProcess* self) {
	return self->waitForFinished();
}

struct miqt_string QProcess_readAllStandardOutput(QProcess* self) {
	QByteArray _qb = self->readAllStandardOutput();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

struct miqt_string QProcess_readAllStandardError(QProcess* self) {
	QByteArray _qb = self->readAllStandardError();
	struct miqt_string _ms;
	_ms.len = _qb.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _qb.data(), _ms.len);
	return _ms;
}

int QProcess_exitCode(const QProcess* self) {
	return self->exitCode();
}

int QProcess_exitStatus(const QProcess* self) {
	QProcess::ExitStatus _ret = self->exitStatus();
	return static_cast<int>(_ret);
}

long long QProcess_bytesAvailable(const QProcess* self) {
	qint64 _ret = self->bytesAvailable();
	return static_cast<long long>(_ret);
}

long long QProcess_bytesToWrite(const QProcess* self) {
	qint64 _ret = self->bytesToWrite();
	return static_cast<long long>(_ret);
}

bool QProcess_isSequential(const QProcess* self) {
	return self->isSequential();
}

bool QProcess_canReadLine(const QProcess* self) {
	return self->canReadLine();
}

void QProcess_close(QProcess* self) {
	self->close();
}

bool QProcess_atEnd(const QProcess* self) {
	return self->atEnd();
}

int QProcess_execute(struct miqt_string program, struct miqt_array /* of struct miqt_string */  arguments) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	QStringList arguments_QList;
	arguments_QList.reserve(arguments.len);
	struct miqt_string* arguments_arr = static_cast<struct miqt_string*>(arguments.data);
	for(size_t i = 0; i < arguments.len; ++i) {
		QString arguments_arr_i_QString = QString::fromUtf8(arguments_arr[i].data, arguments_arr[i].len);
		arguments_QList.push_back(arguments_arr_i_QString);
	}
	return QProcess::execute(program_QString, arguments_QList);
}

int QProcess_executeWithCommand(struct miqt_string command) {
	QString command_QString = QString::fromUtf8(command.data, command.len);
	return QProcess::execute(command_QString);
}

bool QProcess_startDetached2(struct miqt_string program, struct miqt_array /* of struct miqt_string */  arguments, struct miqt_string workingDirectory) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	QStringList arguments_QList;
	arguments_QList.reserve(arguments.len);
	struct miqt_string* arguments_arr = static_cast<struct miqt_string*>(arguments.data);
	for(size_t i = 0; i < arguments.len; ++i) {
		QString arguments_arr_i_QString = QString::fromUtf8(arguments_arr[i].data, arguments_arr[i].len);
		arguments_QList.push_back(arguments_arr_i_QString);
	}
	QString workingDirectory_QString = QString::fromUtf8(workingDirectory.data, workingDirectory.len);
	return QProcess::startDetached(program_QString, arguments_QList, workingDirectory_QString);
}

bool QProcess_startDetached3(struct miqt_string program, struct miqt_array /* of struct miqt_string */  arguments) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	QStringList arguments_QList;
	arguments_QList.reserve(arguments.len);
	struct miqt_string* arguments_arr = static_cast<struct miqt_string*>(arguments.data);
	for(size_t i = 0; i < arguments.len; ++i) {
		QString arguments_arr_i_QString = QString::fromUtf8(arguments_arr[i].data, arguments_arr[i].len);
		arguments_QList.push_back(arguments_arr_i_QString);
	}
	return QProcess::startDetached(program_QString, arguments_QList);
}

bool QProcess_startDetachedWithCommand(struct miqt_string command) {
	QString command_QString = QString::fromUtf8(command.data, command.len);
	return QProcess::startDetached(command_QString);
}

struct miqt_array /* of struct miqt_string */  QProcess_systemEnvironment() {
	QStringList _ret = QProcess::systemEnvironment();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QProcess_nullDevice() {
	QString _ret = QProcess::nullDevice();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QProcess_terminate(QProcess* self) {
	self->terminate();
}

void QProcess_kill(QProcess* self) {
	self->kill();
}

void QProcess_finished(QProcess* self, int exitCode) {
	self->finished(static_cast<int>(exitCode));
}

void* QProcess_connect_finished(QProcess* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QProcess>>(slot);
	return new QMetaObject::Connection(QProcess::connect(self, static_cast<void (QProcess::*)(int)>(&QProcess::finished), self, [slot_handle](int exitCode) {
		intptr_t slot = slot_handle->value();
		int sigval1 = exitCode;
		miqt_exec_callback_QProcess_finished(slot, sigval1);
	}));
}

void QProcess_finished2(QProcess* self, int exitCode, int exitStatus) {
	self->finished(static_cast<int>(exitCode), static_cast<QProcess::ExitStatus>(exitStatus));
}

void* QProcess_connect_finished2(QProcess* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QProcess>>(slot);
	return new QMetaObject::Connection(QProcess::connect(self, static_cast<void (QProcess::*)(int, QProcess::ExitStatus)>(&QProcess::finished), self, [slot_handle](int exitCode, QProcess::ExitStatus exitStatus) {
		intptr_t slot = slot_handle->value();
		int sigval1 = exitCode;
		QProcess::ExitStatus exitStatus_ret = exitStatus;
		int sigval2 = static_cast<int>(exitStatus_ret);
		miqt_exec_callback_QProcess_finished2(slot, sigval1, sigval2);
	}));
}

void QProcess_errorWithError(QProcess* self, int error) {
	self->error(static_cast<QProcess::ProcessError>(error));
}

void* QProcess_connect_errorWithError(QProcess* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QProcess>>(slot);
	return new QMetaObject::Connection(QProcess::connect(self, static_cast<void (QProcess::*)(QProcess::ProcessError)>(&QProcess::error), self, [slot_handle](QProcess::ProcessError error) {
		intptr_t slot = slot_handle->value();
		QProcess::ProcessError error_ret = error;
		int sigval1 = static_cast<int>(error_ret);
		miqt_exec_callback_QProcess_errorWithError(slot, sigval1);
	}));
}

void QProcess_errorOccurred(QProcess* self, int error) {
	self->errorOccurred(static_cast<QProcess::ProcessError>(error));
}

void* QProcess_connect_errorOccurred(QProcess* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QProcess>>(slot);
	return new QMetaObject::Connection(QProcess::connect(self, static_cast<void (QProcess::*)(QProcess::ProcessError)>(&QProcess::errorOccurred), self, [slot_handle](QProcess::ProcessError error) {
		intptr_t slot = slot_handle->value();
		QProcess::ProcessError error_ret = error;
		int sigval1 = static_cast<int>(error_ret);
		miqt_exec_callback_QProcess_errorOccurred(slot, sigval1);
	}));
}

struct miqt_string QProcess_tr2(const char* s, const char* c) {
	QString _ret = QProcess::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QProcess_tr3(const char* s, const char* c, int n) {
	QString _ret = QProcess::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QProcess_trUtf82(const char* s, const char* c) {
	QString _ret = QProcess::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QProcess_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QProcess::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QProcess_start3(QProcess* self, struct miqt_string program, struct miqt_array /* of struct miqt_string */  arguments, int mode) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	QStringList arguments_QList;
	arguments_QList.reserve(arguments.len);
	struct miqt_string* arguments_arr = static_cast<struct miqt_string*>(arguments.data);
	for(size_t i = 0; i < arguments.len; ++i) {
		QString arguments_arr_i_QString = QString::fromUtf8(arguments_arr[i].data, arguments_arr[i].len);
		arguments_QList.push_back(arguments_arr_i_QString);
	}
	self->start(program_QString, arguments_QList, static_cast<QIODevice::OpenMode>(mode));
}

void QProcess_start4(QProcess* self, struct miqt_string command, int mode) {
	QString command_QString = QString::fromUtf8(command.data, command.len);
	self->start(command_QString, static_cast<QIODevice::OpenMode>(mode));
}

void QProcess_startWithMode(QProcess* self, int mode) {
	self->start(static_cast<QIODevice::OpenMode>(mode));
}

bool QProcess_startDetachedWithPid(QProcess* self, long long* pid) {
	return self->startDetached(static_cast<qint64*>(pid));
}

void QProcess_setStandardOutputFile2(QProcess* self, struct miqt_string fileName, int mode) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setStandardOutputFile(fileName_QString, static_cast<QIODevice::OpenMode>(mode));
}

void QProcess_setStandardErrorFile2(QProcess* self, struct miqt_string fileName, int mode) {
	QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
	self->setStandardErrorFile(fileName_QString, static_cast<QIODevice::OpenMode>(mode));
}

bool QProcess_waitForStartedWithMsecs(QProcess* self, int msecs) {
	return self->waitForStarted(static_cast<int>(msecs));
}

bool QProcess_waitForFinishedWithMsecs(QProcess* self, int msecs) {
	return self->waitForFinished(static_cast<int>(msecs));
}

bool QProcess_startDetached4(struct miqt_string program, struct miqt_array /* of struct miqt_string */  arguments, struct miqt_string workingDirectory, long long* pid) {
	QString program_QString = QString::fromUtf8(program.data, program.len);
	QStringList arguments_QList;
	arguments_QList.reserve(arguments.len);
	struct miqt_string* arguments_arr = static_cast<struct miqt_string*>(arguments.data);
	for(size_t i = 0; i < arguments.len; ++i) {
		QString arguments_arr_i_QString = QString::fromUtf8(arguments_arr[i].data, arguments_arr[i].len);
		arguments_QList.push_back(arguments_arr_i_QString);
	}
	QString workingDirectory_QString = QString::fromUtf8(workingDirectory.data, workingDirectory.len);
	return QProcess::startDetached(program_QString, arguments_QList, workingDirectory_QString, static_cast<qint64*>(pid));
}

bool QProcess_override_virtual_open(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> slot_handle(slot);
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__open = std::move(slot_handle);
	return true;
}

bool QProcess_virtualbase_open(void* self, int mode) {
	return static_cast<MiqtVirtualQProcess*>(self)->QProcess::open(static_cast<MiqtVirtualQProcess::OpenMode>(mode));
}

bool QProcess_override_virtual_waitForReadyRead(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> slot_handle(slot);
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__waitForReadyRead = std::move(slot_handle);
	return true;
}

bool QProcess_virtualbase_waitForReadyRead(void* self, int msecs) {
	return static_cast<MiqtVirtualQProcess*>(self)->QProcess::waitForReadyRead(static_cast<int>(msecs));
}

bool QProcess_override_virtual_waitForBytesWritten(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> slot_handle(slot);
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__waitForBytesWritten = std::move(slot_handle);
	return true;
}

bool QProcess_virtualbase_waitForBytesWritten(void* self, int msecs) {
	return static_cast<MiqtVirtualQProcess*>(self)->QProcess::waitForBytesWritten(static_cast<int>(msecs));
}

bool QProcess_override_virtual_bytesAvailable(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> slot_handle(slot);
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__bytesAvailable = std::move(slot_handle);
	return true;
}

long long QProcess_virtualbase_bytesAvailable(const void* self) {
	qint64 _ret = static_cast<const MiqtVirtualQProcess*>(self)->QProcess::bytesAvailable();
	return static_cast<long long>(_ret);
}

bool QProcess_override_virtual_bytesToWrite(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> slot_handle(slot);
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__bytesToWrite = std::move(slot_handle);
	return true;
}

long long QProcess_virtualbase_bytesToWrite(const void* self) {
	qint64 _ret = static_cast<const MiqtVirtualQProcess*>(self)->QProcess::bytesToWrite();
	return static_cast<long long>(_ret);
}

bool QProcess_override_virtual_isSequential(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> slot_handle(slot);
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isSequential = std::move(slot_handle);
	return true;
}

bool QProcess_virtualbase_isSequential(const void* self) {
	return static_cast<const MiqtVirtualQProcess*>(self)->QProcess::isSequential();
}

bool QProcess_override_virtual_canReadLine(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> slot_handle(slot);
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__canReadLine = std::move(slot_handle);
	return true;
}

bool QProcess_virtualbase_canReadLine(const void* self) {
	return static_cast<const MiqtVirtualQProcess*>(self)->QProcess::canReadLine();
}

bool QProcess_override_virtual_close(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> slot_handle(slot);
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__close = std::move(slot_handle);
	return true;
}

void QProcess_virtualbase_close(void* self) {
	static_cast<MiqtVirtualQProcess*>(self)->QProcess::close();
}

bool QProcess_override_virtual_atEnd(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> slot_handle(slot);
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__atEnd = std::move(slot_handle);
	return true;
}

bool QProcess_virtualbase_atEnd(const void* self) {
	return static_cast<const MiqtVirtualQProcess*>(self)->QProcess::atEnd();
}

bool QProcess_override_virtual_setupChildProcess(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> slot_handle(slot);
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setupChildProcess = std::move(slot_handle);
	return true;
}

void QProcess_virtualbase_setupChildProcess(void* self) {
	static_cast<MiqtVirtualQProcess*>(self)->QProcess::setupChildProcess();
}

bool QProcess_override_virtual_readData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> slot_handle(slot);
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__readData = std::move(slot_handle);
	return true;
}

long long QProcess_virtualbase_readData(void* self, char* data, long long maxlen) {
	qint64 _ret = static_cast<MiqtVirtualQProcess*>(self)->QProcess::readData(data, static_cast<qint64>(maxlen));
	return static_cast<long long>(_ret);
}

bool QProcess_override_virtual_writeData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> slot_handle(slot);
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__writeData = std::move(slot_handle);
	return true;
}

long long QProcess_virtualbase_writeData(void* self, const char* data, long long len) {
	qint64 _ret = static_cast<MiqtVirtualQProcess*>(self)->QProcess::writeData(data, static_cast<qint64>(len));
	return static_cast<long long>(_ret);
}

bool QProcess_override_virtual_pos(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> slot_handle(slot);
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__pos = std::move(slot_handle);
	return true;
}

long long QProcess_virtualbase_pos(const void* self) {
	qint64 _ret = static_cast<const MiqtVirtualQProcess*>(self)->QProcess::pos();
	return static_cast<long long>(_ret);
}

bool QProcess_override_virtual_size(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> slot_handle(slot);
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__size = std::move(slot_handle);
	return true;
}

long long QProcess_virtualbase_size(const void* self) {
	qint64 _ret = static_cast<const MiqtVirtualQProcess*>(self)->QProcess::size();
	return static_cast<long long>(_ret);
}

bool QProcess_override_virtual_seek(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> slot_handle(slot);
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__seek = std::move(slot_handle);
	return true;
}

bool QProcess_virtualbase_seek(void* self, long long pos) {
	return static_cast<MiqtVirtualQProcess*>(self)->QProcess::seek(static_cast<qint64>(pos));
}

bool QProcess_override_virtual_reset(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> slot_handle(slot);
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__reset = std::move(slot_handle);
	return true;
}

bool QProcess_virtualbase_reset(void* self) {
	return static_cast<MiqtVirtualQProcess*>(self)->QProcess::reset();
}

bool QProcess_override_virtual_readLineData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> slot_handle(slot);
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__readLineData = std::move(slot_handle);
	return true;
}

long long QProcess_virtualbase_readLineData(void* self, char* data, long long maxlen) {
	qint64 _ret = static_cast<MiqtVirtualQProcess*>(self)->QProcess::readLineData(data, static_cast<qint64>(maxlen));
	return static_cast<long long>(_ret);
}

bool QProcess_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> slot_handle(slot);
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QProcess_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQProcess*>(self)->QProcess::event(event);
}

bool QProcess_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> slot_handle(slot);
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QProcess_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQProcess*>(self)->QProcess::eventFilter(watched, event);
}

bool QProcess_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> slot_handle(slot);
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QProcess_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQProcess*>(self)->QProcess::timerEvent(event);
}

bool QProcess_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> slot_handle(slot);
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QProcess_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQProcess*>(self)->QProcess::childEvent(event);
}

bool QProcess_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> slot_handle(slot);
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QProcess_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQProcess*>(self)->QProcess::customEvent(event);
}

bool QProcess_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> slot_handle(slot);
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QProcess_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQProcess*>(self)->QProcess::connectNotify(*signal);
}

bool QProcess_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QProcess> slot_handle(slot);
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QProcess_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQProcess*>(self)->QProcess::disconnectNotify(*signal);
}

void QProcess_protectedbase_setProcessState(bool* _dynamic_cast_ok, void* self, int state) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setProcessState(static_cast<MiqtVirtualQProcess::ProcessState>(state));
}

void QProcess_protectedbase_setOpenMode(bool* _dynamic_cast_ok, void* self, int openMode) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setOpenMode(static_cast<MiqtVirtualQProcess::OpenMode>(openMode));
}

void QProcess_protectedbase_setErrorString(bool* _dynamic_cast_ok, void* self, struct miqt_string errorString) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
		QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
	self_cast->setErrorString(errorString_QString);
}

QObject* QProcess_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QProcess_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QProcess_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QProcess_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQProcess* self_cast = dynamic_cast<MiqtVirtualQProcess*>( (QProcess*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void* QProcess_connect_started(QProcess* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QProcess>>(slot);
	return new QMetaObject::Connection(QProcess::connect(self, &QProcess::started, self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QProcess_started(slot);
	}));
}

void* QProcess_connect_stateChanged(QProcess* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QProcess>>(slot);
	return new QMetaObject::Connection(QProcess::connect(self, &QProcess::stateChanged, self, [slot_handle](QProcess::ProcessState state) {
		intptr_t slot = slot_handle->value();
		QProcess::ProcessState state_ret = state;
		int sigval1 = static_cast<int>(state_ret);
		miqt_exec_callback_QProcess_stateChanged(slot, sigval1);
	}));
}

void* QProcess_connect_readyReadStandardOutput(QProcess* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QProcess>>(slot);
	return new QMetaObject::Connection(QProcess::connect(self, &QProcess::readyReadStandardOutput, self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QProcess_readyReadStandardOutput(slot);
	}));
}

void* QProcess_connect_readyReadStandardError(QProcess* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QProcess>>(slot);
	return new QMetaObject::Connection(QProcess::connect(self, &QProcess::readyReadStandardError, self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QProcess_readyReadStandardError(slot);
	}));
}

void QProcess_delete(QProcess* self) {
	delete self;
}

