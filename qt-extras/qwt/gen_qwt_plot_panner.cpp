#include <memory>
#include <utility>
#include <QActionEvent>
#include <QBitmap>
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
#include <QPixmap>
#include <QPoint>
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
#include <qwt_plot_panner.h>
#include "gen_qwt_plot_panner.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QwtPlotPanner(intptr_t);
void miqt_exec_callback_QwtPlotPanner_moveCanvas(QwtPlotPanner*, intptr_t, int, int);
QBitmap* miqt_exec_callback_QwtPlotPanner_contentsMask(const QwtPlotPanner*, intptr_t);
QPixmap* miqt_exec_callback_QwtPlotPanner_grab(const QwtPlotPanner*, intptr_t);
bool miqt_exec_callback_QwtPlotPanner_eventFilter(QwtPlotPanner*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QwtPlotPanner_widgetMousePressEvent(QwtPlotPanner*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtPlotPanner_widgetMouseReleaseEvent(QwtPlotPanner*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtPlotPanner_widgetMouseMoveEvent(QwtPlotPanner*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtPlotPanner_widgetKeyPressEvent(QwtPlotPanner*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtPlotPanner_widgetKeyReleaseEvent(QwtPlotPanner*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtPlotPanner_paintEvent(QwtPlotPanner*, intptr_t, QPaintEvent*);
int miqt_exec_callback_QwtPlotPanner_devType(const QwtPlotPanner*, intptr_t);
void miqt_exec_callback_QwtPlotPanner_setVisible(QwtPlotPanner*, intptr_t, bool);
QSize* miqt_exec_callback_QwtPlotPanner_sizeHint(const QwtPlotPanner*, intptr_t);
QSize* miqt_exec_callback_QwtPlotPanner_minimumSizeHint(const QwtPlotPanner*, intptr_t);
int miqt_exec_callback_QwtPlotPanner_heightForWidth(const QwtPlotPanner*, intptr_t, int);
bool miqt_exec_callback_QwtPlotPanner_hasHeightForWidth(const QwtPlotPanner*, intptr_t);
QPaintEngine* miqt_exec_callback_QwtPlotPanner_paintEngine(const QwtPlotPanner*, intptr_t);
bool miqt_exec_callback_QwtPlotPanner_event(QwtPlotPanner*, intptr_t, QEvent*);
void miqt_exec_callback_QwtPlotPanner_mousePressEvent(QwtPlotPanner*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtPlotPanner_mouseReleaseEvent(QwtPlotPanner*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtPlotPanner_mouseDoubleClickEvent(QwtPlotPanner*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtPlotPanner_mouseMoveEvent(QwtPlotPanner*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtPlotPanner_wheelEvent(QwtPlotPanner*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QwtPlotPanner_keyPressEvent(QwtPlotPanner*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtPlotPanner_keyReleaseEvent(QwtPlotPanner*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtPlotPanner_focusInEvent(QwtPlotPanner*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QwtPlotPanner_focusOutEvent(QwtPlotPanner*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QwtPlotPanner_enterEvent(QwtPlotPanner*, intptr_t, QEvent*);
void miqt_exec_callback_QwtPlotPanner_leaveEvent(QwtPlotPanner*, intptr_t, QEvent*);
void miqt_exec_callback_QwtPlotPanner_moveEvent(QwtPlotPanner*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QwtPlotPanner_resizeEvent(QwtPlotPanner*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QwtPlotPanner_closeEvent(QwtPlotPanner*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QwtPlotPanner_contextMenuEvent(QwtPlotPanner*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QwtPlotPanner_tabletEvent(QwtPlotPanner*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QwtPlotPanner_actionEvent(QwtPlotPanner*, intptr_t, QActionEvent*);
void miqt_exec_callback_QwtPlotPanner_dragEnterEvent(QwtPlotPanner*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QwtPlotPanner_dragMoveEvent(QwtPlotPanner*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QwtPlotPanner_dragLeaveEvent(QwtPlotPanner*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QwtPlotPanner_dropEvent(QwtPlotPanner*, intptr_t, QDropEvent*);
void miqt_exec_callback_QwtPlotPanner_showEvent(QwtPlotPanner*, intptr_t, QShowEvent*);
void miqt_exec_callback_QwtPlotPanner_hideEvent(QwtPlotPanner*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QwtPlotPanner_nativeEvent(QwtPlotPanner*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QwtPlotPanner_changeEvent(QwtPlotPanner*, intptr_t, QEvent*);
int miqt_exec_callback_QwtPlotPanner_metric(const QwtPlotPanner*, intptr_t, int);
void miqt_exec_callback_QwtPlotPanner_initPainter(const QwtPlotPanner*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QwtPlotPanner_redirected(const QwtPlotPanner*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QwtPlotPanner_sharedPainter(const QwtPlotPanner*, intptr_t);
void miqt_exec_callback_QwtPlotPanner_inputMethodEvent(QwtPlotPanner*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QwtPlotPanner_inputMethodQuery(const QwtPlotPanner*, intptr_t, int);
bool miqt_exec_callback_QwtPlotPanner_focusNextPrevChild(QwtPlotPanner*, intptr_t, bool);
void miqt_exec_callback_QwtPlotPanner_timerEvent(QwtPlotPanner*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QwtPlotPanner_childEvent(QwtPlotPanner*, intptr_t, QChildEvent*);
void miqt_exec_callback_QwtPlotPanner_customEvent(QwtPlotPanner*, intptr_t, QEvent*);
void miqt_exec_callback_QwtPlotPanner_connectNotify(QwtPlotPanner*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QwtPlotPanner_disconnectNotify(QwtPlotPanner*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtPlotPanner final : public QwtPlotPanner {
public:

	MiqtVirtualQwtPlotPanner(QWidget* param1): QwtPlotPanner(param1) {}

	virtual ~MiqtVirtualQwtPlotPanner() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__moveCanvas;

	// Subclass to allow providing a Go implementation
	virtual void moveCanvas(int dx, int dy) override {
		if (!handle__moveCanvas) {
			QwtPlotPanner::moveCanvas(dx, dy);
			return;
		}

		int sigval1 = dx;
		int sigval2 = dy;
		miqt_exec_callback_QwtPlotPanner_moveCanvas(this, handle__moveCanvas.value(), sigval1, sigval2);

	}

	friend void QwtPlotPanner_virtualbase_moveCanvas(void* self, int dx, int dy);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__contentsMask;

	// Subclass to allow providing a Go implementation
	virtual QBitmap contentsMask() const override {
		if (!handle__contentsMask) {
			return QwtPlotPanner::contentsMask();
		}

		QBitmap* callback_return_value = miqt_exec_callback_QwtPlotPanner_contentsMask(this, handle__contentsMask.value());
		return *callback_return_value;
	}

	friend QBitmap* QwtPlotPanner_virtualbase_contentsMask(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__grab;

	// Subclass to allow providing a Go implementation
	virtual QPixmap grab() const override {
		if (!handle__grab) {
			return QwtPlotPanner::grab();
		}

		QPixmap* callback_return_value = miqt_exec_callback_QwtPlotPanner_grab(this, handle__grab.value());
		return *callback_return_value;
	}

	friend QPixmap* QwtPlotPanner_virtualbase_grab(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (!handle__eventFilter) {
			return QwtPlotPanner::eventFilter(param1, param2);
		}

		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;
		bool callback_return_value = miqt_exec_callback_QwtPlotPanner_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QwtPlotPanner_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__widgetMousePressEvent;

	// Subclass to allow providing a Go implementation
	virtual void widgetMousePressEvent(QMouseEvent* param1) override {
		if (!handle__widgetMousePressEvent) {
			QwtPlotPanner::widgetMousePressEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlotPanner_widgetMousePressEvent(this, handle__widgetMousePressEvent.value(), sigval1);

	}

	friend void QwtPlotPanner_virtualbase_widgetMousePressEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__widgetMouseReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void widgetMouseReleaseEvent(QMouseEvent* param1) override {
		if (!handle__widgetMouseReleaseEvent) {
			QwtPlotPanner::widgetMouseReleaseEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlotPanner_widgetMouseReleaseEvent(this, handle__widgetMouseReleaseEvent.value(), sigval1);

	}

	friend void QwtPlotPanner_virtualbase_widgetMouseReleaseEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__widgetMouseMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void widgetMouseMoveEvent(QMouseEvent* param1) override {
		if (!handle__widgetMouseMoveEvent) {
			QwtPlotPanner::widgetMouseMoveEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlotPanner_widgetMouseMoveEvent(this, handle__widgetMouseMoveEvent.value(), sigval1);

	}

	friend void QwtPlotPanner_virtualbase_widgetMouseMoveEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__widgetKeyPressEvent;

	// Subclass to allow providing a Go implementation
	virtual void widgetKeyPressEvent(QKeyEvent* param1) override {
		if (!handle__widgetKeyPressEvent) {
			QwtPlotPanner::widgetKeyPressEvent(param1);
			return;
		}

		QKeyEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlotPanner_widgetKeyPressEvent(this, handle__widgetKeyPressEvent.value(), sigval1);

	}

	friend void QwtPlotPanner_virtualbase_widgetKeyPressEvent(void* self, QKeyEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__widgetKeyReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void widgetKeyReleaseEvent(QKeyEvent* param1) override {
		if (!handle__widgetKeyReleaseEvent) {
			QwtPlotPanner::widgetKeyReleaseEvent(param1);
			return;
		}

		QKeyEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlotPanner_widgetKeyReleaseEvent(this, handle__widgetKeyReleaseEvent.value(), sigval1);

	}

	friend void QwtPlotPanner_virtualbase_widgetKeyReleaseEvent(void* self, QKeyEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__paintEvent;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (!handle__paintEvent) {
			QwtPlotPanner::paintEvent(param1);
			return;
		}

		QPaintEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlotPanner_paintEvent(this, handle__paintEvent.value(), sigval1);

	}

	friend void QwtPlotPanner_virtualbase_paintEvent(void* self, QPaintEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__devType;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (!handle__devType) {
			return QwtPlotPanner::devType();
		}

		int callback_return_value = miqt_exec_callback_QwtPlotPanner_devType(this, handle__devType.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QwtPlotPanner_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__setVisible;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (!handle__setVisible) {
			QwtPlotPanner::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QwtPlotPanner_setVisible(this, handle__setVisible.value(), sigval1);

	}

	friend void QwtPlotPanner_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__sizeHint;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (!handle__sizeHint) {
			return QwtPlotPanner::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtPlotPanner_sizeHint(this, handle__sizeHint.value());
		return *callback_return_value;
	}

	friend QSize* QwtPlotPanner_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__minimumSizeHint;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (!handle__minimumSizeHint) {
			return QwtPlotPanner::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtPlotPanner_minimumSizeHint(this, handle__minimumSizeHint.value());
		return *callback_return_value;
	}

	friend QSize* QwtPlotPanner_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__heightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (!handle__heightForWidth) {
			return QwtPlotPanner::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QwtPlotPanner_heightForWidth(this, handle__heightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtPlotPanner_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__hasHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (!handle__hasHeightForWidth) {
			return QwtPlotPanner::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QwtPlotPanner_hasHeightForWidth(this, handle__hasHeightForWidth.value());
		return callback_return_value;
	}

	friend bool QwtPlotPanner_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__paintEngine;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (!handle__paintEngine) {
			return QwtPlotPanner::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QwtPlotPanner_paintEngine(this, handle__paintEngine.value());
		return callback_return_value;
	}

	friend QPaintEngine* QwtPlotPanner_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QwtPlotPanner::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QwtPlotPanner_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QwtPlotPanner_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__mousePressEvent;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (!handle__mousePressEvent) {
			QwtPlotPanner::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotPanner_mousePressEvent(this, handle__mousePressEvent.value(), sigval1);

	}

	friend void QwtPlotPanner_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__mouseReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (!handle__mouseReleaseEvent) {
			QwtPlotPanner::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotPanner_mouseReleaseEvent(this, handle__mouseReleaseEvent.value(), sigval1);

	}

	friend void QwtPlotPanner_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__mouseDoubleClickEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (!handle__mouseDoubleClickEvent) {
			QwtPlotPanner::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotPanner_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent.value(), sigval1);

	}

	friend void QwtPlotPanner_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__mouseMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (!handle__mouseMoveEvent) {
			QwtPlotPanner::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotPanner_mouseMoveEvent(this, handle__mouseMoveEvent.value(), sigval1);

	}

	friend void QwtPlotPanner_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__wheelEvent;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (!handle__wheelEvent) {
			QwtPlotPanner::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotPanner_wheelEvent(this, handle__wheelEvent.value(), sigval1);

	}

	friend void QwtPlotPanner_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__keyPressEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (!handle__keyPressEvent) {
			QwtPlotPanner::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotPanner_keyPressEvent(this, handle__keyPressEvent.value(), sigval1);

	}

	friend void QwtPlotPanner_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__keyReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (!handle__keyReleaseEvent) {
			QwtPlotPanner::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotPanner_keyReleaseEvent(this, handle__keyReleaseEvent.value(), sigval1);

	}

	friend void QwtPlotPanner_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__focusInEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (!handle__focusInEvent) {
			QwtPlotPanner::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotPanner_focusInEvent(this, handle__focusInEvent.value(), sigval1);

	}

	friend void QwtPlotPanner_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__focusOutEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (!handle__focusOutEvent) {
			QwtPlotPanner::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotPanner_focusOutEvent(this, handle__focusOutEvent.value(), sigval1);

	}

	friend void QwtPlotPanner_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__enterEvent;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (!handle__enterEvent) {
			QwtPlotPanner::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotPanner_enterEvent(this, handle__enterEvent.value(), sigval1);

	}

	friend void QwtPlotPanner_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__leaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (!handle__leaveEvent) {
			QwtPlotPanner::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotPanner_leaveEvent(this, handle__leaveEvent.value(), sigval1);

	}

	friend void QwtPlotPanner_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__moveEvent;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (!handle__moveEvent) {
			QwtPlotPanner::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotPanner_moveEvent(this, handle__moveEvent.value(), sigval1);

	}

	friend void QwtPlotPanner_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__resizeEvent;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (!handle__resizeEvent) {
			QwtPlotPanner::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotPanner_resizeEvent(this, handle__resizeEvent.value(), sigval1);

	}

	friend void QwtPlotPanner_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__closeEvent;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (!handle__closeEvent) {
			QwtPlotPanner::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotPanner_closeEvent(this, handle__closeEvent.value(), sigval1);

	}

	friend void QwtPlotPanner_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__contextMenuEvent;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (!handle__contextMenuEvent) {
			QwtPlotPanner::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotPanner_contextMenuEvent(this, handle__contextMenuEvent.value(), sigval1);

	}

	friend void QwtPlotPanner_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__tabletEvent;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (!handle__tabletEvent) {
			QwtPlotPanner::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotPanner_tabletEvent(this, handle__tabletEvent.value(), sigval1);

	}

	friend void QwtPlotPanner_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__actionEvent;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (!handle__actionEvent) {
			QwtPlotPanner::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotPanner_actionEvent(this, handle__actionEvent.value(), sigval1);

	}

	friend void QwtPlotPanner_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__dragEnterEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (!handle__dragEnterEvent) {
			QwtPlotPanner::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotPanner_dragEnterEvent(this, handle__dragEnterEvent.value(), sigval1);

	}

	friend void QwtPlotPanner_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__dragMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (!handle__dragMoveEvent) {
			QwtPlotPanner::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotPanner_dragMoveEvent(this, handle__dragMoveEvent.value(), sigval1);

	}

	friend void QwtPlotPanner_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__dragLeaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (!handle__dragLeaveEvent) {
			QwtPlotPanner::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotPanner_dragLeaveEvent(this, handle__dragLeaveEvent.value(), sigval1);

	}

	friend void QwtPlotPanner_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__dropEvent;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (!handle__dropEvent) {
			QwtPlotPanner::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotPanner_dropEvent(this, handle__dropEvent.value(), sigval1);

	}

	friend void QwtPlotPanner_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__showEvent;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (!handle__showEvent) {
			QwtPlotPanner::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotPanner_showEvent(this, handle__showEvent.value(), sigval1);

	}

	friend void QwtPlotPanner_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__hideEvent;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (!handle__hideEvent) {
			QwtPlotPanner::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotPanner_hideEvent(this, handle__hideEvent.value(), sigval1);

	}

	friend void QwtPlotPanner_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__nativeEvent;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (!handle__nativeEvent) {
			return QwtPlotPanner::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QwtPlotPanner_nativeEvent(this, handle__nativeEvent.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QwtPlotPanner_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__changeEvent;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (!handle__changeEvent) {
			QwtPlotPanner::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlotPanner_changeEvent(this, handle__changeEvent.value(), sigval1);

	}

	friend void QwtPlotPanner_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__metric;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (!handle__metric) {
			return QwtPlotPanner::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QwtPlotPanner_metric(this, handle__metric.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtPlotPanner_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__initPainter;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (!handle__initPainter) {
			QwtPlotPanner::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QwtPlotPanner_initPainter(this, handle__initPainter.value(), sigval1);

	}

	friend void QwtPlotPanner_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__redirected;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (!handle__redirected) {
			return QwtPlotPanner::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QwtPlotPanner_redirected(this, handle__redirected.value(), sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QwtPlotPanner_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__sharedPainter;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (!handle__sharedPainter) {
			return QwtPlotPanner::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QwtPlotPanner_sharedPainter(this, handle__sharedPainter.value());
		return callback_return_value;
	}

	friend QPainter* QwtPlotPanner_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__inputMethodEvent;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (!handle__inputMethodEvent) {
			QwtPlotPanner::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlotPanner_inputMethodEvent(this, handle__inputMethodEvent.value(), sigval1);

	}

	friend void QwtPlotPanner_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__inputMethodQuery;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (!handle__inputMethodQuery) {
			return QwtPlotPanner::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QwtPlotPanner_inputMethodQuery(this, handle__inputMethodQuery.value(), sigval1);
		return *callback_return_value;
	}

	friend QVariant* QwtPlotPanner_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__focusNextPrevChild;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (!handle__focusNextPrevChild) {
			return QwtPlotPanner::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QwtPlotPanner_focusNextPrevChild(this, handle__focusNextPrevChild.value(), sigval1);
		return callback_return_value;
	}

	friend bool QwtPlotPanner_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QwtPlotPanner::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotPanner_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QwtPlotPanner_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QwtPlotPanner::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotPanner_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QwtPlotPanner_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QwtPlotPanner::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotPanner_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QwtPlotPanner_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QwtPlotPanner::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtPlotPanner_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QwtPlotPanner_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QwtPlotPanner::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtPlotPanner_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QwtPlotPanner_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QwtPlotPanner_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QwtPlotPanner_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QwtPlotPanner_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QwtPlotPanner_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QwtPlotPanner_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QwtPlotPanner_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QwtPlotPanner_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QwtPlotPanner_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QwtPlotPanner_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QwtPlotPanner* QwtPlotPanner_new(QWidget* param1) {
	return new (std::nothrow) MiqtVirtualQwtPlotPanner(param1);
}

void QwtPlotPanner_virtbase(QwtPlotPanner* src, QwtPanner** outptr_QwtPanner) {
	*outptr_QwtPanner = static_cast<QwtPanner*>(src);
}

QMetaObject* QwtPlotPanner_metaObject(const QwtPlotPanner* self) {
	return (QMetaObject*) self->metaObject();
}

void* QwtPlotPanner_metacast(QwtPlotPanner* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QwtPlotPanner_tr(const char* s) {
	QString _ret = QwtPlotPanner::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtPlotPanner_trUtf8(const char* s) {
	QString _ret = QwtPlotPanner::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QWidget* QwtPlotPanner_canvas(QwtPlotPanner* self) {
	return self->canvas();
}

QWidget* QwtPlotPanner_canvas2(const QwtPlotPanner* self) {
	return (QWidget*) self->canvas();
}

QwtPlot* QwtPlotPanner_plot(QwtPlotPanner* self) {
	return self->plot();
}

QwtPlot* QwtPlotPanner_plot2(const QwtPlotPanner* self) {
	return (QwtPlot*) self->plot();
}

void QwtPlotPanner_setAxisEnabled(QwtPlotPanner* self, int axis, bool on) {
	self->setAxisEnabled(static_cast<int>(axis), on);
}

bool QwtPlotPanner_isAxisEnabled(const QwtPlotPanner* self, int axis) {
	return self->isAxisEnabled(static_cast<int>(axis));
}

struct miqt_string QwtPlotPanner_tr2(const char* s, const char* c) {
	QString _ret = QwtPlotPanner::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtPlotPanner_tr3(const char* s, const char* c, int n) {
	QString _ret = QwtPlotPanner::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtPlotPanner_trUtf82(const char* s, const char* c) {
	QString _ret = QwtPlotPanner::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtPlotPanner_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QwtPlotPanner::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QwtPlotPanner_override_virtual_moveCanvas(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveCanvas = std::move(slot_handle);
	return true;
}

void QwtPlotPanner_virtualbase_moveCanvas(void* self, int dx, int dy) {
	static_cast<MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::moveCanvas(static_cast<int>(dx), static_cast<int>(dy));
}

bool QwtPlotPanner_override_virtual_contentsMask(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contentsMask = std::move(slot_handle);
	return true;
}

QBitmap* QwtPlotPanner_virtualbase_contentsMask(const void* self) {
	return new QBitmap(static_cast<const MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::contentsMask());
}

bool QwtPlotPanner_override_virtual_grab(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__grab = std::move(slot_handle);
	return true;
}

QPixmap* QwtPlotPanner_virtualbase_grab(const void* self) {
	return new QPixmap(static_cast<const MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::grab());
}

bool QwtPlotPanner_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QwtPlotPanner_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {
	return static_cast<MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::eventFilter(param1, param2);
}

bool QwtPlotPanner_override_virtual_widgetMousePressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetMousePressEvent = std::move(slot_handle);
	return true;
}

void QwtPlotPanner_virtualbase_widgetMousePressEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::widgetMousePressEvent(param1);
}

bool QwtPlotPanner_override_virtual_widgetMouseReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetMouseReleaseEvent = std::move(slot_handle);
	return true;
}

void QwtPlotPanner_virtualbase_widgetMouseReleaseEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::widgetMouseReleaseEvent(param1);
}

bool QwtPlotPanner_override_virtual_widgetMouseMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetMouseMoveEvent = std::move(slot_handle);
	return true;
}

void QwtPlotPanner_virtualbase_widgetMouseMoveEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::widgetMouseMoveEvent(param1);
}

bool QwtPlotPanner_override_virtual_widgetKeyPressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetKeyPressEvent = std::move(slot_handle);
	return true;
}

void QwtPlotPanner_virtualbase_widgetKeyPressEvent(void* self, QKeyEvent* param1) {
	static_cast<MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::widgetKeyPressEvent(param1);
}

bool QwtPlotPanner_override_virtual_widgetKeyReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetKeyReleaseEvent = std::move(slot_handle);
	return true;
}

void QwtPlotPanner_virtualbase_widgetKeyReleaseEvent(void* self, QKeyEvent* param1) {
	static_cast<MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::widgetKeyReleaseEvent(param1);
}

bool QwtPlotPanner_override_virtual_paintEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = std::move(slot_handle);
	return true;
}

void QwtPlotPanner_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	static_cast<MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::paintEvent(param1);
}

bool QwtPlotPanner_override_virtual_devType(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = std::move(slot_handle);
	return true;
}

int QwtPlotPanner_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::devType();
}

bool QwtPlotPanner_override_virtual_setVisible(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = std::move(slot_handle);
	return true;
}

void QwtPlotPanner_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::setVisible(visible);
}

bool QwtPlotPanner_override_virtual_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	return true;
}

QSize* QwtPlotPanner_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::sizeHint());
}

bool QwtPlotPanner_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	return true;
}

QSize* QwtPlotPanner_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::minimumSizeHint());
}

bool QwtPlotPanner_override_virtual_heightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = std::move(slot_handle);
	return true;
}

int QwtPlotPanner_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::heightForWidth(static_cast<int>(param1));
}

bool QwtPlotPanner_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = std::move(slot_handle);
	return true;
}

bool QwtPlotPanner_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::hasHeightForWidth();
}

bool QwtPlotPanner_override_virtual_paintEngine(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = std::move(slot_handle);
	return true;
}

QPaintEngine* QwtPlotPanner_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::paintEngine();
}

bool QwtPlotPanner_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QwtPlotPanner_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::event(event);
}

bool QwtPlotPanner_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = std::move(slot_handle);
	return true;
}

void QwtPlotPanner_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::mousePressEvent(event);
}

bool QwtPlotPanner_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = std::move(slot_handle);
	return true;
}

void QwtPlotPanner_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::mouseReleaseEvent(event);
}

bool QwtPlotPanner_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = std::move(slot_handle);
	return true;
}

void QwtPlotPanner_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::mouseDoubleClickEvent(event);
}

bool QwtPlotPanner_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = std::move(slot_handle);
	return true;
}

void QwtPlotPanner_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::mouseMoveEvent(event);
}

bool QwtPlotPanner_override_virtual_wheelEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = std::move(slot_handle);
	return true;
}

void QwtPlotPanner_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::wheelEvent(event);
}

bool QwtPlotPanner_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = std::move(slot_handle);
	return true;
}

void QwtPlotPanner_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::keyPressEvent(event);
}

bool QwtPlotPanner_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = std::move(slot_handle);
	return true;
}

void QwtPlotPanner_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::keyReleaseEvent(event);
}

bool QwtPlotPanner_override_virtual_focusInEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = std::move(slot_handle);
	return true;
}

void QwtPlotPanner_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::focusInEvent(event);
}

bool QwtPlotPanner_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = std::move(slot_handle);
	return true;
}

void QwtPlotPanner_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::focusOutEvent(event);
}

bool QwtPlotPanner_override_virtual_enterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = std::move(slot_handle);
	return true;
}

void QwtPlotPanner_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::enterEvent(event);
}

bool QwtPlotPanner_override_virtual_leaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = std::move(slot_handle);
	return true;
}

void QwtPlotPanner_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::leaveEvent(event);
}

bool QwtPlotPanner_override_virtual_moveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = std::move(slot_handle);
	return true;
}

void QwtPlotPanner_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::moveEvent(event);
}

bool QwtPlotPanner_override_virtual_resizeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = std::move(slot_handle);
	return true;
}

void QwtPlotPanner_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::resizeEvent(event);
}

bool QwtPlotPanner_override_virtual_closeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = std::move(slot_handle);
	return true;
}

void QwtPlotPanner_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::closeEvent(event);
}

bool QwtPlotPanner_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = std::move(slot_handle);
	return true;
}

