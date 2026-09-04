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
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QRegion>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qwt_widget_overlay.h>
#include "gen_qwt_widget_overlay.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QwtWidgetOverlay(intptr_t);
bool miqt_exec_callback_QwtWidgetOverlay_eventFilter(QwtWidgetOverlay*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QwtWidgetOverlay_paintEvent(QwtWidgetOverlay*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QwtWidgetOverlay_resizeEvent(QwtWidgetOverlay*, intptr_t, QResizeEvent*);
QRegion* miqt_exec_callback_QwtWidgetOverlay_maskHint(const QwtWidgetOverlay*, intptr_t);
void miqt_exec_callback_QwtWidgetOverlay_drawOverlay(const QwtWidgetOverlay*, intptr_t, QPainter*);
int miqt_exec_callback_QwtWidgetOverlay_devType(const QwtWidgetOverlay*, intptr_t);
void miqt_exec_callback_QwtWidgetOverlay_setVisible(QwtWidgetOverlay*, intptr_t, bool);
QSize* miqt_exec_callback_QwtWidgetOverlay_sizeHint(const QwtWidgetOverlay*, intptr_t);
QSize* miqt_exec_callback_QwtWidgetOverlay_minimumSizeHint(const QwtWidgetOverlay*, intptr_t);
int miqt_exec_callback_QwtWidgetOverlay_heightForWidth(const QwtWidgetOverlay*, intptr_t, int);
bool miqt_exec_callback_QwtWidgetOverlay_hasHeightForWidth(const QwtWidgetOverlay*, intptr_t);
QPaintEngine* miqt_exec_callback_QwtWidgetOverlay_paintEngine(const QwtWidgetOverlay*, intptr_t);
bool miqt_exec_callback_QwtWidgetOverlay_event(QwtWidgetOverlay*, intptr_t, QEvent*);
void miqt_exec_callback_QwtWidgetOverlay_mousePressEvent(QwtWidgetOverlay*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtWidgetOverlay_mouseReleaseEvent(QwtWidgetOverlay*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtWidgetOverlay_mouseDoubleClickEvent(QwtWidgetOverlay*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtWidgetOverlay_mouseMoveEvent(QwtWidgetOverlay*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtWidgetOverlay_wheelEvent(QwtWidgetOverlay*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QwtWidgetOverlay_keyPressEvent(QwtWidgetOverlay*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtWidgetOverlay_keyReleaseEvent(QwtWidgetOverlay*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtWidgetOverlay_focusInEvent(QwtWidgetOverlay*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QwtWidgetOverlay_focusOutEvent(QwtWidgetOverlay*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QwtWidgetOverlay_enterEvent(QwtWidgetOverlay*, intptr_t, QEvent*);
void miqt_exec_callback_QwtWidgetOverlay_leaveEvent(QwtWidgetOverlay*, intptr_t, QEvent*);
void miqt_exec_callback_QwtWidgetOverlay_moveEvent(QwtWidgetOverlay*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QwtWidgetOverlay_closeEvent(QwtWidgetOverlay*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QwtWidgetOverlay_contextMenuEvent(QwtWidgetOverlay*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QwtWidgetOverlay_tabletEvent(QwtWidgetOverlay*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QwtWidgetOverlay_actionEvent(QwtWidgetOverlay*, intptr_t, QActionEvent*);
void miqt_exec_callback_QwtWidgetOverlay_dragEnterEvent(QwtWidgetOverlay*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QwtWidgetOverlay_dragMoveEvent(QwtWidgetOverlay*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QwtWidgetOverlay_dragLeaveEvent(QwtWidgetOverlay*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QwtWidgetOverlay_dropEvent(QwtWidgetOverlay*, intptr_t, QDropEvent*);
void miqt_exec_callback_QwtWidgetOverlay_showEvent(QwtWidgetOverlay*, intptr_t, QShowEvent*);
void miqt_exec_callback_QwtWidgetOverlay_hideEvent(QwtWidgetOverlay*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QwtWidgetOverlay_nativeEvent(QwtWidgetOverlay*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QwtWidgetOverlay_changeEvent(QwtWidgetOverlay*, intptr_t, QEvent*);
int miqt_exec_callback_QwtWidgetOverlay_metric(const QwtWidgetOverlay*, intptr_t, int);
void miqt_exec_callback_QwtWidgetOverlay_initPainter(const QwtWidgetOverlay*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QwtWidgetOverlay_redirected(const QwtWidgetOverlay*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QwtWidgetOverlay_sharedPainter(const QwtWidgetOverlay*, intptr_t);
void miqt_exec_callback_QwtWidgetOverlay_inputMethodEvent(QwtWidgetOverlay*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QwtWidgetOverlay_inputMethodQuery(const QwtWidgetOverlay*, intptr_t, int);
bool miqt_exec_callback_QwtWidgetOverlay_focusNextPrevChild(QwtWidgetOverlay*, intptr_t, bool);
void miqt_exec_callback_QwtWidgetOverlay_timerEvent(QwtWidgetOverlay*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QwtWidgetOverlay_childEvent(QwtWidgetOverlay*, intptr_t, QChildEvent*);
void miqt_exec_callback_QwtWidgetOverlay_customEvent(QwtWidgetOverlay*, intptr_t, QEvent*);
void miqt_exec_callback_QwtWidgetOverlay_connectNotify(QwtWidgetOverlay*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QwtWidgetOverlay_disconnectNotify(QwtWidgetOverlay*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtWidgetOverlay final : public QwtWidgetOverlay {
public:

	MiqtVirtualQwtWidgetOverlay(QWidget* param1): QwtWidgetOverlay(param1) {}

	virtual ~MiqtVirtualQwtWidgetOverlay() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (!handle__eventFilter) {
			return QwtWidgetOverlay::eventFilter(param1, param2);
		}

		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;
		bool callback_return_value = miqt_exec_callback_QwtWidgetOverlay_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QwtWidgetOverlay_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__paintEvent;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (!handle__paintEvent) {
			QwtWidgetOverlay::paintEvent(event);
			return;
		}

		QPaintEvent* sigval1 = event;
		miqt_exec_callback_QwtWidgetOverlay_paintEvent(this, handle__paintEvent.value(), sigval1);

	}

	friend void QwtWidgetOverlay_virtualbase_paintEvent(void* self, QPaintEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__resizeEvent;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (!handle__resizeEvent) {
			QwtWidgetOverlay::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QwtWidgetOverlay_resizeEvent(this, handle__resizeEvent.value(), sigval1);

	}

	friend void QwtWidgetOverlay_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__maskHint;
	bool owns_return__maskHint = false;

	// Subclass to allow providing a Go implementation
	virtual QRegion maskHint() const override {
		if (!handle__maskHint) {
			return QwtWidgetOverlay::maskHint();
		}

		QRegion* callback_return_value = miqt_exec_callback_QwtWidgetOverlay_maskHint(this, handle__maskHint.value());
		std::unique_ptr<QRegion> callback_return_value_owner;
		if (owns_return__maskHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QRegion* QwtWidgetOverlay_virtualbase_maskHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__drawOverlay;

	// Subclass to allow providing a Go implementation
	virtual void drawOverlay(QPainter* painter) const override {
		if (!handle__drawOverlay) {
			return; // Pure virtual, there is no base we can call
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QwtWidgetOverlay_drawOverlay(this, handle__drawOverlay.value(), sigval1);

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__devType;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (!handle__devType) {
			return QwtWidgetOverlay::devType();
		}

		int callback_return_value = miqt_exec_callback_QwtWidgetOverlay_devType(this, handle__devType.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QwtWidgetOverlay_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__setVisible;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (!handle__setVisible) {
			QwtWidgetOverlay::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QwtWidgetOverlay_setVisible(this, handle__setVisible.value(), sigval1);

	}

	friend void QwtWidgetOverlay_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__sizeHint;
	bool owns_return__sizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (!handle__sizeHint) {
			return QwtWidgetOverlay::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtWidgetOverlay_sizeHint(this, handle__sizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__sizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QwtWidgetOverlay_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__minimumSizeHint;
	bool owns_return__minimumSizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (!handle__minimumSizeHint) {
			return QwtWidgetOverlay::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtWidgetOverlay_minimumSizeHint(this, handle__minimumSizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__minimumSizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QwtWidgetOverlay_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__heightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (!handle__heightForWidth) {
			return QwtWidgetOverlay::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QwtWidgetOverlay_heightForWidth(this, handle__heightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtWidgetOverlay_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__hasHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (!handle__hasHeightForWidth) {
			return QwtWidgetOverlay::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QwtWidgetOverlay_hasHeightForWidth(this, handle__hasHeightForWidth.value());
		return callback_return_value;
	}

	friend bool QwtWidgetOverlay_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__paintEngine;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (!handle__paintEngine) {
			return QwtWidgetOverlay::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QwtWidgetOverlay_paintEngine(this, handle__paintEngine.value());
		return callback_return_value;
	}

	friend QPaintEngine* QwtWidgetOverlay_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QwtWidgetOverlay::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QwtWidgetOverlay_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QwtWidgetOverlay_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__mousePressEvent;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (!handle__mousePressEvent) {
			QwtWidgetOverlay::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtWidgetOverlay_mousePressEvent(this, handle__mousePressEvent.value(), sigval1);

	}

	friend void QwtWidgetOverlay_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__mouseReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (!handle__mouseReleaseEvent) {
			QwtWidgetOverlay::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtWidgetOverlay_mouseReleaseEvent(this, handle__mouseReleaseEvent.value(), sigval1);

	}

	friend void QwtWidgetOverlay_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__mouseDoubleClickEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (!handle__mouseDoubleClickEvent) {
			QwtWidgetOverlay::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtWidgetOverlay_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent.value(), sigval1);

	}

	friend void QwtWidgetOverlay_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__mouseMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (!handle__mouseMoveEvent) {
			QwtWidgetOverlay::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtWidgetOverlay_mouseMoveEvent(this, handle__mouseMoveEvent.value(), sigval1);

	}

	friend void QwtWidgetOverlay_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__wheelEvent;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (!handle__wheelEvent) {
			QwtWidgetOverlay::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QwtWidgetOverlay_wheelEvent(this, handle__wheelEvent.value(), sigval1);

	}

	friend void QwtWidgetOverlay_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__keyPressEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (!handle__keyPressEvent) {
			QwtWidgetOverlay::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QwtWidgetOverlay_keyPressEvent(this, handle__keyPressEvent.value(), sigval1);

	}

	friend void QwtWidgetOverlay_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__keyReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (!handle__keyReleaseEvent) {
			QwtWidgetOverlay::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QwtWidgetOverlay_keyReleaseEvent(this, handle__keyReleaseEvent.value(), sigval1);

	}

	friend void QwtWidgetOverlay_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__focusInEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (!handle__focusInEvent) {
			QwtWidgetOverlay::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QwtWidgetOverlay_focusInEvent(this, handle__focusInEvent.value(), sigval1);

	}

	friend void QwtWidgetOverlay_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__focusOutEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (!handle__focusOutEvent) {
			QwtWidgetOverlay::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QwtWidgetOverlay_focusOutEvent(this, handle__focusOutEvent.value(), sigval1);

	}

	friend void QwtWidgetOverlay_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__enterEvent;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (!handle__enterEvent) {
			QwtWidgetOverlay::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtWidgetOverlay_enterEvent(this, handle__enterEvent.value(), sigval1);

	}

	friend void QwtWidgetOverlay_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__leaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (!handle__leaveEvent) {
			QwtWidgetOverlay::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtWidgetOverlay_leaveEvent(this, handle__leaveEvent.value(), sigval1);

	}

	friend void QwtWidgetOverlay_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__moveEvent;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (!handle__moveEvent) {
			QwtWidgetOverlay::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtWidgetOverlay_moveEvent(this, handle__moveEvent.value(), sigval1);

	}

	friend void QwtWidgetOverlay_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__closeEvent;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (!handle__closeEvent) {
			QwtWidgetOverlay::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QwtWidgetOverlay_closeEvent(this, handle__closeEvent.value(), sigval1);

	}

	friend void QwtWidgetOverlay_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__contextMenuEvent;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (!handle__contextMenuEvent) {
			QwtWidgetOverlay::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QwtWidgetOverlay_contextMenuEvent(this, handle__contextMenuEvent.value(), sigval1);

	}

	friend void QwtWidgetOverlay_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__tabletEvent;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (!handle__tabletEvent) {
			QwtWidgetOverlay::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QwtWidgetOverlay_tabletEvent(this, handle__tabletEvent.value(), sigval1);

	}

	friend void QwtWidgetOverlay_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__actionEvent;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (!handle__actionEvent) {
			QwtWidgetOverlay::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QwtWidgetOverlay_actionEvent(this, handle__actionEvent.value(), sigval1);

	}

	friend void QwtWidgetOverlay_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__dragEnterEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (!handle__dragEnterEvent) {
			QwtWidgetOverlay::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QwtWidgetOverlay_dragEnterEvent(this, handle__dragEnterEvent.value(), sigval1);

	}

	friend void QwtWidgetOverlay_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__dragMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (!handle__dragMoveEvent) {
			QwtWidgetOverlay::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtWidgetOverlay_dragMoveEvent(this, handle__dragMoveEvent.value(), sigval1);

	}

	friend void QwtWidgetOverlay_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__dragLeaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (!handle__dragLeaveEvent) {
			QwtWidgetOverlay::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QwtWidgetOverlay_dragLeaveEvent(this, handle__dragLeaveEvent.value(), sigval1);

	}

	friend void QwtWidgetOverlay_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__dropEvent;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (!handle__dropEvent) {
			QwtWidgetOverlay::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QwtWidgetOverlay_dropEvent(this, handle__dropEvent.value(), sigval1);

	}

	friend void QwtWidgetOverlay_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__showEvent;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (!handle__showEvent) {
			QwtWidgetOverlay::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QwtWidgetOverlay_showEvent(this, handle__showEvent.value(), sigval1);

	}

	friend void QwtWidgetOverlay_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__hideEvent;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (!handle__hideEvent) {
			QwtWidgetOverlay::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QwtWidgetOverlay_hideEvent(this, handle__hideEvent.value(), sigval1);

	}

	friend void QwtWidgetOverlay_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__nativeEvent;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (!handle__nativeEvent) {
			return QwtWidgetOverlay::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QwtWidgetOverlay_nativeEvent(this, handle__nativeEvent.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QwtWidgetOverlay_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__changeEvent;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (!handle__changeEvent) {
			QwtWidgetOverlay::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QwtWidgetOverlay_changeEvent(this, handle__changeEvent.value(), sigval1);

	}

	friend void QwtWidgetOverlay_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__metric;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (!handle__metric) {
			return QwtWidgetOverlay::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QwtWidgetOverlay_metric(this, handle__metric.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtWidgetOverlay_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__initPainter;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (!handle__initPainter) {
			QwtWidgetOverlay::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QwtWidgetOverlay_initPainter(this, handle__initPainter.value(), sigval1);

	}

	friend void QwtWidgetOverlay_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__redirected;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (!handle__redirected) {
			return QwtWidgetOverlay::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QwtWidgetOverlay_redirected(this, handle__redirected.value(), sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QwtWidgetOverlay_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__sharedPainter;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (!handle__sharedPainter) {
			return QwtWidgetOverlay::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QwtWidgetOverlay_sharedPainter(this, handle__sharedPainter.value());
		return callback_return_value;
	}

	friend QPainter* QwtWidgetOverlay_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__inputMethodEvent;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (!handle__inputMethodEvent) {
			QwtWidgetOverlay::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QwtWidgetOverlay_inputMethodEvent(this, handle__inputMethodEvent.value(), sigval1);

	}

	friend void QwtWidgetOverlay_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__inputMethodQuery;
	bool owns_return__inputMethodQuery = false;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (!handle__inputMethodQuery) {
			return QwtWidgetOverlay::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QwtWidgetOverlay_inputMethodQuery(this, handle__inputMethodQuery.value(), sigval1);
		std::unique_ptr<QVariant> callback_return_value_owner;
		if (owns_return__inputMethodQuery) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QVariant* QwtWidgetOverlay_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__focusNextPrevChild;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (!handle__focusNextPrevChild) {
			return QwtWidgetOverlay::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QwtWidgetOverlay_focusNextPrevChild(this, handle__focusNextPrevChild.value(), sigval1);
		return callback_return_value;
	}

	friend bool QwtWidgetOverlay_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QwtWidgetOverlay::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QwtWidgetOverlay_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QwtWidgetOverlay_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QwtWidgetOverlay::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QwtWidgetOverlay_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QwtWidgetOverlay_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QwtWidgetOverlay::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtWidgetOverlay_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QwtWidgetOverlay_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QwtWidgetOverlay::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtWidgetOverlay_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QwtWidgetOverlay_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QwtWidgetOverlay::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtWidgetOverlay_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QwtWidgetOverlay_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QwtWidgetOverlay_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QwtWidgetOverlay_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QwtWidgetOverlay_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QwtWidgetOverlay_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QwtWidgetOverlay_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QwtWidgetOverlay_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QwtWidgetOverlay_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QwtWidgetOverlay_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QwtWidgetOverlay_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QwtWidgetOverlay* QwtWidgetOverlay_new(QWidget* param1) {
	return new (std::nothrow) MiqtVirtualQwtWidgetOverlay(param1);
}

void QwtWidgetOverlay_virtbase(QwtWidgetOverlay* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

void QwtWidgetOverlay_setMaskMode(QwtWidgetOverlay* self, int maskMode) {
	self->setMaskMode(static_cast<QwtWidgetOverlay::MaskMode>(maskMode));
}

int QwtWidgetOverlay_maskMode(const QwtWidgetOverlay* self) {
	QwtWidgetOverlay::MaskMode _ret = self->maskMode();
	return static_cast<int>(_ret);
}

void QwtWidgetOverlay_setRenderMode(QwtWidgetOverlay* self, int renderMode) {
	self->setRenderMode(static_cast<QwtWidgetOverlay::RenderMode>(renderMode));
}

int QwtWidgetOverlay_renderMode(const QwtWidgetOverlay* self) {
	QwtWidgetOverlay::RenderMode _ret = self->renderMode();
	return static_cast<int>(_ret);
}

void QwtWidgetOverlay_updateOverlay(QwtWidgetOverlay* self) {
	self->updateOverlay();
}

bool QwtWidgetOverlay_eventFilter(QwtWidgetOverlay* self, QObject* param1, QEvent* param2) {
	return self->eventFilter(param1, param2);
}

bool QwtWidgetOverlay_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QwtWidgetOverlay_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {
	return static_cast<MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::eventFilter(param1, param2);
}

bool QwtWidgetOverlay_override_virtual_paintEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = std::move(slot_handle);
	return true;
}

void QwtWidgetOverlay_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	static_cast<MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::paintEvent(event);
}

bool QwtWidgetOverlay_override_virtual_resizeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = std::move(slot_handle);
	return true;
}

void QwtWidgetOverlay_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::resizeEvent(event);
}

bool QwtWidgetOverlay_override_virtual_maskHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__maskHint = std::move(slot_handle);
	self_cast->owns_return__maskHint = false;
	return true;
}

bool QwtWidgetOverlay_override_virtual_owned_maskHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__maskHint = std::move(slot_handle);
	self_cast->owns_return__maskHint = true;
	return true;
}

QRegion* QwtWidgetOverlay_virtualbase_maskHint(const void* self) {
	return new QRegion(static_cast<const MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::maskHint());
}

bool QwtWidgetOverlay_override_virtual_drawOverlay(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawOverlay = std::move(slot_handle);
	return true;
}

bool QwtWidgetOverlay_override_virtual_devType(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = std::move(slot_handle);
	return true;
}

int QwtWidgetOverlay_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::devType();
}

bool QwtWidgetOverlay_override_virtual_setVisible(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = std::move(slot_handle);
	return true;
}

void QwtWidgetOverlay_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::setVisible(visible);
}

bool QwtWidgetOverlay_override_virtual_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = false;
	return true;
}

bool QwtWidgetOverlay_override_virtual_owned_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = true;
	return true;
}

QSize* QwtWidgetOverlay_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::sizeHint());
}

bool QwtWidgetOverlay_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	self_cast->owns_return__minimumSizeHint = false;
	return true;
}

bool QwtWidgetOverlay_override_virtual_owned_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	self_cast->owns_return__minimumSizeHint = true;
	return true;
}

QSize* QwtWidgetOverlay_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::minimumSizeHint());
}

bool QwtWidgetOverlay_override_virtual_heightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = std::move(slot_handle);
	return true;
}

int QwtWidgetOverlay_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::heightForWidth(static_cast<int>(param1));
}

bool QwtWidgetOverlay_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = std::move(slot_handle);
	return true;
}

bool QwtWidgetOverlay_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::hasHeightForWidth();
}

bool QwtWidgetOverlay_override_virtual_paintEngine(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = std::move(slot_handle);
	return true;
}

QPaintEngine* QwtWidgetOverlay_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::paintEngine();
}

bool QwtWidgetOverlay_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QwtWidgetOverlay_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::event(event);
}

bool QwtWidgetOverlay_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = std::move(slot_handle);
	return true;
}

void QwtWidgetOverlay_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::mousePressEvent(event);
}

bool QwtWidgetOverlay_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = std::move(slot_handle);
	return true;
}

void QwtWidgetOverlay_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::mouseReleaseEvent(event);
}

bool QwtWidgetOverlay_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = std::move(slot_handle);
	return true;
}

void QwtWidgetOverlay_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::mouseDoubleClickEvent(event);
}

bool QwtWidgetOverlay_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = std::move(slot_handle);
	return true;
}

void QwtWidgetOverlay_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::mouseMoveEvent(event);
}

bool QwtWidgetOverlay_override_virtual_wheelEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = std::move(slot_handle);
	return true;
}

void QwtWidgetOverlay_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::wheelEvent(event);
}

bool QwtWidgetOverlay_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = std::move(slot_handle);
	return true;
}

void QwtWidgetOverlay_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::keyPressEvent(event);
}

bool QwtWidgetOverlay_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = std::move(slot_handle);
	return true;
}

void QwtWidgetOverlay_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::keyReleaseEvent(event);
}

bool QwtWidgetOverlay_override_virtual_focusInEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = std::move(slot_handle);
	return true;
}

void QwtWidgetOverlay_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::focusInEvent(event);
}

bool QwtWidgetOverlay_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = std::move(slot_handle);
	return true;
}

void QwtWidgetOverlay_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::focusOutEvent(event);
}

bool QwtWidgetOverlay_override_virtual_enterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = std::move(slot_handle);
	return true;
}

void QwtWidgetOverlay_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::enterEvent(event);
}

bool QwtWidgetOverlay_override_virtual_leaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = std::move(slot_handle);
	return true;
}

void QwtWidgetOverlay_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::leaveEvent(event);
}

bool QwtWidgetOverlay_override_virtual_moveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = std::move(slot_handle);
	return true;
}

