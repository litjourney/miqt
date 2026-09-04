#include <memory>
#include <utility>
#include <QAction>
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
#include <QTabletEvent>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWebEngineHistory>
#include <QWebEngineHttpRequest>
#include <QWebEnginePage>
#include <QWebEngineSettings>
#include <QWebEngineView>
#include <QWheelEvent>
#include <QWidget>
#include <qwebengineview.h>
#include "gen_qwebengineview.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QWebEngineView(intptr_t);
void miqt_exec_callback_QWebEngineView_loadStarted(intptr_t);
void miqt_exec_callback_QWebEngineView_loadProgress(intptr_t, int);
void miqt_exec_callback_QWebEngineView_loadFinished(intptr_t, bool);
void miqt_exec_callback_QWebEngineView_titleChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QWebEngineView_selectionChanged(intptr_t);
void miqt_exec_callback_QWebEngineView_urlChanged(intptr_t, QUrl*);
void miqt_exec_callback_QWebEngineView_iconUrlChanged(intptr_t, QUrl*);
void miqt_exec_callback_QWebEngineView_iconChanged(intptr_t, QIcon*);
void miqt_exec_callback_QWebEngineView_renderProcessTerminated(intptr_t, int, int);
QSize* miqt_exec_callback_QWebEngineView_sizeHint(const QWebEngineView*, intptr_t);
QWebEngineView* miqt_exec_callback_QWebEngineView_createWindow(QWebEngineView*, intptr_t, int);
void miqt_exec_callback_QWebEngineView_contextMenuEvent(QWebEngineView*, intptr_t, QContextMenuEvent*);
bool miqt_exec_callback_QWebEngineView_event(QWebEngineView*, intptr_t, QEvent*);
void miqt_exec_callback_QWebEngineView_showEvent(QWebEngineView*, intptr_t, QShowEvent*);
void miqt_exec_callback_QWebEngineView_hideEvent(QWebEngineView*, intptr_t, QHideEvent*);
void miqt_exec_callback_QWebEngineView_closeEvent(QWebEngineView*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QWebEngineView_dragEnterEvent(QWebEngineView*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QWebEngineView_dragLeaveEvent(QWebEngineView*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QWebEngineView_dragMoveEvent(QWebEngineView*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QWebEngineView_dropEvent(QWebEngineView*, intptr_t, QDropEvent*);
int miqt_exec_callback_QWebEngineView_devType(const QWebEngineView*, intptr_t);
void miqt_exec_callback_QWebEngineView_setVisible(QWebEngineView*, intptr_t, bool);
QSize* miqt_exec_callback_QWebEngineView_minimumSizeHint(const QWebEngineView*, intptr_t);
int miqt_exec_callback_QWebEngineView_heightForWidth(const QWebEngineView*, intptr_t, int);
bool miqt_exec_callback_QWebEngineView_hasHeightForWidth(const QWebEngineView*, intptr_t);
QPaintEngine* miqt_exec_callback_QWebEngineView_paintEngine(const QWebEngineView*, intptr_t);
void miqt_exec_callback_QWebEngineView_mousePressEvent(QWebEngineView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWebEngineView_mouseReleaseEvent(QWebEngineView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWebEngineView_mouseDoubleClickEvent(QWebEngineView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWebEngineView_mouseMoveEvent(QWebEngineView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QWebEngineView_wheelEvent(QWebEngineView*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QWebEngineView_keyPressEvent(QWebEngineView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QWebEngineView_keyReleaseEvent(QWebEngineView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QWebEngineView_focusInEvent(QWebEngineView*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QWebEngineView_focusOutEvent(QWebEngineView*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QWebEngineView_enterEvent(QWebEngineView*, intptr_t, QEvent*);
void miqt_exec_callback_QWebEngineView_leaveEvent(QWebEngineView*, intptr_t, QEvent*);
void miqt_exec_callback_QWebEngineView_paintEvent(QWebEngineView*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QWebEngineView_moveEvent(QWebEngineView*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QWebEngineView_resizeEvent(QWebEngineView*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QWebEngineView_tabletEvent(QWebEngineView*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QWebEngineView_actionEvent(QWebEngineView*, intptr_t, QActionEvent*);
bool miqt_exec_callback_QWebEngineView_nativeEvent(QWebEngineView*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QWebEngineView_changeEvent(QWebEngineView*, intptr_t, QEvent*);
int miqt_exec_callback_QWebEngineView_metric(const QWebEngineView*, intptr_t, int);
void miqt_exec_callback_QWebEngineView_initPainter(const QWebEngineView*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QWebEngineView_redirected(const QWebEngineView*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QWebEngineView_sharedPainter(const QWebEngineView*, intptr_t);
void miqt_exec_callback_QWebEngineView_inputMethodEvent(QWebEngineView*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QWebEngineView_inputMethodQuery(const QWebEngineView*, intptr_t, int);
bool miqt_exec_callback_QWebEngineView_focusNextPrevChild(QWebEngineView*, intptr_t, bool);
bool miqt_exec_callback_QWebEngineView_eventFilter(QWebEngineView*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QWebEngineView_timerEvent(QWebEngineView*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QWebEngineView_childEvent(QWebEngineView*, intptr_t, QChildEvent*);
void miqt_exec_callback_QWebEngineView_customEvent(QWebEngineView*, intptr_t, QEvent*);
void miqt_exec_callback_QWebEngineView_connectNotify(QWebEngineView*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QWebEngineView_disconnectNotify(QWebEngineView*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQWebEngineView final : public QWebEngineView {
public:

	MiqtVirtualQWebEngineView(QWidget* parent): QWebEngineView(parent) {}
	MiqtVirtualQWebEngineView(): QWebEngineView() {}

	virtual ~MiqtVirtualQWebEngineView() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__sizeHint;
	bool owns_return__sizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (!handle__sizeHint) {
			return QWebEngineView::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QWebEngineView_sizeHint(this, handle__sizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__sizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QWebEngineView_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__createWindow;

	// Subclass to allow providing a Go implementation
	virtual QWebEngineView* createWindow(QWebEnginePage::WebWindowType type) override {
		if (!handle__createWindow) {
			return QWebEngineView::createWindow(type);
		}

		QWebEnginePage::WebWindowType type_ret = type;
		int sigval1 = static_cast<int>(type_ret);
		QWebEngineView* callback_return_value = miqt_exec_callback_QWebEngineView_createWindow(this, handle__createWindow.value(), sigval1);
		return callback_return_value;
	}

	friend QWebEngineView* QWebEngineView_virtualbase_createWindow(void* self, int type);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__contextMenuEvent;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (!handle__contextMenuEvent) {
			QWebEngineView::contextMenuEvent(param1);
			return;
		}

		QContextMenuEvent* sigval1 = param1;
		miqt_exec_callback_QWebEngineView_contextMenuEvent(this, handle__contextMenuEvent.value(), sigval1);

	}

	friend void QWebEngineView_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (!handle__event) {
			return QWebEngineView::event(param1);
		}

		QEvent* sigval1 = param1;
		bool callback_return_value = miqt_exec_callback_QWebEngineView_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QWebEngineView_virtualbase_event(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__showEvent;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (!handle__showEvent) {
			QWebEngineView::showEvent(param1);
			return;
		}

		QShowEvent* sigval1 = param1;
		miqt_exec_callback_QWebEngineView_showEvent(this, handle__showEvent.value(), sigval1);

	}

	friend void QWebEngineView_virtualbase_showEvent(void* self, QShowEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__hideEvent;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* param1) override {
		if (!handle__hideEvent) {
			QWebEngineView::hideEvent(param1);
			return;
		}

		QHideEvent* sigval1 = param1;
		miqt_exec_callback_QWebEngineView_hideEvent(this, handle__hideEvent.value(), sigval1);

	}

	friend void QWebEngineView_virtualbase_hideEvent(void* self, QHideEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__closeEvent;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* param1) override {
		if (!handle__closeEvent) {
			QWebEngineView::closeEvent(param1);
			return;
		}

		QCloseEvent* sigval1 = param1;
		miqt_exec_callback_QWebEngineView_closeEvent(this, handle__closeEvent.value(), sigval1);

	}

	friend void QWebEngineView_virtualbase_closeEvent(void* self, QCloseEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__dragEnterEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* e) override {
		if (!handle__dragEnterEvent) {
			QWebEngineView::dragEnterEvent(e);
			return;
		}

		QDragEnterEvent* sigval1 = e;
		miqt_exec_callback_QWebEngineView_dragEnterEvent(this, handle__dragEnterEvent.value(), sigval1);

	}

	friend void QWebEngineView_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__dragLeaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
		if (!handle__dragLeaveEvent) {
			QWebEngineView::dragLeaveEvent(e);
			return;
		}

		QDragLeaveEvent* sigval1 = e;
		miqt_exec_callback_QWebEngineView_dragLeaveEvent(this, handle__dragLeaveEvent.value(), sigval1);

	}

	friend void QWebEngineView_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__dragMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* e) override {
		if (!handle__dragMoveEvent) {
			QWebEngineView::dragMoveEvent(e);
			return;
		}

		QDragMoveEvent* sigval1 = e;
		miqt_exec_callback_QWebEngineView_dragMoveEvent(this, handle__dragMoveEvent.value(), sigval1);

	}

	friend void QWebEngineView_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__dropEvent;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* e) override {
		if (!handle__dropEvent) {
			QWebEngineView::dropEvent(e);
			return;
		}

		QDropEvent* sigval1 = e;
		miqt_exec_callback_QWebEngineView_dropEvent(this, handle__dropEvent.value(), sigval1);

	}

	friend void QWebEngineView_virtualbase_dropEvent(void* self, QDropEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__devType;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (!handle__devType) {
			return QWebEngineView::devType();
		}

		int callback_return_value = miqt_exec_callback_QWebEngineView_devType(this, handle__devType.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QWebEngineView_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__setVisible;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (!handle__setVisible) {
			QWebEngineView::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QWebEngineView_setVisible(this, handle__setVisible.value(), sigval1);

	}

	friend void QWebEngineView_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__minimumSizeHint;
	bool owns_return__minimumSizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (!handle__minimumSizeHint) {
			return QWebEngineView::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QWebEngineView_minimumSizeHint(this, handle__minimumSizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__minimumSizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QWebEngineView_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__heightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (!handle__heightForWidth) {
			return QWebEngineView::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QWebEngineView_heightForWidth(this, handle__heightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QWebEngineView_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__hasHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (!handle__hasHeightForWidth) {
			return QWebEngineView::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QWebEngineView_hasHeightForWidth(this, handle__hasHeightForWidth.value());
		return callback_return_value;
	}

	friend bool QWebEngineView_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__paintEngine;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (!handle__paintEngine) {
			return QWebEngineView::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QWebEngineView_paintEngine(this, handle__paintEngine.value());
		return callback_return_value;
	}

	friend QPaintEngine* QWebEngineView_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__mousePressEvent;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (!handle__mousePressEvent) {
			QWebEngineView::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QWebEngineView_mousePressEvent(this, handle__mousePressEvent.value(), sigval1);

	}

	friend void QWebEngineView_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__mouseReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (!handle__mouseReleaseEvent) {
			QWebEngineView::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QWebEngineView_mouseReleaseEvent(this, handle__mouseReleaseEvent.value(), sigval1);

	}

	friend void QWebEngineView_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__mouseDoubleClickEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (!handle__mouseDoubleClickEvent) {
			QWebEngineView::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QWebEngineView_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent.value(), sigval1);

	}

	friend void QWebEngineView_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__mouseMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (!handle__mouseMoveEvent) {
			QWebEngineView::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QWebEngineView_mouseMoveEvent(this, handle__mouseMoveEvent.value(), sigval1);

	}

	friend void QWebEngineView_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__wheelEvent;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (!handle__wheelEvent) {
			QWebEngineView::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QWebEngineView_wheelEvent(this, handle__wheelEvent.value(), sigval1);

	}

	friend void QWebEngineView_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__keyPressEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (!handle__keyPressEvent) {
			QWebEngineView::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QWebEngineView_keyPressEvent(this, handle__keyPressEvent.value(), sigval1);

	}

	friend void QWebEngineView_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__keyReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (!handle__keyReleaseEvent) {
			QWebEngineView::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QWebEngineView_keyReleaseEvent(this, handle__keyReleaseEvent.value(), sigval1);

	}

	friend void QWebEngineView_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__focusInEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (!handle__focusInEvent) {
			QWebEngineView::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QWebEngineView_focusInEvent(this, handle__focusInEvent.value(), sigval1);

	}

	friend void QWebEngineView_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__focusOutEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (!handle__focusOutEvent) {
			QWebEngineView::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QWebEngineView_focusOutEvent(this, handle__focusOutEvent.value(), sigval1);

	}

	friend void QWebEngineView_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__enterEvent;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (!handle__enterEvent) {
			QWebEngineView::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QWebEngineView_enterEvent(this, handle__enterEvent.value(), sigval1);

	}

	friend void QWebEngineView_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__leaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (!handle__leaveEvent) {
			QWebEngineView::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QWebEngineView_leaveEvent(this, handle__leaveEvent.value(), sigval1);

	}

	friend void QWebEngineView_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__paintEvent;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (!handle__paintEvent) {
			QWebEngineView::paintEvent(event);
			return;
		}

		QPaintEvent* sigval1 = event;
		miqt_exec_callback_QWebEngineView_paintEvent(this, handle__paintEvent.value(), sigval1);

	}

	friend void QWebEngineView_virtualbase_paintEvent(void* self, QPaintEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__moveEvent;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (!handle__moveEvent) {
			QWebEngineView::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QWebEngineView_moveEvent(this, handle__moveEvent.value(), sigval1);

	}

	friend void QWebEngineView_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__resizeEvent;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (!handle__resizeEvent) {
			QWebEngineView::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QWebEngineView_resizeEvent(this, handle__resizeEvent.value(), sigval1);

	}

	friend void QWebEngineView_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__tabletEvent;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (!handle__tabletEvent) {
			QWebEngineView::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QWebEngineView_tabletEvent(this, handle__tabletEvent.value(), sigval1);

	}

	friend void QWebEngineView_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__actionEvent;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (!handle__actionEvent) {
			QWebEngineView::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QWebEngineView_actionEvent(this, handle__actionEvent.value(), sigval1);

	}

	friend void QWebEngineView_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__nativeEvent;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (!handle__nativeEvent) {
			return QWebEngineView::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QWebEngineView_nativeEvent(this, handle__nativeEvent.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QWebEngineView_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__changeEvent;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (!handle__changeEvent) {
			QWebEngineView::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QWebEngineView_changeEvent(this, handle__changeEvent.value(), sigval1);

	}

	friend void QWebEngineView_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__metric;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (!handle__metric) {
			return QWebEngineView::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QWebEngineView_metric(this, handle__metric.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QWebEngineView_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__initPainter;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (!handle__initPainter) {
			QWebEngineView::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QWebEngineView_initPainter(this, handle__initPainter.value(), sigval1);

	}

	friend void QWebEngineView_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__redirected;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (!handle__redirected) {
			return QWebEngineView::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QWebEngineView_redirected(this, handle__redirected.value(), sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QWebEngineView_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__sharedPainter;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (!handle__sharedPainter) {
			return QWebEngineView::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QWebEngineView_sharedPainter(this, handle__sharedPainter.value());
		return callback_return_value;
	}

	friend QPainter* QWebEngineView_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__inputMethodEvent;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (!handle__inputMethodEvent) {
			QWebEngineView::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QWebEngineView_inputMethodEvent(this, handle__inputMethodEvent.value(), sigval1);

	}

	friend void QWebEngineView_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__inputMethodQuery;
	bool owns_return__inputMethodQuery = false;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (!handle__inputMethodQuery) {
			return QWebEngineView::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QWebEngineView_inputMethodQuery(this, handle__inputMethodQuery.value(), sigval1);
		std::unique_ptr<QVariant> callback_return_value_owner;
		if (owns_return__inputMethodQuery) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QVariant* QWebEngineView_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__focusNextPrevChild;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (!handle__focusNextPrevChild) {
			return QWebEngineView::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QWebEngineView_focusNextPrevChild(this, handle__focusNextPrevChild.value(), sigval1);
		return callback_return_value;
	}

	friend bool QWebEngineView_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QWebEngineView::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QWebEngineView_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QWebEngineView_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QWebEngineView::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QWebEngineView_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QWebEngineView_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QWebEngineView::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QWebEngineView_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QWebEngineView_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QWebEngineView::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QWebEngineView_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QWebEngineView_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QWebEngineView::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QWebEngineView_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QWebEngineView_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QWebEngineView::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QWebEngineView_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QWebEngineView_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QWebEngineView_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QWebEngineView_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QWebEngineView_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QWebEngineView_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QWebEngineView_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QWebEngineView_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QWebEngineView_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QWebEngineView_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QWebEngineView_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QWebEngineView* QWebEngineView_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQWebEngineView(parent);
}

QWebEngineView* QWebEngineView_new2() {
	return new (std::nothrow) MiqtVirtualQWebEngineView();
}

void QWebEngineView_virtbase(QWebEngineView* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QWebEngineView_metaObject(const QWebEngineView* self) {
	return (QMetaObject*) self->metaObject();
}

void* QWebEngineView_metacast(QWebEngineView* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QWebEngineView_tr(const char* s) {
	QString _ret = QWebEngineView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineView_trUtf8(const char* s) {
	QString _ret = QWebEngineView::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QWebEnginePage* QWebEngineView_page(const QWebEngineView* self) {
	return self->page();
}

void QWebEngineView_setPage(QWebEngineView* self, QWebEnginePage* page) {
	self->setPage(page);
}

void QWebEngineView_load(QWebEngineView* self, QUrl* url) {
	self->load(*url);
}

void QWebEngineView_loadWithRequest(QWebEngineView* self, QWebEngineHttpRequest* request) {
	self->load(*request);
}

void QWebEngineView_setHtml(QWebEngineView* self, struct miqt_string html) {
	QString html_QString = QString::fromUtf8(html.data, html.len);
	self->setHtml(html_QString);
}

void QWebEngineView_setContent(QWebEngineView* self, struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	self->setContent(data_QByteArray);
}

QWebEngineHistory* QWebEngineView_history(const QWebEngineView* self) {
	return self->history();
}

struct miqt_string QWebEngineView_title(const QWebEngineView* self) {
	QString _ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineView_setUrl(QWebEngineView* self, QUrl* url) {
	self->setUrl(*url);
}

QUrl* QWebEngineView_url(const QWebEngineView* self) {
	return new QUrl(self->url());
}

QUrl* QWebEngineView_iconUrl(const QWebEngineView* self) {
	return new QUrl(self->iconUrl());
}

QIcon* QWebEngineView_icon(const QWebEngineView* self) {
	return new QIcon(self->icon());
}

bool QWebEngineView_hasSelection(const QWebEngineView* self) {
	return self->hasSelection();
}

struct miqt_string QWebEngineView_selectedText(const QWebEngineView* self) {
	QString _ret = self->selectedText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QAction* QWebEngineView_pageAction(const QWebEngineView* self, int action) {
	return self->pageAction(static_cast<QWebEnginePage::WebAction>(action));
}

void QWebEngineView_triggerPageAction(QWebEngineView* self, int action) {
	self->triggerPageAction(static_cast<QWebEnginePage::WebAction>(action));
}

double QWebEngineView_zoomFactor(const QWebEngineView* self) {
	qreal _ret = self->zoomFactor();
	return static_cast<double>(_ret);
}

void QWebEngineView_setZoomFactor(QWebEngineView* self, double factor) {
	self->setZoomFactor(static_cast<qreal>(factor));
}

void QWebEngineView_findText(QWebEngineView* self, struct miqt_string subString) {
	QString subString_QString = QString::fromUtf8(subString.data, subString.len);
	self->findText(subString_QString);
}

QSize* QWebEngineView_sizeHint(const QWebEngineView* self) {
	return new QSize(self->sizeHint());
}

QWebEngineSettings* QWebEngineView_settings(const QWebEngineView* self) {
	return self->settings();
}

void QWebEngineView_stop(QWebEngineView* self) {
	self->stop();
}

void QWebEngineView_back(QWebEngineView* self) {
	self->back();
}

void QWebEngineView_forward(QWebEngineView* self) {
	self->forward();
}

void QWebEngineView_reload(QWebEngineView* self) {
	self->reload();
}

void QWebEngineView_loadStarted(QWebEngineView* self) {
	self->loadStarted();
}

void* QWebEngineView_connect_loadStarted(QWebEngineView* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView>>(slot);
	return new QMetaObject::Connection(QWebEngineView::connect(self, static_cast<void (QWebEngineView::*)()>(&QWebEngineView::loadStarted), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QWebEngineView_loadStarted(slot);
	}));
}

void QWebEngineView_loadProgress(QWebEngineView* self, int progress) {
	self->loadProgress(static_cast<int>(progress));
}

void* QWebEngineView_connect_loadProgress(QWebEngineView* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView>>(slot);
	return new QMetaObject::Connection(QWebEngineView::connect(self, static_cast<void (QWebEngineView::*)(int)>(&QWebEngineView::loadProgress), self, [slot_handle](int progress) {
		intptr_t slot = slot_handle->value();
		int sigval1 = progress;
		miqt_exec_callback_QWebEngineView_loadProgress(slot, sigval1);
	}));
}

void QWebEngineView_loadFinished(QWebEngineView* self, bool param1) {
	self->loadFinished(param1);
}

void* QWebEngineView_connect_loadFinished(QWebEngineView* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView>>(slot);
	return new QMetaObject::Connection(QWebEngineView::connect(self, static_cast<void (QWebEngineView::*)(bool)>(&QWebEngineView::loadFinished), self, [slot_handle](bool param1) {
		intptr_t slot = slot_handle->value();
		bool sigval1 = param1;
		miqt_exec_callback_QWebEngineView_loadFinished(slot, sigval1);
	}));
}

void QWebEngineView_titleChanged(QWebEngineView* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->titleChanged(title_QString);
}

void* QWebEngineView_connect_titleChanged(QWebEngineView* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView>>(slot);
	return new QMetaObject::Connection(QWebEngineView::connect(self, static_cast<void (QWebEngineView::*)(const QString&)>(&QWebEngineView::titleChanged), self, [slot_handle](const QString& title) {
		intptr_t slot = slot_handle->value();
		const QString title_ret = title;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray title_b = title_ret.toUtf8();
		struct miqt_string title_ms;
		title_ms.len = title_b.length();
		title_ms.data = static_cast<char*>(malloc(title_ms.len));
		memcpy(title_ms.data, title_b.data(), title_ms.len);
		struct miqt_string sigval1 = title_ms;
		miqt_exec_callback_QWebEngineView_titleChanged(slot, sigval1);
	}));
}

void QWebEngineView_selectionChanged(QWebEngineView* self) {
	self->selectionChanged();
}

void* QWebEngineView_connect_selectionChanged(QWebEngineView* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView>>(slot);
	return new QMetaObject::Connection(QWebEngineView::connect(self, static_cast<void (QWebEngineView::*)()>(&QWebEngineView::selectionChanged), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QWebEngineView_selectionChanged(slot);
	}));
}

void QWebEngineView_urlChanged(QWebEngineView* self, QUrl* param1) {
	self->urlChanged(*param1);
}

void* QWebEngineView_connect_urlChanged(QWebEngineView* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView>>(slot);
	return new QMetaObject::Connection(QWebEngineView::connect(self, static_cast<void (QWebEngineView::*)(const QUrl&)>(&QWebEngineView::urlChanged), self, [slot_handle](const QUrl& param1) {
		intptr_t slot = slot_handle->value();
		const QUrl& param1_ret = param1;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&param1_ret);
		miqt_exec_callback_QWebEngineView_urlChanged(slot, sigval1);
	}));
}

void QWebEngineView_iconUrlChanged(QWebEngineView* self, QUrl* param1) {
	self->iconUrlChanged(*param1);
}

void* QWebEngineView_connect_iconUrlChanged(QWebEngineView* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView>>(slot);
	return new QMetaObject::Connection(QWebEngineView::connect(self, static_cast<void (QWebEngineView::*)(const QUrl&)>(&QWebEngineView::iconUrlChanged), self, [slot_handle](const QUrl& param1) {
		intptr_t slot = slot_handle->value();
		const QUrl& param1_ret = param1;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&param1_ret);
		miqt_exec_callback_QWebEngineView_iconUrlChanged(slot, sigval1);
	}));
}

void QWebEngineView_iconChanged(QWebEngineView* self, QIcon* param1) {
	self->iconChanged(*param1);
}

void* QWebEngineView_connect_iconChanged(QWebEngineView* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView>>(slot);
	return new QMetaObject::Connection(QWebEngineView::connect(self, static_cast<void (QWebEngineView::*)(const QIcon&)>(&QWebEngineView::iconChanged), self, [slot_handle](const QIcon& param1) {
		intptr_t slot = slot_handle->value();
		const QIcon& param1_ret = param1;
		// Cast returned reference into pointer
		QIcon* sigval1 = const_cast<QIcon*>(&param1_ret);
		miqt_exec_callback_QWebEngineView_iconChanged(slot, sigval1);
	}));
}

void QWebEngineView_renderProcessTerminated(QWebEngineView* self, int terminationStatus, int exitCode) {
	self->renderProcessTerminated(static_cast<QWebEnginePage::RenderProcessTerminationStatus>(terminationStatus), static_cast<int>(exitCode));
}

void* QWebEngineView_connect_renderProcessTerminated(QWebEngineView* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView>>(slot);
	return new QMetaObject::Connection(QWebEngineView::connect(self, static_cast<void (QWebEngineView::*)(QWebEnginePage::RenderProcessTerminationStatus, int)>(&QWebEngineView::renderProcessTerminated), self, [slot_handle](QWebEnginePage::RenderProcessTerminationStatus terminationStatus, int exitCode) {
		intptr_t slot = slot_handle->value();
		QWebEnginePage::RenderProcessTerminationStatus terminationStatus_ret = terminationStatus;
		int sigval1 = static_cast<int>(terminationStatus_ret);
		int sigval2 = exitCode;
		miqt_exec_callback_QWebEngineView_renderProcessTerminated(slot, sigval1, sigval2);
	}));
}

struct miqt_string QWebEngineView_tr2(const char* s, const char* c) {
	QString _ret = QWebEngineView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineView_tr3(const char* s, const char* c, int n) {
	QString _ret = QWebEngineView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineView_trUtf82(const char* s, const char* c) {
	QString _ret = QWebEngineView::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QWebEngineView_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QWebEngineView::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QWebEngineView_setHtml2(QWebEngineView* self, struct miqt_string html, QUrl* baseUrl) {
	QString html_QString = QString::fromUtf8(html.data, html.len);
	self->setHtml(html_QString, *baseUrl);
}

void QWebEngineView_setContent2(QWebEngineView* self, struct miqt_string data, struct miqt_string mimeType) {
	QByteArray data_QByteArray(data.data, data.len);
	QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
	self->setContent(data_QByteArray, mimeType_QString);
}

void QWebEngineView_setContent3(QWebEngineView* self, struct miqt_string data, struct miqt_string mimeType, QUrl* baseUrl) {
	QByteArray data_QByteArray(data.data, data.len);
	QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
	self->setContent(data_QByteArray, mimeType_QString, *baseUrl);
}

void QWebEngineView_triggerPageAction2(QWebEngineView* self, int action, bool checked) {
	self->triggerPageAction(static_cast<QWebEnginePage::WebAction>(action), checked);
}

void QWebEngineView_findText2(QWebEngineView* self, struct miqt_string subString, int options) {
	QString subString_QString = QString::fromUtf8(subString.data, subString.len);
	self->findText(subString_QString, static_cast<QWebEnginePage::FindFlags>(options));
}

bool QWebEngineView_override_virtual_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = false;
	return true;
}

bool QWebEngineView_override_virtual_owned_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = true;
	return true;
}

QSize* QWebEngineView_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQWebEngineView*>(self)->QWebEngineView::sizeHint());
}

bool QWebEngineView_override_virtual_createWindow(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__createWindow = std::move(slot_handle);
	return true;
}

QWebEngineView* QWebEngineView_virtualbase_createWindow(void* self, int type) {
	return static_cast<MiqtVirtualQWebEngineView*>(self)->QWebEngineView::createWindow(static_cast<QWebEnginePage::WebWindowType>(type));
}

bool QWebEngineView_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = std::move(slot_handle);
	return true;
}

void QWebEngineView_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1) {
	static_cast<MiqtVirtualQWebEngineView*>(self)->QWebEngineView::contextMenuEvent(param1);
}

bool QWebEngineView_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QWebEngineView_virtualbase_event(void* self, QEvent* param1) {
	return static_cast<MiqtVirtualQWebEngineView*>(self)->QWebEngineView::event(param1);
}

bool QWebEngineView_override_virtual_showEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = std::move(slot_handle);
	return true;
}

void QWebEngineView_virtualbase_showEvent(void* self, QShowEvent* param1) {
	static_cast<MiqtVirtualQWebEngineView*>(self)->QWebEngineView::showEvent(param1);
}

bool QWebEngineView_override_virtual_hideEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = std::move(slot_handle);
	return true;
}

void QWebEngineView_virtualbase_hideEvent(void* self, QHideEvent* param1) {
	static_cast<MiqtVirtualQWebEngineView*>(self)->QWebEngineView::hideEvent(param1);
}

bool QWebEngineView_override_virtual_closeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = std::move(slot_handle);
	return true;
}

void QWebEngineView_virtualbase_closeEvent(void* self, QCloseEvent* param1) {
	static_cast<MiqtVirtualQWebEngineView*>(self)->QWebEngineView::closeEvent(param1);
}

bool QWebEngineView_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = std::move(slot_handle);
	return true;
}

void QWebEngineView_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* e) {
	static_cast<MiqtVirtualQWebEngineView*>(self)->QWebEngineView::dragEnterEvent(e);
}

bool QWebEngineView_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = std::move(slot_handle);
	return true;
}

void QWebEngineView_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* e) {
	static_cast<MiqtVirtualQWebEngineView*>(self)->QWebEngineView::dragLeaveEvent(e);
}

bool QWebEngineView_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = std::move(slot_handle);
	return true;
}

void QWebEngineView_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* e) {
	static_cast<MiqtVirtualQWebEngineView*>(self)->QWebEngineView::dragMoveEvent(e);
}

bool QWebEngineView_override_virtual_dropEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = std::move(slot_handle);
	return true;
}

void QWebEngineView_virtualbase_dropEvent(void* self, QDropEvent* e) {
	static_cast<MiqtVirtualQWebEngineView*>(self)->QWebEngineView::dropEvent(e);
}

bool QWebEngineView_override_virtual_devType(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = std::move(slot_handle);
	return true;
}

int QWebEngineView_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQWebEngineView*>(self)->QWebEngineView::devType();
}

bool QWebEngineView_override_virtual_setVisible(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = std::move(slot_handle);
	return true;
}

void QWebEngineView_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQWebEngineView*>(self)->QWebEngineView::setVisible(visible);
}

bool QWebEngineView_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	self_cast->owns_return__minimumSizeHint = false;
	return true;
}

bool QWebEngineView_override_virtual_owned_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	self_cast->owns_return__minimumSizeHint = true;
	return true;
}

QSize* QWebEngineView_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQWebEngineView*>(self)->QWebEngineView::minimumSizeHint());
}

bool QWebEngineView_override_virtual_heightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = std::move(slot_handle);
	return true;
}

int QWebEngineView_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQWebEngineView*>(self)->QWebEngineView::heightForWidth(static_cast<int>(param1));
}

bool QWebEngineView_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = std::move(slot_handle);
	return true;
}

bool QWebEngineView_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQWebEngineView*>(self)->QWebEngineView::hasHeightForWidth();
}

bool QWebEngineView_override_virtual_paintEngine(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = std::move(slot_handle);
	return true;
}

QPaintEngine* QWebEngineView_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQWebEngineView*>(self)->QWebEngineView::paintEngine();
}

bool QWebEngineView_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = std::move(slot_handle);
	return true;
}

void QWebEngineView_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQWebEngineView*>(self)->QWebEngineView::mousePressEvent(event);
}

bool QWebEngineView_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = std::move(slot_handle);
	return true;
}

void QWebEngineView_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQWebEngineView*>(self)->QWebEngineView::mouseReleaseEvent(event);
}

bool QWebEngineView_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = std::move(slot_handle);
	return true;
}

void QWebEngineView_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQWebEngineView*>(self)->QWebEngineView::mouseDoubleClickEvent(event);
}

bool QWebEngineView_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = std::move(slot_handle);
	return true;
}

void QWebEngineView_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQWebEngineView*>(self)->QWebEngineView::mouseMoveEvent(event);
}

bool QWebEngineView_override_virtual_wheelEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = std::move(slot_handle);
	return true;
}

void QWebEngineView_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQWebEngineView*>(self)->QWebEngineView::wheelEvent(event);
}

bool QWebEngineView_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = std::move(slot_handle);
	return true;
}

void QWebEngineView_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQWebEngineView*>(self)->QWebEngineView::keyPressEvent(event);
}

bool QWebEngineView_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = std::move(slot_handle);
	return true;
}

