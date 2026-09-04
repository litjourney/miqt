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
#include <QHideEvent>
#include <QIcon>
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
#include <QStyleOptionTabWidgetFrame>
#include <QTabBar>
#include <QTabWidget>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qtabwidget.h>
#include "gen_qtabwidget.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QTabWidget(intptr_t);
void miqt_exec_callback_QTabWidget_currentChanged(intptr_t, int);
void miqt_exec_callback_QTabWidget_tabCloseRequested(intptr_t, int);
void miqt_exec_callback_QTabWidget_tabBarClicked(intptr_t, int);
void miqt_exec_callback_QTabWidget_tabBarDoubleClicked(intptr_t, int);
QSize* miqt_exec_callback_QTabWidget_sizeHint(const QTabWidget*, intptr_t);
QSize* miqt_exec_callback_QTabWidget_minimumSizeHint(const QTabWidget*, intptr_t);
int miqt_exec_callback_QTabWidget_heightForWidth(const QTabWidget*, intptr_t, int);
bool miqt_exec_callback_QTabWidget_hasHeightForWidth(const QTabWidget*, intptr_t);
void miqt_exec_callback_QTabWidget_tabInserted(QTabWidget*, intptr_t, int);
void miqt_exec_callback_QTabWidget_tabRemoved(QTabWidget*, intptr_t, int);
void miqt_exec_callback_QTabWidget_showEvent(QTabWidget*, intptr_t, QShowEvent*);
void miqt_exec_callback_QTabWidget_resizeEvent(QTabWidget*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QTabWidget_keyPressEvent(QTabWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QTabWidget_paintEvent(QTabWidget*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QTabWidget_changeEvent(QTabWidget*, intptr_t, QEvent*);
bool miqt_exec_callback_QTabWidget_event(QTabWidget*, intptr_t, QEvent*);
int miqt_exec_callback_QTabWidget_devType(const QTabWidget*, intptr_t);
void miqt_exec_callback_QTabWidget_setVisible(QTabWidget*, intptr_t, bool);
QPaintEngine* miqt_exec_callback_QTabWidget_paintEngine(const QTabWidget*, intptr_t);
void miqt_exec_callback_QTabWidget_mousePressEvent(QTabWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTabWidget_mouseReleaseEvent(QTabWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTabWidget_mouseDoubleClickEvent(QTabWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTabWidget_mouseMoveEvent(QTabWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTabWidget_wheelEvent(QTabWidget*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QTabWidget_keyReleaseEvent(QTabWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QTabWidget_focusInEvent(QTabWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QTabWidget_focusOutEvent(QTabWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QTabWidget_enterEvent(QTabWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QTabWidget_leaveEvent(QTabWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QTabWidget_moveEvent(QTabWidget*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QTabWidget_closeEvent(QTabWidget*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QTabWidget_contextMenuEvent(QTabWidget*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QTabWidget_tabletEvent(QTabWidget*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QTabWidget_actionEvent(QTabWidget*, intptr_t, QActionEvent*);
void miqt_exec_callback_QTabWidget_dragEnterEvent(QTabWidget*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QTabWidget_dragMoveEvent(QTabWidget*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QTabWidget_dragLeaveEvent(QTabWidget*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QTabWidget_dropEvent(QTabWidget*, intptr_t, QDropEvent*);
void miqt_exec_callback_QTabWidget_hideEvent(QTabWidget*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QTabWidget_nativeEvent(QTabWidget*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QTabWidget_metric(const QTabWidget*, intptr_t, int);
void miqt_exec_callback_QTabWidget_initPainter(const QTabWidget*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QTabWidget_redirected(const QTabWidget*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QTabWidget_sharedPainter(const QTabWidget*, intptr_t);
void miqt_exec_callback_QTabWidget_inputMethodEvent(QTabWidget*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QTabWidget_inputMethodQuery(const QTabWidget*, intptr_t, int);
bool miqt_exec_callback_QTabWidget_focusNextPrevChild(QTabWidget*, intptr_t, bool);
bool miqt_exec_callback_QTabWidget_eventFilter(QTabWidget*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QTabWidget_timerEvent(QTabWidget*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QTabWidget_childEvent(QTabWidget*, intptr_t, QChildEvent*);
void miqt_exec_callback_QTabWidget_customEvent(QTabWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QTabWidget_connectNotify(QTabWidget*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QTabWidget_disconnectNotify(QTabWidget*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQTabWidget final : public QTabWidget {
public:

	MiqtVirtualQTabWidget(QWidget* parent): QTabWidget(parent) {}
	MiqtVirtualQTabWidget(): QTabWidget() {}

	virtual ~MiqtVirtualQTabWidget() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__sizeHint;
	bool owns_return__sizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (!handle__sizeHint) {
			return QTabWidget::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QTabWidget_sizeHint(this, handle__sizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__sizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QTabWidget_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__minimumSizeHint;
	bool owns_return__minimumSizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (!handle__minimumSizeHint) {
			return QTabWidget::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QTabWidget_minimumSizeHint(this, handle__minimumSizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__minimumSizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QTabWidget_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__heightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int width) const override {
		if (!handle__heightForWidth) {
			return QTabWidget::heightForWidth(width);
		}

		int sigval1 = width;
		int callback_return_value = miqt_exec_callback_QTabWidget_heightForWidth(this, handle__heightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QTabWidget_virtualbase_heightForWidth(const void* self, int width);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__hasHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (!handle__hasHeightForWidth) {
			return QTabWidget::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QTabWidget_hasHeightForWidth(this, handle__hasHeightForWidth.value());
		return callback_return_value;
	}

	friend bool QTabWidget_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__tabInserted;

	// Subclass to allow providing a Go implementation
	virtual void tabInserted(int index) override {
		if (!handle__tabInserted) {
			QTabWidget::tabInserted(index);
			return;
		}

		int sigval1 = index;
		miqt_exec_callback_QTabWidget_tabInserted(this, handle__tabInserted.value(), sigval1);

	}

	friend void QTabWidget_virtualbase_tabInserted(void* self, int index);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__tabRemoved;

	// Subclass to allow providing a Go implementation
	virtual void tabRemoved(int index) override {
		if (!handle__tabRemoved) {
			QTabWidget::tabRemoved(index);
			return;
		}

		int sigval1 = index;
		miqt_exec_callback_QTabWidget_tabRemoved(this, handle__tabRemoved.value(), sigval1);

	}

	friend void QTabWidget_virtualbase_tabRemoved(void* self, int index);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__showEvent;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (!handle__showEvent) {
			QTabWidget::showEvent(param1);
			return;
		}

		QShowEvent* sigval1 = param1;
		miqt_exec_callback_QTabWidget_showEvent(this, handle__showEvent.value(), sigval1);

	}

	friend void QTabWidget_virtualbase_showEvent(void* self, QShowEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__resizeEvent;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (!handle__resizeEvent) {
			QTabWidget::resizeEvent(param1);
			return;
		}

		QResizeEvent* sigval1 = param1;
		miqt_exec_callback_QTabWidget_resizeEvent(this, handle__resizeEvent.value(), sigval1);

	}

	friend void QTabWidget_virtualbase_resizeEvent(void* self, QResizeEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__keyPressEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (!handle__keyPressEvent) {
			QTabWidget::keyPressEvent(param1);
			return;
		}

		QKeyEvent* sigval1 = param1;
		miqt_exec_callback_QTabWidget_keyPressEvent(this, handle__keyPressEvent.value(), sigval1);

	}

	friend void QTabWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__paintEvent;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (!handle__paintEvent) {
			QTabWidget::paintEvent(param1);
			return;
		}

		QPaintEvent* sigval1 = param1;
		miqt_exec_callback_QTabWidget_paintEvent(this, handle__paintEvent.value(), sigval1);

	}

	friend void QTabWidget_virtualbase_paintEvent(void* self, QPaintEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__changeEvent;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (!handle__changeEvent) {
			QTabWidget::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QTabWidget_changeEvent(this, handle__changeEvent.value(), sigval1);

	}

	friend void QTabWidget_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (!handle__event) {
			return QTabWidget::event(param1);
		}

		QEvent* sigval1 = param1;
		bool callback_return_value = miqt_exec_callback_QTabWidget_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QTabWidget_virtualbase_event(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__devType;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (!handle__devType) {
			return QTabWidget::devType();
		}

		int callback_return_value = miqt_exec_callback_QTabWidget_devType(this, handle__devType.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QTabWidget_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__setVisible;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (!handle__setVisible) {
			QTabWidget::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QTabWidget_setVisible(this, handle__setVisible.value(), sigval1);

	}

	friend void QTabWidget_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__paintEngine;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (!handle__paintEngine) {
			return QTabWidget::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QTabWidget_paintEngine(this, handle__paintEngine.value());
		return callback_return_value;
	}

	friend QPaintEngine* QTabWidget_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__mousePressEvent;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (!handle__mousePressEvent) {
			QTabWidget::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QTabWidget_mousePressEvent(this, handle__mousePressEvent.value(), sigval1);

	}

	friend void QTabWidget_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__mouseReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (!handle__mouseReleaseEvent) {
			QTabWidget::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QTabWidget_mouseReleaseEvent(this, handle__mouseReleaseEvent.value(), sigval1);

	}

	friend void QTabWidget_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__mouseDoubleClickEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (!handle__mouseDoubleClickEvent) {
			QTabWidget::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QTabWidget_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent.value(), sigval1);

	}

	friend void QTabWidget_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__mouseMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (!handle__mouseMoveEvent) {
			QTabWidget::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QTabWidget_mouseMoveEvent(this, handle__mouseMoveEvent.value(), sigval1);

	}

	friend void QTabWidget_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__wheelEvent;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (!handle__wheelEvent) {
			QTabWidget::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QTabWidget_wheelEvent(this, handle__wheelEvent.value(), sigval1);

	}

	friend void QTabWidget_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__keyReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (!handle__keyReleaseEvent) {
			QTabWidget::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QTabWidget_keyReleaseEvent(this, handle__keyReleaseEvent.value(), sigval1);

	}

	friend void QTabWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__focusInEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (!handle__focusInEvent) {
			QTabWidget::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QTabWidget_focusInEvent(this, handle__focusInEvent.value(), sigval1);

	}

	friend void QTabWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__focusOutEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (!handle__focusOutEvent) {
			QTabWidget::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QTabWidget_focusOutEvent(this, handle__focusOutEvent.value(), sigval1);

	}

	friend void QTabWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__enterEvent;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (!handle__enterEvent) {
			QTabWidget::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QTabWidget_enterEvent(this, handle__enterEvent.value(), sigval1);

	}

	friend void QTabWidget_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__leaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (!handle__leaveEvent) {
			QTabWidget::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QTabWidget_leaveEvent(this, handle__leaveEvent.value(), sigval1);

	}

	friend void QTabWidget_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__moveEvent;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (!handle__moveEvent) {
			QTabWidget::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QTabWidget_moveEvent(this, handle__moveEvent.value(), sigval1);

	}

	friend void QTabWidget_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__closeEvent;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (!handle__closeEvent) {
			QTabWidget::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QTabWidget_closeEvent(this, handle__closeEvent.value(), sigval1);

	}

	friend void QTabWidget_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__contextMenuEvent;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (!handle__contextMenuEvent) {
			QTabWidget::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QTabWidget_contextMenuEvent(this, handle__contextMenuEvent.value(), sigval1);

	}

	friend void QTabWidget_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__tabletEvent;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (!handle__tabletEvent) {
			QTabWidget::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QTabWidget_tabletEvent(this, handle__tabletEvent.value(), sigval1);

	}

	friend void QTabWidget_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__actionEvent;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (!handle__actionEvent) {
			QTabWidget::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QTabWidget_actionEvent(this, handle__actionEvent.value(), sigval1);

	}

	friend void QTabWidget_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__dragEnterEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (!handle__dragEnterEvent) {
			QTabWidget::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QTabWidget_dragEnterEvent(this, handle__dragEnterEvent.value(), sigval1);

	}

	friend void QTabWidget_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__dragMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (!handle__dragMoveEvent) {
			QTabWidget::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QTabWidget_dragMoveEvent(this, handle__dragMoveEvent.value(), sigval1);

	}

	friend void QTabWidget_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__dragLeaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (!handle__dragLeaveEvent) {
			QTabWidget::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QTabWidget_dragLeaveEvent(this, handle__dragLeaveEvent.value(), sigval1);

	}

	friend void QTabWidget_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__dropEvent;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (!handle__dropEvent) {
			QTabWidget::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QTabWidget_dropEvent(this, handle__dropEvent.value(), sigval1);

	}

	friend void QTabWidget_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__hideEvent;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (!handle__hideEvent) {
			QTabWidget::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QTabWidget_hideEvent(this, handle__hideEvent.value(), sigval1);

	}

	friend void QTabWidget_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__nativeEvent;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (!handle__nativeEvent) {
			return QTabWidget::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QTabWidget_nativeEvent(this, handle__nativeEvent.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QTabWidget_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__metric;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (!handle__metric) {
			return QTabWidget::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QTabWidget_metric(this, handle__metric.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QTabWidget_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__initPainter;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (!handle__initPainter) {
			QTabWidget::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QTabWidget_initPainter(this, handle__initPainter.value(), sigval1);

	}

	friend void QTabWidget_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__redirected;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (!handle__redirected) {
			return QTabWidget::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QTabWidget_redirected(this, handle__redirected.value(), sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QTabWidget_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__sharedPainter;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (!handle__sharedPainter) {
			return QTabWidget::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QTabWidget_sharedPainter(this, handle__sharedPainter.value());
		return callback_return_value;
	}

	friend QPainter* QTabWidget_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__inputMethodEvent;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (!handle__inputMethodEvent) {
			QTabWidget::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QTabWidget_inputMethodEvent(this, handle__inputMethodEvent.value(), sigval1);

	}

	friend void QTabWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__inputMethodQuery;
	bool owns_return__inputMethodQuery = false;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (!handle__inputMethodQuery) {
			return QTabWidget::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QTabWidget_inputMethodQuery(this, handle__inputMethodQuery.value(), sigval1);
		std::unique_ptr<QVariant> callback_return_value_owner;
		if (owns_return__inputMethodQuery) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QVariant* QTabWidget_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__focusNextPrevChild;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (!handle__focusNextPrevChild) {
			return QTabWidget::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QTabWidget_focusNextPrevChild(this, handle__focusNextPrevChild.value(), sigval1);
		return callback_return_value;
	}

	friend bool QTabWidget_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QTabWidget::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QTabWidget_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QTabWidget_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QTabWidget::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QTabWidget_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QTabWidget_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QTabWidget::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QTabWidget_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QTabWidget_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QTabWidget::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QTabWidget_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QTabWidget_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QTabWidget::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QTabWidget_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QTabWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QTabWidget::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QTabWidget_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QTabWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QTabWidget_protectedbase_setTabBar(bool* _dynamic_cast_ok, void* self, QTabBar* tabBar);
	friend void QTabWidget_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionTabWidgetFrame* option);
	friend void QTabWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QTabWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QTabWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QTabWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QTabWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QTabWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QTabWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QTabWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QTabWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QTabWidget* QTabWidget_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQTabWidget(parent);
}

QTabWidget* QTabWidget_new2() {
	return new (std::nothrow) MiqtVirtualQTabWidget();
}

void QTabWidget_virtbase(QTabWidget* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QTabWidget_metaObject(const QTabWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTabWidget_metacast(QTabWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTabWidget_tr(const char* s) {
	QString _ret = QTabWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTabWidget_trUtf8(const char* s) {
	QString _ret = QTabWidget::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QTabWidget_addTab(QTabWidget* self, QWidget* widget, struct miqt_string param2) {
	QString param2_QString = QString::fromUtf8(param2.data, param2.len);
	return self->addTab(widget, param2_QString);
}

int QTabWidget_addTab2(QTabWidget* self, QWidget* widget, QIcon* icon, struct miqt_string label) {
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return self->addTab(widget, *icon, label_QString);
}

int QTabWidget_insertTab(QTabWidget* self, int index, QWidget* widget, struct miqt_string param3) {
	QString param3_QString = QString::fromUtf8(param3.data, param3.len);
	return self->insertTab(static_cast<int>(index), widget, param3_QString);
}

int QTabWidget_insertTab2(QTabWidget* self, int index, QWidget* widget, QIcon* icon, struct miqt_string label) {
	QString label_QString = QString::fromUtf8(label.data, label.len);
	return self->insertTab(static_cast<int>(index), widget, *icon, label_QString);
}

void QTabWidget_removeTab(QTabWidget* self, int index) {
	self->removeTab(static_cast<int>(index));
}

bool QTabWidget_isTabEnabled(const QTabWidget* self, int index) {
	return self->isTabEnabled(static_cast<int>(index));
}

void QTabWidget_setTabEnabled(QTabWidget* self, int index, bool enabled) {
	self->setTabEnabled(static_cast<int>(index), enabled);
}

bool QTabWidget_isTabVisible(const QTabWidget* self, int index) {
	return self->isTabVisible(static_cast<int>(index));
}

void QTabWidget_setTabVisible(QTabWidget* self, int index, bool visible) {
	self->setTabVisible(static_cast<int>(index), visible);
}

struct miqt_string QTabWidget_tabText(const QTabWidget* self, int index) {
	QString _ret = self->tabText(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTabWidget_setTabText(QTabWidget* self, int index, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setTabText(static_cast<int>(index), text_QString);
}

QIcon* QTabWidget_tabIcon(const QTabWidget* self, int index) {
	return new QIcon(self->tabIcon(static_cast<int>(index)));
}

void QTabWidget_setTabIcon(QTabWidget* self, int index, QIcon* icon) {
	self->setTabIcon(static_cast<int>(index), *icon);
}

void QTabWidget_setTabToolTip(QTabWidget* self, int index, struct miqt_string tip) {
	QString tip_QString = QString::fromUtf8(tip.data, tip.len);
	self->setTabToolTip(static_cast<int>(index), tip_QString);
}

struct miqt_string QTabWidget_tabToolTip(const QTabWidget* self, int index) {
	QString _ret = self->tabToolTip(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTabWidget_setTabWhatsThis(QTabWidget* self, int index, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setTabWhatsThis(static_cast<int>(index), text_QString);
}

struct miqt_string QTabWidget_tabWhatsThis(const QTabWidget* self, int index) {
	QString _ret = self->tabWhatsThis(static_cast<int>(index));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QTabWidget_currentIndex(const QTabWidget* self) {
	return self->currentIndex();
}

QWidget* QTabWidget_currentWidget(const QTabWidget* self) {
	return self->currentWidget();
}

QWidget* QTabWidget_widget(const QTabWidget* self, int index) {
	return self->widget(static_cast<int>(index));
}

int QTabWidget_indexOf(const QTabWidget* self, QWidget* widget) {
	return self->indexOf(widget);
}

int QTabWidget_count(const QTabWidget* self) {
	return self->count();
}

int QTabWidget_tabPosition(const QTabWidget* self) {
	QTabWidget::TabPosition _ret = self->tabPosition();
	return static_cast<int>(_ret);
}

void QTabWidget_setTabPosition(QTabWidget* self, int position) {
	self->setTabPosition(static_cast<QTabWidget::TabPosition>(position));
}

bool QTabWidget_tabsClosable(const QTabWidget* self) {
	return self->tabsClosable();
}

void QTabWidget_setTabsClosable(QTabWidget* self, bool closeable) {
	self->setTabsClosable(closeable);
}

bool QTabWidget_isMovable(const QTabWidget* self) {
	return self->isMovable();
}

void QTabWidget_setMovable(QTabWidget* self, bool movable) {
	self->setMovable(movable);
}

int QTabWidget_tabShape(const QTabWidget* self) {
	QTabWidget::TabShape _ret = self->tabShape();
	return static_cast<int>(_ret);
}

void QTabWidget_setTabShape(QTabWidget* self, int s) {
	self->setTabShape(static_cast<QTabWidget::TabShape>(s));
}

QSize* QTabWidget_sizeHint(const QTabWidget* self) {
	return new QSize(self->sizeHint());
}

QSize* QTabWidget_minimumSizeHint(const QTabWidget* self) {
	return new QSize(self->minimumSizeHint());
}

int QTabWidget_heightForWidth(const QTabWidget* self, int width) {
	return self->heightForWidth(static_cast<int>(width));
}

bool QTabWidget_hasHeightForWidth(const QTabWidget* self) {
	return self->hasHeightForWidth();
}

void QTabWidget_setCornerWidget(QTabWidget* self, QWidget* w) {
	self->setCornerWidget(w);
}

QWidget* QTabWidget_cornerWidget(const QTabWidget* self) {
	return self->cornerWidget();
}

int QTabWidget_elideMode(const QTabWidget* self) {
	Qt::TextElideMode _ret = self->elideMode();
	return static_cast<int>(_ret);
}

void QTabWidget_setElideMode(QTabWidget* self, int mode) {
	self->setElideMode(static_cast<Qt::TextElideMode>(mode));
}

QSize* QTabWidget_iconSize(const QTabWidget* self) {
	return new QSize(self->iconSize());
}

void QTabWidget_setIconSize(QTabWidget* self, QSize* size) {
	self->setIconSize(*size);
}

bool QTabWidget_usesScrollButtons(const QTabWidget* self) {
	return self->usesScrollButtons();
}

void QTabWidget_setUsesScrollButtons(QTabWidget* self, bool useButtons) {
	self->setUsesScrollButtons(useButtons);
}

bool QTabWidget_documentMode(const QTabWidget* self) {
	return self->documentMode();
}

void QTabWidget_setDocumentMode(QTabWidget* self, bool set) {
	self->setDocumentMode(set);
}

bool QTabWidget_tabBarAutoHide(const QTabWidget* self) {
	return self->tabBarAutoHide();
}

void QTabWidget_setTabBarAutoHide(QTabWidget* self, bool enabled) {
	self->setTabBarAutoHide(enabled);
}

void QTabWidget_clear(QTabWidget* self) {
	self->clear();
}

QTabBar* QTabWidget_tabBar(const QTabWidget* self) {
	return self->tabBar();
}

void QTabWidget_setCurrentIndex(QTabWidget* self, int index) {
	self->setCurrentIndex(static_cast<int>(index));
}

void QTabWidget_setCurrentWidget(QTabWidget* self, QWidget* widget) {
	self->setCurrentWidget(widget);
}

void QTabWidget_currentChanged(QTabWidget* self, int index) {
	self->currentChanged(static_cast<int>(index));
}

void* QTabWidget_connect_currentChanged(QTabWidget* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget>>(slot);
	return new QMetaObject::Connection(QTabWidget::connect(self, static_cast<void (QTabWidget::*)(int)>(&QTabWidget::currentChanged), self, [slot_handle](int index) {
		intptr_t slot = slot_handle->value();
		int sigval1 = index;
		miqt_exec_callback_QTabWidget_currentChanged(slot, sigval1);
	}));
}

void QTabWidget_tabCloseRequested(QTabWidget* self, int index) {
	self->tabCloseRequested(static_cast<int>(index));
}

void* QTabWidget_connect_tabCloseRequested(QTabWidget* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget>>(slot);
	return new QMetaObject::Connection(QTabWidget::connect(self, static_cast<void (QTabWidget::*)(int)>(&QTabWidget::tabCloseRequested), self, [slot_handle](int index) {
		intptr_t slot = slot_handle->value();
		int sigval1 = index;
		miqt_exec_callback_QTabWidget_tabCloseRequested(slot, sigval1);
	}));
}

void QTabWidget_tabBarClicked(QTabWidget* self, int index) {
	self->tabBarClicked(static_cast<int>(index));
}

void* QTabWidget_connect_tabBarClicked(QTabWidget* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget>>(slot);
	return new QMetaObject::Connection(QTabWidget::connect(self, static_cast<void (QTabWidget::*)(int)>(&QTabWidget::tabBarClicked), self, [slot_handle](int index) {
		intptr_t slot = slot_handle->value();
		int sigval1 = index;
		miqt_exec_callback_QTabWidget_tabBarClicked(slot, sigval1);
	}));
}

void QTabWidget_tabBarDoubleClicked(QTabWidget* self, int index) {
	self->tabBarDoubleClicked(static_cast<int>(index));
}

void* QTabWidget_connect_tabBarDoubleClicked(QTabWidget* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget>>(slot);
	return new QMetaObject::Connection(QTabWidget::connect(self, static_cast<void (QTabWidget::*)(int)>(&QTabWidget::tabBarDoubleClicked), self, [slot_handle](int index) {
		intptr_t slot = slot_handle->value();
		int sigval1 = index;
		miqt_exec_callback_QTabWidget_tabBarDoubleClicked(slot, sigval1);
	}));
}

struct miqt_string QTabWidget_tr2(const char* s, const char* c) {
	QString _ret = QTabWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTabWidget_tr3(const char* s, const char* c, int n) {
	QString _ret = QTabWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTabWidget_trUtf82(const char* s, const char* c) {
	QString _ret = QTabWidget::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTabWidget_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QTabWidget::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTabWidget_setCornerWidget2(QTabWidget* self, QWidget* w, int corner) {
	self->setCornerWidget(w, static_cast<Qt::Corner>(corner));
}

QWidget* QTabWidget_cornerWidgetWithCorner(const QTabWidget* self, int corner) {
	return self->cornerWidget(static_cast<Qt::Corner>(corner));
}

bool QTabWidget_override_virtual_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = false;
	return true;
}

bool QTabWidget_override_virtual_owned_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = true;
	return true;
}

QSize* QTabWidget_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQTabWidget*>(self)->QTabWidget::sizeHint());
}

bool QTabWidget_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	self_cast->owns_return__minimumSizeHint = false;
	return true;
}

bool QTabWidget_override_virtual_owned_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	self_cast->owns_return__minimumSizeHint = true;
	return true;
}

QSize* QTabWidget_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQTabWidget*>(self)->QTabWidget::minimumSizeHint());
}

bool QTabWidget_override_virtual_heightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = std::move(slot_handle);
	return true;
}

int QTabWidget_virtualbase_heightForWidth(const void* self, int width) {
	return static_cast<const MiqtVirtualQTabWidget*>(self)->QTabWidget::heightForWidth(static_cast<int>(width));
}

bool QTabWidget_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = std::move(slot_handle);
	return true;
}

bool QTabWidget_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQTabWidget*>(self)->QTabWidget::hasHeightForWidth();
}

bool QTabWidget_override_virtual_tabInserted(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabInserted = std::move(slot_handle);
	return true;
}

void QTabWidget_virtualbase_tabInserted(void* self, int index) {
	static_cast<MiqtVirtualQTabWidget*>(self)->QTabWidget::tabInserted(static_cast<int>(index));
}

bool QTabWidget_override_virtual_tabRemoved(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabRemoved = std::move(slot_handle);
	return true;
}

void QTabWidget_virtualbase_tabRemoved(void* self, int index) {
	static_cast<MiqtVirtualQTabWidget*>(self)->QTabWidget::tabRemoved(static_cast<int>(index));
}

bool QTabWidget_override_virtual_showEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = std::move(slot_handle);
	return true;
}

void QTabWidget_virtualbase_showEvent(void* self, QShowEvent* param1) {
	static_cast<MiqtVirtualQTabWidget*>(self)->QTabWidget::showEvent(param1);
}

bool QTabWidget_override_virtual_resizeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = std::move(slot_handle);
	return true;
}

void QTabWidget_virtualbase_resizeEvent(void* self, QResizeEvent* param1) {
	static_cast<MiqtVirtualQTabWidget*>(self)->QTabWidget::resizeEvent(param1);
}

bool QTabWidget_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = std::move(slot_handle);
	return true;
}

void QTabWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {
	static_cast<MiqtVirtualQTabWidget*>(self)->QTabWidget::keyPressEvent(param1);
}

bool QTabWidget_override_virtual_paintEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = std::move(slot_handle);
	return true;
}

void QTabWidget_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	static_cast<MiqtVirtualQTabWidget*>(self)->QTabWidget::paintEvent(param1);
}

bool QTabWidget_override_virtual_changeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = std::move(slot_handle);
	return true;
}

void QTabWidget_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQTabWidget*>(self)->QTabWidget::changeEvent(param1);
}

bool QTabWidget_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QTabWidget_virtualbase_event(void* self, QEvent* param1) {
	return static_cast<MiqtVirtualQTabWidget*>(self)->QTabWidget::event(param1);
}

bool QTabWidget_override_virtual_devType(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = std::move(slot_handle);
	return true;
}

int QTabWidget_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQTabWidget*>(self)->QTabWidget::devType();
}

bool QTabWidget_override_virtual_setVisible(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = std::move(slot_handle);
	return true;
}

void QTabWidget_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQTabWidget*>(self)->QTabWidget::setVisible(visible);
}

bool QTabWidget_override_virtual_paintEngine(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = std::move(slot_handle);
	return true;
}

QPaintEngine* QTabWidget_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQTabWidget*>(self)->QTabWidget::paintEngine();
}

bool QTabWidget_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = std::move(slot_handle);
	return true;
}

void QTabWidget_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQTabWidget*>(self)->QTabWidget::mousePressEvent(event);
}

bool QTabWidget_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = std::move(slot_handle);
	return true;
}

void QTabWidget_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQTabWidget*>(self)->QTabWidget::mouseReleaseEvent(event);
}

bool QTabWidget_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = std::move(slot_handle);
	return true;
}

void QTabWidget_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQTabWidget*>(self)->QTabWidget::mouseDoubleClickEvent(event);
}

bool QTabWidget_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = std::move(slot_handle);
	return true;
}

void QTabWidget_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQTabWidget*>(self)->QTabWidget::mouseMoveEvent(event);
}

bool QTabWidget_override_virtual_wheelEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = std::move(slot_handle);
	return true;
}

void QTabWidget_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQTabWidget*>(self)->QTabWidget::wheelEvent(event);
}

bool QTabWidget_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = std::move(slot_handle);
	return true;
}

void QTabWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQTabWidget*>(self)->QTabWidget::keyReleaseEvent(event);
}

bool QTabWidget_override_virtual_focusInEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = std::move(slot_handle);
	return true;
}

void QTabWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQTabWidget*>(self)->QTabWidget::focusInEvent(event);
}

bool QTabWidget_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = std::move(slot_handle);
	return true;
}

void QTabWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQTabWidget*>(self)->QTabWidget::focusOutEvent(event);
}

bool QTabWidget_override_virtual_enterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = std::move(slot_handle);
	return true;
}

void QTabWidget_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQTabWidget*>(self)->QTabWidget::enterEvent(event);
}

bool QTabWidget_override_virtual_leaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = std::move(slot_handle);
	return true;
}

void QTabWidget_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQTabWidget*>(self)->QTabWidget::leaveEvent(event);
}

bool QTabWidget_override_virtual_moveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = std::move(slot_handle);
	return true;
}

void QTabWidget_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQTabWidget*>(self)->QTabWidget::moveEvent(event);
}

bool QTabWidget_override_virtual_closeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = std::move(slot_handle);
	return true;
}

void QTabWidget_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQTabWidget*>(self)->QTabWidget::closeEvent(event);
}

bool QTabWidget_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = std::move(slot_handle);
	return true;
}

void QTabWidget_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQTabWidget*>(self)->QTabWidget::contextMenuEvent(event);
}

bool QTabWidget_override_virtual_tabletEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = std::move(slot_handle);
	return true;
}

void QTabWidget_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQTabWidget*>(self)->QTabWidget::tabletEvent(event);
}

bool QTabWidget_override_virtual_actionEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = std::move(slot_handle);
	return true;
}

void QTabWidget_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQTabWidget*>(self)->QTabWidget::actionEvent(event);
}

bool QTabWidget_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = std::move(slot_handle);
	return true;
}

void QTabWidget_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQTabWidget*>(self)->QTabWidget::dragEnterEvent(event);
}

bool QTabWidget_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = std::move(slot_handle);
	return true;
}

