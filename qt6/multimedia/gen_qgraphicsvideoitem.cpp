#include <memory>
#include <utility>
#include <QChildEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QGraphicsItem>
#include <QGraphicsObject>
#include <QGraphicsSceneContextMenuEvent>
#include <QGraphicsSceneDragDropEvent>
#include <QGraphicsSceneHoverEvent>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsSceneWheelEvent>
#include <QGraphicsVideoItem>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPainter>
#include <QPainterPath>
#include <QPointF>
#include <QRectF>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionGraphicsItem>
#include <QTimerEvent>
#include <QVariant>
#include <QVideoSink>
#include <QWidget>
#include <qgraphicsvideoitem.h>
#include "gen_qgraphicsvideoitem.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QGraphicsVideoItem(intptr_t);
void miqt_exec_callback_QGraphicsVideoItem_nativeSizeChanged(intptr_t, QSizeF*);
QRectF* miqt_exec_callback_QGraphicsVideoItem_boundingRect(const QGraphicsVideoItem*, intptr_t);
void miqt_exec_callback_QGraphicsVideoItem_paint(QGraphicsVideoItem*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
int miqt_exec_callback_QGraphicsVideoItem_type(const QGraphicsVideoItem*, intptr_t);
void miqt_exec_callback_QGraphicsVideoItem_timerEvent(QGraphicsVideoItem*, intptr_t, QTimerEvent*);
QVariant* miqt_exec_callback_QGraphicsVideoItem_itemChange(QGraphicsVideoItem*, intptr_t, int, QVariant*);
bool miqt_exec_callback_QGraphicsVideoItem_event(QGraphicsVideoItem*, intptr_t, QEvent*);
bool miqt_exec_callback_QGraphicsVideoItem_eventFilter(QGraphicsVideoItem*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QGraphicsVideoItem_childEvent(QGraphicsVideoItem*, intptr_t, QChildEvent*);
void miqt_exec_callback_QGraphicsVideoItem_customEvent(QGraphicsVideoItem*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsVideoItem_connectNotify(QGraphicsVideoItem*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsVideoItem_disconnectNotify(QGraphicsVideoItem*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsVideoItem_advance(QGraphicsVideoItem*, intptr_t, int);
QPainterPath* miqt_exec_callback_QGraphicsVideoItem_shape(const QGraphicsVideoItem*, intptr_t);
bool miqt_exec_callback_QGraphicsVideoItem_contains(const QGraphicsVideoItem*, intptr_t, QPointF*);
bool miqt_exec_callback_QGraphicsVideoItem_collidesWithItem(const QGraphicsVideoItem*, intptr_t, QGraphicsItem*, int);
bool miqt_exec_callback_QGraphicsVideoItem_collidesWithPath(const QGraphicsVideoItem*, intptr_t, QPainterPath*, int);
bool miqt_exec_callback_QGraphicsVideoItem_isObscuredBy(const QGraphicsVideoItem*, intptr_t, QGraphicsItem*);
QPainterPath* miqt_exec_callback_QGraphicsVideoItem_opaqueArea(const QGraphicsVideoItem*, intptr_t);
bool miqt_exec_callback_QGraphicsVideoItem_sceneEventFilter(QGraphicsVideoItem*, intptr_t, QGraphicsItem*, QEvent*);
bool miqt_exec_callback_QGraphicsVideoItem_sceneEvent(QGraphicsVideoItem*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsVideoItem_contextMenuEvent(QGraphicsVideoItem*, intptr_t, QGraphicsSceneContextMenuEvent*);
void miqt_exec_callback_QGraphicsVideoItem_dragEnterEvent(QGraphicsVideoItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsVideoItem_dragLeaveEvent(QGraphicsVideoItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsVideoItem_dragMoveEvent(QGraphicsVideoItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsVideoItem_dropEvent(QGraphicsVideoItem*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsVideoItem_focusInEvent(QGraphicsVideoItem*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsVideoItem_focusOutEvent(QGraphicsVideoItem*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsVideoItem_hoverEnterEvent(QGraphicsVideoItem*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsVideoItem_hoverMoveEvent(QGraphicsVideoItem*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsVideoItem_hoverLeaveEvent(QGraphicsVideoItem*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsVideoItem_keyPressEvent(QGraphicsVideoItem*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsVideoItem_keyReleaseEvent(QGraphicsVideoItem*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsVideoItem_mousePressEvent(QGraphicsVideoItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsVideoItem_mouseMoveEvent(QGraphicsVideoItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsVideoItem_mouseReleaseEvent(QGraphicsVideoItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsVideoItem_mouseDoubleClickEvent(QGraphicsVideoItem*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsVideoItem_wheelEvent(QGraphicsVideoItem*, intptr_t, QGraphicsSceneWheelEvent*);
void miqt_exec_callback_QGraphicsVideoItem_inputMethodEvent(QGraphicsVideoItem*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QGraphicsVideoItem_inputMethodQuery(const QGraphicsVideoItem*, intptr_t, int);
bool miqt_exec_callback_QGraphicsVideoItem_supportsExtension(const QGraphicsVideoItem*, intptr_t, int);
void miqt_exec_callback_QGraphicsVideoItem_setExtension(QGraphicsVideoItem*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QGraphicsVideoItem_extension(const QGraphicsVideoItem*, intptr_t, QVariant*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGraphicsVideoItem final : public QGraphicsVideoItem {
public:

	MiqtVirtualQGraphicsVideoItem(): QGraphicsVideoItem() {}
	MiqtVirtualQGraphicsVideoItem(QGraphicsItem* parent): QGraphicsVideoItem(parent) {}

	virtual ~MiqtVirtualQGraphicsVideoItem() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> handle__boundingRect;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (!handle__boundingRect) {
			return QGraphicsVideoItem::boundingRect();
		}

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsVideoItem_boundingRect(this, handle__boundingRect.value());
		return *callback_return_value;
	}

	friend QRectF* QGraphicsVideoItem_virtualbase_boundingRect(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> handle__paint;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (!handle__paint) {
			QGraphicsVideoItem::paint(painter, option, widget);
			return;
		}

		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;
		miqt_exec_callback_QGraphicsVideoItem_paint(this, handle__paint.value(), sigval1, sigval2, sigval3);

	}

	friend void QGraphicsVideoItem_virtualbase_paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> handle__type;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (!handle__type) {
			return QGraphicsVideoItem::type();
		}

		int callback_return_value = miqt_exec_callback_QGraphicsVideoItem_type(this, handle__type.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QGraphicsVideoItem_virtualbase_type(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QGraphicsVideoItem::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsVideoItem_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QGraphicsVideoItem_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> handle__itemChange;

	// Subclass to allow providing a Go implementation
	virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
		if (!handle__itemChange) {
			return QGraphicsVideoItem::itemChange(change, value);
		}

		QGraphicsItem::GraphicsItemChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		QVariant* callback_return_value = miqt_exec_callback_QGraphicsVideoItem_itemChange(this, handle__itemChange.value(), sigval1, sigval2);
		return *callback_return_value;
	}

	friend QVariant* QGraphicsVideoItem_virtualbase_itemChange(void* self, int change, QVariant* value);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* ev) override {
		if (!handle__event) {
			return QGraphicsVideoItem::event(ev);
		}

		QEvent* sigval1 = ev;
		bool callback_return_value = miqt_exec_callback_QGraphicsVideoItem_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QGraphicsVideoItem_virtualbase_event(void* self, QEvent* ev);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QGraphicsVideoItem::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QGraphicsVideoItem_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QGraphicsVideoItem_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QGraphicsVideoItem::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsVideoItem_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QGraphicsVideoItem_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QGraphicsVideoItem::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsVideoItem_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QGraphicsVideoItem_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QGraphicsVideoItem::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QGraphicsVideoItem_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QGraphicsVideoItem_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QGraphicsVideoItem::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QGraphicsVideoItem_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QGraphicsVideoItem_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> handle__advance;

	// Subclass to allow providing a Go implementation
	virtual void advance(int phase) override {
		if (!handle__advance) {
			QGraphicsVideoItem::advance(phase);
			return;
		}

		int sigval1 = phase;
		miqt_exec_callback_QGraphicsVideoItem_advance(this, handle__advance.value(), sigval1);

	}

	friend void QGraphicsVideoItem_virtualbase_advance(void* self, int phase);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> handle__shape;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (!handle__shape) {
			return QGraphicsVideoItem::shape();
		}

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsVideoItem_shape(this, handle__shape.value());
		return *callback_return_value;
	}

	friend QPainterPath* QGraphicsVideoItem_virtualbase_shape(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> handle__contains;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (!handle__contains) {
			return QGraphicsVideoItem::contains(point);
		}

		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);
		bool callback_return_value = miqt_exec_callback_QGraphicsVideoItem_contains(this, handle__contains.value(), sigval1);
		return callback_return_value;
	}

	friend bool QGraphicsVideoItem_virtualbase_contains(const void* self, QPointF* point);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> handle__collidesWithItem;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
		if (!handle__collidesWithItem) {
			return QGraphicsVideoItem::collidesWithItem(other, mode);
		}

		QGraphicsItem* sigval1 = (QGraphicsItem*) other;
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);
		bool callback_return_value = miqt_exec_callback_QGraphicsVideoItem_collidesWithItem(this, handle__collidesWithItem.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QGraphicsVideoItem_virtualbase_collidesWithItem(const void* self, QGraphicsItem* other, int mode);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> handle__collidesWithPath;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
		if (!handle__collidesWithPath) {
			return QGraphicsVideoItem::collidesWithPath(path, mode);
		}

		const QPainterPath& path_ret = path;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&path_ret);
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);
		bool callback_return_value = miqt_exec_callback_QGraphicsVideoItem_collidesWithPath(this, handle__collidesWithPath.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QGraphicsVideoItem_virtualbase_collidesWithPath(const void* self, QPainterPath* path, int mode);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> handle__isObscuredBy;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (!handle__isObscuredBy) {
			return QGraphicsVideoItem::isObscuredBy(item);
		}

		QGraphicsItem* sigval1 = (QGraphicsItem*) item;
		bool callback_return_value = miqt_exec_callback_QGraphicsVideoItem_isObscuredBy(this, handle__isObscuredBy.value(), sigval1);
		return callback_return_value;
	}

	friend bool QGraphicsVideoItem_virtualbase_isObscuredBy(const void* self, QGraphicsItem* item);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> handle__opaqueArea;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (!handle__opaqueArea) {
			return QGraphicsVideoItem::opaqueArea();
		}

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsVideoItem_opaqueArea(this, handle__opaqueArea.value());
		return *callback_return_value;
	}

	friend QPainterPath* QGraphicsVideoItem_virtualbase_opaqueArea(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> handle__sceneEventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
		if (!handle__sceneEventFilter) {
			return QGraphicsVideoItem::sceneEventFilter(watched, event);
		}

		QGraphicsItem* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QGraphicsVideoItem_sceneEventFilter(this, handle__sceneEventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QGraphicsVideoItem_virtualbase_sceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> handle__sceneEvent;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEvent(QEvent* event) override {
		if (!handle__sceneEvent) {
			return QGraphicsVideoItem::sceneEvent(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QGraphicsVideoItem_sceneEvent(this, handle__sceneEvent.value(), sigval1);
		return callback_return_value;
	}

	friend bool QGraphicsVideoItem_virtualbase_sceneEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> handle__contextMenuEvent;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (!handle__contextMenuEvent) {
			QGraphicsVideoItem::contextMenuEvent(event);
			return;
		}

		QGraphicsSceneContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsVideoItem_contextMenuEvent(this, handle__contextMenuEvent.value(), sigval1);

	}

	friend void QGraphicsVideoItem_virtualbase_contextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> handle__dragEnterEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (!handle__dragEnterEvent) {
			QGraphicsVideoItem::dragEnterEvent(event);
			return;
		}

		QGraphicsSceneDragDropEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsVideoItem_dragEnterEvent(this, handle__dragEnterEvent.value(), sigval1);

	}

	friend void QGraphicsVideoItem_virtualbase_dragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> handle__dragLeaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (!handle__dragLeaveEvent) {
			QGraphicsVideoItem::dragLeaveEvent(event);
			return;
		}

		QGraphicsSceneDragDropEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsVideoItem_dragLeaveEvent(this, handle__dragLeaveEvent.value(), sigval1);

	}

	friend void QGraphicsVideoItem_virtualbase_dragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> handle__dragMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (!handle__dragMoveEvent) {
			QGraphicsVideoItem::dragMoveEvent(event);
			return;
		}

		QGraphicsSceneDragDropEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsVideoItem_dragMoveEvent(this, handle__dragMoveEvent.value(), sigval1);

	}

	friend void QGraphicsVideoItem_virtualbase_dragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> handle__dropEvent;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (!handle__dropEvent) {
			QGraphicsVideoItem::dropEvent(event);
			return;
		}

		QGraphicsSceneDragDropEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsVideoItem_dropEvent(this, handle__dropEvent.value(), sigval1);

	}

	friend void QGraphicsVideoItem_virtualbase_dropEvent(void* self, QGraphicsSceneDragDropEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> handle__focusInEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (!handle__focusInEvent) {
			QGraphicsVideoItem::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsVideoItem_focusInEvent(this, handle__focusInEvent.value(), sigval1);

	}

	friend void QGraphicsVideoItem_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> handle__focusOutEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (!handle__focusOutEvent) {
			QGraphicsVideoItem::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsVideoItem_focusOutEvent(this, handle__focusOutEvent.value(), sigval1);

	}

	friend void QGraphicsVideoItem_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> handle__hoverEnterEvent;

	// Subclass to allow providing a Go implementation
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (!handle__hoverEnterEvent) {
			QGraphicsVideoItem::hoverEnterEvent(event);
			return;
		}

		QGraphicsSceneHoverEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsVideoItem_hoverEnterEvent(this, handle__hoverEnterEvent.value(), sigval1);

	}

	friend void QGraphicsVideoItem_virtualbase_hoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> handle__hoverMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* event) override {
		if (!handle__hoverMoveEvent) {
			QGraphicsVideoItem::hoverMoveEvent(event);
			return;
		}

		QGraphicsSceneHoverEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsVideoItem_hoverMoveEvent(this, handle__hoverMoveEvent.value(), sigval1);

	}

	friend void QGraphicsVideoItem_virtualbase_hoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> handle__hoverLeaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* event) override {
		if (!handle__hoverLeaveEvent) {
			QGraphicsVideoItem::hoverLeaveEvent(event);
			return;
		}

		QGraphicsSceneHoverEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsVideoItem_hoverLeaveEvent(this, handle__hoverLeaveEvent.value(), sigval1);

	}

	friend void QGraphicsVideoItem_virtualbase_hoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> handle__keyPressEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (!handle__keyPressEvent) {
			QGraphicsVideoItem::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsVideoItem_keyPressEvent(this, handle__keyPressEvent.value(), sigval1);

	}

	friend void QGraphicsVideoItem_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> handle__keyReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (!handle__keyReleaseEvent) {
			QGraphicsVideoItem::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsVideoItem_keyReleaseEvent(this, handle__keyReleaseEvent.value(), sigval1);

	}

	friend void QGraphicsVideoItem_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> handle__mousePressEvent;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (!handle__mousePressEvent) {
			QGraphicsVideoItem::mousePressEvent(event);
			return;
		}

		QGraphicsSceneMouseEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsVideoItem_mousePressEvent(this, handle__mousePressEvent.value(), sigval1);

	}

	friend void QGraphicsVideoItem_virtualbase_mousePressEvent(void* self, QGraphicsSceneMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> handle__mouseMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (!handle__mouseMoveEvent) {
			QGraphicsVideoItem::mouseMoveEvent(event);
			return;
		}

		QGraphicsSceneMouseEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsVideoItem_mouseMoveEvent(this, handle__mouseMoveEvent.value(), sigval1);

	}

	friend void QGraphicsVideoItem_virtualbase_mouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> handle__mouseReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (!handle__mouseReleaseEvent) {
			QGraphicsVideoItem::mouseReleaseEvent(event);
			return;
		}

		QGraphicsSceneMouseEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsVideoItem_mouseReleaseEvent(this, handle__mouseReleaseEvent.value(), sigval1);

	}

	friend void QGraphicsVideoItem_virtualbase_mouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> handle__mouseDoubleClickEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (!handle__mouseDoubleClickEvent) {
			QGraphicsVideoItem::mouseDoubleClickEvent(event);
			return;
		}

		QGraphicsSceneMouseEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsVideoItem_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent.value(), sigval1);

	}

	friend void QGraphicsVideoItem_virtualbase_mouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> handle__wheelEvent;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (!handle__wheelEvent) {
			QGraphicsVideoItem::wheelEvent(event);
			return;
		}

		QGraphicsSceneWheelEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsVideoItem_wheelEvent(this, handle__wheelEvent.value(), sigval1);

	}

	friend void QGraphicsVideoItem_virtualbase_wheelEvent(void* self, QGraphicsSceneWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> handle__inputMethodEvent;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (!handle__inputMethodEvent) {
			QGraphicsVideoItem::inputMethodEvent(event);
			return;
		}

		QInputMethodEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsVideoItem_inputMethodEvent(this, handle__inputMethodEvent.value(), sigval1);

	}

	friend void QGraphicsVideoItem_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> handle__inputMethodQuery;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (!handle__inputMethodQuery) {
			return QGraphicsVideoItem::inputMethodQuery(query);
		}

		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);
		QVariant* callback_return_value = miqt_exec_callback_QGraphicsVideoItem_inputMethodQuery(this, handle__inputMethodQuery.value(), sigval1);
		return *callback_return_value;
	}

	friend QVariant* QGraphicsVideoItem_virtualbase_inputMethodQuery(const void* self, int query);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> handle__supportsExtension;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (!handle__supportsExtension) {
			return QGraphicsVideoItem::supportsExtension(extension);
		}

		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		bool callback_return_value = miqt_exec_callback_QGraphicsVideoItem_supportsExtension(this, handle__supportsExtension.value(), sigval1);
		return callback_return_value;
	}

	friend bool QGraphicsVideoItem_virtualbase_supportsExtension(const void* self, int extension);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> handle__setExtension;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (!handle__setExtension) {
			QGraphicsVideoItem::setExtension(extension, variant);
			return;
		}

		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);
		miqt_exec_callback_QGraphicsVideoItem_setExtension(this, handle__setExtension.value(), sigval1, sigval2);

	}

	friend void QGraphicsVideoItem_virtualbase_setExtension(void* self, int extension, QVariant* variant);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> handle__extension;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (!handle__extension) {
			return QGraphicsVideoItem::extension(variant);
		}

		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);
		QVariant* callback_return_value = miqt_exec_callback_QGraphicsVideoItem_extension(this, handle__extension.value(), sigval1);
		return *callback_return_value;
	}

	friend QVariant* QGraphicsVideoItem_virtualbase_extension(const void* self, QVariant* variant);

	// Wrappers to allow calling protected methods:
	friend void QGraphicsVideoItem_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend QObject* QGraphicsVideoItem_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsVideoItem_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsVideoItem_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QGraphicsVideoItem_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
	friend void QGraphicsVideoItem_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsVideoItem_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsVideoItem_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self);
};

QGraphicsVideoItem* QGraphicsVideoItem_new() {
	return new (std::nothrow) MiqtVirtualQGraphicsVideoItem();
}

QGraphicsVideoItem* QGraphicsVideoItem_new2(QGraphicsItem* parent) {
	return new (std::nothrow) MiqtVirtualQGraphicsVideoItem(parent);
}

void QGraphicsVideoItem_virtbase(QGraphicsVideoItem* src, QGraphicsObject** outptr_QGraphicsObject) {
	*outptr_QGraphicsObject = static_cast<QGraphicsObject*>(src);
}

QMetaObject* QGraphicsVideoItem_metaObject(const QGraphicsVideoItem* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsVideoItem_metacast(QGraphicsVideoItem* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsVideoItem_tr(const char* s) {
	QString _ret = QGraphicsVideoItem::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QVideoSink* QGraphicsVideoItem_videoSink(const QGraphicsVideoItem* self) {
	return self->videoSink();
}

int QGraphicsVideoItem_aspectRatioMode(const QGraphicsVideoItem* self) {
	Qt::AspectRatioMode _ret = self->aspectRatioMode();
	return static_cast<int>(_ret);
}

void QGraphicsVideoItem_setAspectRatioMode(QGraphicsVideoItem* self, int mode) {
	self->setAspectRatioMode(static_cast<Qt::AspectRatioMode>(mode));
}

QPointF* QGraphicsVideoItem_offset(const QGraphicsVideoItem* self) {
	return new QPointF(self->offset());
}

void QGraphicsVideoItem_setOffset(QGraphicsVideoItem* self, QPointF* offset) {
	self->setOffset(*offset);
}

QSizeF* QGraphicsVideoItem_size(const QGraphicsVideoItem* self) {
	return new QSizeF(self->size());
}

void QGraphicsVideoItem_setSize(QGraphicsVideoItem* self, QSizeF* size) {
	self->setSize(*size);
}

QSizeF* QGraphicsVideoItem_nativeSize(const QGraphicsVideoItem* self) {
	return new QSizeF(self->nativeSize());
}

QRectF* QGraphicsVideoItem_boundingRect(const QGraphicsVideoItem* self) {
	return new QRectF(self->boundingRect());
}

void QGraphicsVideoItem_paint(QGraphicsVideoItem* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

int QGraphicsVideoItem_type(const QGraphicsVideoItem* self) {
	return self->type();
}

void QGraphicsVideoItem_nativeSizeChanged(QGraphicsVideoItem* self, QSizeF* size) {
	self->nativeSizeChanged(*size);
}

void* QGraphicsVideoItem_connect_nativeSizeChanged(QGraphicsVideoItem* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem>>(slot);
	return new QMetaObject::Connection(QGraphicsVideoItem::connect(self, static_cast<void (QGraphicsVideoItem::*)(const QSizeF&)>(&QGraphicsVideoItem::nativeSizeChanged), self, [slot_handle](const QSizeF& size) {
		intptr_t slot = slot_handle->value();
		const QSizeF& size_ret = size;
		// Cast returned reference into pointer
		QSizeF* sigval1 = const_cast<QSizeF*>(&size_ret);
		miqt_exec_callback_QGraphicsVideoItem_nativeSizeChanged(slot, sigval1);
	}));
}

struct miqt_string QGraphicsVideoItem_tr2(const char* s, const char* c) {
	QString _ret = QGraphicsVideoItem::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsVideoItem_tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsVideoItem::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QGraphicsVideoItem_override_virtual_boundingRect(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> slot_handle(slot);
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__boundingRect = std::move(slot_handle);
	return true;
}

QRectF* QGraphicsVideoItem_virtualbase_boundingRect(const void* self) {
	return new QRectF(static_cast<const MiqtVirtualQGraphicsVideoItem*>(self)->QGraphicsVideoItem::boundingRect());
}

bool QGraphicsVideoItem_override_virtual_paint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> slot_handle(slot);
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paint = std::move(slot_handle);
	return true;
}

void QGraphicsVideoItem_virtualbase_paint(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	static_cast<MiqtVirtualQGraphicsVideoItem*>(self)->QGraphicsVideoItem::paint(painter, option, widget);
}

bool QGraphicsVideoItem_override_virtual_type(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> slot_handle(slot);
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__type = std::move(slot_handle);
	return true;
}

int QGraphicsVideoItem_virtualbase_type(const void* self) {
	return static_cast<const MiqtVirtualQGraphicsVideoItem*>(self)->QGraphicsVideoItem::type();
}

bool QGraphicsVideoItem_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> slot_handle(slot);
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QGraphicsVideoItem_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQGraphicsVideoItem*>(self)->QGraphicsVideoItem::timerEvent(event);
}

bool QGraphicsVideoItem_override_virtual_itemChange(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> slot_handle(slot);
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__itemChange = std::move(slot_handle);
	return true;
}

QVariant* QGraphicsVideoItem_virtualbase_itemChange(void* self, int change, QVariant* value) {
	return new QVariant(static_cast<MiqtVirtualQGraphicsVideoItem*>(self)->QGraphicsVideoItem::itemChange(static_cast<MiqtVirtualQGraphicsVideoItem::GraphicsItemChange>(change), *value));
}

bool QGraphicsVideoItem_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> slot_handle(slot);
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QGraphicsVideoItem_virtualbase_event(void* self, QEvent* ev) {
	return static_cast<MiqtVirtualQGraphicsVideoItem*>(self)->QGraphicsVideoItem::event(ev);
}

bool QGraphicsVideoItem_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> slot_handle(slot);
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QGraphicsVideoItem_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQGraphicsVideoItem*>(self)->QGraphicsVideoItem::eventFilter(watched, event);
}

bool QGraphicsVideoItem_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> slot_handle(slot);
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QGraphicsVideoItem_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQGraphicsVideoItem*>(self)->QGraphicsVideoItem::childEvent(event);
}

bool QGraphicsVideoItem_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> slot_handle(slot);
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QGraphicsVideoItem_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQGraphicsVideoItem*>(self)->QGraphicsVideoItem::customEvent(event);
}

bool QGraphicsVideoItem_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> slot_handle(slot);
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QGraphicsVideoItem_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQGraphicsVideoItem*>(self)->QGraphicsVideoItem::connectNotify(*signal);
}

bool QGraphicsVideoItem_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> slot_handle(slot);
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QGraphicsVideoItem_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQGraphicsVideoItem*>(self)->QGraphicsVideoItem::disconnectNotify(*signal);
}

bool QGraphicsVideoItem_override_virtual_advance(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> slot_handle(slot);
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__advance = std::move(slot_handle);
	return true;
}

void QGraphicsVideoItem_virtualbase_advance(void* self, int phase) {
	static_cast<MiqtVirtualQGraphicsVideoItem*>(self)->QGraphicsVideoItem::advance(static_cast<int>(phase));
}

bool QGraphicsVideoItem_override_virtual_shape(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> slot_handle(slot);
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__shape = std::move(slot_handle);
	return true;
}

QPainterPath* QGraphicsVideoItem_virtualbase_shape(const void* self) {
	return new QPainterPath(static_cast<const MiqtVirtualQGraphicsVideoItem*>(self)->QGraphicsVideoItem::shape());
}

bool QGraphicsVideoItem_override_virtual_contains(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> slot_handle(slot);
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contains = std::move(slot_handle);
	return true;
}

bool QGraphicsVideoItem_virtualbase_contains(const void* self, QPointF* point) {
	return static_cast<const MiqtVirtualQGraphicsVideoItem*>(self)->QGraphicsVideoItem::contains(*point);
}

bool QGraphicsVideoItem_override_virtual_collidesWithItem(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> slot_handle(slot);
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__collidesWithItem = std::move(slot_handle);
	return true;
}

bool QGraphicsVideoItem_virtualbase_collidesWithItem(const void* self, QGraphicsItem* other, int mode) {
	return static_cast<const MiqtVirtualQGraphicsVideoItem*>(self)->QGraphicsVideoItem::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

bool QGraphicsVideoItem_override_virtual_collidesWithPath(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> slot_handle(slot);
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__collidesWithPath = std::move(slot_handle);
	return true;
}

bool QGraphicsVideoItem_virtualbase_collidesWithPath(const void* self, QPainterPath* path, int mode) {
	return static_cast<const MiqtVirtualQGraphicsVideoItem*>(self)->QGraphicsVideoItem::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

bool QGraphicsVideoItem_override_virtual_isObscuredBy(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> slot_handle(slot);
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isObscuredBy = std::move(slot_handle);
	return true;
}

bool QGraphicsVideoItem_virtualbase_isObscuredBy(const void* self, QGraphicsItem* item) {
	return static_cast<const MiqtVirtualQGraphicsVideoItem*>(self)->QGraphicsVideoItem::isObscuredBy(item);
}

bool QGraphicsVideoItem_override_virtual_opaqueArea(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> slot_handle(slot);
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__opaqueArea = std::move(slot_handle);
	return true;
}

QPainterPath* QGraphicsVideoItem_virtualbase_opaqueArea(const void* self) {
	return new QPainterPath(static_cast<const MiqtVirtualQGraphicsVideoItem*>(self)->QGraphicsVideoItem::opaqueArea());
}

bool QGraphicsVideoItem_override_virtual_sceneEventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> slot_handle(slot);
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sceneEventFilter = std::move(slot_handle);
	return true;
}

bool QGraphicsVideoItem_virtualbase_sceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event) {
	return static_cast<MiqtVirtualQGraphicsVideoItem*>(self)->QGraphicsVideoItem::sceneEventFilter(watched, event);
}

bool QGraphicsVideoItem_override_virtual_sceneEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> slot_handle(slot);
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sceneEvent = std::move(slot_handle);
	return true;
}

