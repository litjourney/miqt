#include <memory>
#include <utility>
#include <QAbstractSlider>
#include <QActionEvent>
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
#include <qabstractslider.h>
#include "gen_qabstractslider.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QAbstractSlider(intptr_t);
void miqt_exec_callback_QAbstractSlider_valueChanged(intptr_t, int);
void miqt_exec_callback_QAbstractSlider_sliderPressed(intptr_t);
void miqt_exec_callback_QAbstractSlider_sliderMoved(intptr_t, int);
void miqt_exec_callback_QAbstractSlider_sliderReleased(intptr_t);
void miqt_exec_callback_QAbstractSlider_rangeChanged(intptr_t, int, int);
void miqt_exec_callback_QAbstractSlider_actionTriggered(intptr_t, int);
bool miqt_exec_callback_QAbstractSlider_event(QAbstractSlider*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractSlider_sliderChange(QAbstractSlider*, intptr_t, int);
void miqt_exec_callback_QAbstractSlider_keyPressEvent(QAbstractSlider*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QAbstractSlider_timerEvent(QAbstractSlider*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAbstractSlider_wheelEvent(QAbstractSlider*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QAbstractSlider_changeEvent(QAbstractSlider*, intptr_t, QEvent*);
int miqt_exec_callback_QAbstractSlider_devType(const QAbstractSlider*, intptr_t);
void miqt_exec_callback_QAbstractSlider_setVisible(QAbstractSlider*, intptr_t, bool);
QSize* miqt_exec_callback_QAbstractSlider_sizeHint(const QAbstractSlider*, intptr_t);
QSize* miqt_exec_callback_QAbstractSlider_minimumSizeHint(const QAbstractSlider*, intptr_t);
int miqt_exec_callback_QAbstractSlider_heightForWidth(const QAbstractSlider*, intptr_t, int);
bool miqt_exec_callback_QAbstractSlider_hasHeightForWidth(const QAbstractSlider*, intptr_t);
QPaintEngine* miqt_exec_callback_QAbstractSlider_paintEngine(const QAbstractSlider*, intptr_t);
void miqt_exec_callback_QAbstractSlider_mousePressEvent(QAbstractSlider*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractSlider_mouseReleaseEvent(QAbstractSlider*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractSlider_mouseDoubleClickEvent(QAbstractSlider*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractSlider_mouseMoveEvent(QAbstractSlider*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractSlider_keyReleaseEvent(QAbstractSlider*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QAbstractSlider_focusInEvent(QAbstractSlider*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QAbstractSlider_focusOutEvent(QAbstractSlider*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QAbstractSlider_enterEvent(QAbstractSlider*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QAbstractSlider_leaveEvent(QAbstractSlider*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractSlider_paintEvent(QAbstractSlider*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QAbstractSlider_moveEvent(QAbstractSlider*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QAbstractSlider_resizeEvent(QAbstractSlider*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QAbstractSlider_closeEvent(QAbstractSlider*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QAbstractSlider_contextMenuEvent(QAbstractSlider*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QAbstractSlider_tabletEvent(QAbstractSlider*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QAbstractSlider_actionEvent(QAbstractSlider*, intptr_t, QActionEvent*);
void miqt_exec_callback_QAbstractSlider_dragEnterEvent(QAbstractSlider*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QAbstractSlider_dragMoveEvent(QAbstractSlider*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QAbstractSlider_dragLeaveEvent(QAbstractSlider*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QAbstractSlider_dropEvent(QAbstractSlider*, intptr_t, QDropEvent*);
void miqt_exec_callback_QAbstractSlider_showEvent(QAbstractSlider*, intptr_t, QShowEvent*);
void miqt_exec_callback_QAbstractSlider_hideEvent(QAbstractSlider*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QAbstractSlider_nativeEvent(QAbstractSlider*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QAbstractSlider_metric(const QAbstractSlider*, intptr_t, int);
void miqt_exec_callback_QAbstractSlider_initPainter(const QAbstractSlider*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QAbstractSlider_redirected(const QAbstractSlider*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QAbstractSlider_sharedPainter(const QAbstractSlider*, intptr_t);
void miqt_exec_callback_QAbstractSlider_inputMethodEvent(QAbstractSlider*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QAbstractSlider_inputMethodQuery(const QAbstractSlider*, intptr_t, int);
bool miqt_exec_callback_QAbstractSlider_focusNextPrevChild(QAbstractSlider*, intptr_t, bool);
bool miqt_exec_callback_QAbstractSlider_eventFilter(QAbstractSlider*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAbstractSlider_childEvent(QAbstractSlider*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAbstractSlider_customEvent(QAbstractSlider*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractSlider_connectNotify(QAbstractSlider*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAbstractSlider_disconnectNotify(QAbstractSlider*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAbstractSlider final : public QAbstractSlider {
public:

	MiqtVirtualQAbstractSlider(QWidget* parent): QAbstractSlider(parent) {}
	MiqtVirtualQAbstractSlider(): QAbstractSlider() {}

	virtual ~MiqtVirtualQAbstractSlider() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (!handle__event) {
			return QAbstractSlider::event(e);
		}

		QEvent* sigval1 = e;
		bool callback_return_value = miqt_exec_callback_QAbstractSlider_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QAbstractSlider_virtualbase_event(void* self, QEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__sliderChange;

	// Subclass to allow providing a Go implementation
	virtual void sliderChange(QAbstractSlider::SliderChange change) override {
		if (!handle__sliderChange) {
			QAbstractSlider::sliderChange(change);
			return;
		}

		QAbstractSlider::SliderChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		miqt_exec_callback_QAbstractSlider_sliderChange(this, handle__sliderChange.value(), sigval1);

	}

	friend void QAbstractSlider_virtualbase_sliderChange(void* self, int change);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__keyPressEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* ev) override {
		if (!handle__keyPressEvent) {
			QAbstractSlider::keyPressEvent(ev);
			return;
		}

		QKeyEvent* sigval1 = ev;
		miqt_exec_callback_QAbstractSlider_keyPressEvent(this, handle__keyPressEvent.value(), sigval1);

	}

	friend void QAbstractSlider_virtualbase_keyPressEvent(void* self, QKeyEvent* ev);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* param1) override {
		if (!handle__timerEvent) {
			QAbstractSlider::timerEvent(param1);
			return;
		}

		QTimerEvent* sigval1 = param1;
		miqt_exec_callback_QAbstractSlider_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QAbstractSlider_virtualbase_timerEvent(void* self, QTimerEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__wheelEvent;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* e) override {
		if (!handle__wheelEvent) {
			QAbstractSlider::wheelEvent(e);
			return;
		}

		QWheelEvent* sigval1 = e;
		miqt_exec_callback_QAbstractSlider_wheelEvent(this, handle__wheelEvent.value(), sigval1);

	}

	friend void QAbstractSlider_virtualbase_wheelEvent(void* self, QWheelEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__changeEvent;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (!handle__changeEvent) {
			QAbstractSlider::changeEvent(e);
			return;
		}

		QEvent* sigval1 = e;
		miqt_exec_callback_QAbstractSlider_changeEvent(this, handle__changeEvent.value(), sigval1);

	}

	friend void QAbstractSlider_virtualbase_changeEvent(void* self, QEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__devType;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (!handle__devType) {
			return QAbstractSlider::devType();
		}

		int callback_return_value = miqt_exec_callback_QAbstractSlider_devType(this, handle__devType.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QAbstractSlider_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__setVisible;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (!handle__setVisible) {
			QAbstractSlider::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QAbstractSlider_setVisible(this, handle__setVisible.value(), sigval1);

	}

	friend void QAbstractSlider_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__sizeHint;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (!handle__sizeHint) {
			return QAbstractSlider::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QAbstractSlider_sizeHint(this, handle__sizeHint.value());
		return *callback_return_value;
	}

	friend QSize* QAbstractSlider_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__minimumSizeHint;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (!handle__minimumSizeHint) {
			return QAbstractSlider::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QAbstractSlider_minimumSizeHint(this, handle__minimumSizeHint.value());
		return *callback_return_value;
	}

	friend QSize* QAbstractSlider_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__heightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (!handle__heightForWidth) {
			return QAbstractSlider::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QAbstractSlider_heightForWidth(this, handle__heightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QAbstractSlider_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__hasHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (!handle__hasHeightForWidth) {
			return QAbstractSlider::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QAbstractSlider_hasHeightForWidth(this, handle__hasHeightForWidth.value());
		return callback_return_value;
	}

	friend bool QAbstractSlider_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__paintEngine;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (!handle__paintEngine) {
			return QAbstractSlider::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QAbstractSlider_paintEngine(this, handle__paintEngine.value());
		return callback_return_value;
	}

	friend QPaintEngine* QAbstractSlider_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__mousePressEvent;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (!handle__mousePressEvent) {
			QAbstractSlider::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QAbstractSlider_mousePressEvent(this, handle__mousePressEvent.value(), sigval1);

	}

	friend void QAbstractSlider_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__mouseReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (!handle__mouseReleaseEvent) {
			QAbstractSlider::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QAbstractSlider_mouseReleaseEvent(this, handle__mouseReleaseEvent.value(), sigval1);

	}

	friend void QAbstractSlider_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__mouseDoubleClickEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (!handle__mouseDoubleClickEvent) {
			QAbstractSlider::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QAbstractSlider_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent.value(), sigval1);

	}

	friend void QAbstractSlider_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__mouseMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (!handle__mouseMoveEvent) {
			QAbstractSlider::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QAbstractSlider_mouseMoveEvent(this, handle__mouseMoveEvent.value(), sigval1);

	}

	friend void QAbstractSlider_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__keyReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (!handle__keyReleaseEvent) {
			QAbstractSlider::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QAbstractSlider_keyReleaseEvent(this, handle__keyReleaseEvent.value(), sigval1);

	}

	friend void QAbstractSlider_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__focusInEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (!handle__focusInEvent) {
			QAbstractSlider::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QAbstractSlider_focusInEvent(this, handle__focusInEvent.value(), sigval1);

	}

	friend void QAbstractSlider_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__focusOutEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (!handle__focusOutEvent) {
			QAbstractSlider::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QAbstractSlider_focusOutEvent(this, handle__focusOutEvent.value(), sigval1);

	}

	friend void QAbstractSlider_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__enterEvent;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (!handle__enterEvent) {
			QAbstractSlider::enterEvent(event);
			return;
		}

		QEnterEvent* sigval1 = event;
		miqt_exec_callback_QAbstractSlider_enterEvent(this, handle__enterEvent.value(), sigval1);

	}

	friend void QAbstractSlider_virtualbase_enterEvent(void* self, QEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__leaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (!handle__leaveEvent) {
			QAbstractSlider::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QAbstractSlider_leaveEvent(this, handle__leaveEvent.value(), sigval1);

	}

	friend void QAbstractSlider_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__paintEvent;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (!handle__paintEvent) {
			QAbstractSlider::paintEvent(event);
			return;
		}

		QPaintEvent* sigval1 = event;
		miqt_exec_callback_QAbstractSlider_paintEvent(this, handle__paintEvent.value(), sigval1);

	}

	friend void QAbstractSlider_virtualbase_paintEvent(void* self, QPaintEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__moveEvent;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (!handle__moveEvent) {
			QAbstractSlider::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QAbstractSlider_moveEvent(this, handle__moveEvent.value(), sigval1);

	}

	friend void QAbstractSlider_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__resizeEvent;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (!handle__resizeEvent) {
			QAbstractSlider::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QAbstractSlider_resizeEvent(this, handle__resizeEvent.value(), sigval1);

	}

	friend void QAbstractSlider_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__closeEvent;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (!handle__closeEvent) {
			QAbstractSlider::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QAbstractSlider_closeEvent(this, handle__closeEvent.value(), sigval1);

	}

	friend void QAbstractSlider_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__contextMenuEvent;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (!handle__contextMenuEvent) {
			QAbstractSlider::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QAbstractSlider_contextMenuEvent(this, handle__contextMenuEvent.value(), sigval1);

	}

	friend void QAbstractSlider_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__tabletEvent;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (!handle__tabletEvent) {
			QAbstractSlider::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QAbstractSlider_tabletEvent(this, handle__tabletEvent.value(), sigval1);

	}

	friend void QAbstractSlider_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__actionEvent;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (!handle__actionEvent) {
			QAbstractSlider::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QAbstractSlider_actionEvent(this, handle__actionEvent.value(), sigval1);

	}

	friend void QAbstractSlider_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__dragEnterEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (!handle__dragEnterEvent) {
			QAbstractSlider::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QAbstractSlider_dragEnterEvent(this, handle__dragEnterEvent.value(), sigval1);

	}

	friend void QAbstractSlider_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__dragMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (!handle__dragMoveEvent) {
			QAbstractSlider::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QAbstractSlider_dragMoveEvent(this, handle__dragMoveEvent.value(), sigval1);

	}

	friend void QAbstractSlider_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__dragLeaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (!handle__dragLeaveEvent) {
			QAbstractSlider::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QAbstractSlider_dragLeaveEvent(this, handle__dragLeaveEvent.value(), sigval1);

	}

	friend void QAbstractSlider_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__dropEvent;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (!handle__dropEvent) {
			QAbstractSlider::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QAbstractSlider_dropEvent(this, handle__dropEvent.value(), sigval1);

	}

	friend void QAbstractSlider_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__showEvent;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (!handle__showEvent) {
			QAbstractSlider::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QAbstractSlider_showEvent(this, handle__showEvent.value(), sigval1);

	}

	friend void QAbstractSlider_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__hideEvent;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (!handle__hideEvent) {
			QAbstractSlider::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QAbstractSlider_hideEvent(this, handle__hideEvent.value(), sigval1);

	}

	friend void QAbstractSlider_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__nativeEvent;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (!handle__nativeEvent) {
			return QAbstractSlider::nativeEvent(eventType, message, result);
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
		bool callback_return_value = miqt_exec_callback_QAbstractSlider_nativeEvent(this, handle__nativeEvent.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QAbstractSlider_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__metric;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (!handle__metric) {
			return QAbstractSlider::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QAbstractSlider_metric(this, handle__metric.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QAbstractSlider_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__initPainter;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (!handle__initPainter) {
			QAbstractSlider::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QAbstractSlider_initPainter(this, handle__initPainter.value(), sigval1);

	}

	friend void QAbstractSlider_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__redirected;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (!handle__redirected) {
			return QAbstractSlider::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QAbstractSlider_redirected(this, handle__redirected.value(), sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QAbstractSlider_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__sharedPainter;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (!handle__sharedPainter) {
			return QAbstractSlider::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QAbstractSlider_sharedPainter(this, handle__sharedPainter.value());
		return callback_return_value;
	}

	friend QPainter* QAbstractSlider_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__inputMethodEvent;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (!handle__inputMethodEvent) {
			QAbstractSlider::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QAbstractSlider_inputMethodEvent(this, handle__inputMethodEvent.value(), sigval1);

	}

	friend void QAbstractSlider_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__inputMethodQuery;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (!handle__inputMethodQuery) {
			return QAbstractSlider::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QAbstractSlider_inputMethodQuery(this, handle__inputMethodQuery.value(), sigval1);
		return *callback_return_value;
	}

	friend QVariant* QAbstractSlider_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__focusNextPrevChild;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (!handle__focusNextPrevChild) {
			return QAbstractSlider::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QAbstractSlider_focusNextPrevChild(this, handle__focusNextPrevChild.value(), sigval1);
		return callback_return_value;
	}

	friend bool QAbstractSlider_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QAbstractSlider::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QAbstractSlider_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QAbstractSlider_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QAbstractSlider::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QAbstractSlider_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QAbstractSlider_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QAbstractSlider::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QAbstractSlider_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QAbstractSlider_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QAbstractSlider::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QAbstractSlider_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QAbstractSlider_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QAbstractSlider::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QAbstractSlider_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QAbstractSlider_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QAbstractSlider_protectedbase_setRepeatAction(bool* _dynamic_cast_ok, void* self, int action);
	friend int QAbstractSlider_protectedbase_repeatAction(bool* _dynamic_cast_ok, const void* self);
	friend void QAbstractSlider_protectedbase_setRepeatAction2(bool* _dynamic_cast_ok, void* self, int action, int thresholdTime);
	friend void QAbstractSlider_protectedbase_setRepeatAction3(bool* _dynamic_cast_ok, void* self, int action, int thresholdTime, int repeatTime);
	friend void QAbstractSlider_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractSlider_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractSlider_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QAbstractSlider_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QAbstractSlider_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QAbstractSlider_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractSlider_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractSlider_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAbstractSlider_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QAbstractSlider* QAbstractSlider_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQAbstractSlider(parent);
}

QAbstractSlider* QAbstractSlider_new2() {
	return new (std::nothrow) MiqtVirtualQAbstractSlider();
}

void QAbstractSlider_virtbase(QAbstractSlider* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QAbstractSlider_metaObject(const QAbstractSlider* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractSlider_metacast(QAbstractSlider* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractSlider_tr(const char* s) {
	QString _ret = QAbstractSlider::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QAbstractSlider_orientation(const QAbstractSlider* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

void QAbstractSlider_setMinimum(QAbstractSlider* self, int minimum) {
	self->setMinimum(static_cast<int>(minimum));
}

int QAbstractSlider_minimum(const QAbstractSlider* self) {
	return self->minimum();
}

void QAbstractSlider_setMaximum(QAbstractSlider* self, int maximum) {
	self->setMaximum(static_cast<int>(maximum));
}

int QAbstractSlider_maximum(const QAbstractSlider* self) {
	return self->maximum();
}

void QAbstractSlider_setSingleStep(QAbstractSlider* self, int singleStep) {
	self->setSingleStep(static_cast<int>(singleStep));
}

int QAbstractSlider_singleStep(const QAbstractSlider* self) {
	return self->singleStep();
}

void QAbstractSlider_setPageStep(QAbstractSlider* self, int pageStep) {
	self->setPageStep(static_cast<int>(pageStep));
}

int QAbstractSlider_pageStep(const QAbstractSlider* self) {
	return self->pageStep();
}

void QAbstractSlider_setTracking(QAbstractSlider* self, bool enable) {
	self->setTracking(enable);
}

bool QAbstractSlider_hasTracking(const QAbstractSlider* self) {
	return self->hasTracking();
}

void QAbstractSlider_setSliderDown(QAbstractSlider* self, bool sliderDown) {
	self->setSliderDown(sliderDown);
}

bool QAbstractSlider_isSliderDown(const QAbstractSlider* self) {
	return self->isSliderDown();
}

void QAbstractSlider_setSliderPosition(QAbstractSlider* self, int sliderPosition) {
	self->setSliderPosition(static_cast<int>(sliderPosition));
}

int QAbstractSlider_sliderPosition(const QAbstractSlider* self) {
	return self->sliderPosition();
}

void QAbstractSlider_setInvertedAppearance(QAbstractSlider* self, bool invertedAppearance) {
	self->setInvertedAppearance(invertedAppearance);
}

bool QAbstractSlider_invertedAppearance(const QAbstractSlider* self) {
	return self->invertedAppearance();
}

void QAbstractSlider_setInvertedControls(QAbstractSlider* self, bool invertedControls) {
	self->setInvertedControls(invertedControls);
}

bool QAbstractSlider_invertedControls(const QAbstractSlider* self) {
	return self->invertedControls();
}

int QAbstractSlider_value(const QAbstractSlider* self) {
	return self->value();
}

void QAbstractSlider_triggerAction(QAbstractSlider* self, int action) {
	self->triggerAction(static_cast<QAbstractSlider::SliderAction>(action));
}

void QAbstractSlider_setValue(QAbstractSlider* self, int value) {
	self->setValue(static_cast<int>(value));
}

void QAbstractSlider_setOrientation(QAbstractSlider* self, int orientation) {
	self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

void QAbstractSlider_setRange(QAbstractSlider* self, int min, int max) {
	self->setRange(static_cast<int>(min), static_cast<int>(max));
}

void QAbstractSlider_valueChanged(QAbstractSlider* self, int value) {
	self->valueChanged(static_cast<int>(value));
}

void* QAbstractSlider_connect_valueChanged(QAbstractSlider* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider>>(slot);
	return new QMetaObject::Connection(QAbstractSlider::connect(self, static_cast<void (QAbstractSlider::*)(int)>(&QAbstractSlider::valueChanged), self, [slot_handle](int value) {
		intptr_t slot = slot_handle->value();
		int sigval1 = value;
		miqt_exec_callback_QAbstractSlider_valueChanged(slot, sigval1);
	}));
}

void QAbstractSlider_sliderPressed(QAbstractSlider* self) {
	self->sliderPressed();
}

void* QAbstractSlider_connect_sliderPressed(QAbstractSlider* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider>>(slot);
	return new QMetaObject::Connection(QAbstractSlider::connect(self, static_cast<void (QAbstractSlider::*)()>(&QAbstractSlider::sliderPressed), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QAbstractSlider_sliderPressed(slot);
	}));
}

void QAbstractSlider_sliderMoved(QAbstractSlider* self, int position) {
	self->sliderMoved(static_cast<int>(position));
}

void* QAbstractSlider_connect_sliderMoved(QAbstractSlider* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider>>(slot);
	return new QMetaObject::Connection(QAbstractSlider::connect(self, static_cast<void (QAbstractSlider::*)(int)>(&QAbstractSlider::sliderMoved), self, [slot_handle](int position) {
		intptr_t slot = slot_handle->value();
		int sigval1 = position;
		miqt_exec_callback_QAbstractSlider_sliderMoved(slot, sigval1);
	}));
}

void QAbstractSlider_sliderReleased(QAbstractSlider* self) {
	self->sliderReleased();
}

void* QAbstractSlider_connect_sliderReleased(QAbstractSlider* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider>>(slot);
	return new QMetaObject::Connection(QAbstractSlider::connect(self, static_cast<void (QAbstractSlider::*)()>(&QAbstractSlider::sliderReleased), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QAbstractSlider_sliderReleased(slot);
	}));
}

void QAbstractSlider_rangeChanged(QAbstractSlider* self, int min, int max) {
	self->rangeChanged(static_cast<int>(min), static_cast<int>(max));
}

void* QAbstractSlider_connect_rangeChanged(QAbstractSlider* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider>>(slot);
	return new QMetaObject::Connection(QAbstractSlider::connect(self, static_cast<void (QAbstractSlider::*)(int, int)>(&QAbstractSlider::rangeChanged), self, [slot_handle](int min, int max) {
		intptr_t slot = slot_handle->value();
		int sigval1 = min;
		int sigval2 = max;
		miqt_exec_callback_QAbstractSlider_rangeChanged(slot, sigval1, sigval2);
	}));
}

void QAbstractSlider_actionTriggered(QAbstractSlider* self, int action) {
	self->actionTriggered(static_cast<int>(action));
}

void* QAbstractSlider_connect_actionTriggered(QAbstractSlider* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider>>(slot);
	return new QMetaObject::Connection(QAbstractSlider::connect(self, static_cast<void (QAbstractSlider::*)(int)>(&QAbstractSlider::actionTriggered), self, [slot_handle](int action) {
		intptr_t slot = slot_handle->value();
		int sigval1 = action;
		miqt_exec_callback_QAbstractSlider_actionTriggered(slot, sigval1);
	}));
}

struct miqt_string QAbstractSlider_tr2(const char* s, const char* c) {
	QString _ret = QAbstractSlider::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractSlider_tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractSlider::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractSlider_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QAbstractSlider_virtualbase_event(void* self, QEvent* e) {
	return static_cast<MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::event(e);
}

bool QAbstractSlider_override_virtual_sliderChange(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sliderChange = std::move(slot_handle);
	return true;
}

void QAbstractSlider_virtualbase_sliderChange(void* self, int change) {
	static_cast<MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::sliderChange(static_cast<MiqtVirtualQAbstractSlider::SliderChange>(change));
}

bool QAbstractSlider_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = std::move(slot_handle);
	return true;
}

void QAbstractSlider_virtualbase_keyPressEvent(void* self, QKeyEvent* ev) {
	static_cast<MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::keyPressEvent(ev);
}

bool QAbstractSlider_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QAbstractSlider_virtualbase_timerEvent(void* self, QTimerEvent* param1) {
	static_cast<MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::timerEvent(param1);
}

bool QAbstractSlider_override_virtual_wheelEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = std::move(slot_handle);
	return true;
}

void QAbstractSlider_virtualbase_wheelEvent(void* self, QWheelEvent* e) {
	static_cast<MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::wheelEvent(e);
}

bool QAbstractSlider_override_virtual_changeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = std::move(slot_handle);
	return true;
}

void QAbstractSlider_virtualbase_changeEvent(void* self, QEvent* e) {
	static_cast<MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::changeEvent(e);
}

bool QAbstractSlider_override_virtual_devType(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = std::move(slot_handle);
	return true;
}

int QAbstractSlider_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::devType();
}

bool QAbstractSlider_override_virtual_setVisible(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = std::move(slot_handle);
	return true;
}

void QAbstractSlider_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::setVisible(visible);
}

bool QAbstractSlider_override_virtual_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	return true;
}

QSize* QAbstractSlider_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::sizeHint());
}

bool QAbstractSlider_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	return true;
}

QSize* QAbstractSlider_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::minimumSizeHint());
}

bool QAbstractSlider_override_virtual_heightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = std::move(slot_handle);
	return true;
}

int QAbstractSlider_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::heightForWidth(static_cast<int>(param1));
}

bool QAbstractSlider_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = std::move(slot_handle);
	return true;
}

bool QAbstractSlider_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::hasHeightForWidth();
}

bool QAbstractSlider_override_virtual_paintEngine(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = std::move(slot_handle);
	return true;
}

QPaintEngine* QAbstractSlider_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::paintEngine();
}

bool QAbstractSlider_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = std::move(slot_handle);
	return true;
}

void QAbstractSlider_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::mousePressEvent(event);
}

bool QAbstractSlider_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = std::move(slot_handle);
	return true;
}

void QAbstractSlider_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::mouseReleaseEvent(event);
}

bool QAbstractSlider_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = std::move(slot_handle);
	return true;
}

void QAbstractSlider_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::mouseDoubleClickEvent(event);
}

bool QAbstractSlider_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = std::move(slot_handle);
	return true;
}

void QAbstractSlider_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::mouseMoveEvent(event);
}

bool QAbstractSlider_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = std::move(slot_handle);
	return true;
}

void QAbstractSlider_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::keyReleaseEvent(event);
}

bool QAbstractSlider_override_virtual_focusInEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = std::move(slot_handle);
	return true;
}

void QAbstractSlider_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::focusInEvent(event);
}

bool QAbstractSlider_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = std::move(slot_handle);
	return true;
}

void QAbstractSlider_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::focusOutEvent(event);
}

bool QAbstractSlider_override_virtual_enterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = std::move(slot_handle);
	return true;
}

void QAbstractSlider_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	static_cast<MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::enterEvent(event);
}

bool QAbstractSlider_override_virtual_leaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = std::move(slot_handle);
	return true;
}

void QAbstractSlider_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::leaveEvent(event);
}

bool QAbstractSlider_override_virtual_paintEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = std::move(slot_handle);
	return true;
}

void QAbstractSlider_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	static_cast<MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::paintEvent(event);
}

bool QAbstractSlider_override_virtual_moveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = std::move(slot_handle);
	return true;
}

void QAbstractSlider_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::moveEvent(event);
}

bool QAbstractSlider_override_virtual_resizeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = std::move(slot_handle);
	return true;
}

void QAbstractSlider_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::resizeEvent(event);
}

bool QAbstractSlider_override_virtual_closeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = std::move(slot_handle);
	return true;
}

void QAbstractSlider_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::closeEvent(event);
}

bool QAbstractSlider_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = std::move(slot_handle);
	return true;
}

void QAbstractSlider_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::contextMenuEvent(event);
}

bool QAbstractSlider_override_virtual_tabletEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = std::move(slot_handle);
	return true;
}

void QAbstractSlider_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::tabletEvent(event);
}

