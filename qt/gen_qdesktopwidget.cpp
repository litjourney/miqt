#include <memory>
#include <utility>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDesktopWidget>
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
#include <qdesktopwidget.h>
#include "gen_qdesktopwidget.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QDesktopWidget(intptr_t);
void miqt_exec_callback_QDesktopWidget_resized(intptr_t, int);
void miqt_exec_callback_QDesktopWidget_workAreaResized(intptr_t, int);
void miqt_exec_callback_QDesktopWidget_screenCountChanged(intptr_t, int);
void miqt_exec_callback_QDesktopWidget_primaryScreenChanged(intptr_t);
void miqt_exec_callback_QDesktopWidget_resizeEvent(QDesktopWidget*, intptr_t, QResizeEvent*);
int miqt_exec_callback_QDesktopWidget_devType(const QDesktopWidget*, intptr_t);
void miqt_exec_callback_QDesktopWidget_setVisible(QDesktopWidget*, intptr_t, bool);
QSize* miqt_exec_callback_QDesktopWidget_sizeHint(const QDesktopWidget*, intptr_t);
QSize* miqt_exec_callback_QDesktopWidget_minimumSizeHint(const QDesktopWidget*, intptr_t);
int miqt_exec_callback_QDesktopWidget_heightForWidth(const QDesktopWidget*, intptr_t, int);
bool miqt_exec_callback_QDesktopWidget_hasHeightForWidth(const QDesktopWidget*, intptr_t);
QPaintEngine* miqt_exec_callback_QDesktopWidget_paintEngine(const QDesktopWidget*, intptr_t);
bool miqt_exec_callback_QDesktopWidget_event(QDesktopWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QDesktopWidget_mousePressEvent(QDesktopWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDesktopWidget_mouseReleaseEvent(QDesktopWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDesktopWidget_mouseDoubleClickEvent(QDesktopWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDesktopWidget_mouseMoveEvent(QDesktopWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDesktopWidget_wheelEvent(QDesktopWidget*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QDesktopWidget_keyPressEvent(QDesktopWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QDesktopWidget_keyReleaseEvent(QDesktopWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QDesktopWidget_focusInEvent(QDesktopWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QDesktopWidget_focusOutEvent(QDesktopWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QDesktopWidget_enterEvent(QDesktopWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QDesktopWidget_leaveEvent(QDesktopWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QDesktopWidget_paintEvent(QDesktopWidget*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QDesktopWidget_moveEvent(QDesktopWidget*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QDesktopWidget_closeEvent(QDesktopWidget*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QDesktopWidget_contextMenuEvent(QDesktopWidget*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QDesktopWidget_tabletEvent(QDesktopWidget*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QDesktopWidget_actionEvent(QDesktopWidget*, intptr_t, QActionEvent*);
void miqt_exec_callback_QDesktopWidget_dragEnterEvent(QDesktopWidget*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QDesktopWidget_dragMoveEvent(QDesktopWidget*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QDesktopWidget_dragLeaveEvent(QDesktopWidget*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QDesktopWidget_dropEvent(QDesktopWidget*, intptr_t, QDropEvent*);
void miqt_exec_callback_QDesktopWidget_showEvent(QDesktopWidget*, intptr_t, QShowEvent*);
void miqt_exec_callback_QDesktopWidget_hideEvent(QDesktopWidget*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QDesktopWidget_nativeEvent(QDesktopWidget*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QDesktopWidget_changeEvent(QDesktopWidget*, intptr_t, QEvent*);
int miqt_exec_callback_QDesktopWidget_metric(const QDesktopWidget*, intptr_t, int);
void miqt_exec_callback_QDesktopWidget_initPainter(const QDesktopWidget*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QDesktopWidget_redirected(const QDesktopWidget*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QDesktopWidget_sharedPainter(const QDesktopWidget*, intptr_t);
void miqt_exec_callback_QDesktopWidget_inputMethodEvent(QDesktopWidget*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QDesktopWidget_inputMethodQuery(const QDesktopWidget*, intptr_t, int);
bool miqt_exec_callback_QDesktopWidget_focusNextPrevChild(QDesktopWidget*, intptr_t, bool);
bool miqt_exec_callback_QDesktopWidget_eventFilter(QDesktopWidget*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QDesktopWidget_timerEvent(QDesktopWidget*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QDesktopWidget_childEvent(QDesktopWidget*, intptr_t, QChildEvent*);
void miqt_exec_callback_QDesktopWidget_customEvent(QDesktopWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QDesktopWidget_connectNotify(QDesktopWidget*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDesktopWidget_disconnectNotify(QDesktopWidget*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQDesktopWidget final : public QDesktopWidget {
public:

	MiqtVirtualQDesktopWidget(): QDesktopWidget() {}

	virtual ~MiqtVirtualQDesktopWidget() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__resizeEvent;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* e) override {
		if (!handle__resizeEvent) {
			QDesktopWidget::resizeEvent(e);
			return;
		}

		QResizeEvent* sigval1 = e;
		miqt_exec_callback_QDesktopWidget_resizeEvent(this, handle__resizeEvent.value(), sigval1);

	}

	friend void QDesktopWidget_virtualbase_resizeEvent(void* self, QResizeEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__devType;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (!handle__devType) {
			return QDesktopWidget::devType();
		}

		int callback_return_value = miqt_exec_callback_QDesktopWidget_devType(this, handle__devType.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QDesktopWidget_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__setVisible;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (!handle__setVisible) {
			QDesktopWidget::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QDesktopWidget_setVisible(this, handle__setVisible.value(), sigval1);

	}

	friend void QDesktopWidget_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__sizeHint;
	bool owns_return__sizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (!handle__sizeHint) {
			return QDesktopWidget::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QDesktopWidget_sizeHint(this, handle__sizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__sizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QDesktopWidget_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__minimumSizeHint;
	bool owns_return__minimumSizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (!handle__minimumSizeHint) {
			return QDesktopWidget::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QDesktopWidget_minimumSizeHint(this, handle__minimumSizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__minimumSizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QDesktopWidget_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__heightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (!handle__heightForWidth) {
			return QDesktopWidget::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QDesktopWidget_heightForWidth(this, handle__heightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QDesktopWidget_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__hasHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (!handle__hasHeightForWidth) {
			return QDesktopWidget::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QDesktopWidget_hasHeightForWidth(this, handle__hasHeightForWidth.value());
		return callback_return_value;
	}

	friend bool QDesktopWidget_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__paintEngine;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (!handle__paintEngine) {
			return QDesktopWidget::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QDesktopWidget_paintEngine(this, handle__paintEngine.value());
		return callback_return_value;
	}

	friend QPaintEngine* QDesktopWidget_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QDesktopWidget::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QDesktopWidget_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QDesktopWidget_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__mousePressEvent;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (!handle__mousePressEvent) {
			QDesktopWidget::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QDesktopWidget_mousePressEvent(this, handle__mousePressEvent.value(), sigval1);

	}

	friend void QDesktopWidget_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__mouseReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (!handle__mouseReleaseEvent) {
			QDesktopWidget::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QDesktopWidget_mouseReleaseEvent(this, handle__mouseReleaseEvent.value(), sigval1);

	}

	friend void QDesktopWidget_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__mouseDoubleClickEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (!handle__mouseDoubleClickEvent) {
			QDesktopWidget::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QDesktopWidget_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent.value(), sigval1);

	}

	friend void QDesktopWidget_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__mouseMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (!handle__mouseMoveEvent) {
			QDesktopWidget::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QDesktopWidget_mouseMoveEvent(this, handle__mouseMoveEvent.value(), sigval1);

	}

	friend void QDesktopWidget_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__wheelEvent;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (!handle__wheelEvent) {
			QDesktopWidget::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QDesktopWidget_wheelEvent(this, handle__wheelEvent.value(), sigval1);

	}

	friend void QDesktopWidget_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__keyPressEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (!handle__keyPressEvent) {
			QDesktopWidget::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QDesktopWidget_keyPressEvent(this, handle__keyPressEvent.value(), sigval1);

	}

	friend void QDesktopWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__keyReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (!handle__keyReleaseEvent) {
			QDesktopWidget::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QDesktopWidget_keyReleaseEvent(this, handle__keyReleaseEvent.value(), sigval1);

	}

	friend void QDesktopWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__focusInEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (!handle__focusInEvent) {
			QDesktopWidget::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QDesktopWidget_focusInEvent(this, handle__focusInEvent.value(), sigval1);

	}

	friend void QDesktopWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__focusOutEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (!handle__focusOutEvent) {
			QDesktopWidget::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QDesktopWidget_focusOutEvent(this, handle__focusOutEvent.value(), sigval1);

	}

	friend void QDesktopWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__enterEvent;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (!handle__enterEvent) {
			QDesktopWidget::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QDesktopWidget_enterEvent(this, handle__enterEvent.value(), sigval1);

	}

	friend void QDesktopWidget_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__leaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (!handle__leaveEvent) {
			QDesktopWidget::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QDesktopWidget_leaveEvent(this, handle__leaveEvent.value(), sigval1);

	}

	friend void QDesktopWidget_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__paintEvent;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (!handle__paintEvent) {
			QDesktopWidget::paintEvent(event);
			return;
		}

		QPaintEvent* sigval1 = event;
		miqt_exec_callback_QDesktopWidget_paintEvent(this, handle__paintEvent.value(), sigval1);

	}

	friend void QDesktopWidget_virtualbase_paintEvent(void* self, QPaintEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__moveEvent;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (!handle__moveEvent) {
			QDesktopWidget::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QDesktopWidget_moveEvent(this, handle__moveEvent.value(), sigval1);

	}

	friend void QDesktopWidget_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__closeEvent;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (!handle__closeEvent) {
			QDesktopWidget::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QDesktopWidget_closeEvent(this, handle__closeEvent.value(), sigval1);

	}

	friend void QDesktopWidget_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__contextMenuEvent;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (!handle__contextMenuEvent) {
			QDesktopWidget::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QDesktopWidget_contextMenuEvent(this, handle__contextMenuEvent.value(), sigval1);

	}

	friend void QDesktopWidget_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__tabletEvent;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (!handle__tabletEvent) {
			QDesktopWidget::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QDesktopWidget_tabletEvent(this, handle__tabletEvent.value(), sigval1);

	}

	friend void QDesktopWidget_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__actionEvent;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (!handle__actionEvent) {
			QDesktopWidget::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QDesktopWidget_actionEvent(this, handle__actionEvent.value(), sigval1);

	}

	friend void QDesktopWidget_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__dragEnterEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (!handle__dragEnterEvent) {
			QDesktopWidget::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QDesktopWidget_dragEnterEvent(this, handle__dragEnterEvent.value(), sigval1);

	}

	friend void QDesktopWidget_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__dragMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (!handle__dragMoveEvent) {
			QDesktopWidget::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QDesktopWidget_dragMoveEvent(this, handle__dragMoveEvent.value(), sigval1);

	}

	friend void QDesktopWidget_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__dragLeaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (!handle__dragLeaveEvent) {
			QDesktopWidget::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QDesktopWidget_dragLeaveEvent(this, handle__dragLeaveEvent.value(), sigval1);

	}

	friend void QDesktopWidget_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__dropEvent;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (!handle__dropEvent) {
			QDesktopWidget::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QDesktopWidget_dropEvent(this, handle__dropEvent.value(), sigval1);

	}

	friend void QDesktopWidget_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__showEvent;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (!handle__showEvent) {
			QDesktopWidget::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QDesktopWidget_showEvent(this, handle__showEvent.value(), sigval1);

	}

	friend void QDesktopWidget_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__hideEvent;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (!handle__hideEvent) {
			QDesktopWidget::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QDesktopWidget_hideEvent(this, handle__hideEvent.value(), sigval1);

	}

	friend void QDesktopWidget_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__nativeEvent;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (!handle__nativeEvent) {
			return QDesktopWidget::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QDesktopWidget_nativeEvent(this, handle__nativeEvent.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QDesktopWidget_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__changeEvent;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (!handle__changeEvent) {
			QDesktopWidget::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QDesktopWidget_changeEvent(this, handle__changeEvent.value(), sigval1);

	}

	friend void QDesktopWidget_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__metric;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (!handle__metric) {
			return QDesktopWidget::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QDesktopWidget_metric(this, handle__metric.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QDesktopWidget_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__initPainter;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (!handle__initPainter) {
			QDesktopWidget::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QDesktopWidget_initPainter(this, handle__initPainter.value(), sigval1);

	}

	friend void QDesktopWidget_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__redirected;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (!handle__redirected) {
			return QDesktopWidget::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QDesktopWidget_redirected(this, handle__redirected.value(), sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QDesktopWidget_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__sharedPainter;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (!handle__sharedPainter) {
			return QDesktopWidget::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QDesktopWidget_sharedPainter(this, handle__sharedPainter.value());
		return callback_return_value;
	}

	friend QPainter* QDesktopWidget_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__inputMethodEvent;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (!handle__inputMethodEvent) {
			QDesktopWidget::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QDesktopWidget_inputMethodEvent(this, handle__inputMethodEvent.value(), sigval1);

	}

	friend void QDesktopWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__inputMethodQuery;
	bool owns_return__inputMethodQuery = false;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (!handle__inputMethodQuery) {
			return QDesktopWidget::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QDesktopWidget_inputMethodQuery(this, handle__inputMethodQuery.value(), sigval1);
		std::unique_ptr<QVariant> callback_return_value_owner;
		if (owns_return__inputMethodQuery) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QVariant* QDesktopWidget_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__focusNextPrevChild;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (!handle__focusNextPrevChild) {
			return QDesktopWidget::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QDesktopWidget_focusNextPrevChild(this, handle__focusNextPrevChild.value(), sigval1);
		return callback_return_value;
	}

	friend bool QDesktopWidget_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QDesktopWidget::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QDesktopWidget_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QDesktopWidget_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QDesktopWidget::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QDesktopWidget_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QDesktopWidget_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QDesktopWidget::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QDesktopWidget_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QDesktopWidget_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QDesktopWidget::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QDesktopWidget_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QDesktopWidget_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QDesktopWidget::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QDesktopWidget_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QDesktopWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QDesktopWidget::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QDesktopWidget_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QDesktopWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QDesktopWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QDesktopWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QDesktopWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QDesktopWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QDesktopWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QDesktopWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QDesktopWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QDesktopWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QDesktopWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QDesktopWidget* QDesktopWidget_new() {
	return new (std::nothrow) MiqtVirtualQDesktopWidget();
}

void QDesktopWidget_virtbase(QDesktopWidget* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QDesktopWidget_metaObject(const QDesktopWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDesktopWidget_metacast(QDesktopWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDesktopWidget_tr(const char* s) {
	QString _ret = QDesktopWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesktopWidget_trUtf8(const char* s) {
	QString _ret = QDesktopWidget::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QDesktopWidget_screenNumber(const QDesktopWidget* self) {
	return self->screenNumber();
}

QRect* QDesktopWidget_screenGeometry(const QDesktopWidget* self, QWidget* widget) {
	return new QRect(self->screenGeometry(widget));
}

QRect* QDesktopWidget_availableGeometry(const QDesktopWidget* self, QWidget* widget) {
	return new QRect(self->availableGeometry(widget));
}

bool QDesktopWidget_isVirtualDesktop(const QDesktopWidget* self) {
	return self->isVirtualDesktop();
}

int QDesktopWidget_numScreens(const QDesktopWidget* self) {
	return self->numScreens();
}

int QDesktopWidget_screenCount(const QDesktopWidget* self) {
	return self->screenCount();
}

int QDesktopWidget_primaryScreen(const QDesktopWidget* self) {
	return self->primaryScreen();
}

int QDesktopWidget_screenNumberWithQPoint(const QDesktopWidget* self, QPoint* param1) {
	return self->screenNumber(*param1);
}

QWidget* QDesktopWidget_screen(QDesktopWidget* self) {
	return self->screen();
}

QRect* QDesktopWidget_screenGeometry2(const QDesktopWidget* self) {
	return new QRect(self->screenGeometry());
}

QRect* QDesktopWidget_screenGeometryWithPoint(const QDesktopWidget* self, QPoint* point) {
	return new QRect(self->screenGeometry(*point));
}

QRect* QDesktopWidget_availableGeometry2(const QDesktopWidget* self) {
	return new QRect(self->availableGeometry());
}

QRect* QDesktopWidget_availableGeometryWithPoint(const QDesktopWidget* self, QPoint* point) {
	return new QRect(self->availableGeometry(*point));
}

void QDesktopWidget_resized(QDesktopWidget* self, int param1) {
	self->resized(static_cast<int>(param1));
}

void* QDesktopWidget_connect_resized(QDesktopWidget* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget>>(slot);
	return new QMetaObject::Connection(QDesktopWidget::connect(self, static_cast<void (QDesktopWidget::*)(int)>(&QDesktopWidget::resized), self, [slot_handle](int param1) {
		intptr_t slot = slot_handle->value();
		int sigval1 = param1;
		miqt_exec_callback_QDesktopWidget_resized(slot, sigval1);
	}));
}

void QDesktopWidget_workAreaResized(QDesktopWidget* self, int param1) {
	self->workAreaResized(static_cast<int>(param1));
}

void* QDesktopWidget_connect_workAreaResized(QDesktopWidget* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget>>(slot);
	return new QMetaObject::Connection(QDesktopWidget::connect(self, static_cast<void (QDesktopWidget::*)(int)>(&QDesktopWidget::workAreaResized), self, [slot_handle](int param1) {
		intptr_t slot = slot_handle->value();
		int sigval1 = param1;
		miqt_exec_callback_QDesktopWidget_workAreaResized(slot, sigval1);
	}));
}

void QDesktopWidget_screenCountChanged(QDesktopWidget* self, int param1) {
	self->screenCountChanged(static_cast<int>(param1));
}

void* QDesktopWidget_connect_screenCountChanged(QDesktopWidget* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget>>(slot);
	return new QMetaObject::Connection(QDesktopWidget::connect(self, static_cast<void (QDesktopWidget::*)(int)>(&QDesktopWidget::screenCountChanged), self, [slot_handle](int param1) {
		intptr_t slot = slot_handle->value();
		int sigval1 = param1;
		miqt_exec_callback_QDesktopWidget_screenCountChanged(slot, sigval1);
	}));
}

void QDesktopWidget_primaryScreenChanged(QDesktopWidget* self) {
	self->primaryScreenChanged();
}

void* QDesktopWidget_connect_primaryScreenChanged(QDesktopWidget* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget>>(slot);
	return new QMetaObject::Connection(QDesktopWidget::connect(self, static_cast<void (QDesktopWidget::*)()>(&QDesktopWidget::primaryScreenChanged), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QDesktopWidget_primaryScreenChanged(slot);
	}));
}

struct miqt_string QDesktopWidget_tr2(const char* s, const char* c) {
	QString _ret = QDesktopWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesktopWidget_tr3(const char* s, const char* c, int n) {
	QString _ret = QDesktopWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesktopWidget_trUtf82(const char* s, const char* c) {
	QString _ret = QDesktopWidget::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesktopWidget_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QDesktopWidget::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QDesktopWidget_screenNumberWithWidget(const QDesktopWidget* self, QWidget* widget) {
	return self->screenNumber(widget);
}

QWidget* QDesktopWidget_screenWithScreen(QDesktopWidget* self, int screen) {
	return self->screen(static_cast<int>(screen));
}

QRect* QDesktopWidget_screenGeometryWithScreen(const QDesktopWidget* self, int screen) {
	return new QRect(self->screenGeometry(static_cast<int>(screen)));
}

QRect* QDesktopWidget_availableGeometryWithScreen(const QDesktopWidget* self, int screen) {
	return new QRect(self->availableGeometry(static_cast<int>(screen)));
}

bool QDesktopWidget_override_virtual_resizeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = std::move(slot_handle);
	return true;
}

void QDesktopWidget_virtualbase_resizeEvent(void* self, QResizeEvent* e) {
	static_cast<MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::resizeEvent(e);
}

bool QDesktopWidget_override_virtual_devType(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = std::move(slot_handle);
	return true;
}

int QDesktopWidget_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::devType();
}

bool QDesktopWidget_override_virtual_setVisible(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = std::move(slot_handle);
	return true;
}

void QDesktopWidget_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::setVisible(visible);
}

bool QDesktopWidget_override_virtual_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = false;
	return true;
}

bool QDesktopWidget_override_virtual_owned_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = true;
	return true;
}

QSize* QDesktopWidget_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::sizeHint());
}

bool QDesktopWidget_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	self_cast->owns_return__minimumSizeHint = false;
	return true;
}

bool QDesktopWidget_override_virtual_owned_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	self_cast->owns_return__minimumSizeHint = true;
	return true;
}

QSize* QDesktopWidget_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::minimumSizeHint());
}

bool QDesktopWidget_override_virtual_heightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = std::move(slot_handle);
	return true;
}

int QDesktopWidget_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::heightForWidth(static_cast<int>(param1));
}

bool QDesktopWidget_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = std::move(slot_handle);
	return true;
}

bool QDesktopWidget_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::hasHeightForWidth();
}

bool QDesktopWidget_override_virtual_paintEngine(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = std::move(slot_handle);
	return true;
}

QPaintEngine* QDesktopWidget_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::paintEngine();
}

bool QDesktopWidget_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QDesktopWidget_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::event(event);
}

bool QDesktopWidget_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = std::move(slot_handle);
	return true;
}

void QDesktopWidget_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::mousePressEvent(event);
}

bool QDesktopWidget_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = std::move(slot_handle);
	return true;
}

void QDesktopWidget_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::mouseReleaseEvent(event);
}

bool QDesktopWidget_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = std::move(slot_handle);
	return true;
}

void QDesktopWidget_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::mouseDoubleClickEvent(event);
}

bool QDesktopWidget_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = std::move(slot_handle);
	return true;
}

void QDesktopWidget_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::mouseMoveEvent(event);
}

bool QDesktopWidget_override_virtual_wheelEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = std::move(slot_handle);
	return true;
}

void QDesktopWidget_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::wheelEvent(event);
}

bool QDesktopWidget_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = std::move(slot_handle);
	return true;
}

void QDesktopWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::keyPressEvent(event);
}

bool QDesktopWidget_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = std::move(slot_handle);
	return true;
}

void QDesktopWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::keyReleaseEvent(event);
}

bool QDesktopWidget_override_virtual_focusInEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = std::move(slot_handle);
	return true;
}

void QDesktopWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::focusInEvent(event);
}

bool QDesktopWidget_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = std::move(slot_handle);
	return true;
}

void QDesktopWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::focusOutEvent(event);
}

bool QDesktopWidget_override_virtual_enterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = std::move(slot_handle);
	return true;
}

void QDesktopWidget_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::enterEvent(event);
}

bool QDesktopWidget_override_virtual_leaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = std::move(slot_handle);
	return true;
}

void QDesktopWidget_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::leaveEvent(event);
}

bool QDesktopWidget_override_virtual_paintEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = std::move(slot_handle);
	return true;
}

void QDesktopWidget_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	static_cast<MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::paintEvent(event);
}

bool QDesktopWidget_override_virtual_moveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = std::move(slot_handle);
	return true;
}

void QDesktopWidget_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::moveEvent(event);
}

bool QDesktopWidget_override_virtual_closeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = std::move(slot_handle);
	return true;
}

void QDesktopWidget_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::closeEvent(event);
}

bool QDesktopWidget_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = std::move(slot_handle);
	return true;
}

void QDesktopWidget_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::contextMenuEvent(event);
}

bool QDesktopWidget_override_virtual_tabletEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = std::move(slot_handle);
	return true;
}

void QDesktopWidget_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::tabletEvent(event);
}

bool QDesktopWidget_override_virtual_actionEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = std::move(slot_handle);
	return true;
}

void QDesktopWidget_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::actionEvent(event);
}