bool QGraphicsVideoItem_virtualbase_sceneEvent(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQGraphicsVideoItem*>(self)->QGraphicsVideoItem::sceneEvent(event);
}

bool QGraphicsVideoItem_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> slot_handle(slot);
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = std::move(slot_handle);
	return true;
}

void QGraphicsVideoItem_virtualbase_contextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event) {
	static_cast<MiqtVirtualQGraphicsVideoItem*>(self)->QGraphicsVideoItem::contextMenuEvent(event);
}

bool QGraphicsVideoItem_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> slot_handle(slot);
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = std::move(slot_handle);
	return true;
}

void QGraphicsVideoItem_virtualbase_dragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	static_cast<MiqtVirtualQGraphicsVideoItem*>(self)->QGraphicsVideoItem::dragEnterEvent(event);
}

bool QGraphicsVideoItem_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> slot_handle(slot);
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = std::move(slot_handle);
	return true;
}

void QGraphicsVideoItem_virtualbase_dragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	static_cast<MiqtVirtualQGraphicsVideoItem*>(self)->QGraphicsVideoItem::dragLeaveEvent(event);
}

bool QGraphicsVideoItem_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> slot_handle(slot);
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = std::move(slot_handle);
	return true;
}

void QGraphicsVideoItem_virtualbase_dragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	static_cast<MiqtVirtualQGraphicsVideoItem*>(self)->QGraphicsVideoItem::dragMoveEvent(event);
}