bool QAbstractSlider_override_virtual_actionEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = std::move(slot_handle);
	return true;
}

void QAbstractSlider_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::actionEvent(event);
}

bool QAbstractSlider_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = std::move(slot_handle);
	return true;
}

void QAbstractSlider_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::dragEnterEvent(event);
}

bool QAbstractSlider_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = std::move(slot_handle);
	return true;
}

void QAbstractSlider_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::dragMoveEvent(event);
}

bool QAbstractSlider_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = std::move(slot_handle);
	return true;
}

void QAbstractSlider_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::dragLeaveEvent(event);
}

bool QAbstractSlider_override_virtual_dropEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = std::move(slot_handle);
	return true;
}

void QAbstractSlider_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::dropEvent(event);
}

bool QAbstractSlider_override_virtual_showEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = std::move(slot_handle);
	return true;
}

void QAbstractSlider_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::showEvent(event);
}

bool QAbstractSlider_override_virtual_hideEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = std::move(slot_handle);
	return true;
}

void QAbstractSlider_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::hideEvent(event);
}

bool QAbstractSlider_override_virtual_nativeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = std::move(slot_handle);
	return true;
}

bool QAbstractSlider_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
}

bool QAbstractSlider_override_virtual_metric(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = std::move(slot_handle);
	return true;
}

