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
#include <QFocusFrame>
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
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOption>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qfocusframe.h>
#include "gen_qfocusframe.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QFocusFrame(intptr_t);
bool miqt_exec_callback_QFocusFrame_event(QFocusFrame*, intptr_t, QEvent*);
bool miqt_exec_callback_QFocusFrame_eventFilter(QFocusFrame*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QFocusFrame_paintEvent(QFocusFrame*, intptr_t, QPaintEvent*);
int miqt_exec_callback_QFocusFrame_devType(const QFocusFrame*, intptr_t);
void miqt_exec_callback_QFocusFrame_setVisible(QFocusFrame*, intptr_t, bool);
QSize* miqt_exec_callback_QFocusFrame_sizeHint(const QFocusFrame*, intptr_t);
QSize* miqt_exec_callback_QFocusFrame_minimumSizeHint(const QFocusFrame*, intptr_t);
int miqt_exec_callback_QFocusFrame_heightForWidth(const QFocusFrame*, intptr_t, int);
bool miqt_exec_callback_QFocusFrame_hasHeightForWidth(const QFocusFrame*, intptr_t);
QPaintEngine* miqt_exec_callback_QFocusFrame_paintEngine(const QFocusFrame*, intptr_t);
void miqt_exec_callback_QFocusFrame_mousePressEvent(QFocusFrame*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QFocusFrame_mouseReleaseEvent(QFocusFrame*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QFocusFrame_mouseDoubleClickEvent(QFocusFrame*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QFocusFrame_mouseMoveEvent(QFocusFrame*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QFocusFrame_wheelEvent(QFocusFrame*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QFocusFrame_keyPressEvent(QFocusFrame*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QFocusFrame_keyReleaseEvent(QFocusFrame*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QFocusFrame_focusInEvent(QFocusFrame*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QFocusFrame_focusOutEvent(QFocusFrame*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QFocusFrame_enterEvent(QFocusFrame*, intptr_t, QEvent*);
void miqt_exec_callback_QFocusFrame_leaveEvent(QFocusFrame*, intptr_t, QEvent*);
void miqt_exec_callback_QFocusFrame_moveEvent(QFocusFrame*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QFocusFrame_resizeEvent(QFocusFrame*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QFocusFrame_closeEvent(QFocusFrame*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QFocusFrame_contextMenuEvent(QFocusFrame*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QFocusFrame_tabletEvent(QFocusFrame*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QFocusFrame_actionEvent(QFocusFrame*, intptr_t, QActionEvent*);
void miqt_exec_callback_QFocusFrame_dragEnterEvent(QFocusFrame*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QFocusFrame_dragMoveEvent(QFocusFrame*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QFocusFrame_dragLeaveEvent(QFocusFrame*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QFocusFrame_dropEvent(QFocusFrame*, intptr_t, QDropEvent*);
void miqt_exec_callback_QFocusFrame_showEvent(QFocusFrame*, intptr_t, QShowEvent*);
void miqt_exec_callback_QFocusFrame_hideEvent(QFocusFrame*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QFocusFrame_nativeEvent(QFocusFrame*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QFocusFrame_changeEvent(QFocusFrame*, intptr_t, QEvent*);
int miqt_exec_callback_QFocusFrame_metric(const QFocusFrame*, intptr_t, int);
void miqt_exec_callback_QFocusFrame_initPainter(const QFocusFrame*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QFocusFrame_redirected(const QFocusFrame*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QFocusFrame_sharedPainter(const QFocusFrame*, intptr_t);
void miqt_exec_callback_QFocusFrame_inputMethodEvent(QFocusFrame*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QFocusFrame_inputMethodQuery(const QFocusFrame*, intptr_t, int);
bool miqt_exec_callback_QFocusFrame_focusNextPrevChild(QFocusFrame*, intptr_t, bool);
void miqt_exec_callback_QFocusFrame_timerEvent(QFocusFrame*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QFocusFrame_childEvent(QFocusFrame*, intptr_t, QChildEvent*);
void miqt_exec_callback_QFocusFrame_customEvent(QFocusFrame*, intptr_t, QEvent*);
void miqt_exec_callback_QFocusFrame_connectNotify(QFocusFrame*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QFocusFrame_disconnectNotify(QFocusFrame*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQFocusFrame final : public QFocusFrame {
public:

	MiqtVirtualQFocusFrame(QWidget* parent): QFocusFrame(parent) {}
	MiqtVirtualQFocusFrame(): QFocusFrame() {}

	virtual ~MiqtVirtualQFocusFrame() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (!handle__event) {
			return QFocusFrame::event(e);
		}

		QEvent* sigval1 = e;
		bool callback_return_value = miqt_exec_callback_QFocusFrame_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QFocusFrame_virtualbase_event(void* self, QEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (!handle__eventFilter) {
			return QFocusFrame::eventFilter(param1, param2);
		}

		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;
		bool callback_return_value = miqt_exec_callback_QFocusFrame_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QFocusFrame_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__paintEvent;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (!handle__paintEvent) {
			QFocusFrame::paintEvent(param1);
			return;
		}

		QPaintEvent* sigval1 = param1;
		miqt_exec_callback_QFocusFrame_paintEvent(this, handle__paintEvent.value(), sigval1);

	}

	friend void QFocusFrame_virtualbase_paintEvent(void* self, QPaintEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__devType;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (!handle__devType) {
			return QFocusFrame::devType();
		}

		int callback_return_value = miqt_exec_callback_QFocusFrame_devType(this, handle__devType.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QFocusFrame_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__setVisible;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (!handle__setVisible) {
			QFocusFrame::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QFocusFrame_setVisible(this, handle__setVisible.value(), sigval1);

	}

	friend void QFocusFrame_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__sizeHint;
	bool owns_return__sizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (!handle__sizeHint) {
			return QFocusFrame::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QFocusFrame_sizeHint(this, handle__sizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__sizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QFocusFrame_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__minimumSizeHint;
	bool owns_return__minimumSizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (!handle__minimumSizeHint) {
			return QFocusFrame::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QFocusFrame_minimumSizeHint(this, handle__minimumSizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__minimumSizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QFocusFrame_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__heightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (!handle__heightForWidth) {
			return QFocusFrame::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QFocusFrame_heightForWidth(this, handle__heightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QFocusFrame_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__hasHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (!handle__hasHeightForWidth) {
			return QFocusFrame::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QFocusFrame_hasHeightForWidth(this, handle__hasHeightForWidth.value());
		return callback_return_value;
	}

	friend bool QFocusFrame_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__paintEngine;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (!handle__paintEngine) {
			return QFocusFrame::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QFocusFrame_paintEngine(this, handle__paintEngine.value());
		return callback_return_value;
	}

	friend QPaintEngine* QFocusFrame_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__mousePressEvent;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (!handle__mousePressEvent) {
			QFocusFrame::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QFocusFrame_mousePressEvent(this, handle__mousePressEvent.value(), sigval1);

	}

	friend void QFocusFrame_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__mouseReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (!handle__mouseReleaseEvent) {
			QFocusFrame::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QFocusFrame_mouseReleaseEvent(this, handle__mouseReleaseEvent.value(), sigval1);

	}

	friend void QFocusFrame_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__mouseDoubleClickEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (!handle__mouseDoubleClickEvent) {
			QFocusFrame::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QFocusFrame_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent.value(), sigval1);

	}

	friend void QFocusFrame_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__mouseMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (!handle__mouseMoveEvent) {
			QFocusFrame::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QFocusFrame_mouseMoveEvent(this, handle__mouseMoveEvent.value(), sigval1);

	}

	friend void QFocusFrame_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__wheelEvent;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (!handle__wheelEvent) {
			QFocusFrame::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QFocusFrame_wheelEvent(this, handle__wheelEvent.value(), sigval1);

	}

	friend void QFocusFrame_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__keyPressEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (!handle__keyPressEvent) {
			QFocusFrame::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QFocusFrame_keyPressEvent(this, handle__keyPressEvent.value(), sigval1);

	}

	friend void QFocusFrame_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__keyReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (!handle__keyReleaseEvent) {
			QFocusFrame::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QFocusFrame_keyReleaseEvent(this, handle__keyReleaseEvent.value(), sigval1);

	}

	friend void QFocusFrame_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__focusInEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (!handle__focusInEvent) {
			QFocusFrame::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QFocusFrame_focusInEvent(this, handle__focusInEvent.value(), sigval1);

	}

	friend void QFocusFrame_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__focusOutEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (!handle__focusOutEvent) {
			QFocusFrame::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QFocusFrame_focusOutEvent(this, handle__focusOutEvent.value(), sigval1);

	}

	friend void QFocusFrame_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__enterEvent;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (!handle__enterEvent) {
			QFocusFrame::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QFocusFrame_enterEvent(this, handle__enterEvent.value(), sigval1);

	}

	friend void QFocusFrame_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__leaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (!handle__leaveEvent) {
			QFocusFrame::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QFocusFrame_leaveEvent(this, handle__leaveEvent.value(), sigval1);

	}

	friend void QFocusFrame_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__moveEvent;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (!handle__moveEvent) {
			QFocusFrame::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QFocusFrame_moveEvent(this, handle__moveEvent.value(), sigval1);

	}

	friend void QFocusFrame_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__resizeEvent;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (!handle__resizeEvent) {
			QFocusFrame::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QFocusFrame_resizeEvent(this, handle__resizeEvent.value(), sigval1);

	}

	friend void QFocusFrame_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__closeEvent;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (!handle__closeEvent) {
			QFocusFrame::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QFocusFrame_closeEvent(this, handle__closeEvent.value(), sigval1);

	}

	friend void QFocusFrame_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__contextMenuEvent;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (!handle__contextMenuEvent) {
			QFocusFrame::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QFocusFrame_contextMenuEvent(this, handle__contextMenuEvent.value(), sigval1);

	}

	friend void QFocusFrame_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__tabletEvent;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (!handle__tabletEvent) {
			QFocusFrame::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QFocusFrame_tabletEvent(this, handle__tabletEvent.value(), sigval1);

	}

	friend void QFocusFrame_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__actionEvent;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (!handle__actionEvent) {
			QFocusFrame::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QFocusFrame_actionEvent(this, handle__actionEvent.value(), sigval1);

	}

	friend void QFocusFrame_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__dragEnterEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (!handle__dragEnterEvent) {
			QFocusFrame::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QFocusFrame_dragEnterEvent(this, handle__dragEnterEvent.value(), sigval1);

	}

	friend void QFocusFrame_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__dragMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (!handle__dragMoveEvent) {
			QFocusFrame::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QFocusFrame_dragMoveEvent(this, handle__dragMoveEvent.value(), sigval1);

	}

	friend void QFocusFrame_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__dragLeaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (!handle__dragLeaveEvent) {
			QFocusFrame::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QFocusFrame_dragLeaveEvent(this, handle__dragLeaveEvent.value(), sigval1);

	}

	friend void QFocusFrame_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__dropEvent;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (!handle__dropEvent) {
			QFocusFrame::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QFocusFrame_dropEvent(this, handle__dropEvent.value(), sigval1);

	}

	friend void QFocusFrame_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__showEvent;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (!handle__showEvent) {
			QFocusFrame::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QFocusFrame_showEvent(this, handle__showEvent.value(), sigval1);

	}

	friend void QFocusFrame_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__hideEvent;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (!handle__hideEvent) {
			QFocusFrame::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QFocusFrame_hideEvent(this, handle__hideEvent.value(), sigval1);

	}

	friend void QFocusFrame_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__nativeEvent;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (!handle__nativeEvent) {
			return QFocusFrame::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QFocusFrame_nativeEvent(this, handle__nativeEvent.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QFocusFrame_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__changeEvent;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (!handle__changeEvent) {
			QFocusFrame::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QFocusFrame_changeEvent(this, handle__changeEvent.value(), sigval1);

	}

	friend void QFocusFrame_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__metric;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (!handle__metric) {
			return QFocusFrame::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QFocusFrame_metric(this, handle__metric.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QFocusFrame_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__initPainter;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (!handle__initPainter) {
			QFocusFrame::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QFocusFrame_initPainter(this, handle__initPainter.value(), sigval1);

	}

	friend void QFocusFrame_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__redirected;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (!handle__redirected) {
			return QFocusFrame::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QFocusFrame_redirected(this, handle__redirected.value(), sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QFocusFrame_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__sharedPainter;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (!handle__sharedPainter) {
			return QFocusFrame::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QFocusFrame_sharedPainter(this, handle__sharedPainter.value());
		return callback_return_value;
	}

	friend QPainter* QFocusFrame_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__inputMethodEvent;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (!handle__inputMethodEvent) {
			QFocusFrame::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QFocusFrame_inputMethodEvent(this, handle__inputMethodEvent.value(), sigval1);

	}

	friend void QFocusFrame_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__inputMethodQuery;
	bool owns_return__inputMethodQuery = false;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (!handle__inputMethodQuery) {
			return QFocusFrame::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QFocusFrame_inputMethodQuery(this, handle__inputMethodQuery.value(), sigval1);
		std::unique_ptr<QVariant> callback_return_value_owner;
		if (owns_return__inputMethodQuery) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QVariant* QFocusFrame_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__focusNextPrevChild;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (!handle__focusNextPrevChild) {
			return QFocusFrame::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QFocusFrame_focusNextPrevChild(this, handle__focusNextPrevChild.value(), sigval1);
		return callback_return_value;
	}

	friend bool QFocusFrame_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QFocusFrame::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QFocusFrame_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QFocusFrame_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QFocusFrame::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QFocusFrame_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QFocusFrame_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QFocusFrame::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QFocusFrame_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QFocusFrame_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QFocusFrame::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QFocusFrame_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QFocusFrame_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QFocusFrame::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QFocusFrame_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QFocusFrame_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QFocusFrame_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOption* option);
	friend void QFocusFrame_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QFocusFrame_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QFocusFrame_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QFocusFrame_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QFocusFrame_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QFocusFrame_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QFocusFrame_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QFocusFrame_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QFocusFrame_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QFocusFrame* QFocusFrame_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQFocusFrame(parent);
}

QFocusFrame* QFocusFrame_new2() {
	return new (std::nothrow) MiqtVirtualQFocusFrame();
}

void QFocusFrame_virtbase(QFocusFrame* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QFocusFrame_metaObject(const QFocusFrame* self) {
	return (QMetaObject*) self->metaObject();
}

void* QFocusFrame_metacast(QFocusFrame* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QFocusFrame_tr(const char* s) {
	QString _ret = QFocusFrame::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFocusFrame_trUtf8(const char* s) {
	QString _ret = QFocusFrame::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFocusFrame_setWidget(QFocusFrame* self, QWidget* widget) {
	self->setWidget(widget);
}

QWidget* QFocusFrame_widget(const QFocusFrame* self) {
	return self->widget();
}

struct miqt_string QFocusFrame_tr2(const char* s, const char* c) {
	QString _ret = QFocusFrame::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFocusFrame_tr3(const char* s, const char* c, int n) {
	QString _ret = QFocusFrame::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFocusFrame_trUtf82(const char* s, const char* c) {
	QString _ret = QFocusFrame::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFocusFrame_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QFocusFrame::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QFocusFrame_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QFocusFrame_virtualbase_event(void* self, QEvent* e) {
	return static_cast<MiqtVirtualQFocusFrame*>(self)->QFocusFrame::event(e);
}

bool QFocusFrame_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QFocusFrame_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {
	return static_cast<MiqtVirtualQFocusFrame*>(self)->QFocusFrame::eventFilter(param1, param2);
}

bool QFocusFrame_override_virtual_paintEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = std::move(slot_handle);
	return true;
}

void QFocusFrame_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	static_cast<MiqtVirtualQFocusFrame*>(self)->QFocusFrame::paintEvent(param1);
}

bool QFocusFrame_override_virtual_devType(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = std::move(slot_handle);
	return true;
}

int QFocusFrame_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQFocusFrame*>(self)->QFocusFrame::devType();
}

bool QFocusFrame_override_virtual_setVisible(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = std::move(slot_handle);
	return true;
}

void QFocusFrame_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQFocusFrame*>(self)->QFocusFrame::setVisible(visible);
}

bool QFocusFrame_override_virtual_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = false;
	return true;
}

bool QFocusFrame_override_virtual_owned_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = true;
	return true;
}

QSize* QFocusFrame_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQFocusFrame*>(self)->QFocusFrame::sizeHint());
}

bool QFocusFrame_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	self_cast->owns_return__minimumSizeHint = false;
	return true;
}

bool QFocusFrame_override_virtual_owned_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	self_cast->owns_return__minimumSizeHint = true;
	return true;
}

QSize* QFocusFrame_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQFocusFrame*>(self)->QFocusFrame::minimumSizeHint());
}

bool QFocusFrame_override_virtual_heightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = std::move(slot_handle);
	return true;
}

int QFocusFrame_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQFocusFrame*>(self)->QFocusFrame::heightForWidth(static_cast<int>(param1));
}

bool QFocusFrame_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = std::move(slot_handle);
	return true;
}

bool QFocusFrame_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQFocusFrame*>(self)->QFocusFrame::hasHeightForWidth();
}

bool QFocusFrame_override_virtual_paintEngine(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = std::move(slot_handle);
	return true;
}

QPaintEngine* QFocusFrame_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQFocusFrame*>(self)->QFocusFrame::paintEngine();
}

bool QFocusFrame_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = std::move(slot_handle);
	return true;
}

void QFocusFrame_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQFocusFrame*>(self)->QFocusFrame::mousePressEvent(event);
}

bool QFocusFrame_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = std::move(slot_handle);
	return true;
}

void QFocusFrame_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQFocusFrame*>(self)->QFocusFrame::mouseReleaseEvent(event);
}

bool QFocusFrame_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = std::move(slot_handle);
	return true;
}

void QFocusFrame_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQFocusFrame*>(self)->QFocusFrame::mouseDoubleClickEvent(event);
}

bool QFocusFrame_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = std::move(slot_handle);
	return true;
}

void QFocusFrame_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQFocusFrame*>(self)->QFocusFrame::mouseMoveEvent(event);
}

bool QFocusFrame_override_virtual_wheelEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = std::move(slot_handle);
	return true;
}

void QFocusFrame_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQFocusFrame*>(self)->QFocusFrame::wheelEvent(event);
}

bool QFocusFrame_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = std::move(slot_handle);
	return true;
}

void QFocusFrame_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQFocusFrame*>(self)->QFocusFrame::keyPressEvent(event);
}

bool QFocusFrame_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = std::move(slot_handle);
	return true;
}

void QFocusFrame_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQFocusFrame*>(self)->QFocusFrame::keyReleaseEvent(event);
}

bool QFocusFrame_override_virtual_focusInEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = std::move(slot_handle);
	return true;
}

void QFocusFrame_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQFocusFrame*>(self)->QFocusFrame::focusInEvent(event);
}

bool QFocusFrame_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = std::move(slot_handle);
	return true;
}

void QFocusFrame_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQFocusFrame*>(self)->QFocusFrame::focusOutEvent(event);
}

bool QFocusFrame_override_virtual_enterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = std::move(slot_handle);
	return true;
}

void QFocusFrame_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQFocusFrame*>(self)->QFocusFrame::enterEvent(event);
}

bool QFocusFrame_override_virtual_leaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = std::move(slot_handle);
	return true;
}

void QFocusFrame_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQFocusFrame*>(self)->QFocusFrame::leaveEvent(event);
}

bool QFocusFrame_override_virtual_moveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = std::move(slot_handle);
	return true;
}

void QFocusFrame_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQFocusFrame*>(self)->QFocusFrame::moveEvent(event);
}

bool QFocusFrame_override_virtual_resizeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = std::move(slot_handle);
	return true;
}

void QFocusFrame_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQFocusFrame*>(self)->QFocusFrame::resizeEvent(event);
}

bool QFocusFrame_override_virtual_closeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = std::move(slot_handle);
	return true;
}

void QFocusFrame_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQFocusFrame*>(self)->QFocusFrame::closeEvent(event);
}

bool QFocusFrame_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = std::move(slot_handle);
	return true;
}