bool QGraphicsVideoItem_override_virtual_dropEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> slot_handle(slot);
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = std::move(slot_handle);
	return true;
}

void QGraphicsVideoItem_virtualbase_dropEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	static_cast<MiqtVirtualQGraphicsVideoItem*>(self)->QGraphicsVideoItem::dropEvent(event);
}

bool QGraphicsVideoItem_override_virtual_focusInEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> slot_handle(slot);
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = std::move(slot_handle);
	return true;
}

void QGraphicsVideoItem_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQGraphicsVideoItem*>(self)->QGraphicsVideoItem::focusInEvent(event);
}

bool QGraphicsVideoItem_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> slot_handle(slot);
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = std::move(slot_handle);
	return true;
}

void QGraphicsVideoItem_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQGraphicsVideoItem*>(self)->QGraphicsVideoItem::focusOutEvent(event);
}

bool QGraphicsVideoItem_override_virtual_hoverEnterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> slot_handle(slot);
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hoverEnterEvent = std::move(slot_handle);
	return true;
}

void QGraphicsVideoItem_virtualbase_hoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event) {
	static_cast<MiqtVirtualQGraphicsVideoItem*>(self)->QGraphicsVideoItem::hoverEnterEvent(event);
}

bool QGraphicsVideoItem_override_virtual_hoverMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> slot_handle(slot);
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hoverMoveEvent = std::move(slot_handle);
	return true;
}

