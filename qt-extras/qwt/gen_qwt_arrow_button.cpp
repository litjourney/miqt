#include <memory>
#include <utility>
#include <QAbstractButton>
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
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QPushButton>
#include <QRect>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QStyleOptionButton>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qwt_arrow_button.h>
#include "gen_qwt_arrow_button.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QwtArrowButton(intptr_t);
QSize* miqt_exec_callback_QwtArrowButton_sizeHint(const QwtArrowButton*, intptr_t);
QSize* miqt_exec_callback_QwtArrowButton_minimumSizeHint(const QwtArrowButton*, intptr_t);
void miqt_exec_callback_QwtArrowButton_paintEvent(QwtArrowButton*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QwtArrowButton_drawButtonLabel(QwtArrowButton*, intptr_t, QPainter*);
void miqt_exec_callback_QwtArrowButton_drawArrow(const QwtArrowButton*, intptr_t, QPainter*, QRect*, int);
QRect* miqt_exec_callback_QwtArrowButton_labelRect(const QwtArrowButton*, intptr_t);
QSize* miqt_exec_callback_QwtArrowButton_arrowSize(const QwtArrowButton*, intptr_t, int, QSize*);
void miqt_exec_callback_QwtArrowButton_keyPressEvent(QwtArrowButton*, intptr_t, QKeyEvent*);
bool miqt_exec_callback_QwtArrowButton_event(QwtArrowButton*, intptr_t, QEvent*);
void miqt_exec_callback_QwtArrowButton_focusInEvent(QwtArrowButton*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QwtArrowButton_focusOutEvent(QwtArrowButton*, intptr_t, QFocusEvent*);
bool miqt_exec_callback_QwtArrowButton_hitButton(const QwtArrowButton*, intptr_t, QPoint*);
void miqt_exec_callback_QwtArrowButton_checkStateSet(QwtArrowButton*, intptr_t);
void miqt_exec_callback_QwtArrowButton_nextCheckState(QwtArrowButton*, intptr_t);
void miqt_exec_callback_QwtArrowButton_keyReleaseEvent(QwtArrowButton*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtArrowButton_mousePressEvent(QwtArrowButton*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtArrowButton_mouseReleaseEvent(QwtArrowButton*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtArrowButton_mouseMoveEvent(QwtArrowButton*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtArrowButton_changeEvent(QwtArrowButton*, intptr_t, QEvent*);
void miqt_exec_callback_QwtArrowButton_timerEvent(QwtArrowButton*, intptr_t, QTimerEvent*);
int miqt_exec_callback_QwtArrowButton_devType(const QwtArrowButton*, intptr_t);
void miqt_exec_callback_QwtArrowButton_setVisible(QwtArrowButton*, intptr_t, bool);
int miqt_exec_callback_QwtArrowButton_heightForWidth(const QwtArrowButton*, intptr_t, int);
bool miqt_exec_callback_QwtArrowButton_hasHeightForWidth(const QwtArrowButton*, intptr_t);
QPaintEngine* miqt_exec_callback_QwtArrowButton_paintEngine(const QwtArrowButton*, intptr_t);
void miqt_exec_callback_QwtArrowButton_mouseDoubleClickEvent(QwtArrowButton*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtArrowButton_wheelEvent(QwtArrowButton*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QwtArrowButton_enterEvent(QwtArrowButton*, intptr_t, QEvent*);
void miqt_exec_callback_QwtArrowButton_leaveEvent(QwtArrowButton*, intptr_t, QEvent*);
void miqt_exec_callback_QwtArrowButton_moveEvent(QwtArrowButton*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QwtArrowButton_resizeEvent(QwtArrowButton*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QwtArrowButton_closeEvent(QwtArrowButton*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QwtArrowButton_contextMenuEvent(QwtArrowButton*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QwtArrowButton_tabletEvent(QwtArrowButton*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QwtArrowButton_actionEvent(QwtArrowButton*, intptr_t, QActionEvent*);
void miqt_exec_callback_QwtArrowButton_dragEnterEvent(QwtArrowButton*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QwtArrowButton_dragMoveEvent(QwtArrowButton*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QwtArrowButton_dragLeaveEvent(QwtArrowButton*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QwtArrowButton_dropEvent(QwtArrowButton*, intptr_t, QDropEvent*);
void miqt_exec_callback_QwtArrowButton_showEvent(QwtArrowButton*, intptr_t, QShowEvent*);
void miqt_exec_callback_QwtArrowButton_hideEvent(QwtArrowButton*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QwtArrowButton_nativeEvent(QwtArrowButton*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QwtArrowButton_metric(const QwtArrowButton*, intptr_t, int);
void miqt_exec_callback_QwtArrowButton_initPainter(const QwtArrowButton*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QwtArrowButton_redirected(const QwtArrowButton*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QwtArrowButton_sharedPainter(const QwtArrowButton*, intptr_t);
void miqt_exec_callback_QwtArrowButton_inputMethodEvent(QwtArrowButton*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QwtArrowButton_inputMethodQuery(const QwtArrowButton*, intptr_t, int);
bool miqt_exec_callback_QwtArrowButton_focusNextPrevChild(QwtArrowButton*, intptr_t, bool);
bool miqt_exec_callback_QwtArrowButton_eventFilter(QwtArrowButton*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QwtArrowButton_childEvent(QwtArrowButton*, intptr_t, QChildEvent*);
void miqt_exec_callback_QwtArrowButton_customEvent(QwtArrowButton*, intptr_t, QEvent*);
void miqt_exec_callback_QwtArrowButton_connectNotify(QwtArrowButton*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QwtArrowButton_disconnectNotify(QwtArrowButton*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtArrowButton final : public QwtArrowButton {
public:

	MiqtVirtualQwtArrowButton(int num, Qt::ArrowType param2): QwtArrowButton(num, param2) {}
	MiqtVirtualQwtArrowButton(int num, Qt::ArrowType param2, QWidget* parent): QwtArrowButton(num, param2, parent) {}

	virtual ~MiqtVirtualQwtArrowButton() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__sizeHint;
	bool owns_return__sizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (!handle__sizeHint) {
			return QwtArrowButton::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtArrowButton_sizeHint(this, handle__sizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__sizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QwtArrowButton_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__minimumSizeHint;
	bool owns_return__minimumSizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (!handle__minimumSizeHint) {
			return QwtArrowButton::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtArrowButton_minimumSizeHint(this, handle__minimumSizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__minimumSizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QwtArrowButton_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__paintEvent;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (!handle__paintEvent) {
			QwtArrowButton::paintEvent(event);
			return;
		}

		QPaintEvent* sigval1 = event;
		miqt_exec_callback_QwtArrowButton_paintEvent(this, handle__paintEvent.value(), sigval1);

	}

	friend void QwtArrowButton_virtualbase_paintEvent(void* self, QPaintEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__drawButtonLabel;

	// Subclass to allow providing a Go implementation
	virtual void drawButtonLabel(QPainter* param1) override {
		if (!handle__drawButtonLabel) {
			QwtArrowButton::drawButtonLabel(param1);
			return;
		}

		QPainter* sigval1 = param1;
		miqt_exec_callback_QwtArrowButton_drawButtonLabel(this, handle__drawButtonLabel.value(), sigval1);

	}

	friend void QwtArrowButton_virtualbase_drawButtonLabel(void* self, QPainter* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__drawArrow;

	// Subclass to allow providing a Go implementation
	virtual void drawArrow(QPainter* param1, const QRect& param2, Qt::ArrowType param3) const override {
		if (!handle__drawArrow) {
			QwtArrowButton::drawArrow(param1, param2, param3);
			return;
		}

		QPainter* sigval1 = param1;
		const QRect& param2_ret = param2;
		// Cast returned reference into pointer
		QRect* sigval2 = const_cast<QRect*>(&param2_ret);
		Qt::ArrowType param3_ret = param3;
		int sigval3 = static_cast<int>(param3_ret);
		miqt_exec_callback_QwtArrowButton_drawArrow(this, handle__drawArrow.value(), sigval1, sigval2, sigval3);

	}

	friend void QwtArrowButton_virtualbase_drawArrow(const void* self, QPainter* param1, QRect* param2, int param3);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__labelRect;
	bool owns_return__labelRect = false;

	// Subclass to allow providing a Go implementation
	virtual QRect labelRect() const override {
		if (!handle__labelRect) {
			return QwtArrowButton::labelRect();
		}

		QRect* callback_return_value = miqt_exec_callback_QwtArrowButton_labelRect(this, handle__labelRect.value());
		std::unique_ptr<QRect> callback_return_value_owner;
		if (owns_return__labelRect) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QRect* QwtArrowButton_virtualbase_labelRect(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__arrowSize;
	bool owns_return__arrowSize = false;

	// Subclass to allow providing a Go implementation
	virtual QSize arrowSize(Qt::ArrowType param1, const QSize& boundingSize) const override {
		if (!handle__arrowSize) {
			return QwtArrowButton::arrowSize(param1, boundingSize);
		}

		Qt::ArrowType param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		const QSize& boundingSize_ret = boundingSize;
		// Cast returned reference into pointer
		QSize* sigval2 = const_cast<QSize*>(&boundingSize_ret);
		QSize* callback_return_value = miqt_exec_callback_QwtArrowButton_arrowSize(this, handle__arrowSize.value(), sigval1, sigval2);
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__arrowSize) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QwtArrowButton_virtualbase_arrowSize(const void* self, int param1, QSize* boundingSize);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__keyPressEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (!handle__keyPressEvent) {
			QwtArrowButton::keyPressEvent(param1);
			return;
		}

		QKeyEvent* sigval1 = param1;
		miqt_exec_callback_QwtArrowButton_keyPressEvent(this, handle__keyPressEvent.value(), sigval1);

	}

	friend void QwtArrowButton_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (!handle__event) {
			return QwtArrowButton::event(e);
		}

		QEvent* sigval1 = e;
		bool callback_return_value = miqt_exec_callback_QwtArrowButton_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QwtArrowButton_virtualbase_event(void* self, QEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__focusInEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* param1) override {
		if (!handle__focusInEvent) {
			QwtArrowButton::focusInEvent(param1);
			return;
		}

		QFocusEvent* sigval1 = param1;
		miqt_exec_callback_QwtArrowButton_focusInEvent(this, handle__focusInEvent.value(), sigval1);

	}

	friend void QwtArrowButton_virtualbase_focusInEvent(void* self, QFocusEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__focusOutEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* param1) override {
		if (!handle__focusOutEvent) {
			QwtArrowButton::focusOutEvent(param1);
			return;
		}

		QFocusEvent* sigval1 = param1;
		miqt_exec_callback_QwtArrowButton_focusOutEvent(this, handle__focusOutEvent.value(), sigval1);

	}

	friend void QwtArrowButton_virtualbase_focusOutEvent(void* self, QFocusEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__hitButton;

	// Subclass to allow providing a Go implementation
	virtual bool hitButton(const QPoint& pos) const override {
		if (!handle__hitButton) {
			return QwtArrowButton::hitButton(pos);
		}

		const QPoint& pos_ret = pos;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&pos_ret);
		bool callback_return_value = miqt_exec_callback_QwtArrowButton_hitButton(this, handle__hitButton.value(), sigval1);
		return callback_return_value;
	}

	friend bool QwtArrowButton_virtualbase_hitButton(const void* self, QPoint* pos);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__checkStateSet;

	// Subclass to allow providing a Go implementation
	virtual void checkStateSet() override {
		if (!handle__checkStateSet) {
			QwtArrowButton::checkStateSet();
			return;
		}

		miqt_exec_callback_QwtArrowButton_checkStateSet(this, handle__checkStateSet.value());

	}

	friend void QwtArrowButton_virtualbase_checkStateSet(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__nextCheckState;

	// Subclass to allow providing a Go implementation
	virtual void nextCheckState() override {
		if (!handle__nextCheckState) {
			QwtArrowButton::nextCheckState();
			return;
		}

		miqt_exec_callback_QwtArrowButton_nextCheckState(this, handle__nextCheckState.value());

	}

	friend void QwtArrowButton_virtualbase_nextCheckState(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__keyReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* e) override {
		if (!handle__keyReleaseEvent) {
			QwtArrowButton::keyReleaseEvent(e);
			return;
		}

		QKeyEvent* sigval1 = e;
		miqt_exec_callback_QwtArrowButton_keyReleaseEvent(this, handle__keyReleaseEvent.value(), sigval1);

	}

	friend void QwtArrowButton_virtualbase_keyReleaseEvent(void* self, QKeyEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__mousePressEvent;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* e) override {
		if (!handle__mousePressEvent) {
			QwtArrowButton::mousePressEvent(e);
			return;
		}

		QMouseEvent* sigval1 = e;
		miqt_exec_callback_QwtArrowButton_mousePressEvent(this, handle__mousePressEvent.value(), sigval1);

	}

	friend void QwtArrowButton_virtualbase_mousePressEvent(void* self, QMouseEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__mouseReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (!handle__mouseReleaseEvent) {
			QwtArrowButton::mouseReleaseEvent(e);
			return;
		}

		QMouseEvent* sigval1 = e;
		miqt_exec_callback_QwtArrowButton_mouseReleaseEvent(this, handle__mouseReleaseEvent.value(), sigval1);

	}

	friend void QwtArrowButton_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__mouseMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* e) override {
		if (!handle__mouseMoveEvent) {
			QwtArrowButton::mouseMoveEvent(e);
			return;
		}

		QMouseEvent* sigval1 = e;
		miqt_exec_callback_QwtArrowButton_mouseMoveEvent(this, handle__mouseMoveEvent.value(), sigval1);

	}

	friend void QwtArrowButton_virtualbase_mouseMoveEvent(void* self, QMouseEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__changeEvent;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (!handle__changeEvent) {
			QwtArrowButton::changeEvent(e);
			return;
		}

		QEvent* sigval1 = e;
		miqt_exec_callback_QwtArrowButton_changeEvent(this, handle__changeEvent.value(), sigval1);

	}

	friend void QwtArrowButton_virtualbase_changeEvent(void* self, QEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* e) override {
		if (!handle__timerEvent) {
			QwtArrowButton::timerEvent(e);
			return;
		}

		QTimerEvent* sigval1 = e;
		miqt_exec_callback_QwtArrowButton_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QwtArrowButton_virtualbase_timerEvent(void* self, QTimerEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__devType;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (!handle__devType) {
			return QwtArrowButton::devType();
		}

		int callback_return_value = miqt_exec_callback_QwtArrowButton_devType(this, handle__devType.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QwtArrowButton_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__setVisible;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (!handle__setVisible) {
			QwtArrowButton::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QwtArrowButton_setVisible(this, handle__setVisible.value(), sigval1);

	}

	friend void QwtArrowButton_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__heightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (!handle__heightForWidth) {
			return QwtArrowButton::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QwtArrowButton_heightForWidth(this, handle__heightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtArrowButton_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__hasHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (!handle__hasHeightForWidth) {
			return QwtArrowButton::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QwtArrowButton_hasHeightForWidth(this, handle__hasHeightForWidth.value());
		return callback_return_value;
	}

	friend bool QwtArrowButton_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__paintEngine;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (!handle__paintEngine) {
			return QwtArrowButton::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QwtArrowButton_paintEngine(this, handle__paintEngine.value());
		return callback_return_value;
	}

	friend QPaintEngine* QwtArrowButton_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__mouseDoubleClickEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (!handle__mouseDoubleClickEvent) {
			QwtArrowButton::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtArrowButton_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent.value(), sigval1);

	}

	friend void QwtArrowButton_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__wheelEvent;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (!handle__wheelEvent) {
			QwtArrowButton::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QwtArrowButton_wheelEvent(this, handle__wheelEvent.value(), sigval1);

	}

	friend void QwtArrowButton_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__enterEvent;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (!handle__enterEvent) {
			QwtArrowButton::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtArrowButton_enterEvent(this, handle__enterEvent.value(), sigval1);

	}

	friend void QwtArrowButton_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__leaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (!handle__leaveEvent) {
			QwtArrowButton::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtArrowButton_leaveEvent(this, handle__leaveEvent.value(), sigval1);

	}

	friend void QwtArrowButton_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__moveEvent;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (!handle__moveEvent) {
			QwtArrowButton::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtArrowButton_moveEvent(this, handle__moveEvent.value(), sigval1);

	}

	friend void QwtArrowButton_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__resizeEvent;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (!handle__resizeEvent) {
			QwtArrowButton::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QwtArrowButton_resizeEvent(this, handle__resizeEvent.value(), sigval1);

	}

	friend void QwtArrowButton_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__closeEvent;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (!handle__closeEvent) {
			QwtArrowButton::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QwtArrowButton_closeEvent(this, handle__closeEvent.value(), sigval1);

	}

	friend void QwtArrowButton_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__contextMenuEvent;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (!handle__contextMenuEvent) {
			QwtArrowButton::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QwtArrowButton_contextMenuEvent(this, handle__contextMenuEvent.value(), sigval1);

	}

	friend void QwtArrowButton_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__tabletEvent;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (!handle__tabletEvent) {
			QwtArrowButton::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QwtArrowButton_tabletEvent(this, handle__tabletEvent.value(), sigval1);

	}

	friend void QwtArrowButton_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__actionEvent;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (!handle__actionEvent) {
			QwtArrowButton::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QwtArrowButton_actionEvent(this, handle__actionEvent.value(), sigval1);

	}

	friend void QwtArrowButton_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__dragEnterEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (!handle__dragEnterEvent) {
			QwtArrowButton::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QwtArrowButton_dragEnterEvent(this, handle__dragEnterEvent.value(), sigval1);

	}

	friend void QwtArrowButton_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__dragMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (!handle__dragMoveEvent) {
			QwtArrowButton::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtArrowButton_dragMoveEvent(this, handle__dragMoveEvent.value(), sigval1);

	}

	friend void QwtArrowButton_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__dragLeaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (!handle__dragLeaveEvent) {
			QwtArrowButton::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QwtArrowButton_dragLeaveEvent(this, handle__dragLeaveEvent.value(), sigval1);

	}

	friend void QwtArrowButton_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__dropEvent;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (!handle__dropEvent) {
			QwtArrowButton::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QwtArrowButton_dropEvent(this, handle__dropEvent.value(), sigval1);

	}

	friend void QwtArrowButton_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__showEvent;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (!handle__showEvent) {
			QwtArrowButton::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QwtArrowButton_showEvent(this, handle__showEvent.value(), sigval1);

	}

	friend void QwtArrowButton_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__hideEvent;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (!handle__hideEvent) {
			QwtArrowButton::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QwtArrowButton_hideEvent(this, handle__hideEvent.value(), sigval1);

	}

	friend void QwtArrowButton_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__nativeEvent;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (!handle__nativeEvent) {
			return QwtArrowButton::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QwtArrowButton_nativeEvent(this, handle__nativeEvent.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QwtArrowButton_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__metric;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (!handle__metric) {
			return QwtArrowButton::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QwtArrowButton_metric(this, handle__metric.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtArrowButton_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__initPainter;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (!handle__initPainter) {
			QwtArrowButton::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QwtArrowButton_initPainter(this, handle__initPainter.value(), sigval1);

	}

	friend void QwtArrowButton_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__redirected;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (!handle__redirected) {
			return QwtArrowButton::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QwtArrowButton_redirected(this, handle__redirected.value(), sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QwtArrowButton_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__sharedPainter;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (!handle__sharedPainter) {
			return QwtArrowButton::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QwtArrowButton_sharedPainter(this, handle__sharedPainter.value());
		return callback_return_value;
	}

	friend QPainter* QwtArrowButton_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__inputMethodEvent;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (!handle__inputMethodEvent) {
			QwtArrowButton::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QwtArrowButton_inputMethodEvent(this, handle__inputMethodEvent.value(), sigval1);

	}

	friend void QwtArrowButton_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__inputMethodQuery;
	bool owns_return__inputMethodQuery = false;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (!handle__inputMethodQuery) {
			return QwtArrowButton::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QwtArrowButton_inputMethodQuery(this, handle__inputMethodQuery.value(), sigval1);
		std::unique_ptr<QVariant> callback_return_value_owner;
		if (owns_return__inputMethodQuery) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QVariant* QwtArrowButton_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__focusNextPrevChild;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (!handle__focusNextPrevChild) {
			return QwtArrowButton::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QwtArrowButton_focusNextPrevChild(this, handle__focusNextPrevChild.value(), sigval1);
		return callback_return_value;
	}

	friend bool QwtArrowButton_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QwtArrowButton::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QwtArrowButton_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QwtArrowButton_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QwtArrowButton::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QwtArrowButton_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QwtArrowButton_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QwtArrowButton::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtArrowButton_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QwtArrowButton_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QwtArrowButton::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtArrowButton_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QwtArrowButton_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QwtArrowButton::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtArrowButton_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QwtArrowButton_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QwtArrowButton_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionButton* option);
	friend void QwtArrowButton_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QwtArrowButton_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QwtArrowButton_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QwtArrowButton_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QwtArrowButton_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QwtArrowButton_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QwtArrowButton_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QwtArrowButton_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QwtArrowButton_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QwtArrowButton* QwtArrowButton_new(int num, int param2) {
	return new (std::nothrow) MiqtVirtualQwtArrowButton(static_cast<int>(num), static_cast<Qt::ArrowType>(param2));
}

QwtArrowButton* QwtArrowButton_new2(int num, int param2, QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQwtArrowButton(static_cast<int>(num), static_cast<Qt::ArrowType>(param2), parent);
}

void QwtArrowButton_virtbase(QwtArrowButton* src, QPushButton** outptr_QPushButton) {
	*outptr_QPushButton = static_cast<QPushButton*>(src);
}

int QwtArrowButton_arrowType(const QwtArrowButton* self) {
	Qt::ArrowType _ret = self->arrowType();
	return static_cast<int>(_ret);
}

int QwtArrowButton_num(const QwtArrowButton* self) {
	return self->num();
}

QSize* QwtArrowButton_sizeHint(const QwtArrowButton* self) {
	return new QSize(self->sizeHint());
}

QSize* QwtArrowButton_minimumSizeHint(const QwtArrowButton* self) {
	return new QSize(self->minimumSizeHint());
}

bool QwtArrowButton_override_virtual_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = false;
	return true;
}

bool QwtArrowButton_override_virtual_owned_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = true;
	return true;
}

QSize* QwtArrowButton_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::sizeHint());
}

bool QwtArrowButton_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	self_cast->owns_return__minimumSizeHint = false;
	return true;
}

bool QwtArrowButton_override_virtual_owned_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	self_cast->owns_return__minimumSizeHint = true;
	return true;
}

QSize* QwtArrowButton_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::minimumSizeHint());
}

bool QwtArrowButton_override_virtual_paintEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = std::move(slot_handle);
	return true;
}

void QwtArrowButton_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	static_cast<MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::paintEvent(event);
}

bool QwtArrowButton_override_virtual_drawButtonLabel(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawButtonLabel = std::move(slot_handle);
	return true;
}

void QwtArrowButton_virtualbase_drawButtonLabel(void* self, QPainter* param1) {
	static_cast<MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::drawButtonLabel(param1);
}

bool QwtArrowButton_override_virtual_drawArrow(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawArrow = std::move(slot_handle);
	return true;
}

void QwtArrowButton_virtualbase_drawArrow(const void* self, QPainter* param1, QRect* param2, int param3) {
	static_cast<const MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::drawArrow(param1, *param2, static_cast<Qt::ArrowType>(param3));
}

bool QwtArrowButton_override_virtual_labelRect(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__labelRect = std::move(slot_handle);
	self_cast->owns_return__labelRect = false;
	return true;
}

bool QwtArrowButton_override_virtual_owned_labelRect(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__labelRect = std::move(slot_handle);
	self_cast->owns_return__labelRect = true;
	return true;
}

QRect* QwtArrowButton_virtualbase_labelRect(const void* self) {
	return new QRect(static_cast<const MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::labelRect());
}

bool QwtArrowButton_override_virtual_arrowSize(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__arrowSize = std::move(slot_handle);
	self_cast->owns_return__arrowSize = false;
	return true;
}

bool QwtArrowButton_override_virtual_owned_arrowSize(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__arrowSize = std::move(slot_handle);
	self_cast->owns_return__arrowSize = true;
	return true;
}

QSize* QwtArrowButton_virtualbase_arrowSize(const void* self, int param1, QSize* boundingSize) {
	return new QSize(static_cast<const MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::arrowSize(static_cast<Qt::ArrowType>(param1), *boundingSize));
}

bool QwtArrowButton_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = std::move(slot_handle);
	return true;
}

void QwtArrowButton_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {
	static_cast<MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::keyPressEvent(param1);
}

bool QwtArrowButton_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QwtArrowButton_virtualbase_event(void* self, QEvent* e) {
	return static_cast<MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::event(e);
}

bool QwtArrowButton_override_virtual_focusInEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = std::move(slot_handle);
	return true;
}

void QwtArrowButton_virtualbase_focusInEvent(void* self, QFocusEvent* param1) {
	static_cast<MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::focusInEvent(param1);
}

bool QwtArrowButton_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = std::move(slot_handle);
	return true;
}

void QwtArrowButton_virtualbase_focusOutEvent(void* self, QFocusEvent* param1) {
	static_cast<MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::focusOutEvent(param1);
}

bool QwtArrowButton_override_virtual_hitButton(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hitButton = std::move(slot_handle);
	return true;
}

bool QwtArrowButton_virtualbase_hitButton(const void* self, QPoint* pos) {
	return static_cast<const MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::hitButton(*pos);
}

bool QwtArrowButton_override_virtual_checkStateSet(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__checkStateSet = std::move(slot_handle);
	return true;
}

void QwtArrowButton_virtualbase_checkStateSet(void* self) {
	static_cast<MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::checkStateSet();
}

bool QwtArrowButton_override_virtual_nextCheckState(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nextCheckState = std::move(slot_handle);
	return true;
}

void QwtArrowButton_virtualbase_nextCheckState(void* self) {
	static_cast<MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::nextCheckState();
}

bool QwtArrowButton_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = std::move(slot_handle);
	return true;
}

void QwtArrowButton_virtualbase_keyReleaseEvent(void* self, QKeyEvent* e) {
	static_cast<MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::keyReleaseEvent(e);
}

bool QwtArrowButton_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = std::move(slot_handle);
	return true;
}

void QwtArrowButton_virtualbase_mousePressEvent(void* self, QMouseEvent* e) {
	static_cast<MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::mousePressEvent(e);
}

bool QwtArrowButton_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = std::move(slot_handle);
	return true;
}

void QwtArrowButton_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* e) {
	static_cast<MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::mouseReleaseEvent(e);
}

bool QwtArrowButton_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = std::move(slot_handle);
	return true;
}

void QwtArrowButton_virtualbase_mouseMoveEvent(void* self, QMouseEvent* e) {
	static_cast<MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::mouseMoveEvent(e);
}

bool QwtArrowButton_override_virtual_changeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = std::move(slot_handle);
	return true;
}

void QwtArrowButton_virtualbase_changeEvent(void* self, QEvent* e) {
	static_cast<MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::changeEvent(e);
}

bool QwtArrowButton_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QwtArrowButton_virtualbase_timerEvent(void* self, QTimerEvent* e) {
	static_cast<MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::timerEvent(e);
}

bool QwtArrowButton_override_virtual_devType(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = std::move(slot_handle);
	return true;
}

int QwtArrowButton_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::devType();
}

bool QwtArrowButton_override_virtual_setVisible(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = std::move(slot_handle);
	return true;
}

void QwtArrowButton_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::setVisible(visible);
}

bool QwtArrowButton_override_virtual_heightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = std::move(slot_handle);
	return true;
}

int QwtArrowButton_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::heightForWidth(static_cast<int>(param1));
}

bool QwtArrowButton_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = std::move(slot_handle);
	return true;
}

bool QwtArrowButton_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::hasHeightForWidth();
}

bool QwtArrowButton_override_virtual_paintEngine(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = std::move(slot_handle);
	return true;
}

QPaintEngine* QwtArrowButton_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::paintEngine();
}

bool QwtArrowButton_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = std::move(slot_handle);
	return true;
}

void QwtArrowButton_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::mouseDoubleClickEvent(event);
}

bool QwtArrowButton_override_virtual_wheelEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = std::move(slot_handle);
	return true;
}

void QwtArrowButton_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::wheelEvent(event);
}

bool QwtArrowButton_override_virtual_enterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = std::move(slot_handle);
	return true;
}

void QwtArrowButton_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::enterEvent(event);
}

bool QwtArrowButton_override_virtual_leaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = std::move(slot_handle);
	return true;
}

void QwtArrowButton_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::leaveEvent(event);
}

bool QwtArrowButton_override_virtual_moveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = std::move(slot_handle);
	return true;
}

void QwtArrowButton_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::moveEvent(event);
}

bool QwtArrowButton_override_virtual_resizeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = std::move(slot_handle);
	return true;
}

void QwtArrowButton_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::resizeEvent(event);
}

bool QwtArrowButton_override_virtual_closeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = std::move(slot_handle);
	return true;
}

void QwtArrowButton_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::closeEvent(event);
}

bool QwtArrowButton_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = std::move(slot_handle);
	return true;
}