bool QDesktopWidget_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = std::move(slot_handle);
	return true;
}

void QDesktopWidget_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::dragEnterEvent(event);
}

bool QDesktopWidget_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = std::move(slot_handle);
	return true;
}

void QDesktopWidget_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::dragMoveEvent(event);
}

bool QDesktopWidget_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = std::move(slot_handle);
	return true;
}

void QDesktopWidget_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::dragLeaveEvent(event);
}

bool QDesktopWidget_override_virtual_dropEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = std::move(slot_handle);
	return true;
}

void QDesktopWidget_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::dropEvent(event);
}

bool QDesktopWidget_override_virtual_showEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = std::move(slot_handle);
	return true;
}

void QDesktopWidget_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::showEvent(event);
}

bool QDesktopWidget_override_virtual_hideEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = std::move(slot_handle);
	return true;
}

void QDesktopWidget_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::hideEvent(event);
}

bool QDesktopWidget_override_virtual_nativeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = std::move(slot_handle);
	return true;
}

bool QDesktopWidget_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QDesktopWidget_override_virtual_changeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = std::move(slot_handle);
	return true;
}

void QDesktopWidget_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::changeEvent(param1);
}

bool QDesktopWidget_override_virtual_metric(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = std::move(slot_handle);
	return true;
}

int QDesktopWidget_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::metric(static_cast<MiqtVirtualQDesktopWidget::PaintDeviceMetric>(param1));
}

