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
#include <QTime>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qwt_analog_clock.h>
#include "gen_qwt_analog_clock.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QwtAnalogClock(intptr_t);
void miqt_exec_callback_QwtAnalogClock_drawNeedle(const QwtAnalogClock*, intptr_t, QPainter*, QPointF*, double, double, int);
void miqt_exec_callback_QwtAnalogClock_drawHand(const QwtAnalogClock*, intptr_t, QPainter*, int, QPointF*, double, double, int);
void miqt_exec_callback_QwtAnalogClock_setOrigin(QwtAnalogClock*, intptr_t, double);
QRect* miqt_exec_callback_QwtAnalogClock_scaleInnerRect(const QwtAnalogClock*, intptr_t);
QSize* miqt_exec_callback_QwtAnalogClock_sizeHint(const QwtAnalogClock*, intptr_t);
QSize* miqt_exec_callback_QwtAnalogClock_minimumSizeHint(const QwtAnalogClock*, intptr_t);
void miqt_exec_callback_QwtAnalogClock_wheelEvent(QwtAnalogClock*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QwtAnalogClock_paintEvent(QwtAnalogClock*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QwtAnalogClock_changeEvent(QwtAnalogClock*, intptr_t, QEvent*);
void miqt_exec_callback_QwtAnalogClock_drawFrame(QwtAnalogClock*, intptr_t, QPainter*);
void miqt_exec_callback_QwtAnalogClock_drawContents(const QwtAnalogClock*, intptr_t, QPainter*);
void miqt_exec_callback_QwtAnalogClock_drawFocusIndicator(const QwtAnalogClock*, intptr_t, QPainter*);
void miqt_exec_callback_QwtAnalogClock_drawScale(const QwtAnalogClock*, intptr_t, QPainter*, QPointF*, double);
void miqt_exec_callback_QwtAnalogClock_drawScaleContents(const QwtAnalogClock*, intptr_t, QPainter*, QPointF*, double);
double miqt_exec_callback_QwtAnalogClock_scrolledTo(const QwtAnalogClock*, intptr_t, QPoint*);
bool miqt_exec_callback_QwtAnalogClock_isScrollPosition(const QwtAnalogClock*, intptr_t, QPoint*);
void miqt_exec_callback_QwtAnalogClock_sliderChange(QwtAnalogClock*, intptr_t);
void miqt_exec_callback_QwtAnalogClock_scaleChange(QwtAnalogClock*, intptr_t);
void miqt_exec_callback_QwtAnalogClock_mousePressEvent(QwtAnalogClock*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtAnalogClock_mouseReleaseEvent(QwtAnalogClock*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtAnalogClock_mouseMoveEvent(QwtAnalogClock*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtAnalogClock_keyPressEvent(QwtAnalogClock*, intptr_t, QKeyEvent*);
int miqt_exec_callback_QwtAnalogClock_devType(const QwtAnalogClock*, intptr_t);
void miqt_exec_callback_QwtAnalogClock_setVisible(QwtAnalogClock*, intptr_t, bool);
int miqt_exec_callback_QwtAnalogClock_heightForWidth(const QwtAnalogClock*, intptr_t, int);
bool miqt_exec_callback_QwtAnalogClock_hasHeightForWidth(const QwtAnalogClock*, intptr_t);
QPaintEngine* miqt_exec_callback_QwtAnalogClock_paintEngine(const QwtAnalogClock*, intptr_t);
bool miqt_exec_callback_QwtAnalogClock_event(QwtAnalogClock*, intptr_t, QEvent*);
void miqt_exec_callback_QwtAnalogClock_mouseDoubleClickEvent(QwtAnalogClock*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtAnalogClock_keyReleaseEvent(QwtAnalogClock*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtAnalogClock_focusInEvent(QwtAnalogClock*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QwtAnalogClock_focusOutEvent(QwtAnalogClock*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QwtAnalogClock_enterEvent(QwtAnalogClock*, intptr_t, QEvent*);
void miqt_exec_callback_QwtAnalogClock_leaveEvent(QwtAnalogClock*, intptr_t, QEvent*);
void miqt_exec_callback_QwtAnalogClock_moveEvent(QwtAnalogClock*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QwtAnalogClock_resizeEvent(QwtAnalogClock*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QwtAnalogClock_closeEvent(QwtAnalogClock*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QwtAnalogClock_contextMenuEvent(QwtAnalogClock*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QwtAnalogClock_tabletEvent(QwtAnalogClock*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QwtAnalogClock_actionEvent(QwtAnalogClock*, intptr_t, QActionEvent*);
void miqt_exec_callback_QwtAnalogClock_dragEnterEvent(QwtAnalogClock*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QwtAnalogClock_dragMoveEvent(QwtAnalogClock*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QwtAnalogClock_dragLeaveEvent(QwtAnalogClock*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QwtAnalogClock_dropEvent(QwtAnalogClock*, intptr_t, QDropEvent*);
void miqt_exec_callback_QwtAnalogClock_showEvent(QwtAnalogClock*, intptr_t, QShowEvent*);
void miqt_exec_callback_QwtAnalogClock_hideEvent(QwtAnalogClock*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QwtAnalogClock_nativeEvent(QwtAnalogClock*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QwtAnalogClock_metric(const QwtAnalogClock*, intptr_t, int);
void miqt_exec_callback_QwtAnalogClock_initPainter(const QwtAnalogClock*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QwtAnalogClock_redirected(const QwtAnalogClock*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QwtAnalogClock_sharedPainter(const QwtAnalogClock*, intptr_t);
void miqt_exec_callback_QwtAnalogClock_inputMethodEvent(QwtAnalogClock*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QwtAnalogClock_inputMethodQuery(const QwtAnalogClock*, intptr_t, int);
bool miqt_exec_callback_QwtAnalogClock_focusNextPrevChild(QwtAnalogClock*, intptr_t, bool);
bool miqt_exec_callback_QwtAnalogClock_eventFilter(QwtAnalogClock*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QwtAnalogClock_timerEvent(QwtAnalogClock*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QwtAnalogClock_childEvent(QwtAnalogClock*, intptr_t, QChildEvent*);
void miqt_exec_callback_QwtAnalogClock_customEvent(QwtAnalogClock*, intptr_t, QEvent*);
void miqt_exec_callback_QwtAnalogClock_connectNotify(QwtAnalogClock*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QwtAnalogClock_disconnectNotify(QwtAnalogClock*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtAnalogClock final : public QwtAnalogClock {
public:

	MiqtVirtualQwtAnalogClock(QWidget* parent): QwtAnalogClock(parent) {}
	MiqtVirtualQwtAnalogClock(): QwtAnalogClock() {}

	virtual ~MiqtVirtualQwtAnalogClock() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__drawNeedle;

	// Subclass to allow providing a Go implementation
	virtual void drawNeedle(QPainter* param1, const QPointF& param2, double radius, double direction, QPalette::ColorGroup param5) const override {
		if (!handle__drawNeedle) {
			QwtAnalogClock::drawNeedle(param1, param2, radius, direction, param5);
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
		miqt_exec_callback_QwtAnalogClock_drawNeedle(this, handle__drawNeedle.value(), sigval1, sigval2, sigval3, sigval4, sigval5);

	}

	friend void QwtAnalogClock_virtualbase_drawNeedle(const void* self, QPainter* param1, QPointF* param2, double radius, double direction, int param5);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__drawHand;

	// Subclass to allow providing a Go implementation
	virtual void drawHand(QPainter* param1, QwtAnalogClock::Hand param2, const QPointF& param3, double radius, double direction, QPalette::ColorGroup param6) const override {
		if (!handle__drawHand) {
			QwtAnalogClock::drawHand(param1, param2, param3, radius, direction, param6);
			return;
		}

		QPainter* sigval1 = param1;
		QwtAnalogClock::Hand param2_ret = param2;
		int sigval2 = static_cast<int>(param2_ret);
		const QPointF& param3_ret = param3;
		// Cast returned reference into pointer
		QPointF* sigval3 = const_cast<QPointF*>(&param3_ret);
		double sigval4 = radius;
		double sigval5 = direction;
		QPalette::ColorGroup param6_ret = param6;
		int sigval6 = static_cast<int>(param6_ret);
		miqt_exec_callback_QwtAnalogClock_drawHand(this, handle__drawHand.value(), sigval1, sigval2, sigval3, sigval4, sigval5, sigval6);

	}

	friend void QwtAnalogClock_virtualbase_drawHand(const void* self, QPainter* param1, int param2, QPointF* param3, double radius, double direction, int param6);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__setOrigin;

	// Subclass to allow providing a Go implementation
	virtual void setOrigin(double origin) override {
		if (!handle__setOrigin) {
			QwtAnalogClock::setOrigin(origin);
			return;
		}

		double sigval1 = origin;
		miqt_exec_callback_QwtAnalogClock_setOrigin(this, handle__setOrigin.value(), sigval1);

	}

	friend void QwtAnalogClock_virtualbase_setOrigin(void* self, double origin);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__scaleInnerRect;

	// Subclass to allow providing a Go implementation
	virtual QRect scaleInnerRect() const override {
		if (!handle__scaleInnerRect) {
			return QwtAnalogClock::scaleInnerRect();
		}

		QRect* callback_return_value = miqt_exec_callback_QwtAnalogClock_scaleInnerRect(this, handle__scaleInnerRect.value());
		return *callback_return_value;
	}

	friend QRect* QwtAnalogClock_virtualbase_scaleInnerRect(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__sizeHint;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (!handle__sizeHint) {
			return QwtAnalogClock::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtAnalogClock_sizeHint(this, handle__sizeHint.value());
		return *callback_return_value;
	}

	friend QSize* QwtAnalogClock_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__minimumSizeHint;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (!handle__minimumSizeHint) {
			return QwtAnalogClock::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtAnalogClock_minimumSizeHint(this, handle__minimumSizeHint.value());
		return *callback_return_value;
	}

	friend QSize* QwtAnalogClock_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__wheelEvent;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (!handle__wheelEvent) {
			QwtAnalogClock::wheelEvent(param1);
			return;
		}

		QWheelEvent* sigval1 = param1;
		miqt_exec_callback_QwtAnalogClock_wheelEvent(this, handle__wheelEvent.value(), sigval1);

	}

	friend void QwtAnalogClock_virtualbase_wheelEvent(void* self, QWheelEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__paintEvent;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (!handle__paintEvent) {
			QwtAnalogClock::paintEvent(param1);
			return;
		}

		QPaintEvent* sigval1 = param1;
		miqt_exec_callback_QwtAnalogClock_paintEvent(this, handle__paintEvent.value(), sigval1);

	}

	friend void QwtAnalogClock_virtualbase_paintEvent(void* self, QPaintEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__changeEvent;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (!handle__changeEvent) {
			QwtAnalogClock::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QwtAnalogClock_changeEvent(this, handle__changeEvent.value(), sigval1);

	}

	friend void QwtAnalogClock_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__drawFrame;

	// Subclass to allow providing a Go implementation
	virtual void drawFrame(QPainter* param1) override {
		if (!handle__drawFrame) {
			QwtAnalogClock::drawFrame(param1);
			return;
		}

		QPainter* sigval1 = param1;
		miqt_exec_callback_QwtAnalogClock_drawFrame(this, handle__drawFrame.value(), sigval1);

	}

	friend void QwtAnalogClock_virtualbase_drawFrame(void* self, QPainter* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__drawContents;

	// Subclass to allow providing a Go implementation
	virtual void drawContents(QPainter* param1) const override {
		if (!handle__drawContents) {
			QwtAnalogClock::drawContents(param1);
			return;
		}

		QPainter* sigval1 = param1;
		miqt_exec_callback_QwtAnalogClock_drawContents(this, handle__drawContents.value(), sigval1);

	}

	friend void QwtAnalogClock_virtualbase_drawContents(const void* self, QPainter* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__drawFocusIndicator;

	// Subclass to allow providing a Go implementation
	virtual void drawFocusIndicator(QPainter* param1) const override {
		if (!handle__drawFocusIndicator) {
			QwtAnalogClock::drawFocusIndicator(param1);
			return;
		}

		QPainter* sigval1 = param1;
		miqt_exec_callback_QwtAnalogClock_drawFocusIndicator(this, handle__drawFocusIndicator.value(), sigval1);

	}

	friend void QwtAnalogClock_virtualbase_drawFocusIndicator(const void* self, QPainter* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__drawScale;

	// Subclass to allow providing a Go implementation
	virtual void drawScale(QPainter* param1, const QPointF& center, double radius) const override {
		if (!handle__drawScale) {
			QwtAnalogClock::drawScale(param1, center, radius);
			return;
		}

		QPainter* sigval1 = param1;
		const QPointF& center_ret = center;
		// Cast returned reference into pointer
		QPointF* sigval2 = const_cast<QPointF*>(&center_ret);
		double sigval3 = radius;
		miqt_exec_callback_QwtAnalogClock_drawScale(this, handle__drawScale.value(), sigval1, sigval2, sigval3);

	}

	friend void QwtAnalogClock_virtualbase_drawScale(const void* self, QPainter* param1, QPointF* center, double radius);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__drawScaleContents;

	// Subclass to allow providing a Go implementation
	virtual void drawScaleContents(QPainter* painter, const QPointF& center, double radius) const override {
		if (!handle__drawScaleContents) {
			QwtAnalogClock::drawScaleContents(painter, center, radius);
			return;
		}

		QPainter* sigval1 = painter;
		const QPointF& center_ret = center;
		// Cast returned reference into pointer
		QPointF* sigval2 = const_cast<QPointF*>(&center_ret);
		double sigval3 = radius;
		miqt_exec_callback_QwtAnalogClock_drawScaleContents(this, handle__drawScaleContents.value(), sigval1, sigval2, sigval3);

	}

	friend void QwtAnalogClock_virtualbase_drawScaleContents(const void* self, QPainter* painter, QPointF* center, double radius);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__scrolledTo;

	// Subclass to allow providing a Go implementation
	virtual double scrolledTo(const QPoint& param1) const override {
		if (!handle__scrolledTo) {
			return QwtAnalogClock::scrolledTo(param1);
		}

		const QPoint& param1_ret = param1;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&param1_ret);
		double callback_return_value = miqt_exec_callback_QwtAnalogClock_scrolledTo(this, handle__scrolledTo.value(), sigval1);
		return static_cast<double>(callback_return_value);
	}

	friend double QwtAnalogClock_virtualbase_scrolledTo(const void* self, QPoint* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__isScrollPosition;

	// Subclass to allow providing a Go implementation
	virtual bool isScrollPosition(const QPoint& param1) const override {
		if (!handle__isScrollPosition) {
			return QwtAnalogClock::isScrollPosition(param1);
		}

		const QPoint& param1_ret = param1;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&param1_ret);
		bool callback_return_value = miqt_exec_callback_QwtAnalogClock_isScrollPosition(this, handle__isScrollPosition.value(), sigval1);
		return callback_return_value;
	}

	friend bool QwtAnalogClock_virtualbase_isScrollPosition(const void* self, QPoint* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__sliderChange;

	// Subclass to allow providing a Go implementation
	virtual void sliderChange() override {
		if (!handle__sliderChange) {
			QwtAnalogClock::sliderChange();
			return;
		}

		miqt_exec_callback_QwtAnalogClock_sliderChange(this, handle__sliderChange.value());

	}

	friend void QwtAnalogClock_virtualbase_sliderChange(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__scaleChange;

	// Subclass to allow providing a Go implementation
	virtual void scaleChange() override {
		if (!handle__scaleChange) {
			QwtAnalogClock::scaleChange();
			return;
		}

		miqt_exec_callback_QwtAnalogClock_scaleChange(this, handle__scaleChange.value());

	}

	friend void QwtAnalogClock_virtualbase_scaleChange(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__mousePressEvent;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (!handle__mousePressEvent) {
			QwtAnalogClock::mousePressEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtAnalogClock_mousePressEvent(this, handle__mousePressEvent.value(), sigval1);

	}

	friend void QwtAnalogClock_virtualbase_mousePressEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__mouseReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (!handle__mouseReleaseEvent) {
			QwtAnalogClock::mouseReleaseEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtAnalogClock_mouseReleaseEvent(this, handle__mouseReleaseEvent.value(), sigval1);

	}

	friend void QwtAnalogClock_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__mouseMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (!handle__mouseMoveEvent) {
			QwtAnalogClock::mouseMoveEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtAnalogClock_mouseMoveEvent(this, handle__mouseMoveEvent.value(), sigval1);

	}

	friend void QwtAnalogClock_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__keyPressEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (!handle__keyPressEvent) {
			QwtAnalogClock::keyPressEvent(param1);
			return;
		}

		QKeyEvent* sigval1 = param1;
		miqt_exec_callback_QwtAnalogClock_keyPressEvent(this, handle__keyPressEvent.value(), sigval1);

	}

	friend void QwtAnalogClock_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__devType;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (!handle__devType) {
			return QwtAnalogClock::devType();
		}

		int callback_return_value = miqt_exec_callback_QwtAnalogClock_devType(this, handle__devType.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QwtAnalogClock_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__setVisible;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (!handle__setVisible) {
			QwtAnalogClock::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QwtAnalogClock_setVisible(this, handle__setVisible.value(), sigval1);

	}

	friend void QwtAnalogClock_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__heightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (!handle__heightForWidth) {
			return QwtAnalogClock::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QwtAnalogClock_heightForWidth(this, handle__heightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtAnalogClock_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__hasHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (!handle__hasHeightForWidth) {
			return QwtAnalogClock::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QwtAnalogClock_hasHeightForWidth(this, handle__hasHeightForWidth.value());
		return callback_return_value;
	}

	friend bool QwtAnalogClock_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__paintEngine;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (!handle__paintEngine) {
			return QwtAnalogClock::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QwtAnalogClock_paintEngine(this, handle__paintEngine.value());
		return callback_return_value;
	}

	friend QPaintEngine* QwtAnalogClock_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QwtAnalogClock::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QwtAnalogClock_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QwtAnalogClock_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__mouseDoubleClickEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (!handle__mouseDoubleClickEvent) {
			QwtAnalogClock::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtAnalogClock_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent.value(), sigval1);

	}

	friend void QwtAnalogClock_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__keyReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (!handle__keyReleaseEvent) {
			QwtAnalogClock::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QwtAnalogClock_keyReleaseEvent(this, handle__keyReleaseEvent.value(), sigval1);

	}

	friend void QwtAnalogClock_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__focusInEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (!handle__focusInEvent) {
			QwtAnalogClock::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QwtAnalogClock_focusInEvent(this, handle__focusInEvent.value(), sigval1);

	}

	friend void QwtAnalogClock_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__focusOutEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (!handle__focusOutEvent) {
			QwtAnalogClock::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QwtAnalogClock_focusOutEvent(this, handle__focusOutEvent.value(), sigval1);

	}

	friend void QwtAnalogClock_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__enterEvent;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (!handle__enterEvent) {
			QwtAnalogClock::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtAnalogClock_enterEvent(this, handle__enterEvent.value(), sigval1);

	}

	friend void QwtAnalogClock_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__leaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (!handle__leaveEvent) {
			QwtAnalogClock::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtAnalogClock_leaveEvent(this, handle__leaveEvent.value(), sigval1);

	}

	friend void QwtAnalogClock_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__moveEvent;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (!handle__moveEvent) {
			QwtAnalogClock::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtAnalogClock_moveEvent(this, handle__moveEvent.value(), sigval1);

	}

	friend void QwtAnalogClock_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__resizeEvent;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (!handle__resizeEvent) {
			QwtAnalogClock::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QwtAnalogClock_resizeEvent(this, handle__resizeEvent.value(), sigval1);

	}

	friend void QwtAnalogClock_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__closeEvent;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (!handle__closeEvent) {
			QwtAnalogClock::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QwtAnalogClock_closeEvent(this, handle__closeEvent.value(), sigval1);

	}

	friend void QwtAnalogClock_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__contextMenuEvent;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (!handle__contextMenuEvent) {
			QwtAnalogClock::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QwtAnalogClock_contextMenuEvent(this, handle__contextMenuEvent.value(), sigval1);

	}

	friend void QwtAnalogClock_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__tabletEvent;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (!handle__tabletEvent) {
			QwtAnalogClock::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QwtAnalogClock_tabletEvent(this, handle__tabletEvent.value(), sigval1);

	}

	friend void QwtAnalogClock_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__actionEvent;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (!handle__actionEvent) {
			QwtAnalogClock::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QwtAnalogClock_actionEvent(this, handle__actionEvent.value(), sigval1);

	}

	friend void QwtAnalogClock_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__dragEnterEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (!handle__dragEnterEvent) {
			QwtAnalogClock::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QwtAnalogClock_dragEnterEvent(this, handle__dragEnterEvent.value(), sigval1);

	}

	friend void QwtAnalogClock_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__dragMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (!handle__dragMoveEvent) {
			QwtAnalogClock::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtAnalogClock_dragMoveEvent(this, handle__dragMoveEvent.value(), sigval1);

	}

	friend void QwtAnalogClock_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__dragLeaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (!handle__dragLeaveEvent) {
			QwtAnalogClock::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QwtAnalogClock_dragLeaveEvent(this, handle__dragLeaveEvent.value(), sigval1);

	}

	friend void QwtAnalogClock_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__dropEvent;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (!handle__dropEvent) {
			QwtAnalogClock::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QwtAnalogClock_dropEvent(this, handle__dropEvent.value(), sigval1);

	}

	friend void QwtAnalogClock_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__showEvent;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (!handle__showEvent) {
			QwtAnalogClock::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QwtAnalogClock_showEvent(this, handle__showEvent.value(), sigval1);

	}

	friend void QwtAnalogClock_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__hideEvent;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (!handle__hideEvent) {
			QwtAnalogClock::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QwtAnalogClock_hideEvent(this, handle__hideEvent.value(), sigval1);

	}

	friend void QwtAnalogClock_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__nativeEvent;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (!handle__nativeEvent) {
			return QwtAnalogClock::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QwtAnalogClock_nativeEvent(this, handle__nativeEvent.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QwtAnalogClock_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__metric;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (!handle__metric) {
			return QwtAnalogClock::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QwtAnalogClock_metric(this, handle__metric.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtAnalogClock_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__initPainter;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (!handle__initPainter) {
			QwtAnalogClock::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QwtAnalogClock_initPainter(this, handle__initPainter.value(), sigval1);

	}

	friend void QwtAnalogClock_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__redirected;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (!handle__redirected) {
			return QwtAnalogClock::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QwtAnalogClock_redirected(this, handle__redirected.value(), sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QwtAnalogClock_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__sharedPainter;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (!handle__sharedPainter) {
			return QwtAnalogClock::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QwtAnalogClock_sharedPainter(this, handle__sharedPainter.value());
		return callback_return_value;
	}

	friend QPainter* QwtAnalogClock_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__inputMethodEvent;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (!handle__inputMethodEvent) {
			QwtAnalogClock::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QwtAnalogClock_inputMethodEvent(this, handle__inputMethodEvent.value(), sigval1);

	}

	friend void QwtAnalogClock_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__inputMethodQuery;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (!handle__inputMethodQuery) {
			return QwtAnalogClock::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QwtAnalogClock_inputMethodQuery(this, handle__inputMethodQuery.value(), sigval1);
		return *callback_return_value;
	}

	friend QVariant* QwtAnalogClock_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__focusNextPrevChild;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (!handle__focusNextPrevChild) {
			return QwtAnalogClock::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QwtAnalogClock_focusNextPrevChild(this, handle__focusNextPrevChild.value(), sigval1);
		return callback_return_value;
	}

	friend bool QwtAnalogClock_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QwtAnalogClock::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QwtAnalogClock_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QwtAnalogClock_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QwtAnalogClock::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QwtAnalogClock_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QwtAnalogClock_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QwtAnalogClock::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QwtAnalogClock_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QwtAnalogClock_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QwtAnalogClock::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtAnalogClock_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QwtAnalogClock_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QwtAnalogClock::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtAnalogClock_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QwtAnalogClock_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QwtAnalogClock::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtAnalogClock_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QwtAnalogClock_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QwtAnalogClock_protectedbase_invalidateCache(bool* _dynamic_cast_ok, void* self);
	friend void QwtAnalogClock_protectedbase_incrementValue(bool* _dynamic_cast_ok, void* self, int stepCount);
	friend double QwtAnalogClock_protectedbase_incrementedValue(bool* _dynamic_cast_ok, const void* self, double value, int stepCount);
	friend void QwtAnalogClock_protectedbase_rescale(bool* _dynamic_cast_ok, void* self, double lowerBound, double upperBound, double stepSize);
	friend void QwtAnalogClock_protectedbase_setAbstractScaleDraw(bool* _dynamic_cast_ok, void* self, QwtAbstractScaleDraw* abstractScaleDraw);
	friend QwtAbstractScaleDraw* QwtAnalogClock_protectedbase_abstractScaleDraw(bool* _dynamic_cast_ok, const void* self);
	friend void QwtAnalogClock_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QwtAnalogClock_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QwtAnalogClock_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QwtAnalogClock_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QwtAnalogClock_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QwtAnalogClock_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QwtAnalogClock_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QwtAnalogClock_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QwtAnalogClock_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QwtAnalogClock* QwtAnalogClock_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQwtAnalogClock(parent);
}

QwtAnalogClock* QwtAnalogClock_new2() {
	return new (std::nothrow) MiqtVirtualQwtAnalogClock();
}

void QwtAnalogClock_virtbase(QwtAnalogClock* src, QwtDial** outptr_QwtDial) {
	*outptr_QwtDial = static_cast<QwtDial*>(src);
}

QMetaObject* QwtAnalogClock_metaObject(const QwtAnalogClock* self) {
	return (QMetaObject*) self->metaObject();
}

void* QwtAnalogClock_metacast(QwtAnalogClock* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QwtAnalogClock_tr(const char* s) {
	QString _ret = QwtAnalogClock::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtAnalogClock_trUtf8(const char* s) {
	QString _ret = QwtAnalogClock::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QwtAnalogClock_setHand(QwtAnalogClock* self, int param1, QwtDialNeedle* param2) {
	self->setHand(static_cast<QwtAnalogClock::Hand>(param1), param2);
}

QwtDialNeedle* QwtAnalogClock_hand(const QwtAnalogClock* self, int param1) {
	return (QwtDialNeedle*) self->hand(static_cast<QwtAnalogClock::Hand>(param1));
}

QwtDialNeedle* QwtAnalogClock_handWithQwtAnalogClockHand(QwtAnalogClock* self, int param1) {
	return self->hand(static_cast<QwtAnalogClock::Hand>(param1));
}

void QwtAnalogClock_setCurrentTime(QwtAnalogClock* self) {
	self->setCurrentTime();
}

void QwtAnalogClock_setTime(QwtAnalogClock* self, QTime* time) {
	self->setTime(*time);
}

struct miqt_string QwtAnalogClock_tr2(const char* s, const char* c) {
	QString _ret = QwtAnalogClock::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtAnalogClock_tr3(const char* s, const char* c, int n) {
	QString _ret = QwtAnalogClock::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtAnalogClock_trUtf82(const char* s, const char* c) {
	QString _ret = QwtAnalogClock::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtAnalogClock_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QwtAnalogClock::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QwtAnalogClock_override_virtual_drawNeedle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawNeedle = std::move(slot_handle);
	return true;
}

void QwtAnalogClock_virtualbase_drawNeedle(const void* self, QPainter* param1, QPointF* param2, double radius, double direction, int param5) {
	static_cast<const MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::drawNeedle(param1, *param2, static_cast<double>(radius), static_cast<double>(direction), static_cast<QPalette::ColorGroup>(param5));
}

bool QwtAnalogClock_override_virtual_drawHand(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawHand = std::move(slot_handle);
	return true;
}

void QwtAnalogClock_virtualbase_drawHand(const void* self, QPainter* param1, int param2, QPointF* param3, double radius, double direction, int param6) {
	static_cast<const MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::drawHand(param1, static_cast<MiqtVirtualQwtAnalogClock::Hand>(param2), *param3, static_cast<double>(radius), static_cast<double>(direction), static_cast<QPalette::ColorGroup>(param6));
}

bool QwtAnalogClock_override_virtual_setOrigin(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setOrigin = std::move(slot_handle);
	return true;
}

void QwtAnalogClock_virtualbase_setOrigin(void* self, double origin) {
	static_cast<MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::setOrigin(static_cast<double>(origin));
}

bool QwtAnalogClock_override_virtual_scaleInnerRect(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scaleInnerRect = std::move(slot_handle);
	return true;
}

QRect* QwtAnalogClock_virtualbase_scaleInnerRect(const void* self) {
	return new QRect(static_cast<const MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::scaleInnerRect());
}

bool QwtAnalogClock_override_virtual_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	return true;
}

QSize* QwtAnalogClock_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::sizeHint());
}

bool QwtAnalogClock_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	return true;
}

QSize* QwtAnalogClock_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::minimumSizeHint());
}

bool QwtAnalogClock_override_virtual_wheelEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = std::move(slot_handle);
	return true;
}

void QwtAnalogClock_virtualbase_wheelEvent(void* self, QWheelEvent* param1) {
	static_cast<MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::wheelEvent(param1);
}

bool QwtAnalogClock_override_virtual_paintEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = std::move(slot_handle);
	return true;
}

void QwtAnalogClock_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	static_cast<MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::paintEvent(param1);
}

bool QwtAnalogClock_override_virtual_changeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = std::move(slot_handle);
	return true;
}

void QwtAnalogClock_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::changeEvent(param1);
}

bool QwtAnalogClock_override_virtual_drawFrame(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawFrame = std::move(slot_handle);
	return true;
}

void QwtAnalogClock_virtualbase_drawFrame(void* self, QPainter* param1) {
	static_cast<MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::drawFrame(param1);
}

bool QwtAnalogClock_override_virtual_drawContents(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawContents = std::move(slot_handle);
	return true;
}

void QwtAnalogClock_virtualbase_drawContents(const void* self, QPainter* param1) {
	static_cast<const MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::drawContents(param1);
}

bool QwtAnalogClock_override_virtual_drawFocusIndicator(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawFocusIndicator = std::move(slot_handle);
	return true;
}

void QwtAnalogClock_virtualbase_drawFocusIndicator(const void* self, QPainter* param1) {
	static_cast<const MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::drawFocusIndicator(param1);
}

bool QwtAnalogClock_override_virtual_drawScale(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawScale = std::move(slot_handle);
	return true;
}

void QwtAnalogClock_virtualbase_drawScale(const void* self, QPainter* param1, QPointF* center, double radius) {
	static_cast<const MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::drawScale(param1, *center, static_cast<double>(radius));
}

bool QwtAnalogClock_override_virtual_drawScaleContents(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawScaleContents = std::move(slot_handle);
	return true;
}

void QwtAnalogClock_virtualbase_drawScaleContents(const void* self, QPainter* painter, QPointF* center, double radius) {
	static_cast<const MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::drawScaleContents(painter, *center, static_cast<double>(radius));
}

bool QwtAnalogClock_override_virtual_scrolledTo(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scrolledTo = std::move(slot_handle);
	return true;
}

double QwtAnalogClock_virtualbase_scrolledTo(const void* self, QPoint* param1) {
	return static_cast<const MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::scrolledTo(*param1);
}

bool QwtAnalogClock_override_virtual_isScrollPosition(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isScrollPosition = std::move(slot_handle);
	return true;
}

bool QwtAnalogClock_virtualbase_isScrollPosition(const void* self, QPoint* param1) {
	return static_cast<const MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::isScrollPosition(*param1);
}

bool QwtAnalogClock_override_virtual_sliderChange(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sliderChange = std::move(slot_handle);
	return true;
}

void QwtAnalogClock_virtualbase_sliderChange(void* self) {
	static_cast<MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::sliderChange();
}

bool QwtAnalogClock_override_virtual_scaleChange(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scaleChange = std::move(slot_handle);
	return true;
}

void QwtAnalogClock_virtualbase_scaleChange(void* self) {
	static_cast<MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::scaleChange();
}

bool QwtAnalogClock_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = std::move(slot_handle);
	return true;
}

void QwtAnalogClock_virtualbase_mousePressEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::mousePressEvent(param1);
}

bool QwtAnalogClock_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = std::move(slot_handle);
	return true;
}

void QwtAnalogClock_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::mouseReleaseEvent(param1);
}

bool QwtAnalogClock_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = std::move(slot_handle);
	return true;
}

void QwtAnalogClock_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::mouseMoveEvent(param1);
}

bool QwtAnalogClock_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = std::move(slot_handle);
	return true;
}

void QwtAnalogClock_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {
	static_cast<MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::keyPressEvent(param1);
}

bool QwtAnalogClock_override_virtual_devType(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = std::move(slot_handle);
	return true;
}

int QwtAnalogClock_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::devType();
}

bool QwtAnalogClock_override_virtual_setVisible(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = std::move(slot_handle);
	return true;
}

void QwtAnalogClock_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::setVisible(visible);
}

bool QwtAnalogClock_override_virtual_heightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = std::move(slot_handle);
	return true;
}

int QwtAnalogClock_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::heightForWidth(static_cast<int>(param1));
}

bool QwtAnalogClock_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = std::move(slot_handle);
	return true;
}

bool QwtAnalogClock_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::hasHeightForWidth();
}

bool QwtAnalogClock_override_virtual_paintEngine(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = std::move(slot_handle);
	return true;
}

QPaintEngine* QwtAnalogClock_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::paintEngine();
}

bool QwtAnalogClock_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QwtAnalogClock_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::event(event);
}

bool QwtAnalogClock_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = std::move(slot_handle);
	return true;
}

void QwtAnalogClock_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::mouseDoubleClickEvent(event);
}

bool QwtAnalogClock_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = std::move(slot_handle);
	return true;
}

void QwtAnalogClock_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::keyReleaseEvent(event);
}

bool QwtAnalogClock_override_virtual_focusInEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = std::move(slot_handle);
	return true;
}

void QwtAnalogClock_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::focusInEvent(event);
}

bool QwtAnalogClock_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = std::move(slot_handle);
	return true;
}

void QwtAnalogClock_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::focusOutEvent(event);
}

bool QwtAnalogClock_override_virtual_enterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = std::move(slot_handle);
	return true;
}

void QwtAnalogClock_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::enterEvent(event);
}

bool QwtAnalogClock_override_virtual_leaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = std::move(slot_handle);
	return true;
}

void QwtAnalogClock_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::leaveEvent(event);
}

bool QwtAnalogClock_override_virtual_moveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = std::move(slot_handle);
	return true;
}

void QwtAnalogClock_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::moveEvent(event);
}

bool QwtAnalogClock_override_virtual_resizeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = std::move(slot_handle);
	return true;
}

void QwtAnalogClock_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::resizeEvent(event);
}

bool QwtAnalogClock_override_virtual_closeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = std::move(slot_handle);
	return true;
}

void QwtAnalogClock_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::closeEvent(event);
}

bool QwtAnalogClock_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = std::move(slot_handle);
	return true;
}

