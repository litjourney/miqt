#include <memory>
#include <utility>
#include <QAbstractScrollArea>
#include <QActionEvent>
#include <QBrush>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFrame>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QList>
#include <QMargins>
#include <QMdiArea>
#include <QMdiSubWindow>
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
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qmdiarea.h>
#include "gen_qmdiarea.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QMdiArea(intptr_t);
void miqt_exec_callback_QMdiArea_subWindowActivated(intptr_t, QMdiSubWindow*);
QSize* miqt_exec_callback_QMdiArea_sizeHint(const QMdiArea*, intptr_t);
QSize* miqt_exec_callback_QMdiArea_minimumSizeHint(const QMdiArea*, intptr_t);
void miqt_exec_callback_QMdiArea_setupViewport(QMdiArea*, intptr_t, QWidget*);
bool miqt_exec_callback_QMdiArea_event(QMdiArea*, intptr_t, QEvent*);
bool miqt_exec_callback_QMdiArea_eventFilter(QMdiArea*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QMdiArea_paintEvent(QMdiArea*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QMdiArea_childEvent(QMdiArea*, intptr_t, QChildEvent*);
void miqt_exec_callback_QMdiArea_resizeEvent(QMdiArea*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QMdiArea_timerEvent(QMdiArea*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QMdiArea_showEvent(QMdiArea*, intptr_t, QShowEvent*);
bool miqt_exec_callback_QMdiArea_viewportEvent(QMdiArea*, intptr_t, QEvent*);
void miqt_exec_callback_QMdiArea_scrollContentsBy(QMdiArea*, intptr_t, int, int);
void miqt_exec_callback_QMdiArea_mousePressEvent(QMdiArea*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QMdiArea_mouseReleaseEvent(QMdiArea*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QMdiArea_mouseDoubleClickEvent(QMdiArea*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QMdiArea_mouseMoveEvent(QMdiArea*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QMdiArea_wheelEvent(QMdiArea*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QMdiArea_contextMenuEvent(QMdiArea*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QMdiArea_dragEnterEvent(QMdiArea*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QMdiArea_dragMoveEvent(QMdiArea*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QMdiArea_dragLeaveEvent(QMdiArea*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QMdiArea_dropEvent(QMdiArea*, intptr_t, QDropEvent*);
void miqt_exec_callback_QMdiArea_keyPressEvent(QMdiArea*, intptr_t, QKeyEvent*);
QSize* miqt_exec_callback_QMdiArea_viewportSizeHint(const QMdiArea*, intptr_t);
void miqt_exec_callback_QMdiArea_changeEvent(QMdiArea*, intptr_t, QEvent*);
void miqt_exec_callback_QMdiArea_initStyleOption(const QMdiArea*, intptr_t, QStyleOptionFrame*);
int miqt_exec_callback_QMdiArea_devType(const QMdiArea*, intptr_t);
void miqt_exec_callback_QMdiArea_setVisible(QMdiArea*, intptr_t, bool);
int miqt_exec_callback_QMdiArea_heightForWidth(const QMdiArea*, intptr_t, int);
bool miqt_exec_callback_QMdiArea_hasHeightForWidth(const QMdiArea*, intptr_t);
QPaintEngine* miqt_exec_callback_QMdiArea_paintEngine(const QMdiArea*, intptr_t);
void miqt_exec_callback_QMdiArea_keyReleaseEvent(QMdiArea*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QMdiArea_focusInEvent(QMdiArea*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QMdiArea_focusOutEvent(QMdiArea*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QMdiArea_enterEvent(QMdiArea*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QMdiArea_leaveEvent(QMdiArea*, intptr_t, QEvent*);
void miqt_exec_callback_QMdiArea_moveEvent(QMdiArea*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QMdiArea_closeEvent(QMdiArea*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QMdiArea_tabletEvent(QMdiArea*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QMdiArea_actionEvent(QMdiArea*, intptr_t, QActionEvent*);
void miqt_exec_callback_QMdiArea_hideEvent(QMdiArea*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QMdiArea_nativeEvent(QMdiArea*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QMdiArea_metric(const QMdiArea*, intptr_t, int);
void miqt_exec_callback_QMdiArea_initPainter(const QMdiArea*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QMdiArea_redirected(const QMdiArea*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QMdiArea_sharedPainter(const QMdiArea*, intptr_t);
void miqt_exec_callback_QMdiArea_inputMethodEvent(QMdiArea*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QMdiArea_inputMethodQuery(const QMdiArea*, intptr_t, int);
bool miqt_exec_callback_QMdiArea_focusNextPrevChild(QMdiArea*, intptr_t, bool);
void miqt_exec_callback_QMdiArea_customEvent(QMdiArea*, intptr_t, QEvent*);
void miqt_exec_callback_QMdiArea_connectNotify(QMdiArea*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QMdiArea_disconnectNotify(QMdiArea*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQMdiArea final : public QMdiArea {
public:

	MiqtVirtualQMdiArea(QWidget* parent): QMdiArea(parent) {}
	MiqtVirtualQMdiArea(): QMdiArea() {}

	virtual ~MiqtVirtualQMdiArea() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__sizeHint;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (!handle__sizeHint) {
			return QMdiArea::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QMdiArea_sizeHint(this, handle__sizeHint.value());
		return *callback_return_value;
	}

	friend QSize* QMdiArea_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__minimumSizeHint;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (!handle__minimumSizeHint) {
			return QMdiArea::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QMdiArea_minimumSizeHint(this, handle__minimumSizeHint.value());
		return *callback_return_value;
	}

	friend QSize* QMdiArea_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__setupViewport;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (!handle__setupViewport) {
			QMdiArea::setupViewport(viewport);
			return;
		}

		QWidget* sigval1 = viewport;
		miqt_exec_callback_QMdiArea_setupViewport(this, handle__setupViewport.value(), sigval1);

	}

	friend void QMdiArea_virtualbase_setupViewport(void* self, QWidget* viewport);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QMdiArea::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QMdiArea_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QMdiArea_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (!handle__eventFilter) {
			return QMdiArea::eventFilter(object, event);
		}

		QObject* sigval1 = object;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QMdiArea_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QMdiArea_virtualbase_eventFilter(void* self, QObject* object, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__paintEvent;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* paintEvent) override {
		if (!handle__paintEvent) {
			QMdiArea::paintEvent(paintEvent);
			return;
		}

		QPaintEvent* sigval1 = paintEvent;
		miqt_exec_callback_QMdiArea_paintEvent(this, handle__paintEvent.value(), sigval1);

	}

	friend void QMdiArea_virtualbase_paintEvent(void* self, QPaintEvent* paintEvent);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* childEvent) override {
		if (!handle__childEvent) {
			QMdiArea::childEvent(childEvent);
			return;
		}

		QChildEvent* sigval1 = childEvent;
		miqt_exec_callback_QMdiArea_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QMdiArea_virtualbase_childEvent(void* self, QChildEvent* childEvent);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__resizeEvent;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* resizeEvent) override {
		if (!handle__resizeEvent) {
			QMdiArea::resizeEvent(resizeEvent);
			return;
		}

		QResizeEvent* sigval1 = resizeEvent;
		miqt_exec_callback_QMdiArea_resizeEvent(this, handle__resizeEvent.value(), sigval1);

	}

	friend void QMdiArea_virtualbase_resizeEvent(void* self, QResizeEvent* resizeEvent);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* timerEvent) override {
		if (!handle__timerEvent) {
			QMdiArea::timerEvent(timerEvent);
			return;
		}

		QTimerEvent* sigval1 = timerEvent;
		miqt_exec_callback_QMdiArea_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QMdiArea_virtualbase_timerEvent(void* self, QTimerEvent* timerEvent);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__showEvent;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* showEvent) override {
		if (!handle__showEvent) {
			QMdiArea::showEvent(showEvent);
			return;
		}

		QShowEvent* sigval1 = showEvent;
		miqt_exec_callback_QMdiArea_showEvent(this, handle__showEvent.value(), sigval1);

	}

	friend void QMdiArea_virtualbase_showEvent(void* self, QShowEvent* showEvent);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__viewportEvent;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* event) override {
		if (!handle__viewportEvent) {
			return QMdiArea::viewportEvent(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QMdiArea_viewportEvent(this, handle__viewportEvent.value(), sigval1);
		return callback_return_value;
	}

	friend bool QMdiArea_virtualbase_viewportEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__scrollContentsBy;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (!handle__scrollContentsBy) {
			QMdiArea::scrollContentsBy(dx, dy);
			return;
		}

		int sigval1 = dx;
		int sigval2 = dy;
		miqt_exec_callback_QMdiArea_scrollContentsBy(this, handle__scrollContentsBy.value(), sigval1, sigval2);

	}

	friend void QMdiArea_virtualbase_scrollContentsBy(void* self, int dx, int dy);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__mousePressEvent;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (!handle__mousePressEvent) {
			QMdiArea::mousePressEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QMdiArea_mousePressEvent(this, handle__mousePressEvent.value(), sigval1);

	}

	friend void QMdiArea_virtualbase_mousePressEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__mouseReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (!handle__mouseReleaseEvent) {
			QMdiArea::mouseReleaseEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QMdiArea_mouseReleaseEvent(this, handle__mouseReleaseEvent.value(), sigval1);

	}

	friend void QMdiArea_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__mouseDoubleClickEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
		if (!handle__mouseDoubleClickEvent) {
			QMdiArea::mouseDoubleClickEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QMdiArea_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent.value(), sigval1);

	}

	friend void QMdiArea_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__mouseMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (!handle__mouseMoveEvent) {
			QMdiArea::mouseMoveEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QMdiArea_mouseMoveEvent(this, handle__mouseMoveEvent.value(), sigval1);

	}

	friend void QMdiArea_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__wheelEvent;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (!handle__wheelEvent) {
			QMdiArea::wheelEvent(param1);
			return;
		}

		QWheelEvent* sigval1 = param1;
		miqt_exec_callback_QMdiArea_wheelEvent(this, handle__wheelEvent.value(), sigval1);

	}

	friend void QMdiArea_virtualbase_wheelEvent(void* self, QWheelEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__contextMenuEvent;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (!handle__contextMenuEvent) {
			QMdiArea::contextMenuEvent(param1);
			return;
		}

		QContextMenuEvent* sigval1 = param1;
		miqt_exec_callback_QMdiArea_contextMenuEvent(this, handle__contextMenuEvent.value(), sigval1);

	}

	friend void QMdiArea_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__dragEnterEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* param1) override {
		if (!handle__dragEnterEvent) {
			QMdiArea::dragEnterEvent(param1);
			return;
		}

		QDragEnterEvent* sigval1 = param1;
		miqt_exec_callback_QMdiArea_dragEnterEvent(this, handle__dragEnterEvent.value(), sigval1);

	}

	friend void QMdiArea_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__dragMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* param1) override {
		if (!handle__dragMoveEvent) {
			QMdiArea::dragMoveEvent(param1);
			return;
		}

		QDragMoveEvent* sigval1 = param1;
		miqt_exec_callback_QMdiArea_dragMoveEvent(this, handle__dragMoveEvent.value(), sigval1);

	}

	friend void QMdiArea_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__dragLeaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* param1) override {
		if (!handle__dragLeaveEvent) {
			QMdiArea::dragLeaveEvent(param1);
			return;
		}

		QDragLeaveEvent* sigval1 = param1;
		miqt_exec_callback_QMdiArea_dragLeaveEvent(this, handle__dragLeaveEvent.value(), sigval1);

	}

	friend void QMdiArea_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__dropEvent;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* param1) override {
		if (!handle__dropEvent) {
			QMdiArea::dropEvent(param1);
			return;
		}

		QDropEvent* sigval1 = param1;
		miqt_exec_callback_QMdiArea_dropEvent(this, handle__dropEvent.value(), sigval1);

	}

	friend void QMdiArea_virtualbase_dropEvent(void* self, QDropEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__keyPressEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (!handle__keyPressEvent) {
			QMdiArea::keyPressEvent(param1);
			return;
		}

		QKeyEvent* sigval1 = param1;
		miqt_exec_callback_QMdiArea_keyPressEvent(this, handle__keyPressEvent.value(), sigval1);

	}

	friend void QMdiArea_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__viewportSizeHint;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (!handle__viewportSizeHint) {
			return QMdiArea::viewportSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QMdiArea_viewportSizeHint(this, handle__viewportSizeHint.value());
		return *callback_return_value;
	}

	friend QSize* QMdiArea_virtualbase_viewportSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__changeEvent;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (!handle__changeEvent) {
			QMdiArea::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QMdiArea_changeEvent(this, handle__changeEvent.value(), sigval1);

	}

	friend void QMdiArea_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__initStyleOption;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionFrame* option) const override {
		if (!handle__initStyleOption) {
			QMdiArea::initStyleOption(option);
			return;
		}

		QStyleOptionFrame* sigval1 = option;
		miqt_exec_callback_QMdiArea_initStyleOption(this, handle__initStyleOption.value(), sigval1);

	}

	friend void QMdiArea_virtualbase_initStyleOption(const void* self, QStyleOptionFrame* option);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__devType;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (!handle__devType) {
			return QMdiArea::devType();
		}

		int callback_return_value = miqt_exec_callback_QMdiArea_devType(this, handle__devType.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QMdiArea_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__setVisible;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (!handle__setVisible) {
			QMdiArea::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QMdiArea_setVisible(this, handle__setVisible.value(), sigval1);

	}

	friend void QMdiArea_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__heightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (!handle__heightForWidth) {
			return QMdiArea::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QMdiArea_heightForWidth(this, handle__heightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QMdiArea_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__hasHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (!handle__hasHeightForWidth) {
			return QMdiArea::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QMdiArea_hasHeightForWidth(this, handle__hasHeightForWidth.value());
		return callback_return_value;
	}

	friend bool QMdiArea_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__paintEngine;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (!handle__paintEngine) {
			return QMdiArea::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QMdiArea_paintEngine(this, handle__paintEngine.value());
		return callback_return_value;
	}

	friend QPaintEngine* QMdiArea_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__keyReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (!handle__keyReleaseEvent) {
			QMdiArea::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QMdiArea_keyReleaseEvent(this, handle__keyReleaseEvent.value(), sigval1);

	}

	friend void QMdiArea_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__focusInEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (!handle__focusInEvent) {
			QMdiArea::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QMdiArea_focusInEvent(this, handle__focusInEvent.value(), sigval1);

	}

	friend void QMdiArea_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__focusOutEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (!handle__focusOutEvent) {
			QMdiArea::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QMdiArea_focusOutEvent(this, handle__focusOutEvent.value(), sigval1);

	}

	friend void QMdiArea_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__enterEvent;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (!handle__enterEvent) {
			QMdiArea::enterEvent(event);
			return;
		}

		QEnterEvent* sigval1 = event;
		miqt_exec_callback_QMdiArea_enterEvent(this, handle__enterEvent.value(), sigval1);

	}

	friend void QMdiArea_virtualbase_enterEvent(void* self, QEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__leaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (!handle__leaveEvent) {
			QMdiArea::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QMdiArea_leaveEvent(this, handle__leaveEvent.value(), sigval1);

	}

	friend void QMdiArea_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__moveEvent;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (!handle__moveEvent) {
			QMdiArea::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QMdiArea_moveEvent(this, handle__moveEvent.value(), sigval1);

	}

	friend void QMdiArea_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__closeEvent;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (!handle__closeEvent) {
			QMdiArea::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QMdiArea_closeEvent(this, handle__closeEvent.value(), sigval1);

	}

	friend void QMdiArea_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__tabletEvent;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (!handle__tabletEvent) {
			QMdiArea::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QMdiArea_tabletEvent(this, handle__tabletEvent.value(), sigval1);

	}

	friend void QMdiArea_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__actionEvent;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (!handle__actionEvent) {
			QMdiArea::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QMdiArea_actionEvent(this, handle__actionEvent.value(), sigval1);

	}

	friend void QMdiArea_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__hideEvent;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (!handle__hideEvent) {
			QMdiArea::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QMdiArea_hideEvent(this, handle__hideEvent.value(), sigval1);

	}

	friend void QMdiArea_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__nativeEvent;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (!handle__nativeEvent) {
			return QMdiArea::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		qintptr* result_ret = result;
		intptr_t* sigval3 = (intptr_t*)(result_ret);
		bool callback_return_value = miqt_exec_callback_QMdiArea_nativeEvent(this, handle__nativeEvent.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QMdiArea_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__metric;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (!handle__metric) {
			return QMdiArea::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QMdiArea_metric(this, handle__metric.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QMdiArea_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__initPainter;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (!handle__initPainter) {
			QMdiArea::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QMdiArea_initPainter(this, handle__initPainter.value(), sigval1);

	}

	friend void QMdiArea_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__redirected;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (!handle__redirected) {
			return QMdiArea::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QMdiArea_redirected(this, handle__redirected.value(), sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QMdiArea_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__sharedPainter;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (!handle__sharedPainter) {
			return QMdiArea::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QMdiArea_sharedPainter(this, handle__sharedPainter.value());
		return callback_return_value;
	}

	friend QPainter* QMdiArea_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__inputMethodEvent;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (!handle__inputMethodEvent) {
			QMdiArea::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QMdiArea_inputMethodEvent(this, handle__inputMethodEvent.value(), sigval1);

	}

	friend void QMdiArea_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__inputMethodQuery;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (!handle__inputMethodQuery) {
			return QMdiArea::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QMdiArea_inputMethodQuery(this, handle__inputMethodQuery.value(), sigval1);
		return *callback_return_value;
	}

	friend QVariant* QMdiArea_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__focusNextPrevChild;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (!handle__focusNextPrevChild) {
			return QMdiArea::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QMdiArea_focusNextPrevChild(this, handle__focusNextPrevChild.value(), sigval1);
		return callback_return_value;
	}

	friend bool QMdiArea_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QMdiArea::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QMdiArea_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QMdiArea_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QMdiArea::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QMdiArea_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QMdiArea_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QMdiArea::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QMdiArea_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QMdiArea_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QMdiArea_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom);
	friend QMargins* QMdiArea_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self);
	friend void QMdiArea_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
	friend void QMdiArea_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QMdiArea_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QMdiArea_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QMdiArea_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QMdiArea_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QMdiArea_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QMdiArea_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QMdiArea_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QMdiArea_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QMdiArea* QMdiArea_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQMdiArea(parent);
}

QMdiArea* QMdiArea_new2() {
	return new (std::nothrow) MiqtVirtualQMdiArea();
}

void QMdiArea_virtbase(QMdiArea* src, QAbstractScrollArea** outptr_QAbstractScrollArea) {
	*outptr_QAbstractScrollArea = static_cast<QAbstractScrollArea*>(src);
}

QMetaObject* QMdiArea_metaObject(const QMdiArea* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMdiArea_metacast(QMdiArea* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMdiArea_tr(const char* s) {
	QString _ret = QMdiArea::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QMdiArea_sizeHint(const QMdiArea* self) {
	return new QSize(self->sizeHint());
}

QSize* QMdiArea_minimumSizeHint(const QMdiArea* self) {
	return new QSize(self->minimumSizeHint());
}

QMdiSubWindow* QMdiArea_currentSubWindow(const QMdiArea* self) {
	return self->currentSubWindow();
}

QMdiSubWindow* QMdiArea_activeSubWindow(const QMdiArea* self) {
	return self->activeSubWindow();
}

struct miqt_array /* of QMdiSubWindow* */  QMdiArea_subWindowList(const QMdiArea* self) {
	QList<QMdiSubWindow *> _ret = self->subWindowList();
	// Convert QList<> from C++ memory to manually-managed C memory
	QMdiSubWindow** _arr = static_cast<QMdiSubWindow**>(malloc(sizeof(QMdiSubWindow*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QMdiSubWindow* QMdiArea_addSubWindow(QMdiArea* self, QWidget* widget) {
	return self->addSubWindow(widget);
}

void QMdiArea_removeSubWindow(QMdiArea* self, QWidget* widget) {
	self->removeSubWindow(widget);
}

QBrush* QMdiArea_background(const QMdiArea* self) {
	return new QBrush(self->background());
}

void QMdiArea_setBackground(QMdiArea* self, QBrush* background) {
	self->setBackground(*background);
}

int QMdiArea_activationOrder(const QMdiArea* self) {
	QMdiArea::WindowOrder _ret = self->activationOrder();
	return static_cast<int>(_ret);
}

void QMdiArea_setActivationOrder(QMdiArea* self, int order) {
	self->setActivationOrder(static_cast<QMdiArea::WindowOrder>(order));
}

void QMdiArea_setOption(QMdiArea* self, int option) {
	self->setOption(static_cast<QMdiArea::AreaOption>(option));
}

bool QMdiArea_testOption(const QMdiArea* self, int opton) {
	return self->testOption(static_cast<QMdiArea::AreaOption>(opton));
}

void QMdiArea_setViewMode(QMdiArea* self, int mode) {
	self->setViewMode(static_cast<QMdiArea::ViewMode>(mode));
}

int QMdiArea_viewMode(const QMdiArea* self) {
	QMdiArea::ViewMode _ret = self->viewMode();
	return static_cast<int>(_ret);
}

bool QMdiArea_documentMode(const QMdiArea* self) {
	return self->documentMode();
}

void QMdiArea_setDocumentMode(QMdiArea* self, bool enabled) {
	self->setDocumentMode(enabled);
}

void QMdiArea_setTabsClosable(QMdiArea* self, bool closable) {
	self->setTabsClosable(closable);
}

bool QMdiArea_tabsClosable(const QMdiArea* self) {
	return self->tabsClosable();
}

void QMdiArea_setTabsMovable(QMdiArea* self, bool movable) {
	self->setTabsMovable(movable);
}

bool QMdiArea_tabsMovable(const QMdiArea* self) {
	return self->tabsMovable();
}

void QMdiArea_setTabShape(QMdiArea* self, int shape) {
	self->setTabShape(static_cast<QTabWidget::TabShape>(shape));
}

int QMdiArea_tabShape(const QMdiArea* self) {
	QTabWidget::TabShape _ret = self->tabShape();
	return static_cast<int>(_ret);
}

void QMdiArea_setTabPosition(QMdiArea* self, int position) {
	self->setTabPosition(static_cast<QTabWidget::TabPosition>(position));
}

int QMdiArea_tabPosition(const QMdiArea* self) {
	QTabWidget::TabPosition _ret = self->tabPosition();
	return static_cast<int>(_ret);
}

void QMdiArea_subWindowActivated(QMdiArea* self, QMdiSubWindow* param1) {
	self->subWindowActivated(param1);
}

void* QMdiArea_connect_subWindowActivated(QMdiArea* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea>>(slot);
	return new QMetaObject::Connection(QMdiArea::connect(self, static_cast<void (QMdiArea::*)(QMdiSubWindow*)>(&QMdiArea::subWindowActivated), self, [slot_handle](QMdiSubWindow* param1) {
		intptr_t slot = slot_handle->value();
		QMdiSubWindow* sigval1 = param1;
		miqt_exec_callback_QMdiArea_subWindowActivated(slot, sigval1);
	}));
}

void QMdiArea_setActiveSubWindow(QMdiArea* self, QMdiSubWindow* window) {
	self->setActiveSubWindow(window);
}

void QMdiArea_tileSubWindows(QMdiArea* self) {
	self->tileSubWindows();
}

void QMdiArea_cascadeSubWindows(QMdiArea* self) {
	self->cascadeSubWindows();
}

void QMdiArea_closeActiveSubWindow(QMdiArea* self) {
	self->closeActiveSubWindow();
}

void QMdiArea_closeAllSubWindows(QMdiArea* self) {
	self->closeAllSubWindows();
}

void QMdiArea_activateNextSubWindow(QMdiArea* self) {
	self->activateNextSubWindow();
}

void QMdiArea_activatePreviousSubWindow(QMdiArea* self) {
	self->activatePreviousSubWindow();
}

struct miqt_string QMdiArea_tr2(const char* s, const char* c) {
	QString _ret = QMdiArea::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMdiArea_tr3(const char* s, const char* c, int n) {
	QString _ret = QMdiArea::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array /* of QMdiSubWindow* */  QMdiArea_subWindowListWithOrder(const QMdiArea* self, int order) {
	QList<QMdiSubWindow *> _ret = self->subWindowList(static_cast<QMdiArea::WindowOrder>(order));
	// Convert QList<> from C++ memory to manually-managed C memory
	QMdiSubWindow** _arr = static_cast<QMdiSubWindow**>(malloc(sizeof(QMdiSubWindow*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QMdiSubWindow* QMdiArea_addSubWindow2(QMdiArea* self, QWidget* widget, int flags) {
	return self->addSubWindow(widget, static_cast<Qt::WindowFlags>(flags));
}

void QMdiArea_setOption2(QMdiArea* self, int option, bool on) {
	self->setOption(static_cast<QMdiArea::AreaOption>(option), on);
}

bool QMdiArea_override_virtual_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	return true;
}

QSize* QMdiArea_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQMdiArea*>(self)->QMdiArea::sizeHint());
}

bool QMdiArea_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	return true;
}

QSize* QMdiArea_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQMdiArea*>(self)->QMdiArea::minimumSizeHint());
}

bool QMdiArea_override_virtual_setupViewport(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setupViewport = std::move(slot_handle);
	return true;
}

void QMdiArea_virtualbase_setupViewport(void* self, QWidget* viewport) {
	static_cast<MiqtVirtualQMdiArea*>(self)->QMdiArea::setupViewport(viewport);
}

bool QMdiArea_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QMdiArea_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQMdiArea*>(self)->QMdiArea::event(event);
}

bool QMdiArea_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QMdiArea_virtualbase_eventFilter(void* self, QObject* object, QEvent* event) {
	return static_cast<MiqtVirtualQMdiArea*>(self)->QMdiArea::eventFilter(object, event);
}

bool QMdiArea_override_virtual_paintEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = std::move(slot_handle);
	return true;
}

void QMdiArea_virtualbase_paintEvent(void* self, QPaintEvent* paintEvent) {
	static_cast<MiqtVirtualQMdiArea*>(self)->QMdiArea::paintEvent(paintEvent);
}

bool QMdiArea_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QMdiArea_virtualbase_childEvent(void* self, QChildEvent* childEvent) {
	static_cast<MiqtVirtualQMdiArea*>(self)->QMdiArea::childEvent(childEvent);
}

bool QMdiArea_override_virtual_resizeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = std::move(slot_handle);
	return true;
}

void QMdiArea_virtualbase_resizeEvent(void* self, QResizeEvent* resizeEvent) {
	static_cast<MiqtVirtualQMdiArea*>(self)->QMdiArea::resizeEvent(resizeEvent);
}

bool QMdiArea_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QMdiArea_virtualbase_timerEvent(void* self, QTimerEvent* timerEvent) {
	static_cast<MiqtVirtualQMdiArea*>(self)->QMdiArea::timerEvent(timerEvent);
}

bool QMdiArea_override_virtual_showEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = std::move(slot_handle);
	return true;
}

void QMdiArea_virtualbase_showEvent(void* self, QShowEvent* showEvent) {
	static_cast<MiqtVirtualQMdiArea*>(self)->QMdiArea::showEvent(showEvent);
}

bool QMdiArea_override_virtual_viewportEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__viewportEvent = std::move(slot_handle);
	return true;
}

bool QMdiArea_virtualbase_viewportEvent(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQMdiArea*>(self)->QMdiArea::viewportEvent(event);
}

bool QMdiArea_override_virtual_scrollContentsBy(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scrollContentsBy = std::move(slot_handle);
	return true;
}

void QMdiArea_virtualbase_scrollContentsBy(void* self, int dx, int dy) {
	static_cast<MiqtVirtualQMdiArea*>(self)->QMdiArea::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
}

bool QMdiArea_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = std::move(slot_handle);
	return true;
}

void QMdiArea_virtualbase_mousePressEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQMdiArea*>(self)->QMdiArea::mousePressEvent(param1);
}

bool QMdiArea_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = std::move(slot_handle);
	return true;
}

void QMdiArea_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQMdiArea*>(self)->QMdiArea::mouseReleaseEvent(param1);
}

bool QMdiArea_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = std::move(slot_handle);
	return true;
}

void QMdiArea_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQMdiArea*>(self)->QMdiArea::mouseDoubleClickEvent(param1);
}

bool QMdiArea_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = std::move(slot_handle);
	return true;
}

void QMdiArea_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQMdiArea*>(self)->QMdiArea::mouseMoveEvent(param1);
}

bool QMdiArea_override_virtual_wheelEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = std::move(slot_handle);
	return true;
}

void QMdiArea_virtualbase_wheelEvent(void* self, QWheelEvent* param1) {
	static_cast<MiqtVirtualQMdiArea*>(self)->QMdiArea::wheelEvent(param1);
}

bool QMdiArea_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = std::move(slot_handle);
	return true;
}

void QMdiArea_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1) {
	static_cast<MiqtVirtualQMdiArea*>(self)->QMdiArea::contextMenuEvent(param1);
}

bool QMdiArea_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = std::move(slot_handle);
	return true;
}

void QMdiArea_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* param1) {
	static_cast<MiqtVirtualQMdiArea*>(self)->QMdiArea::dragEnterEvent(param1);
}

bool QMdiArea_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = std::move(slot_handle);
	return true;
}

void QMdiArea_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* param1) {
	static_cast<MiqtVirtualQMdiArea*>(self)->QMdiArea::dragMoveEvent(param1);
}

bool QMdiArea_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = std::move(slot_handle);
	return true;
}

void QMdiArea_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* param1) {
	static_cast<MiqtVirtualQMdiArea*>(self)->QMdiArea::dragLeaveEvent(param1);
}

bool QMdiArea_override_virtual_dropEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = std::move(slot_handle);
	return true;
}

void QMdiArea_virtualbase_dropEvent(void* self, QDropEvent* param1) {
	static_cast<MiqtVirtualQMdiArea*>(self)->QMdiArea::dropEvent(param1);
}

bool QMdiArea_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = std::move(slot_handle);
	return true;
}

void QMdiArea_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {
	static_cast<MiqtVirtualQMdiArea*>(self)->QMdiArea::keyPressEvent(param1);
}

bool QMdiArea_override_virtual_viewportSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__viewportSizeHint = std::move(slot_handle);
	return true;
}

QSize* QMdiArea_virtualbase_viewportSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQMdiArea*>(self)->QMdiArea::viewportSizeHint());
}

bool QMdiArea_override_virtual_changeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = std::move(slot_handle);
	return true;
}

void QMdiArea_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQMdiArea*>(self)->QMdiArea::changeEvent(param1);
}

bool QMdiArea_override_virtual_initStyleOption(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initStyleOption = std::move(slot_handle);
	return true;
}

void QMdiArea_virtualbase_initStyleOption(const void* self, QStyleOptionFrame* option) {
	static_cast<const MiqtVirtualQMdiArea*>(self)->QMdiArea::initStyleOption(option);
}

bool QMdiArea_override_virtual_devType(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = std::move(slot_handle);
	return true;
}

int QMdiArea_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQMdiArea*>(self)->QMdiArea::devType();
}

bool QMdiArea_override_virtual_setVisible(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = std::move(slot_handle);
	return true;
}

void QMdiArea_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQMdiArea*>(self)->QMdiArea::setVisible(visible);
}