void QwtPlotPanner_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::contextMenuEvent(event);
}

bool QwtPlotPanner_override_virtual_tabletEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = std::move(slot_handle);
	return true;
}

void QwtPlotPanner_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::tabletEvent(event);
}

bool QwtPlotPanner_override_virtual_actionEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = std::move(slot_handle);
	return true;
}

void QwtPlotPanner_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::actionEvent(event);
}

bool QwtPlotPanner_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = std::move(slot_handle);
	return true;
}

void QwtPlotPanner_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::dragEnterEvent(event);
}

bool QwtPlotPanner_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = std::move(slot_handle);
	return true;
}

void QwtPlotPanner_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::dragMoveEvent(event);
}

bool QwtPlotPanner_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = std::move(slot_handle);
	return true;
}

void QwtPlotPanner_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::dragLeaveEvent(event);
}

bool QwtPlotPanner_override_virtual_dropEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = std::move(slot_handle);
	return true;
}

void QwtPlotPanner_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::dropEvent(event);
}

bool QwtPlotPanner_override_virtual_showEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = std::move(slot_handle);
	return true;
}

void QwtPlotPanner_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::showEvent(event);
}

bool QwtPlotPanner_override_virtual_hideEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = std::move(slot_handle);
	return true;
}

void QwtPlotPanner_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::hideEvent(event);
}

