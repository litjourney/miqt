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
#include <QPointF>
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
#include <qwt_dial.h>
#include "gen_qwt_dial.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QwtDial(intptr_t);
void miqt_exec_callback_QwtDial_setOrigin(QwtDial*, intptr_t, double);
QRect* miqt_exec_callback_QwtDial_scaleInnerRect(const QwtDial*, intptr_t);
QSize* miqt_exec_callback_QwtDial_sizeHint(const QwtDial*, intptr_t);
QSize* miqt_exec_callback_QwtDial_minimumSizeHint(const QwtDial*, intptr_t);
void miqt_exec_callback_QwtDial_wheelEvent(QwtDial*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QwtDial_paintEvent(QwtDial*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QwtDial_changeEvent(QwtDial*, intptr_t, QEvent*);
void miqt_exec_callback_QwtDial_drawFrame(QwtDial*, intptr_t, QPainter*);
void miqt_exec_callback_QwtDial_drawContents(const QwtDial*, intptr_t, QPainter*);
void miqt_exec_callback_QwtDial_drawFocusIndicator(const QwtDial*, intptr_t, QPainter*);
void miqt_exec_callback_QwtDial_drawScale(const QwtDial*, intptr_t, QPainter*, QPointF*, double);
void miqt_exec_callback_QwtDial_drawScaleContents(const QwtDial*, intptr_t, QPainter*, QPointF*, double);
void miqt_exec_callback_QwtDial_drawNeedle(const QwtDial*, intptr_t, QPainter*, QPointF*, double, double, int);
double miqt_exec_callback_QwtDial_scrolledTo(const QwtDial*, intptr_t, QPoint*);
bool miqt_exec_callback_QwtDial_isScrollPosition(const QwtDial*, intptr_t, QPoint*);
void miqt_exec_callback_QwtDial_sliderChange(QwtDial*, intptr_t);
void miqt_exec_callback_QwtDial_scaleChange(QwtDial*, intptr_t);
void miqt_exec_callback_QwtDial_mousePressEvent(QwtDial*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtDial_mouseReleaseEvent(QwtDial*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtDial_mouseMoveEvent(QwtDial*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtDial_keyPressEvent(QwtDial*, intptr_t, QKeyEvent*);
int miqt_exec_callback_QwtDial_devType(const QwtDial*, intptr_t);
void miqt_exec_callback_QwtDial_setVisible(QwtDial*, intptr_t, bool);
int miqt_exec_callback_QwtDial_heightForWidth(const QwtDial*, intptr_t, int);
bool miqt_exec_callback_QwtDial_hasHeightForWidth(const QwtDial*, intptr_t);
QPaintEngine* miqt_exec_callback_QwtDial_paintEngine(const QwtDial*, intptr_t);
bool miqt_exec_callback_QwtDial_event(QwtDial*, intptr_t, QEvent*);
void miqt_exec_callback_QwtDial_mouseDoubleClickEvent(QwtDial*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtDial_keyReleaseEvent(QwtDial*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtDial_focusInEvent(QwtDial*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QwtDial_focusOutEvent(QwtDial*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QwtDial_enterEvent(QwtDial*, intptr_t, QEvent*);
void miqt_exec_callback_QwtDial_leaveEvent(QwtDial*, intptr_t, QEvent*);
void miqt_exec_callback_QwtDial_moveEvent(QwtDial*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QwtDial_resizeEvent(QwtDial*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QwtDial_closeEvent(QwtDial*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QwtDial_contextMenuEvent(QwtDial*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QwtDial_tabletEvent(QwtDial*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QwtDial_actionEvent(QwtDial*, intptr_t, QActionEvent*);
void miqt_exec_callback_QwtDial_dragEnterEvent(QwtDial*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QwtDial_dragMoveEvent(QwtDial*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QwtDial_dragLeaveEvent(QwtDial*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QwtDial_dropEvent(QwtDial*, intptr_t, QDropEvent*);
void miqt_exec_callback_QwtDial_showEvent(QwtDial*, intptr_t, QShowEvent*);
void miqt_exec_callback_QwtDial_hideEvent(QwtDial*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QwtDial_nativeEvent(QwtDial*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QwtDial_metric(const QwtDial*, intptr_t, int);
void miqt_exec_callback_QwtDial_initPainter(const QwtDial*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QwtDial_redirected(const QwtDial*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QwtDial_sharedPainter(const QwtDial*, intptr_t);
void miqt_exec_callback_QwtDial_inputMethodEvent(QwtDial*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QwtDial_inputMethodQuery(const QwtDial*, intptr_t, int);
bool miqt_exec_callback_QwtDial_focusNextPrevChild(QwtDial*, intptr_t, bool);
bool miqt_exec_callback_QwtDial_eventFilter(QwtDial*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QwtDial_timerEvent(QwtDial*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QwtDial_childEvent(QwtDial*, intptr_t, QChildEvent*);
void miqt_exec_callback_QwtDial_customEvent(QwtDial*, intptr_t, QEvent*);
void miqt_exec_callback_QwtDial_connectNotify(QwtDial*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QwtDial_disconnectNotify(QwtDial*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtDial final : public QwtDial {
public:

	MiqtVirtualQwtDial(QWidget* parent): QwtDial(parent) {}
	MiqtVirtualQwtDial(): QwtDial() {}

	virtual ~MiqtVirtualQwtDial() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__setOrigin;

	// Subclass to allow providing a Go implementation
	virtual void setOrigin(double origin) override {
		if (!handle__setOrigin) {
			QwtDial::setOrigin(origin);
			return;
		}

		double sigval1 = origin;
		miqt_exec_callback_QwtDial_setOrigin(this, handle__setOrigin.value(), sigval1);

	}

	friend void QwtDial_virtualbase_setOrigin(void* self, double origin);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__scaleInnerRect;

	// Subclass to allow providing a Go implementation
	virtual QRect scaleInnerRect() const override {
		if (!handle__scaleInnerRect) {
			return QwtDial::scaleInnerRect();
		}

		QRect* callback_return_value = miqt_exec_callback_QwtDial_scaleInnerRect(this, handle__scaleInnerRect.value());
		return *callback_return_value;
	}

	friend QRect* QwtDial_virtualbase_scaleInnerRect(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__sizeHint;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (!handle__sizeHint) {
			return QwtDial::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtDial_sizeHint(this, handle__sizeHint.value());
		return *callback_return_value;
	}

	friend QSize* QwtDial_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__minimumSizeHint;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (!handle__minimumSizeHint) {
			return QwtDial::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtDial_minimumSizeHint(this, handle__minimumSizeHint.value());
		return *callback_return_value;
	}

	friend QSize* QwtDial_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__wheelEvent;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (!handle__wheelEvent) {
			QwtDial::wheelEvent(param1);
			return;
		}

		QWheelEvent* sigval1 = param1;
		miqt_exec_callback_QwtDial_wheelEvent(this, handle__wheelEvent.value(), sigval1);

	}

	friend void QwtDial_virtualbase_wheelEvent(void* self, QWheelEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__paintEvent;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (!handle__paintEvent) {
			QwtDial::paintEvent(param1);
			return;
		}

		QPaintEvent* sigval1 = param1;
		miqt_exec_callback_QwtDial_paintEvent(this, handle__paintEvent.value(), sigval1);

	}

	friend void QwtDial_virtualbase_paintEvent(void* self, QPaintEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__changeEvent;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (!handle__changeEvent) {
			QwtDial::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QwtDial_changeEvent(this, handle__changeEvent.value(), sigval1);

	}

	friend void QwtDial_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__drawFrame;

	// Subclass to allow providing a Go implementation
	virtual void drawFrame(QPainter* param1) override {
		if (!handle__drawFrame) {
			QwtDial::drawFrame(param1);
			return;
		}

		QPainter* sigval1 = param1;
		miqt_exec_callback_QwtDial_drawFrame(this, handle__drawFrame.value(), sigval1);

	}

	friend void QwtDial_virtualbase_drawFrame(void* self, QPainter* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__drawContents;

	// Subclass to allow providing a Go implementation
	virtual void drawContents(QPainter* param1) const override {
		if (!handle__drawContents) {
			QwtDial::drawContents(param1);
			return;
		}

		QPainter* sigval1 = param1;
		miqt_exec_callback_QwtDial_drawContents(this, handle__drawContents.value(), sigval1);

	}

	friend void QwtDial_virtualbase_drawContents(const void* self, QPainter* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__drawFocusIndicator;

	// Subclass to allow providing a Go implementation
	virtual void drawFocusIndicator(QPainter* param1) const override {
		if (!handle__drawFocusIndicator) {
			QwtDial::drawFocusIndicator(param1);
			return;
		}

		QPainter* sigval1 = param1;
		miqt_exec_callback_QwtDial_drawFocusIndicator(this, handle__drawFocusIndicator.value(), sigval1);

	}

	friend void QwtDial_virtualbase_drawFocusIndicator(const void* self, QPainter* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__drawScale;

	// Subclass to allow providing a Go implementation
	virtual void drawScale(QPainter* param1, const QPointF& center, double radius) const override {
		if (!handle__drawScale) {
			QwtDial::drawScale(param1, center, radius);
			return;
		}

		QPainter* sigval1 = param1;
		const QPointF& center_ret = center;
		// Cast returned reference into pointer
		QPointF* sigval2 = const_cast<QPointF*>(&center_ret);
		double sigval3 = radius;
		miqt_exec_callback_QwtDial_drawScale(this, handle__drawScale.value(), sigval1, sigval2, sigval3);

	}

	friend void QwtDial_virtualbase_drawScale(const void* self, QPainter* param1, QPointF* center, double radius);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__drawScaleContents;

	// Subclass to allow providing a Go implementation
	virtual void drawScaleContents(QPainter* painter, const QPointF& center, double radius) const override {
		if (!handle__drawScaleContents) {
			QwtDial::drawScaleContents(painter, center, radius);
			return;
		}

		QPainter* sigval1 = painter;
		const QPointF& center_ret = center;
		// Cast returned reference into pointer
		QPointF* sigval2 = const_cast<QPointF*>(&center_ret);
		double sigval3 = radius;
		miqt_exec_callback_QwtDial_drawScaleContents(this, handle__drawScaleContents.value(), sigval1, sigval2, sigval3);

	}

	friend void QwtDial_virtualbase_drawScaleContents(const void* self, QPainter* painter, QPointF* center, double radius);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__drawNeedle;

	// Subclass to allow providing a Go implementation
	virtual void drawNeedle(QPainter* param1, const QPointF& param2, double radius, double direction, QPalette::ColorGroup param5) const override {
		if (!handle__drawNeedle) {
			QwtDial::drawNeedle(param1, param2, radius, direction, param5);
			return;
		}

		QPainter* sigval1 = param1;
		const QPointF& param2_ret = param2;
		// Cast returned reference into pointer
		QPointF* sigval2 = const_cast<QPointF*>(&param2_ret);
		double sigval3 = radius;
		double sigval4 = direction;
		QPalette::ColorGroup param5_ret = param5;
		int sigval5 = static_cast<int>(param5_ret);
		miqt_exec_callback_QwtDial_drawNeedle(this, handle__drawNeedle.value(), sigval1, sigval2, sigval3, sigval4, sigval5);

	}

	friend void QwtDial_virtualbase_drawNeedle(const void* self, QPainter* param1, QPointF* param2, double radius, double direction, int param5);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__scrolledTo;

	// Subclass to allow providing a Go implementation
	virtual double scrolledTo(const QPoint& param1) const override {
		if (!handle__scrolledTo) {
			return QwtDial::scrolledTo(param1);
		}

		const QPoint& param1_ret = param1;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&param1_ret);
		double callback_return_value = miqt_exec_callback_QwtDial_scrolledTo(this, handle__scrolledTo.value(), sigval1);
		return static_cast<double>(callback_return_value);
	}

	friend double QwtDial_virtualbase_scrolledTo(const void* self, QPoint* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__isScrollPosition;

	// Subclass to allow providing a Go implementation
	virtual bool isScrollPosition(const QPoint& param1) const override {
		if (!handle__isScrollPosition) {
			return QwtDial::isScrollPosition(param1);
		}

		const QPoint& param1_ret = param1;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&param1_ret);
		bool callback_return_value = miqt_exec_callback_QwtDial_isScrollPosition(this, handle__isScrollPosition.value(), sigval1);
		return callback_return_value;
	}

	friend bool QwtDial_virtualbase_isScrollPosition(const void* self, QPoint* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__sliderChange;

	// Subclass to allow providing a Go implementation
	virtual void sliderChange() override {
		if (!handle__sliderChange) {
			QwtDial::sliderChange();
			return;
		}

		miqt_exec_callback_QwtDial_sliderChange(this, handle__sliderChange.value());

	}

	friend void QwtDial_virtualbase_sliderChange(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__scaleChange;

	// Subclass to allow providing a Go implementation
	virtual void scaleChange() override {
		if (!handle__scaleChange) {
			QwtDial::scaleChange();
			return;
		}

		miqt_exec_callback_QwtDial_scaleChange(this, handle__scaleChange.value());

	}

	friend void QwtDial_virtualbase_scaleChange(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__mousePressEvent;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (!handle__mousePressEvent) {
			QwtDial::mousePressEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtDial_mousePressEvent(this, handle__mousePressEvent.value(), sigval1);

	}

	friend void QwtDial_virtualbase_mousePressEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__mouseReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (!handle__mouseReleaseEvent) {
			QwtDial::mouseReleaseEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtDial_mouseReleaseEvent(this, handle__mouseReleaseEvent.value(), sigval1);

	}

	friend void QwtDial_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__mouseMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (!handle__mouseMoveEvent) {
			QwtDial::mouseMoveEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtDial_mouseMoveEvent(this, handle__mouseMoveEvent.value(), sigval1);

	}

	friend void QwtDial_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__keyPressEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (!handle__keyPressEvent) {
			QwtDial::keyPressEvent(param1);
			return;
		}

		QKeyEvent* sigval1 = param1;
		miqt_exec_callback_QwtDial_keyPressEvent(this, handle__keyPressEvent.value(), sigval1);

	}

	friend void QwtDial_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__devType;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (!handle__devType) {
			return QwtDial::devType();
		}

		int callback_return_value = miqt_exec_callback_QwtDial_devType(this, handle__devType.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QwtDial_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__setVisible;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (!handle__setVisible) {
			QwtDial::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QwtDial_setVisible(this, handle__setVisible.value(), sigval1);

	}

	friend void QwtDial_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__heightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (!handle__heightForWidth) {
			return QwtDial::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QwtDial_heightForWidth(this, handle__heightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtDial_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__hasHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (!handle__hasHeightForWidth) {
			return QwtDial::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QwtDial_hasHeightForWidth(this, handle__hasHeightForWidth.value());
		return callback_return_value;
	}

	friend bool QwtDial_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__paintEngine;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (!handle__paintEngine) {
			return QwtDial::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QwtDial_paintEngine(this, handle__paintEngine.value());
		return callback_return_value;
	}

	friend QPaintEngine* QwtDial_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QwtDial::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QwtDial_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QwtDial_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__mouseDoubleClickEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (!handle__mouseDoubleClickEvent) {
			QwtDial::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtDial_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent.value(), sigval1);

	}

	friend void QwtDial_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__keyReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (!handle__keyReleaseEvent) {
			QwtDial::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QwtDial_keyReleaseEvent(this, handle__keyReleaseEvent.value(), sigval1);

	}

	friend void QwtDial_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__focusInEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (!handle__focusInEvent) {
			QwtDial::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QwtDial_focusInEvent(this, handle__focusInEvent.value(), sigval1);

	}

	friend void QwtDial_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__focusOutEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (!handle__focusOutEvent) {
			QwtDial::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QwtDial_focusOutEvent(this, handle__focusOutEvent.value(), sigval1);

	}

	friend void QwtDial_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__enterEvent;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (!handle__enterEvent) {
			QwtDial::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtDial_enterEvent(this, handle__enterEvent.value(), sigval1);

	}

	friend void QwtDial_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__leaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (!handle__leaveEvent) {
			QwtDial::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtDial_leaveEvent(this, handle__leaveEvent.value(), sigval1);

	}

	friend void QwtDial_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__moveEvent;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (!handle__moveEvent) {
			QwtDial::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtDial_moveEvent(this, handle__moveEvent.value(), sigval1);

	}

	friend void QwtDial_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__resizeEvent;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (!handle__resizeEvent) {
			QwtDial::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QwtDial_resizeEvent(this, handle__resizeEvent.value(), sigval1);

	}

	friend void QwtDial_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__closeEvent;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (!handle__closeEvent) {
			QwtDial::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QwtDial_closeEvent(this, handle__closeEvent.value(), sigval1);

	}

	friend void QwtDial_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__contextMenuEvent;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (!handle__contextMenuEvent) {
			QwtDial::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QwtDial_contextMenuEvent(this, handle__contextMenuEvent.value(), sigval1);

	}

	friend void QwtDial_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__tabletEvent;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (!handle__tabletEvent) {
			QwtDial::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QwtDial_tabletEvent(this, handle__tabletEvent.value(), sigval1);

	}

	friend void QwtDial_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__actionEvent;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (!handle__actionEvent) {
			QwtDial::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QwtDial_actionEvent(this, handle__actionEvent.value(), sigval1);

	}

	friend void QwtDial_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__dragEnterEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (!handle__dragEnterEvent) {
			QwtDial::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QwtDial_dragEnterEvent(this, handle__dragEnterEvent.value(), sigval1);

	}

	friend void QwtDial_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__dragMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (!handle__dragMoveEvent) {
			QwtDial::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtDial_dragMoveEvent(this, handle__dragMoveEvent.value(), sigval1);

	}

	friend void QwtDial_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__dragLeaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (!handle__dragLeaveEvent) {
			QwtDial::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QwtDial_dragLeaveEvent(this, handle__dragLeaveEvent.value(), sigval1);

	}

	friend void QwtDial_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__dropEvent;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (!handle__dropEvent) {
			QwtDial::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QwtDial_dropEvent(this, handle__dropEvent.value(), sigval1);

	}

	friend void QwtDial_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__showEvent;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (!handle__showEvent) {
			QwtDial::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QwtDial_showEvent(this, handle__showEvent.value(), sigval1);

	}

	friend void QwtDial_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__hideEvent;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (!handle__hideEvent) {
			QwtDial::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QwtDial_hideEvent(this, handle__hideEvent.value(), sigval1);

	}

	friend void QwtDial_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__nativeEvent;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (!handle__nativeEvent) {
			return QwtDial::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QwtDial_nativeEvent(this, handle__nativeEvent.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QwtDial_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__metric;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (!handle__metric) {
			return QwtDial::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QwtDial_metric(this, handle__metric.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtDial_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__initPainter;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (!handle__initPainter) {
			QwtDial::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QwtDial_initPainter(this, handle__initPainter.value(), sigval1);

	}

	friend void QwtDial_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__redirected;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (!handle__redirected) {
			return QwtDial::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QwtDial_redirected(this, handle__redirected.value(), sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QwtDial_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__sharedPainter;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (!handle__sharedPainter) {
			return QwtDial::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QwtDial_sharedPainter(this, handle__sharedPainter.value());
		return callback_return_value;
	}

	friend QPainter* QwtDial_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__inputMethodEvent;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (!handle__inputMethodEvent) {
			QwtDial::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QwtDial_inputMethodEvent(this, handle__inputMethodEvent.value(), sigval1);

	}

	friend void QwtDial_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__inputMethodQuery;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (!handle__inputMethodQuery) {
			return QwtDial::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QwtDial_inputMethodQuery(this, handle__inputMethodQuery.value(), sigval1);
		return *callback_return_value;
	}

	friend QVariant* QwtDial_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__focusNextPrevChild;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (!handle__focusNextPrevChild) {
			return QwtDial::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QwtDial_focusNextPrevChild(this, handle__focusNextPrevChild.value(), sigval1);
		return callback_return_value;
	}

	friend bool QwtDial_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QwtDial::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QwtDial_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QwtDial_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QwtDial::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QwtDial_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QwtDial_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QwtDial::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QwtDial_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QwtDial_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QwtDial::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtDial_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QwtDial_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QwtDial::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtDial_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QwtDial_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QwtDial::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtDial_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QwtDial_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QwtDial_protectedbase_invalidateCache(bool* _dynamic_cast_ok, void* self);
	friend void QwtDial_protectedbase_incrementValue(bool* _dynamic_cast_ok, void* self, int stepCount);
	friend double QwtDial_protectedbase_incrementedValue(bool* _dynamic_cast_ok, const void* self, double value, int stepCount);
	friend void QwtDial_protectedbase_rescale(bool* _dynamic_cast_ok, void* self, double lowerBound, double upperBound, double stepSize);
	friend void QwtDial_protectedbase_setAbstractScaleDraw(bool* _dynamic_cast_ok, void* self, QwtAbstractScaleDraw* abstractScaleDraw);
	friend QwtAbstractScaleDraw* QwtDial_protectedbase_abstractScaleDraw(bool* _dynamic_cast_ok, const void* self);
	friend void QwtDial_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QwtDial_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QwtDial_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QwtDial_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QwtDial_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QwtDial_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QwtDial_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QwtDial_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QwtDial_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QwtDial* QwtDial_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQwtDial(parent);
}

QwtDial* QwtDial_new2() {
	return new (std::nothrow) MiqtVirtualQwtDial();
}

void QwtDial_virtbase(QwtDial* src, QwtAbstractSlider** outptr_QwtAbstractSlider) {
	*outptr_QwtAbstractSlider = static_cast<QwtAbstractSlider*>(src);
}

QMetaObject* QwtDial_metaObject(const QwtDial* self) {
	return (QMetaObject*) self->metaObject();
}

void* QwtDial_metacast(QwtDial* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QwtDial_tr(const char* s) {
	QString _ret = QwtDial::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtDial_trUtf8(const char* s) {
	QString _ret = QwtDial::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QwtDial_setFrameShadow(QwtDial* self, int frameShadow) {
	self->setFrameShadow(static_cast<QwtDial::Shadow>(frameShadow));
}

int QwtDial_frameShadow(const QwtDial* self) {
	QwtDial::Shadow _ret = self->frameShadow();
	return static_cast<int>(_ret);
}

void QwtDial_setLineWidth(QwtDial* self, int lineWidth) {
	self->setLineWidth(static_cast<int>(lineWidth));
}

int QwtDial_lineWidth(const QwtDial* self) {
	return self->lineWidth();
}

void QwtDial_setMode(QwtDial* self, int mode) {
	self->setMode(static_cast<QwtDial::Mode>(mode));
}

int QwtDial_mode(const QwtDial* self) {
	QwtDial::Mode _ret = self->mode();
	return static_cast<int>(_ret);
}

void QwtDial_setScaleArc(QwtDial* self, double minArc, double maxArc) {
	self->setScaleArc(static_cast<double>(minArc), static_cast<double>(maxArc));
}

void QwtDial_setMinScaleArc(QwtDial* self, double minScaleArc) {
	self->setMinScaleArc(static_cast<double>(minScaleArc));
}

double QwtDial_minScaleArc(const QwtDial* self) {
	return self->minScaleArc();
}

void QwtDial_setMaxScaleArc(QwtDial* self, double maxScaleArc) {
	self->setMaxScaleArc(static_cast<double>(maxScaleArc));
}

double QwtDial_maxScaleArc(const QwtDial* self) {
	return self->maxScaleArc();
}

void QwtDial_setOrigin(QwtDial* self, double origin) {
	self->setOrigin(static_cast<double>(origin));
}

double QwtDial_origin(const QwtDial* self) {
	return self->origin();
}

void QwtDial_setNeedle(QwtDial* self, QwtDialNeedle* needle) {
	self->setNeedle(needle);
}

QwtDialNeedle* QwtDial_needle(const QwtDial* self) {
	return (QwtDialNeedle*) self->needle();
}

QwtDialNeedle* QwtDial_needle2(QwtDial* self) {
	return self->needle();
}

QRect* QwtDial_boundingRect(const QwtDial* self) {
	return new QRect(self->boundingRect());
}

QRect* QwtDial_innerRect(const QwtDial* self) {
	return new QRect(self->innerRect());
}

QRect* QwtDial_scaleInnerRect(const QwtDial* self) {
	return new QRect(self->scaleInnerRect());
}

QSize* QwtDial_sizeHint(const QwtDial* self) {
	return new QSize(self->sizeHint());
}

QSize* QwtDial_minimumSizeHint(const QwtDial* self) {
	return new QSize(self->minimumSizeHint());
}

void QwtDial_setScaleDraw(QwtDial* self, QwtRoundScaleDraw* scaleDraw) {
	self->setScaleDraw(scaleDraw);
}

QwtRoundScaleDraw* QwtDial_scaleDraw(QwtDial* self) {
	return self->scaleDraw();
}

QwtRoundScaleDraw* QwtDial_scaleDraw2(const QwtDial* self) {
	return (QwtRoundScaleDraw*) self->scaleDraw();
}

struct miqt_string QwtDial_tr2(const char* s, const char* c) {
	QString _ret = QwtDial::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtDial_tr3(const char* s, const char* c, int n) {
	QString _ret = QwtDial::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtDial_trUtf82(const char* s, const char* c) {
	QString _ret = QwtDial::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtDial_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QwtDial::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QwtDial_override_virtual_setOrigin(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setOrigin = std::move(slot_handle);
	return true;
}

void QwtDial_virtualbase_setOrigin(void* self, double origin) {
	static_cast<MiqtVirtualQwtDial*>(self)->QwtDial::setOrigin(static_cast<double>(origin));
}

bool QwtDial_override_virtual_scaleInnerRect(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scaleInnerRect = std::move(slot_handle);
	return true;
}

QRect* QwtDial_virtualbase_scaleInnerRect(const void* self) {
	return new QRect(static_cast<const MiqtVirtualQwtDial*>(self)->QwtDial::scaleInnerRect());
}

bool QwtDial_override_virtual_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	return true;
}

QSize* QwtDial_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtDial*>(self)->QwtDial::sizeHint());
}

bool QwtDial_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	return true;
}

QSize* QwtDial_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtDial*>(self)->QwtDial::minimumSizeHint());
}

bool QwtDial_override_virtual_wheelEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = std::move(slot_handle);
	return true;
}

void QwtDial_virtualbase_wheelEvent(void* self, QWheelEvent* param1) {
	static_cast<MiqtVirtualQwtDial*>(self)->QwtDial::wheelEvent(param1);
}

bool QwtDial_override_virtual_paintEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = std::move(slot_handle);
	return true;
}

void QwtDial_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	static_cast<MiqtVirtualQwtDial*>(self)->QwtDial::paintEvent(param1);
}

bool QwtDial_override_virtual_changeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = std::move(slot_handle);
	return true;
}

void QwtDial_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQwtDial*>(self)->QwtDial::changeEvent(param1);
}

bool QwtDial_override_virtual_drawFrame(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawFrame = std::move(slot_handle);
	return true;
}

void QwtDial_virtualbase_drawFrame(void* self, QPainter* param1) {
	static_cast<MiqtVirtualQwtDial*>(self)->QwtDial::drawFrame(param1);
}

bool QwtDial_override_virtual_drawContents(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawContents = std::move(slot_handle);
	return true;
}

void QwtDial_virtualbase_drawContents(const void* self, QPainter* param1) {
	static_cast<const MiqtVirtualQwtDial*>(self)->QwtDial::drawContents(param1);
}

bool QwtDial_override_virtual_drawFocusIndicator(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawFocusIndicator = std::move(slot_handle);
	return true;
}

void QwtDial_virtualbase_drawFocusIndicator(const void* self, QPainter* param1) {
	static_cast<const MiqtVirtualQwtDial*>(self)->QwtDial::drawFocusIndicator(param1);
}

bool QwtDial_override_virtual_drawScale(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawScale = std::move(slot_handle);
	return true;
}

void QwtDial_virtualbase_drawScale(const void* self, QPainter* param1, QPointF* center, double radius) {
	static_cast<const MiqtVirtualQwtDial*>(self)->QwtDial::drawScale(param1, *center, static_cast<double>(radius));
}

bool QwtDial_override_virtual_drawScaleContents(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawScaleContents = std::move(slot_handle);
	return true;
}

void QwtDial_virtualbase_drawScaleContents(const void* self, QPainter* painter, QPointF* center, double radius) {
	static_cast<const MiqtVirtualQwtDial*>(self)->QwtDial::drawScaleContents(painter, *center, static_cast<double>(radius));
}

bool QwtDial_override_virtual_drawNeedle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawNeedle = std::move(slot_handle);
	return true;
}

void QwtDial_virtualbase_drawNeedle(const void* self, QPainter* param1, QPointF* param2, double radius, double direction, int param5) {
	static_cast<const MiqtVirtualQwtDial*>(self)->QwtDial::drawNeedle(param1, *param2, static_cast<double>(radius), static_cast<double>(direction), static_cast<QPalette::ColorGroup>(param5));
}

bool QwtDial_override_virtual_scrolledTo(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scrolledTo = std::move(slot_handle);
	return true;
}

double QwtDial_virtualbase_scrolledTo(const void* self, QPoint* param1) {
	return static_cast<const MiqtVirtualQwtDial*>(self)->QwtDial::scrolledTo(*param1);
}

bool QwtDial_override_virtual_isScrollPosition(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isScrollPosition = std::move(slot_handle);
	return true;
}

bool QwtDial_virtualbase_isScrollPosition(const void* self, QPoint* param1) {
	return static_cast<const MiqtVirtualQwtDial*>(self)->QwtDial::isScrollPosition(*param1);
}

bool QwtDial_override_virtual_sliderChange(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sliderChange = std::move(slot_handle);
	return true;
}

void QwtDial_virtualbase_sliderChange(void* self) {
	static_cast<MiqtVirtualQwtDial*>(self)->QwtDial::sliderChange();
}

bool QwtDial_override_virtual_scaleChange(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scaleChange = std::move(slot_handle);
	return true;
}

void QwtDial_virtualbase_scaleChange(void* self) {
	static_cast<MiqtVirtualQwtDial*>(self)->QwtDial::scaleChange();
}

bool QwtDial_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = std::move(slot_handle);
	return true;
}

void QwtDial_virtualbase_mousePressEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtDial*>(self)->QwtDial::mousePressEvent(param1);
}

bool QwtDial_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = std::move(slot_handle);
	return true;
}

void QwtDial_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtDial*>(self)->QwtDial::mouseReleaseEvent(param1);
}

bool QwtDial_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = std::move(slot_handle);
	return true;
}

void QwtDial_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtDial*>(self)->QwtDial::mouseMoveEvent(param1);
}

bool QwtDial_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = std::move(slot_handle);
	return true;
}

void QwtDial_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {
	static_cast<MiqtVirtualQwtDial*>(self)->QwtDial::keyPressEvent(param1);
}

bool QwtDial_override_virtual_devType(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = std::move(slot_handle);
	return true;
}

int QwtDial_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQwtDial*>(self)->QwtDial::devType();
}

bool QwtDial_override_virtual_setVisible(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = std::move(slot_handle);
	return true;
}

void QwtDial_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQwtDial*>(self)->QwtDial::setVisible(visible);
}

bool QwtDial_override_virtual_heightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = std::move(slot_handle);
	return true;
}

int QwtDial_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtDial*>(self)->QwtDial::heightForWidth(static_cast<int>(param1));
}

bool QwtDial_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = std::move(slot_handle);
	return true;
}

bool QwtDial_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQwtDial*>(self)->QwtDial::hasHeightForWidth();
}

bool QwtDial_override_virtual_paintEngine(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = std::move(slot_handle);
	return true;
}

QPaintEngine* QwtDial_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQwtDial*>(self)->QwtDial::paintEngine();
}

bool QwtDial_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QwtDial_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQwtDial*>(self)->QwtDial::event(event);
}

bool QwtDial_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = std::move(slot_handle);
	return true;
}

void QwtDial_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtDial*>(self)->QwtDial::mouseDoubleClickEvent(event);
}

bool QwtDial_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = std::move(slot_handle);
	return true;
}

void QwtDial_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQwtDial*>(self)->QwtDial::keyReleaseEvent(event);
}

bool QwtDial_override_virtual_focusInEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = std::move(slot_handle);
	return true;
}

void QwtDial_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQwtDial*>(self)->QwtDial::focusInEvent(event);
}

bool QwtDial_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = std::move(slot_handle);
	return true;
}

void QwtDial_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQwtDial*>(self)->QwtDial::focusOutEvent(event);
}

bool QwtDial_override_virtual_enterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = std::move(slot_handle);
	return true;
}

void QwtDial_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtDial*>(self)->QwtDial::enterEvent(event);
}

bool QwtDial_override_virtual_leaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = std::move(slot_handle);
	return true;
}

void QwtDial_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtDial*>(self)->QwtDial::leaveEvent(event);
}

bool QwtDial_override_virtual_moveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = std::move(slot_handle);
	return true;
}

void QwtDial_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQwtDial*>(self)->QwtDial::moveEvent(event);
}

bool QwtDial_override_virtual_resizeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = std::move(slot_handle);
	return true;
}

void QwtDial_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQwtDial*>(self)->QwtDial::resizeEvent(event);
}

bool QwtDial_override_virtual_closeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = std::move(slot_handle);
	return true;
}

void QwtDial_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQwtDial*>(self)->QwtDial::closeEvent(event);
}