bool QMdiArea_override_virtual_heightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = std::move(slot_handle);
	return true;
}

int QMdiArea_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQMdiArea*>(self)->QMdiArea::heightForWidth(static_cast<int>(param1));
}

bool QMdiArea_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = std::move(slot_handle);
	return true;
}

bool QMdiArea_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQMdiArea*>(self)->QMdiArea::hasHeightForWidth();
}

bool QMdiArea_override_virtual_paintEngine(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = std::move(slot_handle);
	return true;
}

QPaintEngine* QMdiArea_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQMdiArea*>(self)->QMdiArea::paintEngine();
}

bool QMdiArea_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = std::move(slot_handle);
	return true;
}

void QMdiArea_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQMdiArea*>(self)->QMdiArea::keyReleaseEvent(event);
}

bool QMdiArea_override_virtual_focusInEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = std::move(slot_handle);
	return true;
}

void QMdiArea_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQMdiArea*>(self)->QMdiArea::focusInEvent(event);
}

bool QMdiArea_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = std::move(slot_handle);
	return true;
}

void QMdiArea_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQMdiArea*>(self)->QMdiArea::focusOutEvent(event);
}

bool QMdiArea_override_virtual_enterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = std::move(slot_handle);
	return true;
}

void QMdiArea_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	static_cast<MiqtVirtualQMdiArea*>(self)->QMdiArea::enterEvent(event);
}