void QWebEngineView_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQWebEngineView*>(self)->QWebEngineView::keyReleaseEvent(event);
}

bool QWebEngineView_override_virtual_focusInEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = std::move(slot_handle);
	return true;
}

void QWebEngineView_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQWebEngineView*>(self)->QWebEngineView::focusInEvent(event);
}

bool QWebEngineView_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = std::move(slot_handle);
	return true;
}

void QWebEngineView_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQWebEngineView*>(self)->QWebEngineView::focusOutEvent(event);
}

bool QWebEngineView_override_virtual_enterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = std::move(slot_handle);
	return true;
}

void QWebEngineView_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQWebEngineView*>(self)->QWebEngineView::enterEvent(event);
}

bool QWebEngineView_override_virtual_leaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = std::move(slot_handle);
	return true;
}

void QWebEngineView_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQWebEngineView*>(self)->QWebEngineView::leaveEvent(event);
}

bool QWebEngineView_override_virtual_paintEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = std::move(slot_handle);
	return true;
}

void QWebEngineView_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	static_cast<MiqtVirtualQWebEngineView*>(self)->QWebEngineView::paintEvent(event);
}

bool QWebEngineView_override_virtual_moveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = std::move(slot_handle);
	return true;
}

void QWebEngineView_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQWebEngineView*>(self)->QWebEngineView::moveEvent(event);
}

