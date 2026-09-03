#include <memory>
#include <utility>
#include <QAction>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDesignerActionEditorInterface>
#include <QDesignerFormEditorInterface>
#include <QDesignerFormWindowInterface>
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
#include <abstractactioneditor.h>
#include "gen_abstractactioneditor.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QDesignerActionEditorInterface(intptr_t);
QDesignerFormEditorInterface* miqt_exec_callback_QDesignerActionEditorInterface_core(const QDesignerActionEditorInterface*, intptr_t);
void miqt_exec_callback_QDesignerActionEditorInterface_manageAction(QDesignerActionEditorInterface*, intptr_t, QAction*);
void miqt_exec_callback_QDesignerActionEditorInterface_unmanageAction(QDesignerActionEditorInterface*, intptr_t, QAction*);
void miqt_exec_callback_QDesignerActionEditorInterface_setFormWindow(QDesignerActionEditorInterface*, intptr_t, QDesignerFormWindowInterface*);
int miqt_exec_callback_QDesignerActionEditorInterface_devType(const QDesignerActionEditorInterface*, intptr_t);
void miqt_exec_callback_QDesignerActionEditorInterface_setVisible(QDesignerActionEditorInterface*, intptr_t, bool);
QSize* miqt_exec_callback_QDesignerActionEditorInterface_sizeHint(const QDesignerActionEditorInterface*, intptr_t);
QSize* miqt_exec_callback_QDesignerActionEditorInterface_minimumSizeHint(const QDesignerActionEditorInterface*, intptr_t);
int miqt_exec_callback_QDesignerActionEditorInterface_heightForWidth(const QDesignerActionEditorInterface*, intptr_t, int);
bool miqt_exec_callback_QDesignerActionEditorInterface_hasHeightForWidth(const QDesignerActionEditorInterface*, intptr_t);
QPaintEngine* miqt_exec_callback_QDesignerActionEditorInterface_paintEngine(const QDesignerActionEditorInterface*, intptr_t);
bool miqt_exec_callback_QDesignerActionEditorInterface_event(QDesignerActionEditorInterface*, intptr_t, QEvent*);
void miqt_exec_callback_QDesignerActionEditorInterface_mousePressEvent(QDesignerActionEditorInterface*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDesignerActionEditorInterface_mouseReleaseEvent(QDesignerActionEditorInterface*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDesignerActionEditorInterface_mouseDoubleClickEvent(QDesignerActionEditorInterface*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDesignerActionEditorInterface_mouseMoveEvent(QDesignerActionEditorInterface*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDesignerActionEditorInterface_wheelEvent(QDesignerActionEditorInterface*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QDesignerActionEditorInterface_keyPressEvent(QDesignerActionEditorInterface*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QDesignerActionEditorInterface_keyReleaseEvent(QDesignerActionEditorInterface*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QDesignerActionEditorInterface_focusInEvent(QDesignerActionEditorInterface*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QDesignerActionEditorInterface_focusOutEvent(QDesignerActionEditorInterface*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QDesignerActionEditorInterface_enterEvent(QDesignerActionEditorInterface*, intptr_t, QEvent*);
void miqt_exec_callback_QDesignerActionEditorInterface_leaveEvent(QDesignerActionEditorInterface*, intptr_t, QEvent*);
void miqt_exec_callback_QDesignerActionEditorInterface_paintEvent(QDesignerActionEditorInterface*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QDesignerActionEditorInterface_moveEvent(QDesignerActionEditorInterface*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QDesignerActionEditorInterface_resizeEvent(QDesignerActionEditorInterface*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QDesignerActionEditorInterface_closeEvent(QDesignerActionEditorInterface*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QDesignerActionEditorInterface_contextMenuEvent(QDesignerActionEditorInterface*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QDesignerActionEditorInterface_tabletEvent(QDesignerActionEditorInterface*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QDesignerActionEditorInterface_actionEvent(QDesignerActionEditorInterface*, intptr_t, QActionEvent*);
void miqt_exec_callback_QDesignerActionEditorInterface_dragEnterEvent(QDesignerActionEditorInterface*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QDesignerActionEditorInterface_dragMoveEvent(QDesignerActionEditorInterface*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QDesignerActionEditorInterface_dragLeaveEvent(QDesignerActionEditorInterface*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QDesignerActionEditorInterface_dropEvent(QDesignerActionEditorInterface*, intptr_t, QDropEvent*);
void miqt_exec_callback_QDesignerActionEditorInterface_showEvent(QDesignerActionEditorInterface*, intptr_t, QShowEvent*);
void miqt_exec_callback_QDesignerActionEditorInterface_hideEvent(QDesignerActionEditorInterface*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QDesignerActionEditorInterface_nativeEvent(QDesignerActionEditorInterface*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QDesignerActionEditorInterface_changeEvent(QDesignerActionEditorInterface*, intptr_t, QEvent*);
int miqt_exec_callback_QDesignerActionEditorInterface_metric(const QDesignerActionEditorInterface*, intptr_t, int);
void miqt_exec_callback_QDesignerActionEditorInterface_initPainter(const QDesignerActionEditorInterface*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QDesignerActionEditorInterface_redirected(const QDesignerActionEditorInterface*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QDesignerActionEditorInterface_sharedPainter(const QDesignerActionEditorInterface*, intptr_t);
void miqt_exec_callback_QDesignerActionEditorInterface_inputMethodEvent(QDesignerActionEditorInterface*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QDesignerActionEditorInterface_inputMethodQuery(const QDesignerActionEditorInterface*, intptr_t, int);
bool miqt_exec_callback_QDesignerActionEditorInterface_focusNextPrevChild(QDesignerActionEditorInterface*, intptr_t, bool);
bool miqt_exec_callback_QDesignerActionEditorInterface_eventFilter(QDesignerActionEditorInterface*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QDesignerActionEditorInterface_timerEvent(QDesignerActionEditorInterface*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QDesignerActionEditorInterface_childEvent(QDesignerActionEditorInterface*, intptr_t, QChildEvent*);
void miqt_exec_callback_QDesignerActionEditorInterface_customEvent(QDesignerActionEditorInterface*, intptr_t, QEvent*);
void miqt_exec_callback_QDesignerActionEditorInterface_connectNotify(QDesignerActionEditorInterface*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDesignerActionEditorInterface_disconnectNotify(QDesignerActionEditorInterface*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQDesignerActionEditorInterface final : public QDesignerActionEditorInterface {
public:

	MiqtVirtualQDesignerActionEditorInterface(QWidget* parent): QDesignerActionEditorInterface(parent) {}
	MiqtVirtualQDesignerActionEditorInterface(QWidget* parent, Qt::WindowFlags flags): QDesignerActionEditorInterface(parent, flags) {}

	virtual ~MiqtVirtualQDesignerActionEditorInterface() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__core;

	// Subclass to allow providing a Go implementation
	virtual QDesignerFormEditorInterface* core() const override {
		if (!handle__core) {
			return QDesignerActionEditorInterface::core();
		}

		QDesignerFormEditorInterface* callback_return_value = miqt_exec_callback_QDesignerActionEditorInterface_core(this, handle__core.value());
		return callback_return_value;
	}

	friend QDesignerFormEditorInterface* QDesignerActionEditorInterface_virtualbase_core(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__manageAction;

	// Subclass to allow providing a Go implementation
	virtual void manageAction(QAction* action) override {
		if (!handle__manageAction) {
			return; // Pure virtual, there is no base we can call
		}

		QAction* sigval1 = action;
		miqt_exec_callback_QDesignerActionEditorInterface_manageAction(this, handle__manageAction.value(), sigval1);

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__unmanageAction;

	// Subclass to allow providing a Go implementation
	virtual void unmanageAction(QAction* action) override {
		if (!handle__unmanageAction) {
			return; // Pure virtual, there is no base we can call
		}

		QAction* sigval1 = action;
		miqt_exec_callback_QDesignerActionEditorInterface_unmanageAction(this, handle__unmanageAction.value(), sigval1);

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__setFormWindow;

	// Subclass to allow providing a Go implementation
	virtual void setFormWindow(QDesignerFormWindowInterface* formWindow) override {
		if (!handle__setFormWindow) {
			return; // Pure virtual, there is no base we can call
		}

		QDesignerFormWindowInterface* sigval1 = formWindow;
		miqt_exec_callback_QDesignerActionEditorInterface_setFormWindow(this, handle__setFormWindow.value(), sigval1);

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__devType;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (!handle__devType) {
			return QDesignerActionEditorInterface::devType();
		}

		int callback_return_value = miqt_exec_callback_QDesignerActionEditorInterface_devType(this, handle__devType.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QDesignerActionEditorInterface_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__setVisible;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (!handle__setVisible) {
			QDesignerActionEditorInterface::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QDesignerActionEditorInterface_setVisible(this, handle__setVisible.value(), sigval1);

	}

	friend void QDesignerActionEditorInterface_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__sizeHint;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (!handle__sizeHint) {
			return QDesignerActionEditorInterface::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QDesignerActionEditorInterface_sizeHint(this, handle__sizeHint.value());
		return *callback_return_value;
	}

	friend QSize* QDesignerActionEditorInterface_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__minimumSizeHint;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (!handle__minimumSizeHint) {
			return QDesignerActionEditorInterface::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QDesignerActionEditorInterface_minimumSizeHint(this, handle__minimumSizeHint.value());
		return *callback_return_value;
	}

	friend QSize* QDesignerActionEditorInterface_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__heightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (!handle__heightForWidth) {
			return QDesignerActionEditorInterface::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QDesignerActionEditorInterface_heightForWidth(this, handle__heightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QDesignerActionEditorInterface_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__hasHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (!handle__hasHeightForWidth) {
			return QDesignerActionEditorInterface::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QDesignerActionEditorInterface_hasHeightForWidth(this, handle__hasHeightForWidth.value());
		return callback_return_value;
	}

	friend bool QDesignerActionEditorInterface_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__paintEngine;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (!handle__paintEngine) {
			return QDesignerActionEditorInterface::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QDesignerActionEditorInterface_paintEngine(this, handle__paintEngine.value());
		return callback_return_value;
	}

	friend QPaintEngine* QDesignerActionEditorInterface_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QDesignerActionEditorInterface::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QDesignerActionEditorInterface_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QDesignerActionEditorInterface_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__mousePressEvent;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (!handle__mousePressEvent) {
			QDesignerActionEditorInterface::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QDesignerActionEditorInterface_mousePressEvent(this, handle__mousePressEvent.value(), sigval1);

	}

	friend void QDesignerActionEditorInterface_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__mouseReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (!handle__mouseReleaseEvent) {
			QDesignerActionEditorInterface::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QDesignerActionEditorInterface_mouseReleaseEvent(this, handle__mouseReleaseEvent.value(), sigval1);

	}

	friend void QDesignerActionEditorInterface_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__mouseDoubleClickEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (!handle__mouseDoubleClickEvent) {
			QDesignerActionEditorInterface::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QDesignerActionEditorInterface_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent.value(), sigval1);

	}

	friend void QDesignerActionEditorInterface_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__mouseMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (!handle__mouseMoveEvent) {
			QDesignerActionEditorInterface::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QDesignerActionEditorInterface_mouseMoveEvent(this, handle__mouseMoveEvent.value(), sigval1);

	}

	friend void QDesignerActionEditorInterface_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__wheelEvent;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (!handle__wheelEvent) {
			QDesignerActionEditorInterface::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QDesignerActionEditorInterface_wheelEvent(this, handle__wheelEvent.value(), sigval1);

	}

	friend void QDesignerActionEditorInterface_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__keyPressEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (!handle__keyPressEvent) {
			QDesignerActionEditorInterface::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QDesignerActionEditorInterface_keyPressEvent(this, handle__keyPressEvent.value(), sigval1);

	}

	friend void QDesignerActionEditorInterface_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__keyReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (!handle__keyReleaseEvent) {
			QDesignerActionEditorInterface::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QDesignerActionEditorInterface_keyReleaseEvent(this, handle__keyReleaseEvent.value(), sigval1);

	}

	friend void QDesignerActionEditorInterface_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__focusInEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (!handle__focusInEvent) {
			QDesignerActionEditorInterface::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QDesignerActionEditorInterface_focusInEvent(this, handle__focusInEvent.value(), sigval1);

	}

	friend void QDesignerActionEditorInterface_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__focusOutEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (!handle__focusOutEvent) {
			QDesignerActionEditorInterface::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QDesignerActionEditorInterface_focusOutEvent(this, handle__focusOutEvent.value(), sigval1);

	}

	friend void QDesignerActionEditorInterface_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__enterEvent;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (!handle__enterEvent) {
			QDesignerActionEditorInterface::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QDesignerActionEditorInterface_enterEvent(this, handle__enterEvent.value(), sigval1);

	}

	friend void QDesignerActionEditorInterface_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__leaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (!handle__leaveEvent) {
			QDesignerActionEditorInterface::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QDesignerActionEditorInterface_leaveEvent(this, handle__leaveEvent.value(), sigval1);

	}

	friend void QDesignerActionEditorInterface_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__paintEvent;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (!handle__paintEvent) {
			QDesignerActionEditorInterface::paintEvent(event);
			return;
		}

		QPaintEvent* sigval1 = event;
		miqt_exec_callback_QDesignerActionEditorInterface_paintEvent(this, handle__paintEvent.value(), sigval1);

	}

	friend void QDesignerActionEditorInterface_virtualbase_paintEvent(void* self, QPaintEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__moveEvent;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (!handle__moveEvent) {
			QDesignerActionEditorInterface::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QDesignerActionEditorInterface_moveEvent(this, handle__moveEvent.value(), sigval1);

	}

	friend void QDesignerActionEditorInterface_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__resizeEvent;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (!handle__resizeEvent) {
			QDesignerActionEditorInterface::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QDesignerActionEditorInterface_resizeEvent(this, handle__resizeEvent.value(), sigval1);

	}

	friend void QDesignerActionEditorInterface_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__closeEvent;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (!handle__closeEvent) {
			QDesignerActionEditorInterface::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QDesignerActionEditorInterface_closeEvent(this, handle__closeEvent.value(), sigval1);

	}

	friend void QDesignerActionEditorInterface_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__contextMenuEvent;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (!handle__contextMenuEvent) {
			QDesignerActionEditorInterface::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QDesignerActionEditorInterface_contextMenuEvent(this, handle__contextMenuEvent.value(), sigval1);

	}

	friend void QDesignerActionEditorInterface_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__tabletEvent;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (!handle__tabletEvent) {
			QDesignerActionEditorInterface::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QDesignerActionEditorInterface_tabletEvent(this, handle__tabletEvent.value(), sigval1);

	}

	friend void QDesignerActionEditorInterface_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__actionEvent;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (!handle__actionEvent) {
			QDesignerActionEditorInterface::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QDesignerActionEditorInterface_actionEvent(this, handle__actionEvent.value(), sigval1);

	}

	friend void QDesignerActionEditorInterface_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__dragEnterEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (!handle__dragEnterEvent) {
			QDesignerActionEditorInterface::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QDesignerActionEditorInterface_dragEnterEvent(this, handle__dragEnterEvent.value(), sigval1);

	}

	friend void QDesignerActionEditorInterface_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__dragMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (!handle__dragMoveEvent) {
			QDesignerActionEditorInterface::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QDesignerActionEditorInterface_dragMoveEvent(this, handle__dragMoveEvent.value(), sigval1);

	}

	friend void QDesignerActionEditorInterface_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__dragLeaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (!handle__dragLeaveEvent) {
			QDesignerActionEditorInterface::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QDesignerActionEditorInterface_dragLeaveEvent(this, handle__dragLeaveEvent.value(), sigval1);

	}

	friend void QDesignerActionEditorInterface_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__dropEvent;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (!handle__dropEvent) {
			QDesignerActionEditorInterface::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QDesignerActionEditorInterface_dropEvent(this, handle__dropEvent.value(), sigval1);

	}

	friend void QDesignerActionEditorInterface_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__showEvent;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (!handle__showEvent) {
			QDesignerActionEditorInterface::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QDesignerActionEditorInterface_showEvent(this, handle__showEvent.value(), sigval1);

	}

	friend void QDesignerActionEditorInterface_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__hideEvent;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (!handle__hideEvent) {
			QDesignerActionEditorInterface::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QDesignerActionEditorInterface_hideEvent(this, handle__hideEvent.value(), sigval1);

	}

	friend void QDesignerActionEditorInterface_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__nativeEvent;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (!handle__nativeEvent) {
			return QDesignerActionEditorInterface::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QDesignerActionEditorInterface_nativeEvent(this, handle__nativeEvent.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QDesignerActionEditorInterface_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__changeEvent;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (!handle__changeEvent) {
			QDesignerActionEditorInterface::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QDesignerActionEditorInterface_changeEvent(this, handle__changeEvent.value(), sigval1);

	}

	friend void QDesignerActionEditorInterface_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__metric;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (!handle__metric) {
			return QDesignerActionEditorInterface::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QDesignerActionEditorInterface_metric(this, handle__metric.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QDesignerActionEditorInterface_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__initPainter;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (!handle__initPainter) {
			QDesignerActionEditorInterface::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QDesignerActionEditorInterface_initPainter(this, handle__initPainter.value(), sigval1);

	}

	friend void QDesignerActionEditorInterface_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__redirected;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (!handle__redirected) {
			return QDesignerActionEditorInterface::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QDesignerActionEditorInterface_redirected(this, handle__redirected.value(), sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QDesignerActionEditorInterface_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__sharedPainter;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (!handle__sharedPainter) {
			return QDesignerActionEditorInterface::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QDesignerActionEditorInterface_sharedPainter(this, handle__sharedPainter.value());
		return callback_return_value;
	}

	friend QPainter* QDesignerActionEditorInterface_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__inputMethodEvent;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (!handle__inputMethodEvent) {
			QDesignerActionEditorInterface::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QDesignerActionEditorInterface_inputMethodEvent(this, handle__inputMethodEvent.value(), sigval1);

	}

	friend void QDesignerActionEditorInterface_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__inputMethodQuery;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (!handle__inputMethodQuery) {
			return QDesignerActionEditorInterface::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QDesignerActionEditorInterface_inputMethodQuery(this, handle__inputMethodQuery.value(), sigval1);
		return *callback_return_value;
	}

	friend QVariant* QDesignerActionEditorInterface_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__focusNextPrevChild;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (!handle__focusNextPrevChild) {
			return QDesignerActionEditorInterface::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QDesignerActionEditorInterface_focusNextPrevChild(this, handle__focusNextPrevChild.value(), sigval1);
		return callback_return_value;
	}

	friend bool QDesignerActionEditorInterface_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QDesignerActionEditorInterface::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QDesignerActionEditorInterface_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QDesignerActionEditorInterface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QDesignerActionEditorInterface::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QDesignerActionEditorInterface_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QDesignerActionEditorInterface_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QDesignerActionEditorInterface::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QDesignerActionEditorInterface_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QDesignerActionEditorInterface_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QDesignerActionEditorInterface::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QDesignerActionEditorInterface_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QDesignerActionEditorInterface_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QDesignerActionEditorInterface::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QDesignerActionEditorInterface_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QDesignerActionEditorInterface_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QDesignerActionEditorInterface::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QDesignerActionEditorInterface_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QDesignerActionEditorInterface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QDesignerActionEditorInterface_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QDesignerActionEditorInterface_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QDesignerActionEditorInterface_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QDesignerActionEditorInterface_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QDesignerActionEditorInterface_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QDesignerActionEditorInterface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QDesignerActionEditorInterface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QDesignerActionEditorInterface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QDesignerActionEditorInterface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QDesignerActionEditorInterface* QDesignerActionEditorInterface_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQDesignerActionEditorInterface(parent);
}

QDesignerActionEditorInterface* QDesignerActionEditorInterface_new2(QWidget* parent, int flags) {
	return new (std::nothrow) MiqtVirtualQDesignerActionEditorInterface(parent, static_cast<Qt::WindowFlags>(flags));
}

void QDesignerActionEditorInterface_virtbase(QDesignerActionEditorInterface* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QDesignerActionEditorInterface_metaObject(const QDesignerActionEditorInterface* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDesignerActionEditorInterface_metacast(QDesignerActionEditorInterface* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDesignerActionEditorInterface_tr(const char* s) {
	QString _ret = QDesignerActionEditorInterface::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerActionEditorInterface_trUtf8(const char* s) {
	QString _ret = QDesignerActionEditorInterface::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QDesignerFormEditorInterface* QDesignerActionEditorInterface_core(const QDesignerActionEditorInterface* self) {
	return self->core();
}

void QDesignerActionEditorInterface_manageAction(QDesignerActionEditorInterface* self, QAction* action) {
	self->manageAction(action);
}

void QDesignerActionEditorInterface_unmanageAction(QDesignerActionEditorInterface* self, QAction* action) {
	self->unmanageAction(action);
}

void QDesignerActionEditorInterface_setFormWindow(QDesignerActionEditorInterface* self, QDesignerFormWindowInterface* formWindow) {
	self->setFormWindow(formWindow);
}

struct miqt_string QDesignerActionEditorInterface_tr2(const char* s, const char* c) {
	QString _ret = QDesignerActionEditorInterface::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerActionEditorInterface_tr3(const char* s, const char* c, int n) {
	QString _ret = QDesignerActionEditorInterface::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerActionEditorInterface_trUtf82(const char* s, const char* c) {
	QString _ret = QDesignerActionEditorInterface::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDesignerActionEditorInterface_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QDesignerActionEditorInterface::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDesignerActionEditorInterface_override_virtual_core(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__core = std::move(slot_handle);
	return true;
}

QDesignerFormEditorInterface* QDesignerActionEditorInterface_virtualbase_core(const void* self) {
	return static_cast<const MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::core();
}

bool QDesignerActionEditorInterface_override_virtual_manageAction(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__manageAction = std::move(slot_handle);
	return true;
}

bool QDesignerActionEditorInterface_override_virtual_unmanageAction(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__unmanageAction = std::move(slot_handle);
	return true;
}

bool QDesignerActionEditorInterface_override_virtual_setFormWindow(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFormWindow = std::move(slot_handle);
	return true;
}

bool QDesignerActionEditorInterface_override_virtual_devType(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = std::move(slot_handle);
	return true;
}

int QDesignerActionEditorInterface_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::devType();
}

bool QDesignerActionEditorInterface_override_virtual_setVisible(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = std::move(slot_handle);
	return true;
}

void QDesignerActionEditorInterface_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::setVisible(visible);
}

bool QDesignerActionEditorInterface_override_virtual_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	return true;
}

QSize* QDesignerActionEditorInterface_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::sizeHint());
}

bool QDesignerActionEditorInterface_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	return true;
}

QSize* QDesignerActionEditorInterface_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::minimumSizeHint());
}

bool QDesignerActionEditorInterface_override_virtual_heightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = std::move(slot_handle);
	return true;
}

int QDesignerActionEditorInterface_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::heightForWidth(static_cast<int>(param1));
}

bool QDesignerActionEditorInterface_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = std::move(slot_handle);
	return true;
}

bool QDesignerActionEditorInterface_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::hasHeightForWidth();
}

bool QDesignerActionEditorInterface_override_virtual_paintEngine(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = std::move(slot_handle);
	return true;
}

QPaintEngine* QDesignerActionEditorInterface_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::paintEngine();
}

bool QDesignerActionEditorInterface_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QDesignerActionEditorInterface_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::event(event);
}

bool QDesignerActionEditorInterface_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = std::move(slot_handle);
	return true;
}

void QDesignerActionEditorInterface_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::mousePressEvent(event);
}

bool QDesignerActionEditorInterface_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = std::move(slot_handle);
	return true;
}

void QDesignerActionEditorInterface_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::mouseReleaseEvent(event);
}

bool QDesignerActionEditorInterface_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = std::move(slot_handle);
	return true;
}

void QDesignerActionEditorInterface_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::mouseDoubleClickEvent(event);
}

bool QDesignerActionEditorInterface_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = std::move(slot_handle);
	return true;
}

void QDesignerActionEditorInterface_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::mouseMoveEvent(event);
}

bool QDesignerActionEditorInterface_override_virtual_wheelEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = std::move(slot_handle);
	return true;
}

void QDesignerActionEditorInterface_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::wheelEvent(event);
}

bool QDesignerActionEditorInterface_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = std::move(slot_handle);
	return true;
}

void QDesignerActionEditorInterface_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::keyPressEvent(event);
}

bool QDesignerActionEditorInterface_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = std::move(slot_handle);
	return true;
}

void QDesignerActionEditorInterface_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::keyReleaseEvent(event);
}

bool QDesignerActionEditorInterface_override_virtual_focusInEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = std::move(slot_handle);
	return true;
}

void QDesignerActionEditorInterface_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::focusInEvent(event);
}

bool QDesignerActionEditorInterface_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = std::move(slot_handle);
	return true;
}

void QDesignerActionEditorInterface_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::focusOutEvent(event);
}

bool QDesignerActionEditorInterface_override_virtual_enterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = std::move(slot_handle);
	return true;
}

void QDesignerActionEditorInterface_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::enterEvent(event);
}

bool QDesignerActionEditorInterface_override_virtual_leaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = std::move(slot_handle);
	return true;
}

void QDesignerActionEditorInterface_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::leaveEvent(event);
}

bool QDesignerActionEditorInterface_override_virtual_paintEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = std::move(slot_handle);
	return true;
}

void QDesignerActionEditorInterface_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	static_cast<MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::paintEvent(event);
}

bool QDesignerActionEditorInterface_override_virtual_moveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = std::move(slot_handle);
	return true;
}

void QDesignerActionEditorInterface_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::moveEvent(event);
}

bool QDesignerActionEditorInterface_override_virtual_resizeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = std::move(slot_handle);
	return true;
}

void QDesignerActionEditorInterface_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::resizeEvent(event);
}

bool QDesignerActionEditorInterface_override_virtual_closeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = std::move(slot_handle);
	return true;
}

void QDesignerActionEditorInterface_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::closeEvent(event);
}

bool QDesignerActionEditorInterface_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = std::move(slot_handle);
	return true;
}

void QDesignerActionEditorInterface_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::contextMenuEvent(event);
}

bool QDesignerActionEditorInterface_override_virtual_tabletEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = std::move(slot_handle);
	return true;
}