void QwtWidgetOverlay_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::moveEvent(event);
}

bool QwtWidgetOverlay_override_virtual_closeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = std::move(slot_handle);
	return true;
}

void QwtWidgetOverlay_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::closeEvent(event);
}

bool QwtWidgetOverlay_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = std::move(slot_handle);
	return true;
}

void QwtWidgetOverlay_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::contextMenuEvent(event);
}

bool QwtWidgetOverlay_override_virtual_tabletEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = std::move(slot_handle);
	return true;
}

void QwtWidgetOverlay_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::tabletEvent(event);
}

bool QwtWidgetOverlay_override_virtual_actionEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = std::move(slot_handle);
	return true;
}

void QwtWidgetOverlay_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::actionEvent(event);
}

bool QwtWidgetOverlay_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = std::move(slot_handle);
	return true;
}

void QwtWidgetOverlay_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::dragEnterEvent(event);
}

bool QwtWidgetOverlay_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = std::move(slot_handle);
	return true;
}

void QwtWidgetOverlay_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::dragMoveEvent(event);
}

bool QwtWidgetOverlay_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = std::move(slot_handle);
	return true;
}

void QwtWidgetOverlay_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::dragLeaveEvent(event);
}

bool QwtWidgetOverlay_override_virtual_dropEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = std::move(slot_handle);
	return true;
}