bool QwtDial_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = std::move(slot_handle);
	return true;
}

void QwtDial_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQwtDial*>(self)->QwtDial::contextMenuEvent(event);
}

bool QwtDial_override_virtual_tabletEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = std::move(slot_handle);
	return true;
}

void QwtDial_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQwtDial*>(self)->QwtDial::tabletEvent(event);
}

bool QwtDial_override_virtual_actionEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = std::move(slot_handle);
	return true;
}

void QwtDial_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQwtDial*>(self)->QwtDial::actionEvent(event);
}

bool QwtDial_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = std::move(slot_handle);
	return true;
}

void QwtDial_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQwtDial*>(self)->QwtDial::dragEnterEvent(event);
}

bool QwtDial_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = std::move(slot_handle);
	return true;
}

void QwtDial_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQwtDial*>(self)->QwtDial::dragMoveEvent(event);
}

bool QwtDial_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = std::move(slot_handle);
	return true;
}

void QwtDial_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQwtDial*>(self)->QwtDial::dragLeaveEvent(event);
}

bool QwtDial_override_virtual_dropEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = std::move(slot_handle);
	return true;
}

void QwtDial_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQwtDial*>(self)->QwtDial::dropEvent(event);
}

bool QwtDial_override_virtual_showEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = std::move(slot_handle);
	return true;
}

