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
#include <QPrintPreviewWidget>
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
#include <qprintpreviewwidget.h>
#include "gen_qprintpreviewwidget.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QPrintPreviewWidget(intptr_t);
void miqt_exec_callback_QPrintPreviewWidget_paintRequested(intptr_t, QPrinter*);
void miqt_exec_callback_QPrintPreviewWidget_previewChanged(intptr_t);
void miqt_exec_callback_QPrintPreviewWidget_setVisible(QPrintPreviewWidget*, intptr_t, bool);
int miqt_exec_callback_QPrintPreviewWidget_devType(const QPrintPreviewWidget*, intptr_t);
QSize* miqt_exec_callback_QPrintPreviewWidget_sizeHint(const QPrintPreviewWidget*, intptr_t);
QSize* miqt_exec_callback_QPrintPreviewWidget_minimumSizeHint(const QPrintPreviewWidget*, intptr_t);
int miqt_exec_callback_QPrintPreviewWidget_heightForWidth(const QPrintPreviewWidget*, intptr_t, int);
bool miqt_exec_callback_QPrintPreviewWidget_hasHeightForWidth(const QPrintPreviewWidget*, intptr_t);
QPaintEngine* miqt_exec_callback_QPrintPreviewWidget_paintEngine(const QPrintPreviewWidget*, intptr_t);
bool miqt_exec_callback_QPrintPreviewWidget_event(QPrintPreviewWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QPrintPreviewWidget_mousePressEvent(QPrintPreviewWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPrintPreviewWidget_mouseReleaseEvent(QPrintPreviewWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPrintPreviewWidget_mouseDoubleClickEvent(QPrintPreviewWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPrintPreviewWidget_mouseMoveEvent(QPrintPreviewWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPrintPreviewWidget_wheelEvent(QPrintPreviewWidget*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QPrintPreviewWidget_keyPressEvent(QPrintPreviewWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QPrintPreviewWidget_keyReleaseEvent(QPrintPreviewWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QPrintPreviewWidget_focusInEvent(QPrintPreviewWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QPrintPreviewWidget_focusOutEvent(QPrintPreviewWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QPrintPreviewWidget_enterEvent(QPrintPreviewWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QPrintPreviewWidget_leaveEvent(QPrintPreviewWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QPrintPreviewWidget_paintEvent(QPrintPreviewWidget*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QPrintPreviewWidget_moveEvent(QPrintPreviewWidget*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QPrintPreviewWidget_resizeEvent(QPrintPreviewWidget*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QPrintPreviewWidget_closeEvent(QPrintPreviewWidget*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QPrintPreviewWidget_contextMenuEvent(QPrintPreviewWidget*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QPrintPreviewWidget_tabletEvent(QPrintPreviewWidget*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QPrintPreviewWidget_actionEvent(QPrintPreviewWidget*, intptr_t, QActionEvent*);
void miqt_exec_callback_QPrintPreviewWidget_dragEnterEvent(QPrintPreviewWidget*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QPrintPreviewWidget_dragMoveEvent(QPrintPreviewWidget*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QPrintPreviewWidget_dragLeaveEvent(QPrintPreviewWidget*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QPrintPreviewWidget_dropEvent(QPrintPreviewWidget*, intptr_t, QDropEvent*);
void miqt_exec_callback_QPrintPreviewWidget_showEvent(QPrintPreviewWidget*, intptr_t, QShowEvent*);
void miqt_exec_callback_QPrintPreviewWidget_hideEvent(QPrintPreviewWidget*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QPrintPreviewWidget_nativeEvent(QPrintPreviewWidget*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QPrintPreviewWidget_changeEvent(QPrintPreviewWidget*, intptr_t, QEvent*);
int miqt_exec_callback_QPrintPreviewWidget_metric(const QPrintPreviewWidget*, intptr_t, int);
void miqt_exec_callback_QPrintPreviewWidget_initPainter(const QPrintPreviewWidget*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QPrintPreviewWidget_redirected(const QPrintPreviewWidget*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QPrintPreviewWidget_sharedPainter(const QPrintPreviewWidget*, intptr_t);
void miqt_exec_callback_QPrintPreviewWidget_inputMethodEvent(QPrintPreviewWidget*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QPrintPreviewWidget_inputMethodQuery(const QPrintPreviewWidget*, intptr_t, int);
bool miqt_exec_callback_QPrintPreviewWidget_focusNextPrevChild(QPrintPreviewWidget*, intptr_t, bool);
bool miqt_exec_callback_QPrintPreviewWidget_eventFilter(QPrintPreviewWidget*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QPrintPreviewWidget_timerEvent(QPrintPreviewWidget*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QPrintPreviewWidget_childEvent(QPrintPreviewWidget*, intptr_t, QChildEvent*);
void miqt_exec_callback_QPrintPreviewWidget_customEvent(QPrintPreviewWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QPrintPreviewWidget_connectNotify(QPrintPreviewWidget*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPrintPreviewWidget_disconnectNotify(QPrintPreviewWidget*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQPrintPreviewWidget final : public QPrintPreviewWidget {
public:

	MiqtVirtualQPrintPreviewWidget(QWidget* parent): QPrintPreviewWidget(parent) {}
	MiqtVirtualQPrintPreviewWidget(QPrinter* printer): QPrintPreviewWidget(printer) {}
	MiqtVirtualQPrintPreviewWidget(): QPrintPreviewWidget() {}
	MiqtVirtualQPrintPreviewWidget(QPrinter* printer, QWidget* parent): QPrintPreviewWidget(printer, parent) {}
	MiqtVirtualQPrintPreviewWidget(QPrinter* printer, QWidget* parent, Qt::WindowFlags flags): QPrintPreviewWidget(printer, parent, flags) {}
	MiqtVirtualQPrintPreviewWidget(QWidget* parent, Qt::WindowFlags flags): QPrintPreviewWidget(parent, flags) {}

	virtual ~MiqtVirtualQPrintPreviewWidget() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__setVisible;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (!handle__setVisible) {
			QPrintPreviewWidget::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QPrintPreviewWidget_setVisible(this, handle__setVisible.value(), sigval1);

	}

	friend void QPrintPreviewWidget_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__devType;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (!handle__devType) {
			return QPrintPreviewWidget::devType();
		}

		int callback_return_value = miqt_exec_callback_QPrintPreviewWidget_devType(this, handle__devType.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QPrintPreviewWidget_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__sizeHint;
	bool owns_return__sizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (!handle__sizeHint) {
			return QPrintPreviewWidget::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QPrintPreviewWidget_sizeHint(this, handle__sizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__sizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QPrintPreviewWidget_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__minimumSizeHint;
	bool owns_return__minimumSizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (!handle__minimumSizeHint) {
			return QPrintPreviewWidget::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QPrintPreviewWidget_minimumSizeHint(this, handle__minimumSizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__minimumSizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QPrintPreviewWidget_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__heightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (!handle__heightForWidth) {
			return QPrintPreviewWidget::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QPrintPreviewWidget_heightForWidth(this, handle__heightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QPrintPreviewWidget_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__hasHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (!handle__hasHeightForWidth) {
			return QPrintPreviewWidget::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QPrintPreviewWidget_hasHeightForWidth(this, handle__hasHeightForWidth.value());
		return callback_return_value;
	}

	friend bool QPrintPreviewWidget_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__paintEngine;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (!handle__paintEngine) {
			return QPrintPreviewWidget::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QPrintPreviewWidget_paintEngine(this, handle__paintEngine.value());
		return callback_return_value;
	}

	friend QPaintEngine* QPrintPreviewWidget_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QPrintPreviewWidget::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QPrintPreviewWidget_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QPrintPreviewWidget_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__mousePressEvent;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (!handle__mousePressEvent) {
			QPrintPreviewWidget::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QPrintPreviewWidget_mousePressEvent(this, handle__mousePressEvent.value(), sigval1);

	}

	friend void QPrintPreviewWidget_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__mouseReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (!handle__mouseReleaseEvent) {
			QPrintPreviewWidget::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QPrintPreviewWidget_mouseReleaseEvent(this, handle__mouseReleaseEvent.value(), sigval1);

	}

	friend void QPrintPreviewWidget_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__mouseDoubleClickEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (!handle__mouseDoubleClickEvent) {
			QPrintPreviewWidget::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QPrintPreviewWidget_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent.value(), sigval1);

	}

	friend void QPrintPreviewWidget_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__mouseMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (!handle__mouseMoveEvent) {
			QPrintPreviewWidget::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QPrintPreviewWidget_mouseMoveEvent(this, handle__mouseMoveEvent.value(), sigval1);

	}

	friend void QPrintPreviewWidget_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__wheelEvent;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (!handle__wheelEvent) {
			QPrintPreviewWidget::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QPrintPreviewWidget_wheelEvent(this, handle__wheelEvent.value(), sigval1);

	}

	friend void QPrintPreviewWidget_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__keyPressEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (!handle__keyPressEvent) {
			QPrintPreviewWidget::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QPrintPreviewWidget_keyPressEvent(this, handle__keyPressEvent.value(), sigval1);

	}

	friend void QPrintPreviewWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__keyReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (!handle__keyReleaseEvent) {
			QPrintPreviewWidget::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QPrintPreviewWidget_keyReleaseEvent(this, handle__keyReleaseEvent.value(), sigval1);

	}

	friend void QPrintPreviewWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__focusInEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (!handle__focusInEvent) {
			QPrintPreviewWidget::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QPrintPreviewWidget_focusInEvent(this, handle__focusInEvent.value(), sigval1);

	}

	friend void QPrintPreviewWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__focusOutEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (!handle__focusOutEvent) {
			QPrintPreviewWidget::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QPrintPreviewWidget_focusOutEvent(this, handle__focusOutEvent.value(), sigval1);

	}

	friend void QPrintPreviewWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__enterEvent;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (!handle__enterEvent) {
			QPrintPreviewWidget::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QPrintPreviewWidget_enterEvent(this, handle__enterEvent.value(), sigval1);

	}

	friend void QPrintPreviewWidget_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__leaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (!handle__leaveEvent) {
			QPrintPreviewWidget::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QPrintPreviewWidget_leaveEvent(this, handle__leaveEvent.value(), sigval1);

	}

	friend void QPrintPreviewWidget_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__paintEvent;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (!handle__paintEvent) {
			QPrintPreviewWidget::paintEvent(event);
			return;
		}

		QPaintEvent* sigval1 = event;
		miqt_exec_callback_QPrintPreviewWidget_paintEvent(this, handle__paintEvent.value(), sigval1);

	}

	friend void QPrintPreviewWidget_virtualbase_paintEvent(void* self, QPaintEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__moveEvent;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (!handle__moveEvent) {
			QPrintPreviewWidget::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QPrintPreviewWidget_moveEvent(this, handle__moveEvent.value(), sigval1);

	}

	friend void QPrintPreviewWidget_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__resizeEvent;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (!handle__resizeEvent) {
			QPrintPreviewWidget::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QPrintPreviewWidget_resizeEvent(this, handle__resizeEvent.value(), sigval1);

	}

	friend void QPrintPreviewWidget_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__closeEvent;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (!handle__closeEvent) {
			QPrintPreviewWidget::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QPrintPreviewWidget_closeEvent(this, handle__closeEvent.value(), sigval1);

	}

	friend void QPrintPreviewWidget_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__contextMenuEvent;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (!handle__contextMenuEvent) {
			QPrintPreviewWidget::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QPrintPreviewWidget_contextMenuEvent(this, handle__contextMenuEvent.value(), sigval1);

	}

	friend void QPrintPreviewWidget_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__tabletEvent;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (!handle__tabletEvent) {
			QPrintPreviewWidget::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QPrintPreviewWidget_tabletEvent(this, handle__tabletEvent.value(), sigval1);

	}

	friend void QPrintPreviewWidget_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__actionEvent;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (!handle__actionEvent) {
			QPrintPreviewWidget::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QPrintPreviewWidget_actionEvent(this, handle__actionEvent.value(), sigval1);

	}

	friend void QPrintPreviewWidget_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__dragEnterEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (!handle__dragEnterEvent) {
			QPrintPreviewWidget::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QPrintPreviewWidget_dragEnterEvent(this, handle__dragEnterEvent.value(), sigval1);

	}

	friend void QPrintPreviewWidget_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__dragMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (!handle__dragMoveEvent) {
			QPrintPreviewWidget::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QPrintPreviewWidget_dragMoveEvent(this, handle__dragMoveEvent.value(), sigval1);

	}

	friend void QPrintPreviewWidget_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__dragLeaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (!handle__dragLeaveEvent) {
			QPrintPreviewWidget::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QPrintPreviewWidget_dragLeaveEvent(this, handle__dragLeaveEvent.value(), sigval1);

	}

	friend void QPrintPreviewWidget_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__dropEvent;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (!handle__dropEvent) {
			QPrintPreviewWidget::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QPrintPreviewWidget_dropEvent(this, handle__dropEvent.value(), sigval1);

	}

	friend void QPrintPreviewWidget_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__showEvent;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (!handle__showEvent) {
			QPrintPreviewWidget::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QPrintPreviewWidget_showEvent(this, handle__showEvent.value(), sigval1);

	}

	friend void QPrintPreviewWidget_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__hideEvent;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (!handle__hideEvent) {
			QPrintPreviewWidget::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QPrintPreviewWidget_hideEvent(this, handle__hideEvent.value(), sigval1);

	}

	friend void QPrintPreviewWidget_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__nativeEvent;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (!handle__nativeEvent) {
			return QPrintPreviewWidget::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QPrintPreviewWidget_nativeEvent(this, handle__nativeEvent.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QPrintPreviewWidget_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__changeEvent;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (!handle__changeEvent) {
			QPrintPreviewWidget::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QPrintPreviewWidget_changeEvent(this, handle__changeEvent.value(), sigval1);

	}

	friend void QPrintPreviewWidget_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__metric;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (!handle__metric) {
			return QPrintPreviewWidget::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QPrintPreviewWidget_metric(this, handle__metric.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QPrintPreviewWidget_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__initPainter;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (!handle__initPainter) {
			QPrintPreviewWidget::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QPrintPreviewWidget_initPainter(this, handle__initPainter.value(), sigval1);

	}

	friend void QPrintPreviewWidget_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__redirected;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (!handle__redirected) {
			return QPrintPreviewWidget::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QPrintPreviewWidget_redirected(this, handle__redirected.value(), sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QPrintPreviewWidget_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__sharedPainter;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (!handle__sharedPainter) {
			return QPrintPreviewWidget::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QPrintPreviewWidget_sharedPainter(this, handle__sharedPainter.value());
		return callback_return_value;
	}

	friend QPainter* QPrintPreviewWidget_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__inputMethodEvent;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (!handle__inputMethodEvent) {
			QPrintPreviewWidget::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QPrintPreviewWidget_inputMethodEvent(this, handle__inputMethodEvent.value(), sigval1);

	}

	friend void QPrintPreviewWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__inputMethodQuery;
	bool owns_return__inputMethodQuery = false;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (!handle__inputMethodQuery) {
			return QPrintPreviewWidget::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QPrintPreviewWidget_inputMethodQuery(this, handle__inputMethodQuery.value(), sigval1);
		std::unique_ptr<QVariant> callback_return_value_owner;
		if (owns_return__inputMethodQuery) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QVariant* QPrintPreviewWidget_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__focusNextPrevChild;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (!handle__focusNextPrevChild) {
			return QPrintPreviewWidget::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QPrintPreviewWidget_focusNextPrevChild(this, handle__focusNextPrevChild.value(), sigval1);
		return callback_return_value;
	}

	friend bool QPrintPreviewWidget_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QPrintPreviewWidget::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QPrintPreviewWidget_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QPrintPreviewWidget_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QPrintPreviewWidget::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QPrintPreviewWidget_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QPrintPreviewWidget_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QPrintPreviewWidget::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QPrintPreviewWidget_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QPrintPreviewWidget_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QPrintPreviewWidget::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QPrintPreviewWidget_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QPrintPreviewWidget_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QPrintPreviewWidget::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QPrintPreviewWidget_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QPrintPreviewWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QPrintPreviewWidget::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QPrintPreviewWidget_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QPrintPreviewWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QPrintPreviewWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QPrintPreviewWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QPrintPreviewWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QPrintPreviewWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QPrintPreviewWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QPrintPreviewWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QPrintPreviewWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QPrintPreviewWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QPrintPreviewWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QPrintPreviewWidget* QPrintPreviewWidget_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQPrintPreviewWidget(parent);
}

QPrintPreviewWidget* QPrintPreviewWidget_new2(QPrinter* printer) {
	return new (std::nothrow) MiqtVirtualQPrintPreviewWidget(printer);
}

QPrintPreviewWidget* QPrintPreviewWidget_new3() {
	return new (std::nothrow) MiqtVirtualQPrintPreviewWidget();
}

QPrintPreviewWidget* QPrintPreviewWidget_new4(QPrinter* printer, QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQPrintPreviewWidget(printer, parent);
}

QPrintPreviewWidget* QPrintPreviewWidget_new5(QPrinter* printer, QWidget* parent, int flags) {
	return new (std::nothrow) MiqtVirtualQPrintPreviewWidget(printer, parent, static_cast<Qt::WindowFlags>(flags));
}

QPrintPreviewWidget* QPrintPreviewWidget_new6(QWidget* parent, int flags) {
	return new (std::nothrow) MiqtVirtualQPrintPreviewWidget(parent, static_cast<Qt::WindowFlags>(flags));
}

void QPrintPreviewWidget_virtbase(QPrintPreviewWidget* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QPrintPreviewWidget_metaObject(const QPrintPreviewWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPrintPreviewWidget_metacast(QPrintPreviewWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPrintPreviewWidget_tr(const char* s) {
	QString _ret = QPrintPreviewWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPrintPreviewWidget_trUtf8(const char* s) {
	QString _ret = QPrintPreviewWidget::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

double QPrintPreviewWidget_zoomFactor(const QPrintPreviewWidget* self) {
	qreal _ret = self->zoomFactor();
	return static_cast<double>(_ret);
}

int QPrintPreviewWidget_orientation(const QPrintPreviewWidget* self) {
	QPrinter::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

int QPrintPreviewWidget_viewMode(const QPrintPreviewWidget* self) {
	QPrintPreviewWidget::ViewMode _ret = self->viewMode();
	return static_cast<int>(_ret);
}

int QPrintPreviewWidget_zoomMode(const QPrintPreviewWidget* self) {
	QPrintPreviewWidget::ZoomMode _ret = self->zoomMode();
	return static_cast<int>(_ret);
}

int QPrintPreviewWidget_currentPage(const QPrintPreviewWidget* self) {
	return self->currentPage();
}

int QPrintPreviewWidget_pageCount(const QPrintPreviewWidget* self) {
	return self->pageCount();
}

void QPrintPreviewWidget_setVisible(QPrintPreviewWidget* self, bool visible) {
	self->setVisible(visible);
}

void QPrintPreviewWidget_print(QPrintPreviewWidget* self) {
	self->print();
}

void QPrintPreviewWidget_zoomIn(QPrintPreviewWidget* self) {
	self->zoomIn();
}

void QPrintPreviewWidget_zoomOut(QPrintPreviewWidget* self) {
	self->zoomOut();
}

void QPrintPreviewWidget_setZoomFactor(QPrintPreviewWidget* self, double zoomFactor) {
	self->setZoomFactor(static_cast<qreal>(zoomFactor));
}

void QPrintPreviewWidget_setOrientation(QPrintPreviewWidget* self, int orientation) {
	self->setOrientation(static_cast<QPrinter::Orientation>(orientation));
}

void QPrintPreviewWidget_setViewMode(QPrintPreviewWidget* self, int viewMode) {
	self->setViewMode(static_cast<QPrintPreviewWidget::ViewMode>(viewMode));
}

void QPrintPreviewWidget_setZoomMode(QPrintPreviewWidget* self, int zoomMode) {
	self->setZoomMode(static_cast<QPrintPreviewWidget::ZoomMode>(zoomMode));
}

void QPrintPreviewWidget_setCurrentPage(QPrintPreviewWidget* self, int pageNumber) {
	self->setCurrentPage(static_cast<int>(pageNumber));
}

void QPrintPreviewWidget_fitToWidth(QPrintPreviewWidget* self) {
	self->fitToWidth();
}

void QPrintPreviewWidget_fitInView(QPrintPreviewWidget* self) {
	self->fitInView();
}

void QPrintPreviewWidget_setLandscapeOrientation(QPrintPreviewWidget* self) {
	self->setLandscapeOrientation();
}

void QPrintPreviewWidget_setPortraitOrientation(QPrintPreviewWidget* self) {
	self->setPortraitOrientation();
}

void QPrintPreviewWidget_setSinglePageViewMode(QPrintPreviewWidget* self) {
	self->setSinglePageViewMode();
}

void QPrintPreviewWidget_setFacingPagesViewMode(QPrintPreviewWidget* self) {
	self->setFacingPagesViewMode();
}

void QPrintPreviewWidget_setAllPagesViewMode(QPrintPreviewWidget* self) {
	self->setAllPagesViewMode();
}

void QPrintPreviewWidget_updatePreview(QPrintPreviewWidget* self) {
	self->updatePreview();
}

void QPrintPreviewWidget_paintRequested(QPrintPreviewWidget* self, QPrinter* printer) {
	self->paintRequested(printer);
}

void* QPrintPreviewWidget_connect_paintRequested(QPrintPreviewWidget* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget>>(slot);
	return new QMetaObject::Connection(QPrintPreviewWidget::connect(self, static_cast<void (QPrintPreviewWidget::*)(QPrinter*)>(&QPrintPreviewWidget::paintRequested), self, [slot_handle](QPrinter* printer) {
		intptr_t slot = slot_handle->value();
		QPrinter* sigval1 = printer;
		miqt_exec_callback_QPrintPreviewWidget_paintRequested(slot, sigval1);
	}));
}

void QPrintPreviewWidget_previewChanged(QPrintPreviewWidget* self) {
	self->previewChanged();
}

void* QPrintPreviewWidget_connect_previewChanged(QPrintPreviewWidget* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget>>(slot);
	return new QMetaObject::Connection(QPrintPreviewWidget::connect(self, static_cast<void (QPrintPreviewWidget::*)()>(&QPrintPreviewWidget::previewChanged), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QPrintPreviewWidget_previewChanged(slot);
	}));
}

struct miqt_string QPrintPreviewWidget_tr2(const char* s, const char* c) {
	QString _ret = QPrintPreviewWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPrintPreviewWidget_tr3(const char* s, const char* c, int n) {
	QString _ret = QPrintPreviewWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPrintPreviewWidget_trUtf82(const char* s, const char* c) {
	QString _ret = QPrintPreviewWidget::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPrintPreviewWidget_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QPrintPreviewWidget::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPrintPreviewWidget_zoomInWithZoom(QPrintPreviewWidget* self, double zoom) {
	self->zoomIn(static_cast<qreal>(zoom));
}

void QPrintPreviewWidget_zoomOutWithZoom(QPrintPreviewWidget* self, double zoom) {
	self->zoomOut(static_cast<qreal>(zoom));
}

bool QPrintPreviewWidget_override_virtual_setVisible(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = std::move(slot_handle);
	return true;
}

void QPrintPreviewWidget_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::setVisible(visible);
}

bool QPrintPreviewWidget_override_virtual_devType(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = std::move(slot_handle);
	return true;
}

int QPrintPreviewWidget_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::devType();
}

bool QPrintPreviewWidget_override_virtual_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = false;
	return true;
}

bool QPrintPreviewWidget_override_virtual_owned_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = true;
	return true;
}

QSize* QPrintPreviewWidget_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::sizeHint());
}

bool QPrintPreviewWidget_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	self_cast->owns_return__minimumSizeHint = false;
	return true;
}

bool QPrintPreviewWidget_override_virtual_owned_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	self_cast->owns_return__minimumSizeHint = true;
	return true;
}

QSize* QPrintPreviewWidget_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::minimumSizeHint());
}

bool QPrintPreviewWidget_override_virtual_heightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = std::move(slot_handle);
	return true;
}

int QPrintPreviewWidget_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::heightForWidth(static_cast<int>(param1));
}

bool QPrintPreviewWidget_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = std::move(slot_handle);
	return true;
}

bool QPrintPreviewWidget_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::hasHeightForWidth();
}

bool QPrintPreviewWidget_override_virtual_paintEngine(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = std::move(slot_handle);
	return true;
}

QPaintEngine* QPrintPreviewWidget_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::paintEngine();
}

bool QPrintPreviewWidget_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QPrintPreviewWidget_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::event(event);
}

bool QPrintPreviewWidget_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = std::move(slot_handle);
	return true;
}

void QPrintPreviewWidget_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::mousePressEvent(event);
}

bool QPrintPreviewWidget_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = std::move(slot_handle);
	return true;
}

void QPrintPreviewWidget_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::mouseReleaseEvent(event);
}

bool QPrintPreviewWidget_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = std::move(slot_handle);
	return true;
}

void QPrintPreviewWidget_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::mouseDoubleClickEvent(event);
}

bool QPrintPreviewWidget_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = std::move(slot_handle);
	return true;
}

void QPrintPreviewWidget_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::mouseMoveEvent(event);
}

bool QPrintPreviewWidget_override_virtual_wheelEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = std::move(slot_handle);
	return true;
}

void QPrintPreviewWidget_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::wheelEvent(event);
}

bool QPrintPreviewWidget_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = std::move(slot_handle);
	return true;
}

void QPrintPreviewWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::keyPressEvent(event);
}

bool QPrintPreviewWidget_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = std::move(slot_handle);
	return true;
}

void QPrintPreviewWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::keyReleaseEvent(event);
}

bool QPrintPreviewWidget_override_virtual_focusInEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = std::move(slot_handle);
	return true;
}

void QPrintPreviewWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::focusInEvent(event);
}

bool QPrintPreviewWidget_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = std::move(slot_handle);
	return true;
}

void QPrintPreviewWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::focusOutEvent(event);
}

bool QPrintPreviewWidget_override_virtual_enterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = std::move(slot_handle);
	return true;
}

void QPrintPreviewWidget_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::enterEvent(event);
}

bool QPrintPreviewWidget_override_virtual_leaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = std::move(slot_handle);
	return true;
}

void QPrintPreviewWidget_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::leaveEvent(event);
}

bool QPrintPreviewWidget_override_virtual_paintEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = std::move(slot_handle);
	return true;
}

void QPrintPreviewWidget_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	static_cast<MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::paintEvent(event);
}

bool QPrintPreviewWidget_override_virtual_moveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = std::move(slot_handle);
	return true;
}

void QPrintPreviewWidget_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::moveEvent(event);
}

bool QPrintPreviewWidget_override_virtual_resizeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = std::move(slot_handle);
	return true;
}

void QPrintPreviewWidget_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::resizeEvent(event);
}

bool QPrintPreviewWidget_override_virtual_closeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = std::move(slot_handle);
	return true;
}

void QPrintPreviewWidget_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::closeEvent(event);
}

bool QPrintPreviewWidget_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = std::move(slot_handle);
	return true;
}

void QPrintPreviewWidget_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::contextMenuEvent(event);
}

bool QPrintPreviewWidget_override_virtual_tabletEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = std::move(slot_handle);
	return true;
}

void QPrintPreviewWidget_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::tabletEvent(event);
}

bool QPrintPreviewWidget_override_virtual_actionEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = std::move(slot_handle);
	return true;
}

void QPrintPreviewWidget_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::actionEvent(event);
}