bool QwtPlotPanner_override_virtual_nativeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = std::move(slot_handle);
	return true;
}

bool QwtPlotPanner_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QwtPlotPanner_override_virtual_changeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = std::move(slot_handle);
	return true;
}

void QwtPlotPanner_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::changeEvent(param1);
}

bool QwtPlotPanner_override_virtual_metric(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = std::move(slot_handle);
	return true;
}

int QwtPlotPanner_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::metric(static_cast<MiqtVirtualQwtPlotPanner::PaintDeviceMetric>(param1));
}

bool QwtPlotPanner_override_virtual_initPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = std::move(slot_handle);
	return true;
}

void QwtPlotPanner_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::initPainter(painter);
}

bool QwtPlotPanner_override_virtual_redirected(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = std::move(slot_handle);
	return true;
}

QPaintDevice* QwtPlotPanner_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::redirected(offset);
}

bool QwtPlotPanner_override_virtual_sharedPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = std::move(slot_handle);
	return true;
}

QPainter* QwtPlotPanner_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::sharedPainter();
}

bool QwtPlotPanner_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = std::move(slot_handle);
	return true;
}

void QwtPlotPanner_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::inputMethodEvent(param1);
}

bool QwtPlotPanner_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	return true;
}

QVariant* QwtPlotPanner_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QwtPlotPanner_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = std::move(slot_handle);
	return true;
}

bool QwtPlotPanner_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::focusNextPrevChild(next);
}

bool QwtPlotPanner_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QwtPlotPanner_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::timerEvent(event);
}

bool QwtPlotPanner_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QwtPlotPanner_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::childEvent(event);
}

bool QwtPlotPanner_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QwtPlotPanner_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::customEvent(event);
}

bool QwtPlotPanner_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QwtPlotPanner_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::connectNotify(*signal);
}

bool QwtPlotPanner_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotPanner> slot_handle(slot);
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QwtPlotPanner_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtPlotPanner*>(self)->QwtPlotPanner::disconnectNotify(*signal);
}

void QwtPlotPanner_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QwtPlotPanner_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QwtPlotPanner_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QwtPlotPanner_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QwtPlotPanner_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QwtPlotPanner_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QwtPlotPanner_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QwtPlotPanner_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QwtPlotPanner_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQwtPlotPanner* self_cast = dynamic_cast<MiqtVirtualQwtPlotPanner*>( (QwtPlotPanner*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QwtPlotPanner_delete(QwtPlotPanner* self) {
	delete self;
}

