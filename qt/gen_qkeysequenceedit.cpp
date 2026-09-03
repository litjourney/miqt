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
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QKeySequence>
#include <QKeySequenceEdit>
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
#include <qkeysequenceedit.h>
#include "gen_qkeysequenceedit.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QKeySequenceEdit(intptr_t);
void miqt_exec_callback_QKeySequenceEdit_editingFinished(intptr_t);
void miqt_exec_callback_QKeySequenceEdit_keySequenceChanged(intptr_t, QKeySequence*);
bool miqt_exec_callback_QKeySequenceEdit_event(QKeySequenceEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QKeySequenceEdit_keyPressEvent(QKeySequenceEdit*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QKeySequenceEdit_keyReleaseEvent(QKeySequenceEdit*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QKeySequenceEdit_timerEvent(QKeySequenceEdit*, intptr_t, QTimerEvent*);
int miqt_exec_callback_QKeySequenceEdit_devType(const QKeySequenceEdit*, intptr_t);
void miqt_exec_callback_QKeySequenceEdit_setVisible(QKeySequenceEdit*, intptr_t, bool);
QSize* miqt_exec_callback_QKeySequenceEdit_sizeHint(const QKeySequenceEdit*, intptr_t);
QSize* miqt_exec_callback_QKeySequenceEdit_minimumSizeHint(const QKeySequenceEdit*, intptr_t);
int miqt_exec_callback_QKeySequenceEdit_heightForWidth(const QKeySequenceEdit*, intptr_t, int);
bool miqt_exec_callback_QKeySequenceEdit_hasHeightForWidth(const QKeySequenceEdit*, intptr_t);
QPaintEngine* miqt_exec_callback_QKeySequenceEdit_paintEngine(const QKeySequenceEdit*, intptr_t);
void miqt_exec_callback_QKeySequenceEdit_mousePressEvent(QKeySequenceEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QKeySequenceEdit_mouseReleaseEvent(QKeySequenceEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QKeySequenceEdit_mouseDoubleClickEvent(QKeySequenceEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QKeySequenceEdit_mouseMoveEvent(QKeySequenceEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QKeySequenceEdit_wheelEvent(QKeySequenceEdit*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QKeySequenceEdit_focusInEvent(QKeySequenceEdit*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QKeySequenceEdit_focusOutEvent(QKeySequenceEdit*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QKeySequenceEdit_enterEvent(QKeySequenceEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QKeySequenceEdit_leaveEvent(QKeySequenceEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QKeySequenceEdit_paintEvent(QKeySequenceEdit*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QKeySequenceEdit_moveEvent(QKeySequenceEdit*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QKeySequenceEdit_resizeEvent(QKeySequenceEdit*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QKeySequenceEdit_closeEvent(QKeySequenceEdit*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QKeySequenceEdit_contextMenuEvent(QKeySequenceEdit*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QKeySequenceEdit_tabletEvent(QKeySequenceEdit*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QKeySequenceEdit_actionEvent(QKeySequenceEdit*, intptr_t, QActionEvent*);
void miqt_exec_callback_QKeySequenceEdit_dragEnterEvent(QKeySequenceEdit*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QKeySequenceEdit_dragMoveEvent(QKeySequenceEdit*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QKeySequenceEdit_dragLeaveEvent(QKeySequenceEdit*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QKeySequenceEdit_dropEvent(QKeySequenceEdit*, intptr_t, QDropEvent*);
void miqt_exec_callback_QKeySequenceEdit_showEvent(QKeySequenceEdit*, intptr_t, QShowEvent*);
void miqt_exec_callback_QKeySequenceEdit_hideEvent(QKeySequenceEdit*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QKeySequenceEdit_nativeEvent(QKeySequenceEdit*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QKeySequenceEdit_changeEvent(QKeySequenceEdit*, intptr_t, QEvent*);
int miqt_exec_callback_QKeySequenceEdit_metric(const QKeySequenceEdit*, intptr_t, int);
void miqt_exec_callback_QKeySequenceEdit_initPainter(const QKeySequenceEdit*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QKeySequenceEdit_redirected(const QKeySequenceEdit*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QKeySequenceEdit_sharedPainter(const QKeySequenceEdit*, intptr_t);
void miqt_exec_callback_QKeySequenceEdit_inputMethodEvent(QKeySequenceEdit*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QKeySequenceEdit_inputMethodQuery(const QKeySequenceEdit*, intptr_t, int);
bool miqt_exec_callback_QKeySequenceEdit_focusNextPrevChild(QKeySequenceEdit*, intptr_t, bool);
bool miqt_exec_callback_QKeySequenceEdit_eventFilter(QKeySequenceEdit*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QKeySequenceEdit_childEvent(QKeySequenceEdit*, intptr_t, QChildEvent*);
void miqt_exec_callback_QKeySequenceEdit_customEvent(QKeySequenceEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QKeySequenceEdit_connectNotify(QKeySequenceEdit*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QKeySequenceEdit_disconnectNotify(QKeySequenceEdit*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQKeySequenceEdit final : public QKeySequenceEdit {
public:

	MiqtVirtualQKeySequenceEdit(QWidget* parent): QKeySequenceEdit(parent) {}
	MiqtVirtualQKeySequenceEdit(): QKeySequenceEdit() {}
	MiqtVirtualQKeySequenceEdit(const QKeySequence& keySequence): QKeySequenceEdit(keySequence) {}
	MiqtVirtualQKeySequenceEdit(const QKeySequence& keySequence, QWidget* parent): QKeySequenceEdit(keySequence, parent) {}

	virtual ~MiqtVirtualQKeySequenceEdit() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (!handle__event) {
			return QKeySequenceEdit::event(param1);
		}

		QEvent* sigval1 = param1;
		bool callback_return_value = miqt_exec_callback_QKeySequenceEdit_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QKeySequenceEdit_virtualbase_event(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__keyPressEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (!handle__keyPressEvent) {
			QKeySequenceEdit::keyPressEvent(param1);
			return;
		}

		QKeyEvent* sigval1 = param1;
		miqt_exec_callback_QKeySequenceEdit_keyPressEvent(this, handle__keyPressEvent.value(), sigval1);

	}

	friend void QKeySequenceEdit_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__keyReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* param1) override {
		if (!handle__keyReleaseEvent) {
			QKeySequenceEdit::keyReleaseEvent(param1);
			return;
		}

		QKeyEvent* sigval1 = param1;
		miqt_exec_callback_QKeySequenceEdit_keyReleaseEvent(this, handle__keyReleaseEvent.value(), sigval1);

	}

	friend void QKeySequenceEdit_virtualbase_keyReleaseEvent(void* self, QKeyEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* param1) override {
		if (!handle__timerEvent) {
			QKeySequenceEdit::timerEvent(param1);
			return;
		}

		QTimerEvent* sigval1 = param1;
		miqt_exec_callback_QKeySequenceEdit_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QKeySequenceEdit_virtualbase_timerEvent(void* self, QTimerEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__devType;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (!handle__devType) {
			return QKeySequenceEdit::devType();
		}

		int callback_return_value = miqt_exec_callback_QKeySequenceEdit_devType(this, handle__devType.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QKeySequenceEdit_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__setVisible;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (!handle__setVisible) {
			QKeySequenceEdit::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QKeySequenceEdit_setVisible(this, handle__setVisible.value(), sigval1);

	}

	friend void QKeySequenceEdit_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__sizeHint;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (!handle__sizeHint) {
			return QKeySequenceEdit::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QKeySequenceEdit_sizeHint(this, handle__sizeHint.value());
		return *callback_return_value;
	}

	friend QSize* QKeySequenceEdit_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__minimumSizeHint;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (!handle__minimumSizeHint) {
			return QKeySequenceEdit::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QKeySequenceEdit_minimumSizeHint(this, handle__minimumSizeHint.value());
		return *callback_return_value;
	}

	friend QSize* QKeySequenceEdit_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__heightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (!handle__heightForWidth) {
			return QKeySequenceEdit::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QKeySequenceEdit_heightForWidth(this, handle__heightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QKeySequenceEdit_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__hasHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (!handle__hasHeightForWidth) {
			return QKeySequenceEdit::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QKeySequenceEdit_hasHeightForWidth(this, handle__hasHeightForWidth.value());
		return callback_return_value;
	}

	friend bool QKeySequenceEdit_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__paintEngine;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (!handle__paintEngine) {
			return QKeySequenceEdit::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QKeySequenceEdit_paintEngine(this, handle__paintEngine.value());
		return callback_return_value;
	}

	friend QPaintEngine* QKeySequenceEdit_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__mousePressEvent;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (!handle__mousePressEvent) {
			QKeySequenceEdit::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QKeySequenceEdit_mousePressEvent(this, handle__mousePressEvent.value(), sigval1);

	}

	friend void QKeySequenceEdit_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__mouseReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (!handle__mouseReleaseEvent) {
			QKeySequenceEdit::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QKeySequenceEdit_mouseReleaseEvent(this, handle__mouseReleaseEvent.value(), sigval1);

	}

	friend void QKeySequenceEdit_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__mouseDoubleClickEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (!handle__mouseDoubleClickEvent) {
			QKeySequenceEdit::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QKeySequenceEdit_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent.value(), sigval1);

	}

	friend void QKeySequenceEdit_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__mouseMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (!handle__mouseMoveEvent) {
			QKeySequenceEdit::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QKeySequenceEdit_mouseMoveEvent(this, handle__mouseMoveEvent.value(), sigval1);

	}

	friend void QKeySequenceEdit_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__wheelEvent;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (!handle__wheelEvent) {
			QKeySequenceEdit::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QKeySequenceEdit_wheelEvent(this, handle__wheelEvent.value(), sigval1);

	}

	friend void QKeySequenceEdit_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__focusInEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (!handle__focusInEvent) {
			QKeySequenceEdit::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QKeySequenceEdit_focusInEvent(this, handle__focusInEvent.value(), sigval1);

	}

	friend void QKeySequenceEdit_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__focusOutEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (!handle__focusOutEvent) {
			QKeySequenceEdit::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QKeySequenceEdit_focusOutEvent(this, handle__focusOutEvent.value(), sigval1);

	}

	friend void QKeySequenceEdit_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__enterEvent;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (!handle__enterEvent) {
			QKeySequenceEdit::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QKeySequenceEdit_enterEvent(this, handle__enterEvent.value(), sigval1);

	}

	friend void QKeySequenceEdit_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__leaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (!handle__leaveEvent) {
			QKeySequenceEdit::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QKeySequenceEdit_leaveEvent(this, handle__leaveEvent.value(), sigval1);

	}

	friend void QKeySequenceEdit_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__paintEvent;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (!handle__paintEvent) {
			QKeySequenceEdit::paintEvent(event);
			return;
		}

		QPaintEvent* sigval1 = event;
		miqt_exec_callback_QKeySequenceEdit_paintEvent(this, handle__paintEvent.value(), sigval1);

	}

	friend void QKeySequenceEdit_virtualbase_paintEvent(void* self, QPaintEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__moveEvent;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (!handle__moveEvent) {
			QKeySequenceEdit::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QKeySequenceEdit_moveEvent(this, handle__moveEvent.value(), sigval1);

	}

	friend void QKeySequenceEdit_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__resizeEvent;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (!handle__resizeEvent) {
			QKeySequenceEdit::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QKeySequenceEdit_resizeEvent(this, handle__resizeEvent.value(), sigval1);

	}

	friend void QKeySequenceEdit_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__closeEvent;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (!handle__closeEvent) {
			QKeySequenceEdit::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QKeySequenceEdit_closeEvent(this, handle__closeEvent.value(), sigval1);

	}

	friend void QKeySequenceEdit_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__contextMenuEvent;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (!handle__contextMenuEvent) {
			QKeySequenceEdit::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QKeySequenceEdit_contextMenuEvent(this, handle__contextMenuEvent.value(), sigval1);

	}

	friend void QKeySequenceEdit_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__tabletEvent;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (!handle__tabletEvent) {
			QKeySequenceEdit::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QKeySequenceEdit_tabletEvent(this, handle__tabletEvent.value(), sigval1);

	}

	friend void QKeySequenceEdit_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__actionEvent;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (!handle__actionEvent) {
			QKeySequenceEdit::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QKeySequenceEdit_actionEvent(this, handle__actionEvent.value(), sigval1);

	}

	friend void QKeySequenceEdit_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__dragEnterEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (!handle__dragEnterEvent) {
			QKeySequenceEdit::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QKeySequenceEdit_dragEnterEvent(this, handle__dragEnterEvent.value(), sigval1);

	}

	friend void QKeySequenceEdit_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__dragMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (!handle__dragMoveEvent) {
			QKeySequenceEdit::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QKeySequenceEdit_dragMoveEvent(this, handle__dragMoveEvent.value(), sigval1);

	}

	friend void QKeySequenceEdit_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__dragLeaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (!handle__dragLeaveEvent) {
			QKeySequenceEdit::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QKeySequenceEdit_dragLeaveEvent(this, handle__dragLeaveEvent.value(), sigval1);

	}

	friend void QKeySequenceEdit_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__dropEvent;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (!handle__dropEvent) {
			QKeySequenceEdit::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QKeySequenceEdit_dropEvent(this, handle__dropEvent.value(), sigval1);

	}

	friend void QKeySequenceEdit_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__showEvent;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (!handle__showEvent) {
			QKeySequenceEdit::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QKeySequenceEdit_showEvent(this, handle__showEvent.value(), sigval1);

	}

	friend void QKeySequenceEdit_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__hideEvent;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (!handle__hideEvent) {
			QKeySequenceEdit::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QKeySequenceEdit_hideEvent(this, handle__hideEvent.value(), sigval1);

	}

	friend void QKeySequenceEdit_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__nativeEvent;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (!handle__nativeEvent) {
			return QKeySequenceEdit::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QKeySequenceEdit_nativeEvent(this, handle__nativeEvent.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QKeySequenceEdit_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__changeEvent;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (!handle__changeEvent) {
			QKeySequenceEdit::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QKeySequenceEdit_changeEvent(this, handle__changeEvent.value(), sigval1);

	}

	friend void QKeySequenceEdit_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__metric;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (!handle__metric) {
			return QKeySequenceEdit::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QKeySequenceEdit_metric(this, handle__metric.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QKeySequenceEdit_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__initPainter;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (!handle__initPainter) {
			QKeySequenceEdit::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QKeySequenceEdit_initPainter(this, handle__initPainter.value(), sigval1);

	}

	friend void QKeySequenceEdit_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__redirected;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (!handle__redirected) {
			return QKeySequenceEdit::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QKeySequenceEdit_redirected(this, handle__redirected.value(), sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QKeySequenceEdit_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__sharedPainter;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (!handle__sharedPainter) {
			return QKeySequenceEdit::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QKeySequenceEdit_sharedPainter(this, handle__sharedPainter.value());
		return callback_return_value;
	}

	friend QPainter* QKeySequenceEdit_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__inputMethodEvent;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (!handle__inputMethodEvent) {
			QKeySequenceEdit::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QKeySequenceEdit_inputMethodEvent(this, handle__inputMethodEvent.value(), sigval1);

	}

	friend void QKeySequenceEdit_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__inputMethodQuery;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (!handle__inputMethodQuery) {
			return QKeySequenceEdit::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QKeySequenceEdit_inputMethodQuery(this, handle__inputMethodQuery.value(), sigval1);
		return *callback_return_value;
	}

	friend QVariant* QKeySequenceEdit_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__focusNextPrevChild;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (!handle__focusNextPrevChild) {
			return QKeySequenceEdit::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QKeySequenceEdit_focusNextPrevChild(this, handle__focusNextPrevChild.value(), sigval1);
		return callback_return_value;
	}

	friend bool QKeySequenceEdit_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QKeySequenceEdit::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QKeySequenceEdit_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QKeySequenceEdit_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QKeySequenceEdit::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QKeySequenceEdit_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QKeySequenceEdit_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QKeySequenceEdit::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QKeySequenceEdit_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QKeySequenceEdit_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QKeySequenceEdit::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QKeySequenceEdit_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QKeySequenceEdit_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QKeySequenceEdit::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QKeySequenceEdit_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QKeySequenceEdit_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QKeySequenceEdit_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QKeySequenceEdit_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QKeySequenceEdit_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QKeySequenceEdit_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QKeySequenceEdit_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QKeySequenceEdit_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QKeySequenceEdit_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QKeySequenceEdit_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QKeySequenceEdit_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QKeySequenceEdit* QKeySequenceEdit_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQKeySequenceEdit(parent);
}

QKeySequenceEdit* QKeySequenceEdit_new2() {
	return new (std::nothrow) MiqtVirtualQKeySequenceEdit();
}

QKeySequenceEdit* QKeySequenceEdit_new3(QKeySequence* keySequence) {
	return new (std::nothrow) MiqtVirtualQKeySequenceEdit(*keySequence);
}

QKeySequenceEdit* QKeySequenceEdit_new4(QKeySequence* keySequence, QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQKeySequenceEdit(*keySequence, parent);
}

void QKeySequenceEdit_virtbase(QKeySequenceEdit* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QKeySequenceEdit_metaObject(const QKeySequenceEdit* self) {
	return (QMetaObject*) self->metaObject();
}

void* QKeySequenceEdit_metacast(QKeySequenceEdit* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QKeySequenceEdit_tr(const char* s) {
	QString _ret = QKeySequenceEdit::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QKeySequenceEdit_trUtf8(const char* s) {
	QString _ret = QKeySequenceEdit::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QKeySequence* QKeySequenceEdit_keySequence(const QKeySequenceEdit* self) {
	return new QKeySequence(self->keySequence());
}

void QKeySequenceEdit_setKeySequence(QKeySequenceEdit* self, QKeySequence* keySequence) {
	self->setKeySequence(*keySequence);
}

void QKeySequenceEdit_clear(QKeySequenceEdit* self) {
	self->clear();
}

void QKeySequenceEdit_editingFinished(QKeySequenceEdit* self) {
	self->editingFinished();
}

void* QKeySequenceEdit_connect_editingFinished(QKeySequenceEdit* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit>>(slot);
	return new QMetaObject::Connection(QKeySequenceEdit::connect(self, static_cast<void (QKeySequenceEdit::*)()>(&QKeySequenceEdit::editingFinished), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QKeySequenceEdit_editingFinished(slot);
	}));
}

void QKeySequenceEdit_keySequenceChanged(QKeySequenceEdit* self, QKeySequence* keySequence) {
	self->keySequenceChanged(*keySequence);
}

void* QKeySequenceEdit_connect_keySequenceChanged(QKeySequenceEdit* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit>>(slot);
	return new QMetaObject::Connection(QKeySequenceEdit::connect(self, static_cast<void (QKeySequenceEdit::*)(const QKeySequence&)>(&QKeySequenceEdit::keySequenceChanged), self, [slot_handle](const QKeySequence& keySequence) {
		intptr_t slot = slot_handle->value();
		const QKeySequence& keySequence_ret = keySequence;
		// Cast returned reference into pointer
		QKeySequence* sigval1 = const_cast<QKeySequence*>(&keySequence_ret);
		miqt_exec_callback_QKeySequenceEdit_keySequenceChanged(slot, sigval1);
	}));
}

struct miqt_string QKeySequenceEdit_tr2(const char* s, const char* c) {
	QString _ret = QKeySequenceEdit::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QKeySequenceEdit_tr3(const char* s, const char* c, int n) {
	QString _ret = QKeySequenceEdit::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QKeySequenceEdit_trUtf82(const char* s, const char* c) {
	QString _ret = QKeySequenceEdit::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QKeySequenceEdit_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QKeySequenceEdit::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QKeySequenceEdit_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QKeySequenceEdit_virtualbase_event(void* self, QEvent* param1) {
	return static_cast<MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::event(param1);
}

bool QKeySequenceEdit_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = std::move(slot_handle);
	return true;
}

void QKeySequenceEdit_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {
	static_cast<MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::keyPressEvent(param1);
}

bool QKeySequenceEdit_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = std::move(slot_handle);
	return true;
}

void QKeySequenceEdit_virtualbase_keyReleaseEvent(void* self, QKeyEvent* param1) {
	static_cast<MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::keyReleaseEvent(param1);
}

bool QKeySequenceEdit_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QKeySequenceEdit_virtualbase_timerEvent(void* self, QTimerEvent* param1) {
	static_cast<MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::timerEvent(param1);
}

bool QKeySequenceEdit_override_virtual_devType(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = std::move(slot_handle);
	return true;
}

int QKeySequenceEdit_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::devType();
}

bool QKeySequenceEdit_override_virtual_setVisible(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = std::move(slot_handle);
	return true;
}

void QKeySequenceEdit_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::setVisible(visible);
}

bool QKeySequenceEdit_override_virtual_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	return true;
}

QSize* QKeySequenceEdit_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::sizeHint());
}

bool QKeySequenceEdit_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	return true;
}

QSize* QKeySequenceEdit_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::minimumSizeHint());
}

bool QKeySequenceEdit_override_virtual_heightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = std::move(slot_handle);
	return true;
}

int QKeySequenceEdit_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::heightForWidth(static_cast<int>(param1));
}

bool QKeySequenceEdit_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = std::move(slot_handle);
	return true;
}

bool QKeySequenceEdit_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::hasHeightForWidth();
}

bool QKeySequenceEdit_override_virtual_paintEngine(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = std::move(slot_handle);
	return true;
}

QPaintEngine* QKeySequenceEdit_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::paintEngine();
}

bool QKeySequenceEdit_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = std::move(slot_handle);
	return true;
}

void QKeySequenceEdit_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::mousePressEvent(event);
}

bool QKeySequenceEdit_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = std::move(slot_handle);
	return true;
}

void QKeySequenceEdit_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::mouseReleaseEvent(event);
}

bool QKeySequenceEdit_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = std::move(slot_handle);
	return true;
}

void QKeySequenceEdit_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::mouseDoubleClickEvent(event);
}

bool QKeySequenceEdit_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = std::move(slot_handle);
	return true;
}

void QKeySequenceEdit_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::mouseMoveEvent(event);
}

bool QKeySequenceEdit_override_virtual_wheelEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = std::move(slot_handle);
	return true;
}

void QKeySequenceEdit_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::wheelEvent(event);
}

bool QKeySequenceEdit_override_virtual_focusInEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = std::move(slot_handle);
	return true;
}

void QKeySequenceEdit_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::focusInEvent(event);
}

bool QKeySequenceEdit_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = std::move(slot_handle);
	return true;
}

void QKeySequenceEdit_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::focusOutEvent(event);
}

bool QKeySequenceEdit_override_virtual_enterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = std::move(slot_handle);
	return true;
}

void QKeySequenceEdit_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::enterEvent(event);
}

bool QKeySequenceEdit_override_virtual_leaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = std::move(slot_handle);
	return true;
}

void QKeySequenceEdit_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::leaveEvent(event);
}

bool QKeySequenceEdit_override_virtual_paintEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = std::move(slot_handle);
	return true;
}

void QKeySequenceEdit_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	static_cast<MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::paintEvent(event);
}

bool QKeySequenceEdit_override_virtual_moveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = std::move(slot_handle);
	return true;
}

void QKeySequenceEdit_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::moveEvent(event);
}

bool QKeySequenceEdit_override_virtual_resizeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = std::move(slot_handle);
	return true;
}

void QKeySequenceEdit_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::resizeEvent(event);
}

bool QKeySequenceEdit_override_virtual_closeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = std::move(slot_handle);
	return true;
}

void QKeySequenceEdit_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::closeEvent(event);
}

bool QKeySequenceEdit_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = std::move(slot_handle);
	return true;
}

void QKeySequenceEdit_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::contextMenuEvent(event);
}

bool QKeySequenceEdit_override_virtual_tabletEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = std::move(slot_handle);
	return true;
}

void QKeySequenceEdit_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::tabletEvent(event);
}