void QwtAnalogClock_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::contextMenuEvent(event);
}

bool QwtAnalogClock_override_virtual_tabletEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = std::move(slot_handle);
	return true;
}

void QwtAnalogClock_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::tabletEvent(event);
}

bool QwtAnalogClock_override_virtual_actionEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = std::move(slot_handle);
	return true;
}

void QwtAnalogClock_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::actionEvent(event);
}

bool QwtAnalogClock_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = std::move(slot_handle);
	return true;
}

void QwtAnalogClock_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::dragEnterEvent(event);
}

bool QwtAnalogClock_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = std::move(slot_handle);
	return true;
}

void QwtAnalogClock_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::dragMoveEvent(event);
}

bool QwtAnalogClock_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = std::move(slot_handle);
	return true;
}

void QwtAnalogClock_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::dragLeaveEvent(event);
}

bool QwtAnalogClock_override_virtual_dropEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = std::move(slot_handle);
	return true;
}

void QwtAnalogClock_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::dropEvent(event);
}

bool QwtAnalogClock_override_virtual_showEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = std::move(slot_handle);
	return true;
}

void QwtAnalogClock_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::showEvent(event);
}

bool QwtAnalogClock_override_virtual_hideEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = std::move(slot_handle);
	return true;
}

void QwtAnalogClock_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::hideEvent(event);
}