void QwtArrowButton_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::contextMenuEvent(event);
}

bool QwtArrowButton_override_virtual_tabletEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = std::move(slot_handle);
	return true;
}

void QwtArrowButton_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::tabletEvent(event);
}

bool QwtArrowButton_override_virtual_actionEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = std::move(slot_handle);
	return true;
}

void QwtArrowButton_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::actionEvent(event);
}

bool QwtArrowButton_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = std::move(slot_handle);
	return true;
}

void QwtArrowButton_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::dragEnterEvent(event);
}

bool QwtArrowButton_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = std::move(slot_handle);
	return true;
}

void QwtArrowButton_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::dragMoveEvent(event);
}

bool QwtArrowButton_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = std::move(slot_handle);
	return true;
}

void QwtArrowButton_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::dragLeaveEvent(event);
}

bool QwtArrowButton_override_virtual_dropEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = std::move(slot_handle);
	return true;
}

void QwtArrowButton_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::dropEvent(event);
}

bool QwtArrowButton_override_virtual_showEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = std::move(slot_handle);
	return true;
}

void QwtArrowButton_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::showEvent(event);
}

bool QwtArrowButton_override_virtual_hideEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = std::move(slot_handle);
	return true;
}

void QwtArrowButton_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::hideEvent(event);
}

