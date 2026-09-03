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
#include <QPageSetupDialog>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QPrinter>
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
#include <qpagesetupdialog.h>
#include "gen_qpagesetupdialog.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QPageSetupDialog(intptr_t);
int miqt_exec_callback_QPageSetupDialog_exec(QPageSetupDialog*, intptr_t);
void miqt_exec_callback_QPageSetupDialog_done(QPageSetupDialog*, intptr_t, int);
void miqt_exec_callback_QPageSetupDialog_setVisible(QPageSetupDialog*, intptr_t, bool);
QSize* miqt_exec_callback_QPageSetupDialog_sizeHint(const QPageSetupDialog*, intptr_t);
QSize* miqt_exec_callback_QPageSetupDialog_minimumSizeHint(const QPageSetupDialog*, intptr_t);
void miqt_exec_callback_QPageSetupDialog_open(QPageSetupDialog*, intptr_t);
void miqt_exec_callback_QPageSetupDialog_accept(QPageSetupDialog*, intptr_t);
void miqt_exec_callback_QPageSetupDialog_reject(QPageSetupDialog*, intptr_t);
void miqt_exec_callback_QPageSetupDialog_keyPressEvent(QPageSetupDialog*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QPageSetupDialog_closeEvent(QPageSetupDialog*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QPageSetupDialog_showEvent(QPageSetupDialog*, intptr_t, QShowEvent*);
void miqt_exec_callback_QPageSetupDialog_resizeEvent(QPageSetupDialog*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QPageSetupDialog_contextMenuEvent(QPageSetupDialog*, intptr_t, QContextMenuEvent*);
bool miqt_exec_callback_QPageSetupDialog_eventFilter(QPageSetupDialog*, intptr_t, QObject*, QEvent*);
int miqt_exec_callback_QPageSetupDialog_devType(const QPageSetupDialog*, intptr_t);
int miqt_exec_callback_QPageSetupDialog_heightForWidth(const QPageSetupDialog*, intptr_t, int);
bool miqt_exec_callback_QPageSetupDialog_hasHeightForWidth(const QPageSetupDialog*, intptr_t);
QPaintEngine* miqt_exec_callback_QPageSetupDialog_paintEngine(const QPageSetupDialog*, intptr_t);
bool miqt_exec_callback_QPageSetupDialog_event(QPageSetupDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QPageSetupDialog_mousePressEvent(QPageSetupDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPageSetupDialog_mouseReleaseEvent(QPageSetupDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPageSetupDialog_mouseDoubleClickEvent(QPageSetupDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPageSetupDialog_mouseMoveEvent(QPageSetupDialog*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPageSetupDialog_wheelEvent(QPageSetupDialog*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QPageSetupDialog_keyReleaseEvent(QPageSetupDialog*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QPageSetupDialog_focusInEvent(QPageSetupDialog*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QPageSetupDialog_focusOutEvent(QPageSetupDialog*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QPageSetupDialog_enterEvent(QPageSetupDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QPageSetupDialog_leaveEvent(QPageSetupDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QPageSetupDialog_paintEvent(QPageSetupDialog*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QPageSetupDialog_moveEvent(QPageSetupDialog*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QPageSetupDialog_tabletEvent(QPageSetupDialog*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QPageSetupDialog_actionEvent(QPageSetupDialog*, intptr_t, QActionEvent*);
void miqt_exec_callback_QPageSetupDialog_dragEnterEvent(QPageSetupDialog*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QPageSetupDialog_dragMoveEvent(QPageSetupDialog*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QPageSetupDialog_dragLeaveEvent(QPageSetupDialog*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QPageSetupDialog_dropEvent(QPageSetupDialog*, intptr_t, QDropEvent*);
void miqt_exec_callback_QPageSetupDialog_hideEvent(QPageSetupDialog*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QPageSetupDialog_nativeEvent(QPageSetupDialog*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QPageSetupDialog_changeEvent(QPageSetupDialog*, intptr_t, QEvent*);
int miqt_exec_callback_QPageSetupDialog_metric(const QPageSetupDialog*, intptr_t, int);
void miqt_exec_callback_QPageSetupDialog_initPainter(const QPageSetupDialog*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QPageSetupDialog_redirected(const QPageSetupDialog*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QPageSetupDialog_sharedPainter(const QPageSetupDialog*, intptr_t);
void miqt_exec_callback_QPageSetupDialog_inputMethodEvent(QPageSetupDialog*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QPageSetupDialog_inputMethodQuery(const QPageSetupDialog*, intptr_t, int);
bool miqt_exec_callback_QPageSetupDialog_focusNextPrevChild(QPageSetupDialog*, intptr_t, bool);
void miqt_exec_callback_QPageSetupDialog_timerEvent(QPageSetupDialog*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QPageSetupDialog_childEvent(QPageSetupDialog*, intptr_t, QChildEvent*);
void miqt_exec_callback_QPageSetupDialog_customEvent(QPageSetupDialog*, intptr_t, QEvent*);
void miqt_exec_callback_QPageSetupDialog_connectNotify(QPageSetupDialog*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPageSetupDialog_disconnectNotify(QPageSetupDialog*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQPageSetupDialog final : public QPageSetupDialog {
public:

	MiqtVirtualQPageSetupDialog(QWidget* parent): QPageSetupDialog(parent) {}
	MiqtVirtualQPageSetupDialog(QPrinter* printer): QPageSetupDialog(printer) {}
	MiqtVirtualQPageSetupDialog(): QPageSetupDialog() {}
	MiqtVirtualQPageSetupDialog(QPrinter* printer, QWidget* parent): QPageSetupDialog(printer, parent) {}

	virtual ~MiqtVirtualQPageSetupDialog() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__exec;

	// Subclass to allow providing a Go implementation
	virtual int exec() override {
		if (!handle__exec) {
			return QPageSetupDialog::exec();
		}

		int callback_return_value = miqt_exec_callback_QPageSetupDialog_exec(this, handle__exec.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QPageSetupDialog_virtualbase_exec(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__done;

	// Subclass to allow providing a Go implementation
	virtual void done(int result) override {
		if (!handle__done) {
			QPageSetupDialog::done(result);
			return;
		}

		int sigval1 = result;
		miqt_exec_callback_QPageSetupDialog_done(this, handle__done.value(), sigval1);

	}

	friend void QPageSetupDialog_virtualbase_done(void* self, int result);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__setVisible;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (!handle__setVisible) {
			QPageSetupDialog::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QPageSetupDialog_setVisible(this, handle__setVisible.value(), sigval1);

	}

	friend void QPageSetupDialog_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__sizeHint;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (!handle__sizeHint) {
			return QPageSetupDialog::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QPageSetupDialog_sizeHint(this, handle__sizeHint.value());
		return *callback_return_value;
	}

	friend QSize* QPageSetupDialog_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__minimumSizeHint;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (!handle__minimumSizeHint) {
			return QPageSetupDialog::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QPageSetupDialog_minimumSizeHint(this, handle__minimumSizeHint.value());
		return *callback_return_value;
	}

	friend QSize* QPageSetupDialog_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__open;

	// Subclass to allow providing a Go implementation
	virtual void open() override {
		if (!handle__open) {
			QPageSetupDialog::open();
			return;
		}

		miqt_exec_callback_QPageSetupDialog_open(this, handle__open.value());

	}

	friend void QPageSetupDialog_virtualbase_open(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__accept;

	// Subclass to allow providing a Go implementation
	virtual void accept() override {
		if (!handle__accept) {
			QPageSetupDialog::accept();
			return;
		}

		miqt_exec_callback_QPageSetupDialog_accept(this, handle__accept.value());

	}

	friend void QPageSetupDialog_virtualbase_accept(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__reject;

	// Subclass to allow providing a Go implementation
	virtual void reject() override {
		if (!handle__reject) {
			QPageSetupDialog::reject();
			return;
		}

		miqt_exec_callback_QPageSetupDialog_reject(this, handle__reject.value());

	}

	friend void QPageSetupDialog_virtualbase_reject(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__keyPressEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (!handle__keyPressEvent) {
			QPageSetupDialog::keyPressEvent(param1);
			return;
		}

		QKeyEvent* sigval1 = param1;
		miqt_exec_callback_QPageSetupDialog_keyPressEvent(this, handle__keyPressEvent.value(), sigval1);

	}

	friend void QPageSetupDialog_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__closeEvent;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* param1) override {
		if (!handle__closeEvent) {
			QPageSetupDialog::closeEvent(param1);
			return;
		}

		QCloseEvent* sigval1 = param1;
		miqt_exec_callback_QPageSetupDialog_closeEvent(this, handle__closeEvent.value(), sigval1);

	}

	friend void QPageSetupDialog_virtualbase_closeEvent(void* self, QCloseEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__showEvent;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (!handle__showEvent) {
			QPageSetupDialog::showEvent(param1);
			return;
		}

		QShowEvent* sigval1 = param1;
		miqt_exec_callback_QPageSetupDialog_showEvent(this, handle__showEvent.value(), sigval1);

	}

	friend void QPageSetupDialog_virtualbase_showEvent(void* self, QShowEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__resizeEvent;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (!handle__resizeEvent) {
			QPageSetupDialog::resizeEvent(param1);
			return;
		}

		QResizeEvent* sigval1 = param1;
		miqt_exec_callback_QPageSetupDialog_resizeEvent(this, handle__resizeEvent.value(), sigval1);

	}

	friend void QPageSetupDialog_virtualbase_resizeEvent(void* self, QResizeEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__contextMenuEvent;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (!handle__contextMenuEvent) {
			QPageSetupDialog::contextMenuEvent(param1);
			return;
		}

		QContextMenuEvent* sigval1 = param1;
		miqt_exec_callback_QPageSetupDialog_contextMenuEvent(this, handle__contextMenuEvent.value(), sigval1);

	}

	friend void QPageSetupDialog_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (!handle__eventFilter) {
			return QPageSetupDialog::eventFilter(param1, param2);
		}

		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;
		bool callback_return_value = miqt_exec_callback_QPageSetupDialog_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QPageSetupDialog_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__devType;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (!handle__devType) {
			return QPageSetupDialog::devType();
		}

		int callback_return_value = miqt_exec_callback_QPageSetupDialog_devType(this, handle__devType.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QPageSetupDialog_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__heightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (!handle__heightForWidth) {
			return QPageSetupDialog::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QPageSetupDialog_heightForWidth(this, handle__heightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QPageSetupDialog_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__hasHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (!handle__hasHeightForWidth) {
			return QPageSetupDialog::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QPageSetupDialog_hasHeightForWidth(this, handle__hasHeightForWidth.value());
		return callback_return_value;
	}

	friend bool QPageSetupDialog_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__paintEngine;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (!handle__paintEngine) {
			return QPageSetupDialog::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QPageSetupDialog_paintEngine(this, handle__paintEngine.value());
		return callback_return_value;
	}

	friend QPaintEngine* QPageSetupDialog_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QPageSetupDialog::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QPageSetupDialog_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QPageSetupDialog_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__mousePressEvent;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (!handle__mousePressEvent) {
			QPageSetupDialog::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QPageSetupDialog_mousePressEvent(this, handle__mousePressEvent.value(), sigval1);

	}

	friend void QPageSetupDialog_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__mouseReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (!handle__mouseReleaseEvent) {
			QPageSetupDialog::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QPageSetupDialog_mouseReleaseEvent(this, handle__mouseReleaseEvent.value(), sigval1);

	}

	friend void QPageSetupDialog_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__mouseDoubleClickEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (!handle__mouseDoubleClickEvent) {
			QPageSetupDialog::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QPageSetupDialog_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent.value(), sigval1);

	}

	friend void QPageSetupDialog_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__mouseMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (!handle__mouseMoveEvent) {
			QPageSetupDialog::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QPageSetupDialog_mouseMoveEvent(this, handle__mouseMoveEvent.value(), sigval1);

	}

	friend void QPageSetupDialog_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__wheelEvent;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (!handle__wheelEvent) {
			QPageSetupDialog::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QPageSetupDialog_wheelEvent(this, handle__wheelEvent.value(), sigval1);

	}

	friend void QPageSetupDialog_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__keyReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (!handle__keyReleaseEvent) {
			QPageSetupDialog::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QPageSetupDialog_keyReleaseEvent(this, handle__keyReleaseEvent.value(), sigval1);

	}

	friend void QPageSetupDialog_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__focusInEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (!handle__focusInEvent) {
			QPageSetupDialog::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QPageSetupDialog_focusInEvent(this, handle__focusInEvent.value(), sigval1);

	}

	friend void QPageSetupDialog_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__focusOutEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (!handle__focusOutEvent) {
			QPageSetupDialog::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QPageSetupDialog_focusOutEvent(this, handle__focusOutEvent.value(), sigval1);

	}

	friend void QPageSetupDialog_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__enterEvent;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (!handle__enterEvent) {
			QPageSetupDialog::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QPageSetupDialog_enterEvent(this, handle__enterEvent.value(), sigval1);

	}

	friend void QPageSetupDialog_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__leaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (!handle__leaveEvent) {
			QPageSetupDialog::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QPageSetupDialog_leaveEvent(this, handle__leaveEvent.value(), sigval1);

	}

	friend void QPageSetupDialog_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__paintEvent;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (!handle__paintEvent) {
			QPageSetupDialog::paintEvent(event);
			return;
		}

		QPaintEvent* sigval1 = event;
		miqt_exec_callback_QPageSetupDialog_paintEvent(this, handle__paintEvent.value(), sigval1);

	}

	friend void QPageSetupDialog_virtualbase_paintEvent(void* self, QPaintEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__moveEvent;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (!handle__moveEvent) {
			QPageSetupDialog::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QPageSetupDialog_moveEvent(this, handle__moveEvent.value(), sigval1);

	}

	friend void QPageSetupDialog_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__tabletEvent;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (!handle__tabletEvent) {
			QPageSetupDialog::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QPageSetupDialog_tabletEvent(this, handle__tabletEvent.value(), sigval1);

	}

	friend void QPageSetupDialog_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__actionEvent;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (!handle__actionEvent) {
			QPageSetupDialog::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QPageSetupDialog_actionEvent(this, handle__actionEvent.value(), sigval1);

	}

	friend void QPageSetupDialog_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__dragEnterEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (!handle__dragEnterEvent) {
			QPageSetupDialog::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QPageSetupDialog_dragEnterEvent(this, handle__dragEnterEvent.value(), sigval1);

	}

	friend void QPageSetupDialog_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__dragMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (!handle__dragMoveEvent) {
			QPageSetupDialog::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QPageSetupDialog_dragMoveEvent(this, handle__dragMoveEvent.value(), sigval1);

	}

	friend void QPageSetupDialog_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__dragLeaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (!handle__dragLeaveEvent) {
			QPageSetupDialog::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QPageSetupDialog_dragLeaveEvent(this, handle__dragLeaveEvent.value(), sigval1);

	}

	friend void QPageSetupDialog_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__dropEvent;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (!handle__dropEvent) {
			QPageSetupDialog::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QPageSetupDialog_dropEvent(this, handle__dropEvent.value(), sigval1);

	}

	friend void QPageSetupDialog_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__hideEvent;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (!handle__hideEvent) {
			QPageSetupDialog::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QPageSetupDialog_hideEvent(this, handle__hideEvent.value(), sigval1);

	}

	friend void QPageSetupDialog_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__nativeEvent;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (!handle__nativeEvent) {
			return QPageSetupDialog::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QPageSetupDialog_nativeEvent(this, handle__nativeEvent.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QPageSetupDialog_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__changeEvent;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (!handle__changeEvent) {
			QPageSetupDialog::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QPageSetupDialog_changeEvent(this, handle__changeEvent.value(), sigval1);

	}

	friend void QPageSetupDialog_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__metric;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (!handle__metric) {
			return QPageSetupDialog::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QPageSetupDialog_metric(this, handle__metric.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QPageSetupDialog_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__initPainter;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (!handle__initPainter) {
			QPageSetupDialog::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QPageSetupDialog_initPainter(this, handle__initPainter.value(), sigval1);

	}

	friend void QPageSetupDialog_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__redirected;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (!handle__redirected) {
			return QPageSetupDialog::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QPageSetupDialog_redirected(this, handle__redirected.value(), sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QPageSetupDialog_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__sharedPainter;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (!handle__sharedPainter) {
			return QPageSetupDialog::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QPageSetupDialog_sharedPainter(this, handle__sharedPainter.value());
		return callback_return_value;
	}

	friend QPainter* QPageSetupDialog_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__inputMethodEvent;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (!handle__inputMethodEvent) {
			QPageSetupDialog::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QPageSetupDialog_inputMethodEvent(this, handle__inputMethodEvent.value(), sigval1);

	}

	friend void QPageSetupDialog_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__inputMethodQuery;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (!handle__inputMethodQuery) {
			return QPageSetupDialog::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QPageSetupDialog_inputMethodQuery(this, handle__inputMethodQuery.value(), sigval1);
		return *callback_return_value;
	}

	friend QVariant* QPageSetupDialog_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__focusNextPrevChild;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (!handle__focusNextPrevChild) {
			return QPageSetupDialog::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QPageSetupDialog_focusNextPrevChild(this, handle__focusNextPrevChild.value(), sigval1);
		return callback_return_value;
	}

	friend bool QPageSetupDialog_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QPageSetupDialog::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QPageSetupDialog_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QPageSetupDialog_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QPageSetupDialog::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QPageSetupDialog_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QPageSetupDialog_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QPageSetupDialog::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QPageSetupDialog_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QPageSetupDialog_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QPageSetupDialog::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QPageSetupDialog_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QPageSetupDialog_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QPageSetupDialog::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QPageSetupDialog_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QPageSetupDialog_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QPageSetupDialog_protectedbase_adjustPosition(bool* _dynamic_cast_ok, void* self, QWidget* param1);
	friend void QPageSetupDialog_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QPageSetupDialog_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QPageSetupDialog_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QPageSetupDialog_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QPageSetupDialog_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QPageSetupDialog_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QPageSetupDialog_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QPageSetupDialog_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QPageSetupDialog_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QPageSetupDialog* QPageSetupDialog_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQPageSetupDialog(parent);
}

QPageSetupDialog* QPageSetupDialog_new2(QPrinter* printer) {
	return new (std::nothrow) MiqtVirtualQPageSetupDialog(printer);
}

QPageSetupDialog* QPageSetupDialog_new3() {
	return new (std::nothrow) MiqtVirtualQPageSetupDialog();
}

QPageSetupDialog* QPageSetupDialog_new4(QPrinter* printer, QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQPageSetupDialog(printer, parent);
}

void QPageSetupDialog_virtbase(QPageSetupDialog* src, QDialog** outptr_QDialog) {
	*outptr_QDialog = static_cast<QDialog*>(src);
}

QMetaObject* QPageSetupDialog_metaObject(const QPageSetupDialog* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPageSetupDialog_metacast(QPageSetupDialog* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPageSetupDialog_tr(const char* s) {
	QString _ret = QPageSetupDialog::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPageSetupDialog_trUtf8(const char* s) {
	QString _ret = QPageSetupDialog::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QPageSetupDialog_exec(QPageSetupDialog* self) {
	return self->exec();
}

void QPageSetupDialog_done(QPageSetupDialog* self, int result) {
	self->done(static_cast<int>(result));
}

QPrinter* QPageSetupDialog_printer(QPageSetupDialog* self) {
	return self->printer();
}

struct miqt_string QPageSetupDialog_tr2(const char* s, const char* c) {
	QString _ret = QPageSetupDialog::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPageSetupDialog_tr3(const char* s, const char* c, int n) {
	QString _ret = QPageSetupDialog::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPageSetupDialog_trUtf82(const char* s, const char* c) {
	QString _ret = QPageSetupDialog::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPageSetupDialog_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QPageSetupDialog::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPageSetupDialog_override_virtual_exec(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__exec = std::move(slot_handle);
	return true;
}

int QPageSetupDialog_virtualbase_exec(void* self) {
	return static_cast<MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::exec();
}

bool QPageSetupDialog_override_virtual_done(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__done = std::move(slot_handle);
	return true;
}

void QPageSetupDialog_virtualbase_done(void* self, int result) {
	static_cast<MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::done(static_cast<int>(result));
}

bool QPageSetupDialog_override_virtual_setVisible(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = std::move(slot_handle);
	return true;
}

void QPageSetupDialog_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::setVisible(visible);
}

bool QPageSetupDialog_override_virtual_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	return true;
}

QSize* QPageSetupDialog_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::sizeHint());
}

bool QPageSetupDialog_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	return true;
}

QSize* QPageSetupDialog_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::minimumSizeHint());
}

bool QPageSetupDialog_override_virtual_open(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__open = std::move(slot_handle);
	return true;
}

void QPageSetupDialog_virtualbase_open(void* self) {
	static_cast<MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::open();
}

bool QPageSetupDialog_override_virtual_accept(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__accept = std::move(slot_handle);
	return true;
}

void QPageSetupDialog_virtualbase_accept(void* self) {
	static_cast<MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::accept();
}

bool QPageSetupDialog_override_virtual_reject(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__reject = std::move(slot_handle);
	return true;
}

void QPageSetupDialog_virtualbase_reject(void* self) {
	static_cast<MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::reject();
}

bool QPageSetupDialog_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = std::move(slot_handle);
	return true;
}

void QPageSetupDialog_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {
	static_cast<MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::keyPressEvent(param1);
}

bool QPageSetupDialog_override_virtual_closeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = std::move(slot_handle);
	return true;
}

void QPageSetupDialog_virtualbase_closeEvent(void* self, QCloseEvent* param1) {
	static_cast<MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::closeEvent(param1);
}

bool QPageSetupDialog_override_virtual_showEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = std::move(slot_handle);
	return true;
}

void QPageSetupDialog_virtualbase_showEvent(void* self, QShowEvent* param1) {
	static_cast<MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::showEvent(param1);
}

bool QPageSetupDialog_override_virtual_resizeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = std::move(slot_handle);
	return true;
}

void QPageSetupDialog_virtualbase_resizeEvent(void* self, QResizeEvent* param1) {
	static_cast<MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::resizeEvent(param1);
}

bool QPageSetupDialog_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = std::move(slot_handle);
	return true;
}

void QPageSetupDialog_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1) {
	static_cast<MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::contextMenuEvent(param1);
}

bool QPageSetupDialog_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QPageSetupDialog_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {
	return static_cast<MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::eventFilter(param1, param2);
}

bool QPageSetupDialog_override_virtual_devType(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = std::move(slot_handle);
	return true;
}

int QPageSetupDialog_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::devType();
}

bool QPageSetupDialog_override_virtual_heightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = std::move(slot_handle);
	return true;
}

int QPageSetupDialog_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::heightForWidth(static_cast<int>(param1));
}

bool QPageSetupDialog_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = std::move(slot_handle);
	return true;
}

bool QPageSetupDialog_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::hasHeightForWidth();
}

bool QPageSetupDialog_override_virtual_paintEngine(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = std::move(slot_handle);
	return true;
}

QPaintEngine* QPageSetupDialog_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::paintEngine();
}

bool QPageSetupDialog_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QPageSetupDialog_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::event(event);
}

bool QPageSetupDialog_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = std::move(slot_handle);
	return true;
}

void QPageSetupDialog_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::mousePressEvent(event);
}

bool QPageSetupDialog_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = std::move(slot_handle);
	return true;
}

void QPageSetupDialog_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::mouseReleaseEvent(event);
}

bool QPageSetupDialog_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = std::move(slot_handle);
	return true;
}

void QPageSetupDialog_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::mouseDoubleClickEvent(event);
}

bool QPageSetupDialog_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = std::move(slot_handle);
	return true;
}

void QPageSetupDialog_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::mouseMoveEvent(event);
}

bool QPageSetupDialog_override_virtual_wheelEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = std::move(slot_handle);
	return true;
}

void QPageSetupDialog_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::wheelEvent(event);
}

bool QPageSetupDialog_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = std::move(slot_handle);
	return true;
}

void QPageSetupDialog_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::keyReleaseEvent(event);
}

bool QPageSetupDialog_override_virtual_focusInEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = std::move(slot_handle);
	return true;
}

void QPageSetupDialog_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::focusInEvent(event);
}

bool QPageSetupDialog_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = std::move(slot_handle);
	return true;
}

void QPageSetupDialog_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::focusOutEvent(event);
}

bool QPageSetupDialog_override_virtual_enterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = std::move(slot_handle);
	return true;
}

void QPageSetupDialog_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::enterEvent(event);
}

bool QPageSetupDialog_override_virtual_leaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = std::move(slot_handle);
	return true;
}

void QPageSetupDialog_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::leaveEvent(event);
}

bool QPageSetupDialog_override_virtual_paintEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = std::move(slot_handle);
	return true;
}

void QPageSetupDialog_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	static_cast<MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::paintEvent(event);
}

bool QPageSetupDialog_override_virtual_moveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = std::move(slot_handle);
	return true;
}

void QPageSetupDialog_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::moveEvent(event);
}

bool QPageSetupDialog_override_virtual_tabletEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = std::move(slot_handle);
	return true;
}

void QPageSetupDialog_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::tabletEvent(event);
}

bool QPageSetupDialog_override_virtual_actionEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = std::move(slot_handle);
	return true;
}