bool QwtAnalogClock_override_virtual_nativeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = std::move(slot_handle);
	return true;
}

bool QwtAnalogClock_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QwtAnalogClock_override_virtual_metric(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = std::move(slot_handle);
	return true;
}

int QwtAnalogClock_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::metric(static_cast<MiqtVirtualQwtAnalogClock::PaintDeviceMetric>(param1));
}

bool QwtAnalogClock_override_virtual_initPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = std::move(slot_handle);
	return true;
}

void QwtAnalogClock_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::initPainter(painter);
}

bool QwtAnalogClock_override_virtual_redirected(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = std::move(slot_handle);
	return true;
}

QPaintDevice* QwtAnalogClock_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::redirected(offset);
}

bool QwtAnalogClock_override_virtual_sharedPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = std::move(slot_handle);
	return true;
}

QPainter* QwtAnalogClock_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::sharedPainter();
}

bool QwtAnalogClock_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = std::move(slot_handle);
	return true;
}

void QwtAnalogClock_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::inputMethodEvent(param1);
}

bool QwtAnalogClock_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	return true;
}

QVariant* QwtAnalogClock_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QwtAnalogClock_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = std::move(slot_handle);
	return true;
}

bool QwtAnalogClock_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::focusNextPrevChild(next);
}

bool QwtAnalogClock_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QwtAnalogClock_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::eventFilter(watched, event);
}