void QDesignerActionEditorInterface_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::tabletEvent(event);
}

bool QDesignerActionEditorInterface_override_virtual_actionEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = std::move(slot_handle);
	return true;
}

void QDesignerActionEditorInterface_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::actionEvent(event);
}

bool QDesignerActionEditorInterface_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = std::move(slot_handle);
	return true;
}

void QDesignerActionEditorInterface_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::dragEnterEvent(event);
}

bool QDesignerActionEditorInterface_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = std::move(slot_handle);
	return true;
}

void QDesignerActionEditorInterface_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::dragMoveEvent(event);
}

bool QDesignerActionEditorInterface_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = std::move(slot_handle);
	return true;
}

void QDesignerActionEditorInterface_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::dragLeaveEvent(event);
}

bool QDesignerActionEditorInterface_override_virtual_dropEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = std::move(slot_handle);
	return true;
}

void QDesignerActionEditorInterface_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::dropEvent(event);
}

bool QDesignerActionEditorInterface_override_virtual_showEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = std::move(slot_handle);
	return true;
}

void QDesignerActionEditorInterface_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::showEvent(event);
}

bool QDesignerActionEditorInterface_override_virtual_hideEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = std::move(slot_handle);
	return true;
}

void QDesignerActionEditorInterface_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::hideEvent(event);
}