void QwtDial_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQwtDial*>(self)->QwtDial::showEvent(event);
}

bool QwtDial_override_virtual_hideEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = std::move(slot_handle);
	return true;
}

void QwtDial_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQwtDial*>(self)->QwtDial::hideEvent(event);
}

bool QwtDial_override_virtual_nativeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = std::move(slot_handle);
	return true;
}

bool QwtDial_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQwtDial*>(self)->QwtDial::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QwtDial_override_virtual_metric(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = std::move(slot_handle);
	return true;
}

int QwtDial_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtDial*>(self)->QwtDial::metric(static_cast<MiqtVirtualQwtDial::PaintDeviceMetric>(param1));
}

bool QwtDial_override_virtual_initPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = std::move(slot_handle);
	return true;
}

void QwtDial_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQwtDial*>(self)->QwtDial::initPainter(painter);
}

bool QwtDial_override_virtual_redirected(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = std::move(slot_handle);
	return true;
}

QPaintDevice* QwtDial_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQwtDial*>(self)->QwtDial::redirected(offset);
}

bool QwtDial_override_virtual_sharedPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = std::move(slot_handle);
	return true;
}

QPainter* QwtDial_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQwtDial*>(self)->QwtDial::sharedPainter();
}

bool QwtDial_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = std::move(slot_handle);
	return true;
}