int QAbstractSlider_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::metric(static_cast<MiqtVirtualQAbstractSlider::PaintDeviceMetric>(param1));
}

bool QAbstractSlider_override_virtual_initPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = std::move(slot_handle);
	return true;
}

void QAbstractSlider_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::initPainter(painter);
}

bool QAbstractSlider_override_virtual_redirected(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = std::move(slot_handle);
	return true;
}

QPaintDevice* QAbstractSlider_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::redirected(offset);
}

bool QAbstractSlider_override_virtual_sharedPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = std::move(slot_handle);
	return true;
}

QPainter* QAbstractSlider_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::sharedPainter();
}

bool QAbstractSlider_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = std::move(slot_handle);
	return true;
}

void QAbstractSlider_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::inputMethodEvent(param1);
}

bool QAbstractSlider_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	return true;
}

QVariant* QAbstractSlider_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QAbstractSlider_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = std::move(slot_handle);
	return true;
}

bool QAbstractSlider_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::focusNextPrevChild(next);
}

bool QAbstractSlider_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QAbstractSlider_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::eventFilter(watched, event);
}

bool QAbstractSlider_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QAbstractSlider_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::childEvent(event);
}

bool QAbstractSlider_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QAbstractSlider_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::customEvent(event);
}

bool QAbstractSlider_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QAbstractSlider_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::connectNotify(*signal);
}