void QPageSetupDialog_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::actionEvent(event);
}

bool QPageSetupDialog_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = std::move(slot_handle);
	return true;
}

void QPageSetupDialog_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::dragEnterEvent(event);
}

bool QPageSetupDialog_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = std::move(slot_handle);
	return true;
}

void QPageSetupDialog_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::dragMoveEvent(event);
}

bool QPageSetupDialog_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = std::move(slot_handle);
	return true;
}

void QPageSetupDialog_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::dragLeaveEvent(event);
}

bool QPageSetupDialog_override_virtual_dropEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = std::move(slot_handle);
	return true;
}

void QPageSetupDialog_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::dropEvent(event);
}

bool QPageSetupDialog_override_virtual_hideEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = std::move(slot_handle);
	return true;
}

void QPageSetupDialog_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::hideEvent(event);
}

bool QPageSetupDialog_override_virtual_nativeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = std::move(slot_handle);
	return true;
}

bool QPageSetupDialog_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QPageSetupDialog_override_virtual_changeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = std::move(slot_handle);
	return true;
}

void QPageSetupDialog_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::changeEvent(param1);
}

bool QPageSetupDialog_override_virtual_metric(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = std::move(slot_handle);
	return true;
}

int QPageSetupDialog_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::metric(static_cast<MiqtVirtualQPageSetupDialog::PaintDeviceMetric>(param1));
}

