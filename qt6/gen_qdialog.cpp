#include <memory>
#include <utility>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDialog>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
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
#include <qdialog.h>
#include "gen_qdialog.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QDialog(intptr_t);
void miqt_exec_callback_QDialog_finished(intptr_t, int);
void miqt_exec_callback_QDialog_accepted(intptr_t);
void miqt_exec_callback_QDialog_rejected(intptr_t);
void miqt_exec_callback_QDialog_setVisible(QDialog*, intptr_t, bool);
QSize* miqt_exec_callback_QDialog_sizeHint(const QDialog*, intptr_t);
QSize* miqt_exec_callback_QDialog_minimumSizeHint(const QDialog*, intptr_t);
void miqt_exec_callback_QDialog_open(QDialog*, intptr_t);
int miqt_exec_callback_QDialog_exec(QDialog*, intptr_t);
void miqt_exec_callback_QDialog_done(QDialog*, intptr_t, int);
void miqt_exec_callback_QDialog_accept(QDialog*, intptr_t);
void miqt_exec_callback_QDialog_reject(QDialog*, intptr_t);
void miqt_exec_callback_QDialog_keyPressEvent(QDialog*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QDialog_closeEvent(QDialog*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QDialog_showEvent(QDialog*, intptr_t, QShowEvent*);
void miqt_exec_callback_QDialog_resizeEvent(QDialog*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QDialog_contextMenuEvent(QDialog*, intptr_t, QContextMenuEvent*);
bool miqt_exec_callback_QDialog_eventFilter(QDialog*, intptr_t, QObject*, QEvent*);
int miqt_exec_callback_QDialog_devType(const QDialog*, intptr_t);
int miqt_exec_callback_QDialog_heightForWidth(const QDialog*, intptr_t, int);
bool miqt_exec_callback_QDialog_hasHeightForWidth(const QDialog*, intptr_t);
QPaintEngine* miqt_exec_callback_QDialog_paintEngine(const QDialog*, intptr_t);
bool miqt_exec_callback_QDialog_event(QDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QDialog_mousePressEvent(QDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDialog_mouseReleaseEvent(QDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDialog_mouseDoubleClickEvent(QDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDialog_mouseMoveEvent(QDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QDialog_wheelEvent(QDialog*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QDialog_keyReleaseEvent(QDialog*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QDialog_focusInEvent(QDialog*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QDialog_focusOutEvent(QDialog*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QDialog_enterEvent(QDialog*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QDialog_leaveEvent(QDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QDialog_paintEvent(QDialog*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QDialog_moveEvent(QDialog*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QDialog_tabletEvent(QDialog*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QDialog_actionEvent(QDialog*, intptr_t, QActionEvent*);
void miqt_exec_callback_QDialog_dragEnterEvent(QDialog*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QDialog_dragMoveEvent(QDialog*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QDialog_dragLeaveEvent(QDialog*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QDialog_dropEvent(QDialog*, intptr_t, QDropEvent*);
void miqt_exec_callback_QDialog_hideEvent(QDialog*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QDialog_nativeEvent(QDialog*, intptr_t, struct miqt_string, void*, intptr_t*);
void miqt_exec_callback_QDialog_changeEvent(QDialog*, intptr_t, QEvent*);
int miqt_exec_callback_QDialog_metric(const QDialog*, intptr_t, int);
void miqt_exec_callback_QDialog_initPainter(const QDialog*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QDialog_redirected(const QDialog*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QDialog_sharedPainter(const QDialog*, intptr_t);
void miqt_exec_callback_QDialog_inputMethodEvent(QDialog*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QDialog_inputMethodQuery(const QDialog*, intptr_t, int);
bool miqt_exec_callback_QDialog_focusNextPrevChild(QDialog*, intptr_t, bool);
void miqt_exec_callback_QDialog_timerEvent(QDialog*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QDialog_childEvent(QDialog*, intptr_t, QChildEvent*);
void miqt_exec_callback_QDialog_customEvent(QDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QDialog_connectNotify(QDialog*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QDialog_disconnectNotify(QDialog*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQDialog final : public QDialog {
public:

	MiqtVirtualQDialog(QWidget* parent): QDialog(parent) {}
	MiqtVirtualQDialog(): QDialog() {}
	MiqtVirtualQDialog(QWidget* parent, Qt::WindowFlags f): QDialog(parent, f) {}

	virtual ~MiqtVirtualQDialog() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__setVisible;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (!handle__setVisible) {
			QDialog::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QDialog_setVisible(this, handle__setVisible.value(), sigval1);

	}

	friend void QDialog_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__sizeHint;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (!handle__sizeHint) {
			return QDialog::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QDialog_sizeHint(this, handle__sizeHint.value());
		return *callback_return_value;
	}

	friend QSize* QDialog_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__minimumSizeHint;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (!handle__minimumSizeHint) {
			return QDialog::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QDialog_minimumSizeHint(this, handle__minimumSizeHint.value());
		return *callback_return_value;
	}

	friend QSize* QDialog_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__open;

	// Subclass to allow providing a Go implementation
	virtual void open() override {
		if (!handle__open) {
			QDialog::open();
			return;
		}

		miqt_exec_callback_QDialog_open(this, handle__open.value());

	}

	friend void QDialog_virtualbase_open(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__exec;

	// Subclass to allow providing a Go implementation
	virtual int exec() override {
		if (!handle__exec) {
			return QDialog::exec();
		}

		int callback_return_value = miqt_exec_callback_QDialog_exec(this, handle__exec.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QDialog_virtualbase_exec(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__done;

	// Subclass to allow providing a Go implementation
	virtual void done(int param1) override {
		if (!handle__done) {
			QDialog::done(param1);
			return;
		}

		int sigval1 = param1;
		miqt_exec_callback_QDialog_done(this, handle__done.value(), sigval1);

	}

	friend void QDialog_virtualbase_done(void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__accept;

	// Subclass to allow providing a Go implementation
	virtual void accept() override {
		if (!handle__accept) {
			QDialog::accept();
			return;
		}

		miqt_exec_callback_QDialog_accept(this, handle__accept.value());

	}

	friend void QDialog_virtualbase_accept(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__reject;

	// Subclass to allow providing a Go implementation
	virtual void reject() override {
		if (!handle__reject) {
			QDialog::reject();
			return;
		}

		miqt_exec_callback_QDialog_reject(this, handle__reject.value());

	}

	friend void QDialog_virtualbase_reject(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__keyPressEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (!handle__keyPressEvent) {
			QDialog::keyPressEvent(param1);
			return;
		}

		QKeyEvent* sigval1 = param1;
		miqt_exec_callback_QDialog_keyPressEvent(this, handle__keyPressEvent.value(), sigval1);

	}

	friend void QDialog_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__closeEvent;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* param1) override {
		if (!handle__closeEvent) {
			QDialog::closeEvent(param1);
			return;
		}

		QCloseEvent* sigval1 = param1;
		miqt_exec_callback_QDialog_closeEvent(this, handle__closeEvent.value(), sigval1);

	}

	friend void QDialog_virtualbase_closeEvent(void* self, QCloseEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__showEvent;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (!handle__showEvent) {
			QDialog::showEvent(param1);
			return;
		}

		QShowEvent* sigval1 = param1;
		miqt_exec_callback_QDialog_showEvent(this, handle__showEvent.value(), sigval1);

	}

	friend void QDialog_virtualbase_showEvent(void* self, QShowEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__resizeEvent;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (!handle__resizeEvent) {
			QDialog::resizeEvent(param1);
			return;
		}

		QResizeEvent* sigval1 = param1;
		miqt_exec_callback_QDialog_resizeEvent(this, handle__resizeEvent.value(), sigval1);

	}

	friend void QDialog_virtualbase_resizeEvent(void* self, QResizeEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__contextMenuEvent;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (!handle__contextMenuEvent) {
			QDialog::contextMenuEvent(param1);
			return;
		}

		QContextMenuEvent* sigval1 = param1;
		miqt_exec_callback_QDialog_contextMenuEvent(this, handle__contextMenuEvent.value(), sigval1);

	}

	friend void QDialog_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (!handle__eventFilter) {
			return QDialog::eventFilter(param1, param2);
		}

		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;
		bool callback_return_value = miqt_exec_callback_QDialog_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QDialog_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__devType;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (!handle__devType) {
			return QDialog::devType();
		}

		int callback_return_value = miqt_exec_callback_QDialog_devType(this, handle__devType.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QDialog_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__heightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (!handle__heightForWidth) {
			return QDialog::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QDialog_heightForWidth(this, handle__heightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QDialog_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__hasHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (!handle__hasHeightForWidth) {
			return QDialog::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QDialog_hasHeightForWidth(this, handle__hasHeightForWidth.value());
		return callback_return_value;
	}

	friend bool QDialog_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__paintEngine;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (!handle__paintEngine) {
			return QDialog::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QDialog_paintEngine(this, handle__paintEngine.value());
		return callback_return_value;
	}

	friend QPaintEngine* QDialog_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QDialog::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QDialog_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QDialog_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__mousePressEvent;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (!handle__mousePressEvent) {
			QDialog::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QDialog_mousePressEvent(this, handle__mousePressEvent.value(), sigval1);

	}

	friend void QDialog_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__mouseReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (!handle__mouseReleaseEvent) {
			QDialog::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QDialog_mouseReleaseEvent(this, handle__mouseReleaseEvent.value(), sigval1);

	}

	friend void QDialog_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__mouseDoubleClickEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (!handle__mouseDoubleClickEvent) {
			QDialog::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QDialog_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent.value(), sigval1);

	}

	friend void QDialog_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__mouseMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (!handle__mouseMoveEvent) {
			QDialog::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QDialog_mouseMoveEvent(this, handle__mouseMoveEvent.value(), sigval1);

	}

	friend void QDialog_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__wheelEvent;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (!handle__wheelEvent) {
			QDialog::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QDialog_wheelEvent(this, handle__wheelEvent.value(), sigval1);

	}

	friend void QDialog_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__keyReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (!handle__keyReleaseEvent) {
			QDialog::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QDialog_keyReleaseEvent(this, handle__keyReleaseEvent.value(), sigval1);

	}

	friend void QDialog_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__focusInEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (!handle__focusInEvent) {
			QDialog::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QDialog_focusInEvent(this, handle__focusInEvent.value(), sigval1);

	}

	friend void QDialog_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__focusOutEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (!handle__focusOutEvent) {
			QDialog::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QDialog_focusOutEvent(this, handle__focusOutEvent.value(), sigval1);

	}

	friend void QDialog_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__enterEvent;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (!handle__enterEvent) {
			QDialog::enterEvent(event);
			return;
		}

		QEnterEvent* sigval1 = event;
		miqt_exec_callback_QDialog_enterEvent(this, handle__enterEvent.value(), sigval1);

	}

	friend void QDialog_virtualbase_enterEvent(void* self, QEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__leaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (!handle__leaveEvent) {
			QDialog::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QDialog_leaveEvent(this, handle__leaveEvent.value(), sigval1);

	}

	friend void QDialog_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__paintEvent;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (!handle__paintEvent) {
			QDialog::paintEvent(event);
			return;
		}

		QPaintEvent* sigval1 = event;
		miqt_exec_callback_QDialog_paintEvent(this, handle__paintEvent.value(), sigval1);

	}

	friend void QDialog_virtualbase_paintEvent(void* self, QPaintEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__moveEvent;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (!handle__moveEvent) {
			QDialog::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QDialog_moveEvent(this, handle__moveEvent.value(), sigval1);

	}

	friend void QDialog_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__tabletEvent;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (!handle__tabletEvent) {
			QDialog::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QDialog_tabletEvent(this, handle__tabletEvent.value(), sigval1);

	}

	friend void QDialog_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__actionEvent;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (!handle__actionEvent) {
			QDialog::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QDialog_actionEvent(this, handle__actionEvent.value(), sigval1);

	}

	friend void QDialog_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__dragEnterEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (!handle__dragEnterEvent) {
			QDialog::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QDialog_dragEnterEvent(this, handle__dragEnterEvent.value(), sigval1);

	}

	friend void QDialog_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__dragMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (!handle__dragMoveEvent) {
			QDialog::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QDialog_dragMoveEvent(this, handle__dragMoveEvent.value(), sigval1);

	}

	friend void QDialog_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__dragLeaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (!handle__dragLeaveEvent) {
			QDialog::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QDialog_dragLeaveEvent(this, handle__dragLeaveEvent.value(), sigval1);

	}

	friend void QDialog_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__dropEvent;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (!handle__dropEvent) {
			QDialog::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QDialog_dropEvent(this, handle__dropEvent.value(), sigval1);

	}

	friend void QDialog_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__hideEvent;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (!handle__hideEvent) {
			QDialog::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QDialog_hideEvent(this, handle__hideEvent.value(), sigval1);

	}

	friend void QDialog_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__nativeEvent;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (!handle__nativeEvent) {
			return QDialog::nativeEvent(eventType, message, result);
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
		bool callback_return_value = miqt_exec_callback_QDialog_nativeEvent(this, handle__nativeEvent.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QDialog_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__changeEvent;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (!handle__changeEvent) {
			QDialog::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QDialog_changeEvent(this, handle__changeEvent.value(), sigval1);

	}

	friend void QDialog_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__metric;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (!handle__metric) {
			return QDialog::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QDialog_metric(this, handle__metric.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QDialog_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__initPainter;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (!handle__initPainter) {
			QDialog::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QDialog_initPainter(this, handle__initPainter.value(), sigval1);

	}

	friend void QDialog_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__redirected;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (!handle__redirected) {
			return QDialog::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QDialog_redirected(this, handle__redirected.value(), sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QDialog_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__sharedPainter;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (!handle__sharedPainter) {
			return QDialog::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QDialog_sharedPainter(this, handle__sharedPainter.value());
		return callback_return_value;
	}

	friend QPainter* QDialog_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__inputMethodEvent;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (!handle__inputMethodEvent) {
			QDialog::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QDialog_inputMethodEvent(this, handle__inputMethodEvent.value(), sigval1);

	}

	friend void QDialog_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__inputMethodQuery;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (!handle__inputMethodQuery) {
			return QDialog::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QDialog_inputMethodQuery(this, handle__inputMethodQuery.value(), sigval1);
		return *callback_return_value;
	}

	friend QVariant* QDialog_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__focusNextPrevChild;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (!handle__focusNextPrevChild) {
			return QDialog::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QDialog_focusNextPrevChild(this, handle__focusNextPrevChild.value(), sigval1);
		return callback_return_value;
	}

	friend bool QDialog_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QDialog::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QDialog_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QDialog_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QDialog::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QDialog_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QDialog_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QDialog::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QDialog_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QDialog_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QDialog::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QDialog_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QDialog_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QDialog::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QDialog_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QDialog_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QDialog_protectedbase_adjustPosition(bool* _dynamic_cast_ok, void* self, QWidget* param1);
	friend void QDialog_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QDialog_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QDialog_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QDialog_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QDialog_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QDialog_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QDialog_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QDialog_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QDialog_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QDialog* QDialog_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQDialog(parent);
}

QDialog* QDialog_new2() {
	return new (std::nothrow) MiqtVirtualQDialog();
}

QDialog* QDialog_new3(QWidget* parent, int f) {
	return new (std::nothrow) MiqtVirtualQDialog(parent, static_cast<Qt::WindowFlags>(f));
}

void QDialog_virtbase(QDialog* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QDialog_metaObject(const QDialog* self) {
	return (QMetaObject*) self->metaObject();
}

void* QDialog_metacast(QDialog* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QDialog_tr(const char* s) {
	QString _ret = QDialog::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QDialog_result(const QDialog* self) {
	return self->result();
}

void QDialog_setVisible(QDialog* self, bool visible) {
	self->setVisible(visible);
}

QSize* QDialog_sizeHint(const QDialog* self) {
	return new QSize(self->sizeHint());
}

QSize* QDialog_minimumSizeHint(const QDialog* self) {
	return new QSize(self->minimumSizeHint());
}

void QDialog_setSizeGripEnabled(QDialog* self, bool sizeGripEnabled) {
	self->setSizeGripEnabled(sizeGripEnabled);
}

bool QDialog_isSizeGripEnabled(const QDialog* self) {
	return self->isSizeGripEnabled();
}

void QDialog_setModal(QDialog* self, bool modal) {
	self->setModal(modal);
}

void QDialog_setResult(QDialog* self, int r) {
	self->setResult(static_cast<int>(r));
}

void QDialog_finished(QDialog* self, int result) {
	self->finished(static_cast<int>(result));
}

void* QDialog_connect_finished(QDialog* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QDialog>>(slot);
	return new QMetaObject::Connection(QDialog::connect(self, static_cast<void (QDialog::*)(int)>(&QDialog::finished), self, [slot_handle](int result) {
		intptr_t slot = slot_handle->value();
		int sigval1 = result;
		miqt_exec_callback_QDialog_finished(slot, sigval1);
	}));
}

void QDialog_accepted(QDialog* self) {
	self->accepted();
}

void* QDialog_connect_accepted(QDialog* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QDialog>>(slot);
	return new QMetaObject::Connection(QDialog::connect(self, static_cast<void (QDialog::*)()>(&QDialog::accepted), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QDialog_accepted(slot);
	}));
}

void QDialog_rejected(QDialog* self) {
	self->rejected();
}

void* QDialog_connect_rejected(QDialog* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QDialog>>(slot);
	return new QMetaObject::Connection(QDialog::connect(self, static_cast<void (QDialog::*)()>(&QDialog::rejected), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QDialog_rejected(slot);
	}));
}

void QDialog_open(QDialog* self) {
	self->open();
}

int QDialog_exec(QDialog* self) {
	return self->exec();
}

void QDialog_done(QDialog* self, int param1) {
	self->done(static_cast<int>(param1));
}

void QDialog_accept(QDialog* self) {
	self->accept();
}

void QDialog_reject(QDialog* self) {
	self->reject();
}

struct miqt_string QDialog_tr2(const char* s, const char* c) {
	QString _ret = QDialog::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QDialog_tr3(const char* s, const char* c, int n) {
	QString _ret = QDialog::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QDialog_override_virtual_setVisible(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = std::move(slot_handle);
	return true;
}

void QDialog_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQDialog*>(self)->QDialog::setVisible(visible);
}

bool QDialog_override_virtual_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	return true;
}

QSize* QDialog_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQDialog*>(self)->QDialog::sizeHint());
}

bool QDialog_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	return true;
}

QSize* QDialog_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQDialog*>(self)->QDialog::minimumSizeHint());
}

bool QDialog_override_virtual_open(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__open = std::move(slot_handle);
	return true;
}

void QDialog_virtualbase_open(void* self) {
	static_cast<MiqtVirtualQDialog*>(self)->QDialog::open();
}

bool QDialog_override_virtual_exec(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__exec = std::move(slot_handle);
	return true;
}

int QDialog_virtualbase_exec(void* self) {
	return static_cast<MiqtVirtualQDialog*>(self)->QDialog::exec();
}

bool QDialog_override_virtual_done(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__done = std::move(slot_handle);
	return true;
}

void QDialog_virtualbase_done(void* self, int param1) {
	static_cast<MiqtVirtualQDialog*>(self)->QDialog::done(static_cast<int>(param1));
}

bool QDialog_override_virtual_accept(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__accept = std::move(slot_handle);
	return true;
}

void QDialog_virtualbase_accept(void* self) {
	static_cast<MiqtVirtualQDialog*>(self)->QDialog::accept();
}

bool QDialog_override_virtual_reject(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__reject = std::move(slot_handle);
	return true;
}

void QDialog_virtualbase_reject(void* self) {
	static_cast<MiqtVirtualQDialog*>(self)->QDialog::reject();
}

bool QDialog_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = std::move(slot_handle);
	return true;
}

void QDialog_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {
	static_cast<MiqtVirtualQDialog*>(self)->QDialog::keyPressEvent(param1);
}

bool QDialog_override_virtual_closeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = std::move(slot_handle);
	return true;
}

void QDialog_virtualbase_closeEvent(void* self, QCloseEvent* param1) {
	static_cast<MiqtVirtualQDialog*>(self)->QDialog::closeEvent(param1);
}

bool QDialog_override_virtual_showEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = std::move(slot_handle);
	return true;
}

void QDialog_virtualbase_showEvent(void* self, QShowEvent* param1) {
	static_cast<MiqtVirtualQDialog*>(self)->QDialog::showEvent(param1);
}

bool QDialog_override_virtual_resizeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = std::move(slot_handle);
	return true;
}

void QDialog_virtualbase_resizeEvent(void* self, QResizeEvent* param1) {
	static_cast<MiqtVirtualQDialog*>(self)->QDialog::resizeEvent(param1);
}

bool QDialog_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = std::move(slot_handle);
	return true;
}

void QDialog_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1) {
	static_cast<MiqtVirtualQDialog*>(self)->QDialog::contextMenuEvent(param1);
}

bool QDialog_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QDialog_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {
	return static_cast<MiqtVirtualQDialog*>(self)->QDialog::eventFilter(param1, param2);
}

bool QDialog_override_virtual_devType(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = std::move(slot_handle);
	return true;
}

int QDialog_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQDialog*>(self)->QDialog::devType();
}

bool QDialog_override_virtual_heightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = std::move(slot_handle);
	return true;
}

int QDialog_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQDialog*>(self)->QDialog::heightForWidth(static_cast<int>(param1));
}

bool QDialog_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = std::move(slot_handle);
	return true;
}

bool QDialog_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQDialog*>(self)->QDialog::hasHeightForWidth();
}

bool QDialog_override_virtual_paintEngine(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = std::move(slot_handle);
	return true;
}

QPaintEngine* QDialog_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQDialog*>(self)->QDialog::paintEngine();
}

bool QDialog_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QDialog_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQDialog*>(self)->QDialog::event(event);
}

bool QDialog_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = std::move(slot_handle);
	return true;
}

void QDialog_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQDialog*>(self)->QDialog::mousePressEvent(event);
}

bool QDialog_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = std::move(slot_handle);
	return true;
}

void QDialog_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQDialog*>(self)->QDialog::mouseReleaseEvent(event);
}

bool QDialog_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = std::move(slot_handle);
	return true;
}

void QDialog_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQDialog*>(self)->QDialog::mouseDoubleClickEvent(event);
}

bool QDialog_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = std::move(slot_handle);
	return true;
}

void QDialog_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQDialog*>(self)->QDialog::mouseMoveEvent(event);
}

bool QDialog_override_virtual_wheelEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = std::move(slot_handle);
	return true;
}

void QDialog_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQDialog*>(self)->QDialog::wheelEvent(event);
}

bool QDialog_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = std::move(slot_handle);
	return true;
}

void QDialog_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQDialog*>(self)->QDialog::keyReleaseEvent(event);
}

bool QDialog_override_virtual_focusInEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = std::move(slot_handle);
	return true;
}

void QDialog_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQDialog*>(self)->QDialog::focusInEvent(event);
}

bool QDialog_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = std::move(slot_handle);
	return true;
}

void QDialog_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQDialog*>(self)->QDialog::focusOutEvent(event);
}

bool QDialog_override_virtual_enterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = std::move(slot_handle);
	return true;
}

void QDialog_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	static_cast<MiqtVirtualQDialog*>(self)->QDialog::enterEvent(event);
}

bool QDialog_override_virtual_leaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = std::move(slot_handle);
	return true;
}

void QDialog_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQDialog*>(self)->QDialog::leaveEvent(event);
}

bool QDialog_override_virtual_paintEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = std::move(slot_handle);
	return true;
}

void QDialog_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	static_cast<MiqtVirtualQDialog*>(self)->QDialog::paintEvent(event);
}

bool QDialog_override_virtual_moveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = std::move(slot_handle);
	return true;
}

void QDialog_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQDialog*>(self)->QDialog::moveEvent(event);
}

