#include <memory>
#include <utility>
#include <QAction>
#include <QChildEvent>
#include <QCloseEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QGraphicsItem>
#include <QGraphicsLayout>
#include <QGraphicsLayoutItem>
#include <QGraphicsObject>
#include <QGraphicsSceneContextMenuEvent>
#include <QGraphicsSceneDragDropEvent>
#include <QGraphicsSceneHoverEvent>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsSceneMoveEvent>
#include <QGraphicsSceneResizeEvent>
#include <QGraphicsSceneWheelEvent>
#include <QGraphicsWidget>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QKeySequence>
#include <QList>
#include <QMarginsF>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPainter>
#include <QPainterPath>
#include <QPalette>
#include <QPointF>
#include <QRectF>
#include <QShowEvent>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QStyleOption>
#include <QStyleOptionGraphicsItem>
#include <QTimerEvent>
#include <QVariant>
#include <QWidget>
#include <qgraphicswidget.h>
#include "gen_qgraphicswidget.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QGraphicsWidget(intptr_t);
void miqt_exec_callback_QGraphicsWidget_geometryChanged(intptr_t);
void miqt_exec_callback_QGraphicsWidget_layoutChanged(intptr_t);
void miqt_exec_callback_QGraphicsWidget_setGeometry(QGraphicsWidget*, intptr_t, QRectF*);
void miqt_exec_callback_QGraphicsWidget_getContentsMargins(const QGraphicsWidget*, intptr_t, double*, double*, double*, double*);
int miqt_exec_callback_QGraphicsWidget_type(const QGraphicsWidget*, intptr_t);
void miqt_exec_callback_QGraphicsWidget_paint(QGraphicsWidget*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
void miqt_exec_callback_QGraphicsWidget_paintWindowFrame(QGraphicsWidget*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
QRectF* miqt_exec_callback_QGraphicsWidget_boundingRect(const QGraphicsWidget*, intptr_t);
QPainterPath* miqt_exec_callback_QGraphicsWidget_shape(const QGraphicsWidget*, intptr_t);
void miqt_exec_callback_QGraphicsWidget_initStyleOption(const QGraphicsWidget*, intptr_t, QStyleOption*);
QSizeF* miqt_exec_callback_QGraphicsWidget_sizeHint(const QGraphicsWidget*, intptr_t, int, QSizeF*);
void miqt_exec_callback_QGraphicsWidget_updateGeometry(QGraphicsWidget*, intptr_t);
QVariant* miqt_exec_callback_QGraphicsWidget_itemChange(QGraphicsWidget*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QGraphicsWidget_propertyChange(QGraphicsWidget*, intptr_t, struct miqt_string, QVariant*);
bool miqt_exec_callback_QGraphicsWidget_sceneEvent(QGraphicsWidget*, intptr_t, QEvent*);
bool miqt_exec_callback_QGraphicsWidget_windowFrameEvent(QGraphicsWidget*, intptr_t, QEvent*);
int miqt_exec_callback_QGraphicsWidget_windowFrameSectionAt(const QGraphicsWidget*, intptr_t, QPointF*);
bool miqt_exec_callback_QGraphicsWidget_event(QGraphicsWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsWidget_changeEvent(QGraphicsWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsWidget_closeEvent(QGraphicsWidget*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QGraphicsWidget_focusInEvent(QGraphicsWidget*, intptr_t, QFocusEvent*);
bool miqt_exec_callback_QGraphicsWidget_focusNextPrevChild(QGraphicsWidget*, intptr_t, bool);
void miqt_exec_callback_QGraphicsWidget_focusOutEvent(QGraphicsWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsWidget_hideEvent(QGraphicsWidget*, intptr_t, QHideEvent*);
void miqt_exec_callback_QGraphicsWidget_moveEvent(QGraphicsWidget*, intptr_t, QGraphicsSceneMoveEvent*);
void miqt_exec_callback_QGraphicsWidget_polishEvent(QGraphicsWidget*, intptr_t);
void miqt_exec_callback_QGraphicsWidget_resizeEvent(QGraphicsWidget*, intptr_t, QGraphicsSceneResizeEvent*);
void miqt_exec_callback_QGraphicsWidget_showEvent(QGraphicsWidget*, intptr_t, QShowEvent*);
void miqt_exec_callback_QGraphicsWidget_hoverMoveEvent(QGraphicsWidget*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsWidget_hoverLeaveEvent(QGraphicsWidget*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsWidget_grabMouseEvent(QGraphicsWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsWidget_ungrabMouseEvent(QGraphicsWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsWidget_grabKeyboardEvent(QGraphicsWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsWidget_ungrabKeyboardEvent(QGraphicsWidget*, intptr_t, QEvent*);
bool miqt_exec_callback_QGraphicsWidget_eventFilter(QGraphicsWidget*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QGraphicsWidget_timerEvent(QGraphicsWidget*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QGraphicsWidget_childEvent(QGraphicsWidget*, intptr_t, QChildEvent*);
void miqt_exec_callback_QGraphicsWidget_customEvent(QGraphicsWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsWidget_connectNotify(QGraphicsWidget*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsWidget_disconnectNotify(QGraphicsWidget*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsWidget_advance(QGraphicsWidget*, intptr_t, int);
bool miqt_exec_callback_QGraphicsWidget_contains(const QGraphicsWidget*, intptr_t, QPointF*);
bool miqt_exec_callback_QGraphicsWidget_collidesWithItem(const QGraphicsWidget*, intptr_t, QGraphicsItem*, int);
bool miqt_exec_callback_QGraphicsWidget_collidesWithPath(const QGraphicsWidget*, intptr_t, QPainterPath*, int);
bool miqt_exec_callback_QGraphicsWidget_isObscuredBy(const QGraphicsWidget*, intptr_t, QGraphicsItem*);
QPainterPath* miqt_exec_callback_QGraphicsWidget_opaqueArea(const QGraphicsWidget*, intptr_t);
bool miqt_exec_callback_QGraphicsWidget_sceneEventFilter(QGraphicsWidget*, intptr_t, QGraphicsItem*, QEvent*);
void miqt_exec_callback_QGraphicsWidget_contextMenuEvent(QGraphicsWidget*, intptr_t, QGraphicsSceneContextMenuEvent*);
void miqt_exec_callback_QGraphicsWidget_dragEnterEvent(QGraphicsWidget*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsWidget_dragLeaveEvent(QGraphicsWidget*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsWidget_dragMoveEvent(QGraphicsWidget*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsWidget_dropEvent(QGraphicsWidget*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsWidget_hoverEnterEvent(QGraphicsWidget*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsWidget_keyPressEvent(QGraphicsWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsWidget_keyReleaseEvent(QGraphicsWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsWidget_mousePressEvent(QGraphicsWidget*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsWidget_mouseMoveEvent(QGraphicsWidget*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsWidget_mouseReleaseEvent(QGraphicsWidget*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsWidget_mouseDoubleClickEvent(QGraphicsWidget*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsWidget_wheelEvent(QGraphicsWidget*, intptr_t, QGraphicsSceneWheelEvent*);
void miqt_exec_callback_QGraphicsWidget_inputMethodEvent(QGraphicsWidget*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QGraphicsWidget_inputMethodQuery(const QGraphicsWidget*, intptr_t, int);
bool miqt_exec_callback_QGraphicsWidget_supportsExtension(const QGraphicsWidget*, intptr_t, int);
void miqt_exec_callback_QGraphicsWidget_setExtension(QGraphicsWidget*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QGraphicsWidget_extension(const QGraphicsWidget*, intptr_t, QVariant*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGraphicsWidget final : public QGraphicsWidget {
public:

	MiqtVirtualQGraphicsWidget(): QGraphicsWidget() {}
	MiqtVirtualQGraphicsWidget(QGraphicsItem* parent): QGraphicsWidget(parent) {}
	MiqtVirtualQGraphicsWidget(QGraphicsItem* parent, Qt::WindowFlags wFlags): QGraphicsWidget(parent, wFlags) {}

	virtual ~MiqtVirtualQGraphicsWidget() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__setGeometry;

	// Subclass to allow providing a Go implementation
	virtual void setGeometry(const QRectF& rect) override {
		if (!handle__setGeometry) {
			QGraphicsWidget::setGeometry(rect);
			return;
		}

		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&rect_ret);
		miqt_exec_callback_QGraphicsWidget_setGeometry(this, handle__setGeometry.value(), sigval1);

	}

	friend void QGraphicsWidget_virtualbase_setGeometry(void* self, QRectF* rect);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__getContentsMargins;

	// Subclass to allow providing a Go implementation
	virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
		if (!handle__getContentsMargins) {
			QGraphicsWidget::getContentsMargins(left, top, right, bottom);
			return;
		}

		qreal* left_ret = left;
		double* sigval1 = static_cast<double*>(left_ret);
		qreal* top_ret = top;
		double* sigval2 = static_cast<double*>(top_ret);
		qreal* right_ret = right;
		double* sigval3 = static_cast<double*>(right_ret);
		qreal* bottom_ret = bottom;
		double* sigval4 = static_cast<double*>(bottom_ret);
		miqt_exec_callback_QGraphicsWidget_getContentsMargins(this, handle__getContentsMargins.value(), sigval1, sigval2, sigval3, sigval4);

	}

	friend void QGraphicsWidget_virtualbase_getContentsMargins(const void* self, double* left, double* top, double* right, double* bottom);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__type;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (!handle__type) {
			return QGraphicsWidget::type();
		}

		int callback_return_value = miqt_exec_callback_QGraphicsWidget_type(this, handle__type.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QGraphicsWidget_virtualbase_type(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__paint;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (!handle__paint) {
			QGraphicsWidget::paint(painter, option, widget);
			return;
		}

		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;
		miqt_exec_callback_QGraphicsWidget_paint(this, handle__paint.value(), sigval1, sigval2, sigval3);

	}

	friend void QGraphicsWidget_virtualbase_paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__paintWindowFrame;

	// Subclass to allow providing a Go implementation
	virtual void paintWindowFrame(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (!handle__paintWindowFrame) {
			QGraphicsWidget::paintWindowFrame(painter, option, widget);
			return;
		}

		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;
		miqt_exec_callback_QGraphicsWidget_paintWindowFrame(this, handle__paintWindowFrame.value(), sigval1, sigval2, sigval3);

	}

	friend void QGraphicsWidget_virtualbase_paintWindowFrame(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__boundingRect;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (!handle__boundingRect) {
			return QGraphicsWidget::boundingRect();
		}

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsWidget_boundingRect(this, handle__boundingRect.value());
		return *callback_return_value;
	}

	friend QRectF* QGraphicsWidget_virtualbase_boundingRect(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__shape;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (!handle__shape) {
			return QGraphicsWidget::shape();
		}

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsWidget_shape(this, handle__shape.value());
		return *callback_return_value;
	}

	friend QPainterPath* QGraphicsWidget_virtualbase_shape(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__initStyleOption;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOption* option) const override {
		if (!handle__initStyleOption) {
			QGraphicsWidget::initStyleOption(option);
			return;
		}

		QStyleOption* sigval1 = option;
		miqt_exec_callback_QGraphicsWidget_initStyleOption(this, handle__initStyleOption.value(), sigval1);

	}

	friend void QGraphicsWidget_virtualbase_initStyleOption(const void* self, QStyleOption* option);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__sizeHint;

	// Subclass to allow providing a Go implementation
	virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
		if (!handle__sizeHint) {
			return QGraphicsWidget::sizeHint(which, constraint);
		}

		Qt::SizeHint which_ret = which;
		int sigval1 = static_cast<int>(which_ret);
		const QSizeF& constraint_ret = constraint;
		// Cast returned reference into pointer
		QSizeF* sigval2 = const_cast<QSizeF*>(&constraint_ret);
		QSizeF* callback_return_value = miqt_exec_callback_QGraphicsWidget_sizeHint(this, handle__sizeHint.value(), sigval1, sigval2);
		return *callback_return_value;
	}

	friend QSizeF* QGraphicsWidget_virtualbase_sizeHint(const void* self, int which, QSizeF* constraint);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__updateGeometry;

	// Subclass to allow providing a Go implementation
	virtual void updateGeometry() override {
		if (!handle__updateGeometry) {
			QGraphicsWidget::updateGeometry();
			return;
		}

		miqt_exec_callback_QGraphicsWidget_updateGeometry(this, handle__updateGeometry.value());

	}

	friend void QGraphicsWidget_virtualbase_updateGeometry(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__itemChange;

	// Subclass to allow providing a Go implementation
	virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
		if (!handle__itemChange) {
			return QGraphicsWidget::itemChange(change, value);
		}

		QGraphicsItem::GraphicsItemChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		QVariant* callback_return_value = miqt_exec_callback_QGraphicsWidget_itemChange(this, handle__itemChange.value(), sigval1, sigval2);
		return *callback_return_value;
	}

	friend QVariant* QGraphicsWidget_virtualbase_itemChange(void* self, int change, QVariant* value);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__propertyChange;

	// Subclass to allow providing a Go implementation
	virtual QVariant propertyChange(const QString& propertyName, const QVariant& value) override {
		if (!handle__propertyChange) {
			return QGraphicsWidget::propertyChange(propertyName, value);
		}

		const QString propertyName_ret = propertyName;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray propertyName_b = propertyName_ret.toUtf8();
		struct miqt_string propertyName_ms;
		propertyName_ms.len = propertyName_b.length();
		propertyName_ms.data = static_cast<char*>(malloc(propertyName_ms.len));
		memcpy(propertyName_ms.data, propertyName_b.data(), propertyName_ms.len);
		struct miqt_string sigval1 = propertyName_ms;
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		QVariant* callback_return_value = miqt_exec_callback_QGraphicsWidget_propertyChange(this, handle__propertyChange.value(), sigval1, sigval2);
		return *callback_return_value;
	}

	friend QVariant* QGraphicsWidget_virtualbase_propertyChange(void* self, struct miqt_string propertyName, QVariant* value);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__sceneEvent;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEvent(QEvent* event) override {
		if (!handle__sceneEvent) {
			return QGraphicsWidget::sceneEvent(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QGraphicsWidget_sceneEvent(this, handle__sceneEvent.value(), sigval1);
		return callback_return_value;
	}

	friend bool QGraphicsWidget_virtualbase_sceneEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__windowFrameEvent;

	// Subclass to allow providing a Go implementation
	virtual bool windowFrameEvent(QEvent* e) override {
		if (!handle__windowFrameEvent) {
			return QGraphicsWidget::windowFrameEvent(e);
		}

		QEvent* sigval1 = e;
		bool callback_return_value = miqt_exec_callback_QGraphicsWidget_windowFrameEvent(this, handle__windowFrameEvent.value(), sigval1);
		return callback_return_value;
	}

	friend bool QGraphicsWidget_virtualbase_windowFrameEvent(void* self, QEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__windowFrameSectionAt;

	// Subclass to allow providing a Go implementation
	virtual Qt::WindowFrameSection windowFrameSectionAt(const QPointF& pos) const override {
		if (!handle__windowFrameSectionAt) {
			return QGraphicsWidget::windowFrameSectionAt(pos);
		}

		const QPointF& pos_ret = pos;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&pos_ret);
		int callback_return_value = miqt_exec_callback_QGraphicsWidget_windowFrameSectionAt(this, handle__windowFrameSectionAt.value(), sigval1);
		return static_cast<Qt::WindowFrameSection>(callback_return_value);
	}

	friend int QGraphicsWidget_virtualbase_windowFrameSectionAt(const void* self, QPointF* pos);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QGraphicsWidget::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QGraphicsWidget_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QGraphicsWidget_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__changeEvent;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* event) override {
		if (!handle__changeEvent) {
			QGraphicsWidget::changeEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWidget_changeEvent(this, handle__changeEvent.value(), sigval1);

	}

	friend void QGraphicsWidget_virtualbase_changeEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__closeEvent;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (!handle__closeEvent) {
			QGraphicsWidget::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWidget_closeEvent(this, handle__closeEvent.value(), sigval1);

	}

	friend void QGraphicsWidget_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__focusInEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (!handle__focusInEvent) {
			QGraphicsWidget::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWidget_focusInEvent(this, handle__focusInEvent.value(), sigval1);

	}

	friend void QGraphicsWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__focusNextPrevChild;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (!handle__focusNextPrevChild) {
			return QGraphicsWidget::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QGraphicsWidget_focusNextPrevChild(this, handle__focusNextPrevChild.value(), sigval1);
		return callback_return_value;
	}

	friend bool QGraphicsWidget_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__focusOutEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (!handle__focusOutEvent) {
			QGraphicsWidget::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWidget_focusOutEvent(this, handle__focusOutEvent.value(), sigval1);

	}

	friend void QGraphicsWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__hideEvent;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (!handle__hideEvent) {
			QGraphicsWidget::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWidget_hideEvent(this, handle__hideEvent.value(), sigval1);

	}

	friend void QGraphicsWidget_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__moveEvent;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QGraphicsSceneMoveEvent* event) override {
		if (!handle__moveEvent) {
			QGraphicsWidget::moveEvent(event);
			return;
		}

		QGraphicsSceneMoveEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWidget_moveEvent(this, handle__moveEvent.value(), sigval1);

	}

	friend void QGraphicsWidget_virtualbase_moveEvent(void* self, QGraphicsSceneMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__polishEvent;

	// Subclass to allow providing a Go implementation
	virtual void polishEvent() override {
		if (!handle__polishEvent) {
			QGraphicsWidget::polishEvent();
			return;
		}

		miqt_exec_callback_QGraphicsWidget_polishEvent(this, handle__polishEvent.value());

	}

	friend void QGraphicsWidget_virtualbase_polishEvent(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__resizeEvent;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QGraphicsSceneResizeEvent* event) override {
		if (!handle__resizeEvent) {
			QGraphicsWidget::resizeEvent(event);
			return;
		}

		QGraphicsSceneResizeEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWidget_resizeEvent(this, handle__resizeEvent.value(), sigval1);

	}

	friend void QGraphicsWidget_virtualbase_resizeEvent(void* self, QGraphicsSceneResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__showEvent;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (!handle__showEvent) {
			QGraphicsWidget::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWidget_showEvent(this, handle__showEvent.value(), sigval1);

	}

	friend void QGraphicsWidget_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__hoverMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (!handle__hoverMoveEvent) {
			QGraphicsWidget::hoverMoveEvent(event);
			return;
		}

		QGraphicsSceneHoverEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWidget_hoverMoveEvent(this, handle__hoverMoveEvent.value(), sigval1);

	}

	friend void QGraphicsWidget_virtualbase_hoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__hoverLeaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (!handle__hoverLeaveEvent) {
			QGraphicsWidget::hoverLeaveEvent(event);
			return;
		}

		QGraphicsSceneHoverEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWidget_hoverLeaveEvent(this, handle__hoverLeaveEvent.value(), sigval1);

	}

	friend void QGraphicsWidget_virtualbase_hoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__grabMouseEvent;

	// Subclass to allow providing a Go implementation
	virtual void grabMouseEvent(QEvent* event) override {
		if (!handle__grabMouseEvent) {
			QGraphicsWidget::grabMouseEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWidget_grabMouseEvent(this, handle__grabMouseEvent.value(), sigval1);

	}

	friend void QGraphicsWidget_virtualbase_grabMouseEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__ungrabMouseEvent;

	// Subclass to allow providing a Go implementation
	virtual void ungrabMouseEvent(QEvent* event) override {
		if (!handle__ungrabMouseEvent) {
			QGraphicsWidget::ungrabMouseEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWidget_ungrabMouseEvent(this, handle__ungrabMouseEvent.value(), sigval1);

	}

	friend void QGraphicsWidget_virtualbase_ungrabMouseEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__grabKeyboardEvent;

	// Subclass to allow providing a Go implementation
	virtual void grabKeyboardEvent(QEvent* event) override {
		if (!handle__grabKeyboardEvent) {
			QGraphicsWidget::grabKeyboardEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWidget_grabKeyboardEvent(this, handle__grabKeyboardEvent.value(), sigval1);

	}

	friend void QGraphicsWidget_virtualbase_grabKeyboardEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__ungrabKeyboardEvent;

	// Subclass to allow providing a Go implementation
	virtual void ungrabKeyboardEvent(QEvent* event) override {
		if (!handle__ungrabKeyboardEvent) {
			QGraphicsWidget::ungrabKeyboardEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWidget_ungrabKeyboardEvent(this, handle__ungrabKeyboardEvent.value(), sigval1);

	}

	friend void QGraphicsWidget_virtualbase_ungrabKeyboardEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QGraphicsWidget::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QGraphicsWidget_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QGraphicsWidget_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QGraphicsWidget::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWidget_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QGraphicsWidget_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QGraphicsWidget::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWidget_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QGraphicsWidget_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QGraphicsWidget::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWidget_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QGraphicsWidget_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QGraphicsWidget::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QGraphicsWidget_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QGraphicsWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QGraphicsWidget::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QGraphicsWidget_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QGraphicsWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__advance;

	// Subclass to allow providing a Go implementation
	virtual void advance(int phase) override {
		if (!handle__advance) {
			QGraphicsWidget::advance(phase);
			return;
		}

		int sigval1 = phase;
		miqt_exec_callback_QGraphicsWidget_advance(this, handle__advance.value(), sigval1);

	}

	friend void QGraphicsWidget_virtualbase_advance(void* self, int phase);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__contains;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (!handle__contains) {
			return QGraphicsWidget::contains(point);
		}

		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);
		bool callback_return_value = miqt_exec_callback_QGraphicsWidget_contains(this, handle__contains.value(), sigval1);
		return callback_return_value;
	}

	friend bool QGraphicsWidget_virtualbase_contains(const void* self, QPointF* point);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__collidesWithItem;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
		if (!handle__collidesWithItem) {
			return QGraphicsWidget::collidesWithItem(other, mode);
		}

		QGraphicsItem* sigval1 = (QGraphicsItem*) other;
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);
		bool callback_return_value = miqt_exec_callback_QGraphicsWidget_collidesWithItem(this, handle__collidesWithItem.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QGraphicsWidget_virtualbase_collidesWithItem(const void* self, QGraphicsItem* other, int mode);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__collidesWithPath;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
		if (!handle__collidesWithPath) {
			return QGraphicsWidget::collidesWithPath(path, mode);
		}

		const QPainterPath& path_ret = path;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&path_ret);
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);
		bool callback_return_value = miqt_exec_callback_QGraphicsWidget_collidesWithPath(this, handle__collidesWithPath.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QGraphicsWidget_virtualbase_collidesWithPath(const void* self, QPainterPath* path, int mode);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__isObscuredBy;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (!handle__isObscuredBy) {
			return QGraphicsWidget::isObscuredBy(item);
		}

		QGraphicsItem* sigval1 = (QGraphicsItem*) item;
		bool callback_return_value = miqt_exec_callback_QGraphicsWidget_isObscuredBy(this, handle__isObscuredBy.value(), sigval1);
		return callback_return_value;
	}

	friend bool QGraphicsWidget_virtualbase_isObscuredBy(const void* self, QGraphicsItem* item);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__opaqueArea;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (!handle__opaqueArea) {
			return QGraphicsWidget::opaqueArea();
		}

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsWidget_opaqueArea(this, handle__opaqueArea.value());
		return *callback_return_value;
	}

	friend QPainterPath* QGraphicsWidget_virtualbase_opaqueArea(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__sceneEventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
		if (!handle__sceneEventFilter) {
			return QGraphicsWidget::sceneEventFilter(watched, event);
		}

		QGraphicsItem* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QGraphicsWidget_sceneEventFilter(this, handle__sceneEventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QGraphicsWidget_virtualbase_sceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__contextMenuEvent;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (!handle__contextMenuEvent) {
			QGraphicsWidget::contextMenuEvent(event);
			return;
		}

		QGraphicsSceneContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWidget_contextMenuEvent(this, handle__contextMenuEvent.value(), sigval1);

	}

	friend void QGraphicsWidget_virtualbase_contextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__dragEnterEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (!handle__dragEnterEvent) {
			QGraphicsWidget::dragEnterEvent(event);
			return;
		}

		QGraphicsSceneDragDropEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWidget_dragEnterEvent(this, handle__dragEnterEvent.value(), sigval1);

	}

	friend void QGraphicsWidget_virtualbase_dragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__dragLeaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (!handle__dragLeaveEvent) {
			QGraphicsWidget::dragLeaveEvent(event);
			return;
		}

		QGraphicsSceneDragDropEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWidget_dragLeaveEvent(this, handle__dragLeaveEvent.value(), sigval1);

	}

	friend void QGraphicsWidget_virtualbase_dragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__dragMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (!handle__dragMoveEvent) {
			QGraphicsWidget::dragMoveEvent(event);
			return;
		}

		QGraphicsSceneDragDropEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWidget_dragMoveEvent(this, handle__dragMoveEvent.value(), sigval1);

	}

	friend void QGraphicsWidget_virtualbase_dragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__dropEvent;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (!handle__dropEvent) {
			QGraphicsWidget::dropEvent(event);
			return;
		}

		QGraphicsSceneDragDropEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWidget_dropEvent(this, handle__dropEvent.value(), sigval1);

	}

	friend void QGraphicsWidget_virtualbase_dropEvent(void* self, QGraphicsSceneDragDropEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__hoverEnterEvent;

	// Subclass to allow providing a Go implementation
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (!handle__hoverEnterEvent) {
			QGraphicsWidget::hoverEnterEvent(event);
			return;
		}

		QGraphicsSceneHoverEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWidget_hoverEnterEvent(this, handle__hoverEnterEvent.value(), sigval1);

	}

	friend void QGraphicsWidget_virtualbase_hoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__keyPressEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (!handle__keyPressEvent) {
			QGraphicsWidget::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWidget_keyPressEvent(this, handle__keyPressEvent.value(), sigval1);

	}

	friend void QGraphicsWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__keyReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (!handle__keyReleaseEvent) {
			QGraphicsWidget::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWidget_keyReleaseEvent(this, handle__keyReleaseEvent.value(), sigval1);

	}

	friend void QGraphicsWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__mousePressEvent;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (!handle__mousePressEvent) {
			QGraphicsWidget::mousePressEvent(event);
			return;
		}

		QGraphicsSceneMouseEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWidget_mousePressEvent(this, handle__mousePressEvent.value(), sigval1);

	}

	friend void QGraphicsWidget_virtualbase_mousePressEvent(void* self, QGraphicsSceneMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__mouseMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (!handle__mouseMoveEvent) {
			QGraphicsWidget::mouseMoveEvent(event);
			return;
		}

		QGraphicsSceneMouseEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWidget_mouseMoveEvent(this, handle__mouseMoveEvent.value(), sigval1);

	}

	friend void QGraphicsWidget_virtualbase_mouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__mouseReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (!handle__mouseReleaseEvent) {
			QGraphicsWidget::mouseReleaseEvent(event);
			return;
		}

		QGraphicsSceneMouseEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWidget_mouseReleaseEvent(this, handle__mouseReleaseEvent.value(), sigval1);

	}

	friend void QGraphicsWidget_virtualbase_mouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__mouseDoubleClickEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (!handle__mouseDoubleClickEvent) {
			QGraphicsWidget::mouseDoubleClickEvent(event);
			return;
		}

		QGraphicsSceneMouseEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWidget_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent.value(), sigval1);

	}

	friend void QGraphicsWidget_virtualbase_mouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__wheelEvent;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (!handle__wheelEvent) {
			QGraphicsWidget::wheelEvent(event);
			return;
		}

		QGraphicsSceneWheelEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWidget_wheelEvent(this, handle__wheelEvent.value(), sigval1);

	}

	friend void QGraphicsWidget_virtualbase_wheelEvent(void* self, QGraphicsSceneWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__inputMethodEvent;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (!handle__inputMethodEvent) {
			QGraphicsWidget::inputMethodEvent(event);
			return;
		}

		QInputMethodEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWidget_inputMethodEvent(this, handle__inputMethodEvent.value(), sigval1);

	}

	friend void QGraphicsWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__inputMethodQuery;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (!handle__inputMethodQuery) {
			return QGraphicsWidget::inputMethodQuery(query);
		}

		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);
		QVariant* callback_return_value = miqt_exec_callback_QGraphicsWidget_inputMethodQuery(this, handle__inputMethodQuery.value(), sigval1);
		return *callback_return_value;
	}

	friend QVariant* QGraphicsWidget_virtualbase_inputMethodQuery(const void* self, int query);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__supportsExtension;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (!handle__supportsExtension) {
			return QGraphicsWidget::supportsExtension(extension);
		}

		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		bool callback_return_value = miqt_exec_callback_QGraphicsWidget_supportsExtension(this, handle__supportsExtension.value(), sigval1);
		return callback_return_value;
	}

	friend bool QGraphicsWidget_virtualbase_supportsExtension(const void* self, int extension);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__setExtension;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (!handle__setExtension) {
			QGraphicsWidget::setExtension(extension, variant);
			return;
		}

		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);
		miqt_exec_callback_QGraphicsWidget_setExtension(this, handle__setExtension.value(), sigval1, sigval2);

	}

	friend void QGraphicsWidget_virtualbase_setExtension(void* self, int extension, QVariant* variant);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> handle__extension;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (!handle__extension) {
			return QGraphicsWidget::extension(variant);
		}

		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);
		QVariant* callback_return_value = miqt_exec_callback_QGraphicsWidget_extension(this, handle__extension.value(), sigval1);
		return *callback_return_value;
	}

	friend QVariant* QGraphicsWidget_virtualbase_extension(const void* self, QVariant* variant);

	// Wrappers to allow calling protected methods:
	friend void QGraphicsWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend QObject* QGraphicsWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QGraphicsWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
	friend void QGraphicsWidget_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsWidget_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsWidget_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsWidget_protectedbase_setGraphicsItem(bool* _dynamic_cast_ok, void* self, QGraphicsItem* item);
	friend void QGraphicsWidget_protectedbase_setOwnedByLayout(bool* _dynamic_cast_ok, void* self, bool ownedByLayout);
};

QGraphicsWidget* QGraphicsWidget_new() {
	return new (std::nothrow) MiqtVirtualQGraphicsWidget();
}

QGraphicsWidget* QGraphicsWidget_new2(QGraphicsItem* parent) {
	return new (std::nothrow) MiqtVirtualQGraphicsWidget(parent);
}

QGraphicsWidget* QGraphicsWidget_new3(QGraphicsItem* parent, int wFlags) {
	return new (std::nothrow) MiqtVirtualQGraphicsWidget(parent, static_cast<Qt::WindowFlags>(wFlags));
}

void QGraphicsWidget_virtbase(QGraphicsWidget* src, QGraphicsObject** outptr_QGraphicsObject, QGraphicsLayoutItem** outptr_QGraphicsLayoutItem) {
	*outptr_QGraphicsObject = static_cast<QGraphicsObject*>(src);
	*outptr_QGraphicsLayoutItem = static_cast<QGraphicsLayoutItem*>(src);
}

QMetaObject* QGraphicsWidget_metaObject(const QGraphicsWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsWidget_metacast(QGraphicsWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsWidget_tr(const char* s) {
	QString _ret = QGraphicsWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsWidget_trUtf8(const char* s) {
	QString _ret = QGraphicsWidget::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QGraphicsLayout* QGraphicsWidget_layout(const QGraphicsWidget* self) {
	return self->layout();
}

void QGraphicsWidget_setLayout(QGraphicsWidget* self, QGraphicsLayout* layout) {
	self->setLayout(layout);
}

void QGraphicsWidget_adjustSize(QGraphicsWidget* self) {
	self->adjustSize();
}

int QGraphicsWidget_layoutDirection(const QGraphicsWidget* self) {
	Qt::LayoutDirection _ret = self->layoutDirection();
	return static_cast<int>(_ret);
}

void QGraphicsWidget_setLayoutDirection(QGraphicsWidget* self, int direction) {
	self->setLayoutDirection(static_cast<Qt::LayoutDirection>(direction));
}

void QGraphicsWidget_unsetLayoutDirection(QGraphicsWidget* self) {
	self->unsetLayoutDirection();
}

QStyle* QGraphicsWidget_style(const QGraphicsWidget* self) {
	return self->style();
}

void QGraphicsWidget_setStyle(QGraphicsWidget* self, QStyle* style) {
	self->setStyle(style);
}

QFont* QGraphicsWidget_font(const QGraphicsWidget* self) {
	return new QFont(self->font());
}

void QGraphicsWidget_setFont(QGraphicsWidget* self, QFont* font) {
	self->setFont(*font);
}

QPalette* QGraphicsWidget_palette(const QGraphicsWidget* self) {
	return new QPalette(self->palette());
}

void QGraphicsWidget_setPalette(QGraphicsWidget* self, QPalette* palette) {
	self->setPalette(*palette);
}

bool QGraphicsWidget_autoFillBackground(const QGraphicsWidget* self) {
	return self->autoFillBackground();
}

void QGraphicsWidget_setAutoFillBackground(QGraphicsWidget* self, bool enabled) {
	self->setAutoFillBackground(enabled);
}

void QGraphicsWidget_resize(QGraphicsWidget* self, QSizeF* size) {
	self->resize(*size);
}

void QGraphicsWidget_resize2(QGraphicsWidget* self, double w, double h) {
	self->resize(static_cast<qreal>(w), static_cast<qreal>(h));
}

QSizeF* QGraphicsWidget_size(const QGraphicsWidget* self) {
	return new QSizeF(self->size());
}

void QGraphicsWidget_setGeometry(QGraphicsWidget* self, QRectF* rect) {
	self->setGeometry(*rect);
}

void QGraphicsWidget_setGeometry2(QGraphicsWidget* self, double x, double y, double w, double h) {
	self->setGeometry(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QRectF* QGraphicsWidget_rect(const QGraphicsWidget* self) {
	return new QRectF(self->rect());
}

void QGraphicsWidget_setContentsMargins(QGraphicsWidget* self, double left, double top, double right, double bottom) {
	self->setContentsMargins(static_cast<qreal>(left), static_cast<qreal>(top), static_cast<qreal>(right), static_cast<qreal>(bottom));
}

void QGraphicsWidget_setContentsMarginsWithMargins(QGraphicsWidget* self, QMarginsF* margins) {
	self->setContentsMargins(*margins);
}

void QGraphicsWidget_getContentsMargins(const QGraphicsWidget* self, double* left, double* top, double* right, double* bottom) {
	self->getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
}

void QGraphicsWidget_setWindowFrameMargins(QGraphicsWidget* self, double left, double top, double right, double bottom) {
	self->setWindowFrameMargins(static_cast<qreal>(left), static_cast<qreal>(top), static_cast<qreal>(right), static_cast<qreal>(bottom));
}

void QGraphicsWidget_setWindowFrameMarginsWithMargins(QGraphicsWidget* self, QMarginsF* margins) {
	self->setWindowFrameMargins(*margins);
}

void QGraphicsWidget_getWindowFrameMargins(const QGraphicsWidget* self, double* left, double* top, double* right, double* bottom) {
	self->getWindowFrameMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
}

void QGraphicsWidget_unsetWindowFrameMargins(QGraphicsWidget* self) {
	self->unsetWindowFrameMargins();
}

QRectF* QGraphicsWidget_windowFrameGeometry(const QGraphicsWidget* self) {
	return new QRectF(self->windowFrameGeometry());
}

QRectF* QGraphicsWidget_windowFrameRect(const QGraphicsWidget* self) {
	return new QRectF(self->windowFrameRect());
}

int QGraphicsWidget_windowFlags(const QGraphicsWidget* self) {
	Qt::WindowFlags _ret = self->windowFlags();
	return static_cast<int>(_ret);
}

int QGraphicsWidget_windowType(const QGraphicsWidget* self) {
	Qt::WindowType _ret = self->windowType();
	return static_cast<int>(_ret);
}

void QGraphicsWidget_setWindowFlags(QGraphicsWidget* self, int wFlags) {
	self->setWindowFlags(static_cast<Qt::WindowFlags>(wFlags));
}

bool QGraphicsWidget_isActiveWindow(const QGraphicsWidget* self) {
	return self->isActiveWindow();
}

void QGraphicsWidget_setWindowTitle(QGraphicsWidget* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->setWindowTitle(title_QString);
}

struct miqt_string QGraphicsWidget_windowTitle(const QGraphicsWidget* self) {
	QString _ret = self->windowTitle();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QGraphicsWidget_focusPolicy(const QGraphicsWidget* self) {
	Qt::FocusPolicy _ret = self->focusPolicy();
	return static_cast<int>(_ret);
}

void QGraphicsWidget_setFocusPolicy(QGraphicsWidget* self, int policy) {
	self->setFocusPolicy(static_cast<Qt::FocusPolicy>(policy));
}

void QGraphicsWidget_setTabOrder(QGraphicsWidget* first, QGraphicsWidget* second) {
	QGraphicsWidget::setTabOrder(first, second);
}

QGraphicsWidget* QGraphicsWidget_focusWidget(const QGraphicsWidget* self) {
	return self->focusWidget();
}

int QGraphicsWidget_grabShortcut(QGraphicsWidget* self, QKeySequence* sequence) {
	return self->grabShortcut(*sequence);
}

void QGraphicsWidget_releaseShortcut(QGraphicsWidget* self, int id) {
	self->releaseShortcut(static_cast<int>(id));
}

void QGraphicsWidget_setShortcutEnabled(QGraphicsWidget* self, int id) {
	self->setShortcutEnabled(static_cast<int>(id));
}

void QGraphicsWidget_setShortcutAutoRepeat(QGraphicsWidget* self, int id) {
	self->setShortcutAutoRepeat(static_cast<int>(id));
}

void QGraphicsWidget_addAction(QGraphicsWidget* self, QAction* action) {
	self->addAction(action);
}

void QGraphicsWidget_addActions(QGraphicsWidget* self, struct miqt_array /* of QAction* */  actions) {
	QList<QAction *> actions_QList;
	actions_QList.reserve(actions.len);
	QAction** actions_arr = static_cast<QAction**>(actions.data);
	for(size_t i = 0; i < actions.len; ++i) {
		actions_QList.push_back(actions_arr[i]);
	}
	self->addActions(actions_QList);
}

void QGraphicsWidget_insertActions(QGraphicsWidget* self, QAction* before, struct miqt_array /* of QAction* */  actions) {
	QList<QAction *> actions_QList;
	actions_QList.reserve(actions.len);
	QAction** actions_arr = static_cast<QAction**>(actions.data);
	for(size_t i = 0; i < actions.len; ++i) {
		actions_QList.push_back(actions_arr[i]);
	}
	self->insertActions(before, actions_QList);
}

void QGraphicsWidget_insertAction(QGraphicsWidget* self, QAction* before, QAction* action) {
	self->insertAction(before, action);
}

void QGraphicsWidget_removeAction(QGraphicsWidget* self, QAction* action) {
	self->removeAction(action);
}

struct miqt_array /* of QAction* */  QGraphicsWidget_actions(const QGraphicsWidget* self) {
	QList<QAction *> _ret = self->actions();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QGraphicsWidget_setAttribute(QGraphicsWidget* self, int attribute) {
	self->setAttribute(static_cast<Qt::WidgetAttribute>(attribute));
}

bool QGraphicsWidget_testAttribute(const QGraphicsWidget* self, int attribute) {
	return self->testAttribute(static_cast<Qt::WidgetAttribute>(attribute));
}

int QGraphicsWidget_type(const QGraphicsWidget* self) {
	return self->type();
}

void QGraphicsWidget_paint(QGraphicsWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

void QGraphicsWidget_paintWindowFrame(QGraphicsWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paintWindowFrame(painter, option, widget);
}

QRectF* QGraphicsWidget_boundingRect(const QGraphicsWidget* self) {
	return new QRectF(self->boundingRect());
}

QPainterPath* QGraphicsWidget_shape(const QGraphicsWidget* self) {
	return new QPainterPath(self->shape());
}

void QGraphicsWidget_geometryChanged(QGraphicsWidget* self) {
	self->geometryChanged();
}

void* QGraphicsWidget_connect_geometryChanged(QGraphicsWidget* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget>>(slot);
	return new QMetaObject::Connection(QGraphicsWidget::connect(self, static_cast<void (QGraphicsWidget::*)()>(&QGraphicsWidget::geometryChanged), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QGraphicsWidget_geometryChanged(slot);
	}));
}

void QGraphicsWidget_layoutChanged(QGraphicsWidget* self) {
	self->layoutChanged();
}

void* QGraphicsWidget_connect_layoutChanged(QGraphicsWidget* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget>>(slot);
	return new QMetaObject::Connection(QGraphicsWidget::connect(self, static_cast<void (QGraphicsWidget::*)()>(&QGraphicsWidget::layoutChanged), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QGraphicsWidget_layoutChanged(slot);
	}));
}

bool QGraphicsWidget_close(QGraphicsWidget* self) {
	return self->close();
}

struct miqt_string QGraphicsWidget_tr2(const char* s, const char* c) {
	QString _ret = QGraphicsWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsWidget_tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsWidget_trUtf82(const char* s, const char* c) {
	QString _ret = QGraphicsWidget::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsWidget_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QGraphicsWidget::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QGraphicsWidget_grabShortcut2(QGraphicsWidget* self, QKeySequence* sequence, int context) {
	return self->grabShortcut(*sequence, static_cast<Qt::ShortcutContext>(context));
}

void QGraphicsWidget_setShortcutEnabled2(QGraphicsWidget* self, int id, bool enabled) {
	self->setShortcutEnabled(static_cast<int>(id), enabled);
}

void QGraphicsWidget_setShortcutAutoRepeat2(QGraphicsWidget* self, int id, bool enabled) {
	self->setShortcutAutoRepeat(static_cast<int>(id), enabled);
}

void QGraphicsWidget_setAttribute2(QGraphicsWidget* self, int attribute, bool on) {
	self->setAttribute(static_cast<Qt::WidgetAttribute>(attribute), on);
}

bool QGraphicsWidget_override_virtual_setGeometry(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setGeometry = std::move(slot_handle);
	return true;
}

void QGraphicsWidget_virtualbase_setGeometry(void* self, QRectF* rect) {
	static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::setGeometry(*rect);
}

bool QGraphicsWidget_override_virtual_getContentsMargins(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__getContentsMargins = std::move(slot_handle);
	return true;
}

void QGraphicsWidget_virtualbase_getContentsMargins(const void* self, double* left, double* top, double* right, double* bottom) {
	static_cast<const MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
}

bool QGraphicsWidget_override_virtual_type(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__type = std::move(slot_handle);
	return true;
}

int QGraphicsWidget_virtualbase_type(const void* self) {
	return static_cast<const MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::type();
}

bool QGraphicsWidget_override_virtual_paint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paint = std::move(slot_handle);
	return true;
}

void QGraphicsWidget_virtualbase_paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::paint(painter, option, widget);
}

bool QGraphicsWidget_override_virtual_paintWindowFrame(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintWindowFrame = std::move(slot_handle);
	return true;
}

void QGraphicsWidget_virtualbase_paintWindowFrame(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::paintWindowFrame(painter, option, widget);
}

bool QGraphicsWidget_override_virtual_boundingRect(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__boundingRect = std::move(slot_handle);
	return true;
}

QRectF* QGraphicsWidget_virtualbase_boundingRect(const void* self) {
	return new QRectF(static_cast<const MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::boundingRect());
}

bool QGraphicsWidget_override_virtual_shape(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__shape = std::move(slot_handle);
	return true;
}

QPainterPath* QGraphicsWidget_virtualbase_shape(const void* self) {
	return new QPainterPath(static_cast<const MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::shape());
}

bool QGraphicsWidget_override_virtual_initStyleOption(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initStyleOption = std::move(slot_handle);
	return true;
}

void QGraphicsWidget_virtualbase_initStyleOption(const void* self, QStyleOption* option) {
	static_cast<const MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::initStyleOption(option);
}

bool QGraphicsWidget_override_virtual_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	return true;
}

QSizeF* QGraphicsWidget_virtualbase_sizeHint(const void* self, int which, QSizeF* constraint) {
	return new QSizeF(static_cast<const MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
}

bool QGraphicsWidget_override_virtual_updateGeometry(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateGeometry = std::move(slot_handle);
	return true;
}

void QGraphicsWidget_virtualbase_updateGeometry(void* self) {
	static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::updateGeometry();
}

bool QGraphicsWidget_override_virtual_itemChange(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__itemChange = std::move(slot_handle);
	return true;
}

QVariant* QGraphicsWidget_virtualbase_itemChange(void* self, int change, QVariant* value) {
	return new QVariant(static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::itemChange(static_cast<MiqtVirtualQGraphicsWidget::GraphicsItemChange>(change), *value));
}

bool QGraphicsWidget_override_virtual_propertyChange(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__propertyChange = std::move(slot_handle);
	return true;
}

QVariant* QGraphicsWidget_virtualbase_propertyChange(void* self, struct miqt_string propertyName, QVariant* value) {
	QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);
	return new QVariant(static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::propertyChange(propertyName_QString, *value));
}

bool QGraphicsWidget_override_virtual_sceneEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sceneEvent = std::move(slot_handle);
	return true;
}

bool QGraphicsWidget_virtualbase_sceneEvent(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::sceneEvent(event);
}

bool QGraphicsWidget_override_virtual_windowFrameEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__windowFrameEvent = std::move(slot_handle);
	return true;
}

bool QGraphicsWidget_virtualbase_windowFrameEvent(void* self, QEvent* e) {
	return static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::windowFrameEvent(e);
}

bool QGraphicsWidget_override_virtual_windowFrameSectionAt(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__windowFrameSectionAt = std::move(slot_handle);
	return true;
}

int QGraphicsWidget_virtualbase_windowFrameSectionAt(const void* self, QPointF* pos) {
	Qt::WindowFrameSection _ret = static_cast<const MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::windowFrameSectionAt(*pos);
	return static_cast<int>(_ret);
}

bool QGraphicsWidget_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QGraphicsWidget_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::event(event);
}

bool QGraphicsWidget_override_virtual_changeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWidget_virtualbase_changeEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::changeEvent(event);
}

bool QGraphicsWidget_override_virtual_closeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWidget_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::closeEvent(event);
}

bool QGraphicsWidget_override_virtual_focusInEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::focusInEvent(event);
}

bool QGraphicsWidget_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = std::move(slot_handle);
	return true;
}

bool QGraphicsWidget_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::focusNextPrevChild(next);
}

bool QGraphicsWidget_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::focusOutEvent(event);
}

bool QGraphicsWidget_override_virtual_hideEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWidget_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::hideEvent(event);
}

bool QGraphicsWidget_override_virtual_moveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWidget_virtualbase_moveEvent(void* self, QGraphicsSceneMoveEvent* event) {
	static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::moveEvent(event);
}

bool QGraphicsWidget_override_virtual_polishEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__polishEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWidget_virtualbase_polishEvent(void* self) {
	static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::polishEvent();
}

bool QGraphicsWidget_override_virtual_resizeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWidget_virtualbase_resizeEvent(void* self, QGraphicsSceneResizeEvent* event) {
	static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::resizeEvent(event);
}

bool QGraphicsWidget_override_virtual_showEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWidget_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::showEvent(event);
}

bool QGraphicsWidget_override_virtual_hoverMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hoverMoveEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWidget_virtualbase_hoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::hoverMoveEvent(event);
}

bool QGraphicsWidget_override_virtual_hoverLeaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hoverLeaveEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWidget_virtualbase_hoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::hoverLeaveEvent(event);
}

bool QGraphicsWidget_override_virtual_grabMouseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__grabMouseEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWidget_virtualbase_grabMouseEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::grabMouseEvent(event);
}

bool QGraphicsWidget_override_virtual_ungrabMouseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__ungrabMouseEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWidget_virtualbase_ungrabMouseEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::ungrabMouseEvent(event);
}

bool QGraphicsWidget_override_virtual_grabKeyboardEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__grabKeyboardEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWidget_virtualbase_grabKeyboardEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::grabKeyboardEvent(event);
}

bool QGraphicsWidget_override_virtual_ungrabKeyboardEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__ungrabKeyboardEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWidget_virtualbase_ungrabKeyboardEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::ungrabKeyboardEvent(event);
}

bool QGraphicsWidget_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QGraphicsWidget_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::eventFilter(watched, event);
}

bool QGraphicsWidget_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWidget_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::timerEvent(event);
}

bool QGraphicsWidget_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWidget_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::childEvent(event);
}