bool QDesignerActionEditorInterface_override_virtual_nativeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = std::move(slot_handle);
	return true;
}

bool QDesignerActionEditorInterface_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QDesignerActionEditorInterface_override_virtual_changeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = std::move(slot_handle);
	return true;
}

void QDesignerActionEditorInterface_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::changeEvent(param1);
}

bool QDesignerActionEditorInterface_override_virtual_metric(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = std::move(slot_handle);
	return true;
}

int QDesignerActionEditorInterface_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::metric(static_cast<MiqtVirtualQDesignerActionEditorInterface::PaintDeviceMetric>(param1));
}

bool QDesignerActionEditorInterface_override_virtual_initPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = std::move(slot_handle);
	return true;
}

void QDesignerActionEditorInterface_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::initPainter(painter);
}

bool QDesignerActionEditorInterface_override_virtual_redirected(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = std::move(slot_handle);
	return true;
}

QPaintDevice* QDesignerActionEditorInterface_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::redirected(offset);
}

bool QDesignerActionEditorInterface_override_virtual_sharedPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = std::move(slot_handle);
	return true;
}

QPainter* QDesignerActionEditorInterface_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::sharedPainter();
}

bool QDesignerActionEditorInterface_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = std::move(slot_handle);
	return true;
}

void QDesignerActionEditorInterface_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::inputMethodEvent(param1);
}

