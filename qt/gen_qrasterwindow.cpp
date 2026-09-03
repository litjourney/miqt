#include <memory>
#include <utility>
#include <QAccessibleInterface>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QExposeEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QKeyEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintDeviceWindow>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QRasterWindow>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSurface>
#include <QSurfaceFormat>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QTouchEvent>
#include <QWheelEvent>
#include <QWindow>
#include <qrasterwindow.h>
#include "gen_qrasterwindow.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QRasterWindow(intptr_t);
int miqt_exec_callback_QRasterWindow_metric(const QRasterWindow*, intptr_t, int);
QPaintDevice* miqt_exec_callback_QRasterWindow_redirected(const QRasterWindow*, intptr_t, QPoint*);
void miqt_exec_callback_QRasterWindow_paintEvent(QRasterWindow*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QRasterWindow_exposeEvent(QRasterWindow*, intptr_t, QExposeEvent*);
bool miqt_exec_callback_QRasterWindow_event(QRasterWindow*, intptr_t, QEvent*);
int miqt_exec_callback_QRasterWindow_surfaceType(const QRasterWindow*, intptr_t);
QSurfaceFormat* miqt_exec_callback_QRasterWindow_format(const QRasterWindow*, intptr_t);
QSize* miqt_exec_callback_QRasterWindow_size(const QRasterWindow*, intptr_t);
QAccessibleInterface* miqt_exec_callback_QRasterWindow_accessibleRoot(const QRasterWindow*, intptr_t);
QObject* miqt_exec_callback_QRasterWindow_focusObject(const QRasterWindow*, intptr_t);
void miqt_exec_callback_QRasterWindow_resizeEvent(QRasterWindow*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QRasterWindow_moveEvent(QRasterWindow*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QRasterWindow_focusInEvent(QRasterWindow*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QRasterWindow_focusOutEvent(QRasterWindow*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QRasterWindow_showEvent(QRasterWindow*, intptr_t, QShowEvent*);
void miqt_exec_callback_QRasterWindow_hideEvent(QRasterWindow*, intptr_t, QHideEvent*);
void miqt_exec_callback_QRasterWindow_keyPressEvent(QRasterWindow*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QRasterWindow_keyReleaseEvent(QRasterWindow*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QRasterWindow_mousePressEvent(QRasterWindow*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QRasterWindow_mouseReleaseEvent(QRasterWindow*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QRasterWindow_mouseDoubleClickEvent(QRasterWindow*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QRasterWindow_mouseMoveEvent(QRasterWindow*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QRasterWindow_wheelEvent(QRasterWindow*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QRasterWindow_touchEvent(QRasterWindow*, intptr_t, QTouchEvent*);
void miqt_exec_callback_QRasterWindow_tabletEvent(QRasterWindow*, intptr_t, QTabletEvent*);
bool miqt_exec_callback_QRasterWindow_nativeEvent(QRasterWindow*, intptr_t, struct miqt_string, void*, long*);
bool miqt_exec_callback_QRasterWindow_eventFilter(QRasterWindow*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QRasterWindow_timerEvent(QRasterWindow*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QRasterWindow_childEvent(QRasterWindow*, intptr_t, QChildEvent*);
void miqt_exec_callback_QRasterWindow_customEvent(QRasterWindow*, intptr_t, QEvent*);
void miqt_exec_callback_QRasterWindow_connectNotify(QRasterWindow*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QRasterWindow_disconnectNotify(QRasterWindow*, intptr_t, QMetaMethod*);
int miqt_exec_callback_QRasterWindow_devType(const QRasterWindow*, intptr_t);
void miqt_exec_callback_QRasterWindow_initPainter(const QRasterWindow*, intptr_t, QPainter*);
QPainter* miqt_exec_callback_QRasterWindow_sharedPainter(const QRasterWindow*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQRasterWindow final : public QRasterWindow {
public:

	MiqtVirtualQRasterWindow(): QRasterWindow() {}
	MiqtVirtualQRasterWindow(QWindow* parent): QRasterWindow(parent) {}

	virtual ~MiqtVirtualQRasterWindow() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> handle__metric;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric metric) const override {
		if (!handle__metric) {
			return QRasterWindow::metric(metric);
		}

		QPaintDevice::PaintDeviceMetric metric_ret = metric;
		int sigval1 = static_cast<int>(metric_ret);
		int callback_return_value = miqt_exec_callback_QRasterWindow_metric(this, handle__metric.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QRasterWindow_virtualbase_metric(const void* self, int metric);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> handle__redirected;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* param1) const override {
		if (!handle__redirected) {
			return QRasterWindow::redirected(param1);
		}

		QPoint* sigval1 = param1;
		QPaintDevice* callback_return_value = miqt_exec_callback_QRasterWindow_redirected(this, handle__redirected.value(), sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QRasterWindow_virtualbase_redirected(const void* self, QPoint* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> handle__paintEvent;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (!handle__paintEvent) {
			QRasterWindow::paintEvent(event);
			return;
		}

		QPaintEvent* sigval1 = event;
		miqt_exec_callback_QRasterWindow_paintEvent(this, handle__paintEvent.value(), sigval1);

	}

	friend void QRasterWindow_virtualbase_paintEvent(void* self, QPaintEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> handle__exposeEvent;

	// Subclass to allow providing a Go implementation
	virtual void exposeEvent(QExposeEvent* param1) override {
		if (!handle__exposeEvent) {
			QRasterWindow::exposeEvent(param1);
			return;
		}

		QExposeEvent* sigval1 = param1;
		miqt_exec_callback_QRasterWindow_exposeEvent(this, handle__exposeEvent.value(), sigval1);

	}

	friend void QRasterWindow_virtualbase_exposeEvent(void* self, QExposeEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QRasterWindow::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QRasterWindow_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QRasterWindow_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> handle__surfaceType;

	// Subclass to allow providing a Go implementation
	virtual QSurface::SurfaceType surfaceType() const override {
		if (!handle__surfaceType) {
			return QRasterWindow::surfaceType();
		}

		int callback_return_value = miqt_exec_callback_QRasterWindow_surfaceType(this, handle__surfaceType.value());
		return static_cast<QSurface::SurfaceType>(callback_return_value);
	}

	friend int QRasterWindow_virtualbase_surfaceType(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> handle__format;

	// Subclass to allow providing a Go implementation
	virtual QSurfaceFormat format() const override {
		if (!handle__format) {
			return QRasterWindow::format();
		}

		QSurfaceFormat* callback_return_value = miqt_exec_callback_QRasterWindow_format(this, handle__format.value());
		return *callback_return_value;
	}

	friend QSurfaceFormat* QRasterWindow_virtualbase_format(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> handle__size;

	// Subclass to allow providing a Go implementation
	virtual QSize size() const override {
		if (!handle__size) {
			return QRasterWindow::size();
		}

		QSize* callback_return_value = miqt_exec_callback_QRasterWindow_size(this, handle__size.value());
		return *callback_return_value;
	}

	friend QSize* QRasterWindow_virtualbase_size(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> handle__accessibleRoot;

	// Subclass to allow providing a Go implementation
	virtual QAccessibleInterface* accessibleRoot() const override {
		if (!handle__accessibleRoot) {
			return QRasterWindow::accessibleRoot();
		}

		QAccessibleInterface* callback_return_value = miqt_exec_callback_QRasterWindow_accessibleRoot(this, handle__accessibleRoot.value());
		return callback_return_value;
	}

	friend QAccessibleInterface* QRasterWindow_virtualbase_accessibleRoot(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> handle__focusObject;

	// Subclass to allow providing a Go implementation
	virtual QObject* focusObject() const override {
		if (!handle__focusObject) {
			return QRasterWindow::focusObject();
		}

		QObject* callback_return_value = miqt_exec_callback_QRasterWindow_focusObject(this, handle__focusObject.value());
		return callback_return_value;
	}

	friend QObject* QRasterWindow_virtualbase_focusObject(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> handle__resizeEvent;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (!handle__resizeEvent) {
			QRasterWindow::resizeEvent(param1);
			return;
		}

		QResizeEvent* sigval1 = param1;
		miqt_exec_callback_QRasterWindow_resizeEvent(this, handle__resizeEvent.value(), sigval1);

	}

	friend void QRasterWindow_virtualbase_resizeEvent(void* self, QResizeEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> handle__moveEvent;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* param1) override {
		if (!handle__moveEvent) {
			QRasterWindow::moveEvent(param1);
			return;
		}

		QMoveEvent* sigval1 = param1;
		miqt_exec_callback_QRasterWindow_moveEvent(this, handle__moveEvent.value(), sigval1);

	}

	friend void QRasterWindow_virtualbase_moveEvent(void* self, QMoveEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> handle__focusInEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* param1) override {
		if (!handle__focusInEvent) {
			QRasterWindow::focusInEvent(param1);
			return;
		}

		QFocusEvent* sigval1 = param1;
		miqt_exec_callback_QRasterWindow_focusInEvent(this, handle__focusInEvent.value(), sigval1);

	}

	friend void QRasterWindow_virtualbase_focusInEvent(void* self, QFocusEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> handle__focusOutEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* param1) override {
		if (!handle__focusOutEvent) {
			QRasterWindow::focusOutEvent(param1);
			return;
		}

		QFocusEvent* sigval1 = param1;
		miqt_exec_callback_QRasterWindow_focusOutEvent(this, handle__focusOutEvent.value(), sigval1);

	}

	friend void QRasterWindow_virtualbase_focusOutEvent(void* self, QFocusEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> handle__showEvent;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (!handle__showEvent) {
			QRasterWindow::showEvent(param1);
			return;
		}

		QShowEvent* sigval1 = param1;
		miqt_exec_callback_QRasterWindow_showEvent(this, handle__showEvent.value(), sigval1);

	}

	friend void QRasterWindow_virtualbase_showEvent(void* self, QShowEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> handle__hideEvent;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* param1) override {
		if (!handle__hideEvent) {
			QRasterWindow::hideEvent(param1);
			return;
		}

		QHideEvent* sigval1 = param1;
		miqt_exec_callback_QRasterWindow_hideEvent(this, handle__hideEvent.value(), sigval1);

	}

	friend void QRasterWindow_virtualbase_hideEvent(void* self, QHideEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> handle__keyPressEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (!handle__keyPressEvent) {
			QRasterWindow::keyPressEvent(param1);
			return;
		}

		QKeyEvent* sigval1 = param1;
		miqt_exec_callback_QRasterWindow_keyPressEvent(this, handle__keyPressEvent.value(), sigval1);

	}

	friend void QRasterWindow_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> handle__keyReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* param1) override {
		if (!handle__keyReleaseEvent) {
			QRasterWindow::keyReleaseEvent(param1);
			return;
		}

		QKeyEvent* sigval1 = param1;
		miqt_exec_callback_QRasterWindow_keyReleaseEvent(this, handle__keyReleaseEvent.value(), sigval1);

	}

	friend void QRasterWindow_virtualbase_keyReleaseEvent(void* self, QKeyEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> handle__mousePressEvent;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (!handle__mousePressEvent) {
			QRasterWindow::mousePressEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QRasterWindow_mousePressEvent(this, handle__mousePressEvent.value(), sigval1);

	}

	friend void QRasterWindow_virtualbase_mousePressEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> handle__mouseReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (!handle__mouseReleaseEvent) {
			QRasterWindow::mouseReleaseEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QRasterWindow_mouseReleaseEvent(this, handle__mouseReleaseEvent.value(), sigval1);

	}

	friend void QRasterWindow_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> handle__mouseDoubleClickEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
		if (!handle__mouseDoubleClickEvent) {
			QRasterWindow::mouseDoubleClickEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QRasterWindow_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent.value(), sigval1);

	}

	friend void QRasterWindow_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> handle__mouseMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (!handle__mouseMoveEvent) {
			QRasterWindow::mouseMoveEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QRasterWindow_mouseMoveEvent(this, handle__mouseMoveEvent.value(), sigval1);

	}

	friend void QRasterWindow_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> handle__wheelEvent;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (!handle__wheelEvent) {
			QRasterWindow::wheelEvent(param1);
			return;
		}

		QWheelEvent* sigval1 = param1;
		miqt_exec_callback_QRasterWindow_wheelEvent(this, handle__wheelEvent.value(), sigval1);

	}

	friend void QRasterWindow_virtualbase_wheelEvent(void* self, QWheelEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> handle__touchEvent;

	// Subclass to allow providing a Go implementation
	virtual void touchEvent(QTouchEvent* param1) override {
		if (!handle__touchEvent) {
			QRasterWindow::touchEvent(param1);
			return;
		}

		QTouchEvent* sigval1 = param1;
		miqt_exec_callback_QRasterWindow_touchEvent(this, handle__touchEvent.value(), sigval1);

	}

	friend void QRasterWindow_virtualbase_touchEvent(void* self, QTouchEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> handle__tabletEvent;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* param1) override {
		if (!handle__tabletEvent) {
			QRasterWindow::tabletEvent(param1);
			return;
		}

		QTabletEvent* sigval1 = param1;
		miqt_exec_callback_QRasterWindow_tabletEvent(this, handle__tabletEvent.value(), sigval1);

	}

	friend void QRasterWindow_virtualbase_tabletEvent(void* self, QTabletEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> handle__nativeEvent;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (!handle__nativeEvent) {
			return QRasterWindow::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QRasterWindow_nativeEvent(this, handle__nativeEvent.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QRasterWindow_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QRasterWindow::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QRasterWindow_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QRasterWindow_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QRasterWindow::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QRasterWindow_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QRasterWindow_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QRasterWindow::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QRasterWindow_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QRasterWindow_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QRasterWindow::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QRasterWindow_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QRasterWindow_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QRasterWindow::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QRasterWindow_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QRasterWindow_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QRasterWindow::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QRasterWindow_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QRasterWindow_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> handle__devType;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (!handle__devType) {
			return QRasterWindow::devType();
		}

		int callback_return_value = miqt_exec_callback_QRasterWindow_devType(this, handle__devType.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QRasterWindow_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> handle__initPainter;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (!handle__initPainter) {
			QRasterWindow::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QRasterWindow_initPainter(this, handle__initPainter.value(), sigval1);

	}

	friend void QRasterWindow_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> handle__sharedPainter;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (!handle__sharedPainter) {
			return QRasterWindow::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QRasterWindow_sharedPainter(this, handle__sharedPainter.value());
		return callback_return_value;
	}

	friend QPainter* QRasterWindow_virtualbase_sharedPainter(const void* self);

	// Wrappers to allow calling protected methods:
	friend QObject* QRasterWindow_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QRasterWindow_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QRasterWindow_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QRasterWindow_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QRasterWindow* QRasterWindow_new() {
	return new (std::nothrow) MiqtVirtualQRasterWindow();
}

QRasterWindow* QRasterWindow_new2(QWindow* parent) {
	return new (std::nothrow) MiqtVirtualQRasterWindow(parent);
}

void QRasterWindow_virtbase(QRasterWindow* src, QPaintDeviceWindow** outptr_QPaintDeviceWindow) {
	*outptr_QPaintDeviceWindow = static_cast<QPaintDeviceWindow*>(src);
}

QMetaObject* QRasterWindow_metaObject(const QRasterWindow* self) {
	return (QMetaObject*) self->metaObject();
}

void* QRasterWindow_metacast(QRasterWindow* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QRasterWindow_tr(const char* s) {
	QString _ret = QRasterWindow::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRasterWindow_trUtf8(const char* s) {
	QString _ret = QRasterWindow::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRasterWindow_tr2(const char* s, const char* c) {
	QString _ret = QRasterWindow::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRasterWindow_tr3(const char* s, const char* c, int n) {
	QString _ret = QRasterWindow::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRasterWindow_trUtf82(const char* s, const char* c) {
	QString _ret = QRasterWindow::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QRasterWindow_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QRasterWindow::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QRasterWindow_override_virtual_metric(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> slot_handle(slot);
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = std::move(slot_handle);
	return true;
}

int QRasterWindow_virtualbase_metric(const void* self, int metric) {
	return static_cast<const MiqtVirtualQRasterWindow*>(self)->QRasterWindow::metric(static_cast<MiqtVirtualQRasterWindow::PaintDeviceMetric>(metric));
}

bool QRasterWindow_override_virtual_redirected(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> slot_handle(slot);
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = std::move(slot_handle);
	return true;
}

QPaintDevice* QRasterWindow_virtualbase_redirected(const void* self, QPoint* param1) {
	return static_cast<const MiqtVirtualQRasterWindow*>(self)->QRasterWindow::redirected(param1);
}

bool QRasterWindow_override_virtual_paintEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> slot_handle(slot);
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = std::move(slot_handle);
	return true;
}

void QRasterWindow_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	static_cast<MiqtVirtualQRasterWindow*>(self)->QRasterWindow::paintEvent(event);
}

bool QRasterWindow_override_virtual_exposeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> slot_handle(slot);
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__exposeEvent = std::move(slot_handle);
	return true;
}

void QRasterWindow_virtualbase_exposeEvent(void* self, QExposeEvent* param1) {
	static_cast<MiqtVirtualQRasterWindow*>(self)->QRasterWindow::exposeEvent(param1);
}

bool QRasterWindow_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> slot_handle(slot);
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QRasterWindow_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQRasterWindow*>(self)->QRasterWindow::event(event);
}

bool QRasterWindow_override_virtual_surfaceType(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> slot_handle(slot);
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__surfaceType = std::move(slot_handle);
	return true;
}

int QRasterWindow_virtualbase_surfaceType(const void* self) {
	MiqtVirtualQRasterWindow::SurfaceType _ret = static_cast<const MiqtVirtualQRasterWindow*>(self)->QRasterWindow::surfaceType();
	return static_cast<int>(_ret);
}

bool QRasterWindow_override_virtual_format(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> slot_handle(slot);
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__format = std::move(slot_handle);
	return true;
}

QSurfaceFormat* QRasterWindow_virtualbase_format(const void* self) {
	return new QSurfaceFormat(static_cast<const MiqtVirtualQRasterWindow*>(self)->QRasterWindow::format());
}

bool QRasterWindow_override_virtual_size(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> slot_handle(slot);
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__size = std::move(slot_handle);
	return true;
}

QSize* QRasterWindow_virtualbase_size(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQRasterWindow*>(self)->QRasterWindow::size());
}

bool QRasterWindow_override_virtual_accessibleRoot(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> slot_handle(slot);
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__accessibleRoot = std::move(slot_handle);
	return true;
}

QAccessibleInterface* QRasterWindow_virtualbase_accessibleRoot(const void* self) {
	return static_cast<const MiqtVirtualQRasterWindow*>(self)->QRasterWindow::accessibleRoot();
}

bool QRasterWindow_override_virtual_focusObject(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> slot_handle(slot);
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusObject = std::move(slot_handle);
	return true;
}

QObject* QRasterWindow_virtualbase_focusObject(const void* self) {
	return static_cast<const MiqtVirtualQRasterWindow*>(self)->QRasterWindow::focusObject();
}

bool QRasterWindow_override_virtual_resizeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> slot_handle(slot);
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = std::move(slot_handle);
	return true;
}

void QRasterWindow_virtualbase_resizeEvent(void* self, QResizeEvent* param1) {
	static_cast<MiqtVirtualQRasterWindow*>(self)->QRasterWindow::resizeEvent(param1);
}

bool QRasterWindow_override_virtual_moveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> slot_handle(slot);
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = std::move(slot_handle);
	return true;
}

void QRasterWindow_virtualbase_moveEvent(void* self, QMoveEvent* param1) {
	static_cast<MiqtVirtualQRasterWindow*>(self)->QRasterWindow::moveEvent(param1);
}

bool QRasterWindow_override_virtual_focusInEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> slot_handle(slot);
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = std::move(slot_handle);
	return true;
}

void QRasterWindow_virtualbase_focusInEvent(void* self, QFocusEvent* param1) {
	static_cast<MiqtVirtualQRasterWindow*>(self)->QRasterWindow::focusInEvent(param1);
}

bool QRasterWindow_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> slot_handle(slot);
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = std::move(slot_handle);
	return true;
}

void QRasterWindow_virtualbase_focusOutEvent(void* self, QFocusEvent* param1) {
	static_cast<MiqtVirtualQRasterWindow*>(self)->QRasterWindow::focusOutEvent(param1);
}

bool QRasterWindow_override_virtual_showEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> slot_handle(slot);
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = std::move(slot_handle);
	return true;
}

void QRasterWindow_virtualbase_showEvent(void* self, QShowEvent* param1) {
	static_cast<MiqtVirtualQRasterWindow*>(self)->QRasterWindow::showEvent(param1);
}

bool QRasterWindow_override_virtual_hideEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> slot_handle(slot);
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = std::move(slot_handle);
	return true;
}

void QRasterWindow_virtualbase_hideEvent(void* self, QHideEvent* param1) {
	static_cast<MiqtVirtualQRasterWindow*>(self)->QRasterWindow::hideEvent(param1);
}

bool QRasterWindow_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> slot_handle(slot);
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = std::move(slot_handle);
	return true;
}

void QRasterWindow_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {
	static_cast<MiqtVirtualQRasterWindow*>(self)->QRasterWindow::keyPressEvent(param1);
}

bool QRasterWindow_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> slot_handle(slot);
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = std::move(slot_handle);
	return true;
}

void QRasterWindow_virtualbase_keyReleaseEvent(void* self, QKeyEvent* param1) {
	static_cast<MiqtVirtualQRasterWindow*>(self)->QRasterWindow::keyReleaseEvent(param1);
}

bool QRasterWindow_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> slot_handle(slot);
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = std::move(slot_handle);
	return true;
}

void QRasterWindow_virtualbase_mousePressEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQRasterWindow*>(self)->QRasterWindow::mousePressEvent(param1);
}

bool QRasterWindow_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> slot_handle(slot);
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = std::move(slot_handle);
	return true;
}

void QRasterWindow_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQRasterWindow*>(self)->QRasterWindow::mouseReleaseEvent(param1);
}

bool QRasterWindow_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> slot_handle(slot);
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = std::move(slot_handle);
	return true;
}

void QRasterWindow_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQRasterWindow*>(self)->QRasterWindow::mouseDoubleClickEvent(param1);
}

bool QRasterWindow_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> slot_handle(slot);
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = std::move(slot_handle);
	return true;
}

void QRasterWindow_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQRasterWindow*>(self)->QRasterWindow::mouseMoveEvent(param1);
}

bool QRasterWindow_override_virtual_wheelEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> slot_handle(slot);
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = std::move(slot_handle);
	return true;
}

void QRasterWindow_virtualbase_wheelEvent(void* self, QWheelEvent* param1) {
	static_cast<MiqtVirtualQRasterWindow*>(self)->QRasterWindow::wheelEvent(param1);
}

bool QRasterWindow_override_virtual_touchEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> slot_handle(slot);
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__touchEvent = std::move(slot_handle);
	return true;
}

void QRasterWindow_virtualbase_touchEvent(void* self, QTouchEvent* param1) {
	static_cast<MiqtVirtualQRasterWindow*>(self)->QRasterWindow::touchEvent(param1);
}

bool QRasterWindow_override_virtual_tabletEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> slot_handle(slot);
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = std::move(slot_handle);
	return true;
}

void QRasterWindow_virtualbase_tabletEvent(void* self, QTabletEvent* param1) {
	static_cast<MiqtVirtualQRasterWindow*>(self)->QRasterWindow::tabletEvent(param1);
}

bool QRasterWindow_override_virtual_nativeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> slot_handle(slot);
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = std::move(slot_handle);
	return true;
}

bool QRasterWindow_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQRasterWindow*>(self)->QRasterWindow::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QRasterWindow_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> slot_handle(slot);
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QRasterWindow_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQRasterWindow*>(self)->QRasterWindow::eventFilter(watched, event);
}

bool QRasterWindow_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> slot_handle(slot);
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QRasterWindow_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQRasterWindow*>(self)->QRasterWindow::timerEvent(event);
}

bool QRasterWindow_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> slot_handle(slot);
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QRasterWindow_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQRasterWindow*>(self)->QRasterWindow::childEvent(event);
}

bool QRasterWindow_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> slot_handle(slot);
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QRasterWindow_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQRasterWindow*>(self)->QRasterWindow::customEvent(event);
}

bool QRasterWindow_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> slot_handle(slot);
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QRasterWindow_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQRasterWindow*>(self)->QRasterWindow::connectNotify(*signal);
}

bool QRasterWindow_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> slot_handle(slot);
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QRasterWindow_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQRasterWindow*>(self)->QRasterWindow::disconnectNotify(*signal);
}

bool QRasterWindow_override_virtual_devType(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> slot_handle(slot);
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = std::move(slot_handle);
	return true;
}

int QRasterWindow_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQRasterWindow*>(self)->QRasterWindow::devType();
}

bool QRasterWindow_override_virtual_initPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> slot_handle(slot);
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = std::move(slot_handle);
	return true;
}

void QRasterWindow_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQRasterWindow*>(self)->QRasterWindow::initPainter(painter);
}

bool QRasterWindow_override_virtual_sharedPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QRasterWindow> slot_handle(slot);
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = std::move(slot_handle);
	return true;
}

QPainter* QRasterWindow_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQRasterWindow*>(self)->QRasterWindow::sharedPainter();
}

QObject* QRasterWindow_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QRasterWindow_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QRasterWindow_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QRasterWindow_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQRasterWindow* self_cast = dynamic_cast<MiqtVirtualQRasterWindow*>( (QRasterWindow*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QRasterWindow_delete(QRasterWindow* self) {
	delete self;
}

