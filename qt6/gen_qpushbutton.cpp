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
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QIcon>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMenu>
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
#include <QPushButton>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionButton>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qpushbutton.h>
#include "gen_qpushbutton.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QPushButton(intptr_t);
QSize* miqt_exec_callback_QPushButton_sizeHint(const QPushButton*, intptr_t);
QSize* miqt_exec_callback_QPushButton_minimumSizeHint(const QPushButton*, intptr_t);
bool miqt_exec_callback_QPushButton_event(QPushButton*, intptr_t, QEvent*);
void miqt_exec_callback_QPushButton_paintEvent(QPushButton*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QPushButton_keyPressEvent(QPushButton*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QPushButton_focusInEvent(QPushButton*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QPushButton_focusOutEvent(QPushButton*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QPushButton_mouseMoveEvent(QPushButton*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPushButton_initStyleOption(const QPushButton*, intptr_t, QStyleOptionButton*);
bool miqt_exec_callback_QPushButton_hitButton(const QPushButton*, intptr_t, QPoint*);
void miqt_exec_callback_QPushButton_checkStateSet(QPushButton*, intptr_t);
void miqt_exec_callback_QPushButton_nextCheckState(QPushButton*, intptr_t);
void miqt_exec_callback_QPushButton_keyReleaseEvent(QPushButton*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QPushButton_mousePressEvent(QPushButton*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPushButton_mouseReleaseEvent(QPushButton*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPushButton_changeEvent(QPushButton*, intptr_t, QEvent*);
void miqt_exec_callback_QPushButton_timerEvent(QPushButton*, intptr_t, QTimerEvent*);
int miqt_exec_callback_QPushButton_devType(const QPushButton*, intptr_t);
void miqt_exec_callback_QPushButton_setVisible(QPushButton*, intptr_t, bool);
int miqt_exec_callback_QPushButton_heightForWidth(const QPushButton*, intptr_t, int);
bool miqt_exec_callback_QPushButton_hasHeightForWidth(const QPushButton*, intptr_t);
QPaintEngine* miqt_exec_callback_QPushButton_paintEngine(const QPushButton*, intptr_t);
void miqt_exec_callback_QPushButton_mouseDoubleClickEvent(QPushButton*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPushButton_wheelEvent(QPushButton*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QPushButton_enterEvent(QPushButton*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QPushButton_leaveEvent(QPushButton*, intptr_t, QEvent*);
void miqt_exec_callback_QPushButton_moveEvent(QPushButton*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QPushButton_resizeEvent(QPushButton*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QPushButton_closeEvent(QPushButton*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QPushButton_contextMenuEvent(QPushButton*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QPushButton_tabletEvent(QPushButton*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QPushButton_actionEvent(QPushButton*, intptr_t, QActionEvent*);
void miqt_exec_callback_QPushButton_dragEnterEvent(QPushButton*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QPushButton_dragMoveEvent(QPushButton*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QPushButton_dragLeaveEvent(QPushButton*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QPushButton_dropEvent(QPushButton*, intptr_t, QDropEvent*);
void miqt_exec_callback_QPushButton_showEvent(QPushButton*, intptr_t, QShowEvent*);
void miqt_exec_callback_QPushButton_hideEvent(QPushButton*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QPushButton_nativeEvent(QPushButton*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QPushButton_metric(const QPushButton*, intptr_t, int);
void miqt_exec_callback_QPushButton_initPainter(const QPushButton*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QPushButton_redirected(const QPushButton*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QPushButton_sharedPainter(const QPushButton*, intptr_t);
void miqt_exec_callback_QPushButton_inputMethodEvent(QPushButton*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QPushButton_inputMethodQuery(const QPushButton*, intptr_t, int);
bool miqt_exec_callback_QPushButton_focusNextPrevChild(QPushButton*, intptr_t, bool);
bool miqt_exec_callback_QPushButton_eventFilter(QPushButton*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QPushButton_childEvent(QPushButton*, intptr_t, QChildEvent*);
void miqt_exec_callback_QPushButton_customEvent(QPushButton*, intptr_t, QEvent*);
void miqt_exec_callback_QPushButton_connectNotify(QPushButton*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPushButton_disconnectNotify(QPushButton*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQPushButton final : public QPushButton {
public:

	MiqtVirtualQPushButton(QWidget* parent): QPushButton(parent) {}
	MiqtVirtualQPushButton(): QPushButton() {}
	MiqtVirtualQPushButton(const QString& text): QPushButton(text) {}
	MiqtVirtualQPushButton(const QIcon& icon, const QString& text): QPushButton(icon, text) {}
	MiqtVirtualQPushButton(const QString& text, QWidget* parent): QPushButton(text, parent) {}
	MiqtVirtualQPushButton(const QIcon& icon, const QString& text, QWidget* parent): QPushButton(icon, text, parent) {}

	virtual ~MiqtVirtualQPushButton() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__sizeHint;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (!handle__sizeHint) {
			return QPushButton::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QPushButton_sizeHint(this, handle__sizeHint.value());
		return *callback_return_value;
	}

	friend QSize* QPushButton_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__minimumSizeHint;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (!handle__minimumSizeHint) {
			return QPushButton::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QPushButton_minimumSizeHint(this, handle__minimumSizeHint.value());
		return *callback_return_value;
	}

	friend QSize* QPushButton_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (!handle__event) {
			return QPushButton::event(e);
		}

		QEvent* sigval1 = e;
		bool callback_return_value = miqt_exec_callback_QPushButton_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QPushButton_virtualbase_event(void* self, QEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__paintEvent;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (!handle__paintEvent) {
			QPushButton::paintEvent(param1);
			return;
		}

		QPaintEvent* sigval1 = param1;
		miqt_exec_callback_QPushButton_paintEvent(this, handle__paintEvent.value(), sigval1);

	}

	friend void QPushButton_virtualbase_paintEvent(void* self, QPaintEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__keyPressEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (!handle__keyPressEvent) {
			QPushButton::keyPressEvent(param1);
			return;
		}

		QKeyEvent* sigval1 = param1;
		miqt_exec_callback_QPushButton_keyPressEvent(this, handle__keyPressEvent.value(), sigval1);

	}

	friend void QPushButton_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__focusInEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* param1) override {
		if (!handle__focusInEvent) {
			QPushButton::focusInEvent(param1);
			return;
		}

		QFocusEvent* sigval1 = param1;
		miqt_exec_callback_QPushButton_focusInEvent(this, handle__focusInEvent.value(), sigval1);

	}

	friend void QPushButton_virtualbase_focusInEvent(void* self, QFocusEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__focusOutEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* param1) override {
		if (!handle__focusOutEvent) {
			QPushButton::focusOutEvent(param1);
			return;
		}

		QFocusEvent* sigval1 = param1;
		miqt_exec_callback_QPushButton_focusOutEvent(this, handle__focusOutEvent.value(), sigval1);

	}

	friend void QPushButton_virtualbase_focusOutEvent(void* self, QFocusEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__mouseMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (!handle__mouseMoveEvent) {
			QPushButton::mouseMoveEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QPushButton_mouseMoveEvent(this, handle__mouseMoveEvent.value(), sigval1);

	}

	friend void QPushButton_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__initStyleOption;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionButton* option) const override {
		if (!handle__initStyleOption) {
			QPushButton::initStyleOption(option);
			return;
		}

		QStyleOptionButton* sigval1 = option;
		miqt_exec_callback_QPushButton_initStyleOption(this, handle__initStyleOption.value(), sigval1);

	}

	friend void QPushButton_virtualbase_initStyleOption(const void* self, QStyleOptionButton* option);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__hitButton;

	// Subclass to allow providing a Go implementation
	virtual bool hitButton(const QPoint& pos) const override {
		if (!handle__hitButton) {
			return QPushButton::hitButton(pos);
		}

		const QPoint& pos_ret = pos;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&pos_ret);
		bool callback_return_value = miqt_exec_callback_QPushButton_hitButton(this, handle__hitButton.value(), sigval1);
		return callback_return_value;
	}

	friend bool QPushButton_virtualbase_hitButton(const void* self, QPoint* pos);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__checkStateSet;

	// Subclass to allow providing a Go implementation
	virtual void checkStateSet() override {
		if (!handle__checkStateSet) {
			QPushButton::checkStateSet();
			return;
		}

		miqt_exec_callback_QPushButton_checkStateSet(this, handle__checkStateSet.value());

	}

	friend void QPushButton_virtualbase_checkStateSet(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__nextCheckState;

	// Subclass to allow providing a Go implementation
	virtual void nextCheckState() override {
		if (!handle__nextCheckState) {
			QPushButton::nextCheckState();
			return;
		}

		miqt_exec_callback_QPushButton_nextCheckState(this, handle__nextCheckState.value());

	}

	friend void QPushButton_virtualbase_nextCheckState(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__keyReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* e) override {
		if (!handle__keyReleaseEvent) {
			QPushButton::keyReleaseEvent(e);
			return;
		}

		QKeyEvent* sigval1 = e;
		miqt_exec_callback_QPushButton_keyReleaseEvent(this, handle__keyReleaseEvent.value(), sigval1);

	}

	friend void QPushButton_virtualbase_keyReleaseEvent(void* self, QKeyEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__mousePressEvent;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* e) override {
		if (!handle__mousePressEvent) {
			QPushButton::mousePressEvent(e);
			return;
		}

		QMouseEvent* sigval1 = e;
		miqt_exec_callback_QPushButton_mousePressEvent(this, handle__mousePressEvent.value(), sigval1);

	}

	friend void QPushButton_virtualbase_mousePressEvent(void* self, QMouseEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__mouseReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (!handle__mouseReleaseEvent) {
			QPushButton::mouseReleaseEvent(e);
			return;
		}

		QMouseEvent* sigval1 = e;
		miqt_exec_callback_QPushButton_mouseReleaseEvent(this, handle__mouseReleaseEvent.value(), sigval1);

	}

	friend void QPushButton_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__changeEvent;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (!handle__changeEvent) {
			QPushButton::changeEvent(e);
			return;
		}

		QEvent* sigval1 = e;
		miqt_exec_callback_QPushButton_changeEvent(this, handle__changeEvent.value(), sigval1);

	}

	friend void QPushButton_virtualbase_changeEvent(void* self, QEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* e) override {
		if (!handle__timerEvent) {
			QPushButton::timerEvent(e);
			return;
		}

		QTimerEvent* sigval1 = e;
		miqt_exec_callback_QPushButton_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QPushButton_virtualbase_timerEvent(void* self, QTimerEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__devType;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (!handle__devType) {
			return QPushButton::devType();
		}

		int callback_return_value = miqt_exec_callback_QPushButton_devType(this, handle__devType.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QPushButton_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__setVisible;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (!handle__setVisible) {
			QPushButton::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QPushButton_setVisible(this, handle__setVisible.value(), sigval1);

	}

	friend void QPushButton_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__heightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (!handle__heightForWidth) {
			return QPushButton::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QPushButton_heightForWidth(this, handle__heightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QPushButton_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__hasHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (!handle__hasHeightForWidth) {
			return QPushButton::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QPushButton_hasHeightForWidth(this, handle__hasHeightForWidth.value());
		return callback_return_value;
	}

	friend bool QPushButton_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__paintEngine;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (!handle__paintEngine) {
			return QPushButton::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QPushButton_paintEngine(this, handle__paintEngine.value());
		return callback_return_value;
	}

	friend QPaintEngine* QPushButton_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__mouseDoubleClickEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (!handle__mouseDoubleClickEvent) {
			QPushButton::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QPushButton_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent.value(), sigval1);

	}

	friend void QPushButton_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__wheelEvent;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (!handle__wheelEvent) {
			QPushButton::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QPushButton_wheelEvent(this, handle__wheelEvent.value(), sigval1);

	}

	friend void QPushButton_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__enterEvent;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (!handle__enterEvent) {
			QPushButton::enterEvent(event);
			return;
		}

		QEnterEvent* sigval1 = event;
		miqt_exec_callback_QPushButton_enterEvent(this, handle__enterEvent.value(), sigval1);

	}

	friend void QPushButton_virtualbase_enterEvent(void* self, QEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__leaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (!handle__leaveEvent) {
			QPushButton::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QPushButton_leaveEvent(this, handle__leaveEvent.value(), sigval1);

	}

	friend void QPushButton_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__moveEvent;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (!handle__moveEvent) {
			QPushButton::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QPushButton_moveEvent(this, handle__moveEvent.value(), sigval1);

	}

	friend void QPushButton_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__resizeEvent;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (!handle__resizeEvent) {
			QPushButton::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QPushButton_resizeEvent(this, handle__resizeEvent.value(), sigval1);

	}

	friend void QPushButton_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__closeEvent;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (!handle__closeEvent) {
			QPushButton::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QPushButton_closeEvent(this, handle__closeEvent.value(), sigval1);

	}

	friend void QPushButton_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__contextMenuEvent;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (!handle__contextMenuEvent) {
			QPushButton::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QPushButton_contextMenuEvent(this, handle__contextMenuEvent.value(), sigval1);

	}

	friend void QPushButton_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__tabletEvent;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (!handle__tabletEvent) {
			QPushButton::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QPushButton_tabletEvent(this, handle__tabletEvent.value(), sigval1);

	}

	friend void QPushButton_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__actionEvent;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (!handle__actionEvent) {
			QPushButton::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QPushButton_actionEvent(this, handle__actionEvent.value(), sigval1);

	}

	friend void QPushButton_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__dragEnterEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (!handle__dragEnterEvent) {
			QPushButton::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QPushButton_dragEnterEvent(this, handle__dragEnterEvent.value(), sigval1);

	}

	friend void QPushButton_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__dragMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (!handle__dragMoveEvent) {
			QPushButton::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QPushButton_dragMoveEvent(this, handle__dragMoveEvent.value(), sigval1);

	}

	friend void QPushButton_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__dragLeaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (!handle__dragLeaveEvent) {
			QPushButton::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QPushButton_dragLeaveEvent(this, handle__dragLeaveEvent.value(), sigval1);

	}

	friend void QPushButton_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__dropEvent;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (!handle__dropEvent) {
			QPushButton::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QPushButton_dropEvent(this, handle__dropEvent.value(), sigval1);

	}

	friend void QPushButton_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__showEvent;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (!handle__showEvent) {
			QPushButton::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QPushButton_showEvent(this, handle__showEvent.value(), sigval1);

	}

	friend void QPushButton_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__hideEvent;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (!handle__hideEvent) {
			QPushButton::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QPushButton_hideEvent(this, handle__hideEvent.value(), sigval1);

	}

	friend void QPushButton_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__nativeEvent;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (!handle__nativeEvent) {
			return QPushButton::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		qintptr* result_ret = result;
		intptr_t* sigval3 = (intptr_t*)(result_ret);
		bool callback_return_value = miqt_exec_callback_QPushButton_nativeEvent(this, handle__nativeEvent.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QPushButton_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__metric;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (!handle__metric) {
			return QPushButton::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QPushButton_metric(this, handle__metric.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QPushButton_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__initPainter;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (!handle__initPainter) {
			QPushButton::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QPushButton_initPainter(this, handle__initPainter.value(), sigval1);

	}

	friend void QPushButton_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__redirected;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (!handle__redirected) {
			return QPushButton::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QPushButton_redirected(this, handle__redirected.value(), sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QPushButton_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__sharedPainter;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (!handle__sharedPainter) {
			return QPushButton::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QPushButton_sharedPainter(this, handle__sharedPainter.value());
		return callback_return_value;
	}

	friend QPainter* QPushButton_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__inputMethodEvent;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (!handle__inputMethodEvent) {
			QPushButton::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QPushButton_inputMethodEvent(this, handle__inputMethodEvent.value(), sigval1);

	}

	friend void QPushButton_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__inputMethodQuery;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (!handle__inputMethodQuery) {
			return QPushButton::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QPushButton_inputMethodQuery(this, handle__inputMethodQuery.value(), sigval1);
		return *callback_return_value;
	}

	friend QVariant* QPushButton_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__focusNextPrevChild;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (!handle__focusNextPrevChild) {
			return QPushButton::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QPushButton_focusNextPrevChild(this, handle__focusNextPrevChild.value(), sigval1);
		return callback_return_value;
	}

	friend bool QPushButton_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QPushButton::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QPushButton_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QPushButton_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QPushButton::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QPushButton_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QPushButton_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QPushButton::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QPushButton_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QPushButton_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QPushButton::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QPushButton_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QPushButton_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QPushButton::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QPushButton_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QPushButton_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QPushButton_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QPushButton_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QPushButton_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QPushButton_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QPushButton_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QPushButton_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QPushButton_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QPushButton_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QPushButton_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QPushButton* QPushButton_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQPushButton(parent);
}

QPushButton* QPushButton_new2() {
	return new (std::nothrow) MiqtVirtualQPushButton();
}

QPushButton* QPushButton_new3(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new (std::nothrow) MiqtVirtualQPushButton(text_QString);
}

QPushButton* QPushButton_new4(QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new (std::nothrow) MiqtVirtualQPushButton(*icon, text_QString);
}

QPushButton* QPushButton_new5(struct miqt_string text, QWidget* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new (std::nothrow) MiqtVirtualQPushButton(text_QString, parent);
}

QPushButton* QPushButton_new6(QIcon* icon, struct miqt_string text, QWidget* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new (std::nothrow) MiqtVirtualQPushButton(*icon, text_QString, parent);
}

void QPushButton_virtbase(QPushButton* src, QAbstractButton** outptr_QAbstractButton) {
	*outptr_QAbstractButton = static_cast<QAbstractButton*>(src);
}

QMetaObject* QPushButton_metaObject(const QPushButton* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPushButton_metacast(QPushButton* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPushButton_tr(const char* s) {
	QString _ret = QPushButton::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QPushButton_sizeHint(const QPushButton* self) {
	return new QSize(self->sizeHint());
}

QSize* QPushButton_minimumSizeHint(const QPushButton* self) {
	return new QSize(self->minimumSizeHint());
}

bool QPushButton_autoDefault(const QPushButton* self) {
	return self->autoDefault();
}

void QPushButton_setAutoDefault(QPushButton* self, bool autoDefault) {
	self->setAutoDefault(autoDefault);
}

bool QPushButton_isDefault(const QPushButton* self) {
	return self->isDefault();
}

void QPushButton_setDefault(QPushButton* self, bool defaultVal) {
	self->setDefault(defaultVal);
}

void QPushButton_setMenu(QPushButton* self, QMenu* menu) {
	self->setMenu(menu);
}

QMenu* QPushButton_menu(const QPushButton* self) {
	return self->menu();
}

void QPushButton_setFlat(QPushButton* self, bool flat) {
	self->setFlat(flat);
}

bool QPushButton_isFlat(const QPushButton* self) {
	return self->isFlat();
}

void QPushButton_showMenu(QPushButton* self) {
	self->showMenu();
}

struct miqt_string QPushButton_tr2(const char* s, const char* c) {
	QString _ret = QPushButton::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPushButton_tr3(const char* s, const char* c, int n) {
	QString _ret = QPushButton::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPushButton_override_virtual_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	return true;
}

QSize* QPushButton_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQPushButton*>(self)->QPushButton::sizeHint());
}

bool QPushButton_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	return true;
}

QSize* QPushButton_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQPushButton*>(self)->QPushButton::minimumSizeHint());
}

bool QPushButton_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QPushButton_virtualbase_event(void* self, QEvent* e) {
	return static_cast<MiqtVirtualQPushButton*>(self)->QPushButton::event(e);
}

bool QPushButton_override_virtual_paintEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = std::move(slot_handle);
	return true;
}

void QPushButton_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	static_cast<MiqtVirtualQPushButton*>(self)->QPushButton::paintEvent(param1);
}

bool QPushButton_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = std::move(slot_handle);
	return true;
}

void QPushButton_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {
	static_cast<MiqtVirtualQPushButton*>(self)->QPushButton::keyPressEvent(param1);
}

bool QPushButton_override_virtual_focusInEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = std::move(slot_handle);
	return true;
}

void QPushButton_virtualbase_focusInEvent(void* self, QFocusEvent* param1) {
	static_cast<MiqtVirtualQPushButton*>(self)->QPushButton::focusInEvent(param1);
}

bool QPushButton_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = std::move(slot_handle);
	return true;
}

void QPushButton_virtualbase_focusOutEvent(void* self, QFocusEvent* param1) {
	static_cast<MiqtVirtualQPushButton*>(self)->QPushButton::focusOutEvent(param1);
}

bool QPushButton_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = std::move(slot_handle);
	return true;
}

void QPushButton_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQPushButton*>(self)->QPushButton::mouseMoveEvent(param1);
}

bool QPushButton_override_virtual_initStyleOption(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initStyleOption = std::move(slot_handle);
	return true;
}

void QPushButton_virtualbase_initStyleOption(const void* self, QStyleOptionButton* option) {
	static_cast<const MiqtVirtualQPushButton*>(self)->QPushButton::initStyleOption(option);
}

bool QPushButton_override_virtual_hitButton(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hitButton = std::move(slot_handle);
	return true;
}

bool QPushButton_virtualbase_hitButton(const void* self, QPoint* pos) {
	return static_cast<const MiqtVirtualQPushButton*>(self)->QPushButton::hitButton(*pos);
}

bool QPushButton_override_virtual_checkStateSet(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__checkStateSet = std::move(slot_handle);
	return true;
}

void QPushButton_virtualbase_checkStateSet(void* self) {
	static_cast<MiqtVirtualQPushButton*>(self)->QPushButton::checkStateSet();
}

bool QPushButton_override_virtual_nextCheckState(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nextCheckState = std::move(slot_handle);
	return true;
}

void QPushButton_virtualbase_nextCheckState(void* self) {
	static_cast<MiqtVirtualQPushButton*>(self)->QPushButton::nextCheckState();
}

bool QPushButton_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = std::move(slot_handle);
	return true;
}

void QPushButton_virtualbase_keyReleaseEvent(void* self, QKeyEvent* e) {
	static_cast<MiqtVirtualQPushButton*>(self)->QPushButton::keyReleaseEvent(e);
}

bool QPushButton_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = std::move(slot_handle);
	return true;
}

void QPushButton_virtualbase_mousePressEvent(void* self, QMouseEvent* e) {
	static_cast<MiqtVirtualQPushButton*>(self)->QPushButton::mousePressEvent(e);
}

bool QPushButton_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = std::move(slot_handle);
	return true;
}

void QPushButton_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* e) {
	static_cast<MiqtVirtualQPushButton*>(self)->QPushButton::mouseReleaseEvent(e);
}

bool QPushButton_override_virtual_changeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = std::move(slot_handle);
	return true;
}

void QPushButton_virtualbase_changeEvent(void* self, QEvent* e) {
	static_cast<MiqtVirtualQPushButton*>(self)->QPushButton::changeEvent(e);
}

bool QPushButton_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QPushButton_virtualbase_timerEvent(void* self, QTimerEvent* e) {
	static_cast<MiqtVirtualQPushButton*>(self)->QPushButton::timerEvent(e);
}

bool QPushButton_override_virtual_devType(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = std::move(slot_handle);
	return true;
}

int QPushButton_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQPushButton*>(self)->QPushButton::devType();
}

bool QPushButton_override_virtual_setVisible(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = std::move(slot_handle);
	return true;
}

void QPushButton_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQPushButton*>(self)->QPushButton::setVisible(visible);
}

bool QPushButton_override_virtual_heightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = std::move(slot_handle);
	return true;
}

int QPushButton_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQPushButton*>(self)->QPushButton::heightForWidth(static_cast<int>(param1));
}

bool QPushButton_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = std::move(slot_handle);
	return true;
}

bool QPushButton_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQPushButton*>(self)->QPushButton::hasHeightForWidth();
}

bool QPushButton_override_virtual_paintEngine(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = std::move(slot_handle);
	return true;
}

QPaintEngine* QPushButton_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQPushButton*>(self)->QPushButton::paintEngine();
}

bool QPushButton_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = std::move(slot_handle);
	return true;
}

void QPushButton_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQPushButton*>(self)->QPushButton::mouseDoubleClickEvent(event);
}

bool QPushButton_override_virtual_wheelEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = std::move(slot_handle);
	return true;
}

void QPushButton_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQPushButton*>(self)->QPushButton::wheelEvent(event);
}

bool QPushButton_override_virtual_enterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = std::move(slot_handle);
	return true;
}

void QPushButton_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	static_cast<MiqtVirtualQPushButton*>(self)->QPushButton::enterEvent(event);
}

bool QPushButton_override_virtual_leaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = std::move(slot_handle);
	return true;
}

void QPushButton_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQPushButton*>(self)->QPushButton::leaveEvent(event);
}

bool QPushButton_override_virtual_moveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = std::move(slot_handle);
	return true;
}

void QPushButton_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQPushButton*>(self)->QPushButton::moveEvent(event);
}

bool QPushButton_override_virtual_resizeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = std::move(slot_handle);
	return true;
}

void QPushButton_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQPushButton*>(self)->QPushButton::resizeEvent(event);
}

bool QPushButton_override_virtual_closeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = std::move(slot_handle);
	return true;
}

void QPushButton_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQPushButton*>(self)->QPushButton::closeEvent(event);
}

bool QPushButton_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = std::move(slot_handle);
	return true;
}

