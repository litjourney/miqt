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
#include <QFrame>
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
#include <QRectF>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qwt_text_label.h>
#include "gen_qwt_text_label.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QwtTextLabel(intptr_t);
void miqt_exec_callback_QwtTextLabel_setTextWithText(QwtTextLabel*, intptr_t, QwtText*);
QSize* miqt_exec_callback_QwtTextLabel_sizeHint(const QwtTextLabel*, intptr_t);
QSize* miqt_exec_callback_QwtTextLabel_minimumSizeHint(const QwtTextLabel*, intptr_t);
int miqt_exec_callback_QwtTextLabel_heightForWidth(const QwtTextLabel*, intptr_t, int);
void miqt_exec_callback_QwtTextLabel_drawText(QwtTextLabel*, intptr_t, QPainter*, QRectF*);
void miqt_exec_callback_QwtTextLabel_paintEvent(QwtTextLabel*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QwtTextLabel_drawContents(QwtTextLabel*, intptr_t, QPainter*);
bool miqt_exec_callback_QwtTextLabel_event(QwtTextLabel*, intptr_t, QEvent*);
void miqt_exec_callback_QwtTextLabel_changeEvent(QwtTextLabel*, intptr_t, QEvent*);
int miqt_exec_callback_QwtTextLabel_devType(const QwtTextLabel*, intptr_t);
void miqt_exec_callback_QwtTextLabel_setVisible(QwtTextLabel*, intptr_t, bool);
bool miqt_exec_callback_QwtTextLabel_hasHeightForWidth(const QwtTextLabel*, intptr_t);
QPaintEngine* miqt_exec_callback_QwtTextLabel_paintEngine(const QwtTextLabel*, intptr_t);
void miqt_exec_callback_QwtTextLabel_mousePressEvent(QwtTextLabel*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtTextLabel_mouseReleaseEvent(QwtTextLabel*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtTextLabel_mouseDoubleClickEvent(QwtTextLabel*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtTextLabel_mouseMoveEvent(QwtTextLabel*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtTextLabel_wheelEvent(QwtTextLabel*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QwtTextLabel_keyPressEvent(QwtTextLabel*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtTextLabel_keyReleaseEvent(QwtTextLabel*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtTextLabel_focusInEvent(QwtTextLabel*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QwtTextLabel_focusOutEvent(QwtTextLabel*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QwtTextLabel_enterEvent(QwtTextLabel*, intptr_t, QEvent*);
void miqt_exec_callback_QwtTextLabel_leaveEvent(QwtTextLabel*, intptr_t, QEvent*);
void miqt_exec_callback_QwtTextLabel_moveEvent(QwtTextLabel*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QwtTextLabel_resizeEvent(QwtTextLabel*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QwtTextLabel_closeEvent(QwtTextLabel*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QwtTextLabel_contextMenuEvent(QwtTextLabel*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QwtTextLabel_tabletEvent(QwtTextLabel*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QwtTextLabel_actionEvent(QwtTextLabel*, intptr_t, QActionEvent*);
void miqt_exec_callback_QwtTextLabel_dragEnterEvent(QwtTextLabel*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QwtTextLabel_dragMoveEvent(QwtTextLabel*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QwtTextLabel_dragLeaveEvent(QwtTextLabel*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QwtTextLabel_dropEvent(QwtTextLabel*, intptr_t, QDropEvent*);
void miqt_exec_callback_QwtTextLabel_showEvent(QwtTextLabel*, intptr_t, QShowEvent*);
void miqt_exec_callback_QwtTextLabel_hideEvent(QwtTextLabel*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QwtTextLabel_nativeEvent(QwtTextLabel*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QwtTextLabel_metric(const QwtTextLabel*, intptr_t, int);
void miqt_exec_callback_QwtTextLabel_initPainter(const QwtTextLabel*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QwtTextLabel_redirected(const QwtTextLabel*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QwtTextLabel_sharedPainter(const QwtTextLabel*, intptr_t);
void miqt_exec_callback_QwtTextLabel_inputMethodEvent(QwtTextLabel*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QwtTextLabel_inputMethodQuery(const QwtTextLabel*, intptr_t, int);
bool miqt_exec_callback_QwtTextLabel_focusNextPrevChild(QwtTextLabel*, intptr_t, bool);
bool miqt_exec_callback_QwtTextLabel_eventFilter(QwtTextLabel*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QwtTextLabel_timerEvent(QwtTextLabel*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QwtTextLabel_childEvent(QwtTextLabel*, intptr_t, QChildEvent*);
void miqt_exec_callback_QwtTextLabel_customEvent(QwtTextLabel*, intptr_t, QEvent*);
void miqt_exec_callback_QwtTextLabel_connectNotify(QwtTextLabel*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QwtTextLabel_disconnectNotify(QwtTextLabel*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtTextLabel final : public QwtTextLabel {
public:

	MiqtVirtualQwtTextLabel(QWidget* parent): QwtTextLabel(parent) {}
	MiqtVirtualQwtTextLabel(): QwtTextLabel() {}
	MiqtVirtualQwtTextLabel(const QwtText& param1): QwtTextLabel(param1) {}
	MiqtVirtualQwtTextLabel(const QwtText& param1, QWidget* parent): QwtTextLabel(param1, parent) {}

	virtual ~MiqtVirtualQwtTextLabel() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__setTextWithText;

	// Subclass to allow providing a Go implementation
	virtual void setText(const QwtText& text) override {
		if (!handle__setTextWithText) {
			QwtTextLabel::setText(text);
			return;
		}

		const QwtText& text_ret = text;
		// Cast returned reference into pointer
		QwtText* sigval1 = const_cast<QwtText*>(&text_ret);
		miqt_exec_callback_QwtTextLabel_setTextWithText(this, handle__setTextWithText.value(), sigval1);

	}

	friend void QwtTextLabel_virtualbase_setTextWithText(void* self, QwtText* text);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__sizeHint;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (!handle__sizeHint) {
			return QwtTextLabel::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtTextLabel_sizeHint(this, handle__sizeHint.value());
		return *callback_return_value;
	}

	friend QSize* QwtTextLabel_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__minimumSizeHint;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (!handle__minimumSizeHint) {
			return QwtTextLabel::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtTextLabel_minimumSizeHint(this, handle__minimumSizeHint.value());
		return *callback_return_value;
	}

	friend QSize* QwtTextLabel_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__heightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (!handle__heightForWidth) {
			return QwtTextLabel::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QwtTextLabel_heightForWidth(this, handle__heightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtTextLabel_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__drawText;

	// Subclass to allow providing a Go implementation
	virtual void drawText(QPainter* param1, const QRectF& param2) override {
		if (!handle__drawText) {
			QwtTextLabel::drawText(param1, param2);
			return;
		}

		QPainter* sigval1 = param1;
		const QRectF& param2_ret = param2;
		// Cast returned reference into pointer
		QRectF* sigval2 = const_cast<QRectF*>(&param2_ret);
		miqt_exec_callback_QwtTextLabel_drawText(this, handle__drawText.value(), sigval1, sigval2);

	}

	friend void QwtTextLabel_virtualbase_drawText(void* self, QPainter* param1, QRectF* param2);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__paintEvent;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (!handle__paintEvent) {
			QwtTextLabel::paintEvent(param1);
			return;
		}

		QPaintEvent* sigval1 = param1;
		miqt_exec_callback_QwtTextLabel_paintEvent(this, handle__paintEvent.value(), sigval1);

	}

	friend void QwtTextLabel_virtualbase_paintEvent(void* self, QPaintEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__drawContents;

	// Subclass to allow providing a Go implementation
	virtual void drawContents(QPainter* param1) override {
		if (!handle__drawContents) {
			QwtTextLabel::drawContents(param1);
			return;
		}

		QPainter* sigval1 = param1;
		miqt_exec_callback_QwtTextLabel_drawContents(this, handle__drawContents.value(), sigval1);

	}

	friend void QwtTextLabel_virtualbase_drawContents(void* self, QPainter* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (!handle__event) {
			return QwtTextLabel::event(e);
		}

		QEvent* sigval1 = e;
		bool callback_return_value = miqt_exec_callback_QwtTextLabel_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QwtTextLabel_virtualbase_event(void* self, QEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__changeEvent;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (!handle__changeEvent) {
			QwtTextLabel::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QwtTextLabel_changeEvent(this, handle__changeEvent.value(), sigval1);

	}

	friend void QwtTextLabel_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__devType;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (!handle__devType) {
			return QwtTextLabel::devType();
		}

		int callback_return_value = miqt_exec_callback_QwtTextLabel_devType(this, handle__devType.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QwtTextLabel_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__setVisible;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (!handle__setVisible) {
			QwtTextLabel::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QwtTextLabel_setVisible(this, handle__setVisible.value(), sigval1);

	}

	friend void QwtTextLabel_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__hasHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (!handle__hasHeightForWidth) {
			return QwtTextLabel::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QwtTextLabel_hasHeightForWidth(this, handle__hasHeightForWidth.value());
		return callback_return_value;
	}

	friend bool QwtTextLabel_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__paintEngine;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (!handle__paintEngine) {
			return QwtTextLabel::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QwtTextLabel_paintEngine(this, handle__paintEngine.value());
		return callback_return_value;
	}

	friend QPaintEngine* QwtTextLabel_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__mousePressEvent;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (!handle__mousePressEvent) {
			QwtTextLabel::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_mousePressEvent(this, handle__mousePressEvent.value(), sigval1);

	}

	friend void QwtTextLabel_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__mouseReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (!handle__mouseReleaseEvent) {
			QwtTextLabel::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_mouseReleaseEvent(this, handle__mouseReleaseEvent.value(), sigval1);

	}

	friend void QwtTextLabel_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__mouseDoubleClickEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (!handle__mouseDoubleClickEvent) {
			QwtTextLabel::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent.value(), sigval1);

	}

	friend void QwtTextLabel_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__mouseMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (!handle__mouseMoveEvent) {
			QwtTextLabel::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_mouseMoveEvent(this, handle__mouseMoveEvent.value(), sigval1);

	}

	friend void QwtTextLabel_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__wheelEvent;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (!handle__wheelEvent) {
			QwtTextLabel::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_wheelEvent(this, handle__wheelEvent.value(), sigval1);

	}

	friend void QwtTextLabel_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__keyPressEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (!handle__keyPressEvent) {
			QwtTextLabel::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_keyPressEvent(this, handle__keyPressEvent.value(), sigval1);

	}

	friend void QwtTextLabel_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__keyReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (!handle__keyReleaseEvent) {
			QwtTextLabel::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_keyReleaseEvent(this, handle__keyReleaseEvent.value(), sigval1);

	}

	friend void QwtTextLabel_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__focusInEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (!handle__focusInEvent) {
			QwtTextLabel::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_focusInEvent(this, handle__focusInEvent.value(), sigval1);

	}

	friend void QwtTextLabel_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__focusOutEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (!handle__focusOutEvent) {
			QwtTextLabel::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_focusOutEvent(this, handle__focusOutEvent.value(), sigval1);

	}

	friend void QwtTextLabel_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__enterEvent;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (!handle__enterEvent) {
			QwtTextLabel::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_enterEvent(this, handle__enterEvent.value(), sigval1);

	}

	friend void QwtTextLabel_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__leaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (!handle__leaveEvent) {
			QwtTextLabel::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_leaveEvent(this, handle__leaveEvent.value(), sigval1);

	}

	friend void QwtTextLabel_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__moveEvent;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (!handle__moveEvent) {
			QwtTextLabel::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_moveEvent(this, handle__moveEvent.value(), sigval1);

	}

	friend void QwtTextLabel_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__resizeEvent;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (!handle__resizeEvent) {
			QwtTextLabel::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_resizeEvent(this, handle__resizeEvent.value(), sigval1);

	}

	friend void QwtTextLabel_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__closeEvent;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (!handle__closeEvent) {
			QwtTextLabel::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_closeEvent(this, handle__closeEvent.value(), sigval1);

	}

	friend void QwtTextLabel_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__contextMenuEvent;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (!handle__contextMenuEvent) {
			QwtTextLabel::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_contextMenuEvent(this, handle__contextMenuEvent.value(), sigval1);

	}

	friend void QwtTextLabel_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__tabletEvent;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (!handle__tabletEvent) {
			QwtTextLabel::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_tabletEvent(this, handle__tabletEvent.value(), sigval1);

	}

	friend void QwtTextLabel_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__actionEvent;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (!handle__actionEvent) {
			QwtTextLabel::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_actionEvent(this, handle__actionEvent.value(), sigval1);

	}

	friend void QwtTextLabel_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__dragEnterEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (!handle__dragEnterEvent) {
			QwtTextLabel::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_dragEnterEvent(this, handle__dragEnterEvent.value(), sigval1);

	}

	friend void QwtTextLabel_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__dragMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (!handle__dragMoveEvent) {
			QwtTextLabel::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_dragMoveEvent(this, handle__dragMoveEvent.value(), sigval1);

	}

	friend void QwtTextLabel_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__dragLeaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (!handle__dragLeaveEvent) {
			QwtTextLabel::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_dragLeaveEvent(this, handle__dragLeaveEvent.value(), sigval1);

	}

	friend void QwtTextLabel_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__dropEvent;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (!handle__dropEvent) {
			QwtTextLabel::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_dropEvent(this, handle__dropEvent.value(), sigval1);

	}

	friend void QwtTextLabel_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__showEvent;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (!handle__showEvent) {
			QwtTextLabel::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_showEvent(this, handle__showEvent.value(), sigval1);

	}

	friend void QwtTextLabel_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__hideEvent;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (!handle__hideEvent) {
			QwtTextLabel::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_hideEvent(this, handle__hideEvent.value(), sigval1);

	}

	friend void QwtTextLabel_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__nativeEvent;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (!handle__nativeEvent) {
			return QwtTextLabel::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QwtTextLabel_nativeEvent(this, handle__nativeEvent.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QwtTextLabel_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__metric;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (!handle__metric) {
			return QwtTextLabel::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QwtTextLabel_metric(this, handle__metric.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtTextLabel_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__initPainter;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (!handle__initPainter) {
			QwtTextLabel::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QwtTextLabel_initPainter(this, handle__initPainter.value(), sigval1);

	}

	friend void QwtTextLabel_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__redirected;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (!handle__redirected) {
			return QwtTextLabel::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QwtTextLabel_redirected(this, handle__redirected.value(), sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QwtTextLabel_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__sharedPainter;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (!handle__sharedPainter) {
			return QwtTextLabel::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QwtTextLabel_sharedPainter(this, handle__sharedPainter.value());
		return callback_return_value;
	}

	friend QPainter* QwtTextLabel_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__inputMethodEvent;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (!handle__inputMethodEvent) {
			QwtTextLabel::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QwtTextLabel_inputMethodEvent(this, handle__inputMethodEvent.value(), sigval1);

	}

	friend void QwtTextLabel_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__inputMethodQuery;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (!handle__inputMethodQuery) {
			return QwtTextLabel::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QwtTextLabel_inputMethodQuery(this, handle__inputMethodQuery.value(), sigval1);
		return *callback_return_value;
	}

	friend QVariant* QwtTextLabel_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__focusNextPrevChild;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (!handle__focusNextPrevChild) {
			return QwtTextLabel::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QwtTextLabel_focusNextPrevChild(this, handle__focusNextPrevChild.value(), sigval1);
		return callback_return_value;
	}

	friend bool QwtTextLabel_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QwtTextLabel::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QwtTextLabel_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QwtTextLabel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QwtTextLabel::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QwtTextLabel_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QwtTextLabel::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QwtTextLabel_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QwtTextLabel::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtTextLabel_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QwtTextLabel_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QwtTextLabel::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtTextLabel_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QwtTextLabel_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QwtTextLabel::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtTextLabel_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QwtTextLabel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QwtTextLabel_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
	friend void QwtTextLabel_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option);
	friend void QwtTextLabel_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QwtTextLabel_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QwtTextLabel_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QwtTextLabel_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QwtTextLabel_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QwtTextLabel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QwtTextLabel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QwtTextLabel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QwtTextLabel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QwtTextLabel* QwtTextLabel_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQwtTextLabel(parent);
}

QwtTextLabel* QwtTextLabel_new2() {
	return new (std::nothrow) MiqtVirtualQwtTextLabel();
}

QwtTextLabel* QwtTextLabel_new3(QwtText* param1) {
	return new (std::nothrow) MiqtVirtualQwtTextLabel(*param1);
}

QwtTextLabel* QwtTextLabel_new4(QwtText* param1, QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQwtTextLabel(*param1, parent);
}

void QwtTextLabel_virtbase(QwtTextLabel* src, QFrame** outptr_QFrame) {
	*outptr_QFrame = static_cast<QFrame*>(src);
}

QMetaObject* QwtTextLabel_metaObject(const QwtTextLabel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QwtTextLabel_metacast(QwtTextLabel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QwtTextLabel_tr(const char* s) {
	QString _ret = QwtTextLabel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtTextLabel_trUtf8(const char* s) {
	QString _ret = QwtTextLabel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QwtTextLabel_setPlainText(QwtTextLabel* self, struct miqt_string plainText) {
	QString plainText_QString = QString::fromUtf8(plainText.data, plainText.len);
	self->setPlainText(plainText_QString);
}

struct miqt_string QwtTextLabel_plainText(const QwtTextLabel* self) {
	QString _ret = self->plainText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QwtTextLabel_setText(QwtTextLabel* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->setText(param1_QString);
}

void QwtTextLabel_setTextWithText(QwtTextLabel* self, QwtText* text) {
	self->setText(*text);
}

void QwtTextLabel_clear(QwtTextLabel* self) {
	self->clear();
}

QwtText* QwtTextLabel_text(const QwtTextLabel* self) {
	const QwtText& _ret = self->text();
	// Cast returned reference into pointer
	return const_cast<QwtText*>(&_ret);
}

int QwtTextLabel_indent(const QwtTextLabel* self) {
	return self->indent();
}

void QwtTextLabel_setIndent(QwtTextLabel* self, int indent) {
	self->setIndent(static_cast<int>(indent));
}

int QwtTextLabel_margin(const QwtTextLabel* self) {
	return self->margin();
}

void QwtTextLabel_setMargin(QwtTextLabel* self, int margin) {
	self->setMargin(static_cast<int>(margin));
}

QSize* QwtTextLabel_sizeHint(const QwtTextLabel* self) {
	return new QSize(self->sizeHint());
}

QSize* QwtTextLabel_minimumSizeHint(const QwtTextLabel* self) {
	return new QSize(self->minimumSizeHint());
}

int QwtTextLabel_heightForWidth(const QwtTextLabel* self, int param1) {
	return self->heightForWidth(static_cast<int>(param1));
}

QRect* QwtTextLabel_textRect(const QwtTextLabel* self) {
	return new QRect(self->textRect());
}

void QwtTextLabel_drawText(QwtTextLabel* self, QPainter* param1, QRectF* param2) {
	self->drawText(param1, *param2);
}

struct miqt_string QwtTextLabel_tr2(const char* s, const char* c) {
	QString _ret = QwtTextLabel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtTextLabel_tr3(const char* s, const char* c, int n) {
	QString _ret = QwtTextLabel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtTextLabel_trUtf82(const char* s, const char* c) {
	QString _ret = QwtTextLabel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtTextLabel_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QwtTextLabel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QwtTextLabel_setText2(QwtTextLabel* self, struct miqt_string param1, int textFormat) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->setText(param1_QString, static_cast<QwtText::TextFormat>(textFormat));
}

bool QwtTextLabel_override_virtual_setTextWithText(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setTextWithText = std::move(slot_handle);
	return true;
}

void QwtTextLabel_virtualbase_setTextWithText(void* self, QwtText* text) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::setText(*text);
}

bool QwtTextLabel_override_virtual_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	return true;
}

QSize* QwtTextLabel_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::sizeHint());
}

bool QwtTextLabel_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	return true;
}

QSize* QwtTextLabel_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::minimumSizeHint());
}

bool QwtTextLabel_override_virtual_heightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = std::move(slot_handle);
	return true;
}

int QwtTextLabel_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::heightForWidth(static_cast<int>(param1));
}

bool QwtTextLabel_override_virtual_drawText(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawText = std::move(slot_handle);
	return true;
}

void QwtTextLabel_virtualbase_drawText(void* self, QPainter* param1, QRectF* param2) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::drawText(param1, *param2);
}

bool QwtTextLabel_override_virtual_paintEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = std::move(slot_handle);
	return true;
}

void QwtTextLabel_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::paintEvent(param1);
}

bool QwtTextLabel_override_virtual_drawContents(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawContents = std::move(slot_handle);
	return true;
}

void QwtTextLabel_virtualbase_drawContents(void* self, QPainter* param1) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::drawContents(param1);
}

bool QwtTextLabel_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QwtTextLabel_virtualbase_event(void* self, QEvent* e) {
	return static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::event(e);
}

bool QwtTextLabel_override_virtual_changeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = std::move(slot_handle);
	return true;
}

void QwtTextLabel_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::changeEvent(param1);
}

bool QwtTextLabel_override_virtual_devType(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = std::move(slot_handle);
	return true;
}

int QwtTextLabel_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::devType();
}

bool QwtTextLabel_override_virtual_setVisible(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = std::move(slot_handle);
	return true;
}

void QwtTextLabel_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::setVisible(visible);
}

bool QwtTextLabel_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = std::move(slot_handle);
	return true;
}

bool QwtTextLabel_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::hasHeightForWidth();
}

bool QwtTextLabel_override_virtual_paintEngine(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = std::move(slot_handle);
	return true;
}

QPaintEngine* QwtTextLabel_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::paintEngine();
}

bool QwtTextLabel_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = std::move(slot_handle);
	return true;
}

void QwtTextLabel_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::mousePressEvent(event);
}

bool QwtTextLabel_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = std::move(slot_handle);
	return true;
}

void QwtTextLabel_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::mouseReleaseEvent(event);
}

bool QwtTextLabel_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = std::move(slot_handle);
	return true;
}

void QwtTextLabel_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::mouseDoubleClickEvent(event);
}

bool QwtTextLabel_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = std::move(slot_handle);
	return true;
}

void QwtTextLabel_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::mouseMoveEvent(event);
}

bool QwtTextLabel_override_virtual_wheelEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = std::move(slot_handle);
	return true;
}

void QwtTextLabel_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::wheelEvent(event);
}

bool QwtTextLabel_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = std::move(slot_handle);
	return true;
}

void QwtTextLabel_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::keyPressEvent(event);
}

bool QwtTextLabel_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = std::move(slot_handle);
	return true;
}

void QwtTextLabel_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::keyReleaseEvent(event);
}

bool QwtTextLabel_override_virtual_focusInEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = std::move(slot_handle);
	return true;
}

void QwtTextLabel_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::focusInEvent(event);
}

bool QwtTextLabel_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = std::move(slot_handle);
	return true;
}

void QwtTextLabel_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::focusOutEvent(event);
}

bool QwtTextLabel_override_virtual_enterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = std::move(slot_handle);
	return true;
}

void QwtTextLabel_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::enterEvent(event);
}

bool QwtTextLabel_override_virtual_leaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = std::move(slot_handle);
	return true;
}

void QwtTextLabel_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::leaveEvent(event);
}

bool QwtTextLabel_override_virtual_moveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = std::move(slot_handle);
	return true;
}