bool QGraphicsWidget_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWidget_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::customEvent(event);
}

bool QGraphicsWidget_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QGraphicsWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::connectNotify(*signal);
}

bool QGraphicsWidget_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QGraphicsWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::disconnectNotify(*signal);
}

bool QGraphicsWidget_override_virtual_advance(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__advance = std::move(slot_handle);
	return true;
}

void QGraphicsWidget_virtualbase_advance(void* self, int phase) {
	static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::advance(static_cast<int>(phase));
}

bool QGraphicsWidget_override_virtual_contains(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contains = std::move(slot_handle);
	return true;
}

bool QGraphicsWidget_virtualbase_contains(const void* self, QPointF* point) {
	return static_cast<const MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::contains(*point);
}

bool QGraphicsWidget_override_virtual_collidesWithItem(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__collidesWithItem = std::move(slot_handle);
	return true;
}

bool QGraphicsWidget_virtualbase_collidesWithItem(const void* self, QGraphicsItem* other, int mode) {
	return static_cast<const MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

bool QGraphicsWidget_override_virtual_collidesWithPath(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__collidesWithPath = std::move(slot_handle);
	return true;
}

bool QGraphicsWidget_virtualbase_collidesWithPath(const void* self, QPainterPath* path, int mode) {
	return static_cast<const MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

bool QGraphicsWidget_override_virtual_isObscuredBy(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isObscuredBy = std::move(slot_handle);
	return true;
}

bool QGraphicsWidget_virtualbase_isObscuredBy(const void* self, QGraphicsItem* item) {
	return static_cast<const MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::isObscuredBy(item);
}

bool QGraphicsWidget_override_virtual_opaqueArea(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__opaqueArea = std::move(slot_handle);
	return true;
}

QPainterPath* QGraphicsWidget_virtualbase_opaqueArea(const void* self) {
	return new QPainterPath(static_cast<const MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::opaqueArea());
}

bool QGraphicsWidget_override_virtual_sceneEventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sceneEventFilter = std::move(slot_handle);
	return true;
}

bool QGraphicsWidget_virtualbase_sceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event) {
	return static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::sceneEventFilter(watched, event);
}