void QwtWidgetOverlay_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::dropEvent(event);
}

bool QwtWidgetOverlay_override_virtual_showEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = std::move(slot_handle);
	return true;
}

void QwtWidgetOverlay_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::showEvent(event);
}

bool QwtWidgetOverlay_override_virtual_hideEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = std::move(slot_handle);
	return true;
}

void QwtWidgetOverlay_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::hideEvent(event);
}

bool QwtWidgetOverlay_override_virtual_nativeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = std::move(slot_handle);
	return true;
}

bool QwtWidgetOverlay_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QwtWidgetOverlay_override_virtual_changeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = std::move(slot_handle);
	return true;
}

void QwtWidgetOverlay_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::changeEvent(param1);
}

bool QwtWidgetOverlay_override_virtual_metric(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = std::move(slot_handle);
	return true;
}

int QwtWidgetOverlay_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::metric(static_cast<MiqtVirtualQwtWidgetOverlay::PaintDeviceMetric>(param1));
}

bool QwtWidgetOverlay_override_virtual_initPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = std::move(slot_handle);
	return true;
}

void QwtWidgetOverlay_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::initPainter(painter);
}

bool QwtWidgetOverlay_override_virtual_redirected(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = std::move(slot_handle);
	return true;
}

QPaintDevice* QwtWidgetOverlay_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::redirected(offset);
}

