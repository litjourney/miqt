#include <memory>
#include <utility>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QGLWidget>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPainterPath>
#include <QPoint>
#include <QRect>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qwt_plot_glcanvas.h>
#include "gen_qwt_plot_glcanvas.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QwtPlotGLCanvas(intptr_t);
bool miqt_exec_callback_QwtPlotGLCanvas_event(QwtPlotGLCanvas*, intptr_t, QEvent*);
void miqt_exec_callback_QwtPlotGLCanvas_paintEvent(QwtPlotGLCanvas*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QwtPlotGLCanvas_drawBackground(QwtPlotGLCanvas*, intptr_t, QPainter*);
void miqt_exec_callback_QwtPlotGLCanvas_drawBorder(QwtPlotGLCanvas*, intptr_t, QPainter*);
void miqt_exec_callback_QwtPlotGLCanvas_drawItems(QwtPlotGLCanvas*, intptr_t, QPainter*);
QPaintEngine* miqt_exec_callback_QwtPlotGLCanvas_paintEngine(const QwtPlotGLCanvas*, intptr_t);
void miqt_exec_callback_QwtPlotGLCanvas_updateGL(QwtPlotGLCanvas*, intptr_t);
void miqt_exec_callback_QwtPlotGLCanvas_updateOverlayGL(QwtPlotGLCanvas*, intptr_t);
void miqt_exec_callback_QwtPlotGLCanvas_initializeGL(QwtPlotGLCanvas*, intptr_t);
void miqt_exec_callback_QwtPlotGLCanvas_resizeGL(QwtPlotGLCanvas*, intptr_t, int, int);
void miqt_exec_callback_QwtPlotGLCanvas_paintGL(QwtPlotGLCanvas*, intptr_t);
void miqt_exec_callback_QwtPlotGLCanvas_initializeOverlayGL(QwtPlotGLCanvas*, intptr_t);
void miqt_exec_callback_QwtPlotGLCanvas_resizeOverlayGL(QwtPlotGLCanvas*, intptr_t, int, int);
void miqt_exec_callback_QwtPlotGLCanvas_paintOverlayGL(QwtPlotGLCanvas*, intptr_t);
void miqt_exec_callback_QwtPlotGLCanvas_resizeEvent(QwtPlotGLCanvas*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QwtPlotGLCanvas_glInit(QwtPlotGLCanvas*, intptr_t);
void miqt_exec_callback_QwtPlotGLCanvas_glDraw(QwtPlotGLCanvas*, intptr_t);
int miqt_exec_callback_QwtPlotGLCanvas_devType(const QwtPlotGLCanvas*, intptr_t);
void miqt_exec_callback_QwtPlotGLCanvas_setVisible(QwtPlotGLCanvas*, intptr_t, bool);
QSize* miqt_exec_callback_QwtPlotGLCanvas_sizeHint(const QwtPlotGLCanvas*, intptr_t);
QSize* miqt_exec_callback_QwtPlotGLCanvas_minimumSizeHint(const QwtPlotGLCanvas*, intptr_t);
int miqt_exec_callback_QwtPlotGLCanvas_heightForWidth(const QwtPlotGLCanvas*, intptr_t, int);
bool miqt_exec_callback_QwtPlotGLCanvas_hasHeightForWidth(const QwtPlotGLCanvas*, intptr_t);
void miqt_exec_callback_QwtPlotGLCanvas_mousePressEvent(QwtPlotGLCanvas*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtPlotGLCanvas_mouseReleaseEvent(QwtPlotGLCanvas*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtPlotGLCanvas_mouseDoubleClickEvent(QwtPlotGLCanvas*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtPlotGLCanvas_mouseMoveEvent(QwtPlotGLCanvas*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtPlotGLCanvas_wheelEvent(QwtPlotGLCanvas*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QwtPlotGLCanvas_keyPressEvent(QwtPlotGLCanvas*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtPlotGLCanvas_keyReleaseEvent(QwtPlotGLCanvas*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtPlotGLCanvas_focusInEvent(QwtPlotGLCanvas*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QwtPlotGLCanvas_focusOutEvent(QwtPlotGLCanvas*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QwtPlotGLCanvas_enterEvent(QwtPlotGLCanvas*, intptr_t, QEvent*);
void miqt_exec_callback_QwtPlotGLCanvas_leaveEvent(QwtPlotGLCanvas*, intptr_t, QEvent*);
void miqt_exec_callback_QwtPlotGLCanvas_moveEvent(QwtPlotGLCanvas*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QwtPlotGLCanvas_closeEvent(QwtPlotGLCanvas*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QwtPlotGLCanvas_contextMenuEvent(QwtPlotGLCanvas*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QwtPlotGLCanvas_tabletEvent(QwtPlotGLCanvas*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QwtPlotGLCanvas_actionEvent(QwtPlotGLCanvas*, intptr_t, QActionEvent*);
void miqt_exec_callback_QwtPlotGLCanvas_dragEnterEvent(QwtPlotGLCanvas*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QwtPlotGLCanvas_dragMoveEvent(QwtPlotGLCanvas*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QwtPlotGLCanvas_dragLeaveEvent(QwtPlotGLCanvas*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QwtPlotGLCanvas_dropEvent(QwtPlotGLCanvas*, intptr_t, QDropEvent*);
void miqt_exec_callback_QwtPlotGLCanvas_showEvent(QwtPlotGLCanvas*, intptr_t, QShowEvent*);
void miqt_exec_callback_QwtPlotGLCanvas_hideEvent(QwtPlotGLCanvas*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QwtPlotGLCanvas_nativeEvent(QwtPlotGLCanvas*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QwtPlotGLCanvas_changeEvent(QwtPlotGLCanvas*, intptr_t, QEvent*);
int miqt_exec_callback_QwtPlotGLCanvas_metric(const QwtPlotGLCanvas*, intptr_t, int);
void miqt_exec_callback_QwtPlotGLCanvas_initPainter(const QwtPlotGLCanvas*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QwtPlotGLCanvas_redirected(const QwtPlotGLCanvas*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QwtPlotGLCanvas_sharedPainter(const QwtPlotGLCanvas*, intptr_t);
void miqt_exec_callback_QwtPlotGLCanvas_inputMethodEvent(QwtPlotGLCanvas*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QwtPlotGLCanvas_inputMethodQuery(const QwtPlotGLCanvas*, intptr_t, int);
bool miqt_exec_callback_QwtPlotGLCanvas_focusNextPrevChild(QwtPlotGLCanvas*, intptr_t, bool);
bool miqt_exec_callback_QwtPlotGLCanvas_eventFilter(QwtPlotGLCanvas*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QwtPlotGLCanvas_timerEvent(QwtPlotGLCanvas*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QwtPlotGLCanvas_childEvent(QwtPlotGLCanvas*, intptr_t, QChildEvent*);
void miqt_exec_callback_QwtPlotGLCanvas_customEvent(QwtPlotGLCanvas*, intptr_t, QEvent*);
void miqt_exec_callback_QwtPlotGLCanvas_connectNotify(QwtPlotGLCanvas*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QwtPlotGLCanvas_disconnectNotify(QwtPlotGLCanvas*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtPlotGLCanvas final : public QwtPlotGLCanvas {
public:

	MiqtVirtualQwtPlotGLCanvas(): QwtPlotGLCanvas() {}
	MiqtVirtualQwtPlotGLCanvas(QwtPlot* param1): QwtPlotGLCanvas(param1) {}

	virtual ~MiqtVirtualQwtPlotGLCanvas() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (!handle__event) {
			return QwtPlotGLCanvas::event(param1);
		}

		QEvent* sigval1 = param1;
		bool callback_return_value = miqt_exec_callback_QwtPlotGLCanvas_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QwtPlotGLCanvas_virtualbase_event(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__paintEvent;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (!handle__paintEvent) {
			QwtPlotGLCanvas::paintEvent(param1);
			return;
		}

		QPaintEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlotGLCanvas_paintEvent(this, handle__paintEvent.value(), sigval1);

	}

	friend void QwtPlotGLCanvas_virtualbase_paintEvent(void* self, QPaintEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__drawBackground;

	// Subclass to allow providing a Go implementation
	virtual void drawBackground(QPainter* param1) override {
		if (!handle__drawBackground) {
			QwtPlotGLCanvas::drawBackground(param1);
			return;
		}

		QPainter* sigval1 = param1;
		miqt_exec_callback_QwtPlotGLCanvas_drawBackground(this, handle__drawBackground.value(), sigval1);

	}

	friend void QwtPlotGLCanvas_virtualbase_drawBackground(void* self, QPainter* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__drawBorder;

	// Subclass to allow providing a Go implementation
	virtual void drawBorder(QPainter* param1) override {
		if (!handle__drawBorder) {
			QwtPlotGLCanvas::drawBorder(param1);
			return;
		}

		QPainter* sigval1 = param1;
		miqt_exec_callback_QwtPlotGLCanvas_drawBorder(this, handle__drawBorder.value(), sigval1);

	}

	friend void QwtPlotGLCanvas_virtualbase_drawBorder(void* self, QPainter* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__drawItems;

	// Subclass to allow providing a Go implementation
	virtual void drawItems(QPainter* param1) override {
		if (!handle__drawItems) {
			QwtPlotGLCanvas::drawItems(param1);
			return;
		}

		QPainter* sigval1 = param1;
		miqt_exec_callback_QwtPlotGLCanvas_drawItems(this, handle__drawItems.value(), sigval1);

	}

	friend void QwtPlotGLCanvas_virtualbase_drawItems(void* self, QPainter* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__paintEngine;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (!handle__paintEngine) {
			return QwtPlotGLCanvas::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QwtPlotGLCanvas_paintEngine(this, handle__paintEngine.value());
		return callback_return_value;
	}

	friend QPaintEngine* QwtPlotGLCanvas_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__updateGL;

	// Subclass to allow providing a Go implementation
	virtual void updateGL() override {
		if (!handle__updateGL) {
			QwtPlotGLCanvas::updateGL();
			return;
		}

		miqt_exec_callback_QwtPlotGLCanvas_updateGL(this, handle__updateGL.value());

	}

	friend void QwtPlotGLCanvas_virtualbase_updateGL(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__updateOverlayGL;

	// Subclass to allow providing a Go implementation
	virtual void updateOverlayGL() override {
		if (!handle__updateOverlayGL) {
			QwtPlotGLCanvas::updateOverlayGL();
			return;
		}

		miqt_exec_callback_QwtPlotGLCanvas_updateOverlayGL(this, handle__updateOverlayGL.value());

	}

	friend void QwtPlotGLCanvas_virtualbase_updateOverlayGL(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__initializeGL;

	// Subclass to allow providing a Go implementation
	virtual void initializeGL() override {
		if (!handle__initializeGL) {
			QwtPlotGLCanvas::initializeGL();
			return;
		}

		miqt_exec_callback_QwtPlotGLCanvas_initializeGL(this, handle__initializeGL.value());

	}

	friend void QwtPlotGLCanvas_virtualbase_initializeGL(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__resizeGL;

	// Subclass to allow providing a Go implementation
	virtual void resizeGL(int w, int h) override {
		if (!handle__resizeGL) {
			QwtPlotGLCanvas::resizeGL(w, h);
			return;
		}

		int sigval1 = w;
		int sigval2 = h;
		miqt_exec_callback_QwtPlotGLCanvas_resizeGL(this, handle__resizeGL.value(), sigval1, sigval2);

	}

	friend void QwtPlotGLCanvas_virtualbase_resizeGL(void* self, int w, int h);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__paintGL;

	// Subclass to allow providing a Go implementation
	virtual void paintGL() override {
		if (!handle__paintGL) {
			QwtPlotGLCanvas::paintGL();
			return;
		}

		miqt_exec_callback_QwtPlotGLCanvas_paintGL(this, handle__paintGL.value());

	}

	friend void QwtPlotGLCanvas_virtualbase_paintGL(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__initializeOverlayGL;

	// Subclass to allow providing a Go implementation
	virtual void initializeOverlayGL() override {
		if (!handle__initializeOverlayGL) {
			QwtPlotGLCanvas::initializeOverlayGL();
			return;
		}

		miqt_exec_callback_QwtPlotGLCanvas_initializeOverlayGL(this, handle__initializeOverlayGL.value());

	}

	friend void QwtPlotGLCanvas_virtualbase_initializeOverlayGL(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__resizeOverlayGL;

	// Subclass to allow providing a Go implementation
	virtual void resizeOverlayGL(int w, int h) override {
		if (!handle__resizeOverlayGL) {
			QwtPlotGLCanvas::resizeOverlayGL(w, h);
			return;
		}

		int sigval1 = w;
		int sigval2 = h;
		miqt_exec_callback_QwtPlotGLCanvas_resizeOverlayGL(this, handle__resizeOverlayGL.value(), sigval1, sigval2);

	}

	friend void QwtPlotGLCanvas_virtualbase_resizeOverlayGL(void* self, int w, int h);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__paintOverlayGL;

	// Subclass to allow providing a Go implementation
	virtual void paintOverlayGL() override {
		if (!handle__paintOverlayGL) {
			QwtPlotGLCanvas::paintOverlayGL();
			return;
		}

		miqt_exec_callback_QwtPlotGLCanvas_paintOverlayGL(this, handle__paintOverlayGL.value());

	}

	friend void QwtPlotGLCanvas_virtualbase_paintOverlayGL(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__resizeEvent;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (!handle__resizeEvent) {
			QwtPlotGLCanvas::resizeEvent(param1);
			return;
		}

		QResizeEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlotGLCanvas_resizeEvent(this, handle__resizeEvent.value(), sigval1);

	}

	friend void QwtPlotGLCanvas_virtualbase_resizeEvent(void* self, QResizeEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__glInit;

	// Subclass to allow providing a Go implementation
	virtual void glInit() override {
		if (!handle__glInit) {
			QwtPlotGLCanvas::glInit();
			return;
		}

		miqt_exec_callback_QwtPlotGLCanvas_glInit(this, handle__glInit.value());

	}

	friend void QwtPlotGLCanvas_virtualbase_glInit(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__glDraw;

	// Subclass to allow providing a Go implementation
	virtual void glDraw() override {
		if (!handle__glDraw) {
			QwtPlotGLCanvas::glDraw();
			return;
		}

		miqt_exec_callback_QwtPlotGLCanvas_glDraw(this, handle__glDraw.value());

	}

	friend void QwtPlotGLCanvas_virtualbase_glDraw(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__devType;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (!handle__devType) {
			return QwtPlotGLCanvas::devType();
		}

		int callback_return_value = miqt_exec_callback_QwtPlotGLCanvas_devType(this, handle__devType.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QwtPlotGLCanvas_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__setVisible;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (!handle__setVisible) {
			QwtPlotGLCanvas::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QwtPlotGLCanvas_setVisible(this, handle__setVisible.value(), sigval1);

	}

	friend void QwtPlotGLCanvas_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__sizeHint;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (!handle__sizeHint) {
			return QwtPlotGLCanvas::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtPlotGLCanvas_sizeHint(this, handle__sizeHint.value());
		return *callback_return_value;
	}

	friend QSize* QwtPlotGLCanvas_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__minimumSizeHint;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (!handle__minimumSizeHint) {
			return QwtPlotGLCanvas::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtPlotGLCanvas_minimumSizeHint(this, handle__minimumSizeHint.value());
		return *callback_return_value;
	}

	friend QSize* QwtPlotGLCanvas_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__heightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (!handle__heightForWidth) {
			return QwtPlotGLCanvas::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QwtPlotGLCanvas_heightForWidth(this, handle__heightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtPlotGLCanvas_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__hasHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (!handle__hasHeightForWidth) {
			return QwtPlotGLCanvas::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QwtPlotGLCanvas_hasHeightForWidth(this, handle__hasHeightForWidth.value());
		return callback_return_value;
	}

	friend bool QwtPlotGLCanvas_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__mousePressEvent;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (!handle__mousePressEvent) {
			QwtPlotGLCanvas::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotGLCanvas_mousePressEvent(this, handle__mousePressEvent.value(), sigval1);

	}

	friend void QwtPlotGLCanvas_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__mouseReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (!handle__mouseReleaseEvent) {
			QwtPlotGLCanvas::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotGLCanvas_mouseReleaseEvent(this, handle__mouseReleaseEvent.value(), sigval1);

	}

	friend void QwtPlotGLCanvas_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__mouseDoubleClickEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (!handle__mouseDoubleClickEvent) {
			QwtPlotGLCanvas::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotGLCanvas_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent.value(), sigval1);

	}

	friend void QwtPlotGLCanvas_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__mouseMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (!handle__mouseMoveEvent) {
			QwtPlotGLCanvas::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotGLCanvas_mouseMoveEvent(this, handle__mouseMoveEvent.value(), sigval1);

	}

	friend void QwtPlotGLCanvas_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__wheelEvent;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (!handle__wheelEvent) {
			QwtPlotGLCanvas::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotGLCanvas_wheelEvent(this, handle__wheelEvent.value(), sigval1);

	}

	friend void QwtPlotGLCanvas_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__keyPressEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (!handle__keyPressEvent) {
			QwtPlotGLCanvas::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotGLCanvas_keyPressEvent(this, handle__keyPressEvent.value(), sigval1);

	}

	friend void QwtPlotGLCanvas_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__keyReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (!handle__keyReleaseEvent) {
			QwtPlotGLCanvas::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotGLCanvas_keyReleaseEvent(this, handle__keyReleaseEvent.value(), sigval1);

	}

	friend void QwtPlotGLCanvas_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__focusInEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (!handle__focusInEvent) {
			QwtPlotGLCanvas::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotGLCanvas_focusInEvent(this, handle__focusInEvent.value(), sigval1);

	}

	friend void QwtPlotGLCanvas_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__focusOutEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (!handle__focusOutEvent) {
			QwtPlotGLCanvas::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotGLCanvas_focusOutEvent(this, handle__focusOutEvent.value(), sigval1);

	}

	friend void QwtPlotGLCanvas_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__enterEvent;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (!handle__enterEvent) {
			QwtPlotGLCanvas::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotGLCanvas_enterEvent(this, handle__enterEvent.value(), sigval1);

	}

	friend void QwtPlotGLCanvas_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__leaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (!handle__leaveEvent) {
			QwtPlotGLCanvas::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotGLCanvas_leaveEvent(this, handle__leaveEvent.value(), sigval1);

	}

	friend void QwtPlotGLCanvas_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__moveEvent;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (!handle__moveEvent) {
			QwtPlotGLCanvas::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotGLCanvas_moveEvent(this, handle__moveEvent.value(), sigval1);

	}

	friend void QwtPlotGLCanvas_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__closeEvent;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (!handle__closeEvent) {
			QwtPlotGLCanvas::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotGLCanvas_closeEvent(this, handle__closeEvent.value(), sigval1);

	}

	friend void QwtPlotGLCanvas_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__contextMenuEvent;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (!handle__contextMenuEvent) {
			QwtPlotGLCanvas::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotGLCanvas_contextMenuEvent(this, handle__contextMenuEvent.value(), sigval1);

	}

	friend void QwtPlotGLCanvas_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__tabletEvent;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (!handle__tabletEvent) {
			QwtPlotGLCanvas::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotGLCanvas_tabletEvent(this, handle__tabletEvent.value(), sigval1);

	}

	friend void QwtPlotGLCanvas_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__actionEvent;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (!handle__actionEvent) {
			QwtPlotGLCanvas::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotGLCanvas_actionEvent(this, handle__actionEvent.value(), sigval1);

	}

	friend void QwtPlotGLCanvas_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__dragEnterEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (!handle__dragEnterEvent) {
			QwtPlotGLCanvas::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotGLCanvas_dragEnterEvent(this, handle__dragEnterEvent.value(), sigval1);

	}

	friend void QwtPlotGLCanvas_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__dragMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (!handle__dragMoveEvent) {
			QwtPlotGLCanvas::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotGLCanvas_dragMoveEvent(this, handle__dragMoveEvent.value(), sigval1);

	}

	friend void QwtPlotGLCanvas_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__dragLeaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (!handle__dragLeaveEvent) {
			QwtPlotGLCanvas::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotGLCanvas_dragLeaveEvent(this, handle__dragLeaveEvent.value(), sigval1);

	}

	friend void QwtPlotGLCanvas_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__dropEvent;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (!handle__dropEvent) {
			QwtPlotGLCanvas::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotGLCanvas_dropEvent(this, handle__dropEvent.value(), sigval1);

	}

	friend void QwtPlotGLCanvas_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__showEvent;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (!handle__showEvent) {
			QwtPlotGLCanvas::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotGLCanvas_showEvent(this, handle__showEvent.value(), sigval1);

	}

	friend void QwtPlotGLCanvas_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__hideEvent;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (!handle__hideEvent) {
			QwtPlotGLCanvas::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotGLCanvas_hideEvent(this, handle__hideEvent.value(), sigval1);

	}

	friend void QwtPlotGLCanvas_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__nativeEvent;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (!handle__nativeEvent) {
			return QwtPlotGLCanvas::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QwtPlotGLCanvas_nativeEvent(this, handle__nativeEvent.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QwtPlotGLCanvas_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__changeEvent;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (!handle__changeEvent) {
			QwtPlotGLCanvas::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlotGLCanvas_changeEvent(this, handle__changeEvent.value(), sigval1);

	}

	friend void QwtPlotGLCanvas_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__metric;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (!handle__metric) {
			return QwtPlotGLCanvas::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QwtPlotGLCanvas_metric(this, handle__metric.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtPlotGLCanvas_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__initPainter;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (!handle__initPainter) {
			QwtPlotGLCanvas::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QwtPlotGLCanvas_initPainter(this, handle__initPainter.value(), sigval1);

	}

	friend void QwtPlotGLCanvas_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__redirected;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (!handle__redirected) {
			return QwtPlotGLCanvas::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QwtPlotGLCanvas_redirected(this, handle__redirected.value(), sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QwtPlotGLCanvas_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__sharedPainter;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (!handle__sharedPainter) {
			return QwtPlotGLCanvas::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QwtPlotGLCanvas_sharedPainter(this, handle__sharedPainter.value());
		return callback_return_value;
	}

	friend QPainter* QwtPlotGLCanvas_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__inputMethodEvent;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (!handle__inputMethodEvent) {
			QwtPlotGLCanvas::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlotGLCanvas_inputMethodEvent(this, handle__inputMethodEvent.value(), sigval1);

	}

	friend void QwtPlotGLCanvas_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__inputMethodQuery;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (!handle__inputMethodQuery) {
			return QwtPlotGLCanvas::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QwtPlotGLCanvas_inputMethodQuery(this, handle__inputMethodQuery.value(), sigval1);
		return *callback_return_value;
	}

	friend QVariant* QwtPlotGLCanvas_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__focusNextPrevChild;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (!handle__focusNextPrevChild) {
			return QwtPlotGLCanvas::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QwtPlotGLCanvas_focusNextPrevChild(this, handle__focusNextPrevChild.value(), sigval1);
		return callback_return_value;
	}

	friend bool QwtPlotGLCanvas_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QwtPlotGLCanvas::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QwtPlotGLCanvas_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QwtPlotGLCanvas_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QwtPlotGLCanvas::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotGLCanvas_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QwtPlotGLCanvas_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QwtPlotGLCanvas::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotGLCanvas_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QwtPlotGLCanvas_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QwtPlotGLCanvas::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotGLCanvas_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QwtPlotGLCanvas_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QwtPlotGLCanvas::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtPlotGLCanvas_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QwtPlotGLCanvas_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QwtPlotGLCanvas::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtPlotGLCanvas_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QwtPlotGLCanvas_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QwtPlotGLCanvas_protectedbase_setAutoBufferSwap(bool* _dynamic_cast_ok, void* self, bool on);
	friend bool QwtPlotGLCanvas_protectedbase_autoBufferSwap(bool* _dynamic_cast_ok, const void* self);
	friend void QwtPlotGLCanvas_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QwtPlotGLCanvas_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QwtPlotGLCanvas_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QwtPlotGLCanvas_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QwtPlotGLCanvas_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QwtPlotGLCanvas_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QwtPlotGLCanvas_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QwtPlotGLCanvas_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QwtPlotGLCanvas_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QwtPlotGLCanvas* QwtPlotGLCanvas_new() {
	return new (std::nothrow) MiqtVirtualQwtPlotGLCanvas();
}

QwtPlotGLCanvas* QwtPlotGLCanvas_new2(QwtPlot* param1) {
	return new (std::nothrow) MiqtVirtualQwtPlotGLCanvas(param1);
}

void QwtPlotGLCanvas_virtbase(QwtPlotGLCanvas* src, QGLWidget** outptr_QGLWidget) {
	*outptr_QGLWidget = static_cast<QGLWidget*>(src);
}

QMetaObject* QwtPlotGLCanvas_metaObject(const QwtPlotGLCanvas* self) {
	return (QMetaObject*) self->metaObject();
}

void* QwtPlotGLCanvas_metacast(QwtPlotGLCanvas* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QwtPlotGLCanvas_tr(const char* s) {
	QString _ret = QwtPlotGLCanvas::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtPlotGLCanvas_trUtf8(const char* s) {
	QString _ret = QwtPlotGLCanvas::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QwtPlotGLCanvas_setFrameStyle(QwtPlotGLCanvas* self, int style) {
	self->setFrameStyle(static_cast<int>(style));
}

int QwtPlotGLCanvas_frameStyle(const QwtPlotGLCanvas* self) {
	return self->frameStyle();
}

void QwtPlotGLCanvas_setFrameShadow(QwtPlotGLCanvas* self, int frameShadow) {
	self->setFrameShadow(static_cast<QwtPlotGLCanvas::Shadow>(frameShadow));
}

int QwtPlotGLCanvas_frameShadow(const QwtPlotGLCanvas* self) {
	QwtPlotGLCanvas::Shadow _ret = self->frameShadow();
	return static_cast<int>(_ret);
}

void QwtPlotGLCanvas_setFrameShape(QwtPlotGLCanvas* self, int frameShape) {
	self->setFrameShape(static_cast<QwtPlotGLCanvas::Shape>(frameShape));
}

int QwtPlotGLCanvas_frameShape(const QwtPlotGLCanvas* self) {
	QwtPlotGLCanvas::Shape _ret = self->frameShape();
	return static_cast<int>(_ret);
}

void QwtPlotGLCanvas_setLineWidth(QwtPlotGLCanvas* self, int lineWidth) {
	self->setLineWidth(static_cast<int>(lineWidth));
}

int QwtPlotGLCanvas_lineWidth(const QwtPlotGLCanvas* self) {
	return self->lineWidth();
}

void QwtPlotGLCanvas_setMidLineWidth(QwtPlotGLCanvas* self, int midLineWidth) {
	self->setMidLineWidth(static_cast<int>(midLineWidth));
}

int QwtPlotGLCanvas_midLineWidth(const QwtPlotGLCanvas* self) {
	return self->midLineWidth();
}

int QwtPlotGLCanvas_frameWidth(const QwtPlotGLCanvas* self) {
	return self->frameWidth();
}

QRect* QwtPlotGLCanvas_frameRect(const QwtPlotGLCanvas* self) {
	return new QRect(self->frameRect());
}

QPainterPath* QwtPlotGLCanvas_borderPath(const QwtPlotGLCanvas* self, QRect* param1) {
	return new QPainterPath(self->borderPath(*param1));
}

bool QwtPlotGLCanvas_event(QwtPlotGLCanvas* self, QEvent* param1) {
	return self->event(param1);
}

void QwtPlotGLCanvas_replot(QwtPlotGLCanvas* self) {
	self->replot();
}

struct miqt_string QwtPlotGLCanvas_tr2(const char* s, const char* c) {
	QString _ret = QwtPlotGLCanvas::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtPlotGLCanvas_tr3(const char* s, const char* c, int n) {
	QString _ret = QwtPlotGLCanvas::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtPlotGLCanvas_trUtf82(const char* s, const char* c) {
	QString _ret = QwtPlotGLCanvas::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtPlotGLCanvas_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QwtPlotGLCanvas::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QwtPlotGLCanvas_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QwtPlotGLCanvas_virtualbase_event(void* self, QEvent* param1) {
	return static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::event(param1);
}

bool QwtPlotGLCanvas_override_virtual_paintEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::paintEvent(param1);
}

bool QwtPlotGLCanvas_override_virtual_drawBackground(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawBackground = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_drawBackground(void* self, QPainter* param1) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::drawBackground(param1);
}

bool QwtPlotGLCanvas_override_virtual_drawBorder(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawBorder = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_drawBorder(void* self, QPainter* param1) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::drawBorder(param1);
}

bool QwtPlotGLCanvas_override_virtual_drawItems(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawItems = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_drawItems(void* self, QPainter* param1) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::drawItems(param1);
}

bool QwtPlotGLCanvas_override_virtual_paintEngine(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = std::move(slot_handle);
	return true;
}

QPaintEngine* QwtPlotGLCanvas_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::paintEngine();
}

bool QwtPlotGLCanvas_override_virtual_updateGL(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateGL = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_updateGL(void* self) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::updateGL();
}

bool QwtPlotGLCanvas_override_virtual_updateOverlayGL(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateOverlayGL = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_updateOverlayGL(void* self) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::updateOverlayGL();
}

bool QwtPlotGLCanvas_override_virtual_initializeGL(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initializeGL = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_initializeGL(void* self) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::initializeGL();
}

bool QwtPlotGLCanvas_override_virtual_resizeGL(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeGL = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_resizeGL(void* self, int w, int h) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::resizeGL(static_cast<int>(w), static_cast<int>(h));
}

bool QwtPlotGLCanvas_override_virtual_paintGL(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintGL = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_paintGL(void* self) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::paintGL();
}

bool QwtPlotGLCanvas_override_virtual_initializeOverlayGL(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initializeOverlayGL = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_initializeOverlayGL(void* self) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::initializeOverlayGL();
}

bool QwtPlotGLCanvas_override_virtual_resizeOverlayGL(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeOverlayGL = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_resizeOverlayGL(void* self, int w, int h) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::resizeOverlayGL(static_cast<int>(w), static_cast<int>(h));
}

bool QwtPlotGLCanvas_override_virtual_paintOverlayGL(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintOverlayGL = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_paintOverlayGL(void* self) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::paintOverlayGL();
}

bool QwtPlotGLCanvas_override_virtual_resizeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_resizeEvent(void* self, QResizeEvent* param1) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::resizeEvent(param1);
}

bool QwtPlotGLCanvas_override_virtual_glInit(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__glInit = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_glInit(void* self) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::glInit();
}

bool QwtPlotGLCanvas_override_virtual_glDraw(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__glDraw = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_glDraw(void* self) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::glDraw();
}

bool QwtPlotGLCanvas_override_virtual_devType(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = std::move(slot_handle);
	return true;
}

int QwtPlotGLCanvas_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::devType();
}

bool QwtPlotGLCanvas_override_virtual_setVisible(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::setVisible(visible);
}

bool QwtPlotGLCanvas_override_virtual_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	return true;
}

QSize* QwtPlotGLCanvas_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::sizeHint());
}

bool QwtPlotGLCanvas_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	return true;
}

QSize* QwtPlotGLCanvas_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::minimumSizeHint());
}

bool QwtPlotGLCanvas_override_virtual_heightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = std::move(slot_handle);
	return true;
}

int QwtPlotGLCanvas_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::heightForWidth(static_cast<int>(param1));
}

bool QwtPlotGLCanvas_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = std::move(slot_handle);
	return true;
}

bool QwtPlotGLCanvas_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::hasHeightForWidth();
}

bool QwtPlotGLCanvas_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::mousePressEvent(event);
}

bool QwtPlotGLCanvas_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::mouseReleaseEvent(event);
}

bool QwtPlotGLCanvas_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::mouseDoubleClickEvent(event);
}

bool QwtPlotGLCanvas_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::mouseMoveEvent(event);
}

bool QwtPlotGLCanvas_override_virtual_wheelEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::wheelEvent(event);
}

bool QwtPlotGLCanvas_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::keyPressEvent(event);
}

bool QwtPlotGLCanvas_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::keyReleaseEvent(event);
}

bool QwtPlotGLCanvas_override_virtual_focusInEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::focusInEvent(event);
}

bool QwtPlotGLCanvas_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::focusOutEvent(event);
}

bool QwtPlotGLCanvas_override_virtual_enterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::enterEvent(event);
}

bool QwtPlotGLCanvas_override_virtual_leaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::leaveEvent(event);
}

bool QwtPlotGLCanvas_override_virtual_moveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::moveEvent(event);
}

bool QwtPlotGLCanvas_override_virtual_closeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::closeEvent(event);
}

bool QwtPlotGLCanvas_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::contextMenuEvent(event);
}

bool QwtPlotGLCanvas_override_virtual_tabletEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::tabletEvent(event);
}

bool QwtPlotGLCanvas_override_virtual_actionEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::actionEvent(event);
}

bool QwtPlotGLCanvas_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::dragEnterEvent(event);
}

bool QwtPlotGLCanvas_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::dragMoveEvent(event);
}

bool QwtPlotGLCanvas_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::dragLeaveEvent(event);
}

bool QwtPlotGLCanvas_override_virtual_dropEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::dropEvent(event);
}

bool QwtPlotGLCanvas_override_virtual_showEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::showEvent(event);
}

bool QwtPlotGLCanvas_override_virtual_hideEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::hideEvent(event);
}

bool QwtPlotGLCanvas_override_virtual_nativeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = std::move(slot_handle);
	return true;
}

bool QwtPlotGLCanvas_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QwtPlotGLCanvas_override_virtual_changeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::changeEvent(param1);
}

bool QwtPlotGLCanvas_override_virtual_metric(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = std::move(slot_handle);
	return true;
}

int QwtPlotGLCanvas_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::metric(static_cast<MiqtVirtualQwtPlotGLCanvas::PaintDeviceMetric>(param1));
}

bool QwtPlotGLCanvas_override_virtual_initPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::initPainter(painter);
}

bool QwtPlotGLCanvas_override_virtual_redirected(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = std::move(slot_handle);
	return true;
}

QPaintDevice* QwtPlotGLCanvas_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::redirected(offset);
}

bool QwtPlotGLCanvas_override_virtual_sharedPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = std::move(slot_handle);
	return true;
}

QPainter* QwtPlotGLCanvas_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::sharedPainter();
}

bool QwtPlotGLCanvas_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::inputMethodEvent(param1);
}

bool QwtPlotGLCanvas_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	return true;
}

QVariant* QwtPlotGLCanvas_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QwtPlotGLCanvas_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = std::move(slot_handle);
	return true;
}

bool QwtPlotGLCanvas_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::focusNextPrevChild(next);
}

bool QwtPlotGLCanvas_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QwtPlotGLCanvas_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::eventFilter(watched, event);
}

bool QwtPlotGLCanvas_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::timerEvent(event);
}

bool QwtPlotGLCanvas_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::childEvent(event);
}

bool QwtPlotGLCanvas_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::customEvent(event);
}

bool QwtPlotGLCanvas_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::connectNotify(*signal);
}

bool QwtPlotGLCanvas_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotGLCanvas> slot_handle(slot);
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QwtPlotGLCanvas_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtPlotGLCanvas*>(self)->QwtPlotGLCanvas::disconnectNotify(*signal);
}

void QwtPlotGLCanvas_protectedbase_setAutoBufferSwap(bool* _dynamic_cast_ok, void* self, bool on) {
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setAutoBufferSwap(on);
}

bool QwtPlotGLCanvas_protectedbase_autoBufferSwap(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->autoBufferSwap();
}

void QwtPlotGLCanvas_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QwtPlotGLCanvas_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QwtPlotGLCanvas_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QwtPlotGLCanvas_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QwtPlotGLCanvas_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QwtPlotGLCanvas_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QwtPlotGLCanvas_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QwtPlotGLCanvas_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QwtPlotGLCanvas_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQwtPlotGLCanvas* self_cast = dynamic_cast<MiqtVirtualQwtPlotGLCanvas*>( (QwtPlotGLCanvas*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QwtPlotGLCanvas_delete(QwtPlotGLCanvas* self) {
	delete self;
}