void QGraphicsVideoItem_virtualbase_hoverMoveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	static_cast<MiqtVirtualQGraphicsVideoItem*>(self)->QGraphicsVideoItem::hoverMoveEvent(event);
}

bool QGraphicsVideoItem_override_virtual_hoverLeaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> slot_handle(slot);
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hoverLeaveEvent = std::move(slot_handle);
	return true;
}

void QGraphicsVideoItem_virtualbase_hoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* event) {
	static_cast<MiqtVirtualQGraphicsVideoItem*>(self)->QGraphicsVideoItem::hoverLeaveEvent(event);
}

bool QGraphicsVideoItem_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> slot_handle(slot);
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = std::move(slot_handle);
	return true;
}

void QGraphicsVideoItem_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQGraphicsVideoItem*>(self)->QGraphicsVideoItem::keyPressEvent(event);
}

bool QGraphicsVideoItem_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> slot_handle(slot);
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = std::move(slot_handle);
	return true;
}

void QGraphicsVideoItem_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQGraphicsVideoItem*>(self)->QGraphicsVideoItem::keyReleaseEvent(event);
}

bool QGraphicsVideoItem_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> slot_handle(slot);
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = std::move(slot_handle);
	return true;
}

void QGraphicsVideoItem_virtualbase_mousePressEvent(void* self, QGraphicsSceneMouseEvent* event) {
	static_cast<MiqtVirtualQGraphicsVideoItem*>(self)->QGraphicsVideoItem::mousePressEvent(event);
}