bool QDesignerActionEditorInterface_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	return true;
}

QVariant* QDesignerActionEditorInterface_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QDesignerActionEditorInterface_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = std::move(slot_handle);
	return true;
}

bool QDesignerActionEditorInterface_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::focusNextPrevChild(next);
}

bool QDesignerActionEditorInterface_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QDesignerActionEditorInterface_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::eventFilter(watched, event);
}

bool QDesignerActionEditorInterface_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QDesignerActionEditorInterface_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::timerEvent(event);
}

bool QDesignerActionEditorInterface_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QDesignerActionEditorInterface_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::childEvent(event);
}

bool QDesignerActionEditorInterface_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QDesignerActionEditorInterface_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::customEvent(event);
}

bool QDesignerActionEditorInterface_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QDesignerActionEditorInterface_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::connectNotify(*signal);
}

bool QDesignerActionEditorInterface_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDesignerActionEditorInterface> slot_handle(slot);
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QDesignerActionEditorInterface_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQDesignerActionEditorInterface*>(self)->QDesignerActionEditorInterface::disconnectNotify(*signal);
}

void QDesignerActionEditorInterface_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QDesignerActionEditorInterface_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QDesignerActionEditorInterface_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QDesignerActionEditorInterface_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QDesignerActionEditorInterface_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QDesignerActionEditorInterface_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QDesignerActionEditorInterface_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QDesignerActionEditorInterface_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QDesignerActionEditorInterface_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQDesignerActionEditorInterface* self_cast = dynamic_cast<MiqtVirtualQDesignerActionEditorInterface*>( (QDesignerActionEditorInterface*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QDesignerActionEditorInterface_delete(QDesignerActionEditorInterface* self) {
	delete self;
}