void QwtTextLabel_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::moveEvent(event);
}

bool QwtTextLabel_override_virtual_resizeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = std::move(slot_handle);
	return true;
}

void QwtTextLabel_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::resizeEvent(event);
}

bool QwtTextLabel_override_virtual_closeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = std::move(slot_handle);
	return true;
}

void QwtTextLabel_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::closeEvent(event);
}

bool QwtTextLabel_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = std::move(slot_handle);
	return true;
}

void QwtTextLabel_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::contextMenuEvent(event);
}

bool QwtTextLabel_override_virtual_tabletEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = std::move(slot_handle);
	return true;
}

void QwtTextLabel_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::tabletEvent(event);
}

bool QwtTextLabel_override_virtual_actionEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = std::move(slot_handle);
	return true;
}

void QwtTextLabel_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::actionEvent(event);
}

bool QwtTextLabel_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = std::move(slot_handle);
	return true;
}

void QwtTextLabel_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::dragEnterEvent(event);
}

bool QwtTextLabel_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = std::move(slot_handle);
	return true;
}

void QwtTextLabel_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::dragMoveEvent(event);
}

bool QwtTextLabel_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = std::move(slot_handle);
	return true;
}

void QwtTextLabel_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::dragLeaveEvent(event);
}

bool QwtTextLabel_override_virtual_dropEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = std::move(slot_handle);
	return true;
}