bool QGraphicsVideoItem_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> slot_handle(slot);
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = std::move(slot_handle);
	return true;
}

void QGraphicsVideoItem_virtualbase_mouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event) {
	static_cast<MiqtVirtualQGraphicsVideoItem*>(self)->QGraphicsVideoItem::mouseMoveEvent(event);
}

bool QGraphicsVideoItem_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> slot_handle(slot);
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = std::move(slot_handle);
	return true;
}

void QGraphicsVideoItem_virtualbase_mouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event) {
	static_cast<MiqtVirtualQGraphicsVideoItem*>(self)->QGraphicsVideoItem::mouseReleaseEvent(event);
}

bool QGraphicsVideoItem_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> slot_handle(slot);
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = std::move(slot_handle);
	return true;
}

void QGraphicsVideoItem_virtualbase_mouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event) {
	static_cast<MiqtVirtualQGraphicsVideoItem*>(self)->QGraphicsVideoItem::mouseDoubleClickEvent(event);
}

bool QGraphicsVideoItem_override_virtual_wheelEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> slot_handle(slot);
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = std::move(slot_handle);
	return true;
}

void QGraphicsVideoItem_virtualbase_wheelEvent(void* self, QGraphicsSceneWheelEvent* event) {
	static_cast<MiqtVirtualQGraphicsVideoItem*>(self)->QGraphicsVideoItem::wheelEvent(event);
}