bool QPrintPreviewWidget_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = std::move(slot_handle);
	return true;
}

void QPrintPreviewWidget_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::dragEnterEvent(event);
}

bool QPrintPreviewWidget_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = std::move(slot_handle);
	return true;
}

void QPrintPreviewWidget_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::dragMoveEvent(event);
}

bool QPrintPreviewWidget_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = std::move(slot_handle);
	return true;
}

void QPrintPreviewWidget_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::dragLeaveEvent(event);
}

bool QPrintPreviewWidget_override_virtual_dropEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = std::move(slot_handle);
	return true;
}

void QPrintPreviewWidget_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::dropEvent(event);
}

bool QPrintPreviewWidget_override_virtual_showEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = std::move(slot_handle);
	return true;
}

void QPrintPreviewWidget_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::showEvent(event);
}

bool QPrintPreviewWidget_override_virtual_hideEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = std::move(slot_handle);
	return true;
}

void QPrintPreviewWidget_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::hideEvent(event);
}

bool QPrintPreviewWidget_override_virtual_nativeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = std::move(slot_handle);
	return true;
}

bool QPrintPreviewWidget_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QPrintPreviewWidget_override_virtual_changeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = std::move(slot_handle);
	return true;
}

void QPrintPreviewWidget_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::changeEvent(param1);
}

