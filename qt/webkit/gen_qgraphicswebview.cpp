#include <memory>
#include <utility>
#include <QAction>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QGraphicsItem>
#include <QGraphicsLayoutItem>
#include <QGraphicsObject>
#include <QGraphicsSceneContextMenuEvent>
#include <QGraphicsSceneDragDropEvent>
#include <QGraphicsSceneHoverEvent>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsSceneMoveEvent>
#include <QGraphicsSceneResizeEvent>
#include <QGraphicsSceneWheelEvent>
#include <QGraphicsWebView>
#include <QGraphicsWidget>
#include <QHideEvent>
#include <QIcon>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QNetworkRequest>
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
#include <QUrl>
#include <QVariant>
#include <QWebHistory>
#include <QWebPage>
#include <QWebSettings>
#include <QWidget>
#include <qgraphicswebview.h>
#include "gen_qgraphicswebview.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QGraphicsWebView(intptr_t);
void miqt_exec_callback_QGraphicsWebView_loadStarted(intptr_t);
void miqt_exec_callback_QGraphicsWebView_loadFinished(intptr_t, bool);
void miqt_exec_callback_QGraphicsWebView_loadProgress(intptr_t, int);
void miqt_exec_callback_QGraphicsWebView_urlChanged(intptr_t, QUrl*);
void miqt_exec_callback_QGraphicsWebView_titleChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QGraphicsWebView_iconChanged(intptr_t);
void miqt_exec_callback_QGraphicsWebView_statusBarMessage(intptr_t, struct miqt_string);
void miqt_exec_callback_QGraphicsWebView_linkClicked(intptr_t, QUrl*);
void miqt_exec_callback_QGraphicsWebView_setGeometry(QGraphicsWebView*, intptr_t, QRectF*);
void miqt_exec_callback_QGraphicsWebView_updateGeometry(QGraphicsWebView*, intptr_t);
void miqt_exec_callback_QGraphicsWebView_paint(QGraphicsWebView*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
QVariant* miqt_exec_callback_QGraphicsWebView_itemChange(QGraphicsWebView*, intptr_t, int, QVariant*);
bool miqt_exec_callback_QGraphicsWebView_event(QGraphicsWebView*, intptr_t, QEvent*);
QSizeF* miqt_exec_callback_QGraphicsWebView_sizeHint(const QGraphicsWebView*, intptr_t, int, QSizeF*);
QVariant* miqt_exec_callback_QGraphicsWebView_inputMethodQuery(const QGraphicsWebView*, intptr_t, int);
void miqt_exec_callback_QGraphicsWebView_mousePressEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsWebView_mouseDoubleClickEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsWebView_mouseReleaseEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsWebView_mouseMoveEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneMouseEvent*);
void miqt_exec_callback_QGraphicsWebView_hoverMoveEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsWebView_hoverLeaveEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneHoverEvent*);
void miqt_exec_callback_QGraphicsWebView_wheelEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneWheelEvent*);
void miqt_exec_callback_QGraphicsWebView_keyPressEvent(QGraphicsWebView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsWebView_keyReleaseEvent(QGraphicsWebView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QGraphicsWebView_contextMenuEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneContextMenuEvent*);
void miqt_exec_callback_QGraphicsWebView_dragEnterEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsWebView_dragLeaveEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsWebView_dragMoveEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsWebView_dropEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneDragDropEvent*);
void miqt_exec_callback_QGraphicsWebView_focusInEvent(QGraphicsWebView*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsWebView_focusOutEvent(QGraphicsWebView*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QGraphicsWebView_inputMethodEvent(QGraphicsWebView*, intptr_t, QInputMethodEvent*);
bool miqt_exec_callback_QGraphicsWebView_focusNextPrevChild(QGraphicsWebView*, intptr_t, bool);
bool miqt_exec_callback_QGraphicsWebView_sceneEvent(QGraphicsWebView*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsWebView_getContentsMargins(const QGraphicsWebView*, intptr_t, double*, double*, double*, double*);
int miqt_exec_callback_QGraphicsWebView_type(const QGraphicsWebView*, intptr_t);
void miqt_exec_callback_QGraphicsWebView_paintWindowFrame(QGraphicsWebView*, intptr_t, QPainter*, QStyleOptionGraphicsItem*, QWidget*);
QRectF* miqt_exec_callback_QGraphicsWebView_boundingRect(const QGraphicsWebView*, intptr_t);
QPainterPath* miqt_exec_callback_QGraphicsWebView_shape(const QGraphicsWebView*, intptr_t);
void miqt_exec_callback_QGraphicsWebView_initStyleOption(const QGraphicsWebView*, intptr_t, QStyleOption*);
QVariant* miqt_exec_callback_QGraphicsWebView_propertyChange(QGraphicsWebView*, intptr_t, struct miqt_string, QVariant*);
bool miqt_exec_callback_QGraphicsWebView_windowFrameEvent(QGraphicsWebView*, intptr_t, QEvent*);
int miqt_exec_callback_QGraphicsWebView_windowFrameSectionAt(const QGraphicsWebView*, intptr_t, QPointF*);
void miqt_exec_callback_QGraphicsWebView_changeEvent(QGraphicsWebView*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsWebView_closeEvent(QGraphicsWebView*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QGraphicsWebView_hideEvent(QGraphicsWebView*, intptr_t, QHideEvent*);
void miqt_exec_callback_QGraphicsWebView_moveEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneMoveEvent*);
void miqt_exec_callback_QGraphicsWebView_polishEvent(QGraphicsWebView*, intptr_t);
void miqt_exec_callback_QGraphicsWebView_resizeEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneResizeEvent*);
void miqt_exec_callback_QGraphicsWebView_showEvent(QGraphicsWebView*, intptr_t, QShowEvent*);
void miqt_exec_callback_QGraphicsWebView_grabMouseEvent(QGraphicsWebView*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsWebView_ungrabMouseEvent(QGraphicsWebView*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsWebView_grabKeyboardEvent(QGraphicsWebView*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsWebView_ungrabKeyboardEvent(QGraphicsWebView*, intptr_t, QEvent*);
bool miqt_exec_callback_QGraphicsWebView_eventFilter(QGraphicsWebView*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QGraphicsWebView_timerEvent(QGraphicsWebView*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QGraphicsWebView_childEvent(QGraphicsWebView*, intptr_t, QChildEvent*);
void miqt_exec_callback_QGraphicsWebView_customEvent(QGraphicsWebView*, intptr_t, QEvent*);
void miqt_exec_callback_QGraphicsWebView_connectNotify(QGraphicsWebView*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsWebView_disconnectNotify(QGraphicsWebView*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QGraphicsWebView_advance(QGraphicsWebView*, intptr_t, int);
bool miqt_exec_callback_QGraphicsWebView_contains(const QGraphicsWebView*, intptr_t, QPointF*);
bool miqt_exec_callback_QGraphicsWebView_collidesWithItem(const QGraphicsWebView*, intptr_t, QGraphicsItem*, int);
bool miqt_exec_callback_QGraphicsWebView_collidesWithPath(const QGraphicsWebView*, intptr_t, QPainterPath*, int);
bool miqt_exec_callback_QGraphicsWebView_isObscuredBy(const QGraphicsWebView*, intptr_t, QGraphicsItem*);
QPainterPath* miqt_exec_callback_QGraphicsWebView_opaqueArea(const QGraphicsWebView*, intptr_t);
bool miqt_exec_callback_QGraphicsWebView_sceneEventFilter(QGraphicsWebView*, intptr_t, QGraphicsItem*, QEvent*);
void miqt_exec_callback_QGraphicsWebView_hoverEnterEvent(QGraphicsWebView*, intptr_t, QGraphicsSceneHoverEvent*);
bool miqt_exec_callback_QGraphicsWebView_supportsExtension(const QGraphicsWebView*, intptr_t, int);
void miqt_exec_callback_QGraphicsWebView_setExtension(QGraphicsWebView*, intptr_t, int, QVariant*);
QVariant* miqt_exec_callback_QGraphicsWebView_extension(const QGraphicsWebView*, intptr_t, QVariant*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQGraphicsWebView final : public QGraphicsWebView {
public:

	MiqtVirtualQGraphicsWebView(): QGraphicsWebView() {}
	MiqtVirtualQGraphicsWebView(QGraphicsItem* parent): QGraphicsWebView(parent) {}

	virtual ~MiqtVirtualQGraphicsWebView() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__setGeometry;

	// Subclass to allow providing a Go implementation
	virtual void setGeometry(const QRectF& rect) override {
		if (!handle__setGeometry) {
			QGraphicsWebView::setGeometry(rect);
			return;
		}

		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval1 = const_cast<QRectF*>(&rect_ret);
		miqt_exec_callback_QGraphicsWebView_setGeometry(this, handle__setGeometry.value(), sigval1);

	}

	friend void QGraphicsWebView_virtualbase_setGeometry(void* self, QRectF* rect);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__updateGeometry;

	// Subclass to allow providing a Go implementation
	virtual void updateGeometry() override {
		if (!handle__updateGeometry) {
			QGraphicsWebView::updateGeometry();
			return;
		}

		miqt_exec_callback_QGraphicsWebView_updateGeometry(this, handle__updateGeometry.value());

	}

	friend void QGraphicsWebView_virtualbase_updateGeometry(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__paint;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* param1, const QStyleOptionGraphicsItem* options, QWidget* widget) override {
		if (!handle__paint) {
			QGraphicsWebView::paint(param1, options, widget);
			return;
		}

		QPainter* sigval1 = param1;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) options;
		QWidget* sigval3 = widget;
		miqt_exec_callback_QGraphicsWebView_paint(this, handle__paint.value(), sigval1, sigval2, sigval3);

	}

	friend void QGraphicsWebView_virtualbase_paint(void* self, QPainter* param1, QStyleOptionGraphicsItem* options, QWidget* widget);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__itemChange;

	// Subclass to allow providing a Go implementation
	virtual QVariant itemChange(QGraphicsItem::GraphicsItemChange change, const QVariant& value) override {
		if (!handle__itemChange) {
			return QGraphicsWebView::itemChange(change, value);
		}

		QGraphicsItem::GraphicsItemChange change_ret = change;
		int sigval1 = static_cast<int>(change_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		QVariant* callback_return_value = miqt_exec_callback_QGraphicsWebView_itemChange(this, handle__itemChange.value(), sigval1, sigval2);
		return *callback_return_value;
	}

	friend QVariant* QGraphicsWebView_virtualbase_itemChange(void* self, int change, QVariant* value);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (!handle__event) {
			return QGraphicsWebView::event(param1);
		}

		QEvent* sigval1 = param1;
		bool callback_return_value = miqt_exec_callback_QGraphicsWebView_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QGraphicsWebView_virtualbase_event(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__sizeHint;

	// Subclass to allow providing a Go implementation
	virtual QSizeF sizeHint(Qt::SizeHint which, const QSizeF& constraint) const override {
		if (!handle__sizeHint) {
			return QGraphicsWebView::sizeHint(which, constraint);
		}

		Qt::SizeHint which_ret = which;
		int sigval1 = static_cast<int>(which_ret);
		const QSizeF& constraint_ret = constraint;
		// Cast returned reference into pointer
		QSizeF* sigval2 = const_cast<QSizeF*>(&constraint_ret);
		QSizeF* callback_return_value = miqt_exec_callback_QGraphicsWebView_sizeHint(this, handle__sizeHint.value(), sigval1, sigval2);
		return *callback_return_value;
	}

	friend QSizeF* QGraphicsWebView_virtualbase_sizeHint(const void* self, int which, QSizeF* constraint);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__inputMethodQuery;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (!handle__inputMethodQuery) {
			return QGraphicsWebView::inputMethodQuery(query);
		}

		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);
		QVariant* callback_return_value = miqt_exec_callback_QGraphicsWebView_inputMethodQuery(this, handle__inputMethodQuery.value(), sigval1);
		return *callback_return_value;
	}

	friend QVariant* QGraphicsWebView_virtualbase_inputMethodQuery(const void* self, int query);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__mousePressEvent;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QGraphicsSceneMouseEvent* param1) override {
		if (!handle__mousePressEvent) {
			QGraphicsWebView::mousePressEvent(param1);
			return;
		}

		QGraphicsSceneMouseEvent* sigval1 = param1;
		miqt_exec_callback_QGraphicsWebView_mousePressEvent(this, handle__mousePressEvent.value(), sigval1);

	}

	friend void QGraphicsWebView_virtualbase_mousePressEvent(void* self, QGraphicsSceneMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__mouseDoubleClickEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* param1) override {
		if (!handle__mouseDoubleClickEvent) {
			QGraphicsWebView::mouseDoubleClickEvent(param1);
			return;
		}

		QGraphicsSceneMouseEvent* sigval1 = param1;
		miqt_exec_callback_QGraphicsWebView_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent.value(), sigval1);

	}

	friend void QGraphicsWebView_virtualbase_mouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__mouseReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent* param1) override {
		if (!handle__mouseReleaseEvent) {
			QGraphicsWebView::mouseReleaseEvent(param1);
			return;
		}

		QGraphicsSceneMouseEvent* sigval1 = param1;
		miqt_exec_callback_QGraphicsWebView_mouseReleaseEvent(this, handle__mouseReleaseEvent.value(), sigval1);

	}

	friend void QGraphicsWebView_virtualbase_mouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__mouseMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QGraphicsSceneMouseEvent* param1) override {
		if (!handle__mouseMoveEvent) {
			QGraphicsWebView::mouseMoveEvent(param1);
			return;
		}

		QGraphicsSceneMouseEvent* sigval1 = param1;
		miqt_exec_callback_QGraphicsWebView_mouseMoveEvent(this, handle__mouseMoveEvent.value(), sigval1);

	}

	friend void QGraphicsWebView_virtualbase_mouseMoveEvent(void* self, QGraphicsSceneMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__hoverMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void hoverMoveEvent(QGraphicsSceneHoverEvent* param1) override {
		if (!handle__hoverMoveEvent) {
			QGraphicsWebView::hoverMoveEvent(param1);
			return;
		}

		QGraphicsSceneHoverEvent* sigval1 = param1;
		miqt_exec_callback_QGraphicsWebView_hoverMoveEvent(this, handle__hoverMoveEvent.value(), sigval1);

	}

	friend void QGraphicsWebView_virtualbase_hoverMoveEvent(void* self, QGraphicsSceneHoverEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__hoverLeaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void hoverLeaveEvent(QGraphicsSceneHoverEvent* param1) override {
		if (!handle__hoverLeaveEvent) {
			QGraphicsWebView::hoverLeaveEvent(param1);
			return;
		}

		QGraphicsSceneHoverEvent* sigval1 = param1;
		miqt_exec_callback_QGraphicsWebView_hoverLeaveEvent(this, handle__hoverLeaveEvent.value(), sigval1);

	}

	friend void QGraphicsWebView_virtualbase_hoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__wheelEvent;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QGraphicsSceneWheelEvent* param1) override {
		if (!handle__wheelEvent) {
			QGraphicsWebView::wheelEvent(param1);
			return;
		}

		QGraphicsSceneWheelEvent* sigval1 = param1;
		miqt_exec_callback_QGraphicsWebView_wheelEvent(this, handle__wheelEvent.value(), sigval1);

	}

	friend void QGraphicsWebView_virtualbase_wheelEvent(void* self, QGraphicsSceneWheelEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__keyPressEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (!handle__keyPressEvent) {
			QGraphicsWebView::keyPressEvent(param1);
			return;
		}

		QKeyEvent* sigval1 = param1;
		miqt_exec_callback_QGraphicsWebView_keyPressEvent(this, handle__keyPressEvent.value(), sigval1);

	}

	friend void QGraphicsWebView_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__keyReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* param1) override {
		if (!handle__keyReleaseEvent) {
			QGraphicsWebView::keyReleaseEvent(param1);
			return;
		}

		QKeyEvent* sigval1 = param1;
		miqt_exec_callback_QGraphicsWebView_keyReleaseEvent(this, handle__keyReleaseEvent.value(), sigval1);

	}

	friend void QGraphicsWebView_virtualbase_keyReleaseEvent(void* self, QKeyEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__contextMenuEvent;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QGraphicsSceneContextMenuEvent* param1) override {
		if (!handle__contextMenuEvent) {
			QGraphicsWebView::contextMenuEvent(param1);
			return;
		}

		QGraphicsSceneContextMenuEvent* sigval1 = param1;
		miqt_exec_callback_QGraphicsWebView_contextMenuEvent(this, handle__contextMenuEvent.value(), sigval1);

	}

	friend void QGraphicsWebView_virtualbase_contextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__dragEnterEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QGraphicsSceneDragDropEvent* param1) override {
		if (!handle__dragEnterEvent) {
			QGraphicsWebView::dragEnterEvent(param1);
			return;
		}

		QGraphicsSceneDragDropEvent* sigval1 = param1;
		miqt_exec_callback_QGraphicsWebView_dragEnterEvent(this, handle__dragEnterEvent.value(), sigval1);

	}

	friend void QGraphicsWebView_virtualbase_dragEnterEvent(void* self, QGraphicsSceneDragDropEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__dragLeaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QGraphicsSceneDragDropEvent* param1) override {
		if (!handle__dragLeaveEvent) {
			QGraphicsWebView::dragLeaveEvent(param1);
			return;
		}

		QGraphicsSceneDragDropEvent* sigval1 = param1;
		miqt_exec_callback_QGraphicsWebView_dragLeaveEvent(this, handle__dragLeaveEvent.value(), sigval1);

	}

	friend void QGraphicsWebView_virtualbase_dragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__dragMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QGraphicsSceneDragDropEvent* param1) override {
		if (!handle__dragMoveEvent) {
			QGraphicsWebView::dragMoveEvent(param1);
			return;
		}

		QGraphicsSceneDragDropEvent* sigval1 = param1;
		miqt_exec_callback_QGraphicsWebView_dragMoveEvent(this, handle__dragMoveEvent.value(), sigval1);

	}

	friend void QGraphicsWebView_virtualbase_dragMoveEvent(void* self, QGraphicsSceneDragDropEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__dropEvent;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QGraphicsSceneDragDropEvent* param1) override {
		if (!handle__dropEvent) {
			QGraphicsWebView::dropEvent(param1);
			return;
		}

		QGraphicsSceneDragDropEvent* sigval1 = param1;
		miqt_exec_callback_QGraphicsWebView_dropEvent(this, handle__dropEvent.value(), sigval1);

	}

	friend void QGraphicsWebView_virtualbase_dropEvent(void* self, QGraphicsSceneDragDropEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__focusInEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* param1) override {
		if (!handle__focusInEvent) {
			QGraphicsWebView::focusInEvent(param1);
			return;
		}

		QFocusEvent* sigval1 = param1;
		miqt_exec_callback_QGraphicsWebView_focusInEvent(this, handle__focusInEvent.value(), sigval1);

	}

	friend void QGraphicsWebView_virtualbase_focusInEvent(void* self, QFocusEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__focusOutEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* param1) override {
		if (!handle__focusOutEvent) {
			QGraphicsWebView::focusOutEvent(param1);
			return;
		}

		QFocusEvent* sigval1 = param1;
		miqt_exec_callback_QGraphicsWebView_focusOutEvent(this, handle__focusOutEvent.value(), sigval1);

	}

	friend void QGraphicsWebView_virtualbase_focusOutEvent(void* self, QFocusEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__inputMethodEvent;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (!handle__inputMethodEvent) {
			QGraphicsWebView::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QGraphicsWebView_inputMethodEvent(this, handle__inputMethodEvent.value(), sigval1);

	}

	friend void QGraphicsWebView_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__focusNextPrevChild;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (!handle__focusNextPrevChild) {
			return QGraphicsWebView::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QGraphicsWebView_focusNextPrevChild(this, handle__focusNextPrevChild.value(), sigval1);
		return callback_return_value;
	}

	friend bool QGraphicsWebView_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__sceneEvent;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEvent(QEvent* param1) override {
		if (!handle__sceneEvent) {
			return QGraphicsWebView::sceneEvent(param1);
		}

		QEvent* sigval1 = param1;
		bool callback_return_value = miqt_exec_callback_QGraphicsWebView_sceneEvent(this, handle__sceneEvent.value(), sigval1);
		return callback_return_value;
	}

	friend bool QGraphicsWebView_virtualbase_sceneEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__getContentsMargins;

	// Subclass to allow providing a Go implementation
	virtual void getContentsMargins(qreal* left, qreal* top, qreal* right, qreal* bottom) const override {
		if (!handle__getContentsMargins) {
			QGraphicsWebView::getContentsMargins(left, top, right, bottom);
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
		miqt_exec_callback_QGraphicsWebView_getContentsMargins(this, handle__getContentsMargins.value(), sigval1, sigval2, sigval3, sigval4);

	}

	friend void QGraphicsWebView_virtualbase_getContentsMargins(const void* self, double* left, double* top, double* right, double* bottom);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__type;

	// Subclass to allow providing a Go implementation
	virtual int type() const override {
		if (!handle__type) {
			return QGraphicsWebView::type();
		}

		int callback_return_value = miqt_exec_callback_QGraphicsWebView_type(this, handle__type.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QGraphicsWebView_virtualbase_type(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__paintWindowFrame;

	// Subclass to allow providing a Go implementation
	virtual void paintWindowFrame(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override {
		if (!handle__paintWindowFrame) {
			QGraphicsWebView::paintWindowFrame(painter, option, widget);
			return;
		}

		QPainter* sigval1 = painter;
		QStyleOptionGraphicsItem* sigval2 = (QStyleOptionGraphicsItem*) option;
		QWidget* sigval3 = widget;
		miqt_exec_callback_QGraphicsWebView_paintWindowFrame(this, handle__paintWindowFrame.value(), sigval1, sigval2, sigval3);

	}

	friend void QGraphicsWebView_virtualbase_paintWindowFrame(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__boundingRect;

	// Subclass to allow providing a Go implementation
	virtual QRectF boundingRect() const override {
		if (!handle__boundingRect) {
			return QGraphicsWebView::boundingRect();
		}

		QRectF* callback_return_value = miqt_exec_callback_QGraphicsWebView_boundingRect(this, handle__boundingRect.value());
		return *callback_return_value;
	}

	friend QRectF* QGraphicsWebView_virtualbase_boundingRect(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__shape;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath shape() const override {
		if (!handle__shape) {
			return QGraphicsWebView::shape();
		}

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsWebView_shape(this, handle__shape.value());
		return *callback_return_value;
	}

	friend QPainterPath* QGraphicsWebView_virtualbase_shape(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__initStyleOption;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOption* option) const override {
		if (!handle__initStyleOption) {
			QGraphicsWebView::initStyleOption(option);
			return;
		}

		QStyleOption* sigval1 = option;
		miqt_exec_callback_QGraphicsWebView_initStyleOption(this, handle__initStyleOption.value(), sigval1);

	}

	friend void QGraphicsWebView_virtualbase_initStyleOption(const void* self, QStyleOption* option);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__propertyChange;

	// Subclass to allow providing a Go implementation
	virtual QVariant propertyChange(const QString& propertyName, const QVariant& value) override {
		if (!handle__propertyChange) {
			return QGraphicsWebView::propertyChange(propertyName, value);
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
		QVariant* callback_return_value = miqt_exec_callback_QGraphicsWebView_propertyChange(this, handle__propertyChange.value(), sigval1, sigval2);
		return *callback_return_value;
	}

	friend QVariant* QGraphicsWebView_virtualbase_propertyChange(void* self, struct miqt_string propertyName, QVariant* value);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__windowFrameEvent;

	// Subclass to allow providing a Go implementation
	virtual bool windowFrameEvent(QEvent* e) override {
		if (!handle__windowFrameEvent) {
			return QGraphicsWebView::windowFrameEvent(e);
		}

		QEvent* sigval1 = e;
		bool callback_return_value = miqt_exec_callback_QGraphicsWebView_windowFrameEvent(this, handle__windowFrameEvent.value(), sigval1);
		return callback_return_value;
	}

	friend bool QGraphicsWebView_virtualbase_windowFrameEvent(void* self, QEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__windowFrameSectionAt;

	// Subclass to allow providing a Go implementation
	virtual Qt::WindowFrameSection windowFrameSectionAt(const QPointF& pos) const override {
		if (!handle__windowFrameSectionAt) {
			return QGraphicsWebView::windowFrameSectionAt(pos);
		}

		const QPointF& pos_ret = pos;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&pos_ret);
		int callback_return_value = miqt_exec_callback_QGraphicsWebView_windowFrameSectionAt(this, handle__windowFrameSectionAt.value(), sigval1);
		return static_cast<Qt::WindowFrameSection>(callback_return_value);
	}

	friend int QGraphicsWebView_virtualbase_windowFrameSectionAt(const void* self, QPointF* pos);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__changeEvent;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* event) override {
		if (!handle__changeEvent) {
			QGraphicsWebView::changeEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWebView_changeEvent(this, handle__changeEvent.value(), sigval1);

	}

	friend void QGraphicsWebView_virtualbase_changeEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__closeEvent;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (!handle__closeEvent) {
			QGraphicsWebView::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWebView_closeEvent(this, handle__closeEvent.value(), sigval1);

	}

	friend void QGraphicsWebView_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__hideEvent;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (!handle__hideEvent) {
			QGraphicsWebView::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWebView_hideEvent(this, handle__hideEvent.value(), sigval1);

	}

	friend void QGraphicsWebView_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__moveEvent;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QGraphicsSceneMoveEvent* event) override {
		if (!handle__moveEvent) {
			QGraphicsWebView::moveEvent(event);
			return;
		}

		QGraphicsSceneMoveEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWebView_moveEvent(this, handle__moveEvent.value(), sigval1);

	}

	friend void QGraphicsWebView_virtualbase_moveEvent(void* self, QGraphicsSceneMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__polishEvent;

	// Subclass to allow providing a Go implementation
	virtual void polishEvent() override {
		if (!handle__polishEvent) {
			QGraphicsWebView::polishEvent();
			return;
		}

		miqt_exec_callback_QGraphicsWebView_polishEvent(this, handle__polishEvent.value());

	}

	friend void QGraphicsWebView_virtualbase_polishEvent(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__resizeEvent;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QGraphicsSceneResizeEvent* event) override {
		if (!handle__resizeEvent) {
			QGraphicsWebView::resizeEvent(event);
			return;
		}

		QGraphicsSceneResizeEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWebView_resizeEvent(this, handle__resizeEvent.value(), sigval1);

	}

	friend void QGraphicsWebView_virtualbase_resizeEvent(void* self, QGraphicsSceneResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__showEvent;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (!handle__showEvent) {
			QGraphicsWebView::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWebView_showEvent(this, handle__showEvent.value(), sigval1);

	}

	friend void QGraphicsWebView_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__grabMouseEvent;

	// Subclass to allow providing a Go implementation
	virtual void grabMouseEvent(QEvent* event) override {
		if (!handle__grabMouseEvent) {
			QGraphicsWebView::grabMouseEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWebView_grabMouseEvent(this, handle__grabMouseEvent.value(), sigval1);

	}

	friend void QGraphicsWebView_virtualbase_grabMouseEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__ungrabMouseEvent;

	// Subclass to allow providing a Go implementation
	virtual void ungrabMouseEvent(QEvent* event) override {
		if (!handle__ungrabMouseEvent) {
			QGraphicsWebView::ungrabMouseEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWebView_ungrabMouseEvent(this, handle__ungrabMouseEvent.value(), sigval1);

	}

	friend void QGraphicsWebView_virtualbase_ungrabMouseEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__grabKeyboardEvent;

	// Subclass to allow providing a Go implementation
	virtual void grabKeyboardEvent(QEvent* event) override {
		if (!handle__grabKeyboardEvent) {
			QGraphicsWebView::grabKeyboardEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWebView_grabKeyboardEvent(this, handle__grabKeyboardEvent.value(), sigval1);

	}

	friend void QGraphicsWebView_virtualbase_grabKeyboardEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__ungrabKeyboardEvent;

	// Subclass to allow providing a Go implementation
	virtual void ungrabKeyboardEvent(QEvent* event) override {
		if (!handle__ungrabKeyboardEvent) {
			QGraphicsWebView::ungrabKeyboardEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWebView_ungrabKeyboardEvent(this, handle__ungrabKeyboardEvent.value(), sigval1);

	}

	friend void QGraphicsWebView_virtualbase_ungrabKeyboardEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QGraphicsWebView::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QGraphicsWebView_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QGraphicsWebView_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QGraphicsWebView::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWebView_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QGraphicsWebView_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QGraphicsWebView::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWebView_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QGraphicsWebView_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QGraphicsWebView::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWebView_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QGraphicsWebView_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QGraphicsWebView::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QGraphicsWebView_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QGraphicsWebView_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QGraphicsWebView::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QGraphicsWebView_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QGraphicsWebView_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__advance;

	// Subclass to allow providing a Go implementation
	virtual void advance(int phase) override {
		if (!handle__advance) {
			QGraphicsWebView::advance(phase);
			return;
		}

		int sigval1 = phase;
		miqt_exec_callback_QGraphicsWebView_advance(this, handle__advance.value(), sigval1);

	}

	friend void QGraphicsWebView_virtualbase_advance(void* self, int phase);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__contains;

	// Subclass to allow providing a Go implementation
	virtual bool contains(const QPointF& point) const override {
		if (!handle__contains) {
			return QGraphicsWebView::contains(point);
		}

		const QPointF& point_ret = point;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&point_ret);
		bool callback_return_value = miqt_exec_callback_QGraphicsWebView_contains(this, handle__contains.value(), sigval1);
		return callback_return_value;
	}

	friend bool QGraphicsWebView_virtualbase_contains(const void* self, QPointF* point);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__collidesWithItem;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithItem(const QGraphicsItem* other, Qt::ItemSelectionMode mode) const override {
		if (!handle__collidesWithItem) {
			return QGraphicsWebView::collidesWithItem(other, mode);
		}

		QGraphicsItem* sigval1 = (QGraphicsItem*) other;
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);
		bool callback_return_value = miqt_exec_callback_QGraphicsWebView_collidesWithItem(this, handle__collidesWithItem.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QGraphicsWebView_virtualbase_collidesWithItem(const void* self, QGraphicsItem* other, int mode);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__collidesWithPath;

	// Subclass to allow providing a Go implementation
	virtual bool collidesWithPath(const QPainterPath& path, Qt::ItemSelectionMode mode) const override {
		if (!handle__collidesWithPath) {
			return QGraphicsWebView::collidesWithPath(path, mode);
		}

		const QPainterPath& path_ret = path;
		// Cast returned reference into pointer
		QPainterPath* sigval1 = const_cast<QPainterPath*>(&path_ret);
		Qt::ItemSelectionMode mode_ret = mode;
		int sigval2 = static_cast<int>(mode_ret);
		bool callback_return_value = miqt_exec_callback_QGraphicsWebView_collidesWithPath(this, handle__collidesWithPath.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QGraphicsWebView_virtualbase_collidesWithPath(const void* self, QPainterPath* path, int mode);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__isObscuredBy;

	// Subclass to allow providing a Go implementation
	virtual bool isObscuredBy(const QGraphicsItem* item) const override {
		if (!handle__isObscuredBy) {
			return QGraphicsWebView::isObscuredBy(item);
		}

		QGraphicsItem* sigval1 = (QGraphicsItem*) item;
		bool callback_return_value = miqt_exec_callback_QGraphicsWebView_isObscuredBy(this, handle__isObscuredBy.value(), sigval1);
		return callback_return_value;
	}

	friend bool QGraphicsWebView_virtualbase_isObscuredBy(const void* self, QGraphicsItem* item);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__opaqueArea;

	// Subclass to allow providing a Go implementation
	virtual QPainterPath opaqueArea() const override {
		if (!handle__opaqueArea) {
			return QGraphicsWebView::opaqueArea();
		}

		QPainterPath* callback_return_value = miqt_exec_callback_QGraphicsWebView_opaqueArea(this, handle__opaqueArea.value());
		return *callback_return_value;
	}

	friend QPainterPath* QGraphicsWebView_virtualbase_opaqueArea(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__sceneEventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool sceneEventFilter(QGraphicsItem* watched, QEvent* event) override {
		if (!handle__sceneEventFilter) {
			return QGraphicsWebView::sceneEventFilter(watched, event);
		}

		QGraphicsItem* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QGraphicsWebView_sceneEventFilter(this, handle__sceneEventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QGraphicsWebView_virtualbase_sceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__hoverEnterEvent;

	// Subclass to allow providing a Go implementation
	virtual void hoverEnterEvent(QGraphicsSceneHoverEvent* event) override {
		if (!handle__hoverEnterEvent) {
			QGraphicsWebView::hoverEnterEvent(event);
			return;
		}

		QGraphicsSceneHoverEvent* sigval1 = event;
		miqt_exec_callback_QGraphicsWebView_hoverEnterEvent(this, handle__hoverEnterEvent.value(), sigval1);

	}

	friend void QGraphicsWebView_virtualbase_hoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__supportsExtension;

	// Subclass to allow providing a Go implementation
	virtual bool supportsExtension(QGraphicsItem::Extension extension) const override {
		if (!handle__supportsExtension) {
			return QGraphicsWebView::supportsExtension(extension);
		}

		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		bool callback_return_value = miqt_exec_callback_QGraphicsWebView_supportsExtension(this, handle__supportsExtension.value(), sigval1);
		return callback_return_value;
	}

	friend bool QGraphicsWebView_virtualbase_supportsExtension(const void* self, int extension);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__setExtension;

	// Subclass to allow providing a Go implementation
	virtual void setExtension(QGraphicsItem::Extension extension, const QVariant& variant) override {
		if (!handle__setExtension) {
			QGraphicsWebView::setExtension(extension, variant);
			return;
		}

		QGraphicsItem::Extension extension_ret = extension;
		int sigval1 = static_cast<int>(extension_ret);
		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&variant_ret);
		miqt_exec_callback_QGraphicsWebView_setExtension(this, handle__setExtension.value(), sigval1, sigval2);

	}

	friend void QGraphicsWebView_virtualbase_setExtension(void* self, int extension, QVariant* variant);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> handle__extension;

	// Subclass to allow providing a Go implementation
	virtual QVariant extension(const QVariant& variant) const override {
		if (!handle__extension) {
			return QGraphicsWebView::extension(variant);
		}

		const QVariant& variant_ret = variant;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&variant_ret);
		QVariant* callback_return_value = miqt_exec_callback_QGraphicsWebView_extension(this, handle__extension.value(), sigval1);
		return *callback_return_value;
	}

	friend QVariant* QGraphicsWebView_virtualbase_extension(const void* self, QVariant* variant);

	// Wrappers to allow calling protected methods:
	friend void QGraphicsWebView_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend QObject* QGraphicsWebView_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsWebView_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QGraphicsWebView_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QGraphicsWebView_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
	friend void QGraphicsWebView_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsWebView_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsWebView_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self);
	friend void QGraphicsWebView_protectedbase_setGraphicsItem(bool* _dynamic_cast_ok, void* self, QGraphicsItem* item);
	friend void QGraphicsWebView_protectedbase_setOwnedByLayout(bool* _dynamic_cast_ok, void* self, bool ownedByLayout);
};

QGraphicsWebView* QGraphicsWebView_new() {
	return new (std::nothrow) MiqtVirtualQGraphicsWebView();
}

QGraphicsWebView* QGraphicsWebView_new2(QGraphicsItem* parent) {
	return new (std::nothrow) MiqtVirtualQGraphicsWebView(parent);
}

void QGraphicsWebView_virtbase(QGraphicsWebView* src, QGraphicsWidget** outptr_QGraphicsWidget) {
	*outptr_QGraphicsWidget = static_cast<QGraphicsWidget*>(src);
}

QMetaObject* QGraphicsWebView_metaObject(const QGraphicsWebView* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsWebView_metacast(QGraphicsWebView* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsWebView_tr(const char* s) {
	QString _ret = QGraphicsWebView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsWebView_trUtf8(const char* s) {
	QString _ret = QGraphicsWebView::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QWebPage* QGraphicsWebView_page(const QGraphicsWebView* self) {
	return self->page();
}

void QGraphicsWebView_setPage(QGraphicsWebView* self, QWebPage* page) {
	self->setPage(page);
}

QUrl* QGraphicsWebView_url(const QGraphicsWebView* self) {
	return new QUrl(self->url());
}

void QGraphicsWebView_setUrl(QGraphicsWebView* self, QUrl* url) {
	self->setUrl(*url);
}

struct miqt_string QGraphicsWebView_title(const QGraphicsWebView* self) {
	QString _ret = self->title();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QIcon* QGraphicsWebView_icon(const QGraphicsWebView* self) {
	return new QIcon(self->icon());
}

double QGraphicsWebView_zoomFactor(const QGraphicsWebView* self) {
	qreal _ret = self->zoomFactor();
	return static_cast<double>(_ret);
}

void QGraphicsWebView_setZoomFactor(QGraphicsWebView* self, double zoomFactor) {
	self->setZoomFactor(static_cast<qreal>(zoomFactor));
}

bool QGraphicsWebView_isModified(const QGraphicsWebView* self) {
	return self->isModified();
}

void QGraphicsWebView_load(QGraphicsWebView* self, QUrl* url) {
	self->load(*url);
}

void QGraphicsWebView_loadWithRequest(QGraphicsWebView* self, QNetworkRequest* request) {
	self->load(*request);
}

void QGraphicsWebView_setHtml(QGraphicsWebView* self, struct miqt_string html) {
	QString html_QString = QString::fromUtf8(html.data, html.len);
	self->setHtml(html_QString);
}

void QGraphicsWebView_setContent(QGraphicsWebView* self, struct miqt_string data) {
	QByteArray data_QByteArray(data.data, data.len);
	self->setContent(data_QByteArray);
}

QWebHistory* QGraphicsWebView_history(const QGraphicsWebView* self) {
	return self->history();
}

QWebSettings* QGraphicsWebView_settings(const QGraphicsWebView* self) {
	return self->settings();
}

QAction* QGraphicsWebView_pageAction(const QGraphicsWebView* self, int action) {
	return self->pageAction(static_cast<QWebPage::WebAction>(action));
}

void QGraphicsWebView_triggerPageAction(QGraphicsWebView* self, int action) {
	self->triggerPageAction(static_cast<QWebPage::WebAction>(action));
}

bool QGraphicsWebView_findText(QGraphicsWebView* self, struct miqt_string subString) {
	QString subString_QString = QString::fromUtf8(subString.data, subString.len);
	return self->findText(subString_QString);
}

bool QGraphicsWebView_resizesToContents(const QGraphicsWebView* self) {
	return self->resizesToContents();
}

void QGraphicsWebView_setResizesToContents(QGraphicsWebView* self, bool enabled) {
	self->setResizesToContents(enabled);
}

bool QGraphicsWebView_isTiledBackingStoreFrozen(const QGraphicsWebView* self) {
	return self->isTiledBackingStoreFrozen();
}

void QGraphicsWebView_setTiledBackingStoreFrozen(QGraphicsWebView* self, bool frozen) {
	self->setTiledBackingStoreFrozen(frozen);
}

void QGraphicsWebView_setGeometry(QGraphicsWebView* self, QRectF* rect) {
	self->setGeometry(*rect);
}

void QGraphicsWebView_updateGeometry(QGraphicsWebView* self) {
	self->updateGeometry();
}

void QGraphicsWebView_paint(QGraphicsWebView* self, QPainter* param1, QStyleOptionGraphicsItem* options, QWidget* widget) {
	self->paint(param1, options, widget);
}

QVariant* QGraphicsWebView_itemChange(QGraphicsWebView* self, int change, QVariant* value) {
	return new QVariant(self->itemChange(static_cast<QGraphicsItem::GraphicsItemChange>(change), *value));
}

bool QGraphicsWebView_event(QGraphicsWebView* self, QEvent* param1) {
	return self->event(param1);
}

QSizeF* QGraphicsWebView_sizeHint(const QGraphicsWebView* self, int which, QSizeF* constraint) {
	return new QSizeF(self->sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
}

QVariant* QGraphicsWebView_inputMethodQuery(const QGraphicsWebView* self, int query) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

int QGraphicsWebView_renderHints(const QGraphicsWebView* self) {
	QPainter::RenderHints _ret = self->renderHints();
	return static_cast<int>(_ret);
}

void QGraphicsWebView_setRenderHints(QGraphicsWebView* self, int renderHints) {
	self->setRenderHints(static_cast<QPainter::RenderHints>(renderHints));
}

void QGraphicsWebView_setRenderHint(QGraphicsWebView* self, int param1) {
	self->setRenderHint(static_cast<QPainter::RenderHint>(param1));
}

void QGraphicsWebView_stop(QGraphicsWebView* self) {
	self->stop();
}

void QGraphicsWebView_back(QGraphicsWebView* self) {
	self->back();
}

void QGraphicsWebView_forward(QGraphicsWebView* self) {
	self->forward();
}

void QGraphicsWebView_reload(QGraphicsWebView* self) {
	self->reload();
}

void QGraphicsWebView_loadStarted(QGraphicsWebView* self) {
	self->loadStarted();
}

void* QGraphicsWebView_connect_loadStarted(QGraphicsWebView* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView>>(slot);
	return new QMetaObject::Connection(QGraphicsWebView::connect(self, static_cast<void (QGraphicsWebView::*)()>(&QGraphicsWebView::loadStarted), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QGraphicsWebView_loadStarted(slot);
	}));
}

void QGraphicsWebView_loadFinished(QGraphicsWebView* self, bool param1) {
	self->loadFinished(param1);
}

void* QGraphicsWebView_connect_loadFinished(QGraphicsWebView* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView>>(slot);
	return new QMetaObject::Connection(QGraphicsWebView::connect(self, static_cast<void (QGraphicsWebView::*)(bool)>(&QGraphicsWebView::loadFinished), self, [slot_handle](bool param1) {
		intptr_t slot = slot_handle->value();
		bool sigval1 = param1;
		miqt_exec_callback_QGraphicsWebView_loadFinished(slot, sigval1);
	}));
}

void QGraphicsWebView_loadProgress(QGraphicsWebView* self, int progress) {
	self->loadProgress(static_cast<int>(progress));
}

void* QGraphicsWebView_connect_loadProgress(QGraphicsWebView* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView>>(slot);
	return new QMetaObject::Connection(QGraphicsWebView::connect(self, static_cast<void (QGraphicsWebView::*)(int)>(&QGraphicsWebView::loadProgress), self, [slot_handle](int progress) {
		intptr_t slot = slot_handle->value();
		int sigval1 = progress;
		miqt_exec_callback_QGraphicsWebView_loadProgress(slot, sigval1);
	}));
}

void QGraphicsWebView_urlChanged(QGraphicsWebView* self, QUrl* param1) {
	self->urlChanged(*param1);
}

void* QGraphicsWebView_connect_urlChanged(QGraphicsWebView* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView>>(slot);
	return new QMetaObject::Connection(QGraphicsWebView::connect(self, static_cast<void (QGraphicsWebView::*)(const QUrl&)>(&QGraphicsWebView::urlChanged), self, [slot_handle](const QUrl& param1) {
		intptr_t slot = slot_handle->value();
		const QUrl& param1_ret = param1;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&param1_ret);
		miqt_exec_callback_QGraphicsWebView_urlChanged(slot, sigval1);
	}));
}

void QGraphicsWebView_titleChanged(QGraphicsWebView* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->titleChanged(param1_QString);
}

void* QGraphicsWebView_connect_titleChanged(QGraphicsWebView* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView>>(slot);
	return new QMetaObject::Connection(QGraphicsWebView::connect(self, static_cast<void (QGraphicsWebView::*)(const QString&)>(&QGraphicsWebView::titleChanged), self, [slot_handle](const QString& param1) {
		intptr_t slot = slot_handle->value();
		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		miqt_exec_callback_QGraphicsWebView_titleChanged(slot, sigval1);
	}));
}

void QGraphicsWebView_iconChanged(QGraphicsWebView* self) {
	self->iconChanged();
}

void* QGraphicsWebView_connect_iconChanged(QGraphicsWebView* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView>>(slot);
	return new QMetaObject::Connection(QGraphicsWebView::connect(self, static_cast<void (QGraphicsWebView::*)()>(&QGraphicsWebView::iconChanged), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QGraphicsWebView_iconChanged(slot);
	}));
}

void QGraphicsWebView_statusBarMessage(QGraphicsWebView* self, struct miqt_string message) {
	QString message_QString = QString::fromUtf8(message.data, message.len);
	self->statusBarMessage(message_QString);
}

void* QGraphicsWebView_connect_statusBarMessage(QGraphicsWebView* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView>>(slot);
	return new QMetaObject::Connection(QGraphicsWebView::connect(self, static_cast<void (QGraphicsWebView::*)(const QString&)>(&QGraphicsWebView::statusBarMessage), self, [slot_handle](const QString& message) {
		intptr_t slot = slot_handle->value();
		const QString message_ret = message;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray message_b = message_ret.toUtf8();
		struct miqt_string message_ms;
		message_ms.len = message_b.length();
		message_ms.data = static_cast<char*>(malloc(message_ms.len));
		memcpy(message_ms.data, message_b.data(), message_ms.len);
		struct miqt_string sigval1 = message_ms;
		miqt_exec_callback_QGraphicsWebView_statusBarMessage(slot, sigval1);
	}));
}

void QGraphicsWebView_linkClicked(QGraphicsWebView* self, QUrl* param1) {
	self->linkClicked(*param1);
}

void* QGraphicsWebView_connect_linkClicked(QGraphicsWebView* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView>>(slot);
	return new QMetaObject::Connection(QGraphicsWebView::connect(self, static_cast<void (QGraphicsWebView::*)(const QUrl&)>(&QGraphicsWebView::linkClicked), self, [slot_handle](const QUrl& param1) {
		intptr_t slot = slot_handle->value();
		const QUrl& param1_ret = param1;
		// Cast returned reference into pointer
		QUrl* sigval1 = const_cast<QUrl*>(&param1_ret);
		miqt_exec_callback_QGraphicsWebView_linkClicked(slot, sigval1);
	}));
}

struct miqt_string QGraphicsWebView_tr2(const char* s, const char* c) {
	QString _ret = QGraphicsWebView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsWebView_tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsWebView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsWebView_trUtf82(const char* s, const char* c) {
	QString _ret = QGraphicsWebView::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsWebView_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QGraphicsWebView::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsWebView_load2(QGraphicsWebView* self, QNetworkRequest* request, int operation) {
	self->load(*request, static_cast<QNetworkAccessManager::Operation>(operation));
}

void QGraphicsWebView_load3(QGraphicsWebView* self, QNetworkRequest* request, int operation, struct miqt_string body) {
	QByteArray body_QByteArray(body.data, body.len);
	self->load(*request, static_cast<QNetworkAccessManager::Operation>(operation), body_QByteArray);
}

void QGraphicsWebView_setHtml2(QGraphicsWebView* self, struct miqt_string html, QUrl* baseUrl) {
	QString html_QString = QString::fromUtf8(html.data, html.len);
	self->setHtml(html_QString, *baseUrl);
}

void QGraphicsWebView_setContent2(QGraphicsWebView* self, struct miqt_string data, struct miqt_string mimeType) {
	QByteArray data_QByteArray(data.data, data.len);
	QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
	self->setContent(data_QByteArray, mimeType_QString);
}

void QGraphicsWebView_setContent3(QGraphicsWebView* self, struct miqt_string data, struct miqt_string mimeType, QUrl* baseUrl) {
	QByteArray data_QByteArray(data.data, data.len);
	QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
	self->setContent(data_QByteArray, mimeType_QString, *baseUrl);
}

void QGraphicsWebView_triggerPageAction2(QGraphicsWebView* self, int action, bool checked) {
	self->triggerPageAction(static_cast<QWebPage::WebAction>(action), checked);
}

bool QGraphicsWebView_findText2(QGraphicsWebView* self, struct miqt_string subString, int options) {
	QString subString_QString = QString::fromUtf8(subString.data, subString.len);
	return self->findText(subString_QString, static_cast<QWebPage::FindFlags>(options));
}

void QGraphicsWebView_setRenderHint2(QGraphicsWebView* self, int param1, bool enabled) {
	self->setRenderHint(static_cast<QPainter::RenderHint>(param1), enabled);
}

bool QGraphicsWebView_override_virtual_setGeometry(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setGeometry = std::move(slot_handle);
	return true;
}

void QGraphicsWebView_virtualbase_setGeometry(void* self, QRectF* rect) {
	static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::setGeometry(*rect);
}

bool QGraphicsWebView_override_virtual_updateGeometry(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateGeometry = std::move(slot_handle);
	return true;
}

void QGraphicsWebView_virtualbase_updateGeometry(void* self) {
	static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::updateGeometry();
}

bool QGraphicsWebView_override_virtual_paint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paint = std::move(slot_handle);
	return true;
}

void QGraphicsWebView_virtualbase_paint(void* self, QPainter* param1, QStyleOptionGraphicsItem* options, QWidget* widget) {
	static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::paint(param1, options, widget);
}

bool QGraphicsWebView_override_virtual_itemChange(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__itemChange = std::move(slot_handle);
	return true;
}

QVariant* QGraphicsWebView_virtualbase_itemChange(void* self, int change, QVariant* value) {
	return new QVariant(static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::itemChange(static_cast<MiqtVirtualQGraphicsWebView::GraphicsItemChange>(change), *value));
}

bool QGraphicsWebView_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QGraphicsWebView_virtualbase_event(void* self, QEvent* param1) {
	return static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::event(param1);
}

bool QGraphicsWebView_override_virtual_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	return true;
}

QSizeF* QGraphicsWebView_virtualbase_sizeHint(const void* self, int which, QSizeF* constraint) {
	return new QSizeF(static_cast<const MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::sizeHint(static_cast<Qt::SizeHint>(which), *constraint));
}

bool QGraphicsWebView_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	return true;
}

QVariant* QGraphicsWebView_virtualbase_inputMethodQuery(const void* self, int query) {
	return new QVariant(static_cast<const MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

bool QGraphicsWebView_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWebView_virtualbase_mousePressEvent(void* self, QGraphicsSceneMouseEvent* param1) {
	static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::mousePressEvent(param1);
}

bool QGraphicsWebView_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWebView_virtualbase_mouseDoubleClickEvent(void* self, QGraphicsSceneMouseEvent* param1) {
	static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::mouseDoubleClickEvent(param1);
}

bool QGraphicsWebView_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWebView_virtualbase_mouseReleaseEvent(void* self, QGraphicsSceneMouseEvent* param1) {
	static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::mouseReleaseEvent(param1);
}

bool QGraphicsWebView_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWebView_virtualbase_mouseMoveEvent(void* self, QGraphicsSceneMouseEvent* param1) {
	static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::mouseMoveEvent(param1);
}

bool QGraphicsWebView_override_virtual_hoverMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hoverMoveEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWebView_virtualbase_hoverMoveEvent(void* self, QGraphicsSceneHoverEvent* param1) {
	static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::hoverMoveEvent(param1);
}

bool QGraphicsWebView_override_virtual_hoverLeaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hoverLeaveEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWebView_virtualbase_hoverLeaveEvent(void* self, QGraphicsSceneHoverEvent* param1) {
	static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::hoverLeaveEvent(param1);
}

bool QGraphicsWebView_override_virtual_wheelEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWebView_virtualbase_wheelEvent(void* self, QGraphicsSceneWheelEvent* param1) {
	static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::wheelEvent(param1);
}

bool QGraphicsWebView_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWebView_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {
	static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::keyPressEvent(param1);
}

bool QGraphicsWebView_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWebView_virtualbase_keyReleaseEvent(void* self, QKeyEvent* param1) {
	static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::keyReleaseEvent(param1);
}

bool QGraphicsWebView_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWebView_virtualbase_contextMenuEvent(void* self, QGraphicsSceneContextMenuEvent* param1) {
	static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::contextMenuEvent(param1);
}

bool QGraphicsWebView_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWebView_virtualbase_dragEnterEvent(void* self, QGraphicsSceneDragDropEvent* param1) {
	static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::dragEnterEvent(param1);
}

bool QGraphicsWebView_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWebView_virtualbase_dragLeaveEvent(void* self, QGraphicsSceneDragDropEvent* param1) {
	static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::dragLeaveEvent(param1);
}

bool QGraphicsWebView_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWebView_virtualbase_dragMoveEvent(void* self, QGraphicsSceneDragDropEvent* param1) {
	static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::dragMoveEvent(param1);
}

bool QGraphicsWebView_override_virtual_dropEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWebView_virtualbase_dropEvent(void* self, QGraphicsSceneDragDropEvent* param1) {
	static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::dropEvent(param1);
}

bool QGraphicsWebView_override_virtual_focusInEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWebView_virtualbase_focusInEvent(void* self, QFocusEvent* param1) {
	static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::focusInEvent(param1);
}

bool QGraphicsWebView_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWebView_virtualbase_focusOutEvent(void* self, QFocusEvent* param1) {
	static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::focusOutEvent(param1);
}

bool QGraphicsWebView_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWebView_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::inputMethodEvent(param1);
}

bool QGraphicsWebView_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = std::move(slot_handle);
	return true;
}

bool QGraphicsWebView_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::focusNextPrevChild(next);
}

bool QGraphicsWebView_override_virtual_sceneEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sceneEvent = std::move(slot_handle);
	return true;
}

bool QGraphicsWebView_virtualbase_sceneEvent(void* self, QEvent* param1) {
	return static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::sceneEvent(param1);
}

bool QGraphicsWebView_override_virtual_getContentsMargins(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__getContentsMargins = std::move(slot_handle);
	return true;
}

void QGraphicsWebView_virtualbase_getContentsMargins(const void* self, double* left, double* top, double* right, double* bottom) {
	static_cast<const MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::getContentsMargins(static_cast<qreal*>(left), static_cast<qreal*>(top), static_cast<qreal*>(right), static_cast<qreal*>(bottom));
}

bool QGraphicsWebView_override_virtual_type(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__type = std::move(slot_handle);
	return true;
}

int QGraphicsWebView_virtualbase_type(const void* self) {
	return static_cast<const MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::type();
}

bool QGraphicsWebView_override_virtual_paintWindowFrame(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintWindowFrame = std::move(slot_handle);
	return true;
}

void QGraphicsWebView_virtualbase_paintWindowFrame(void* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::paintWindowFrame(painter, option, widget);
}

bool QGraphicsWebView_override_virtual_boundingRect(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__boundingRect = std::move(slot_handle);
	return true;
}

QRectF* QGraphicsWebView_virtualbase_boundingRect(const void* self) {
	return new QRectF(static_cast<const MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::boundingRect());
}

bool QGraphicsWebView_override_virtual_shape(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__shape = std::move(slot_handle);
	return true;
}

QPainterPath* QGraphicsWebView_virtualbase_shape(const void* self) {
	return new QPainterPath(static_cast<const MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::shape());
}

bool QGraphicsWebView_override_virtual_initStyleOption(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initStyleOption = std::move(slot_handle);
	return true;
}

void QGraphicsWebView_virtualbase_initStyleOption(const void* self, QStyleOption* option) {
	static_cast<const MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::initStyleOption(option);
}

bool QGraphicsWebView_override_virtual_propertyChange(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__propertyChange = std::move(slot_handle);
	return true;
}

QVariant* QGraphicsWebView_virtualbase_propertyChange(void* self, struct miqt_string propertyName, QVariant* value) {
	QString propertyName_QString = QString::fromUtf8(propertyName.data, propertyName.len);
	return new QVariant(static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::propertyChange(propertyName_QString, *value));
}

bool QGraphicsWebView_override_virtual_windowFrameEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__windowFrameEvent = std::move(slot_handle);
	return true;
}

bool QGraphicsWebView_virtualbase_windowFrameEvent(void* self, QEvent* e) {
	return static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::windowFrameEvent(e);
}

bool QGraphicsWebView_override_virtual_windowFrameSectionAt(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__windowFrameSectionAt = std::move(slot_handle);
	return true;
}

int QGraphicsWebView_virtualbase_windowFrameSectionAt(const void* self, QPointF* pos) {
	Qt::WindowFrameSection _ret = static_cast<const MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::windowFrameSectionAt(*pos);
	return static_cast<int>(_ret);
}

bool QGraphicsWebView_override_virtual_changeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWebView_virtualbase_changeEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::changeEvent(event);
}

bool QGraphicsWebView_override_virtual_closeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWebView_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::closeEvent(event);
}

bool QGraphicsWebView_override_virtual_hideEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWebView_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::hideEvent(event);
}

bool QGraphicsWebView_override_virtual_moveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWebView_virtualbase_moveEvent(void* self, QGraphicsSceneMoveEvent* event) {
	static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::moveEvent(event);
}

bool QGraphicsWebView_override_virtual_polishEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__polishEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWebView_virtualbase_polishEvent(void* self) {
	static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::polishEvent();
}

bool QGraphicsWebView_override_virtual_resizeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWebView_virtualbase_resizeEvent(void* self, QGraphicsSceneResizeEvent* event) {
	static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::resizeEvent(event);
}

bool QGraphicsWebView_override_virtual_showEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWebView_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::showEvent(event);
}

bool QGraphicsWebView_override_virtual_grabMouseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__grabMouseEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWebView_virtualbase_grabMouseEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::grabMouseEvent(event);
}

bool QGraphicsWebView_override_virtual_ungrabMouseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__ungrabMouseEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWebView_virtualbase_ungrabMouseEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::ungrabMouseEvent(event);
}

bool QGraphicsWebView_override_virtual_grabKeyboardEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__grabKeyboardEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWebView_virtualbase_grabKeyboardEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::grabKeyboardEvent(event);
}

bool QGraphicsWebView_override_virtual_ungrabKeyboardEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__ungrabKeyboardEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWebView_virtualbase_ungrabKeyboardEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::ungrabKeyboardEvent(event);
}

bool QGraphicsWebView_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QGraphicsWebView_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::eventFilter(watched, event);
}

bool QGraphicsWebView_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWebView_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::timerEvent(event);
}

bool QGraphicsWebView_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWebView_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::childEvent(event);
}

bool QGraphicsWebView_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWebView_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::customEvent(event);
}

bool QGraphicsWebView_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QGraphicsWebView_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::connectNotify(*signal);
}

bool QGraphicsWebView_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QGraphicsWebView_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::disconnectNotify(*signal);
}

bool QGraphicsWebView_override_virtual_advance(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__advance = std::move(slot_handle);
	return true;
}

void QGraphicsWebView_virtualbase_advance(void* self, int phase) {
	static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::advance(static_cast<int>(phase));
}

bool QGraphicsWebView_override_virtual_contains(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contains = std::move(slot_handle);
	return true;
}

bool QGraphicsWebView_virtualbase_contains(const void* self, QPointF* point) {
	return static_cast<const MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::contains(*point);
}

bool QGraphicsWebView_override_virtual_collidesWithItem(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__collidesWithItem = std::move(slot_handle);
	return true;
}

bool QGraphicsWebView_virtualbase_collidesWithItem(const void* self, QGraphicsItem* other, int mode) {
	return static_cast<const MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::collidesWithItem(other, static_cast<Qt::ItemSelectionMode>(mode));
}

bool QGraphicsWebView_override_virtual_collidesWithPath(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__collidesWithPath = std::move(slot_handle);
	return true;
}

bool QGraphicsWebView_virtualbase_collidesWithPath(const void* self, QPainterPath* path, int mode) {
	return static_cast<const MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::collidesWithPath(*path, static_cast<Qt::ItemSelectionMode>(mode));
}

bool QGraphicsWebView_override_virtual_isObscuredBy(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isObscuredBy = std::move(slot_handle);
	return true;
}

bool QGraphicsWebView_virtualbase_isObscuredBy(const void* self, QGraphicsItem* item) {
	return static_cast<const MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::isObscuredBy(item);
}

bool QGraphicsWebView_override_virtual_opaqueArea(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__opaqueArea = std::move(slot_handle);
	return true;
}

QPainterPath* QGraphicsWebView_virtualbase_opaqueArea(const void* self) {
	return new QPainterPath(static_cast<const MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::opaqueArea());
}

bool QGraphicsWebView_override_virtual_sceneEventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sceneEventFilter = std::move(slot_handle);
	return true;
}

bool QGraphicsWebView_virtualbase_sceneEventFilter(void* self, QGraphicsItem* watched, QEvent* event) {
	return static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::sceneEventFilter(watched, event);
}

bool QGraphicsWebView_override_virtual_hoverEnterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hoverEnterEvent = std::move(slot_handle);
	return true;
}

void QGraphicsWebView_virtualbase_hoverEnterEvent(void* self, QGraphicsSceneHoverEvent* event) {
	static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::hoverEnterEvent(event);
}

bool QGraphicsWebView_override_virtual_supportsExtension(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__supportsExtension = std::move(slot_handle);
	return true;
}

bool QGraphicsWebView_virtualbase_supportsExtension(const void* self, int extension) {
	return static_cast<const MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::supportsExtension(static_cast<MiqtVirtualQGraphicsWebView::Extension>(extension));
}

bool QGraphicsWebView_override_virtual_setExtension(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setExtension = std::move(slot_handle);
	return true;
}

void QGraphicsWebView_virtualbase_setExtension(void* self, int extension, QVariant* variant) {
	static_cast<MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::setExtension(static_cast<MiqtVirtualQGraphicsWebView::Extension>(extension), *variant);
}

bool QGraphicsWebView_override_virtual_extension(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QGraphicsWebView> slot_handle(slot);
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__extension = std::move(slot_handle);
	return true;
}

QVariant* QGraphicsWebView_virtualbase_extension(const void* self, QVariant* variant) {
	return new QVariant(static_cast<const MiqtVirtualQGraphicsWebView*>(self)->QGraphicsWebView::extension(*variant));
}

void QGraphicsWebView_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

QObject* QGraphicsWebView_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QGraphicsWebView_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QGraphicsWebView_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QGraphicsWebView_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QGraphicsWebView_protectedbase_addToIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->addToIndex();
}

void QGraphicsWebView_protectedbase_removeFromIndex(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->removeFromIndex();
}

void QGraphicsWebView_protectedbase_prepareGeometryChange(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->prepareGeometryChange();
}

void QGraphicsWebView_protectedbase_setGraphicsItem(bool* _dynamic_cast_ok, void* self, QGraphicsItem* item) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setGraphicsItem(item);
}

void QGraphicsWebView_protectedbase_setOwnedByLayout(bool* _dynamic_cast_ok, void* self, bool ownedByLayout) {
	MiqtVirtualQGraphicsWebView* self_cast = dynamic_cast<MiqtVirtualQGraphicsWebView*>( (QGraphicsWebView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setOwnedByLayout(ownedByLayout);
}

void QGraphicsWebView_delete(QGraphicsWebView* self) {
	delete self;
}