bool QWebEngineView_override_virtual_resizeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = std::move(slot_handle);
	return true;
}

void QWebEngineView_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQWebEngineView*>(self)->QWebEngineView::resizeEvent(event);
}

bool QWebEngineView_override_virtual_tabletEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = std::move(slot_handle);
	return true;
}

void QWebEngineView_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQWebEngineView*>(self)->QWebEngineView::tabletEvent(event);
}

bool QWebEngineView_override_virtual_actionEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = std::move(slot_handle);
	return true;
}

void QWebEngineView_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQWebEngineView*>(self)->QWebEngineView::actionEvent(event);
}

bool QWebEngineView_override_virtual_nativeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = std::move(slot_handle);
	return true;
}

bool QWebEngineView_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQWebEngineView*>(self)->QWebEngineView::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QWebEngineView_override_virtual_changeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = std::move(slot_handle);
	return true;
}

void QWebEngineView_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQWebEngineView*>(self)->QWebEngineView::changeEvent(param1);
}

bool QWebEngineView_override_virtual_metric(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = std::move(slot_handle);
	return true;
}

int QWebEngineView_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQWebEngineView*>(self)->QWebEngineView::metric(static_cast<MiqtVirtualQWebEngineView::PaintDeviceMetric>(param1));
}

bool QWebEngineView_override_virtual_initPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = std::move(slot_handle);
	return true;
}

