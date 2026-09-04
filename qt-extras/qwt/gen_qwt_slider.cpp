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
#include <QRect>
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
#include <qwt_slider.h>
#include "gen_qwt_slider.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QwtSlider(intptr_t);
QSize* miqt_exec_callback_QwtSlider_sizeHint(const QwtSlider*, intptr_t);
QSize* miqt_exec_callback_QwtSlider_minimumSizeHint(const QwtSlider*, intptr_t);
double miqt_exec_callback_QwtSlider_scrolledTo(const QwtSlider*, intptr_t, QPoint*);
bool miqt_exec_callback_QwtSlider_isScrollPosition(const QwtSlider*, intptr_t, QPoint*);
void miqt_exec_callback_QwtSlider_drawSlider(const QwtSlider*, intptr_t, QPainter*, QRect*);
void miqt_exec_callback_QwtSlider_drawHandle(const QwtSlider*, intptr_t, QPainter*, QRect*, int);
void miqt_exec_callback_QwtSlider_mousePressEvent(QwtSlider*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtSlider_mouseReleaseEvent(QwtSlider*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtSlider_resizeEvent(QwtSlider*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QwtSlider_paintEvent(QwtSlider*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QwtSlider_changeEvent(QwtSlider*, intptr_t, QEvent*);
void miqt_exec_callback_QwtSlider_timerEvent(QwtSlider*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QwtSlider_scaleChange(QwtSlider*, intptr_t);
void miqt_exec_callback_QwtSlider_mouseMoveEvent(QwtSlider*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtSlider_keyPressEvent(QwtSlider*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtSlider_wheelEvent(QwtSlider*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QwtSlider_sliderChange(QwtSlider*, intptr_t);
int miqt_exec_callback_QwtSlider_devType(const QwtSlider*, intptr_t);
void miqt_exec_callback_QwtSlider_setVisible(QwtSlider*, intptr_t, bool);
int miqt_exec_callback_QwtSlider_heightForWidth(const QwtSlider*, intptr_t, int);
bool miqt_exec_callback_QwtSlider_hasHeightForWidth(const QwtSlider*, intptr_t);
QPaintEngine* miqt_exec_callback_QwtSlider_paintEngine(const QwtSlider*, intptr_t);
bool miqt_exec_callback_QwtSlider_event(QwtSlider*, intptr_t, QEvent*);
void miqt_exec_callback_QwtSlider_mouseDoubleClickEvent(QwtSlider*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtSlider_keyReleaseEvent(QwtSlider*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtSlider_focusInEvent(QwtSlider*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QwtSlider_focusOutEvent(QwtSlider*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QwtSlider_enterEvent(QwtSlider*, intptr_t, QEvent*);
void miqt_exec_callback_QwtSlider_leaveEvent(QwtSlider*, intptr_t, QEvent*);
void miqt_exec_callback_QwtSlider_moveEvent(QwtSlider*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QwtSlider_closeEvent(QwtSlider*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QwtSlider_contextMenuEvent(QwtSlider*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QwtSlider_tabletEvent(QwtSlider*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QwtSlider_actionEvent(QwtSlider*, intptr_t, QActionEvent*);
void miqt_exec_callback_QwtSlider_dragEnterEvent(QwtSlider*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QwtSlider_dragMoveEvent(QwtSlider*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QwtSlider_dragLeaveEvent(QwtSlider*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QwtSlider_dropEvent(QwtSlider*, intptr_t, QDropEvent*);
void miqt_exec_callback_QwtSlider_showEvent(QwtSlider*, intptr_t, QShowEvent*);
void miqt_exec_callback_QwtSlider_hideEvent(QwtSlider*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QwtSlider_nativeEvent(QwtSlider*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QwtSlider_metric(const QwtSlider*, intptr_t, int);
void miqt_exec_callback_QwtSlider_initPainter(const QwtSlider*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QwtSlider_redirected(const QwtSlider*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QwtSlider_sharedPainter(const QwtSlider*, intptr_t);
void miqt_exec_callback_QwtSlider_inputMethodEvent(QwtSlider*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QwtSlider_inputMethodQuery(const QwtSlider*, intptr_t, int);
bool miqt_exec_callback_QwtSlider_focusNextPrevChild(QwtSlider*, intptr_t, bool);
bool miqt_exec_callback_QwtSlider_eventFilter(QwtSlider*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QwtSlider_childEvent(QwtSlider*, intptr_t, QChildEvent*);
void miqt_exec_callback_QwtSlider_customEvent(QwtSlider*, intptr_t, QEvent*);
void miqt_exec_callback_QwtSlider_connectNotify(QwtSlider*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QwtSlider_disconnectNotify(QwtSlider*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtSlider final : public QwtSlider {
public:

	MiqtVirtualQwtSlider(QWidget* parent): QwtSlider(parent) {}
	MiqtVirtualQwtSlider(): QwtSlider() {}
	MiqtVirtualQwtSlider(Qt::Orientation param1): QwtSlider(param1) {}
	MiqtVirtualQwtSlider(Qt::Orientation param1, QWidget* parent): QwtSlider(param1, parent) {}

	virtual ~MiqtVirtualQwtSlider() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__sizeHint;
	bool owns_return__sizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (!handle__sizeHint) {
			return QwtSlider::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtSlider_sizeHint(this, handle__sizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__sizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QwtSlider_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__minimumSizeHint;
	bool owns_return__minimumSizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (!handle__minimumSizeHint) {
			return QwtSlider::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtSlider_minimumSizeHint(this, handle__minimumSizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__minimumSizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QwtSlider_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__scrolledTo;

	// Subclass to allow providing a Go implementation
	virtual double scrolledTo(const QPoint& param1) const override {
		if (!handle__scrolledTo) {
			return QwtSlider::scrolledTo(param1);
		}

		const QPoint& param1_ret = param1;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&param1_ret);
		double callback_return_value = miqt_exec_callback_QwtSlider_scrolledTo(this, handle__scrolledTo.value(), sigval1);
		return static_cast<double>(callback_return_value);
	}

	friend double QwtSlider_virtualbase_scrolledTo(const void* self, QPoint* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__isScrollPosition;

	// Subclass to allow providing a Go implementation
	virtual bool isScrollPosition(const QPoint& param1) const override {
		if (!handle__isScrollPosition) {
			return QwtSlider::isScrollPosition(param1);
		}

		const QPoint& param1_ret = param1;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&param1_ret);
		bool callback_return_value = miqt_exec_callback_QwtSlider_isScrollPosition(this, handle__isScrollPosition.value(), sigval1);
		return callback_return_value;
	}

	friend bool QwtSlider_virtualbase_isScrollPosition(const void* self, QPoint* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__drawSlider;

	// Subclass to allow providing a Go implementation
	virtual void drawSlider(QPainter* param1, const QRect& param2) const override {
		if (!handle__drawSlider) {
			QwtSlider::drawSlider(param1, param2);
			return;
		}

		QPainter* sigval1 = param1;
		const QRect& param2_ret = param2;
		// Cast returned reference into pointer
		QRect* sigval2 = const_cast<QRect*>(&param2_ret);
		miqt_exec_callback_QwtSlider_drawSlider(this, handle__drawSlider.value(), sigval1, sigval2);

	}

	friend void QwtSlider_virtualbase_drawSlider(const void* self, QPainter* param1, QRect* param2);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__drawHandle;

	// Subclass to allow providing a Go implementation
	virtual void drawHandle(QPainter* param1, const QRect& param2, int pos) const override {
		if (!handle__drawHandle) {
			QwtSlider::drawHandle(param1, param2, pos);
			return;
		}

		QPainter* sigval1 = param1;
		const QRect& param2_ret = param2;
		// Cast returned reference into pointer
		QRect* sigval2 = const_cast<QRect*>(&param2_ret);
		int sigval3 = pos;
		miqt_exec_callback_QwtSlider_drawHandle(this, handle__drawHandle.value(), sigval1, sigval2, sigval3);

	}

	friend void QwtSlider_virtualbase_drawHandle(const void* self, QPainter* param1, QRect* param2, int pos);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__mousePressEvent;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (!handle__mousePressEvent) {
			QwtSlider::mousePressEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtSlider_mousePressEvent(this, handle__mousePressEvent.value(), sigval1);

	}

	friend void QwtSlider_virtualbase_mousePressEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__mouseReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (!handle__mouseReleaseEvent) {
			QwtSlider::mouseReleaseEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtSlider_mouseReleaseEvent(this, handle__mouseReleaseEvent.value(), sigval1);

	}

	friend void QwtSlider_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__resizeEvent;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (!handle__resizeEvent) {
			QwtSlider::resizeEvent(param1);
			return;
		}

		QResizeEvent* sigval1 = param1;
		miqt_exec_callback_QwtSlider_resizeEvent(this, handle__resizeEvent.value(), sigval1);

	}

	friend void QwtSlider_virtualbase_resizeEvent(void* self, QResizeEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__paintEvent;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (!handle__paintEvent) {
			QwtSlider::paintEvent(param1);
			return;
		}

		QPaintEvent* sigval1 = param1;
		miqt_exec_callback_QwtSlider_paintEvent(this, handle__paintEvent.value(), sigval1);

	}

	friend void QwtSlider_virtualbase_paintEvent(void* self, QPaintEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__changeEvent;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (!handle__changeEvent) {
			QwtSlider::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QwtSlider_changeEvent(this, handle__changeEvent.value(), sigval1);

	}

	friend void QwtSlider_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* param1) override {
		if (!handle__timerEvent) {
			QwtSlider::timerEvent(param1);
			return;
		}

		QTimerEvent* sigval1 = param1;
		miqt_exec_callback_QwtSlider_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QwtSlider_virtualbase_timerEvent(void* self, QTimerEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__scaleChange;

	// Subclass to allow providing a Go implementation
	virtual void scaleChange() override {
		if (!handle__scaleChange) {
			QwtSlider::scaleChange();
			return;
		}

		miqt_exec_callback_QwtSlider_scaleChange(this, handle__scaleChange.value());

	}

	friend void QwtSlider_virtualbase_scaleChange(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__mouseMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (!handle__mouseMoveEvent) {
			QwtSlider::mouseMoveEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtSlider_mouseMoveEvent(this, handle__mouseMoveEvent.value(), sigval1);

	}

	friend void QwtSlider_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__keyPressEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (!handle__keyPressEvent) {
			QwtSlider::keyPressEvent(param1);
			return;
		}

		QKeyEvent* sigval1 = param1;
		miqt_exec_callback_QwtSlider_keyPressEvent(this, handle__keyPressEvent.value(), sigval1);

	}

	friend void QwtSlider_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__wheelEvent;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (!handle__wheelEvent) {
			QwtSlider::wheelEvent(param1);
			return;
		}

		QWheelEvent* sigval1 = param1;
		miqt_exec_callback_QwtSlider_wheelEvent(this, handle__wheelEvent.value(), sigval1);

	}

	friend void QwtSlider_virtualbase_wheelEvent(void* self, QWheelEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__sliderChange;

	// Subclass to allow providing a Go implementation
	virtual void sliderChange() override {
		if (!handle__sliderChange) {
			QwtSlider::sliderChange();
			return;
		}

		miqt_exec_callback_QwtSlider_sliderChange(this, handle__sliderChange.value());

	}

	friend void QwtSlider_virtualbase_sliderChange(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__devType;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (!handle__devType) {
			return QwtSlider::devType();
		}

		int callback_return_value = miqt_exec_callback_QwtSlider_devType(this, handle__devType.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QwtSlider_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__setVisible;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (!handle__setVisible) {
			QwtSlider::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QwtSlider_setVisible(this, handle__setVisible.value(), sigval1);

	}

	friend void QwtSlider_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__heightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (!handle__heightForWidth) {
			return QwtSlider::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QwtSlider_heightForWidth(this, handle__heightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtSlider_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__hasHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (!handle__hasHeightForWidth) {
			return QwtSlider::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QwtSlider_hasHeightForWidth(this, handle__hasHeightForWidth.value());
		return callback_return_value;
	}

	friend bool QwtSlider_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__paintEngine;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (!handle__paintEngine) {
			return QwtSlider::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QwtSlider_paintEngine(this, handle__paintEngine.value());
		return callback_return_value;
	}

	friend QPaintEngine* QwtSlider_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QwtSlider::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QwtSlider_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QwtSlider_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__mouseDoubleClickEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (!handle__mouseDoubleClickEvent) {
			QwtSlider::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtSlider_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent.value(), sigval1);

	}

	friend void QwtSlider_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__keyReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (!handle__keyReleaseEvent) {
			QwtSlider::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QwtSlider_keyReleaseEvent(this, handle__keyReleaseEvent.value(), sigval1);

	}

	friend void QwtSlider_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__focusInEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (!handle__focusInEvent) {
			QwtSlider::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QwtSlider_focusInEvent(this, handle__focusInEvent.value(), sigval1);

	}

	friend void QwtSlider_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__focusOutEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (!handle__focusOutEvent) {
			QwtSlider::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QwtSlider_focusOutEvent(this, handle__focusOutEvent.value(), sigval1);

	}

	friend void QwtSlider_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__enterEvent;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (!handle__enterEvent) {
			QwtSlider::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtSlider_enterEvent(this, handle__enterEvent.value(), sigval1);

	}

	friend void QwtSlider_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__leaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (!handle__leaveEvent) {
			QwtSlider::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtSlider_leaveEvent(this, handle__leaveEvent.value(), sigval1);

	}

	friend void QwtSlider_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__moveEvent;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (!handle__moveEvent) {
			QwtSlider::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtSlider_moveEvent(this, handle__moveEvent.value(), sigval1);

	}

	friend void QwtSlider_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__closeEvent;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (!handle__closeEvent) {
			QwtSlider::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QwtSlider_closeEvent(this, handle__closeEvent.value(), sigval1);

	}

	friend void QwtSlider_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__contextMenuEvent;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (!handle__contextMenuEvent) {
			QwtSlider::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QwtSlider_contextMenuEvent(this, handle__contextMenuEvent.value(), sigval1);

	}

	friend void QwtSlider_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__tabletEvent;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (!handle__tabletEvent) {
			QwtSlider::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QwtSlider_tabletEvent(this, handle__tabletEvent.value(), sigval1);

	}

	friend void QwtSlider_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__actionEvent;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (!handle__actionEvent) {
			QwtSlider::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QwtSlider_actionEvent(this, handle__actionEvent.value(), sigval1);

	}

	friend void QwtSlider_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__dragEnterEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (!handle__dragEnterEvent) {
			QwtSlider::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QwtSlider_dragEnterEvent(this, handle__dragEnterEvent.value(), sigval1);

	}

	friend void QwtSlider_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__dragMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (!handle__dragMoveEvent) {
			QwtSlider::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtSlider_dragMoveEvent(this, handle__dragMoveEvent.value(), sigval1);

	}

	friend void QwtSlider_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__dragLeaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (!handle__dragLeaveEvent) {
			QwtSlider::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QwtSlider_dragLeaveEvent(this, handle__dragLeaveEvent.value(), sigval1);

	}

	friend void QwtSlider_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__dropEvent;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (!handle__dropEvent) {
			QwtSlider::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QwtSlider_dropEvent(this, handle__dropEvent.value(), sigval1);

	}

	friend void QwtSlider_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__showEvent;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (!handle__showEvent) {
			QwtSlider::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QwtSlider_showEvent(this, handle__showEvent.value(), sigval1);

	}

	friend void QwtSlider_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__hideEvent;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (!handle__hideEvent) {
			QwtSlider::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QwtSlider_hideEvent(this, handle__hideEvent.value(), sigval1);

	}

	friend void QwtSlider_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__nativeEvent;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (!handle__nativeEvent) {
			return QwtSlider::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QwtSlider_nativeEvent(this, handle__nativeEvent.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QwtSlider_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__metric;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (!handle__metric) {
			return QwtSlider::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QwtSlider_metric(this, handle__metric.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtSlider_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__initPainter;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (!handle__initPainter) {
			QwtSlider::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QwtSlider_initPainter(this, handle__initPainter.value(), sigval1);

	}

	friend void QwtSlider_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__redirected;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (!handle__redirected) {
			return QwtSlider::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QwtSlider_redirected(this, handle__redirected.value(), sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QwtSlider_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__sharedPainter;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (!handle__sharedPainter) {
			return QwtSlider::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QwtSlider_sharedPainter(this, handle__sharedPainter.value());
		return callback_return_value;
	}

	friend QPainter* QwtSlider_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__inputMethodEvent;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (!handle__inputMethodEvent) {
			QwtSlider::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QwtSlider_inputMethodEvent(this, handle__inputMethodEvent.value(), sigval1);

	}

	friend void QwtSlider_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__inputMethodQuery;
	bool owns_return__inputMethodQuery = false;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (!handle__inputMethodQuery) {
			return QwtSlider::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QwtSlider_inputMethodQuery(this, handle__inputMethodQuery.value(), sigval1);
		std::unique_ptr<QVariant> callback_return_value_owner;
		if (owns_return__inputMethodQuery) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QVariant* QwtSlider_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__focusNextPrevChild;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (!handle__focusNextPrevChild) {
			return QwtSlider::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QwtSlider_focusNextPrevChild(this, handle__focusNextPrevChild.value(), sigval1);
		return callback_return_value;
	}

	friend bool QwtSlider_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QwtSlider::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QwtSlider_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QwtSlider_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QwtSlider::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QwtSlider_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QwtSlider_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QwtSlider::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtSlider_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QwtSlider_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QwtSlider::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtSlider_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QwtSlider_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QwtSlider::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtSlider_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QwtSlider_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QRect* QwtSlider_protectedbase_sliderRect(bool* _dynamic_cast_ok, const void* self);
	friend QRect* QwtSlider_protectedbase_handleRect(bool* _dynamic_cast_ok, const void* self);
	friend void QwtSlider_protectedbase_incrementValue(bool* _dynamic_cast_ok, void* self, int stepCount);
	friend double QwtSlider_protectedbase_incrementedValue(bool* _dynamic_cast_ok, const void* self, double value, int stepCount);
	friend void QwtSlider_protectedbase_rescale(bool* _dynamic_cast_ok, void* self, double lowerBound, double upperBound, double stepSize);
	friend void QwtSlider_protectedbase_setAbstractScaleDraw(bool* _dynamic_cast_ok, void* self, QwtAbstractScaleDraw* abstractScaleDraw);
	friend QwtAbstractScaleDraw* QwtSlider_protectedbase_abstractScaleDraw(bool* _dynamic_cast_ok, const void* self);
	friend void QwtSlider_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QwtSlider_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QwtSlider_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QwtSlider_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QwtSlider_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QwtSlider_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QwtSlider_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QwtSlider_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QwtSlider_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QwtSlider* QwtSlider_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQwtSlider(parent);
}

QwtSlider* QwtSlider_new2() {
	return new (std::nothrow) MiqtVirtualQwtSlider();
}

QwtSlider* QwtSlider_new3(int param1) {
	return new (std::nothrow) MiqtVirtualQwtSlider(static_cast<Qt::Orientation>(param1));
}

QwtSlider* QwtSlider_new4(int param1, QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQwtSlider(static_cast<Qt::Orientation>(param1), parent);
}

void QwtSlider_virtbase(QwtSlider* src, QwtAbstractSlider** outptr_QwtAbstractSlider) {
	*outptr_QwtAbstractSlider = static_cast<QwtAbstractSlider*>(src);
}

QMetaObject* QwtSlider_metaObject(const QwtSlider* self) {
	return (QMetaObject*) self->metaObject();
}

void* QwtSlider_metacast(QwtSlider* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QwtSlider_tr(const char* s) {
	QString _ret = QwtSlider::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtSlider_trUtf8(const char* s) {
	QString _ret = QwtSlider::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QwtSlider_setOrientation(QwtSlider* self, int orientation) {
	self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

int QwtSlider_orientation(const QwtSlider* self) {
	Qt::Orientation _ret = self->orientation();
	return static_cast<int>(_ret);
}

void QwtSlider_setScalePosition(QwtSlider* self, int scalePosition) {
	self->setScalePosition(static_cast<QwtSlider::ScalePosition>(scalePosition));
}

int QwtSlider_scalePosition(const QwtSlider* self) {
	QwtSlider::ScalePosition _ret = self->scalePosition();
	return static_cast<int>(_ret);
}

void QwtSlider_setTrough(QwtSlider* self, bool trough) {
	self->setTrough(trough);
}

bool QwtSlider_hasTrough(const QwtSlider* self) {
	return self->hasTrough();
}

void QwtSlider_setGroove(QwtSlider* self, bool groove) {
	self->setGroove(groove);
}

bool QwtSlider_hasGroove(const QwtSlider* self) {
	return self->hasGroove();
}

void QwtSlider_setHandleSize(QwtSlider* self, QSize* handleSize) {
	self->setHandleSize(*handleSize);
}

QSize* QwtSlider_handleSize(const QwtSlider* self) {
	return new QSize(self->handleSize());
}

void QwtSlider_setBorderWidth(QwtSlider* self, int borderWidth) {
	self->setBorderWidth(static_cast<int>(borderWidth));
}

int QwtSlider_borderWidth(const QwtSlider* self) {
	return self->borderWidth();
}

void QwtSlider_setSpacing(QwtSlider* self, int spacing) {
	self->setSpacing(static_cast<int>(spacing));
}

int QwtSlider_spacing(const QwtSlider* self) {
	return self->spacing();
}

QSize* QwtSlider_sizeHint(const QwtSlider* self) {
	return new QSize(self->sizeHint());
}

QSize* QwtSlider_minimumSizeHint(const QwtSlider* self) {
	return new QSize(self->minimumSizeHint());
}

void QwtSlider_setScaleDraw(QwtSlider* self, QwtScaleDraw* scaleDraw) {
	self->setScaleDraw(scaleDraw);
}

QwtScaleDraw* QwtSlider_scaleDraw(const QwtSlider* self) {
	return (QwtScaleDraw*) self->scaleDraw();
}

void QwtSlider_setUpdateInterval(QwtSlider* self, int updateInterval) {
	self->setUpdateInterval(static_cast<int>(updateInterval));
}

int QwtSlider_updateInterval(const QwtSlider* self) {
	return self->updateInterval();
}

struct miqt_string QwtSlider_tr2(const char* s, const char* c) {
	QString _ret = QwtSlider::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtSlider_tr3(const char* s, const char* c, int n) {
	QString _ret = QwtSlider::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtSlider_trUtf82(const char* s, const char* c) {
	QString _ret = QwtSlider::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtSlider_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QwtSlider::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QwtSlider_override_virtual_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = false;
	return true;
}

bool QwtSlider_override_virtual_owned_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = true;
	return true;
}

QSize* QwtSlider_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtSlider*>(self)->QwtSlider::sizeHint());
}

bool QwtSlider_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	self_cast->owns_return__minimumSizeHint = false;
	return true;
}

bool QwtSlider_override_virtual_owned_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	self_cast->owns_return__minimumSizeHint = true;
	return true;
}

QSize* QwtSlider_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtSlider*>(self)->QwtSlider::minimumSizeHint());
}

bool QwtSlider_override_virtual_scrolledTo(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scrolledTo = std::move(slot_handle);
	return true;
}

double QwtSlider_virtualbase_scrolledTo(const void* self, QPoint* param1) {
	return static_cast<const MiqtVirtualQwtSlider*>(self)->QwtSlider::scrolledTo(*param1);
}

bool QwtSlider_override_virtual_isScrollPosition(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isScrollPosition = std::move(slot_handle);
	return true;
}

bool QwtSlider_virtualbase_isScrollPosition(const void* self, QPoint* param1) {
	return static_cast<const MiqtVirtualQwtSlider*>(self)->QwtSlider::isScrollPosition(*param1);
}

bool QwtSlider_override_virtual_drawSlider(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawSlider = std::move(slot_handle);
	return true;
}

void QwtSlider_virtualbase_drawSlider(const void* self, QPainter* param1, QRect* param2) {
	static_cast<const MiqtVirtualQwtSlider*>(self)->QwtSlider::drawSlider(param1, *param2);
}

bool QwtSlider_override_virtual_drawHandle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawHandle = std::move(slot_handle);
	return true;
}

void QwtSlider_virtualbase_drawHandle(const void* self, QPainter* param1, QRect* param2, int pos) {
	static_cast<const MiqtVirtualQwtSlider*>(self)->QwtSlider::drawHandle(param1, *param2, static_cast<int>(pos));
}

bool QwtSlider_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = std::move(slot_handle);
	return true;
}

void QwtSlider_virtualbase_mousePressEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtSlider*>(self)->QwtSlider::mousePressEvent(param1);
}

bool QwtSlider_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = std::move(slot_handle);
	return true;
}

void QwtSlider_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtSlider*>(self)->QwtSlider::mouseReleaseEvent(param1);
}

bool QwtSlider_override_virtual_resizeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = std::move(slot_handle);
	return true;
}

void QwtSlider_virtualbase_resizeEvent(void* self, QResizeEvent* param1) {
	static_cast<MiqtVirtualQwtSlider*>(self)->QwtSlider::resizeEvent(param1);
}

bool QwtSlider_override_virtual_paintEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = std::move(slot_handle);
	return true;
}

void QwtSlider_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	static_cast<MiqtVirtualQwtSlider*>(self)->QwtSlider::paintEvent(param1);
}

bool QwtSlider_override_virtual_changeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = std::move(slot_handle);
	return true;
}

void QwtSlider_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQwtSlider*>(self)->QwtSlider::changeEvent(param1);
}

bool QwtSlider_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QwtSlider_virtualbase_timerEvent(void* self, QTimerEvent* param1) {
	static_cast<MiqtVirtualQwtSlider*>(self)->QwtSlider::timerEvent(param1);
}

bool QwtSlider_override_virtual_scaleChange(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scaleChange = std::move(slot_handle);
	return true;
}

void QwtSlider_virtualbase_scaleChange(void* self) {
	static_cast<MiqtVirtualQwtSlider*>(self)->QwtSlider::scaleChange();
}

bool QwtSlider_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = std::move(slot_handle);
	return true;
}

void QwtSlider_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtSlider*>(self)->QwtSlider::mouseMoveEvent(param1);
}

bool QwtSlider_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = std::move(slot_handle);
	return true;
}

void QwtSlider_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {
	static_cast<MiqtVirtualQwtSlider*>(self)->QwtSlider::keyPressEvent(param1);
}

bool QwtSlider_override_virtual_wheelEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = std::move(slot_handle);
	return true;
}

void QwtSlider_virtualbase_wheelEvent(void* self, QWheelEvent* param1) {
	static_cast<MiqtVirtualQwtSlider*>(self)->QwtSlider::wheelEvent(param1);
}

bool QwtSlider_override_virtual_sliderChange(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sliderChange = std::move(slot_handle);
	return true;
}

void QwtSlider_virtualbase_sliderChange(void* self) {
	static_cast<MiqtVirtualQwtSlider*>(self)->QwtSlider::sliderChange();
}

bool QwtSlider_override_virtual_devType(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = std::move(slot_handle);
	return true;
}

int QwtSlider_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQwtSlider*>(self)->QwtSlider::devType();
}

bool QwtSlider_override_virtual_setVisible(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = std::move(slot_handle);
	return true;
}

void QwtSlider_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQwtSlider*>(self)->QwtSlider::setVisible(visible);
}

bool QwtSlider_override_virtual_heightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = std::move(slot_handle);
	return true;
}

int QwtSlider_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtSlider*>(self)->QwtSlider::heightForWidth(static_cast<int>(param1));
}

bool QwtSlider_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = std::move(slot_handle);
	return true;
}

bool QwtSlider_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQwtSlider*>(self)->QwtSlider::hasHeightForWidth();
}

bool QwtSlider_override_virtual_paintEngine(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = std::move(slot_handle);
	return true;
}

QPaintEngine* QwtSlider_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQwtSlider*>(self)->QwtSlider::paintEngine();
}

bool QwtSlider_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QwtSlider_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQwtSlider*>(self)->QwtSlider::event(event);
}

bool QwtSlider_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = std::move(slot_handle);
	return true;
}

void QwtSlider_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtSlider*>(self)->QwtSlider::mouseDoubleClickEvent(event);
}

bool QwtSlider_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = std::move(slot_handle);
	return true;
}

void QwtSlider_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQwtSlider*>(self)->QwtSlider::keyReleaseEvent(event);
}

bool QwtSlider_override_virtual_focusInEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = std::move(slot_handle);
	return true;
}

void QwtSlider_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQwtSlider*>(self)->QwtSlider::focusInEvent(event);
}

bool QwtSlider_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = std::move(slot_handle);
	return true;
}

void QwtSlider_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQwtSlider*>(self)->QwtSlider::focusOutEvent(event);
}

bool QwtSlider_override_virtual_enterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = std::move(slot_handle);
	return true;
}

void QwtSlider_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtSlider*>(self)->QwtSlider::enterEvent(event);
}

bool QwtSlider_override_virtual_leaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = std::move(slot_handle);
	return true;
}

void QwtSlider_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtSlider*>(self)->QwtSlider::leaveEvent(event);
}

bool QwtSlider_override_virtual_moveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = std::move(slot_handle);
	return true;
}

void QwtSlider_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQwtSlider*>(self)->QwtSlider::moveEvent(event);
}

bool QwtSlider_override_virtual_closeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = std::move(slot_handle);
	return true;
}

void QwtSlider_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQwtSlider*>(self)->QwtSlider::closeEvent(event);
}

bool QwtSlider_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = std::move(slot_handle);
	return true;
}

void QwtSlider_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQwtSlider*>(self)->QwtSlider::contextMenuEvent(event);
}

bool QwtSlider_override_virtual_tabletEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = std::move(slot_handle);
	return true;
}