bool QPrintPreviewWidget_override_virtual_metric(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = std::move(slot_handle);
	return true;
}

int QPrintPreviewWidget_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::metric(static_cast<MiqtVirtualQPrintPreviewWidget::PaintDeviceMetric>(param1));
}

bool QPrintPreviewWidget_override_virtual_initPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = std::move(slot_handle);
	return true;
}

void QPrintPreviewWidget_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::initPainter(painter);
}

bool QPrintPreviewWidget_override_virtual_redirected(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = std::move(slot_handle);
	return true;
}

QPaintDevice* QPrintPreviewWidget_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::redirected(offset);
}

bool QPrintPreviewWidget_override_virtual_sharedPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = std::move(slot_handle);
	return true;
}

QPainter* QPrintPreviewWidget_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::sharedPainter();
}

bool QPrintPreviewWidget_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = std::move(slot_handle);
	return true;
}

void QPrintPreviewWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::inputMethodEvent(param1);
}

bool QPrintPreviewWidget_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	self_cast->owns_return__inputMethodQuery = false;
	return true;
}

bool QPrintPreviewWidget_override_virtual_owned_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	self_cast->owns_return__inputMethodQuery = true;
	return true;
}

QVariant* QPrintPreviewWidget_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QPrintPreviewWidget_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = std::move(slot_handle);
	return true;
}

bool QPrintPreviewWidget_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::focusNextPrevChild(next);
}

bool QPrintPreviewWidget_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QPrintPreviewWidget_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::eventFilter(watched, event);
}

bool QPrintPreviewWidget_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QPrintPreviewWidget_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::timerEvent(event);
}

bool QPrintPreviewWidget_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QPrintPreviewWidget_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::childEvent(event);
}

bool QPrintPreviewWidget_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QPrintPreviewWidget_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::customEvent(event);
}

bool QPrintPreviewWidget_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QPrintPreviewWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::connectNotify(*signal);
}

bool QPrintPreviewWidget_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPrintPreviewWidget> slot_handle(slot);
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QPrintPreviewWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQPrintPreviewWidget*>(self)->QPrintPreviewWidget::disconnectNotify(*signal);
}

void QPrintPreviewWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QPrintPreviewWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QPrintPreviewWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QPrintPreviewWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QPrintPreviewWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QPrintPreviewWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QPrintPreviewWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QPrintPreviewWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QPrintPreviewWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQPrintPreviewWidget* self_cast = dynamic_cast<MiqtVirtualQPrintPreviewWidget*>( (QPrintPreviewWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QPrintPreviewWidget_delete(QPrintPreviewWidget* self) {
	delete self;
}