void QwtTextLabel_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::dropEvent(event);
}

bool QwtTextLabel_override_virtual_showEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = std::move(slot_handle);
	return true;
}

void QwtTextLabel_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::showEvent(event);
}

bool QwtTextLabel_override_virtual_hideEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = std::move(slot_handle);
	return true;
}

void QwtTextLabel_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::hideEvent(event);
}

bool QwtTextLabel_override_virtual_nativeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = std::move(slot_handle);
	return true;
}

bool QwtTextLabel_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QwtTextLabel_override_virtual_metric(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = std::move(slot_handle);
	return true;
}

int QwtTextLabel_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::metric(static_cast<MiqtVirtualQwtTextLabel::PaintDeviceMetric>(param1));
}

bool QwtTextLabel_override_virtual_initPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = std::move(slot_handle);
	return true;
}

void QwtTextLabel_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::initPainter(painter);
}

bool QwtTextLabel_override_virtual_redirected(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = std::move(slot_handle);
	return true;
}

QPaintDevice* QwtTextLabel_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::redirected(offset);
}

bool QwtTextLabel_override_virtual_sharedPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = std::move(slot_handle);
	return true;
}

QPainter* QwtTextLabel_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::sharedPainter();
}

bool QwtTextLabel_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = std::move(slot_handle);
	return true;
}