void QwtSlider_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQwtSlider*>(self)->QwtSlider::tabletEvent(event);
}

bool QwtSlider_override_virtual_actionEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = std::move(slot_handle);
	return true;
}

void QwtSlider_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQwtSlider*>(self)->QwtSlider::actionEvent(event);
}

bool QwtSlider_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = std::move(slot_handle);
	return true;
}

void QwtSlider_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQwtSlider*>(self)->QwtSlider::dragEnterEvent(event);
}

bool QwtSlider_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = std::move(slot_handle);
	return true;
}

void QwtSlider_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQwtSlider*>(self)->QwtSlider::dragMoveEvent(event);
}

bool QwtSlider_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = std::move(slot_handle);
	return true;
}

void QwtSlider_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQwtSlider*>(self)->QwtSlider::dragLeaveEvent(event);
}

bool QwtSlider_override_virtual_dropEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = std::move(slot_handle);
	return true;
}

void QwtSlider_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQwtSlider*>(self)->QwtSlider::dropEvent(event);
}

bool QwtSlider_override_virtual_showEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = std::move(slot_handle);
	return true;
}

void QwtSlider_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQwtSlider*>(self)->QwtSlider::showEvent(event);
}

bool QwtSlider_override_virtual_hideEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = std::move(slot_handle);
	return true;
}