bool QMdiArea_override_virtual_leaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = std::move(slot_handle);
	return true;
}

void QMdiArea_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQMdiArea*>(self)->QMdiArea::leaveEvent(event);
}

bool QMdiArea_override_virtual_moveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = std::move(slot_handle);
	return true;
}

void QMdiArea_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQMdiArea*>(self)->QMdiArea::moveEvent(event);
}

bool QMdiArea_override_virtual_closeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = std::move(slot_handle);
	return true;
}

void QMdiArea_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQMdiArea*>(self)->QMdiArea::closeEvent(event);
}

bool QMdiArea_override_virtual_tabletEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = std::move(slot_handle);
	return true;
}

void QMdiArea_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQMdiArea*>(self)->QMdiArea::tabletEvent(event);
}

bool QMdiArea_override_virtual_actionEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = std::move(slot_handle);
	return true;
}

void QMdiArea_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQMdiArea*>(self)->QMdiArea::actionEvent(event);
}

bool QMdiArea_override_virtual_hideEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = std::move(slot_handle);
	return true;
}

void QMdiArea_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQMdiArea*>(self)->QMdiArea::hideEvent(event);
}

bool QMdiArea_override_virtual_nativeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = std::move(slot_handle);
	return true;
}

bool QMdiArea_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQMdiArea*>(self)->QMdiArea::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
}