bool QPageSetupDialog_override_virtual_initPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = std::move(slot_handle);
	return true;
}

void QPageSetupDialog_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::initPainter(painter);
}

bool QPageSetupDialog_override_virtual_redirected(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = std::move(slot_handle);
	return true;
}

QPaintDevice* QPageSetupDialog_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::redirected(offset);
}

bool QPageSetupDialog_override_virtual_sharedPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = std::move(slot_handle);
	return true;
}

QPainter* QPageSetupDialog_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::sharedPainter();
}

bool QPageSetupDialog_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = std::move(slot_handle);
	return true;
}

void QPageSetupDialog_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::inputMethodEvent(param1);
}

bool QPageSetupDialog_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	return true;
}

QVariant* QPageSetupDialog_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QPageSetupDialog_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = std::move(slot_handle);
	return true;
}

bool QPageSetupDialog_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::focusNextPrevChild(next);
}

bool QPageSetupDialog_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QPageSetupDialog_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::timerEvent(event);
}

bool QPageSetupDialog_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QPageSetupDialog_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::childEvent(event);
}

bool QPageSetupDialog_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QPageSetupDialog_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::customEvent(event);
}

bool QPageSetupDialog_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QPageSetupDialog_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::connectNotify(*signal);
}

bool QPageSetupDialog_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPageSetupDialog> slot_handle(slot);
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QPageSetupDialog_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQPageSetupDialog*>(self)->QPageSetupDialog::disconnectNotify(*signal);
}

void QPageSetupDialog_protectedbase_adjustPosition(bool* _dynamic_cast_ok, void* self, QWidget* param1) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->adjustPosition(param1);
}

void QPageSetupDialog_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QPageSetupDialog_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QPageSetupDialog_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QPageSetupDialog_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QPageSetupDialog_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QPageSetupDialog_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QPageSetupDialog_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QPageSetupDialog_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QPageSetupDialog_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQPageSetupDialog* self_cast = dynamic_cast<MiqtVirtualQPageSetupDialog*>( (QPageSetupDialog*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QPageSetupDialog_delete(QPageSetupDialog* self) {
	delete self;
}