bool QGraphicsVideoItem_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> slot_handle(slot);
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = std::move(slot_handle);
	return true;
}

void QGraphicsVideoItem_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {
	static_cast<MiqtVirtualQGraphicsVideoItem*>(self)->QGraphicsVideoItem::inputMethodEvent(event);
}

bool QGraphicsVideoItem_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> slot_handle(slot);
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	return true;
}

QVariant* QGraphicsVideoItem_virtualbase_inputMethodQuery(const void* self, int query) {
	return new QVariant(static_cast<const MiqtVirtualQGraphicsVideoItem*>(self)->QGraphicsVideoItem::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

bool QGraphicsVideoItem_override_virtual_supportsExtension(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> slot_handle(slot);
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__supportsExtension = std::move(slot_handle);
	return true;
}

bool QGraphicsVideoItem_virtualbase_supportsExtension(const void* self, int extension) {
	return static_cast<const MiqtVirtualQGraphicsVideoItem*>(self)->QGraphicsVideoItem::supportsExtension(static_cast<MiqtVirtualQGraphicsVideoItem::Extension>(extension));
}

bool QGraphicsVideoItem_override_virtual_setExtension(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> slot_handle(slot);
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setExtension = std::move(slot_handle);
	return true;
}

void QGraphicsVideoItem_virtualbase_setExtension(void* self, int extension, QVariant* variant) {
	static_cast<MiqtVirtualQGraphicsVideoItem*>(self)->QGraphicsVideoItem::setExtension(static_cast<MiqtVirtualQGraphicsVideoItem::Extension>(extension), *variant);
}

bool QGraphicsVideoItem_override_virtual_extension(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsVideoItem> slot_handle(slot);
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__extension = std::move(slot_handle);
	return true;
}

QVariant* QGraphicsVideoItem_virtualbase_extension(const void* self, QVariant* variant) {
	return new QVariant(static_cast<const MiqtVirtualQGraphicsVideoItem*>(self)->QGraphicsVideoItem::extension(*variant));
}

void QGraphicsVideoItem_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

QObject* QGraphicsVideoItem_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QGraphicsVideoItem_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QGraphicsVideoItem_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QGraphicsVideoItem_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QGraphicsVideoItem_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->addToIndex();
}

void QGraphicsVideoItem_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->removeFromIndex();
}

void QGraphicsVideoItem_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsVideoItem* self_cast = dynamic_cast<MiqtVirtualQGraphicsVideoItem*>( (QGraphicsVideoItem*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->prepareGeometryChange();
}

void QGraphicsVideoItem_delete(QGraphicsVideoItem* self) {
	delete self;
}