bool QwtAnalogClock_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QwtAnalogClock_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::timerEvent(event);
}

bool QwtAnalogClock_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QwtAnalogClock_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::childEvent(event);
}

bool QwtAnalogClock_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QwtAnalogClock_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::customEvent(event);
}

bool QwtAnalogClock_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QwtAnalogClock_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::connectNotify(*signal);
}

bool QwtAnalogClock_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAnalogClock> slot_handle(slot);
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QwtAnalogClock_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtAnalogClock*>(self)->QwtAnalogClock::disconnectNotify(*signal);
}

void QwtAnalogClock_protectedbase_invalidateCache(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->invalidateCache();
}

void QwtAnalogClock_protectedbase_incrementValue(bool* _dynamic_cast_ok, void* self, int stepCount) {
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->incrementValue(static_cast<int>(stepCount));
}

double QwtAnalogClock_protectedbase_incrementedValue(bool* _dynamic_cast_ok, const void* self, double value, int stepCount) {
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->incrementedValue(static_cast<double>(value), static_cast<int>(stepCount));
}

void QwtAnalogClock_protectedbase_rescale(bool* _dynamic_cast_ok, void* self, double lowerBound, double upperBound, double stepSize) {
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->rescale(static_cast<double>(lowerBound), static_cast<double>(upperBound), static_cast<double>(stepSize));
}

void QwtAnalogClock_protectedbase_setAbstractScaleDraw(bool* _dynamic_cast_ok, void* self, QwtAbstractScaleDraw* abstractScaleDraw) {
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setAbstractScaleDraw(abstractScaleDraw);
}

QwtAbstractScaleDraw* QwtAnalogClock_protectedbase_abstractScaleDraw(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return (QwtAbstractScaleDraw*) self_cast->abstractScaleDraw();
}

void QwtAnalogClock_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QwtAnalogClock_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QwtAnalogClock_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QwtAnalogClock_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QwtAnalogClock_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QwtAnalogClock_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QwtAnalogClock_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QwtAnalogClock_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QwtAnalogClock_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQwtAnalogClock* self_cast = dynamic_cast<MiqtVirtualQwtAnalogClock*>( (QwtAnalogClock*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QwtAnalogClock_delete(QwtAnalogClock* self) {
	delete self;
}