bool QGraphicsWidget_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWidget_virtualbase_contextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event) {
	static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::contextMenuEvent(event);
}

bool QGraphicsWidget_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWidget_virtualbase_dragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::dragEnterEvent(event);
}

bool QGraphicsWidget_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWidget_virtualbase_dragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::dragLeaveEvent(event);
}

bool QGraphicsWidget_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWidget_virtualbase_dragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::dragMoveEvent(event);
}

bool QGraphicsWidget_override_virtual_dropEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWidget_virtualbase_dropEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::dropEvent(event);
}

bool QGraphicsWidget_override_virtual_hoverEnterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hoverEnterEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWidget_virtualbase_hoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event) {
	static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::hoverEnterEvent(event);
}

bool QGraphicsWidget_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::keyPressEvent(event);
}

bool QGraphicsWidget_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::keyReleaseEvent(event);
}

bool QGraphicsWidget_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWidget_virtualbase_mousePressEvent(void* self, QGraphicsSceneMouseEvent* event) {
	static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::mousePressEvent(event);
}

bool QGraphicsWidget_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWidget_virtualbase_mouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event) {
	static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::mouseMoveEvent(event);
}

bool QGraphicsWidget_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWidget_virtualbase_mouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event) {
	static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::mouseReleaseEvent(event);
}

