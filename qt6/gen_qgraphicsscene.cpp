#include <memory>
#include <utility>
#include <QBrush>
#include <QChildEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QGraphicsEllipseItem>
#include <QGraphicsItem>
#include <QGraphicsItemGroup>
#include <QGraphicsLineItem>
#include <QGraphicsPathItem>
#include <QGraphicsPixmapItem>
#include <QGraphicsProxyWidget>
#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QGraphicsSceneContextMenuEvent>
#include <QGraphicsSceneDragDropEvent>
#include <QGraphicsSceneHelpEvent>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsSceneWheelEvent>
#include <QGraphicsSimpleTextItem>
#include <QGraphicsTextItem>
#include <QGraphicsView>
#include <QGraphicsWidget>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QLineF>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPainter>
#include <QPainterPath>
#include <QPalette>
#include <QPen>
#include <QPixmap>
#include <QPointF>
#include <QRectF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyle>
#include <QTimerEvent>
#include <QTransform>
#include <QVariant>
#include <QWidget>
#include <qgraphicsscene.h>
#include "gen_qgraphicsscene.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QGraphicsScene(intptr_t);
void miqt_exec_callback_QGraphicsScene_changed(intptr_t, struct miqt_array /* of QRectF* */ );
void miqt_exec_callback_QGraphicsScene_sceneRectChanged(intptr_t, QRectF*);
void miqt_exec_callback_QGraphicsScene_selectionChanged(intptr_t);
void miqt_exec_callback_QGraphicsScene_focusItemChanged(intptr_t, QGraphicsItem*, QGraphicsItem*, int);
QVariant* miqt_exec_callback_QGraphicsScene_inputMethodQuery(const QGraphicsScene*, intptr_t, int);
bool miqt_exec_callback_QGraphicsScene_event(QGraphicsScene*, intptr_t, QEvent*);
bool miqt_exec_callback_QGraphicsScene_eventFilter(QGraphicsScene*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QGraphicsScene_contextMenuEvent(QGraphicsScene*, intptr_t, QGraphicsSceneContextMenuEvent*);
void miqt_exec_callback_QGraphicsScene_dragEnterEvent(QGraphicsScene*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsScene_dragMoveEvent(QGraphicsScene*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsScene_dragLeaveEvent(QGraphicsScene*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsScene_dropEvent(QGraphicsScene*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsScene_focusInEvent(QGraphicsScene*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsScene_focusOutEvent(QGraphicsScene*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsScene_helpEvent(QGraphicsScene*, intptr_t, QGraphicsSceneHelpEvent*);
void miqt_exec_callback_QGraphicsScene_keyPressEvent(QGraphicsScene*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsScene_keyReleaseEvent(QGraphicsScene*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsScene_mousePressEvent(QGraphicsScene*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsScene_mouseMoveEvent(QGraphicsScene*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsScene_mouseReleaseEvent(QGraphicsScene*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsScene_mouseDoubleClickEvent(QGraphicsScene*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsScene_wheelEvent(QGraphicsScene*, intptr_t, QGraphicsSceneWheelEvent*);
void miqt_exec_callback_QGraphicsScene_inputMethodEvent(QGraphicsScene*, intptr_t, QInputMethodEvent*);
void miqt_exec_callback_QGraphicsScene_drawBackground(QGraphicsScene*, intptr_t, QPainter*, QRectF*);
void miqt_exec_callback_QGraphicsScene_drawForeground(QGraphicsScene*, intptr_t, QPainter*, QRectF*);
bool miqt_exec_callback_QGraphicsScene_focusNextPrevChild(QGraphicsScene*, intptr_t, bool);
void miqt_exec_callback_QGraphicsScene_timerEvent(QGraphicsScene*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QGraphicsScene_childEvent(QGraphicsScene*, intptr_t, QChildEvent*);
void miqt_exec_callback_QGraphicsScene_customEvent(QGraphicsScene*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsScene_connectNotify(QGraphicsScene*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsScene_disconnectNotify(QGraphicsScene*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGraphicsScene final : public QGraphicsScene {
public:

	MiqtVirtualQGraphicsScene(): QGraphicsScene() {}
	MiqtVirtualQGraphicsScene(const QRectF& sceneRect): QGraphicsScene(sceneRect) {}
	MiqtVirtualQGraphicsScene(qreal x, qreal y, qreal width, qreal height): QGraphicsScene(x, y, width, height) {}
	MiqtVirtualQGraphicsScene(QObject* parent): QGraphicsScene(parent) {}
	MiqtVirtualQGraphicsScene(const QRectF& sceneRect, QObject* parent): QGraphicsScene(sceneRect, parent) {}
	MiqtVirtualQGraphicsScene(qreal x, qreal y, qreal width, qreal height, QObject* parent): QGraphicsScene(x, y, width, height, parent) {}

	virtual ~MiqtVirtualQGraphicsScene() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> handle__inputMethodQuery;
	bool owns_return__inputMethodQuery = false;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (!handle__inputMethodQuery) {
			return QGraphicsScene::inputMethodQuery(query);
		}

		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);
		QVariant* callback_return_value = miqt_exec_callback_QGraphicsScene_inputMethodQuery(this, handle__inputMethodQuery.value(), sigval1);
		std::unique_ptr<QVariant> callback_return_value_owner;
		if (owns_return__inputMethodQuery) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QVariant* QGraphicsScene_virtualbase_inputMethodQuery(const void* self, int query);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QGraphicsScene::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QGraphicsScene_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QGraphicsScene_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QGraphicsScene::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QGraphicsScene_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QGraphicsScene_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> handle__contextMenuEvent;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* event) override {
		if (!handle__contextMenuEvent) {
			QGraphicsScene::contextMenuEvent(event);
			return;
		}

		QGraphicsSceneContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsScene_contextMenuEvent(this, handle__contextMenuEvent.value(), sigval1);

	}

	friend void QGraphicsScene_virtualbase_contextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> handle__dragEnterEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* event) override {
		if (!handle__dragEnterEvent) {
			QGraphicsScene::dragEnterEvent(event);
			return;
		}

		QGraphicsSceneDragDropEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsScene_dragEnterEvent(this, handle__dragEnterEvent.value(), sigval1);

	}

	friend void QGraphicsScene_virtualbase_dragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> handle__dragMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (!handle__dragMoveEvent) {
			QGraphicsScene::dragMoveEvent(event);
			return;
		}

		QGraphicsSceneDragDropEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsScene_dragMoveEvent(this, handle__dragMoveEvent.value(), sigval1);

	}

	friend void QGraphicsScene_virtualbase_dragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> handle__dragLeaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* event) override {
		if (!handle__dragLeaveEvent) {
			QGraphicsScene::dragLeaveEvent(event);
			return;
		}

		QGraphicsSceneDragDropEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsScene_dragLeaveEvent(this, handle__dragLeaveEvent.value(), sigval1);

	}

	friend void QGraphicsScene_virtualbase_dragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> handle__dropEvent;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* event) override {
		if (!handle__dropEvent) {
			QGraphicsScene::dropEvent(event);
			return;
		}

		QGraphicsSceneDragDropEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsScene_dropEvent(this, handle__dropEvent.value(), sigval1);

	}

	friend void QGraphicsScene_virtualbase_dropEvent(void* self, QGraphicsSceneDragDropEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> handle__focusInEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (!handle__focusInEvent) {
			QGraphicsScene::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsScene_focusInEvent(this, handle__focusInEvent.value(), sigval1);

	}

	friend void QGraphicsScene_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> handle__focusOutEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (!handle__focusOutEvent) {
			QGraphicsScene::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsScene_focusOutEvent(this, handle__focusOutEvent.value(), sigval1);

	}

	friend void QGraphicsScene_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> handle__helpEvent;

	// Subclass to allow providing a Go implementation
	virtual void helpEvent(QGraphicsSceneHelpEvent* event) override {
		if (!handle__helpEvent) {
			QGraphicsScene::helpEvent(event);
			return;
		}

		QGraphicsSceneHelpEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsScene_helpEvent(this, handle__helpEvent.value(), sigval1);

	}

	friend void QGraphicsScene_virtualbase_helpEvent(void* self, QGraphicsSceneHelpEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> handle__keyPressEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (!handle__keyPressEvent) {
			QGraphicsScene::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsScene_keyPressEvent(this, handle__keyPressEvent.value(), sigval1);

	}

	friend void QGraphicsScene_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> handle__keyReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (!handle__keyReleaseEvent) {
			QGraphicsScene::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsScene_keyReleaseEvent(this, handle__keyReleaseEvent.value(), sigval1);

	}

	friend void QGraphicsScene_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> handle__mousePressEvent;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
		if (!handle__mousePressEvent) {
			QGraphicsScene::mousePressEvent(event);
			return;
		}

		QGraphicsSceneMouseEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsScene_mousePressEvent(this, handle__mousePressEvent.value(), sigval1);

	}

	friend void QGraphicsScene_virtualbase_mousePressEvent(void* self, QGraphicsSceneMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> handle__mouseMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override {
		if (!handle__mouseMoveEvent) {
			QGraphicsScene::mouseMoveEvent(event);
			return;
		}

		QGraphicsSceneMouseEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsScene_mouseMoveEvent(this, handle__mouseMoveEvent.value(), sigval1);

	}

	friend void QGraphicsScene_virtualbase_mouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> handle__mouseReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override {
		if (!handle__mouseReleaseEvent) {
			QGraphicsScene::mouseReleaseEvent(event);
			return;
		}

		QGraphicsSceneMouseEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsScene_mouseReleaseEvent(this, handle__mouseReleaseEvent.value(), sigval1);

	}

	friend void QGraphicsScene_virtualbase_mouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> handle__mouseDoubleClickEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
		if (!handle__mouseDoubleClickEvent) {
			QGraphicsScene::mouseDoubleClickEvent(event);
			return;
		}

		QGraphicsSceneMouseEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsScene_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent.value(), sigval1);

	}

	friend void QGraphicsScene_virtualbase_mouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> handle__wheelEvent;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* event) override {
		if (!handle__wheelEvent) {
			QGraphicsScene::wheelEvent(event);
			return;
		}

		QGraphicsSceneWheelEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsScene_wheelEvent(this, handle__wheelEvent.value(), sigval1);

	}

	friend void QGraphicsScene_virtualbase_wheelEvent(void* self, QGraphicsSceneWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> handle__inputMethodEvent;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (!handle__inputMethodEvent) {
			QGraphicsScene::inputMethodEvent(event);
			return;
		}

		QInputMethodEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsScene_inputMethodEvent(this, handle__inputMethodEvent.value(), sigval1);

	}

	friend void QGraphicsScene_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> handle__drawBackground;

	// Subclass to allow providing a Go implementation
	virtual void drawBackground(QPainter* painter, const QRectF& rect) override {
		if (!handle__drawBackground) {
			QGraphicsScene::drawBackground(painter, rect);
			return;
		}

		QPainter* sigval1 = painter;
		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval2 = const_cast<QRectF*>(&rect_ret);
		miqt_exec_callback_QGraphicsScene_drawBackground(this, handle__drawBackground.value(), sigval1, sigval2);

	}

	friend void QGraphicsScene_virtualbase_drawBackground(void* self, QPainter* painter, QRectF* rect);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> handle__drawForeground;

	// Subclass to allow providing a Go implementation
	virtual void drawForeground(QPainter* painter, const QRectF& rect) override {
		if (!handle__drawForeground) {
			QGraphicsScene::drawForeground(painter, rect);
			return;
		}

		QPainter* sigval1 = painter;
		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval2 = const_cast<QRectF*>(&rect_ret);
		miqt_exec_callback_QGraphicsScene_drawForeground(this, handle__drawForeground.value(), sigval1, sigval2);

	}

	friend void QGraphicsScene_virtualbase_drawForeground(void* self, QPainter* painter, QRectF* rect);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> handle__focusNextPrevChild;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (!handle__focusNextPrevChild) {
			return QGraphicsScene::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QGraphicsScene_focusNextPrevChild(this, handle__focusNextPrevChild.value(), sigval1);
		return callback_return_value;
	}

	friend bool QGraphicsScene_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QGraphicsScene::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsScene_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QGraphicsScene_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QGraphicsScene::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsScene_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QGraphicsScene_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QGraphicsScene::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsScene_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QGraphicsScene_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QGraphicsScene::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QGraphicsScene_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QGraphicsScene_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QGraphicsScene::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QGraphicsScene_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QGraphicsScene_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QGraphicsScene_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsScene_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsScene_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QGraphicsScene_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QGraphicsScene* QGraphicsScene_new() {
	return new (std::nothrow) MiqtVirtualQGraphicsScene();
}

QGraphicsScene* QGraphicsScene_new2(QRectF* sceneRect) {
	return new (std::nothrow) MiqtVirtualQGraphicsScene(*sceneRect);
}

QGraphicsScene* QGraphicsScene_new3(double x, double y, double width, double height) {
	return new (std::nothrow) MiqtVirtualQGraphicsScene(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(width), static_cast<qreal>(height));
}

QGraphicsScene* QGraphicsScene_new4(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQGraphicsScene(parent);
}

QGraphicsScene* QGraphicsScene_new5(QRectF* sceneRect, QObject* parent) {
	return new (std::nothrow) MiqtVirtualQGraphicsScene(*sceneRect, parent);
}

QGraphicsScene* QGraphicsScene_new6(double x, double y, double width, double height, QObject* parent) {
	return new (std::nothrow) MiqtVirtualQGraphicsScene(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(width), static_cast<qreal>(height), parent);
}

void QGraphicsScene_virtbase(QGraphicsScene* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QGraphicsScene_metaObject(const QGraphicsScene* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsScene_metacast(QGraphicsScene* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsScene_tr(const char* s) {
	QString _ret = QGraphicsScene::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QRectF* QGraphicsScene_sceneRect(const QGraphicsScene* self) {
	return new QRectF(self->sceneRect());
}

double QGraphicsScene_width(const QGraphicsScene* self) {
	qreal _ret = self->width();
	return static_cast<double>(_ret);
}

double QGraphicsScene_height(const QGraphicsScene* self) {
	qreal _ret = self->height();
	return static_cast<double>(_ret);
}

void QGraphicsScene_setSceneRect(QGraphicsScene* self, QRectF* rect) {
	self->setSceneRect(*rect);
}

void QGraphicsScene_setSceneRect2(QGraphicsScene* self, double x, double y, double w, double h) {
	self->setSceneRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

void QGraphicsScene_render(QGraphicsScene* self, QPainter* painter) {
	self->render(painter);
}

int QGraphicsScene_itemIndexMethod(const QGraphicsScene* self) {
	QGraphicsScene::ItemIndexMethod _ret = self->itemIndexMethod();
	return static_cast<int>(_ret);
}

void QGraphicsScene_setItemIndexMethod(QGraphicsScene* self, int method) {
	self->setItemIndexMethod(static_cast<QGraphicsScene::ItemIndexMethod>(method));
}

int QGraphicsScene_bspTreeDepth(const QGraphicsScene* self) {
	return self->bspTreeDepth();
}

void QGraphicsScene_setBspTreeDepth(QGraphicsScene* self, int depth) {
	self->setBspTreeDepth(static_cast<int>(depth));
}

QRectF* QGraphicsScene_itemsBoundingRect(const QGraphicsScene* self) {
	return new QRectF(self->itemsBoundingRect());
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_items(const QGraphicsScene* self) {
	QList<QGraphicsItem *> _ret = self->items();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_itemsWithPos(const QGraphicsScene* self, QPointF* pos) {
	QList<QGraphicsItem *> _ret = self->items(*pos);
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_itemsWithRect(const QGraphicsScene* self, QRectF* rect) {
	QList<QGraphicsItem *> _ret = self->items(*rect);
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_itemsWithPath(const QGraphicsScene* self, QPainterPath* path) {
	QList<QGraphicsItem *> _ret = self->items(*path);
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_items2(const QGraphicsScene* self, double x, double y, double w, double h, int mode, int order) {
	QList<QGraphicsItem *> _ret = self->items(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_collidingItems(const QGraphicsScene* self, QGraphicsItem* item) {
	QList<QGraphicsItem *> _ret = self->collidingItems(item);
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QGraphicsItem* QGraphicsScene_itemAt(const QGraphicsScene* self, QPointF* pos, QTransform* deviceTransform) {
	return self->itemAt(*pos, *deviceTransform);
}

QGraphicsItem* QGraphicsScene_itemAt2(const QGraphicsScene* self, double x, double y, QTransform* deviceTransform) {
	return self->itemAt(static_cast<qreal>(x), static_cast<qreal>(y), *deviceTransform);
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_selectedItems(const QGraphicsScene* self) {
	QList<QGraphicsItem *> _ret = self->selectedItems();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QPainterPath* QGraphicsScene_selectionArea(const QGraphicsScene* self) {
	return new QPainterPath(self->selectionArea());
}

void QGraphicsScene_setSelectionArea(QGraphicsScene* self, QPainterPath* path, QTransform* deviceTransform) {
	self->setSelectionArea(*path, *deviceTransform);
}

void QGraphicsScene_setSelectionAreaWithPath(QGraphicsScene* self, QPainterPath* path) {
	self->setSelectionArea(*path);
}

QGraphicsItemGroup* QGraphicsScene_createItemGroup(QGraphicsScene* self, struct miqt_array /* of QGraphicsItem* */  items) {
	QList<QGraphicsItem *> items_QList;
	items_QList.reserve(items.len);
	QGraphicsItem** items_arr = static_cast<QGraphicsItem**>(items.data);
	for(size_t i = 0; i < items.len; ++i) {
		items_QList.push_back(items_arr[i]);
	}
	return self->createItemGroup(items_QList);
}

void QGraphicsScene_destroyItemGroup(QGraphicsScene* self, QGraphicsItemGroup* group) {
	self->destroyItemGroup(group);
}

void QGraphicsScene_addItem(QGraphicsScene* self, QGraphicsItem* item) {
	self->addItem(item);
}

QGraphicsEllipseItem* QGraphicsScene_addEllipse(QGraphicsScene* self, QRectF* rect) {
	return self->addEllipse(*rect);
}

QGraphicsLineItem* QGraphicsScene_addLine(QGraphicsScene* self, QLineF* line) {
	return self->addLine(*line);
}

QGraphicsPathItem* QGraphicsScene_addPath(QGraphicsScene* self, QPainterPath* path) {
	return self->addPath(*path);
}

QGraphicsPixmapItem* QGraphicsScene_addPixmap(QGraphicsScene* self, QPixmap* pixmap) {
	return self->addPixmap(*pixmap);
}

QGraphicsRectItem* QGraphicsScene_addRect(QGraphicsScene* self, QRectF* rect) {
	return self->addRect(*rect);
}

QGraphicsTextItem* QGraphicsScene_addText(QGraphicsScene* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addText(text_QString);
}

QGraphicsSimpleTextItem* QGraphicsScene_addSimpleText(QGraphicsScene* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addSimpleText(text_QString);
}

QGraphicsProxyWidget* QGraphicsScene_addWidget(QGraphicsScene* self, QWidget* widget) {
	return self->addWidget(widget);
}

QGraphicsEllipseItem* QGraphicsScene_addEllipse2(QGraphicsScene* self, double x, double y, double w, double h) {
	return self->addEllipse(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QGraphicsLineItem* QGraphicsScene_addLine2(QGraphicsScene* self, double x1, double y1, double x2, double y2) {
	return self->addLine(static_cast<qreal>(x1), static_cast<qreal>(y1), static_cast<qreal>(x2), static_cast<qreal>(y2));
}

QGraphicsRectItem* QGraphicsScene_addRect2(QGraphicsScene* self, double x, double y, double w, double h) {
	return self->addRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

void QGraphicsScene_removeItem(QGraphicsScene* self, QGraphicsItem* item) {
	self->removeItem(item);
}

QGraphicsItem* QGraphicsScene_focusItem(const QGraphicsScene* self) {
	return self->focusItem();
}

void QGraphicsScene_setFocusItem(QGraphicsScene* self, QGraphicsItem* item) {
	self->setFocusItem(item);
}

bool QGraphicsScene_hasFocus(const QGraphicsScene* self) {
	return self->hasFocus();
}

void QGraphicsScene_setFocus(QGraphicsScene* self) {
	self->setFocus();
}

void QGraphicsScene_clearFocus(QGraphicsScene* self) {
	self->clearFocus();
}

void QGraphicsScene_setStickyFocus(QGraphicsScene* self, bool enabled) {
	self->setStickyFocus(enabled);
}

bool QGraphicsScene_stickyFocus(const QGraphicsScene* self) {
	return self->stickyFocus();
}

QGraphicsItem* QGraphicsScene_mouseGrabberItem(const QGraphicsScene* self) {
	return self->mouseGrabberItem();
}

QBrush* QGraphicsScene_backgroundBrush(const QGraphicsScene* self) {
	return new QBrush(self->backgroundBrush());
}

void QGraphicsScene_setBackgroundBrush(QGraphicsScene* self, QBrush* brush) {
	self->setBackgroundBrush(*brush);
}

QBrush* QGraphicsScene_foregroundBrush(const QGraphicsScene* self) {
	return new QBrush(self->foregroundBrush());
}

void QGraphicsScene_setForegroundBrush(QGraphicsScene* self, QBrush* brush) {
	self->setForegroundBrush(*brush);
}

QVariant* QGraphicsScene_inputMethodQuery(const QGraphicsScene* self, int query) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

struct miqt_array /* of QGraphicsView* */  QGraphicsScene_views(const QGraphicsScene* self) {
	QList<QGraphicsView *> _ret = self->views();
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsView** _arr = static_cast<QGraphicsView**>(malloc(sizeof(QGraphicsView*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QGraphicsScene_update(QGraphicsScene* self, double x, double y, double w, double h) {
	self->update(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

void QGraphicsScene_invalidate(QGraphicsScene* self, double x, double y, double w, double h) {
	self->invalidate(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h));
}

QStyle* QGraphicsScene_style(const QGraphicsScene* self) {
	return self->style();
}

void QGraphicsScene_setStyle(QGraphicsScene* self, QStyle* style) {
	self->setStyle(style);
}

QFont* QGraphicsScene_font(const QGraphicsScene* self) {
	return new QFont(self->font());
}

void QGraphicsScene_setFont(QGraphicsScene* self, QFont* font) {
	self->setFont(*font);
}

QPalette* QGraphicsScene_palette(const QGraphicsScene* self) {
	return new QPalette(self->palette());
}

void QGraphicsScene_setPalette(QGraphicsScene* self, QPalette* palette) {
	self->setPalette(*palette);
}

bool QGraphicsScene_isActive(const QGraphicsScene* self) {
	return self->isActive();
}

QGraphicsItem* QGraphicsScene_activePanel(const QGraphicsScene* self) {
	return self->activePanel();
}

void QGraphicsScene_setActivePanel(QGraphicsScene* self, QGraphicsItem* item) {
	self->setActivePanel(item);
}

QGraphicsWidget* QGraphicsScene_activeWindow(const QGraphicsScene* self) {
	return self->activeWindow();
}

void QGraphicsScene_setActiveWindow(QGraphicsScene* self, QGraphicsWidget* widget) {
	self->setActiveWindow(widget);
}

bool QGraphicsScene_sendEvent(QGraphicsScene* self, QGraphicsItem* item, QEvent* event) {
	return self->sendEvent(item, event);
}

double QGraphicsScene_minimumRenderSize(const QGraphicsScene* self) {
	qreal _ret = self->minimumRenderSize();
	return static_cast<double>(_ret);
}

void QGraphicsScene_setMinimumRenderSize(QGraphicsScene* self, double minSize) {
	self->setMinimumRenderSize(static_cast<qreal>(minSize));
}

bool QGraphicsScene_focusOnTouch(const QGraphicsScene* self) {
	return self->focusOnTouch();
}

void QGraphicsScene_setFocusOnTouch(QGraphicsScene* self, bool enabled) {
	self->setFocusOnTouch(enabled);
}

void QGraphicsScene_update2(QGraphicsScene* self) {
	self->update();
}

void QGraphicsScene_invalidate2(QGraphicsScene* self) {
	self->invalidate();
}

void QGraphicsScene_advance(QGraphicsScene* self) {
	self->advance();
}

void QGraphicsScene_clearSelection(QGraphicsScene* self) {
	self->clearSelection();
}

void QGraphicsScene_clear(QGraphicsScene* self) {
	self->clear();
}

void QGraphicsScene_changed(QGraphicsScene* self, struct miqt_array /* of QRectF* */  region) {
	QList<QRectF> region_QList;
	region_QList.reserve(region.len);
	QRectF** region_arr = static_cast<QRectF**>(region.data);
	for(size_t i = 0; i < region.len; ++i) {
		region_QList.push_back(*(region_arr[i]));
	}
	self->changed(region_QList);
}

void* QGraphicsScene_connect_changed(QGraphicsScene* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene>>(slot);
	return new QMetaObject::Connection(QGraphicsScene::connect(self, static_cast<void (QGraphicsScene::*)(const QList<QRectF>&)>(&QGraphicsScene::changed), self, [slot_handle](const QList<QRectF>& region) {
		intptr_t slot = slot_handle->value();
		const QList<QRectF>& region_ret = region;
		// Convert QList<> from C++ memory to manually-managed C memory
		QRectF** region_arr = static_cast<QRectF**>(malloc(sizeof(QRectF*) * region_ret.length()));
		for (size_t i = 0, e = region_ret.length(); i < e; ++i) {
			region_arr[i] = new QRectF(region_ret[i]);
		}
		struct miqt_array region_out;
		region_out.len = region_ret.length();
		region_out.data = static_cast<void*>(region_arr);
		struct miqt_array /* of QRectF* */  sigval1 = region_out;
		miqt_exec_callback_QGraphicsScene_changed(slot, sigval1);
	}));
}

void QGraphicsScene_sceneRectChanged(QGraphicsScene* self, QRectF* rect) {
	self->sceneRectChanged(*rect);
}

void* QGraphicsScene_connect_sceneRectChanged(QGraphicsScene* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene>>(slot);
	return new QMetaObject::Connection(QGraphicsScene::connect(self, static_cast<void (QGraphicsScene::*)(const QRectF&)>(&QGraphicsScene::sceneRectChanged), self, [slot_handle](const QRectF& rect) {
		intptr_t slot = slot_handle->value();
		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&rect_ret);
		miqt_exec_callback_QGraphicsScene_sceneRectChanged(slot, sigval1);
	}));
}

void QGraphicsScene_selectionChanged(QGraphicsScene* self) {
	self->selectionChanged();
}

void* QGraphicsScene_connect_selectionChanged(QGraphicsScene* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene>>(slot);
	return new QMetaObject::Connection(QGraphicsScene::connect(self, static_cast<void (QGraphicsScene::*)()>(&QGraphicsScene::selectionChanged), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QGraphicsScene_selectionChanged(slot);
	}));
}

void QGraphicsScene_focusItemChanged(QGraphicsScene* self, QGraphicsItem* newFocus, QGraphicsItem* oldFocus, int reason) {
	self->focusItemChanged(newFocus, oldFocus, static_cast<Qt::FocusReason>(reason));
}

void* QGraphicsScene_connect_focusItemChanged(QGraphicsScene* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene>>(slot);
	return new QMetaObject::Connection(QGraphicsScene::connect(self, static_cast<void (QGraphicsScene::*)(QGraphicsItem*, QGraphicsItem*, Qt::FocusReason)>(&QGraphicsScene::focusItemChanged), self, [slot_handle](QGraphicsItem* newFocus, QGraphicsItem* oldFocus, Qt::FocusReason reason) {
		intptr_t slot = slot_handle->value();
		QGraphicsItem* sigval1 = newFocus;
		QGraphicsItem* sigval2 = oldFocus;
		Qt::FocusReason reason_ret = reason;
		int sigval3 = static_cast<int>(reason_ret);
		miqt_exec_callback_QGraphicsScene_focusItemChanged(slot, sigval1, sigval2, sigval3);
	}));
}

struct miqt_string QGraphicsScene_tr2(const char* s, const char* c) {
	QString _ret = QGraphicsScene::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsScene_tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsScene::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsScene_render2(QGraphicsScene* self, QPainter* painter, QRectF* target) {
	self->render(painter, *target);
}

void QGraphicsScene_render3(QGraphicsScene* self, QPainter* painter, QRectF* target, QRectF* source) {
	self->render(painter, *target, *source);
}

void QGraphicsScene_render4(QGraphicsScene* self, QPainter* painter, QRectF* target, QRectF* source, int aspectRatioMode) {
	self->render(painter, *target, *source, static_cast<Qt::AspectRatioMode>(aspectRatioMode));
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_itemsWithOrder(const QGraphicsScene* self, int order) {
	QList<QGraphicsItem *> _ret = self->items(static_cast<Qt::SortOrder>(order));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_items3(const QGraphicsScene* self, QPointF* pos, int mode) {
	QList<QGraphicsItem *> _ret = self->items(*pos, static_cast<Qt::ItemSelectionMode>(mode));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_items4(const QGraphicsScene* self, QPointF* pos, int mode, int order) {
	QList<QGraphicsItem *> _ret = self->items(*pos, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_items5(const QGraphicsScene* self, QPointF* pos, int mode, int order, QTransform* deviceTransform) {
	QList<QGraphicsItem *> _ret = self->items(*pos, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order), *deviceTransform);
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_items6(const QGraphicsScene* self, QRectF* rect, int mode) {
	QList<QGraphicsItem *> _ret = self->items(*rect, static_cast<Qt::ItemSelectionMode>(mode));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_items7(const QGraphicsScene* self, QRectF* rect, int mode, int order) {
	QList<QGraphicsItem *> _ret = self->items(*rect, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_items8(const QGraphicsScene* self, QRectF* rect, int mode, int order, QTransform* deviceTransform) {
	QList<QGraphicsItem *> _ret = self->items(*rect, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order), *deviceTransform);
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_items12(const QGraphicsScene* self, QPainterPath* path, int mode) {
	QList<QGraphicsItem *> _ret = self->items(*path, static_cast<Qt::ItemSelectionMode>(mode));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_items13(const QGraphicsScene* self, QPainterPath* path, int mode, int order) {
	QList<QGraphicsItem *> _ret = self->items(*path, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_items14(const QGraphicsScene* self, QPainterPath* path, int mode, int order, QTransform* deviceTransform) {
	QList<QGraphicsItem *> _ret = self->items(*path, static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order), *deviceTransform);
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_items15(const QGraphicsScene* self, double x, double y, double w, double h, int mode, int order, QTransform* deviceTransform) {
	QList<QGraphicsItem *> _ret = self->items(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<Qt::ItemSelectionMode>(mode), static_cast<Qt::SortOrder>(order), *deviceTransform);
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QGraphicsItem* */  QGraphicsScene_collidingItems2(const QGraphicsScene* self, QGraphicsItem* item, int mode) {
	QList<QGraphicsItem *> _ret = self->collidingItems(item, static_cast<Qt::ItemSelectionMode>(mode));
	// Convert QList<> from C++ memory to manually-managed C memory
	QGraphicsItem** _arr = static_cast<QGraphicsItem**>(malloc(sizeof(QGraphicsItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QGraphicsScene_setSelectionArea2(QGraphicsScene* self, QPainterPath* path, int selectionOperation) {
	self->setSelectionArea(*path, static_cast<Qt::ItemSelectionOperation>(selectionOperation));
}

void QGraphicsScene_setSelectionArea3(QGraphicsScene* self, QPainterPath* path, int selectionOperation, int mode) {
	self->setSelectionArea(*path, static_cast<Qt::ItemSelectionOperation>(selectionOperation), static_cast<Qt::ItemSelectionMode>(mode));
}

void QGraphicsScene_setSelectionArea4(QGraphicsScene* self, QPainterPath* path, int selectionOperation, int mode, QTransform* deviceTransform) {
	self->setSelectionArea(*path, static_cast<Qt::ItemSelectionOperation>(selectionOperation), static_cast<Qt::ItemSelectionMode>(mode), *deviceTransform);
}

QGraphicsEllipseItem* QGraphicsScene_addEllipse3(QGraphicsScene* self, QRectF* rect, QPen* pen) {
	return self->addEllipse(*rect, *pen);
}

QGraphicsEllipseItem* QGraphicsScene_addEllipse4(QGraphicsScene* self, QRectF* rect, QPen* pen, QBrush* brush) {
	return self->addEllipse(*rect, *pen, *brush);
}

QGraphicsLineItem* QGraphicsScene_addLine3(QGraphicsScene* self, QLineF* line, QPen* pen) {
	return self->addLine(*line, *pen);
}

QGraphicsPathItem* QGraphicsScene_addPath2(QGraphicsScene* self, QPainterPath* path, QPen* pen) {
	return self->addPath(*path, *pen);
}

QGraphicsPathItem* QGraphicsScene_addPath3(QGraphicsScene* self, QPainterPath* path, QPen* pen, QBrush* brush) {
	return self->addPath(*path, *pen, *brush);
}

QGraphicsRectItem* QGraphicsScene_addRect3(QGraphicsScene* self, QRectF* rect, QPen* pen) {
	return self->addRect(*rect, *pen);
}

QGraphicsRectItem* QGraphicsScene_addRect4(QGraphicsScene* self, QRectF* rect, QPen* pen, QBrush* brush) {
	return self->addRect(*rect, *pen, *brush);
}

QGraphicsTextItem* QGraphicsScene_addText2(QGraphicsScene* self, struct miqt_string text, QFont* font) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addText(text_QString, *font);
}

QGraphicsSimpleTextItem* QGraphicsScene_addSimpleText2(QGraphicsScene* self, struct miqt_string text, QFont* font) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return self->addSimpleText(text_QString, *font);
}

QGraphicsProxyWidget* QGraphicsScene_addWidget2(QGraphicsScene* self, QWidget* widget, int wFlags) {
	return self->addWidget(widget, static_cast<Qt::WindowFlags>(wFlags));
}

QGraphicsEllipseItem* QGraphicsScene_addEllipse5(QGraphicsScene* self, double x, double y, double w, double h, QPen* pen) {
	return self->addEllipse(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), *pen);
}

QGraphicsEllipseItem* QGraphicsScene_addEllipse6(QGraphicsScene* self, double x, double y, double w, double h, QPen* pen, QBrush* brush) {
	return self->addEllipse(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), *pen, *brush);
}

QGraphicsLineItem* QGraphicsScene_addLine4(QGraphicsScene* self, double x1, double y1, double x2, double y2, QPen* pen) {
	return self->addLine(static_cast<qreal>(x1), static_cast<qreal>(y1), static_cast<qreal>(x2), static_cast<qreal>(y2), *pen);
}

QGraphicsRectItem* QGraphicsScene_addRect5(QGraphicsScene* self, double x, double y, double w, double h, QPen* pen) {
	return self->addRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), *pen);
}

QGraphicsRectItem* QGraphicsScene_addRect6(QGraphicsScene* self, double x, double y, double w, double h, QPen* pen, QBrush* brush) {
	return self->addRect(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), *pen, *brush);
}

void QGraphicsScene_setFocusItem2(QGraphicsScene* self, QGraphicsItem* item, int focusReason) {
	self->setFocusItem(item, static_cast<Qt::FocusReason>(focusReason));
}

void QGraphicsScene_setFocusWithFocusReason(QGraphicsScene* self, int focusReason) {
	self->setFocus(static_cast<Qt::FocusReason>(focusReason));
}

void QGraphicsScene_invalidate3(QGraphicsScene* self, double x, double y, double w, double h, int layers) {
	self->invalidate(static_cast<qreal>(x), static_cast<qreal>(y), static_cast<qreal>(w), static_cast<qreal>(h), static_cast<QGraphicsScene::SceneLayers>(layers));
}

void QGraphicsScene_updateWithRect(QGraphicsScene* self, QRectF* rect) {
	self->update(*rect);
}

void QGraphicsScene_invalidateWithRect(QGraphicsScene* self, QRectF* rect) {
	self->invalidate(*rect);
}

void QGraphicsScene_invalidate4(QGraphicsScene* self, QRectF* rect, int layers) {
	self->invalidate(*rect, static_cast<QGraphicsScene::SceneLayers>(layers));
}

bool QGraphicsScene_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> slot_handle(slot);
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	self_cast->owns_return__inputMethodQuery = false;
	return true;
}

bool QGraphicsScene_override_virtual_owned_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> slot_handle(slot);
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	self_cast->owns_return__inputMethodQuery = true;
	return true;
}

QVariant* QGraphicsScene_virtualbase_inputMethodQuery(const void* self, int query) {
	return new QVariant(static_cast<const MiqtVirtualQGraphicsScene*>(self)->QGraphicsScene::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

bool QGraphicsScene_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> slot_handle(slot);
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QGraphicsScene_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQGraphicsScene*>(self)->QGraphicsScene::event(event);
}

bool QGraphicsScene_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> slot_handle(slot);
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QGraphicsScene_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQGraphicsScene*>(self)->QGraphicsScene::eventFilter(watched, event);
}

bool QGraphicsScene_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> slot_handle(slot);
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = std::move(slot_handle);
	return true;
}

void QGraphicsScene_virtualbase_contextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* event) {
	static_cast<MiqtVirtualQGraphicsScene*>(self)->QGraphicsScene::contextMenuEvent(event);
}

bool QGraphicsScene_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> slot_handle(slot);
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = std::move(slot_handle);
	return true;
}

void QGraphicsScene_virtualbase_dragEnterEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	static_cast<MiqtVirtualQGraphicsScene*>(self)->QGraphicsScene::dragEnterEvent(event);
}

bool QGraphicsScene_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> slot_handle(slot);
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = std::move(slot_handle);
	return true;
}

void QGraphicsScene_virtualbase_dragMoveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	static_cast<MiqtVirtualQGraphicsScene*>(self)->QGraphicsScene::dragMoveEvent(event);
}

bool QGraphicsScene_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> slot_handle(slot);
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = std::move(slot_handle);
	return true;
}

void QGraphicsScene_virtualbase_dragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	static_cast<MiqtVirtualQGraphicsScene*>(self)->QGraphicsScene::dragLeaveEvent(event);
}

bool QGraphicsScene_override_virtual_dropEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> slot_handle(slot);
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = std::move(slot_handle);
	return true;
}

void QGraphicsScene_virtualbase_dropEvent(void* self, QGraphicsSceneDragDropEvent* event) {
	static_cast<MiqtVirtualQGraphicsScene*>(self)->QGraphicsScene::dropEvent(event);
}

bool QGraphicsScene_override_virtual_focusInEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> slot_handle(slot);
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = std::move(slot_handle);
	return true;
}

void QGraphicsScene_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQGraphicsScene*>(self)->QGraphicsScene::focusInEvent(event);
}

bool QGraphicsScene_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> slot_handle(slot);
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = std::move(slot_handle);
	return true;
}

void QGraphicsScene_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQGraphicsScene*>(self)->QGraphicsScene::focusOutEvent(event);
}

bool QGraphicsScene_override_virtual_helpEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> slot_handle(slot);
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__helpEvent = std::move(slot_handle);
	return true;
}

void QGraphicsScene_virtualbase_helpEvent(void* self, QGraphicsSceneHelpEvent* event) {
	static_cast<MiqtVirtualQGraphicsScene*>(self)->QGraphicsScene::helpEvent(event);
}

bool QGraphicsScene_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> slot_handle(slot);
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = std::move(slot_handle);
	return true;
}

void QGraphicsScene_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQGraphicsScene*>(self)->QGraphicsScene::keyPressEvent(event);
}

bool QGraphicsScene_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> slot_handle(slot);
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = std::move(slot_handle);
	return true;
}

void QGraphicsScene_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQGraphicsScene*>(self)->QGraphicsScene::keyReleaseEvent(event);
}

bool QGraphicsScene_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> slot_handle(slot);
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = std::move(slot_handle);
	return true;
}

void QGraphicsScene_virtualbase_mousePressEvent(void* self, QGraphicsSceneMouseEvent* event) {
	static_cast<MiqtVirtualQGraphicsScene*>(self)->QGraphicsScene::mousePressEvent(event);
}

bool QGraphicsScene_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> slot_handle(slot);
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = std::move(slot_handle);
	return true;
}

void QGraphicsScene_virtualbase_mouseMoveEvent(void* self, QGraphicsSceneMouseEvent* event) {
	static_cast<MiqtVirtualQGraphicsScene*>(self)->QGraphicsScene::mouseMoveEvent(event);
}

bool QGraphicsScene_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> slot_handle(slot);
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = std::move(slot_handle);
	return true;
}

void QGraphicsScene_virtualbase_mouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* event) {
	static_cast<MiqtVirtualQGraphicsScene*>(self)->QGraphicsScene::mouseReleaseEvent(event);
}

bool QGraphicsScene_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> slot_handle(slot);
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = std::move(slot_handle);
	return true;
}

void QGraphicsScene_virtualbase_mouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* event) {
	static_cast<MiqtVirtualQGraphicsScene*>(self)->QGraphicsScene::mouseDoubleClickEvent(event);
}

bool QGraphicsScene_override_virtual_wheelEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> slot_handle(slot);
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = std::move(slot_handle);
	return true;
}

void QGraphicsScene_virtualbase_wheelEvent(void* self, QGraphicsSceneWheelEvent* event) {
	static_cast<MiqtVirtualQGraphicsScene*>(self)->QGraphicsScene::wheelEvent(event);
}

bool QGraphicsScene_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> slot_handle(slot);
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = std::move(slot_handle);
	return true;
}

void QGraphicsScene_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {
	static_cast<MiqtVirtualQGraphicsScene*>(self)->QGraphicsScene::inputMethodEvent(event);
}

bool QGraphicsScene_override_virtual_drawBackground(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> slot_handle(slot);
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawBackground = std::move(slot_handle);
	return true;
}

void QGraphicsScene_virtualbase_drawBackground(void* self, QPainter* painter, QRectF* rect) {
	static_cast<MiqtVirtualQGraphicsScene*>(self)->QGraphicsScene::drawBackground(painter, *rect);
}

bool QGraphicsScene_override_virtual_drawForeground(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> slot_handle(slot);
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawForeground = std::move(slot_handle);
	return true;
}

void QGraphicsScene_virtualbase_drawForeground(void* self, QPainter* painter, QRectF* rect) {
	static_cast<MiqtVirtualQGraphicsScene*>(self)->QGraphicsScene::drawForeground(painter, *rect);
}

bool QGraphicsScene_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> slot_handle(slot);
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = std::move(slot_handle);
	return true;
}

bool QGraphicsScene_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQGraphicsScene*>(self)->QGraphicsScene::focusNextPrevChild(next);
}

bool QGraphicsScene_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> slot_handle(slot);
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QGraphicsScene_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQGraphicsScene*>(self)->QGraphicsScene::timerEvent(event);
}

bool QGraphicsScene_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> slot_handle(slot);
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QGraphicsScene_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQGraphicsScene*>(self)->QGraphicsScene::childEvent(event);
}

bool QGraphicsScene_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> slot_handle(slot);
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QGraphicsScene_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQGraphicsScene*>(self)->QGraphicsScene::customEvent(event);
}

bool QGraphicsScene_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> slot_handle(slot);
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QGraphicsScene_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQGraphicsScene*>(self)->QGraphicsScene::connectNotify(*signal);
}

bool QGraphicsScene_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsScene> slot_handle(slot);
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QGraphicsScene_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQGraphicsScene*>(self)->QGraphicsScene::disconnectNotify(*signal);
}

QObject* QGraphicsScene_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QGraphicsScene_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QGraphicsScene_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QGraphicsScene_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQGraphicsScene* self_cast = dynamic_cast<MiqtVirtualQGraphicsScene*>( (QGraphicsScene*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QGraphicsScene_delete(QGraphicsScene* self) {
	delete self;
}