bool QwtArrowButton_override_virtual_nativeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = std::move(slot_handle);
	return true;
}

bool QwtArrowButton_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QwtArrowButton_override_virtual_metric(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = std::move(slot_handle);
	return true;
}

int QwtArrowButton_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::metric(static_cast<MiqtVirtualQwtArrowButton::PaintDeviceMetric>(param1));
}

bool QwtArrowButton_override_virtual_initPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = std::move(slot_handle);
	return true;
}

void QwtArrowButton_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::initPainter(painter);
}

bool QwtArrowButton_override_virtual_redirected(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = std::move(slot_handle);
	return true;
}

QPaintDevice* QwtArrowButton_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::redirected(offset);
}

bool QwtArrowButton_override_virtual_sharedPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = std::move(slot_handle);
	return true;
}

QPainter* QwtArrowButton_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::sharedPainter();
}

bool QwtArrowButton_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = std::move(slot_handle);
	return true;
}

void QwtArrowButton_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::inputMethodEvent(param1);
}

bool QwtArrowButton_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	self_cast->owns_return__inputMethodQuery = false;
	return true;
}

bool QwtArrowButton_override_virtual_owned_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	self_cast->owns_return__inputMethodQuery = true;
	return true;
}

QVariant* QwtArrowButton_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QwtArrowButton_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = std::move(slot_handle);
	return true;
}

bool QwtArrowButton_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::focusNextPrevChild(next);
}

bool QwtArrowButton_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QwtArrowButton_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::eventFilter(watched, event);
}

bool QwtArrowButton_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QwtArrowButton_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::childEvent(event);
}

bool QwtArrowButton_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QwtArrowButton_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::customEvent(event);
}

bool QwtArrowButton_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QwtArrowButton_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::connectNotify(*signal);
}

bool QwtArrowButton_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtArrowButton> slot_handle(slot);
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QwtArrowButton_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtArrowButton*>(self)->QwtArrowButton::disconnectNotify(*signal);
}

void QwtArrowButton_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionButton* option) {
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->initStyleOption(option);
}

void QwtArrowButton_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QwtArrowButton_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QwtArrowButton_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QwtArrowButton_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QwtArrowButton_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QwtArrowButton_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QwtArrowButton_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QwtArrowButton_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QwtArrowButton_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQwtArrowButton* self_cast = dynamic_cast<MiqtVirtualQwtArrowButton*>( (QwtArrowButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QwtArrowButton_delete(QwtArrowButton* self) {
	delete self;
}