void QFocusFrame_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQFocusFrame*>(self)->QFocusFrame::contextMenuEvent(event);
}

bool QFocusFrame_override_virtual_tabletEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = std::move(slot_handle);
	return true;
}

void QFocusFrame_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQFocusFrame*>(self)->QFocusFrame::tabletEvent(event);
}

bool QFocusFrame_override_virtual_actionEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = std::move(slot_handle);
	return true;
}

void QFocusFrame_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQFocusFrame*>(self)->QFocusFrame::actionEvent(event);
}

bool QFocusFrame_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = std::move(slot_handle);
	return true;
}

void QFocusFrame_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQFocusFrame*>(self)->QFocusFrame::dragEnterEvent(event);
}

bool QFocusFrame_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = std::move(slot_handle);
	return true;
}

void QFocusFrame_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQFocusFrame*>(self)->QFocusFrame::dragMoveEvent(event);
}

bool QFocusFrame_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = std::move(slot_handle);
	return true;
}

void QFocusFrame_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQFocusFrame*>(self)->QFocusFrame::dragLeaveEvent(event);
}

bool QFocusFrame_override_virtual_dropEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = std::move(slot_handle);
	return true;
}

void QFocusFrame_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQFocusFrame*>(self)->QFocusFrame::dropEvent(event);
}