void QTabWidget_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQTabWidget*>(self)->QTabWidget::dragMoveEvent(event);
}

bool QTabWidget_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = std::move(slot_handle);
	return true;
}

void QTabWidget_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQTabWidget*>(self)->QTabWidget::dragLeaveEvent(event);
}

bool QTabWidget_override_virtual_dropEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = std::move(slot_handle);
	return true;
}

void QTabWidget_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQTabWidget*>(self)->QTabWidget::dropEvent(event);
}

bool QTabWidget_override_virtual_hideEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = std::move(slot_handle);
	return true;
}

void QTabWidget_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQTabWidget*>(self)->QTabWidget::hideEvent(event);
}

bool QTabWidget_override_virtual_nativeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = std::move(slot_handle);
	return true;
}

bool QTabWidget_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQTabWidget*>(self)->QTabWidget::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QTabWidget_override_virtual_metric(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = std::move(slot_handle);
	return true;
}

int QTabWidget_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQTabWidget*>(self)->QTabWidget::metric(static_cast<MiqtVirtualQTabWidget::PaintDeviceMetric>(param1));
}

bool QTabWidget_override_virtual_initPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = std::move(slot_handle);
	return true;
}

void QTabWidget_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQTabWidget*>(self)->QTabWidget::initPainter(painter);
}