bool QKeySequenceEdit_override_virtual_actionEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = std::move(slot_handle);
	return true;
}

void QKeySequenceEdit_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::actionEvent(event);
}

bool QKeySequenceEdit_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = std::move(slot_handle);
	return true;
}

void QKeySequenceEdit_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::dragEnterEvent(event);
}

bool QKeySequenceEdit_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = std::move(slot_handle);
	return true;
}

void QKeySequenceEdit_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::dragMoveEvent(event);
}

bool QKeySequenceEdit_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = std::move(slot_handle);
	return true;
}

void QKeySequenceEdit_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::dragLeaveEvent(event);
}

bool QKeySequenceEdit_override_virtual_dropEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = std::move(slot_handle);
	return true;
}

void QKeySequenceEdit_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::dropEvent(event);
}

bool QKeySequenceEdit_override_virtual_showEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = std::move(slot_handle);
	return true;
}

void QKeySequenceEdit_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::showEvent(event);
}

bool QKeySequenceEdit_override_virtual_hideEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = std::move(slot_handle);
	return true;
}

void QKeySequenceEdit_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::hideEvent(event);
}

bool QKeySequenceEdit_override_virtual_nativeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = std::move(slot_handle);
	return true;
}

bool QKeySequenceEdit_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QKeySequenceEdit_override_virtual_changeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = std::move(slot_handle);
	return true;
}