bool QFocusFrame_override_virtual_showEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = std::move(slot_handle);
	return true;
}

void QFocusFrame_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQFocusFrame*>(self)->QFocusFrame::showEvent(event);
}

bool QFocusFrame_override_virtual_hideEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = std::move(slot_handle);
	return true;
}

void QFocusFrame_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQFocusFrame*>(self)->QFocusFrame::hideEvent(event);
}

bool QFocusFrame_override_virtual_nativeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = std::move(slot_handle);
	return true;
}

bool QFocusFrame_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQFocusFrame*>(self)->QFocusFrame::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QFocusFrame_override_virtual_changeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = std::move(slot_handle);
	return true;
}

void QFocusFrame_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQFocusFrame*>(self)->QFocusFrame::changeEvent(param1);
}

bool QFocusFrame_override_virtual_metric(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = std::move(slot_handle);
	return true;
}

int QFocusFrame_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQFocusFrame*>(self)->QFocusFrame::metric(static_cast<MiqtVirtualQFocusFrame::PaintDeviceMetric>(param1));
}

bool QFocusFrame_override_virtual_initPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = std::move(slot_handle);
	return true;
}

void QFocusFrame_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQFocusFrame*>(self)->QFocusFrame::initPainter(painter);
}

bool QFocusFrame_override_virtual_redirected(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = std::move(slot_handle);
	return true;
}