bool QTabWidget_override_virtual_redirected(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = std::move(slot_handle);
	return true;
}

QPaintDevice* QTabWidget_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQTabWidget*>(self)->QTabWidget::redirected(offset);
}

bool QTabWidget_override_virtual_sharedPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = std::move(slot_handle);
	return true;
}

QPainter* QTabWidget_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQTabWidget*>(self)->QTabWidget::sharedPainter();
}

bool QTabWidget_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = std::move(slot_handle);
	return true;
}

void QTabWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQTabWidget*>(self)->QTabWidget::inputMethodEvent(param1);
}

bool QTabWidget_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	self_cast->owns_return__inputMethodQuery = false;
	return true;
}

bool QTabWidget_override_virtual_owned_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	self_cast->owns_return__inputMethodQuery = true;
	return true;
}

QVariant* QTabWidget_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQTabWidget*>(self)->QTabWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QTabWidget_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = std::move(slot_handle);
	return true;
}

bool QTabWidget_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQTabWidget*>(self)->QTabWidget::focusNextPrevChild(next);
}

bool QTabWidget_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QTabWidget_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQTabWidget*>(self)->QTabWidget::eventFilter(watched, event);
}

bool QTabWidget_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QTabWidget_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQTabWidget*>(self)->QTabWidget::timerEvent(event);
}

bool QTabWidget_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QTabWidget_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQTabWidget*>(self)->QTabWidget::childEvent(event);
}

bool QTabWidget_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QTabWidget_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQTabWidget*>(self)->QTabWidget::customEvent(event);
}

bool QTabWidget_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QTabWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQTabWidget*>(self)->QTabWidget::connectNotify(*signal);
}

bool QTabWidget_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTabWidget> slot_handle(slot);
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QTabWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQTabWidget*>(self)->QTabWidget::disconnectNotify(*signal);
}

void QTabWidget_protectedbase_setTabBar(bool* _dynamic_cast_ok, void* self, QTabBar* tabBar) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setTabBar(tabBar);
}

void QTabWidget_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionTabWidgetFrame* option) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->initStyleOption(option);
}

void QTabWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QTabWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QTabWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QTabWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QTabWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QTabWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QTabWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QTabWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QTabWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQTabWidget* self_cast = dynamic_cast<MiqtVirtualQTabWidget*>( (QTabWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QTabWidget_delete(QTabWidget* self) {
	delete self;
}