void QWebEngineView_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQWebEngineView*>(self)->QWebEngineView::initPainter(painter);
}

bool QWebEngineView_override_virtual_redirected(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = std::move(slot_handle);
	return true;
}

QPaintDevice* QWebEngineView_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQWebEngineView*>(self)->QWebEngineView::redirected(offset);
}

bool QWebEngineView_override_virtual_sharedPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = std::move(slot_handle);
	return true;
}

QPainter* QWebEngineView_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQWebEngineView*>(self)->QWebEngineView::sharedPainter();
}

bool QWebEngineView_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = std::move(slot_handle);
	return true;
}

void QWebEngineView_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQWebEngineView*>(self)->QWebEngineView::inputMethodEvent(param1);
}

bool QWebEngineView_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	self_cast->owns_return__inputMethodQuery = false;
	return true;
}

bool QWebEngineView_override_virtual_owned_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	self_cast->owns_return__inputMethodQuery = true;
	return true;
}

QVariant* QWebEngineView_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQWebEngineView*>(self)->QWebEngineView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QWebEngineView_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = std::move(slot_handle);
	return true;
}

bool QWebEngineView_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQWebEngineView*>(self)->QWebEngineView::focusNextPrevChild(next);
}

bool QWebEngineView_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QWebEngineView_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQWebEngineView*>(self)->QWebEngineView::eventFilter(watched, event);
}

bool QWebEngineView_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QWebEngineView_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQWebEngineView*>(self)->QWebEngineView::timerEvent(event);
}

bool QWebEngineView_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QWebEngineView_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQWebEngineView*>(self)->QWebEngineView::childEvent(event);
}

bool QWebEngineView_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QWebEngineView_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQWebEngineView*>(self)->QWebEngineView::customEvent(event);
}

bool QWebEngineView_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QWebEngineView_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQWebEngineView*>(self)->QWebEngineView::connectNotify(*signal);
}

bool QWebEngineView_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QWebEngineView> slot_handle(slot);
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QWebEngineView_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQWebEngineView*>(self)->QWebEngineView::disconnectNotify(*signal);
}

void QWebEngineView_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QWebEngineView_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QWebEngineView_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QWebEngineView_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QWebEngineView_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QWebEngineView_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QWebEngineView_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QWebEngineView_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QWebEngineView_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQWebEngineView* self_cast = dynamic_cast<MiqtVirtualQWebEngineView*>( (QWebEngineView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QWebEngineView_delete(QWebEngineView* self) {
	delete self;
}

