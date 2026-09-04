#include <memory>
#include <utility>
#include <QChildEvent>
#include <QCloseEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QGraphicsItem>
#include <QGraphicsLayoutItem>
#include <QGraphicsObject>
#include <QGraphicsProxyWidget>
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
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPainter>
#include <QPainterPath>
#include <QPointF>
#include <QRectF>
#include <QShowEvent>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOption>
#include <QStyleOptionGraphicsItem>
#include <QTimerEvent>
#include <QVariant>
#include <QWidget>
#include <qgraphicsproxywidget.h>
#include "gen_qgraphicsproxywidget.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QGraphicsProxyWidget(intptr_t);
void miqt_exec_callback_QGraphicsProxyWidget_setGeometry(QGraphicsProxyWidget*, intptr_t, QRectF*);
void miqt_exec_callback_QGraphicsProxyWidget_paint(QGraphicsProxyWidget*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
int miqt_exec_callback_QGraphicsProxyWidget_type(const QGraphicsProxyWidget*, intptr_t);
QVariant* miqt_exec_callback_QGraphicsProxyWidget_itemChange(QGraphicsProxyWidget*, intptr_t, int, QVariant*);
bool miqt_exec_callback_QGraphicsProxyWidget_event(QGraphicsProxyWidget*, intptr_t, QEvent*);
bool miqt_exec_callback_QGraphicsProxyWidget_eventFilter(QGraphicsProxyWidget*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_showEvent(QGraphicsProxyWidget*, intptr_t, QShowEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_hideEvent(QGraphicsProxyWidget*, intptr_t, QHideEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_contextMenuEvent(QGraphicsProxyWidget*, intptr_t, QGraphicsSceneContextMenuEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_dragEnterEvent(QGraphicsProxyWidget*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_dragLeaveEvent(QGraphicsProxyWidget*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_dragMoveEvent(QGraphicsProxyWidget*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_dropEvent(QGraphicsProxyWidget*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_hoverEnterEvent(QGraphicsProxyWidget*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_hoverLeaveEvent(QGraphicsProxyWidget*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_hoverMoveEvent(QGraphicsProxyWidget*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_grabMouseEvent(QGraphicsProxyWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_ungrabMouseEvent(QGraphicsProxyWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_mouseMoveEvent(QGraphicsProxyWidget*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_mousePressEvent(QGraphicsProxyWidget*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_mouseReleaseEvent(QGraphicsProxyWidget*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_mouseDoubleClickEvent(QGraphicsProxyWidget*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_wheelEvent(QGraphicsProxyWidget*, intptr_t, QGraphicsSceneWheelEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_keyPressEvent(QGraphicsProxyWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_keyReleaseEvent(QGraphicsProxyWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_focusInEvent(QGraphicsProxyWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_focusOutEvent(QGraphicsProxyWidget*, intptr_t, QFocusEvent*);
bool miqt_exec_callback_QGraphicsProxyWidget_focusNextPrevChild(QGraphicsProxyWidget*, intptr_t, bool);
QVariant* miqt_exec_callback_QGraphicsProxyWidget_inputMethodQuery(const QGraphicsProxyWidget*, intptr_t, int);
void miqt_exec_callback_QGraphicsProxyWidget_inputMethodEvent(QGraphicsProxyWidget*, intptr_t, QInputMethodEvent*);
QSizeF* miqt_exec_callback_QGraphicsProxyWidget_sizeHint(const QGraphicsProxyWidget*, intptr_t, int, QSizeF*);
void miqt_exec_callback_QGraphicsProxyWidget_resizeEvent(QGraphicsProxyWidget*, intptr_t, QGraphicsSceneResizeEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_getContentsMargins(const QGraphicsProxyWidget*, intptr_t, double*, double*, double*, double*);
void miqt_exec_callback_QGraphicsProxyWidget_paintWindowFrame(QGraphicsProxyWidget*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
QRectF* miqt_exec_callback_QGraphicsProxyWidget_boundingRect(const QGraphicsProxyWidget*, intptr_t);
QPainterPath* miqt_exec_callback_QGraphicsProxyWidget_shape(const QGraphicsProxyWidget*, intptr_t);
void miqt_exec_callback_QGraphicsProxyWidget_initStyleOption(const QGraphicsProxyWidget*, intptr_t, QStyleOption*);
void miqt_exec_callback_QGraphicsProxyWidget_updateGeometry(QGraphicsProxyWidget*, intptr_t);
QVariant* miqt_exec_callback_QGraphicsProxyWidget_propertyChange(QGraphicsProxyWidget*, intptr_t, struct miqt_string, QVariant*);
bool miqt_exec_callback_QGraphicsProxyWidget_sceneEvent(QGraphicsProxyWidget*, intptr_t, QEvent*);
bool miqt_exec_callback_QGraphicsProxyWidget_windowFrameEvent(QGraphicsProxyWidget*, intptr_t, QEvent*);
int miqt_exec_callback_QGraphicsProxyWidget_windowFrameSectionAt(const QGraphicsProxyWidget*, intptr_t, QPointF*);
void miqt_exec_callback_QGraphicsProxyWidget_changeEvent(QGraphicsProxyWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_closeEvent(QGraphicsProxyWidget*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_moveEvent(QGraphicsProxyWidget*, intptr_t, QGraphicsSceneMoveEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_polishEvent(QGraphicsProxyWidget*, intptr_t);
void miqt_exec_callback_QGraphicsProxyWidget_grabKeyboardEvent(QGraphicsProxyWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_ungrabKeyboardEvent(QGraphicsProxyWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_timerEvent(QGraphicsProxyWidget*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_childEvent(QGraphicsProxyWidget*, intptr_t, QChildEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_customEvent(QGraphicsProxyWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsProxyWidget_connectNotify(QGraphicsProxyWidget*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsProxyWidget_disconnectNotify(QGraphicsProxyWidget*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsProxyWidget_advance(QGraphicsProxyWidget*, intptr_t, int);
bool miqt_exec_callback_QGraphicsProxyWidget_contains(const QGraphicsProxyWidget*, intptr_t, QPointF*);
bool miqt_exec_callback_QGraphicsProxyWidget_collidesWithItem(const QGraphicsProxyWidget*, intptr_t, QGraphicsItem*, int);
bool miqt_exec_callback_QGraphicsProxyWidget_collidesWithPath(const QGraphicsProxyWidget*, intptr_t, QPainterPath*, int);
bool miqt_exec_callback_QGraphicsProxyWidget_isObscuredBy(const QGraphicsProxyWidget*, intptr_t, QGraphicsItem*);
QPainterPath* miqt_exec_callback_QGraphicsProxyWidget_opaqueArea(const QGraphicsProxyWidget*, intptr_t);
bool miqt_exec_callback_QGraphicsProxyWidget_sceneEventFilter(QGraphicsProxyWidget*, intptr_t, QGraphicsItem*, QEvent*);
bool miqt_exec_callback_QGraphicsProxyWidget_supportsExtension(const QGraphicsProxyWidget*, intptr_t, int);
void miqt_exec_callback_QGraphicsProxyWidget_setExtension(QGraphicsProxyWidget*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QGraphicsProxyWidget_extension(const QGraphicsProxyWidget*, intptr_t, QVariant*);
bool miqt_exec_callback_QGraphicsProxyWidget_isEmpty(const QGraphicsProxyWidget*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGraphicsProxyWidget final : public QGraphicsProxyWidget {
public:

	MiqtVirtualQGraphicsProxyWidget(): QGraphicsProxyWidget() {}
	MiqtVirtualQGraphicsProxyWidget(QGraphicsItem* parent): QGraphicsProxyWidget(parent) {}
	MiqtVirtualQGraphicsProxyWidget(QGraphicsItem* parent, Qt::WindowFlags wFlags): QGraphicsProxyWidget(parent, wFlags) {}

	virtual ~MiqtVirtualQGraphicsProxyWidget() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__setGeometry;

	// Subclass to allow providing a Go implementation
	virtual void setGeometry(const QRectF& rect) override {
		if (!handle__setGeometry) {
			QGraphicsProxyWidget::setGeometry(rect);
			return;
		}

		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&rect_ret);
		miqt_exec_callback_QGraphicsProxyWidget_setGeometry(this, handle__setGeometry.value(), sigval1);

	}

	friend void QGraphicsProxyWidget_virtualbase_setGeometry(void* self, QRectF* rect);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__paint;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (!handle__paint) {
			QGraphicsProxyWidget::paint(painter, option, widget);
			return;
		}

		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;
		miqt_exec_callback_QGraphicsProxyWidget_paint(this, handle__paint.value(), sigval1, sigval2, sigval3);

	}

	friend void QGraphicsProxyWidget_virtualbase_paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__type;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (!handle__type) {
			return QGraphicsProxyWidget::type();
		}

		int callback_return_value = miqt_exec_callback_QGraphicsProxyWidget_type(this, handle__type.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QGraphicsProxyWidget_virtualbase_type(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__itemChange;
	bool owns_return__itemChange = false;

	// Subclass to allow providing a Go implementation
	virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
		if (!handle__itemChange) {
			return QGraphicsProxyWidget::itemChange(change, value);
		}

		QGraphicsItem::GraphicsItemChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		QVariant* callback_return_value = miqt_exec_callback_QGraphicsProxyWidget_itemChange(this, handle__itemChange.value(), sigval1, sigval2);
		std::unique_ptr<QVariant> callback_return_value_owner;
		if (owns_return__itemChange) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QVariant* QGraphicsProxyWidget_virtualbase_itemChange(void* self, int change, QVariant* value);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QGraphicsProxyWidget::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QGraphicsProxyWidget_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QGraphicsProxyWidget_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (!handle__eventFilter) {
			return QGraphicsProxyWidget::eventFilter(object, event);
		}

		QObject* sigval1 = object;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QGraphicsProxyWidget_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QGraphicsProxyWidget_virtualbase_eventFilter(void* self, QObject* object, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__showEvent;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (!handle__showEvent) {
			QGraphicsProxyWidget::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsProxyWidget_showEvent(this, handle__showEvent.value(), sigval1);

	}

	friend void QGraphicsProxyWidget_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__hideEvent;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (!handle__hideEvent) {
			QGraphicsProxyWidget::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsProxyWidget_hideEvent(this, handle__hideEvent.value(), sigval1);

	}

	friend void QGraphicsProxyWidget_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__contextMenuEvent;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (!handle__contextMenuEvent) {
			QGraphicsProxyWidget::contextMenuEvent(event);
			return;
		}

		QGraphicsSceneContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsProxyWidget_contextMenuEvent(this, handle__contextMenuEvent.value(), sigval1);

	}

	friend void QGraphicsProxyWidget_virtualbase_contextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__dragEnterEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (!handle__dragEnterEvent) {
			QGraphicsProxyWidget::dragEnterEvent(event);
			return;
		}

		QGraphicsSceneDragDropEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsProxyWidget_dragEnterEvent(this, handle__dragEnterEvent.value(), sigval1);

	}

	friend void QGraphicsProxyWidget_virtualbase_dragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__dragLeaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (!handle__dragLeaveEvent) {
			QGraphicsProxyWidget::dragLeaveEvent(event);
			return;
		}

		QGraphicsSceneDragDropEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsProxyWidget_dragLeaveEvent(this, handle__dragLeaveEvent.value(), sigval1);

	}

	friend void QGraphicsProxyWidget_virtualbase_dragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__dragMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (!handle__dragMoveEvent) {
			QGraphicsProxyWidget::dragMoveEvent(event);
			return;
		}

		QGraphicsSceneDragDropEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsProxyWidget_dragMoveEvent(this, handle__dragMoveEvent.value(), sigval1);

	}

	friend void QGraphicsProxyWidget_virtualbase_dragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__dropEvent;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (!handle__dropEvent) {
			QGraphicsProxyWidget::dropEvent(event);
			return;
		}

		QGraphicsSceneDragDropEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsProxyWidget_dropEvent(this, handle__dropEvent.value(), sigval1);

	}

	friend void QGraphicsProxyWidget_virtualbase_dropEvent(void* self, QGraphicsSceneDragDropEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__hoverEnterEvent;

	// Subclass to allow providing a Go implementation
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (!handle__hoverEnterEvent) {
			QGraphicsProxyWidget::hoverEnterEvent(event);
			return;
		}

		QGraphicsSceneHoverEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsProxyWidget_hoverEnterEvent(this, handle__hoverEnterEvent.value(), sigval1);

	}

	friend void QGraphicsProxyWidget_virtualbase_hoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__hoverLeaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (!handle__hoverLeaveEvent) {
			QGraphicsProxyWidget::hoverLeaveEvent(event);
			return;
		}

		QGraphicsSceneHoverEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsProxyWidget_hoverLeaveEvent(this, handle__hoverLeaveEvent.value(), sigval1);

	}

	friend void QGraphicsProxyWidget_virtualbase_hoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__hoverMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (!handle__hoverMoveEvent) {
			QGraphicsProxyWidget::hoverMoveEvent(event);
			return;
		}

		QGraphicsSceneHoverEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsProxyWidget_hoverMoveEvent(this, handle__hoverMoveEvent.value(), sigval1);

	}

	friend void QGraphicsProxyWidget_virtualbase_hoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__grabMouseEvent;

	// Subclass to allow providing a Go implementation
	virtual void grabMouseEvent(QEvent* event) override {
		if (!handle__grabMouseEvent) {
			QGraphicsProxyWidget::grabMouseEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsProxyWidget_grabMouseEvent(this, handle__grabMouseEvent.value(), sigval1);

	}

	friend void QGraphicsProxyWidget_virtualbase_grabMouseEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__ungrabMouseEvent;

	// Subclass to allow providing a Go implementation
	virtual void ungrabMouseEvent(QEvent* event) override {
		if (!handle__ungrabMouseEvent) {
			QGraphicsProxyWidget::ungrabMouseEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsProxyWidget_ungrabMouseEvent(this, handle__ungrabMouseEvent.value(), sigval1);

	}

	friend void QGraphicsProxyWidget_virtualbase_ungrabMouseEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__mouseMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (!handle__mouseMoveEvent) {
			QGraphicsProxyWidget::mouseMoveEvent(event);
			return;
		}

		QGraphicsSceneMouseEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsProxyWidget_mouseMoveEvent(this, handle__mouseMoveEvent.value(), sigval1);

	}

	friend void QGraphicsProxyWidget_virtualbase_mouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__mousePressEvent;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (!handle__mousePressEvent) {
			QGraphicsProxyWidget::mousePressEvent(event);
			return;
		}

		QGraphicsSceneMouseEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsProxyWidget_mousePressEvent(this, handle__mousePressEvent.value(), sigval1);

	}

	friend void QGraphicsProxyWidget_virtualbase_mousePressEvent(void* self, QGraphicsSceneMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__mouseReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (!handle__mouseReleaseEvent) {
			QGraphicsProxyWidget::mouseReleaseEvent(event);
			return;
		}

		QGraphicsSceneMouseEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsProxyWidget_mouseReleaseEvent(this, handle__mouseReleaseEvent.value(), sigval1);

	}

	friend void QGraphicsProxyWidget_virtualbase_mouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__mouseDoubleClickEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (!handle__mouseDoubleClickEvent) {
			QGraphicsProxyWidget::mouseDoubleClickEvent(event);
			return;
		}

		QGraphicsSceneMouseEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsProxyWidget_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent.value(), sigval1);

	}

	friend void QGraphicsProxyWidget_virtualbase_mouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__wheelEvent;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (!handle__wheelEvent) {
			QGraphicsProxyWidget::wheelEvent(event);
			return;
		}

		QGraphicsSceneWheelEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsProxyWidget_wheelEvent(this, handle__wheelEvent.value(), sigval1);

	}

	friend void QGraphicsProxyWidget_virtualbase_wheelEvent(void* self, QGraphicsSceneWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__keyPressEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (!handle__keyPressEvent) {
			QGraphicsProxyWidget::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsProxyWidget_keyPressEvent(this, handle__keyPressEvent.value(), sigval1);

	}

	friend void QGraphicsProxyWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__keyReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (!handle__keyReleaseEvent) {
			QGraphicsProxyWidget::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsProxyWidget_keyReleaseEvent(this, handle__keyReleaseEvent.value(), sigval1);

	}

	friend void QGraphicsProxyWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__focusInEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (!handle__focusInEvent) {
			QGraphicsProxyWidget::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsProxyWidget_focusInEvent(this, handle__focusInEvent.value(), sigval1);

	}

	friend void QGraphicsProxyWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__focusOutEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (!handle__focusOutEvent) {
			QGraphicsProxyWidget::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsProxyWidget_focusOutEvent(this, handle__focusOutEvent.value(), sigval1);

	}

	friend void QGraphicsProxyWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__focusNextPrevChild;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (!handle__focusNextPrevChild) {
			return QGraphicsProxyWidget::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QGraphicsProxyWidget_focusNextPrevChild(this, handle__focusNextPrevChild.value(), sigval1);
		return callback_return_value;
	}

	friend bool QGraphicsProxyWidget_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__inputMethodQuery;
	bool owns_return__inputMethodQuery = false;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (!handle__inputMethodQuery) {
			return QGraphicsProxyWidget::inputMethodQuery(query);
		}

		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);
		QVariant* callback_return_value = miqt_exec_callback_QGraphicsProxyWidget_inputMethodQuery(this, handle__inputMethodQuery.value(), sigval1);
		std::unique_ptr<QVariant> callback_return_value_owner;
		if (owns_return__inputMethodQuery) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QVariant* QGraphicsProxyWidget_virtualbase_inputMethodQuery(const void* self, int query);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__inputMethodEvent;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (!handle__inputMethodEvent) {
			QGraphicsProxyWidget::inputMethodEvent(event);
			return;
		}

		QInputMethodEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsProxyWidget_inputMethodEvent(this, handle__inputMethodEvent.value(), sigval1);

	}

	friend void QGraphicsProxyWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__sizeHint;
	bool owns_return__sizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
		if (!handle__sizeHint) {
			return QGraphicsProxyWidget::sizeHint(which, constraint);
		}

		Qt::SizeHint which_ret = which;
		int sigval1 = static_cast<int>(which_ret);
		const QSizeF& constraint_ret = constraint;
		// Cast returned reference into pointer
		QSizeF* sigval2 = const_cast<QSizeF*>(&constraint_ret);
		QSizeF* callback_return_value = miqt_exec_callback_QGraphicsProxyWidget_sizeHint(this, handle__sizeHint.value(), sigval1, sigval2);
		std::unique_ptr<QSizeF> callback_return_value_owner;
		if (owns_return__sizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSizeF* QGraphicsProxyWidget_virtualbase_sizeHint(const void* self, int which, QSizeF* constraint);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__resizeEvent;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QGraphicsSceneResizeEvent* event) override {
		if (!handle__resizeEvent) {
			QGraphicsProxyWidget::resizeEvent(event);
			return;
		}

		QGraphicsSceneResizeEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsProxyWidget_resizeEvent(this, handle__resizeEvent.value(), sigval1);

	}

	friend void QGraphicsProxyWidget_virtualbase_resizeEvent(void* self, QGraphicsSceneResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__getContentsMargins;

	// Subclass to allow providing a Go implementation
	virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
		if (!handle__getContentsMargins) {
			QGraphicsProxyWidget::getContentsMargins(left, top, right, bottom);
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
		miqt_exec_callback_QGraphicsProxyWidget_getContentsMargins(this, handle__getContentsMargins.value(), sigval1, sigval2, sigval3, sigval4);

	}

	friend void QGraphicsProxyWidget_virtualbase_getContentsMargins(const void* self, double* left, double* top, double* right, double* bottom);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__paintWindowFrame;

	// Subclass to allow providing a Go implementation
	virtual void paintWindowFrame(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (!handle__paintWindowFrame) {
			QGraphicsProxyWidget::paintWindowFrame(painter, option, widget);
			return;
		}

		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;
		miqt_exec_callback_QGraphicsProxyWidget_paintWindowFrame(this, handle__paintWindowFrame.value(), sigval1, sigval2, sigval3);

	}

	friend void QGraphicsProxyWidget_virtualbase_paintWindowFrame(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__boundingRect;
	bool owns_return__boundingRect = false;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (!handle__boundingRect) {
			return QGraphicsProxyWidget::boundingRect();
		}

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsProxyWidget_boundingRect(this, handle__boundingRect.value());
		std::unique_ptr<QRectF> callback_return_value_owner;
		if (owns_return__boundingRect) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QRectF* QGraphicsProxyWidget_virtualbase_boundingRect(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__shape;
	bool owns_return__shape = false;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (!handle__shape) {
			return QGraphicsProxyWidget::shape();
		}

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsProxyWidget_shape(this, handle__shape.value());
		std::unique_ptr<QPainterPath> callback_return_value_owner;
		if (owns_return__shape) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QPainterPath* QGraphicsProxyWidget_virtualbase_shape(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__initStyleOption;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOption* option) const override {
		if (!handle__initStyleOption) {
			QGraphicsProxyWidget::initStyleOption(option);
			return;
		}

		QStyleOption* sigval1 = option;
		miqt_exec_callback_QGraphicsProxyWidget_initStyleOption(this, handle__initStyleOption.value(), sigval1);

	}

	friend void QGraphicsProxyWidget_virtualbase_initStyleOption(const void* self, QStyleOption* option);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__updateGeometry;

	// Subclass to allow providing a Go implementation
	virtual void updateGeometry() override {
		if (!handle__updateGeometry) {
			QGraphicsProxyWidget::updateGeometry();
			return;
		}

		miqt_exec_callback_QGraphicsProxyWidget_updateGeometry(this, handle__updateGeometry.value());

	}

	friend void QGraphicsProxyWidget_virtualbase_updateGeometry(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__propertyChange;
	bool owns_return__propertyChange = false;

	// Subclass to allow providing a Go implementation
	virtual QVariant propertyChange(const QString& propertyName, const QVariant& value) override {
		if (!handle__propertyChange) {
			return QGraphicsProxyWidget::propertyChange(propertyName, value);
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
		QVariant* callback_return_value = miqt_exec_callback_QGraphicsProxyWidget_propertyChange(this, handle__propertyChange.value(), sigval1, sigval2);
		std::unique_ptr<QVariant> callback_return_value_owner;
		if (owns_return__propertyChange) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QVariant* QGraphicsProxyWidget_virtualbase_propertyChange(void* self, struct miqt_string propertyName, QVariant* value);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__sceneEvent;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEvent(QEvent* event) override {
		if (!handle__sceneEvent) {
			return QGraphicsProxyWidget::sceneEvent(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QGraphicsProxyWidget_sceneEvent(this, handle__sceneEvent.value(), sigval1);
		return callback_return_value;
	}

	friend bool QGraphicsProxyWidget_virtualbase_sceneEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__windowFrameEvent;

	// Subclass to allow providing a Go implementation
	virtual bool windowFrameEvent(QEvent* e) override {
		if (!handle__windowFrameEvent) {
			return QGraphicsProxyWidget::windowFrameEvent(e);
		}

		QEvent* sigval1 = e;
		bool callback_return_value = miqt_exec_callback_QGraphicsProxyWidget_windowFrameEvent(this, handle__windowFrameEvent.value(), sigval1);
		return callback_return_value;
	}

	friend bool QGraphicsProxyWidget_virtualbase_windowFrameEvent(void* self, QEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__windowFrameSectionAt;

	// Subclass to allow providing a Go implementation
	virtual Qt::WindowFrameSection windowFrameSectionAt(const QPointF& pos) const override {
		if (!handle__windowFrameSectionAt) {
			return QGraphicsProxyWidget::windowFrameSectionAt(pos);
		}

		const QPointF& pos_ret = pos;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&pos_ret);
		int callback_return_value = miqt_exec_callback_QGraphicsProxyWidget_windowFrameSectionAt(this, handle__windowFrameSectionAt.value(), sigval1);
		return static_cast<Qt::WindowFrameSection>(callback_return_value);
	}

	friend int QGraphicsProxyWidget_virtualbase_windowFrameSectionAt(const void* self, QPointF* pos);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__changeEvent;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* event) override {
		if (!handle__changeEvent) {
			QGraphicsProxyWidget::changeEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsProxyWidget_changeEvent(this, handle__changeEvent.value(), sigval1);

	}

	friend void QGraphicsProxyWidget_virtualbase_changeEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__closeEvent;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (!handle__closeEvent) {
			QGraphicsProxyWidget::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsProxyWidget_closeEvent(this, handle__closeEvent.value(), sigval1);

	}

	friend void QGraphicsProxyWidget_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__moveEvent;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QGraphicsSceneMoveEvent* event) override {
		if (!handle__moveEvent) {
			QGraphicsProxyWidget::moveEvent(event);
			return;
		}

		QGraphicsSceneMoveEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsProxyWidget_moveEvent(this, handle__moveEvent.value(), sigval1);

	}

	friend void QGraphicsProxyWidget_virtualbase_moveEvent(void* self, QGraphicsSceneMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__polishEvent;

	// Subclass to allow providing a Go implementation
	virtual void polishEvent() override {
		if (!handle__polishEvent) {
			QGraphicsProxyWidget::polishEvent();
			return;
		}

		miqt_exec_callback_QGraphicsProxyWidget_polishEvent(this, handle__polishEvent.value());

	}

	friend void QGraphicsProxyWidget_virtualbase_polishEvent(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__grabKeyboardEvent;

	// Subclass to allow providing a Go implementation
	virtual void grabKeyboardEvent(QEvent* event) override {
		if (!handle__grabKeyboardEvent) {
			QGraphicsProxyWidget::grabKeyboardEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsProxyWidget_grabKeyboardEvent(this, handle__grabKeyboardEvent.value(), sigval1);

	}

	friend void QGraphicsProxyWidget_virtualbase_grabKeyboardEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__ungrabKeyboardEvent;

	// Subclass to allow providing a Go implementation
	virtual void ungrabKeyboardEvent(QEvent* event) override {
		if (!handle__ungrabKeyboardEvent) {
			QGraphicsProxyWidget::ungrabKeyboardEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsProxyWidget_ungrabKeyboardEvent(this, handle__ungrabKeyboardEvent.value(), sigval1);

	}

	friend void QGraphicsProxyWidget_virtualbase_ungrabKeyboardEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QGraphicsProxyWidget::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsProxyWidget_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QGraphicsProxyWidget_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QGraphicsProxyWidget::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsProxyWidget_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QGraphicsProxyWidget_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QGraphicsProxyWidget::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsProxyWidget_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QGraphicsProxyWidget_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QGraphicsProxyWidget::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QGraphicsProxyWidget_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QGraphicsProxyWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QGraphicsProxyWidget::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QGraphicsProxyWidget_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QGraphicsProxyWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__advance;

	// Subclass to allow providing a Go implementation
	virtual void advance(int phase) override {
		if (!handle__advance) {
			QGraphicsProxyWidget::advance(phase);
			return;
		}

		int sigval1 = phase;
		miqt_exec_callback_QGraphicsProxyWidget_advance(this, handle__advance.value(), sigval1);

	}

	friend void QGraphicsProxyWidget_virtualbase_advance(void* self, int phase);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__contains;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (!handle__contains) {
			return QGraphicsProxyWidget::contains(point);
		}

		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);
		bool callback_return_value = miqt_exec_callback_QGraphicsProxyWidget_contains(this, handle__contains.value(), sigval1);
		return callback_return_value;
	}

	friend bool QGraphicsProxyWidget_virtualbase_contains(const void* self, QPointF* point);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__collidesWithItem;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
		if (!handle__collidesWithItem) {
			return QGraphicsProxyWidget::collidesWithItem(other, mode);
		}

		QGraphicsItem* sigval1 = (QGraphicsItem*) other;
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);
		bool callback_return_value = miqt_exec_callback_QGraphicsProxyWidget_collidesWithItem(this, handle__collidesWithItem.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QGraphicsProxyWidget_virtualbase_collidesWithItem(const void* self, QGraphicsItem* other, int mode);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__collidesWithPath;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
		if (!handle__collidesWithPath) {
			return QGraphicsProxyWidget::collidesWithPath(path, mode);
		}

		const QPainterPath& path_ret = path;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&path_ret);
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);
		bool callback_return_value = miqt_exec_callback_QGraphicsProxyWidget_collidesWithPath(this, handle__collidesWithPath.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QGraphicsProxyWidget_virtualbase_collidesWithPath(const void* self, QPainterPath* path, int mode);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__isObscuredBy;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (!handle__isObscuredBy) {
			return QGraphicsProxyWidget::isObscuredBy(item);
		}

		QGraphicsItem* sigval1 = (QGraphicsItem*) item;
		bool callback_return_value = miqt_exec_callback_QGraphicsProxyWidget_isObscuredBy(this, handle__isObscuredBy.value(), sigval1);
		return callback_return_value;
	}

	friend bool QGraphicsProxyWidget_virtualbase_isObscuredBy(const void* self, QGraphicsItem* item);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__opaqueArea;
	bool owns_return__opaqueArea = false;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (!handle__opaqueArea) {
			return QGraphicsProxyWidget::opaqueArea();
		}

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsProxyWidget_opaqueArea(this, handle__opaqueArea.value());
		std::unique_ptr<QPainterPath> callback_return_value_owner;
		if (owns_return__opaqueArea) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QPainterPath* QGraphicsProxyWidget_virtualbase_opaqueArea(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__sceneEventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
		if (!handle__sceneEventFilter) {
			return QGraphicsProxyWidget::sceneEventFilter(watched, event);
		}

		QGraphicsItem* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QGraphicsProxyWidget_sceneEventFilter(this, handle__sceneEventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QGraphicsProxyWidget_virtualbase_sceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__supportsExtension;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (!handle__supportsExtension) {
			return QGraphicsProxyWidget::supportsExtension(extension);
		}

		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		bool callback_return_value = miqt_exec_callback_QGraphicsProxyWidget_supportsExtension(this, handle__supportsExtension.value(), sigval1);
		return callback_return_value;
	}

	friend bool QGraphicsProxyWidget_virtualbase_supportsExtension(const void* self, int extension);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__setExtension;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (!handle__setExtension) {
			QGraphicsProxyWidget::setExtension(extension, variant);
			return;
		}

		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);
		miqt_exec_callback_QGraphicsProxyWidget_setExtension(this, handle__setExtension.value(), sigval1, sigval2);

	}

	friend void QGraphicsProxyWidget_virtualbase_setExtension(void* self, int extension, QVariant* variant);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__extension;
	bool owns_return__extension = false;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (!handle__extension) {
			return QGraphicsProxyWidget::extension(variant);
		}

		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);
		QVariant* callback_return_value = miqt_exec_callback_QGraphicsProxyWidget_extension(this, handle__extension.value(), sigval1);
		std::unique_ptr<QVariant> callback_return_value_owner;
		if (owns_return__extension) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QVariant* QGraphicsProxyWidget_virtualbase_extension(const void* self, QVariant* variant);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> handle__isEmpty;

	// Subclass to allow providing a Go implementation
	virtual bool isEmpty() const override {
		if (!handle__isEmpty) {
			return QGraphicsProxyWidget::isEmpty();
		}

		bool callback_return_value = miqt_exec_callback_QGraphicsProxyWidget_isEmpty(this, handle__isEmpty.value());
		return callback_return_value;
	}

	friend bool QGraphicsProxyWidget_virtualbase_isEmpty(const void* self);

	// Wrappers to allow calling protected methods:
	friend QGraphicsProxyWidget* QGraphicsProxyWidget_protectedbase_newProxyWidget(bool* _dynamic_cast_ok, void* self, QWidget* param1);
	friend void QGraphicsProxyWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend QObject* QGraphicsProxyWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsProxyWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsProxyWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QGraphicsProxyWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
	friend void QGraphicsProxyWidget_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsProxyWidget_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsProxyWidget_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsProxyWidget_protectedbase_setGraphicsItem(bool* _dynamic_cast_ok, void* self, QGraphicsItem* item);
	friend void QGraphicsProxyWidget_protectedbase_setOwnedByLayout(bool* _dynamic_cast_ok, void* self, bool ownedByLayout);
};

QGraphicsProxyWidget* QGraphicsProxyWidget_new() {
	return new (std::nothrow) MiqtVirtualQGraphicsProxyWidget();
}

QGraphicsProxyWidget* QGraphicsProxyWidget_new2(QGraphicsItem* parent) {
	return new (std::nothrow) MiqtVirtualQGraphicsProxyWidget(parent);
}

QGraphicsProxyWidget* QGraphicsProxyWidget_new3(QGraphicsItem* parent, int wFlags) {
	return new (std::nothrow) MiqtVirtualQGraphicsProxyWidget(parent, static_cast<Qt::WindowFlags>(wFlags));
}

void QGraphicsProxyWidget_virtbase(QGraphicsProxyWidget* src, QGraphicsWidget** outptr_QGraphicsWidget) {
	*outptr_QGraphicsWidget = static_cast<QGraphicsWidget*>(src);
}

QMetaObject* QGraphicsProxyWidget_metaObject(const QGraphicsProxyWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsProxyWidget_metacast(QGraphicsProxyWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsProxyWidget_tr(const char* s) {
	QString _ret = QGraphicsProxyWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsProxyWidget_setWidget(QGraphicsProxyWidget* self, QWidget* widget) {
	self->setWidget(widget);
}

QWidget* QGraphicsProxyWidget_widget(const QGraphicsProxyWidget* self) {
	return self->widget();
}

QRectF* QGraphicsProxyWidget_subWidgetRect(const QGraphicsProxyWidget* self, QWidget* widget) {
	return new QRectF(self->subWidgetRect(widget));
}

void QGraphicsProxyWidget_setGeometry(QGraphicsProxyWidget* self, QRectF* rect) {
	self->setGeometry(*rect);
}

void QGraphicsProxyWidget_paint(QGraphicsProxyWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

int QGraphicsProxyWidget_type(const QGraphicsProxyWidget* self) {
	return self->type();
}

QGraphicsProxyWidget* QGraphicsProxyWidget_createProxyForChildWidget(QGraphicsProxyWidget* self, QWidget* child) {
	return self->createProxyForChildWidget(child);
}

struct miqt_string QGraphicsProxyWidget_tr2(const char* s, const char* c) {
	QString _ret = QGraphicsProxyWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsProxyWidget_tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsProxyWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QGraphicsProxyWidget_override_virtual_setGeometry(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setGeometry = std::move(slot_handle);
	return true;
}

void QGraphicsProxyWidget_virtualbase_setGeometry(void* self, QRectF* rect) {
	static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::setGeometry(*rect);
}

bool QGraphicsProxyWidget_override_virtual_paint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paint = std::move(slot_handle);
	return true;
}

void QGraphicsProxyWidget_virtualbase_paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::paint(painter, option, widget);
}

bool QGraphicsProxyWidget_override_virtual_type(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__type = std::move(slot_handle);
	return true;
}

int QGraphicsProxyWidget_virtualbase_type(const void* self) {
	return static_cast<const MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::type();
}

bool QGraphicsProxyWidget_override_virtual_itemChange(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__itemChange = std::move(slot_handle);
	self_cast->owns_return__itemChange = false;
	return true;
}

bool QGraphicsProxyWidget_override_virtual_owned_itemChange(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__itemChange = std::move(slot_handle);
	self_cast->owns_return__itemChange = true;
	return true;
}

QVariant* QGraphicsProxyWidget_virtualbase_itemChange(void* self, int change, QVariant* value) {
	return new QVariant(static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::itemChange(static_cast<MiqtVirtualQGraphicsProxyWidget::GraphicsItemChange>(change), *value));
}

bool QGraphicsProxyWidget_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QGraphicsProxyWidget_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::event(event);
}

bool QGraphicsProxyWidget_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QGraphicsProxyWidget_virtualbase_eventFilter(void* self, QObject* object, QEvent* event) {
	return static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::eventFilter(object, event);
}

bool QGraphicsProxyWidget_override_virtual_showEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = std::move(slot_handle);
	return true;
}

void QGraphicsProxyWidget_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::showEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_hideEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = std::move(slot_handle);
	return true;
}

void QGraphicsProxyWidget_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::hideEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = std::move(slot_handle);
	return true;
}

void QGraphicsProxyWidget_virtualbase_contextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event) {
	static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::contextMenuEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = std::move(slot_handle);
	return true;
}

void QGraphicsProxyWidget_virtualbase_dragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::dragEnterEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = std::move(slot_handle);
	return true;
}

void QGraphicsProxyWidget_virtualbase_dragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::dragLeaveEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = std::move(slot_handle);
	return true;
}

void QGraphicsProxyWidget_virtualbase_dragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::dragMoveEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_dropEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = std::move(slot_handle);
	return true;
}

void QGraphicsProxyWidget_virtualbase_dropEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::dropEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_hoverEnterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hoverEnterEvent = std::move(slot_handle);
	return true;
}

void QGraphicsProxyWidget_virtualbase_hoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event) {
	static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::hoverEnterEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_hoverLeaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hoverLeaveEvent = std::move(slot_handle);
	return true;
}

void QGraphicsProxyWidget_virtualbase_hoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::hoverLeaveEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_hoverMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hoverMoveEvent = std::move(slot_handle);
	return true;
}

void QGraphicsProxyWidget_virtualbase_hoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::hoverMoveEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_grabMouseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__grabMouseEvent = std::move(slot_handle);
	return true;
}

void QGraphicsProxyWidget_virtualbase_grabMouseEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::grabMouseEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_ungrabMouseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__ungrabMouseEvent = std::move(slot_handle);
	return true;
}

void QGraphicsProxyWidget_virtualbase_ungrabMouseEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::ungrabMouseEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = std::move(slot_handle);
	return true;
}

void QGraphicsProxyWidget_virtualbase_mouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event) {
	static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::mouseMoveEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = std::move(slot_handle);
	return true;
}

void QGraphicsProxyWidget_virtualbase_mousePressEvent(void* self, QGraphicsSceneMouseEvent* event) {
	static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::mousePressEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = std::move(slot_handle);
	return true;
}

void QGraphicsProxyWidget_virtualbase_mouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event) {
	static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::mouseReleaseEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = std::move(slot_handle);
	return true;
}

void QGraphicsProxyWidget_virtualbase_mouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event) {
	static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::mouseDoubleClickEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_wheelEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = std::move(slot_handle);
	return true;
}

void QGraphicsProxyWidget_virtualbase_wheelEvent(void* self, QGraphicsSceneWheelEvent* event) {
	static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::wheelEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = std::move(slot_handle);
	return true;
}

void QGraphicsProxyWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::keyPressEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = std::move(slot_handle);
	return true;
}

void QGraphicsProxyWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::keyReleaseEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_focusInEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = std::move(slot_handle);
	return true;
}

void QGraphicsProxyWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::focusInEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = std::move(slot_handle);
	return true;
}

void QGraphicsProxyWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::focusOutEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = std::move(slot_handle);
	return true;
}

bool QGraphicsProxyWidget_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::focusNextPrevChild(next);
}

bool QGraphicsProxyWidget_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	self_cast->owns_return__inputMethodQuery = false;
	return true;
}

bool QGraphicsProxyWidget_override_virtual_owned_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	self_cast->owns_return__inputMethodQuery = true;
	return true;
}

QVariant* QGraphicsProxyWidget_virtualbase_inputMethodQuery(const void* self, int query) {
	return new QVariant(static_cast<const MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

bool QGraphicsProxyWidget_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = std::move(slot_handle);
	return true;
}

void QGraphicsProxyWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {
	static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::inputMethodEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = false;
	return true;
}

bool QGraphicsProxyWidget_override_virtual_owned_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = true;
	return true;
}

QSizeF* QGraphicsProxyWidget_virtualbase_sizeHint(const void* self, int which, QSizeF* constraint) {
	return new QSizeF(static_cast<const MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
}

bool QGraphicsProxyWidget_override_virtual_resizeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = std::move(slot_handle);
	return true;
}

void QGraphicsProxyWidget_virtualbase_resizeEvent(void* self, QGraphicsSceneResizeEvent* event) {
	static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::resizeEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_getContentsMargins(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__getContentsMargins = std::move(slot_handle);
	return true;
}

void QGraphicsProxyWidget_virtualbase_getContentsMargins(const void* self, double* left, double* top, double* right, double* bottom) {
	static_cast<const MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
}

bool QGraphicsProxyWidget_override_virtual_paintWindowFrame(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintWindowFrame = std::move(slot_handle);
	return true;
}

void QGraphicsProxyWidget_virtualbase_paintWindowFrame(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::paintWindowFrame(painter, option, widget);
}

bool QGraphicsProxyWidget_override_virtual_boundingRect(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__boundingRect = std::move(slot_handle);
	self_cast->owns_return__boundingRect = false;
	return true;
}

bool QGraphicsProxyWidget_override_virtual_owned_boundingRect(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__boundingRect = std::move(slot_handle);
	self_cast->owns_return__boundingRect = true;
	return true;
}

QRectF* QGraphicsProxyWidget_virtualbase_boundingRect(const void* self) {
	return new QRectF(static_cast<const MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::boundingRect());
}

bool QGraphicsProxyWidget_override_virtual_shape(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__shape = std::move(slot_handle);
	self_cast->owns_return__shape = false;
	return true;
}

bool QGraphicsProxyWidget_override_virtual_owned_shape(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__shape = std::move(slot_handle);
	self_cast->owns_return__shape = true;
	return true;
}

QPainterPath* QGraphicsProxyWidget_virtualbase_shape(const void* self) {
	return new QPainterPath(static_cast<const MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::shape());
}

bool QGraphicsProxyWidget_override_virtual_initStyleOption(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initStyleOption = std::move(slot_handle);
	return true;
}

void QGraphicsProxyWidget_virtualbase_initStyleOption(const void* self, QStyleOption* option) {
	static_cast<const MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::initStyleOption(option);
}

bool QGraphicsProxyWidget_override_virtual_updateGeometry(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateGeometry = std::move(slot_handle);
	return true;
}

void QGraphicsProxyWidget_virtualbase_updateGeometry(void* self) {
	static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::updateGeometry();
}

bool QGraphicsProxyWidget_override_virtual_propertyChange(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__propertyChange = std::move(slot_handle);
	self_cast->owns_return__propertyChange = false;
	return true;
}

bool QGraphicsProxyWidget_override_virtual_owned_propertyChange(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__propertyChange = std::move(slot_handle);
	self_cast->owns_return__propertyChange = true;
	return true;
}

QVariant* QGraphicsProxyWidget_virtualbase_propertyChange(void* self, struct miqt_string propertyName, QVariant* value) {
	QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);
	return new QVariant(static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::propertyChange(propertyName_QString, *value));
}

bool QGraphicsProxyWidget_override_virtual_sceneEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sceneEvent = std::move(slot_handle);
	return true;
}

bool QGraphicsProxyWidget_virtualbase_sceneEvent(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::sceneEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_windowFrameEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__windowFrameEvent = std::move(slot_handle);
	return true;
}

bool QGraphicsProxyWidget_virtualbase_windowFrameEvent(void* self, QEvent* e) {
	return static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::windowFrameEvent(e);
}

bool QGraphicsProxyWidget_override_virtual_windowFrameSectionAt(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__windowFrameSectionAt = std::move(slot_handle);
	return true;
}

int QGraphicsProxyWidget_virtualbase_windowFrameSectionAt(const void* self, QPointF* pos) {
	Qt::WindowFrameSection _ret = static_cast<const MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::windowFrameSectionAt(*pos);
	return static_cast<int>(_ret);
}

bool QGraphicsProxyWidget_override_virtual_changeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = std::move(slot_handle);
	return true;
}

void QGraphicsProxyWidget_virtualbase_changeEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::changeEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_closeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = std::move(slot_handle);
	return true;
}

void QGraphicsProxyWidget_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::closeEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_moveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = std::move(slot_handle);
	return true;
}

void QGraphicsProxyWidget_virtualbase_moveEvent(void* self, QGraphicsSceneMoveEvent* event) {
	static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::moveEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_polishEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__polishEvent = std::move(slot_handle);
	return true;
}

void QGraphicsProxyWidget_virtualbase_polishEvent(void* self) {
	static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::polishEvent();
}

bool QGraphicsProxyWidget_override_virtual_grabKeyboardEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__grabKeyboardEvent = std::move(slot_handle);
	return true;
}

void QGraphicsProxyWidget_virtualbase_grabKeyboardEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::grabKeyboardEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_ungrabKeyboardEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__ungrabKeyboardEvent = std::move(slot_handle);
	return true;
}

void QGraphicsProxyWidget_virtualbase_ungrabKeyboardEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::ungrabKeyboardEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QGraphicsProxyWidget_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::timerEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QGraphicsProxyWidget_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::childEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QGraphicsProxyWidget_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::customEvent(event);
}

bool QGraphicsProxyWidget_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QGraphicsProxyWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::connectNotify(*signal);
}

bool QGraphicsProxyWidget_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QGraphicsProxyWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::disconnectNotify(*signal);
}

bool QGraphicsProxyWidget_override_virtual_advance(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__advance = std::move(slot_handle);
	return true;
}

void QGraphicsProxyWidget_virtualbase_advance(void* self, int phase) {
	static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::advance(static_cast<int>(phase));
}

bool QGraphicsProxyWidget_override_virtual_contains(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contains = std::move(slot_handle);
	return true;
}

bool QGraphicsProxyWidget_virtualbase_contains(const void* self, QPointF* point) {
	return static_cast<const MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::contains(*point);
}

bool QGraphicsProxyWidget_override_virtual_collidesWithItem(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__collidesWithItem = std::move(slot_handle);
	return true;
}

bool QGraphicsProxyWidget_virtualbase_collidesWithItem(const void* self, QGraphicsItem* other, int mode) {
	return static_cast<const MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

bool QGraphicsProxyWidget_override_virtual_collidesWithPath(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__collidesWithPath = std::move(slot_handle);
	return true;
}

bool QGraphicsProxyWidget_virtualbase_collidesWithPath(const void* self, QPainterPath* path, int mode) {
	return static_cast<const MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

bool QGraphicsProxyWidget_override_virtual_isObscuredBy(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isObscuredBy = std::move(slot_handle);
	return true;
}

bool QGraphicsProxyWidget_virtualbase_isObscuredBy(const void* self, QGraphicsItem* item) {
	return static_cast<const MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::isObscuredBy(item);
}

bool QGraphicsProxyWidget_override_virtual_opaqueArea(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__opaqueArea = std::move(slot_handle);
	self_cast->owns_return__opaqueArea = false;
	return true;
}

bool QGraphicsProxyWidget_override_virtual_owned_opaqueArea(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__opaqueArea = std::move(slot_handle);
	self_cast->owns_return__opaqueArea = true;
	return true;
}

QPainterPath* QGraphicsProxyWidget_virtualbase_opaqueArea(const void* self) {
	return new QPainterPath(static_cast<const MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::opaqueArea());
}

bool QGraphicsProxyWidget_override_virtual_sceneEventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sceneEventFilter = std::move(slot_handle);
	return true;
}

bool QGraphicsProxyWidget_virtualbase_sceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event) {
	return static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::sceneEventFilter(watched, event);
}

bool QGraphicsProxyWidget_override_virtual_supportsExtension(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__supportsExtension = std::move(slot_handle);
	return true;
}

bool QGraphicsProxyWidget_virtualbase_supportsExtension(const void* self, int extension) {
	return static_cast<const MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::supportsExtension(static_cast<MiqtVirtualQGraphicsProxyWidget::Extension>(extension));
}

bool QGraphicsProxyWidget_override_virtual_setExtension(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setExtension = std::move(slot_handle);
	return true;
}

void QGraphicsProxyWidget_virtualbase_setExtension(void* self, int extension, QVariant* variant) {
	static_cast<MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::setExtension(static_cast<MiqtVirtualQGraphicsProxyWidget::Extension>(extension), *variant);
}

bool QGraphicsProxyWidget_override_virtual_extension(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__extension = std::move(slot_handle);
	self_cast->owns_return__extension = false;
	return true;
}

bool QGraphicsProxyWidget_override_virtual_owned_extension(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__extension = std::move(slot_handle);
	self_cast->owns_return__extension = true;
	return true;
}

QVariant* QGraphicsProxyWidget_virtualbase_extension(const void* self, QVariant* variant) {
	return new QVariant(static_cast<const MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::extension(*variant));
}

bool QGraphicsProxyWidget_override_virtual_isEmpty(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsProxyWidget> slot_handle(slot);
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isEmpty = std::move(slot_handle);
	return true;
}

bool QGraphicsProxyWidget_virtualbase_isEmpty(const void* self) {
	return static_cast<const MiqtVirtualQGraphicsProxyWidget*>(self)->QGraphicsProxyWidget::isEmpty();
}

QGraphicsProxyWidget* QGraphicsProxyWidget_protectedbase_newProxyWidget(bool* _dynamic_cast_ok, void* self, QWidget* param1) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->newProxyWidget(param1);
}

void QGraphicsProxyWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

QObject* QGraphicsProxyWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QGraphicsProxyWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QGraphicsProxyWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QGraphicsProxyWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QGraphicsProxyWidget_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->addToIndex();
}

void QGraphicsProxyWidget_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->removeFromIndex();
}

void QGraphicsProxyWidget_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->prepareGeometryChange();
}

void QGraphicsProxyWidget_protectedbase_setGraphicsItem(bool* _dynamic_cast_ok, void* self, QGraphicsItem* item) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setGraphicsItem(item);
}

void QGraphicsProxyWidget_protectedbase_setOwnedByLayout(bool* _dynamic_cast_ok, void* self, bool ownedByLayout) {
	MiqtVirtualQGraphicsProxyWidget* self_cast = dynamic_cast<MiqtVirtualQGraphicsProxyWidget*>( (QGraphicsProxyWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setOwnedByLayout(ownedByLayout);
}

void QGraphicsProxyWidget_delete(QGraphicsProxyWidget* self) {
	delete self;
}