void QwtSlider_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQwtSlider*>(self)->QwtSlider::hideEvent(event);
}

bool QwtSlider_override_virtual_nativeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = std::move(slot_handle);
	return true;
}

bool QwtSlider_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQwtSlider*>(self)->QwtSlider::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QwtSlider_override_virtual_metric(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = std::move(slot_handle);
	return true;
}

int QwtSlider_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtSlider*>(self)->QwtSlider::metric(static_cast<MiqtVirtualQwtSlider::PaintDeviceMetric>(param1));
}

bool QwtSlider_override_virtual_initPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = std::move(slot_handle);
	return true;
}

void QwtSlider_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQwtSlider*>(self)->QwtSlider::initPainter(painter);
}

bool QwtSlider_override_virtual_redirected(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = std::move(slot_handle);
	return true;
}

QPaintDevice* QwtSlider_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQwtSlider*>(self)->QwtSlider::redirected(offset);
}

bool QwtSlider_override_virtual_sharedPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = std::move(slot_handle);
	return true;
}

QPainter* QwtSlider_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQwtSlider*>(self)->QwtSlider::sharedPainter();
}

bool QwtSlider_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = std::move(slot_handle);
	return true;
}

void QwtSlider_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQwtSlider*>(self)->QwtSlider::inputMethodEvent(param1);
}