bool QDialog_override_virtual_tabletEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = std::move(slot_handle);
	return true;
}

void QDialog_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQDialog*>(self)->QDialog::tabletEvent(event);
}

bool QDialog_override_virtual_actionEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = std::move(slot_handle);
	return true;
}

void QDialog_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQDialog*>(self)->QDialog::actionEvent(event);
}

bool QDialog_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = std::move(slot_handle);
	return true;
}

void QDialog_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQDialog*>(self)->QDialog::dragEnterEvent(event);
}

bool QDialog_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = std::move(slot_handle);
	return true;
}

void QDialog_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQDialog*>(self)->QDialog::dragMoveEvent(event);
}

bool QDialog_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = std::move(slot_handle);
	return true;
}

void QDialog_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQDialog*>(self)->QDialog::dragLeaveEvent(event);
}

bool QDialog_override_virtual_dropEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = std::move(slot_handle);
	return true;
}

void QDialog_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQDialog*>(self)->QDialog::dropEvent(event);
}

bool QDialog_override_virtual_hideEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = std::move(slot_handle);
	return true;
}

void QDialog_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQDialog*>(self)->QDialog::hideEvent(event);
}

bool QDialog_override_virtual_nativeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = std::move(slot_handle);
	return true;
}

bool QDialog_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQDialog*>(self)->QDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
}