bool QwtWidgetOverlay_override_virtual_sharedPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = std::move(slot_handle);
	return true;
}

QPainter* QwtWidgetOverlay_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::sharedPainter();
}

bool QwtWidgetOverlay_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = std::move(slot_handle);
	return true;
}

void QwtWidgetOverlay_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::inputMethodEvent(param1);
}

bool QwtWidgetOverlay_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	self_cast->owns_return__inputMethodQuery = false;
	return true;
}

bool QwtWidgetOverlay_override_virtual_owned_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	self_cast->owns_return__inputMethodQuery = true;
	return true;
}

QVariant* QwtWidgetOverlay_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QwtWidgetOverlay_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = std::move(slot_handle);
	return true;
}

bool QwtWidgetOverlay_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::focusNextPrevChild(next);
}

bool QwtWidgetOverlay_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QwtWidgetOverlay_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::timerEvent(event);
}

bool QwtWidgetOverlay_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QwtWidgetOverlay_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::childEvent(event);
}

bool QwtWidgetOverlay_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QwtWidgetOverlay_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::customEvent(event);
}

bool QwtWidgetOverlay_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QwtWidgetOverlay_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::connectNotify(*signal);
}

bool QwtWidgetOverlay_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtWidgetOverlay> slot_handle(slot);
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QwtWidgetOverlay_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtWidgetOverlay*>(self)->QwtWidgetOverlay::disconnectNotify(*signal);
}

void QwtWidgetOverlay_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QwtWidgetOverlay_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QwtWidgetOverlay_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QwtWidgetOverlay_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QwtWidgetOverlay_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QwtWidgetOverlay_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QwtWidgetOverlay_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QwtWidgetOverlay_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QwtWidgetOverlay_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQwtWidgetOverlay* self_cast = dynamic_cast<MiqtVirtualQwtWidgetOverlay*>( (QwtWidgetOverlay*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QwtWidgetOverlay_delete(QwtWidgetOverlay* self) {
	delete self;
}