bool QAbstractSlider_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractSlider> slot_handle(slot);
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QAbstractSlider_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQAbstractSlider*>(self)->QAbstractSlider::disconnectNotify(*signal);
}

void QAbstractSlider_protectedbase_setRepeatAction(bool* _dynamic_cast_ok, void* self, int action) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setRepeatAction(static_cast<MiqtVirtualQAbstractSlider::SliderAction>(action));
}

int QAbstractSlider_protectedbase_repeatAction(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}

	*_dynamic_cast_ok = true;
	MiqtVirtualQAbstractSlider::SliderAction _ret = self_cast->repeatAction();
	return static_cast<int>(_ret);
}

void QAbstractSlider_protectedbase_setRepeatAction2(bool* _dynamic_cast_ok, void* self, int action, int thresholdTime) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setRepeatAction(static_cast<MiqtVirtualQAbstractSlider::SliderAction>(action), static_cast<int>(thresholdTime));
}

void QAbstractSlider_protectedbase_setRepeatAction3(bool* _dynamic_cast_ok, void* self, int action, int thresholdTime, int repeatTime) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setRepeatAction(static_cast<MiqtVirtualQAbstractSlider::SliderAction>(action), static_cast<int>(thresholdTime), static_cast<int>(repeatTime));
}

void QAbstractSlider_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QAbstractSlider_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QAbstractSlider_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QAbstractSlider_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QAbstractSlider_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QAbstractSlider_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QAbstractSlider_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QAbstractSlider_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QAbstractSlider_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAbstractSlider* self_cast = dynamic_cast<MiqtVirtualQAbstractSlider*>( (QAbstractSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QAbstractSlider_delete(QAbstractSlider* self) {
	delete self;
}