void QwtTextLabel_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::inputMethodEvent(param1);
}

bool QwtTextLabel_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	return true;
}

QVariant* QwtTextLabel_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QwtTextLabel_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = std::move(slot_handle);
	return true;
}

bool QwtTextLabel_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::focusNextPrevChild(next);
}

bool QwtTextLabel_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QwtTextLabel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::eventFilter(watched, event);
}

bool QwtTextLabel_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QwtTextLabel_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::timerEvent(event);
}

bool QwtTextLabel_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QwtTextLabel_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::childEvent(event);
}

bool QwtTextLabel_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QwtTextLabel_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::customEvent(event);
}

bool QwtTextLabel_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QwtTextLabel_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::connectNotify(*signal);
}

bool QwtTextLabel_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtTextLabel> slot_handle(slot);
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QwtTextLabel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtTextLabel*>(self)->QwtTextLabel::disconnectNotify(*signal);
}

void QwtTextLabel_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->drawFrame(param1);
}

void QwtTextLabel_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->initStyleOption(option);
}

void QwtTextLabel_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QwtTextLabel_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QwtTextLabel_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QwtTextLabel_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QwtTextLabel_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QwtTextLabel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QwtTextLabel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QwtTextLabel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QwtTextLabel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQwtTextLabel* self_cast = dynamic_cast<MiqtVirtualQwtTextLabel*>( (QwtTextLabel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QwtTextLabel_delete(QwtTextLabel* self) {
	delete self;
}