void QPushButton_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQPushButton*>(self)->QPushButton::contextMenuEvent(event);
}

bool QPushButton_override_virtual_tabletEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = std::move(slot_handle);
	return true;
}

void QPushButton_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQPushButton*>(self)->QPushButton::tabletEvent(event);
}

bool QPushButton_override_virtual_actionEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = std::move(slot_handle);
	return true;
}

void QPushButton_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQPushButton*>(self)->QPushButton::actionEvent(event);
}

bool QPushButton_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = std::move(slot_handle);
	return true;
}

void QPushButton_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQPushButton*>(self)->QPushButton::dragEnterEvent(event);
}

bool QPushButton_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = std::move(slot_handle);
	return true;
}

void QPushButton_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQPushButton*>(self)->QPushButton::dragMoveEvent(event);
}

bool QPushButton_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = std::move(slot_handle);
	return true;
}

void QPushButton_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQPushButton*>(self)->QPushButton::dragLeaveEvent(event);
}

bool QPushButton_override_virtual_dropEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = std::move(slot_handle);
	return true;
}

void QPushButton_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQPushButton*>(self)->QPushButton::dropEvent(event);
}

bool QPushButton_override_virtual_showEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = std::move(slot_handle);
	return true;
}

void QPushButton_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQPushButton*>(self)->QPushButton::showEvent(event);
}