bool QDialog_override_virtual_changeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = std::move(slot_handle);
	return true;
}

void QDialog_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQDialog*>(self)->QDialog::changeEvent(param1);
}

bool QDialog_override_virtual_metric(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = std::move(slot_handle);
	return true;
}

int QDialog_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQDialog*>(self)->QDialog::metric(static_cast<MiqtVirtualQDialog::PaintDeviceMetric>(param1));
}

bool QDialog_override_virtual_initPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = std::move(slot_handle);
	return true;
}

void QDialog_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQDialog*>(self)->QDialog::initPainter(painter);
}

bool QDialog_override_virtual_redirected(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = std::move(slot_handle);
	return true;
}

QPaintDevice* QDialog_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQDialog*>(self)->QDialog::redirected(offset);
}

bool QDialog_override_virtual_sharedPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = std::move(slot_handle);
	return true;
}

QPainter* QDialog_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQDialog*>(self)->QDialog::sharedPainter();
}

bool QDialog_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = std::move(slot_handle);
	return true;
}

void QDialog_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQDialog*>(self)->QDialog::inputMethodEvent(param1);
}

bool QDialog_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	return true;
}

QVariant* QDialog_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQDialog*>(self)->QDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QDialog_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = std::move(slot_handle);
	return true;
}

bool QDialog_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQDialog*>(self)->QDialog::focusNextPrevChild(next);
}

bool QDialog_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QDialog_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQDialog*>(self)->QDialog::timerEvent(event);
}

bool QDialog_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QDialog_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQDialog*>(self)->QDialog::childEvent(event);
}

bool QDialog_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QDialog_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQDialog*>(self)->QDialog::customEvent(event);
}

bool QDialog_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QDialog_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQDialog*>(self)->QDialog::connectNotify(*signal);
}

bool QDialog_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QDialog> slot_handle(slot);
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QDialog_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQDialog*>(self)->QDialog::disconnectNotify(*signal);
}

void QDialog_protectedbase_adjustPosition(bool* _dynamic_cast_ok, void* self, QWidget* param1) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->adjustPosition(param1);
}

void QDialog_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QDialog_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QDialog_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QDialog_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QDialog_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QDialog_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QDialog_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QDialog_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QDialog_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQDialog* self_cast = dynamic_cast<MiqtVirtualQDialog*>( (QDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QDialog_delete(QDialog* self) {
	delete self;
}