QPaintDevice* QFocusFrame_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQFocusFrame*>(self)->QFocusFrame::redirected(offset);
}

bool QFocusFrame_override_virtual_sharedPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = std::move(slot_handle);
	return true;
}

QPainter* QFocusFrame_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQFocusFrame*>(self)->QFocusFrame::sharedPainter();
}

bool QFocusFrame_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = std::move(slot_handle);
	return true;
}

void QFocusFrame_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQFocusFrame*>(self)->QFocusFrame::inputMethodEvent(param1);
}

bool QFocusFrame_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	self_cast->owns_return__inputMethodQuery = false;
	return true;
}

bool QFocusFrame_override_virtual_owned_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	self_cast->owns_return__inputMethodQuery = true;
	return true;
}

QVariant* QFocusFrame_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQFocusFrame*>(self)->QFocusFrame::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QFocusFrame_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = std::move(slot_handle);
	return true;
}

bool QFocusFrame_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQFocusFrame*>(self)->QFocusFrame::focusNextPrevChild(next);
}

bool QFocusFrame_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QFocusFrame_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQFocusFrame*>(self)->QFocusFrame::timerEvent(event);
}

bool QFocusFrame_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QFocusFrame_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQFocusFrame*>(self)->QFocusFrame::childEvent(event);
}

bool QFocusFrame_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QFocusFrame_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQFocusFrame*>(self)->QFocusFrame::customEvent(event);
}

bool QFocusFrame_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QFocusFrame_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQFocusFrame*>(self)->QFocusFrame::connectNotify(*signal);
}

bool QFocusFrame_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFocusFrame> slot_handle(slot);
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QFocusFrame_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQFocusFrame*>(self)->QFocusFrame::disconnectNotify(*signal);
}

void QFocusFrame_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOption* option) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->initStyleOption(option);
}

void QFocusFrame_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QFocusFrame_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QFocusFrame_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QFocusFrame_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QFocusFrame_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QFocusFrame_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QFocusFrame_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QFocusFrame_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QFocusFrame_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQFocusFrame* self_cast = dynamic_cast<MiqtVirtualQFocusFrame*>( (QFocusFrame*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QFocusFrame_delete(QFocusFrame* self) {
	delete self;
}