void QKeySequenceEdit_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::changeEvent(param1);
}

bool QKeySequenceEdit_override_virtual_metric(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = std::move(slot_handle);
	return true;
}

int QKeySequenceEdit_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::metric(static_cast<MiqtVirtualQKeySequenceEdit::PaintDeviceMetric>(param1));
}

bool QKeySequenceEdit_override_virtual_initPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = std::move(slot_handle);
	return true;
}

void QKeySequenceEdit_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::initPainter(painter);
}

bool QKeySequenceEdit_override_virtual_redirected(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = std::move(slot_handle);
	return true;
}

QPaintDevice* QKeySequenceEdit_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::redirected(offset);
}

bool QKeySequenceEdit_override_virtual_sharedPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = std::move(slot_handle);
	return true;
}

QPainter* QKeySequenceEdit_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::sharedPainter();
}

bool QKeySequenceEdit_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = std::move(slot_handle);
	return true;
}

void QKeySequenceEdit_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::inputMethodEvent(param1);
}

bool QKeySequenceEdit_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	return true;
}

QVariant* QKeySequenceEdit_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QKeySequenceEdit_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = std::move(slot_handle);
	return true;
}

bool QKeySequenceEdit_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::focusNextPrevChild(next);
}

bool QKeySequenceEdit_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QKeySequenceEdit_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::eventFilter(watched, event);
}

bool QKeySequenceEdit_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QKeySequenceEdit_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::childEvent(event);
}

bool QKeySequenceEdit_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QKeySequenceEdit_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::customEvent(event);
}

bool QKeySequenceEdit_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QKeySequenceEdit_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::connectNotify(*signal);
}

bool QKeySequenceEdit_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QKeySequenceEdit> slot_handle(slot);
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QKeySequenceEdit_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQKeySequenceEdit*>(self)->QKeySequenceEdit::disconnectNotify(*signal);
}

void QKeySequenceEdit_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QKeySequenceEdit_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QKeySequenceEdit_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QKeySequenceEdit_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QKeySequenceEdit_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QKeySequenceEdit_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QKeySequenceEdit_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QKeySequenceEdit_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QKeySequenceEdit_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQKeySequenceEdit* self_cast = dynamic_cast<MiqtVirtualQKeySequenceEdit*>( (QKeySequenceEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QKeySequenceEdit_delete(QKeySequenceEdit* self) {
	delete self;
}