void QwtDial_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQwtDial*>(self)->QwtDial::inputMethodEvent(param1);
}

bool QwtDial_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	return true;
}

QVariant* QwtDial_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQwtDial*>(self)->QwtDial::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QwtDial_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = std::move(slot_handle);
	return true;
}

bool QwtDial_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQwtDial*>(self)->QwtDial::focusNextPrevChild(next);
}

bool QwtDial_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QwtDial_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQwtDial*>(self)->QwtDial::eventFilter(watched, event);
}

bool QwtDial_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QwtDial_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQwtDial*>(self)->QwtDial::timerEvent(event);
}

bool QwtDial_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QwtDial_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQwtDial*>(self)->QwtDial::childEvent(event);
}

bool QwtDial_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QwtDial_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtDial*>(self)->QwtDial::customEvent(event);
}

bool QwtDial_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QwtDial_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtDial*>(self)->QwtDial::connectNotify(*signal);
}

bool QwtDial_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDial> slot_handle(slot);
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QwtDial_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtDial*>(self)->QwtDial::disconnectNotify(*signal);
}

void QwtDial_protectedbase_invalidateCache(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->invalidateCache();
}

void QwtDial_protectedbase_incrementValue(bool* _dynamic_cast_ok, void* self, int stepCount) {
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->incrementValue(static_cast<int>(stepCount));
}

double QwtDial_protectedbase_incrementedValue(bool* _dynamic_cast_ok, const void* self, double value, int stepCount) {
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->incrementedValue(static_cast<double>(value), static_cast<int>(stepCount));
}

void QwtDial_protectedbase_rescale(bool* _dynamic_cast_ok, void* self, double lowerBound, double upperBound, double stepSize) {
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->rescale(static_cast<double>(lowerBound), static_cast<double>(upperBound), static_cast<double>(stepSize));
}

void QwtDial_protectedbase_setAbstractScaleDraw(bool* _dynamic_cast_ok, void* self, QwtAbstractScaleDraw* abstractScaleDraw) {
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setAbstractScaleDraw(abstractScaleDraw);
}

QwtAbstractScaleDraw* QwtDial_protectedbase_abstractScaleDraw(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return (QwtAbstractScaleDraw*) self_cast->abstractScaleDraw();
}

void QwtDial_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QwtDial_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QwtDial_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QwtDial_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QwtDial_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QwtDial_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QwtDial_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QwtDial_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QwtDial_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQwtDial* self_cast = dynamic_cast<MiqtVirtualQwtDial*>( (QwtDial*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QwtDial_delete(QwtDial* self) {
	delete self;
}