bool QwtSlider_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	self_cast->owns_return__inputMethodQuery = false;
	return true;
}

bool QwtSlider_override_virtual_owned_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	self_cast->owns_return__inputMethodQuery = true;
	return true;
}

QVariant* QwtSlider_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQwtSlider*>(self)->QwtSlider::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QwtSlider_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = std::move(slot_handle);
	return true;
}

bool QwtSlider_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQwtSlider*>(self)->QwtSlider::focusNextPrevChild(next);
}

bool QwtSlider_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QwtSlider_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQwtSlider*>(self)->QwtSlider::eventFilter(watched, event);
}

bool QwtSlider_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QwtSlider_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQwtSlider*>(self)->QwtSlider::childEvent(event);
}

bool QwtSlider_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QwtSlider_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtSlider*>(self)->QwtSlider::customEvent(event);
}

bool QwtSlider_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QwtSlider_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtSlider*>(self)->QwtSlider::connectNotify(*signal);
}

bool QwtSlider_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtSlider> slot_handle(slot);
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QwtSlider_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtSlider*>(self)->QwtSlider::disconnectNotify(*signal);
}

QRect* QwtSlider_protectedbase_sliderRect(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QRect(self_cast->sliderRect());
}

QRect* QwtSlider_protectedbase_handleRect(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QRect(self_cast->handleRect());
}