bool QGraphicsWidget_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWidget_virtualbase_mouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event) {
	static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::mouseDoubleClickEvent(event);
}

bool QGraphicsWidget_override_virtual_wheelEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWidget_virtualbase_wheelEvent(void* self, QGraphicsSceneWheelEvent* event) {
	static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::wheelEvent(event);
}

bool QGraphicsWidget_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {
	static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::inputMethodEvent(event);
}

bool QGraphicsWidget_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	return true;
}

QVariant* QGraphicsWidget_virtualbase_inputMethodQuery(const void* self, int query) {
	return new QVariant(static_cast<const MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

bool QGraphicsWidget_override_virtual_supportsExtension(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__supportsExtension = std::move(slot_handle);
	return true;
}

bool QGraphicsWidget_virtualbase_supportsExtension(const void* self, int extension) {
	return static_cast<const MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::supportsExtension(static_cast<MiqtVirtualQGraphicsWidget::Extension>(extension));
}

bool QGraphicsWidget_override_virtual_setExtension(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setExtension = std::move(slot_handle);
	return true;
}

void QGraphicsWidget_virtualbase_setExtension(void* self, int extension, QVariant* variant) {
	static_cast<MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::setExtension(static_cast<MiqtVirtualQGraphicsWidget::Extension>(extension), *variant);
}

bool QGraphicsWidget_override_virtual_extension(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWidget> slot_handle(slot);
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__extension = std::move(slot_handle);
	return true;
}

QVariant* QGraphicsWidget_virtualbase_extension(const void* self, QVariant* variant) {
	return new QVariant(static_cast<const MiqtVirtualQGraphicsWidget*>(self)->QGraphicsWidget::extension(*variant));
}

void QGraphicsWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

QObject* QGraphicsWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QGraphicsWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QGraphicsWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QGraphicsWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QGraphicsWidget_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->addToIndex();
}

void QGraphicsWidget_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->removeFromIndex();
}

void QGraphicsWidget_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->prepareGeometryChange();
}

void QGraphicsWidget_protectedbase_setGraphicsItem(bool* _dynamic_cast_ok, void* self, QGraphicsItem* item) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setGraphicsItem(item);
}

void QGraphicsWidget_protectedbase_setOwnedByLayout(bool* _dynamic_cast_ok, void* self, bool ownedByLayout) {
	MiqtVirtualQGraphicsWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsWidget*>( (QGraphicsWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setOwnedByLayout(ownedByLayout);
}

void QGraphicsWidget_delete(QGraphicsWidget* self) {
	delete self;
}