bool QDesktopWidget_override_virtual_initPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = std::move(slot_handle);
	return true;
}

void QDesktopWidget_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::initPainter(painter);
}

bool QDesktopWidget_override_virtual_redirected(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = std::move(slot_handle);
	return true;
}

QPaintDevice* QDesktopWidget_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::redirected(offset);
}

bool QDesktopWidget_override_virtual_sharedPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = std::move(slot_handle);
	return true;
}

QPainter* QDesktopWidget_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::sharedPainter();
}

bool QDesktopWidget_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = std::move(slot_handle);
	return true;
}

void QDesktopWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::inputMethodEvent(param1);
}

bool QDesktopWidget_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	self_cast->owns_return__inputMethodQuery = false;
	return true;
}

bool QDesktopWidget_override_virtual_owned_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	self_cast->owns_return__inputMethodQuery = true;
	return true;
}

QVariant* QDesktopWidget_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QDesktopWidget_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = std::move(slot_handle);
	return true;
}

bool QDesktopWidget_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::focusNextPrevChild(next);
}

bool QDesktopWidget_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QDesktopWidget_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::eventFilter(watched, event);
}

bool QDesktopWidget_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QDesktopWidget_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::timerEvent(event);
}

bool QDesktopWidget_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QDesktopWidget_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::childEvent(event);
}

bool QDesktopWidget_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QDesktopWidget_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::customEvent(event);
}

bool QDesktopWidget_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QDesktopWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::connectNotify(*signal);
}

bool QDesktopWidget_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesktopWidget> slot_handle(slot);
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QDesktopWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQDesktopWidget*>(self)->QDesktopWidget::disconnectNotify(*signal);
}

void QDesktopWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QDesktopWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QDesktopWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QDesktopWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QDesktopWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QDesktopWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QDesktopWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QDesktopWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QDesktopWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQDesktopWidget* self_cast = dynamic_cast<MiqtVirtualQDesktopWidget*>( (QDesktopWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QDesktopWidget_delete(QDesktopWidget* self) {
	delete self;
}