bool QMdiArea_override_virtual_metric(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = std::move(slot_handle);
	return true;
}

int QMdiArea_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQMdiArea*>(self)->QMdiArea::metric(static_cast<MiqtVirtualQMdiArea::PaintDeviceMetric>(param1));
}

bool QMdiArea_override_virtual_initPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = std::move(slot_handle);
	return true;
}

void QMdiArea_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQMdiArea*>(self)->QMdiArea::initPainter(painter);
}

bool QMdiArea_override_virtual_redirected(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = std::move(slot_handle);
	return true;
}

QPaintDevice* QMdiArea_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQMdiArea*>(self)->QMdiArea::redirected(offset);
}

bool QMdiArea_override_virtual_sharedPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = std::move(slot_handle);
	return true;
}

QPainter* QMdiArea_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQMdiArea*>(self)->QMdiArea::sharedPainter();
}

bool QMdiArea_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = std::move(slot_handle);
	return true;
}

void QMdiArea_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQMdiArea*>(self)->QMdiArea::inputMethodEvent(param1);
}

bool QMdiArea_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	return true;
}

QVariant* QMdiArea_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQMdiArea*>(self)->QMdiArea::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QMdiArea_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = std::move(slot_handle);
	return true;
}

bool QMdiArea_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQMdiArea*>(self)->QMdiArea::focusNextPrevChild(next);
}

bool QMdiArea_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QMdiArea_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQMdiArea*>(self)->QMdiArea::customEvent(event);
}

bool QMdiArea_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QMdiArea_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQMdiArea*>(self)->QMdiArea::connectNotify(*signal);
}

bool QMdiArea_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QMdiArea> slot_handle(slot);
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QMdiArea_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQMdiArea*>(self)->QMdiArea::disconnectNotify(*signal);
}

void QMdiArea_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
}

QMargins* QMdiArea_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QMargins(self_cast->viewportMargins());
}

void QMdiArea_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->drawFrame(param1);
}

void QMdiArea_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QMdiArea_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QMdiArea_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QMdiArea_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QMdiArea_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QMdiArea_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QMdiArea_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QMdiArea_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QMdiArea_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQMdiArea* self_cast = dynamic_cast<MiqtVirtualQMdiArea*>( (QMdiArea*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QMdiArea_delete(QMdiArea* self) {
	delete self;
}