void QwtSlider_protectedbase_incrementValue(bool* _dynamic_cast_ok, void* self, int stepCount) {
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->incrementValue(static_cast<int>(stepCount));
}

double QwtSlider_protectedbase_incrementedValue(bool* _dynamic_cast_ok, const void* self, double value, int stepCount) {
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->incrementedValue(static_cast<double>(value), static_cast<int>(stepCount));
}

void QwtSlider_protectedbase_rescale(bool* _dynamic_cast_ok, void* self, double lowerBound, double upperBound, double stepSize) {
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->rescale(static_cast<double>(lowerBound), static_cast<double>(upperBound), static_cast<double>(stepSize));
}

void QwtSlider_protectedbase_setAbstractScaleDraw(bool* _dynamic_cast_ok, void* self, QwtAbstractScaleDraw* abstractScaleDraw) {
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setAbstractScaleDraw(abstractScaleDraw);
}

QwtAbstractScaleDraw* QwtSlider_protectedbase_abstractScaleDraw(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return (QwtAbstractScaleDraw*) self_cast->abstractScaleDraw();
}

void QwtSlider_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QwtSlider_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QwtSlider_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QwtSlider_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QwtSlider_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QwtSlider_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QwtSlider_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QwtSlider_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QwtSlider_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQwtSlider* self_cast = dynamic_cast<MiqtVirtualQwtSlider*>( (QwtSlider*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QwtSlider_delete(QwtSlider* self) {
	delete self;
}

