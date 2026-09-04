#include <memory>
#include <utility>
#include <QChildEvent>
#include <QEvent>
#include <QFont>
#include <QKeyEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QObject>
#include <QPainter>
#include <QPainterPath>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QRegion>
#include <QSize>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWheelEvent>
#include <QWidget>
#define WORKAROUND_INNER_CLASS_DEFINITION_QwtEventPattern__KeyPattern
#define WORKAROUND_INNER_CLASS_DEFINITION_QwtEventPattern__MousePattern
#include <qwt_plot_zoomer.h>
#include "gen_qwt_plot_zoomer.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QwtPlotZoomer(intptr_t);
void miqt_exec_callback_QwtPlotZoomer_zoomed(intptr_t, QRectF*);
void miqt_exec_callback_QwtPlotZoomer_setZoomBase(QwtPlotZoomer*, intptr_t, bool);
void miqt_exec_callback_QwtPlotZoomer_setZoomBaseWithZoomBase(QwtPlotZoomer*, intptr_t, QRectF*);
void miqt_exec_callback_QwtPlotZoomer_setAxis(QwtPlotZoomer*, intptr_t, int, int);
void miqt_exec_callback_QwtPlotZoomer_moveTo(QwtPlotZoomer*, intptr_t, QPointF*);
void miqt_exec_callback_QwtPlotZoomer_zoom(QwtPlotZoomer*, intptr_t, QRectF*);
void miqt_exec_callback_QwtPlotZoomer_zoomWithOffset(QwtPlotZoomer*, intptr_t, int);
void miqt_exec_callback_QwtPlotZoomer_rescale(QwtPlotZoomer*, intptr_t);
QSizeF* miqt_exec_callback_QwtPlotZoomer_minZoomSize(const QwtPlotZoomer*, intptr_t);
void miqt_exec_callback_QwtPlotZoomer_widgetMouseReleaseEvent(QwtPlotZoomer*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtPlotZoomer_widgetKeyPressEvent(QwtPlotZoomer*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtPlotZoomer_begin(QwtPlotZoomer*, intptr_t);
bool miqt_exec_callback_QwtPlotZoomer_end(QwtPlotZoomer*, intptr_t, bool);
QwtText* miqt_exec_callback_QwtPlotZoomer_trackerText(const QwtPlotZoomer*, intptr_t, QPoint*);
QwtText* miqt_exec_callback_QwtPlotZoomer_trackerTextF(const QwtPlotZoomer*, intptr_t, QPointF*);
void miqt_exec_callback_QwtPlotZoomer_move(QwtPlotZoomer*, intptr_t, QPoint*);
void miqt_exec_callback_QwtPlotZoomer_append(QwtPlotZoomer*, intptr_t, QPoint*);
bool miqt_exec_callback_QwtPlotZoomer_eventFilter(QwtPlotZoomer*, intptr_t, QObject*, QEvent*);
QPainterPath* miqt_exec_callback_QwtPlotZoomer_pickArea(const QwtPlotZoomer*, intptr_t);
void miqt_exec_callback_QwtPlotZoomer_drawRubberBand(const QwtPlotZoomer*, intptr_t, QPainter*);
void miqt_exec_callback_QwtPlotZoomer_drawTracker(const QwtPlotZoomer*, intptr_t, QPainter*);
QRegion* miqt_exec_callback_QwtPlotZoomer_rubberBandMask(const QwtPlotZoomer*, intptr_t);
QRect* miqt_exec_callback_QwtPlotZoomer_trackerRect(const QwtPlotZoomer*, intptr_t, QFont*);
void miqt_exec_callback_QwtPlotZoomer_transition(QwtPlotZoomer*, intptr_t, QEvent*);
void miqt_exec_callback_QwtPlotZoomer_remove(QwtPlotZoomer*, intptr_t);
void miqt_exec_callback_QwtPlotZoomer_reset(QwtPlotZoomer*, intptr_t);
void miqt_exec_callback_QwtPlotZoomer_widgetMousePressEvent(QwtPlotZoomer*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtPlotZoomer_widgetMouseDoubleClickEvent(QwtPlotZoomer*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtPlotZoomer_widgetMouseMoveEvent(QwtPlotZoomer*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtPlotZoomer_widgetWheelEvent(QwtPlotZoomer*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QwtPlotZoomer_widgetKeyReleaseEvent(QwtPlotZoomer*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtPlotZoomer_widgetEnterEvent(QwtPlotZoomer*, intptr_t, QEvent*);
void miqt_exec_callback_QwtPlotZoomer_widgetLeaveEvent(QwtPlotZoomer*, intptr_t, QEvent*);
void miqt_exec_callback_QwtPlotZoomer_stretchSelection(QwtPlotZoomer*, intptr_t, QSize*, QSize*);
void miqt_exec_callback_QwtPlotZoomer_updateDisplay(QwtPlotZoomer*, intptr_t);
bool miqt_exec_callback_QwtPlotZoomer_event(QwtPlotZoomer*, intptr_t, QEvent*);
void miqt_exec_callback_QwtPlotZoomer_timerEvent(QwtPlotZoomer*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QwtPlotZoomer_childEvent(QwtPlotZoomer*, intptr_t, QChildEvent*);
void miqt_exec_callback_QwtPlotZoomer_customEvent(QwtPlotZoomer*, intptr_t, QEvent*);
void miqt_exec_callback_QwtPlotZoomer_connectNotify(QwtPlotZoomer*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QwtPlotZoomer_disconnectNotify(QwtPlotZoomer*, intptr_t, QMetaMethod*);
bool miqt_exec_callback_QwtPlotZoomer_mouseMatch2(const QwtPlotZoomer*, intptr_t, QwtEventPattern__MousePattern*, QMouseEvent*);
bool miqt_exec_callback_QwtPlotZoomer_keyMatch2(const QwtPlotZoomer*, intptr_t, QwtEventPattern__KeyPattern*, QKeyEvent*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtPlotZoomer final : public QwtPlotZoomer {
public:

	MiqtVirtualQwtPlotZoomer(QWidget* param1): QwtPlotZoomer(param1) {}
	MiqtVirtualQwtPlotZoomer(int xAxis, int yAxis, QWidget* param3): QwtPlotZoomer(xAxis, yAxis, param3) {}
	MiqtVirtualQwtPlotZoomer(QWidget* param1, bool doReplot): QwtPlotZoomer(param1, doReplot) {}
	MiqtVirtualQwtPlotZoomer(int xAxis, int yAxis, QWidget* param3, bool doReplot): QwtPlotZoomer(xAxis, yAxis, param3, doReplot) {}

	virtual ~MiqtVirtualQwtPlotZoomer() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> handle__setZoomBase;

	// Subclass to allow providing a Go implementation
	virtual void setZoomBase(bool doReplot) override {
		if (!handle__setZoomBase) {
			QwtPlotZoomer::setZoomBase(doReplot);
			return;
		}

		bool sigval1 = doReplot;
		miqt_exec_callback_QwtPlotZoomer_setZoomBase(this, handle__setZoomBase.value(), sigval1);

	}

	friend void QwtPlotZoomer_virtualbase_setZoomBase(void* self, bool doReplot);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> handle__setZoomBaseWithZoomBase;

	// Subclass to allow providing a Go implementation
	virtual void setZoomBase(const QRectF& zoomBase) override {
		if (!handle__setZoomBaseWithZoomBase) {
			QwtPlotZoomer::setZoomBase(zoomBase);
			return;
		}

		const QRectF& zoomBase_ret = zoomBase;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&zoomBase_ret);
		miqt_exec_callback_QwtPlotZoomer_setZoomBaseWithZoomBase(this, handle__setZoomBaseWithZoomBase.value(), sigval1);

	}

	friend void QwtPlotZoomer_virtualbase_setZoomBaseWithZoomBase(void* self, QRectF* zoomBase);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> handle__setAxis;

	// Subclass to allow providing a Go implementation
	virtual void setAxis(int xAxis, int yAxis) override {
		if (!handle__setAxis) {
			QwtPlotZoomer::setAxis(xAxis, yAxis);
			return;
		}

		int sigval1 = xAxis;
		int sigval2 = yAxis;
		miqt_exec_callback_QwtPlotZoomer_setAxis(this, handle__setAxis.value(), sigval1, sigval2);

	}

	friend void QwtPlotZoomer_virtualbase_setAxis(void* self, int xAxis, int yAxis);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> handle__moveTo;

	// Subclass to allow providing a Go implementation
	virtual void moveTo(const QPointF& param1) override {
		if (!handle__moveTo) {
			QwtPlotZoomer::moveTo(param1);
			return;
		}

		const QPointF& param1_ret = param1;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&param1_ret);
		miqt_exec_callback_QwtPlotZoomer_moveTo(this, handle__moveTo.value(), sigval1);

	}

	friend void QwtPlotZoomer_virtualbase_moveTo(void* self, QPointF* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> handle__zoom;

	// Subclass to allow providing a Go implementation
	virtual void zoom(const QRectF& param1) override {
		if (!handle__zoom) {
			QwtPlotZoomer::zoom(param1);
			return;
		}

		const QRectF& param1_ret = param1;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&param1_ret);
		miqt_exec_callback_QwtPlotZoomer_zoom(this, handle__zoom.value(), sigval1);

	}

	friend void QwtPlotZoomer_virtualbase_zoom(void* self, QRectF* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> handle__zoomWithOffset;

	// Subclass to allow providing a Go implementation
	virtual void zoom(int offset) override {
		if (!handle__zoomWithOffset) {
			QwtPlotZoomer::zoom(offset);
			return;
		}

		int sigval1 = offset;
		miqt_exec_callback_QwtPlotZoomer_zoomWithOffset(this, handle__zoomWithOffset.value(), sigval1);

	}

	friend void QwtPlotZoomer_virtualbase_zoomWithOffset(void* self, int offset);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> handle__rescale;

	// Subclass to allow providing a Go implementation
	virtual void rescale() override {
		if (!handle__rescale) {
			QwtPlotZoomer::rescale();
			return;
		}

		miqt_exec_callback_QwtPlotZoomer_rescale(this, handle__rescale.value());

	}

	friend void QwtPlotZoomer_virtualbase_rescale(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> handle__minZoomSize;
	bool owns_return__minZoomSize = false;

	// Subclass to allow providing a Go implementation
	virtual QSizeF minZoomSize() const override {
		if (!handle__minZoomSize) {
			return QwtPlotZoomer::minZoomSize();
		}

		QSizeF* callback_return_value = miqt_exec_callback_QwtPlotZoomer_minZoomSize(this, handle__minZoomSize.value());
		std::unique_ptr<QSizeF> callback_return_value_owner;
		if (owns_return__minZoomSize) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSizeF* QwtPlotZoomer_virtualbase_minZoomSize(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> handle__widgetMouseReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void widgetMouseReleaseEvent(QMouseEvent* param1) override {
		if (!handle__widgetMouseReleaseEvent) {
			QwtPlotZoomer::widgetMouseReleaseEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlotZoomer_widgetMouseReleaseEvent(this, handle__widgetMouseReleaseEvent.value(), sigval1);

	}

	friend void QwtPlotZoomer_virtualbase_widgetMouseReleaseEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> handle__widgetKeyPressEvent;

	// Subclass to allow providing a Go implementation
	virtual void widgetKeyPressEvent(QKeyEvent* param1) override {
		if (!handle__widgetKeyPressEvent) {
			QwtPlotZoomer::widgetKeyPressEvent(param1);
			return;
		}

		QKeyEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlotZoomer_widgetKeyPressEvent(this, handle__widgetKeyPressEvent.value(), sigval1);

	}

	friend void QwtPlotZoomer_virtualbase_widgetKeyPressEvent(void* self, QKeyEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> handle__begin;

	// Subclass to allow providing a Go implementation
	virtual void begin() override {
		if (!handle__begin) {
			QwtPlotZoomer::begin();
			return;
		}

		miqt_exec_callback_QwtPlotZoomer_begin(this, handle__begin.value());

	}

	friend void QwtPlotZoomer_virtualbase_begin(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> handle__end;

	// Subclass to allow providing a Go implementation
	virtual bool end(bool ok) override {
		if (!handle__end) {
			return QwtPlotZoomer::end(ok);
		}

		bool sigval1 = ok;
		bool callback_return_value = miqt_exec_callback_QwtPlotZoomer_end(this, handle__end.value(), sigval1);
		return callback_return_value;
	}

	friend bool QwtPlotZoomer_virtualbase_end(void* self, bool ok);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> handle__trackerText;
	bool owns_return__trackerText = false;

	// Subclass to allow providing a Go implementation
	virtual QwtText trackerText(const QPoint& param1) const override {
		if (!handle__trackerText) {
			return QwtPlotZoomer::trackerText(param1);
		}

		const QPoint& param1_ret = param1;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&param1_ret);
		QwtText* callback_return_value = miqt_exec_callback_QwtPlotZoomer_trackerText(this, handle__trackerText.value(), sigval1);
		std::unique_ptr<QwtText> callback_return_value_owner;
		if (owns_return__trackerText) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QwtText* QwtPlotZoomer_virtualbase_trackerText(const void* self, QPoint* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> handle__trackerTextF;
	bool owns_return__trackerTextF = false;

	// Subclass to allow providing a Go implementation
	virtual QwtText trackerTextF(const QPointF& param1) const override {
		if (!handle__trackerTextF) {
			return QwtPlotZoomer::trackerTextF(param1);
		}

		const QPointF& param1_ret = param1;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&param1_ret);
		QwtText* callback_return_value = miqt_exec_callback_QwtPlotZoomer_trackerTextF(this, handle__trackerTextF.value(), sigval1);
		std::unique_ptr<QwtText> callback_return_value_owner;
		if (owns_return__trackerTextF) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QwtText* QwtPlotZoomer_virtualbase_trackerTextF(const void* self, QPointF* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> handle__move;

	// Subclass to allow providing a Go implementation
	virtual void move(const QPoint& param1) override {
		if (!handle__move) {
			QwtPlotZoomer::move(param1);
			return;
		}

		const QPoint& param1_ret = param1;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&param1_ret);
		miqt_exec_callback_QwtPlotZoomer_move(this, handle__move.value(), sigval1);

	}

	friend void QwtPlotZoomer_virtualbase_move(void* self, QPoint* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> handle__append;

	// Subclass to allow providing a Go implementation
	virtual void append(const QPoint& param1) override {
		if (!handle__append) {
			QwtPlotZoomer::append(param1);
			return;
		}

		const QPoint& param1_ret = param1;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&param1_ret);
		miqt_exec_callback_QwtPlotZoomer_append(this, handle__append.value(), sigval1);

	}

	friend void QwtPlotZoomer_virtualbase_append(void* self, QPoint* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (!handle__eventFilter) {
			return QwtPlotZoomer::eventFilter(param1, param2);
		}

		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;
		bool callback_return_value = miqt_exec_callback_QwtPlotZoomer_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QwtPlotZoomer_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> handle__pickArea;
	bool owns_return__pickArea = false;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath pickArea() const override {
		if (!handle__pickArea) {
			return QwtPlotZoomer::pickArea();
		}

		QPainterPath* callback_return_value = miqt_exec_callback_QwtPlotZoomer_pickArea(this, handle__pickArea.value());
		std::unique_ptr<QPainterPath> callback_return_value_owner;
		if (owns_return__pickArea) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QPainterPath* QwtPlotZoomer_virtualbase_pickArea(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> handle__drawRubberBand;

	// Subclass to allow providing a Go implementation
	virtual void drawRubberBand(QPainter* param1) const override {
		if (!handle__drawRubberBand) {
			QwtPlotZoomer::drawRubberBand(param1);
			return;
		}

		QPainter* sigval1 = param1;
		miqt_exec_callback_QwtPlotZoomer_drawRubberBand(this, handle__drawRubberBand.value(), sigval1);

	}

	friend void QwtPlotZoomer_virtualbase_drawRubberBand(const void* self, QPainter* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> handle__drawTracker;

	// Subclass to allow providing a Go implementation
	virtual void drawTracker(QPainter* param1) const override {
		if (!handle__drawTracker) {
			QwtPlotZoomer::drawTracker(param1);
			return;
		}

		QPainter* sigval1 = param1;
		miqt_exec_callback_QwtPlotZoomer_drawTracker(this, handle__drawTracker.value(), sigval1);

	}

	friend void QwtPlotZoomer_virtualbase_drawTracker(const void* self, QPainter* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> handle__rubberBandMask;
	bool owns_return__rubberBandMask = false;

	// Subclass to allow providing a Go implementation
	virtual QRegion rubberBandMask() const override {
		if (!handle__rubberBandMask) {
			return QwtPlotZoomer::rubberBandMask();
		}

		QRegion* callback_return_value = miqt_exec_callback_QwtPlotZoomer_rubberBandMask(this, handle__rubberBandMask.value());
		std::unique_ptr<QRegion> callback_return_value_owner;
		if (owns_return__rubberBandMask) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QRegion* QwtPlotZoomer_virtualbase_rubberBandMask(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> handle__trackerRect;
	bool owns_return__trackerRect = false;

	// Subclass to allow providing a Go implementation
	virtual QRect trackerRect(const QFont& param1) const override {
		if (!handle__trackerRect) {
			return QwtPlotZoomer::trackerRect(param1);
		}

		const QFont& param1_ret = param1;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&param1_ret);
		QRect* callback_return_value = miqt_exec_callback_QwtPlotZoomer_trackerRect(this, handle__trackerRect.value(), sigval1);
		std::unique_ptr<QRect> callback_return_value_owner;
		if (owns_return__trackerRect) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QRect* QwtPlotZoomer_virtualbase_trackerRect(const void* self, QFont* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> handle__transition;

	// Subclass to allow providing a Go implementation
	virtual void transition(const QEvent* param1) override {
		if (!handle__transition) {
			QwtPlotZoomer::transition(param1);
			return;
		}

		QEvent* sigval1 = (QEvent*) param1;
		miqt_exec_callback_QwtPlotZoomer_transition(this, handle__transition.value(), sigval1);

	}

	friend void QwtPlotZoomer_virtualbase_transition(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> handle__remove;

	// Subclass to allow providing a Go implementation
	virtual void remove() override {
		if (!handle__remove) {
			QwtPlotZoomer::remove();
			return;
		}

		miqt_exec_callback_QwtPlotZoomer_remove(this, handle__remove.value());

	}

	friend void QwtPlotZoomer_virtualbase_remove(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> handle__reset;

	// Subclass to allow providing a Go implementation
	virtual void reset() override {
		if (!handle__reset) {
			QwtPlotZoomer::reset();
			return;
		}

		miqt_exec_callback_QwtPlotZoomer_reset(this, handle__reset.value());

	}

	friend void QwtPlotZoomer_virtualbase_reset(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> handle__widgetMousePressEvent;

	// Subclass to allow providing a Go implementation
	virtual void widgetMousePressEvent(QMouseEvent* param1) override {
		if (!handle__widgetMousePressEvent) {
			QwtPlotZoomer::widgetMousePressEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlotZoomer_widgetMousePressEvent(this, handle__widgetMousePressEvent.value(), sigval1);

	}

	friend void QwtPlotZoomer_virtualbase_widgetMousePressEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> handle__widgetMouseDoubleClickEvent;

	// Subclass to allow providing a Go implementation
	virtual void widgetMouseDoubleClickEvent(QMouseEvent* param1) override {
		if (!handle__widgetMouseDoubleClickEvent) {
			QwtPlotZoomer::widgetMouseDoubleClickEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlotZoomer_widgetMouseDoubleClickEvent(this, handle__widgetMouseDoubleClickEvent.value(), sigval1);

	}

	friend void QwtPlotZoomer_virtualbase_widgetMouseDoubleClickEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> handle__widgetMouseMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void widgetMouseMoveEvent(QMouseEvent* param1) override {
		if (!handle__widgetMouseMoveEvent) {
			QwtPlotZoomer::widgetMouseMoveEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlotZoomer_widgetMouseMoveEvent(this, handle__widgetMouseMoveEvent.value(), sigval1);

	}

	friend void QwtPlotZoomer_virtualbase_widgetMouseMoveEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> handle__widgetWheelEvent;

	// Subclass to allow providing a Go implementation
	virtual void widgetWheelEvent(QWheelEvent* param1) override {
		if (!handle__widgetWheelEvent) {
			QwtPlotZoomer::widgetWheelEvent(param1);
			return;
		}

		QWheelEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlotZoomer_widgetWheelEvent(this, handle__widgetWheelEvent.value(), sigval1);

	}

	friend void QwtPlotZoomer_virtualbase_widgetWheelEvent(void* self, QWheelEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> handle__widgetKeyReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void widgetKeyReleaseEvent(QKeyEvent* param1) override {
		if (!handle__widgetKeyReleaseEvent) {
			QwtPlotZoomer::widgetKeyReleaseEvent(param1);
			return;
		}

		QKeyEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlotZoomer_widgetKeyReleaseEvent(this, handle__widgetKeyReleaseEvent.value(), sigval1);

	}

	friend void QwtPlotZoomer_virtualbase_widgetKeyReleaseEvent(void* self, QKeyEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> handle__widgetEnterEvent;

	// Subclass to allow providing a Go implementation
	virtual void widgetEnterEvent(QEvent* param1) override {
		if (!handle__widgetEnterEvent) {
			QwtPlotZoomer::widgetEnterEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlotZoomer_widgetEnterEvent(this, handle__widgetEnterEvent.value(), sigval1);

	}

	friend void QwtPlotZoomer_virtualbase_widgetEnterEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> handle__widgetLeaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void widgetLeaveEvent(QEvent* param1) override {
		if (!handle__widgetLeaveEvent) {
			QwtPlotZoomer::widgetLeaveEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QwtPlotZoomer_widgetLeaveEvent(this, handle__widgetLeaveEvent.value(), sigval1);

	}

	friend void QwtPlotZoomer_virtualbase_widgetLeaveEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> handle__stretchSelection;

	// Subclass to allow providing a Go implementation
	virtual void stretchSelection(const QSize& oldSize, const QSize& newSize) override {
		if (!handle__stretchSelection) {
			QwtPlotZoomer::stretchSelection(oldSize, newSize);
			return;
		}

		const QSize& oldSize_ret = oldSize;
		// Cast returned reference into pointer
		QSize* sigval1 = const_cast<QSize*>(&oldSize_ret);
		const QSize& newSize_ret = newSize;
		// Cast returned reference into pointer
		QSize* sigval2 = const_cast<QSize*>(&newSize_ret);
		miqt_exec_callback_QwtPlotZoomer_stretchSelection(this, handle__stretchSelection.value(), sigval1, sigval2);

	}

	friend void QwtPlotZoomer_virtualbase_stretchSelection(void* self, QSize* oldSize, QSize* newSize);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> handle__updateDisplay;

	// Subclass to allow providing a Go implementation
	virtual void updateDisplay() override {
		if (!handle__updateDisplay) {
			QwtPlotZoomer::updateDisplay();
			return;
		}

		miqt_exec_callback_QwtPlotZoomer_updateDisplay(this, handle__updateDisplay.value());

	}

	friend void QwtPlotZoomer_virtualbase_updateDisplay(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QwtPlotZoomer::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QwtPlotZoomer_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QwtPlotZoomer_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QwtPlotZoomer::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotZoomer_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QwtPlotZoomer_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QwtPlotZoomer::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotZoomer_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QwtPlotZoomer_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QwtPlotZoomer::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtPlotZoomer_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QwtPlotZoomer_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QwtPlotZoomer::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtPlotZoomer_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QwtPlotZoomer_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QwtPlotZoomer::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtPlotZoomer_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QwtPlotZoomer_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> handle__mouseMatch2;

	// Subclass to allow providing a Go implementation
	virtual bool mouseMatch(const QwtEventPattern::MousePattern& param1, const QMouseEvent* param2) const override {
		if (!handle__mouseMatch2) {
			return QwtPlotZoomer::mouseMatch(param1, param2);
		}

		const QwtEventPattern::MousePattern& param1_ret = param1;
		// Cast returned reference into pointer
		QwtEventPattern__MousePattern* sigval1 = const_cast<QwtEventPattern::MousePattern*>(&param1_ret);
		QMouseEvent* sigval2 = (QMouseEvent*) param2;
		bool callback_return_value = miqt_exec_callback_QwtPlotZoomer_mouseMatch2(this, handle__mouseMatch2.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QwtPlotZoomer_virtualbase_mouseMatch2(const void* self, QwtEventPattern__MousePattern* param1, QMouseEvent* param2);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> handle__keyMatch2;

	// Subclass to allow providing a Go implementation
	virtual bool keyMatch(const QwtEventPattern::KeyPattern& param1, const QKeyEvent* param2) const override {
		if (!handle__keyMatch2) {
			return QwtPlotZoomer::keyMatch(param1, param2);
		}

		const QwtEventPattern::KeyPattern& param1_ret = param1;
		// Cast returned reference into pointer
		QwtEventPattern__KeyPattern* sigval1 = const_cast<QwtEventPattern::KeyPattern*>(&param1_ret);
		QKeyEvent* sigval2 = (QKeyEvent*) param2;
		bool callback_return_value = miqt_exec_callback_QwtPlotZoomer_keyMatch2(this, handle__keyMatch2.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QwtPlotZoomer_virtualbase_keyMatch2(const void* self, QwtEventPattern__KeyPattern* param1, QKeyEvent* param2);

	// Wrappers to allow calling protected methods:
	friend QRectF* QwtPlotZoomer_protectedbase_scaleRect(bool* _dynamic_cast_ok, const void* self);
	friend QRectF* QwtPlotZoomer_protectedbase_invTransform(bool* _dynamic_cast_ok, const void* self, QRect* param1);
	friend QRect* QwtPlotZoomer_protectedbase_transform(bool* _dynamic_cast_ok, const void* self, QRectF* param1);
	friend QwtWidgetOverlay* QwtPlotZoomer_protectedbase_rubberBandOverlay(bool* _dynamic_cast_ok, const void* self);
	friend QwtWidgetOverlay* QwtPlotZoomer_protectedbase_trackerOverlay(bool* _dynamic_cast_ok, const void* self);
	friend QObject* QwtPlotZoomer_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QwtPlotZoomer_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QwtPlotZoomer_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QwtPlotZoomer_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QwtPlotZoomer* QwtPlotZoomer_new(QWidget* param1) {
	return new (std::nothrow) MiqtVirtualQwtPlotZoomer(param1);
}

QwtPlotZoomer* QwtPlotZoomer_new2(int xAxis, int yAxis, QWidget* param3) {
	return new (std::nothrow) MiqtVirtualQwtPlotZoomer(static_cast<int>(xAxis), static_cast<int>(yAxis), param3);
}

QwtPlotZoomer* QwtPlotZoomer_new3(QWidget* param1, bool doReplot) {
	return new (std::nothrow) MiqtVirtualQwtPlotZoomer(param1, doReplot);
}

QwtPlotZoomer* QwtPlotZoomer_new4(int xAxis, int yAxis, QWidget* param3, bool doReplot) {
	return new (std::nothrow) MiqtVirtualQwtPlotZoomer(static_cast<int>(xAxis), static_cast<int>(yAxis), param3, doReplot);
}

void QwtPlotZoomer_virtbase(QwtPlotZoomer* src, QwtPlotPicker** outptr_QwtPlotPicker) {
	*outptr_QwtPlotPicker = static_cast<QwtPlotPicker*>(src);
}

QMetaObject* QwtPlotZoomer_metaObject(const QwtPlotZoomer* self) {
	return (QMetaObject*) self->metaObject();
}

void* QwtPlotZoomer_metacast(QwtPlotZoomer* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QwtPlotZoomer_tr(const char* s) {
	QString _ret = QwtPlotZoomer::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtPlotZoomer_trUtf8(const char* s) {
	QString _ret = QwtPlotZoomer::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QwtPlotZoomer_setZoomBase(QwtPlotZoomer* self, bool doReplot) {
	self->setZoomBase(doReplot);
}

void QwtPlotZoomer_setZoomBaseWithZoomBase(QwtPlotZoomer* self, QRectF* zoomBase) {
	self->setZoomBase(*zoomBase);
}

QRectF* QwtPlotZoomer_zoomBase(const QwtPlotZoomer* self) {
	return new QRectF(self->zoomBase());
}

QRectF* QwtPlotZoomer_zoomRect(const QwtPlotZoomer* self) {
	return new QRectF(self->zoomRect());
}

void QwtPlotZoomer_setAxis(QwtPlotZoomer* self, int xAxis, int yAxis) {
	self->setAxis(static_cast<int>(xAxis), static_cast<int>(yAxis));
}

void QwtPlotZoomer_setMaxStackDepth(QwtPlotZoomer* self, int maxStackDepth) {
	self->setMaxStackDepth(static_cast<int>(maxStackDepth));
}

int QwtPlotZoomer_maxStackDepth(const QwtPlotZoomer* self) {
	return self->maxStackDepth();
}

unsigned int QwtPlotZoomer_zoomRectIndex(const QwtPlotZoomer* self) {
	uint _ret = self->zoomRectIndex();
	return static_cast<unsigned int>(_ret);
}

void QwtPlotZoomer_moveBy(QwtPlotZoomer* self, double dx, double dy) {
	self->moveBy(static_cast<double>(dx), static_cast<double>(dy));
}

void QwtPlotZoomer_moveTo(QwtPlotZoomer* self, QPointF* param1) {
	self->moveTo(*param1);
}

void QwtPlotZoomer_zoom(QwtPlotZoomer* self, QRectF* param1) {
	self->zoom(*param1);
}

void QwtPlotZoomer_zoomWithOffset(QwtPlotZoomer* self, int offset) {
	self->zoom(static_cast<int>(offset));
}

void QwtPlotZoomer_zoomed(QwtPlotZoomer* self, QRectF* rect) {
	self->zoomed(*rect);
}

void* QwtPlotZoomer_connect_zoomed(QwtPlotZoomer* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer>>(slot);
	return new QMetaObject::Connection(QwtPlotZoomer::connect(self, static_cast<void (QwtPlotZoomer::*)(const QRectF&)>(&QwtPlotZoomer::zoomed), self, [slot_handle](const QRectF& rect) {
		intptr_t slot = slot_handle->value();
		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&rect_ret);
		miqt_exec_callback_QwtPlotZoomer_zoomed(slot, sigval1);
	}));
}

struct miqt_string QwtPlotZoomer_tr2(const char* s, const char* c) {
	QString _ret = QwtPlotZoomer::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtPlotZoomer_tr3(const char* s, const char* c, int n) {
	QString _ret = QwtPlotZoomer::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtPlotZoomer_trUtf82(const char* s, const char* c) {
	QString _ret = QwtPlotZoomer::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtPlotZoomer_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QwtPlotZoomer::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QwtPlotZoomer_override_virtual_setZoomBase(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setZoomBase = std::move(slot_handle);
	return true;
}

void QwtPlotZoomer_virtualbase_setZoomBase(void* self, bool doReplot) {
	static_cast<MiqtVirtualQwtPlotZoomer*>(self)->QwtPlotZoomer::setZoomBase(doReplot);
}

bool QwtPlotZoomer_override_virtual_setZoomBaseWithZoomBase(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setZoomBaseWithZoomBase = std::move(slot_handle);
	return true;
}

void QwtPlotZoomer_virtualbase_setZoomBaseWithZoomBase(void* self, QRectF* zoomBase) {
	static_cast<MiqtVirtualQwtPlotZoomer*>(self)->QwtPlotZoomer::setZoomBase(*zoomBase);
}

bool QwtPlotZoomer_override_virtual_setAxis(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setAxis = std::move(slot_handle);
	return true;
}

void QwtPlotZoomer_virtualbase_setAxis(void* self, int xAxis, int yAxis) {
	static_cast<MiqtVirtualQwtPlotZoomer*>(self)->QwtPlotZoomer::setAxis(static_cast<int>(xAxis), static_cast<int>(yAxis));
}

bool QwtPlotZoomer_override_virtual_moveTo(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveTo = std::move(slot_handle);
	return true;
}

void QwtPlotZoomer_virtualbase_moveTo(void* self, QPointF* param1) {
	static_cast<MiqtVirtualQwtPlotZoomer*>(self)->QwtPlotZoomer::moveTo(*param1);
}

bool QwtPlotZoomer_override_virtual_zoom(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__zoom = std::move(slot_handle);
	return true;
}

void QwtPlotZoomer_virtualbase_zoom(void* self, QRectF* param1) {
	static_cast<MiqtVirtualQwtPlotZoomer*>(self)->QwtPlotZoomer::zoom(*param1);
}

bool QwtPlotZoomer_override_virtual_zoomWithOffset(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__zoomWithOffset = std::move(slot_handle);
	return true;
}

void QwtPlotZoomer_virtualbase_zoomWithOffset(void* self, int offset) {
	static_cast<MiqtVirtualQwtPlotZoomer*>(self)->QwtPlotZoomer::zoom(static_cast<int>(offset));
}

bool QwtPlotZoomer_override_virtual_rescale(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__rescale = std::move(slot_handle);
	return true;
}

void QwtPlotZoomer_virtualbase_rescale(void* self) {
	static_cast<MiqtVirtualQwtPlotZoomer*>(self)->QwtPlotZoomer::rescale();
}

bool QwtPlotZoomer_override_virtual_minZoomSize(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minZoomSize = std::move(slot_handle);
	self_cast->owns_return__minZoomSize = false;
	return true;
}

bool QwtPlotZoomer_override_virtual_owned_minZoomSize(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minZoomSize = std::move(slot_handle);
	self_cast->owns_return__minZoomSize = true;
	return true;
}

QSizeF* QwtPlotZoomer_virtualbase_minZoomSize(const void* self) {
	return new QSizeF(static_cast<const MiqtVirtualQwtPlotZoomer*>(self)->QwtPlotZoomer::minZoomSize());
}

bool QwtPlotZoomer_override_virtual_widgetMouseReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetMouseReleaseEvent = std::move(slot_handle);
	return true;
}

void QwtPlotZoomer_virtualbase_widgetMouseReleaseEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtPlotZoomer*>(self)->QwtPlotZoomer::widgetMouseReleaseEvent(param1);
}

bool QwtPlotZoomer_override_virtual_widgetKeyPressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetKeyPressEvent = std::move(slot_handle);
	return true;
}

void QwtPlotZoomer_virtualbase_widgetKeyPressEvent(void* self, QKeyEvent* param1) {
	static_cast<MiqtVirtualQwtPlotZoomer*>(self)->QwtPlotZoomer::widgetKeyPressEvent(param1);
}

bool QwtPlotZoomer_override_virtual_begin(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__begin = std::move(slot_handle);
	return true;
}

void QwtPlotZoomer_virtualbase_begin(void* self) {
	static_cast<MiqtVirtualQwtPlotZoomer*>(self)->QwtPlotZoomer::begin();
}

bool QwtPlotZoomer_override_virtual_end(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__end = std::move(slot_handle);
	return true;
}

bool QwtPlotZoomer_virtualbase_end(void* self, bool ok) {
	return static_cast<MiqtVirtualQwtPlotZoomer*>(self)->QwtPlotZoomer::end(ok);
}

bool QwtPlotZoomer_override_virtual_trackerText(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__trackerText = std::move(slot_handle);
	self_cast->owns_return__trackerText = false;
	return true;
}

bool QwtPlotZoomer_override_virtual_owned_trackerText(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__trackerText = std::move(slot_handle);
	self_cast->owns_return__trackerText = true;
	return true;
}

QwtText* QwtPlotZoomer_virtualbase_trackerText(const void* self, QPoint* param1) {
	return new QwtText(static_cast<const MiqtVirtualQwtPlotZoomer*>(self)->QwtPlotZoomer::trackerText(*param1));
}

bool QwtPlotZoomer_override_virtual_trackerTextF(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__trackerTextF = std::move(slot_handle);
	self_cast->owns_return__trackerTextF = false;
	return true;
}

bool QwtPlotZoomer_override_virtual_owned_trackerTextF(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__trackerTextF = std::move(slot_handle);
	self_cast->owns_return__trackerTextF = true;
	return true;
}

QwtText* QwtPlotZoomer_virtualbase_trackerTextF(const void* self, QPointF* param1) {
	return new QwtText(static_cast<const MiqtVirtualQwtPlotZoomer*>(self)->QwtPlotZoomer::trackerTextF(*param1));
}

bool QwtPlotZoomer_override_virtual_move(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__move = std::move(slot_handle);
	return true;
}

void QwtPlotZoomer_virtualbase_move(void* self, QPoint* param1) {
	static_cast<MiqtVirtualQwtPlotZoomer*>(self)->QwtPlotZoomer::move(*param1);
}

bool QwtPlotZoomer_override_virtual_append(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__append = std::move(slot_handle);
	return true;
}

void QwtPlotZoomer_virtualbase_append(void* self, QPoint* param1) {
	static_cast<MiqtVirtualQwtPlotZoomer*>(self)->QwtPlotZoomer::append(*param1);
}

bool QwtPlotZoomer_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QwtPlotZoomer_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {
	return static_cast<MiqtVirtualQwtPlotZoomer*>(self)->QwtPlotZoomer::eventFilter(param1, param2);
}

bool QwtPlotZoomer_override_virtual_pickArea(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__pickArea = std::move(slot_handle);
	self_cast->owns_return__pickArea = false;
	return true;
}

bool QwtPlotZoomer_override_virtual_owned_pickArea(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__pickArea = std::move(slot_handle);
	self_cast->owns_return__pickArea = true;
	return true;
}

QPainterPath* QwtPlotZoomer_virtualbase_pickArea(const void* self) {
	return new QPainterPath(static_cast<const MiqtVirtualQwtPlotZoomer*>(self)->QwtPlotZoomer::pickArea());
}

bool QwtPlotZoomer_override_virtual_drawRubberBand(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawRubberBand = std::move(slot_handle);
	return true;
}

void QwtPlotZoomer_virtualbase_drawRubberBand(const void* self, QPainter* param1) {
	static_cast<const MiqtVirtualQwtPlotZoomer*>(self)->QwtPlotZoomer::drawRubberBand(param1);
}

bool QwtPlotZoomer_override_virtual_drawTracker(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawTracker = std::move(slot_handle);
	return true;
}

void QwtPlotZoomer_virtualbase_drawTracker(const void* self, QPainter* param1) {
	static_cast<const MiqtVirtualQwtPlotZoomer*>(self)->QwtPlotZoomer::drawTracker(param1);
}

bool QwtPlotZoomer_override_virtual_rubberBandMask(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__rubberBandMask = std::move(slot_handle);
	self_cast->owns_return__rubberBandMask = false;
	return true;
}

bool QwtPlotZoomer_override_virtual_owned_rubberBandMask(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__rubberBandMask = std::move(slot_handle);
	self_cast->owns_return__rubberBandMask = true;
	return true;
}

QRegion* QwtPlotZoomer_virtualbase_rubberBandMask(const void* self) {
	return new QRegion(static_cast<const MiqtVirtualQwtPlotZoomer*>(self)->QwtPlotZoomer::rubberBandMask());
}

bool QwtPlotZoomer_override_virtual_trackerRect(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__trackerRect = std::move(slot_handle);
	self_cast->owns_return__trackerRect = false;
	return true;
}

bool QwtPlotZoomer_override_virtual_owned_trackerRect(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__trackerRect = std::move(slot_handle);
	self_cast->owns_return__trackerRect = true;
	return true;
}

QRect* QwtPlotZoomer_virtualbase_trackerRect(const void* self, QFont* param1) {
	return new QRect(static_cast<const MiqtVirtualQwtPlotZoomer*>(self)->QwtPlotZoomer::trackerRect(*param1));
}

bool QwtPlotZoomer_override_virtual_transition(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__transition = std::move(slot_handle);
	return true;
}

void QwtPlotZoomer_virtualbase_transition(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQwtPlotZoomer*>(self)->QwtPlotZoomer::transition(param1);
}

bool QwtPlotZoomer_override_virtual_remove(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__remove = std::move(slot_handle);
	return true;
}

void QwtPlotZoomer_virtualbase_remove(void* self) {
	static_cast<MiqtVirtualQwtPlotZoomer*>(self)->QwtPlotZoomer::remove();
}

bool QwtPlotZoomer_override_virtual_reset(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__reset = std::move(slot_handle);
	return true;
}

void QwtPlotZoomer_virtualbase_reset(void* self) {
	static_cast<MiqtVirtualQwtPlotZoomer*>(self)->QwtPlotZoomer::reset();
}

bool QwtPlotZoomer_override_virtual_widgetMousePressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetMousePressEvent = std::move(slot_handle);
	return true;
}

void QwtPlotZoomer_virtualbase_widgetMousePressEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtPlotZoomer*>(self)->QwtPlotZoomer::widgetMousePressEvent(param1);
}

bool QwtPlotZoomer_override_virtual_widgetMouseDoubleClickEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetMouseDoubleClickEvent = std::move(slot_handle);
	return true;
}

void QwtPlotZoomer_virtualbase_widgetMouseDoubleClickEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtPlotZoomer*>(self)->QwtPlotZoomer::widgetMouseDoubleClickEvent(param1);
}

bool QwtPlotZoomer_override_virtual_widgetMouseMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetMouseMoveEvent = std::move(slot_handle);
	return true;
}

void QwtPlotZoomer_virtualbase_widgetMouseMoveEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQwtPlotZoomer*>(self)->QwtPlotZoomer::widgetMouseMoveEvent(param1);
}

bool QwtPlotZoomer_override_virtual_widgetWheelEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetWheelEvent = std::move(slot_handle);
	return true;
}

void QwtPlotZoomer_virtualbase_widgetWheelEvent(void* self, QWheelEvent* param1) {
	static_cast<MiqtVirtualQwtPlotZoomer*>(self)->QwtPlotZoomer::widgetWheelEvent(param1);
}

bool QwtPlotZoomer_override_virtual_widgetKeyReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetKeyReleaseEvent = std::move(slot_handle);
	return true;
}

void QwtPlotZoomer_virtualbase_widgetKeyReleaseEvent(void* self, QKeyEvent* param1) {
	static_cast<MiqtVirtualQwtPlotZoomer*>(self)->QwtPlotZoomer::widgetKeyReleaseEvent(param1);
}

bool QwtPlotZoomer_override_virtual_widgetEnterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetEnterEvent = std::move(slot_handle);
	return true;
}

void QwtPlotZoomer_virtualbase_widgetEnterEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQwtPlotZoomer*>(self)->QwtPlotZoomer::widgetEnterEvent(param1);
}

bool QwtPlotZoomer_override_virtual_widgetLeaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widgetLeaveEvent = std::move(slot_handle);
	return true;
}

void QwtPlotZoomer_virtualbase_widgetLeaveEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQwtPlotZoomer*>(self)->QwtPlotZoomer::widgetLeaveEvent(param1);
}

bool QwtPlotZoomer_override_virtual_stretchSelection(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__stretchSelection = std::move(slot_handle);
	return true;
}

void QwtPlotZoomer_virtualbase_stretchSelection(void* self, QSize* oldSize, QSize* newSize) {
	static_cast<MiqtVirtualQwtPlotZoomer*>(self)->QwtPlotZoomer::stretchSelection(*oldSize, *newSize);
}

bool QwtPlotZoomer_override_virtual_updateDisplay(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateDisplay = std::move(slot_handle);
	return true;
}

void QwtPlotZoomer_virtualbase_updateDisplay(void* self) {
	static_cast<MiqtVirtualQwtPlotZoomer*>(self)->QwtPlotZoomer::updateDisplay();
}

bool QwtPlotZoomer_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QwtPlotZoomer_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQwtPlotZoomer*>(self)->QwtPlotZoomer::event(event);
}

bool QwtPlotZoomer_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QwtPlotZoomer_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQwtPlotZoomer*>(self)->QwtPlotZoomer::timerEvent(event);
}

bool QwtPlotZoomer_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QwtPlotZoomer_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQwtPlotZoomer*>(self)->QwtPlotZoomer::childEvent(event);
}

bool QwtPlotZoomer_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QwtPlotZoomer_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtPlotZoomer*>(self)->QwtPlotZoomer::customEvent(event);
}

bool QwtPlotZoomer_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QwtPlotZoomer_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtPlotZoomer*>(self)->QwtPlotZoomer::connectNotify(*signal);
}

bool QwtPlotZoomer_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QwtPlotZoomer_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtPlotZoomer*>(self)->QwtPlotZoomer::disconnectNotify(*signal);
}

bool QwtPlotZoomer_override_virtual_mouseMatch2(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMatch2 = std::move(slot_handle);
	return true;
}

bool QwtPlotZoomer_virtualbase_mouseMatch2(const void* self, QwtEventPattern__MousePattern* param1, QMouseEvent* param2) {
	return static_cast<const MiqtVirtualQwtPlotZoomer*>(self)->QwtPlotZoomer::mouseMatch(*param1, param2);
}

bool QwtPlotZoomer_override_virtual_keyMatch2(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtPlotZoomer> slot_handle(slot);
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyMatch2 = std::move(slot_handle);
	return true;
}

bool QwtPlotZoomer_virtualbase_keyMatch2(const void* self, QwtEventPattern__KeyPattern* param1, QKeyEvent* param2) {
	return static_cast<const MiqtVirtualQwtPlotZoomer*>(self)->QwtPlotZoomer::keyMatch(*param1, param2);
}

QRectF* QwtPlotZoomer_protectedbase_scaleRect(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QRectF(self_cast->scaleRect());
}

QRectF* QwtPlotZoomer_protectedbase_invTransform(bool* _dynamic_cast_ok, const void* self, QRect* param1) {
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QRectF(self_cast->invTransform(*param1));
}

QRect* QwtPlotZoomer_protectedbase_transform(bool* _dynamic_cast_ok, const void* self, QRectF* param1) {
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QRect(self_cast->transform(*param1));
}

QwtWidgetOverlay* QwtPlotZoomer_protectedbase_rubberBandOverlay(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return (QwtWidgetOverlay*) self_cast->rubberBandOverlay();
}

QwtWidgetOverlay* QwtPlotZoomer_protectedbase_trackerOverlay(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return (QwtWidgetOverlay*) self_cast->trackerOverlay();
}

QObject* QwtPlotZoomer_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QwtPlotZoomer_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QwtPlotZoomer_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QwtPlotZoomer_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQwtPlotZoomer* self_cast = dynamic_cast<MiqtVirtualQwtPlotZoomer*>( (QwtPlotZoomer*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QwtPlotZoomer_delete(QwtPlotZoomer* self) {
	delete self;
}