bool QPushButton_override_virtual_hideEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = std::move(slot_handle);
	return true;
}

void QPushButton_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQPushButton*>(self)->QPushButton::hideEvent(event);
}

bool QPushButton_override_virtual_nativeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = std::move(slot_handle);
	return true;
}

bool QPushButton_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQPushButton*>(self)->QPushButton::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
}

bool QPushButton_override_virtual_metric(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = std::move(slot_handle);
	return true;
}

int QPushButton_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQPushButton*>(self)->QPushButton::metric(static_cast<MiqtVirtualQPushButton::PaintDeviceMetric>(param1));
}

bool QPushButton_override_virtual_initPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = std::move(slot_handle);
	return true;
}

void QPushButton_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQPushButton*>(self)->QPushButton::initPainter(painter);
}

bool QPushButton_override_virtual_redirected(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = std::move(slot_handle);
	return true;
}

QPaintDevice* QPushButton_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQPushButton*>(self)->QPushButton::redirected(offset);
}

bool QPushButton_override_virtual_sharedPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = std::move(slot_handle);
	return true;
}

QPainter* QPushButton_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQPushButton*>(self)->QPushButton::sharedPainter();
}

bool QPushButton_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = std::move(slot_handle);
	return true;
}

void QPushButton_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQPushButton*>(self)->QPushButton::inputMethodEvent(param1);
}

bool QPushButton_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	return true;
}

QVariant* QPushButton_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQPushButton*>(self)->QPushButton::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QPushButton_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = std::move(slot_handle);
	return true;
}

bool QPushButton_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQPushButton*>(self)->QPushButton::focusNextPrevChild(next);
}

bool QPushButton_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QPushButton_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQPushButton*>(self)->QPushButton::eventFilter(watched, event);
}

bool QPushButton_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QPushButton_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQPushButton*>(self)->QPushButton::childEvent(event);
}

bool QPushButton_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QPushButton_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQPushButton*>(self)->QPushButton::customEvent(event);
}

bool QPushButton_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QPushButton_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQPushButton*>(self)->QPushButton::connectNotify(*signal);
}

bool QPushButton_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPushButton> slot_handle(slot);
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QPushButton_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQPushButton*>(self)->QPushButton::disconnectNotify(*signal);
}

void QPushButton_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QPushButton_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QPushButton_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QPushButton_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QPushButton_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QPushButton_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QPushButton_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QPushButton_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QPushButton_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQPushButton* self_cast = dynamic_cast<MiqtVirtualQPushButton*>( (QPushButton*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QPushButton_delete(QPushButton* self) {
	delete self;
}

