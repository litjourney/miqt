#include <memory>
#include <utility>
#include <QActionEvent>
#include <QByteArray>
#include <QCameraViewfinder>
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
#include <QMediaBindableInterface>
#include <QMediaObject>
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
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QVideoWidget>
#include <QWheelEvent>
#include <QWidget>
#include <qcameraviewfinder.h>
#include "gen_qcameraviewfinder.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QCameraViewfinder(intptr_t);
QMediaObject* miqt_exec_callback_QCameraViewfinder_mediaObject(const QCameraViewfinder*, intptr_t);
bool miqt_exec_callback_QCameraViewfinder_setMediaObject(QCameraViewfinder*, intptr_t, QMediaObject*);
QSize* miqt_exec_callback_QCameraViewfinder_sizeHint(const QCameraViewfinder*, intptr_t);
bool miqt_exec_callback_QCameraViewfinder_event(QCameraViewfinder*, intptr_t, QEvent*);
void miqt_exec_callback_QCameraViewfinder_showEvent(QCameraViewfinder*, intptr_t, QShowEvent*);
void miqt_exec_callback_QCameraViewfinder_hideEvent(QCameraViewfinder*, intptr_t, QHideEvent*);
void miqt_exec_callback_QCameraViewfinder_resizeEvent(QCameraViewfinder*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QCameraViewfinder_moveEvent(QCameraViewfinder*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QCameraViewfinder_paintEvent(QCameraViewfinder*, intptr_t, QPaintEvent*);
int miqt_exec_callback_QCameraViewfinder_devType(const QCameraViewfinder*, intptr_t);
void miqt_exec_callback_QCameraViewfinder_setVisible(QCameraViewfinder*, intptr_t, bool);
QSize* miqt_exec_callback_QCameraViewfinder_minimumSizeHint(const QCameraViewfinder*, intptr_t);
int miqt_exec_callback_QCameraViewfinder_heightForWidth(const QCameraViewfinder*, intptr_t, int);
bool miqt_exec_callback_QCameraViewfinder_hasHeightForWidth(const QCameraViewfinder*, intptr_t);
QPaintEngine* miqt_exec_callback_QCameraViewfinder_paintEngine(const QCameraViewfinder*, intptr_t);
void miqt_exec_callback_QCameraViewfinder_mousePressEvent(QCameraViewfinder*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QCameraViewfinder_mouseReleaseEvent(QCameraViewfinder*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QCameraViewfinder_mouseDoubleClickEvent(QCameraViewfinder*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QCameraViewfinder_mouseMoveEvent(QCameraViewfinder*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QCameraViewfinder_wheelEvent(QCameraViewfinder*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QCameraViewfinder_keyPressEvent(QCameraViewfinder*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QCameraViewfinder_keyReleaseEvent(QCameraViewfinder*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QCameraViewfinder_focusInEvent(QCameraViewfinder*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QCameraViewfinder_focusOutEvent(QCameraViewfinder*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QCameraViewfinder_enterEvent(QCameraViewfinder*, intptr_t, QEvent*);
void miqt_exec_callback_QCameraViewfinder_leaveEvent(QCameraViewfinder*, intptr_t, QEvent*);
void miqt_exec_callback_QCameraViewfinder_closeEvent(QCameraViewfinder*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QCameraViewfinder_contextMenuEvent(QCameraViewfinder*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QCameraViewfinder_tabletEvent(QCameraViewfinder*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QCameraViewfinder_actionEvent(QCameraViewfinder*, intptr_t, QActionEvent*);
void miqt_exec_callback_QCameraViewfinder_dragEnterEvent(QCameraViewfinder*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QCameraViewfinder_dragMoveEvent(QCameraViewfinder*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QCameraViewfinder_dragLeaveEvent(QCameraViewfinder*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QCameraViewfinder_dropEvent(QCameraViewfinder*, intptr_t, QDropEvent*);
bool miqt_exec_callback_QCameraViewfinder_nativeEvent(QCameraViewfinder*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QCameraViewfinder_changeEvent(QCameraViewfinder*, intptr_t, QEvent*);
int miqt_exec_callback_QCameraViewfinder_metric(const QCameraViewfinder*, intptr_t, int);
void miqt_exec_callback_QCameraViewfinder_initPainter(const QCameraViewfinder*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QCameraViewfinder_redirected(const QCameraViewfinder*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QCameraViewfinder_sharedPainter(const QCameraViewfinder*, intptr_t);
void miqt_exec_callback_QCameraViewfinder_inputMethodEvent(QCameraViewfinder*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QCameraViewfinder_inputMethodQuery(const QCameraViewfinder*, intptr_t, int);
bool miqt_exec_callback_QCameraViewfinder_focusNextPrevChild(QCameraViewfinder*, intptr_t, bool);
bool miqt_exec_callback_QCameraViewfinder_eventFilter(QCameraViewfinder*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QCameraViewfinder_timerEvent(QCameraViewfinder*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QCameraViewfinder_childEvent(QCameraViewfinder*, intptr_t, QChildEvent*);
void miqt_exec_callback_QCameraViewfinder_customEvent(QCameraViewfinder*, intptr_t, QEvent*);
void miqt_exec_callback_QCameraViewfinder_connectNotify(QCameraViewfinder*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QCameraViewfinder_disconnectNotify(QCameraViewfinder*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQCameraViewfinder final : public QCameraViewfinder {
public:

	MiqtVirtualQCameraViewfinder(QWidget* parent): QCameraViewfinder(parent) {}
	MiqtVirtualQCameraViewfinder(): QCameraViewfinder() {}

	virtual ~MiqtVirtualQCameraViewfinder() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__mediaObject;

	// Subclass to allow providing a Go implementation
	virtual QMediaObject* mediaObject() const override {
		if (!handle__mediaObject) {
			return QCameraViewfinder::mediaObject();
		}

		QMediaObject* callback_return_value = miqt_exec_callback_QCameraViewfinder_mediaObject(this, handle__mediaObject.value());
		return callback_return_value;
	}

	friend QMediaObject* QCameraViewfinder_virtualbase_mediaObject(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__setMediaObject;

	// Subclass to allow providing a Go implementation
	virtual bool setMediaObject(QMediaObject* object) override {
		if (!handle__setMediaObject) {
			return QCameraViewfinder::setMediaObject(object);
		}

		QMediaObject* sigval1 = object;
		bool callback_return_value = miqt_exec_callback_QCameraViewfinder_setMediaObject(this, handle__setMediaObject.value(), sigval1);
		return callback_return_value;
	}

	friend bool QCameraViewfinder_virtualbase_setMediaObject(void* self, QMediaObject* object);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__sizeHint;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (!handle__sizeHint) {
			return QCameraViewfinder::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QCameraViewfinder_sizeHint(this, handle__sizeHint.value());
		return *callback_return_value;
	}

	friend QSize* QCameraViewfinder_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QCameraViewfinder::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QCameraViewfinder_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QCameraViewfinder_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__showEvent;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (!handle__showEvent) {
			QCameraViewfinder::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QCameraViewfinder_showEvent(this, handle__showEvent.value(), sigval1);

	}

	friend void QCameraViewfinder_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__hideEvent;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (!handle__hideEvent) {
			QCameraViewfinder::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QCameraViewfinder_hideEvent(this, handle__hideEvent.value(), sigval1);

	}

	friend void QCameraViewfinder_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__resizeEvent;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (!handle__resizeEvent) {
			QCameraViewfinder::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QCameraViewfinder_resizeEvent(this, handle__resizeEvent.value(), sigval1);

	}

	friend void QCameraViewfinder_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__moveEvent;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (!handle__moveEvent) {
			QCameraViewfinder::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QCameraViewfinder_moveEvent(this, handle__moveEvent.value(), sigval1);

	}

	friend void QCameraViewfinder_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__paintEvent;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (!handle__paintEvent) {
			QCameraViewfinder::paintEvent(event);
			return;
		}

		QPaintEvent* sigval1 = event;
		miqt_exec_callback_QCameraViewfinder_paintEvent(this, handle__paintEvent.value(), sigval1);

	}

	friend void QCameraViewfinder_virtualbase_paintEvent(void* self, QPaintEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__devType;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (!handle__devType) {
			return QCameraViewfinder::devType();
		}

		int callback_return_value = miqt_exec_callback_QCameraViewfinder_devType(this, handle__devType.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QCameraViewfinder_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__setVisible;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (!handle__setVisible) {
			QCameraViewfinder::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QCameraViewfinder_setVisible(this, handle__setVisible.value(), sigval1);

	}

	friend void QCameraViewfinder_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__minimumSizeHint;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (!handle__minimumSizeHint) {
			return QCameraViewfinder::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QCameraViewfinder_minimumSizeHint(this, handle__minimumSizeHint.value());
		return *callback_return_value;
	}

	friend QSize* QCameraViewfinder_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__heightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (!handle__heightForWidth) {
			return QCameraViewfinder::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QCameraViewfinder_heightForWidth(this, handle__heightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QCameraViewfinder_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__hasHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (!handle__hasHeightForWidth) {
			return QCameraViewfinder::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QCameraViewfinder_hasHeightForWidth(this, handle__hasHeightForWidth.value());
		return callback_return_value;
	}

	friend bool QCameraViewfinder_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__paintEngine;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (!handle__paintEngine) {
			return QCameraViewfinder::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QCameraViewfinder_paintEngine(this, handle__paintEngine.value());
		return callback_return_value;
	}

	friend QPaintEngine* QCameraViewfinder_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__mousePressEvent;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (!handle__mousePressEvent) {
			QCameraViewfinder::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QCameraViewfinder_mousePressEvent(this, handle__mousePressEvent.value(), sigval1);

	}

	friend void QCameraViewfinder_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__mouseReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (!handle__mouseReleaseEvent) {
			QCameraViewfinder::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QCameraViewfinder_mouseReleaseEvent(this, handle__mouseReleaseEvent.value(), sigval1);

	}

	friend void QCameraViewfinder_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__mouseDoubleClickEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (!handle__mouseDoubleClickEvent) {
			QCameraViewfinder::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QCameraViewfinder_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent.value(), sigval1);

	}

	friend void QCameraViewfinder_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__mouseMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (!handle__mouseMoveEvent) {
			QCameraViewfinder::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QCameraViewfinder_mouseMoveEvent(this, handle__mouseMoveEvent.value(), sigval1);

	}

	friend void QCameraViewfinder_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__wheelEvent;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (!handle__wheelEvent) {
			QCameraViewfinder::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QCameraViewfinder_wheelEvent(this, handle__wheelEvent.value(), sigval1);

	}

	friend void QCameraViewfinder_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__keyPressEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (!handle__keyPressEvent) {
			QCameraViewfinder::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QCameraViewfinder_keyPressEvent(this, handle__keyPressEvent.value(), sigval1);

	}

	friend void QCameraViewfinder_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__keyReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (!handle__keyReleaseEvent) {
			QCameraViewfinder::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QCameraViewfinder_keyReleaseEvent(this, handle__keyReleaseEvent.value(), sigval1);

	}

	friend void QCameraViewfinder_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__focusInEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (!handle__focusInEvent) {
			QCameraViewfinder::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QCameraViewfinder_focusInEvent(this, handle__focusInEvent.value(), sigval1);

	}

	friend void QCameraViewfinder_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__focusOutEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (!handle__focusOutEvent) {
			QCameraViewfinder::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QCameraViewfinder_focusOutEvent(this, handle__focusOutEvent.value(), sigval1);

	}

	friend void QCameraViewfinder_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__enterEvent;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (!handle__enterEvent) {
			QCameraViewfinder::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QCameraViewfinder_enterEvent(this, handle__enterEvent.value(), sigval1);

	}

	friend void QCameraViewfinder_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__leaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (!handle__leaveEvent) {
			QCameraViewfinder::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QCameraViewfinder_leaveEvent(this, handle__leaveEvent.value(), sigval1);

	}

	friend void QCameraViewfinder_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__closeEvent;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (!handle__closeEvent) {
			QCameraViewfinder::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QCameraViewfinder_closeEvent(this, handle__closeEvent.value(), sigval1);

	}

	friend void QCameraViewfinder_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__contextMenuEvent;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (!handle__contextMenuEvent) {
			QCameraViewfinder::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QCameraViewfinder_contextMenuEvent(this, handle__contextMenuEvent.value(), sigval1);

	}

	friend void QCameraViewfinder_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__tabletEvent;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (!handle__tabletEvent) {
			QCameraViewfinder::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QCameraViewfinder_tabletEvent(this, handle__tabletEvent.value(), sigval1);

	}

	friend void QCameraViewfinder_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__actionEvent;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (!handle__actionEvent) {
			QCameraViewfinder::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QCameraViewfinder_actionEvent(this, handle__actionEvent.value(), sigval1);

	}

	friend void QCameraViewfinder_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__dragEnterEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (!handle__dragEnterEvent) {
			QCameraViewfinder::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QCameraViewfinder_dragEnterEvent(this, handle__dragEnterEvent.value(), sigval1);

	}

	friend void QCameraViewfinder_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__dragMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (!handle__dragMoveEvent) {
			QCameraViewfinder::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QCameraViewfinder_dragMoveEvent(this, handle__dragMoveEvent.value(), sigval1);

	}

	friend void QCameraViewfinder_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__dragLeaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (!handle__dragLeaveEvent) {
			QCameraViewfinder::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QCameraViewfinder_dragLeaveEvent(this, handle__dragLeaveEvent.value(), sigval1);

	}

	friend void QCameraViewfinder_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__dropEvent;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (!handle__dropEvent) {
			QCameraViewfinder::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QCameraViewfinder_dropEvent(this, handle__dropEvent.value(), sigval1);

	}

	friend void QCameraViewfinder_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__nativeEvent;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (!handle__nativeEvent) {
			return QCameraViewfinder::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QCameraViewfinder_nativeEvent(this, handle__nativeEvent.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QCameraViewfinder_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__changeEvent;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (!handle__changeEvent) {
			QCameraViewfinder::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QCameraViewfinder_changeEvent(this, handle__changeEvent.value(), sigval1);

	}

	friend void QCameraViewfinder_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__metric;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (!handle__metric) {
			return QCameraViewfinder::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QCameraViewfinder_metric(this, handle__metric.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QCameraViewfinder_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__initPainter;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (!handle__initPainter) {
			QCameraViewfinder::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QCameraViewfinder_initPainter(this, handle__initPainter.value(), sigval1);

	}

	friend void QCameraViewfinder_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__redirected;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (!handle__redirected) {
			return QCameraViewfinder::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QCameraViewfinder_redirected(this, handle__redirected.value(), sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QCameraViewfinder_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__sharedPainter;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (!handle__sharedPainter) {
			return QCameraViewfinder::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QCameraViewfinder_sharedPainter(this, handle__sharedPainter.value());
		return callback_return_value;
	}

	friend QPainter* QCameraViewfinder_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__inputMethodEvent;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (!handle__inputMethodEvent) {
			QCameraViewfinder::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QCameraViewfinder_inputMethodEvent(this, handle__inputMethodEvent.value(), sigval1);

	}

	friend void QCameraViewfinder_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__inputMethodQuery;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (!handle__inputMethodQuery) {
			return QCameraViewfinder::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QCameraViewfinder_inputMethodQuery(this, handle__inputMethodQuery.value(), sigval1);
		return *callback_return_value;
	}

	friend QVariant* QCameraViewfinder_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__focusNextPrevChild;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (!handle__focusNextPrevChild) {
			return QCameraViewfinder::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QCameraViewfinder_focusNextPrevChild(this, handle__focusNextPrevChild.value(), sigval1);
		return callback_return_value;
	}

	friend bool QCameraViewfinder_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QCameraViewfinder::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QCameraViewfinder_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QCameraViewfinder_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QCameraViewfinder::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QCameraViewfinder_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QCameraViewfinder_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QCameraViewfinder::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QCameraViewfinder_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QCameraViewfinder_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QCameraViewfinder::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QCameraViewfinder_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QCameraViewfinder_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QCameraViewfinder::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QCameraViewfinder_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QCameraViewfinder_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QCameraViewfinder::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QCameraViewfinder_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QCameraViewfinder_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QCameraViewfinder_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QCameraViewfinder_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QCameraViewfinder_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QCameraViewfinder_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QCameraViewfinder_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QCameraViewfinder_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QCameraViewfinder_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QCameraViewfinder_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QCameraViewfinder_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QCameraViewfinder* QCameraViewfinder_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQCameraViewfinder(parent);
}

QCameraViewfinder* QCameraViewfinder_new2() {
	return new (std::nothrow) MiqtVirtualQCameraViewfinder();
}

void QCameraViewfinder_virtbase(QCameraViewfinder* src, QVideoWidget** outptr_QVideoWidget) {
	*outptr_QVideoWidget = static_cast<QVideoWidget*>(src);
}

QMetaObject* QCameraViewfinder_metaObject(const QCameraViewfinder* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCameraViewfinder_metacast(QCameraViewfinder* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCameraViewfinder_tr(const char* s) {
	QString _ret = QCameraViewfinder::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraViewfinder_trUtf8(const char* s) {
	QString _ret = QCameraViewfinder::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QMediaObject* QCameraViewfinder_mediaObject(const QCameraViewfinder* self) {
	return self->mediaObject();
}

struct miqt_string QCameraViewfinder_tr2(const char* s, const char* c) {
	QString _ret = QCameraViewfinder::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraViewfinder_tr3(const char* s, const char* c, int n) {
	QString _ret = QCameraViewfinder::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraViewfinder_trUtf82(const char* s, const char* c) {
	QString _ret = QCameraViewfinder::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCameraViewfinder_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QCameraViewfinder::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QCameraViewfinder_override_virtual_mediaObject(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mediaObject = std::move(slot_handle);
	return true;
}

QMediaObject* QCameraViewfinder_virtualbase_mediaObject(const void* self) {
	return static_cast<const MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::mediaObject();
}

bool QCameraViewfinder_override_virtual_setMediaObject(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setMediaObject = std::move(slot_handle);
	return true;
}

bool QCameraViewfinder_virtualbase_setMediaObject(void* self, QMediaObject* object) {
	return static_cast<MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::setMediaObject(object);
}

bool QCameraViewfinder_override_virtual_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	return true;
}

QSize* QCameraViewfinder_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::sizeHint());
}

bool QCameraViewfinder_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QCameraViewfinder_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::event(event);
}

bool QCameraViewfinder_override_virtual_showEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = std::move(slot_handle);
	return true;
}

void QCameraViewfinder_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::showEvent(event);
}

bool QCameraViewfinder_override_virtual_hideEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = std::move(slot_handle);
	return true;
}

void QCameraViewfinder_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::hideEvent(event);
}

bool QCameraViewfinder_override_virtual_resizeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = std::move(slot_handle);
	return true;
}

void QCameraViewfinder_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::resizeEvent(event);
}

bool QCameraViewfinder_override_virtual_moveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = std::move(slot_handle);
	return true;
}

void QCameraViewfinder_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::moveEvent(event);
}

bool QCameraViewfinder_override_virtual_paintEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = std::move(slot_handle);
	return true;
}

void QCameraViewfinder_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	static_cast<MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::paintEvent(event);
}

bool QCameraViewfinder_override_virtual_devType(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = std::move(slot_handle);
	return true;
}

int QCameraViewfinder_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::devType();
}

bool QCameraViewfinder_override_virtual_setVisible(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = std::move(slot_handle);
	return true;
}

void QCameraViewfinder_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::setVisible(visible);
}

bool QCameraViewfinder_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	return true;
}

QSize* QCameraViewfinder_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::minimumSizeHint());
}

bool QCameraViewfinder_override_virtual_heightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = std::move(slot_handle);
	return true;
}

int QCameraViewfinder_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::heightForWidth(static_cast<int>(param1));
}

bool QCameraViewfinder_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = std::move(slot_handle);
	return true;
}

bool QCameraViewfinder_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::hasHeightForWidth();
}

bool QCameraViewfinder_override_virtual_paintEngine(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = std::move(slot_handle);
	return true;
}

QPaintEngine* QCameraViewfinder_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::paintEngine();
}

bool QCameraViewfinder_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = std::move(slot_handle);
	return true;
}

void QCameraViewfinder_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::mousePressEvent(event);
}

bool QCameraViewfinder_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = std::move(slot_handle);
	return true;
}

void QCameraViewfinder_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::mouseReleaseEvent(event);
}

bool QCameraViewfinder_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = std::move(slot_handle);
	return true;
}

void QCameraViewfinder_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::mouseDoubleClickEvent(event);
}

bool QCameraViewfinder_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = std::move(slot_handle);
	return true;
}

void QCameraViewfinder_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::mouseMoveEvent(event);
}

bool QCameraViewfinder_override_virtual_wheelEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = std::move(slot_handle);
	return true;
}

void QCameraViewfinder_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::wheelEvent(event);
}

bool QCameraViewfinder_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = std::move(slot_handle);
	return true;
}

void QCameraViewfinder_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::keyPressEvent(event);
}

bool QCameraViewfinder_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = std::move(slot_handle);
	return true;
}

void QCameraViewfinder_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::keyReleaseEvent(event);
}

bool QCameraViewfinder_override_virtual_focusInEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = std::move(slot_handle);
	return true;
}

void QCameraViewfinder_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::focusInEvent(event);
}

bool QCameraViewfinder_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = std::move(slot_handle);
	return true;
}

void QCameraViewfinder_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::focusOutEvent(event);
}

bool QCameraViewfinder_override_virtual_enterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = std::move(slot_handle);
	return true;
}

void QCameraViewfinder_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::enterEvent(event);
}

bool QCameraViewfinder_override_virtual_leaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = std::move(slot_handle);
	return true;
}

void QCameraViewfinder_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::leaveEvent(event);
}

bool QCameraViewfinder_override_virtual_closeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = std::move(slot_handle);
	return true;
}

void QCameraViewfinder_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::closeEvent(event);
}

bool QCameraViewfinder_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = std::move(slot_handle);
	return true;
}

void QCameraViewfinder_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::contextMenuEvent(event);
}

bool QCameraViewfinder_override_virtual_tabletEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = std::move(slot_handle);
	return true;
}

void QCameraViewfinder_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::tabletEvent(event);
}

bool QCameraViewfinder_override_virtual_actionEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = std::move(slot_handle);
	return true;
}

void QCameraViewfinder_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::actionEvent(event);
}

bool QCameraViewfinder_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = std::move(slot_handle);
	return true;
}

void QCameraViewfinder_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::dragEnterEvent(event);
}

bool QCameraViewfinder_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = std::move(slot_handle);
	return true;
}

void QCameraViewfinder_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::dragMoveEvent(event);
}

bool QCameraViewfinder_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = std::move(slot_handle);
	return true;
}

void QCameraViewfinder_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::dragLeaveEvent(event);
}

bool QCameraViewfinder_override_virtual_dropEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = std::move(slot_handle);
	return true;
}

void QCameraViewfinder_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::dropEvent(event);
}

bool QCameraViewfinder_override_virtual_nativeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = std::move(slot_handle);
	return true;
}

bool QCameraViewfinder_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QCameraViewfinder_override_virtual_changeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = std::move(slot_handle);
	return true;
}

void QCameraViewfinder_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::changeEvent(param1);
}

bool QCameraViewfinder_override_virtual_metric(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = std::move(slot_handle);
	return true;
}

int QCameraViewfinder_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::metric(static_cast<MiqtVirtualQCameraViewfinder::PaintDeviceMetric>(param1));
}

bool QCameraViewfinder_override_virtual_initPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = std::move(slot_handle);
	return true;
}

void QCameraViewfinder_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::initPainter(painter);
}

bool QCameraViewfinder_override_virtual_redirected(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = std::move(slot_handle);
	return true;
}

QPaintDevice* QCameraViewfinder_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::redirected(offset);
}

bool QCameraViewfinder_override_virtual_sharedPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = std::move(slot_handle);
	return true;
}

QPainter* QCameraViewfinder_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::sharedPainter();
}

bool QCameraViewfinder_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = std::move(slot_handle);
	return true;
}

void QCameraViewfinder_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::inputMethodEvent(param1);
}

bool QCameraViewfinder_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	return true;
}

QVariant* QCameraViewfinder_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QCameraViewfinder_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = std::move(slot_handle);
	return true;
}

bool QCameraViewfinder_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::focusNextPrevChild(next);
}

bool QCameraViewfinder_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QCameraViewfinder_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::eventFilter(watched, event);
}

bool QCameraViewfinder_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QCameraViewfinder_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::timerEvent(event);
}

bool QCameraViewfinder_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QCameraViewfinder_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::childEvent(event);
}

bool QCameraViewfinder_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QCameraViewfinder_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::customEvent(event);
}

bool QCameraViewfinder_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QCameraViewfinder_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::connectNotify(*signal);
}

bool QCameraViewfinder_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QCameraViewfinder> slot_handle(slot);
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QCameraViewfinder_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQCameraViewfinder*>(self)->QCameraViewfinder::disconnectNotify(*signal);
}

void QCameraViewfinder_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QCameraViewfinder_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QCameraViewfinder_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QCameraViewfinder_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QCameraViewfinder_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QCameraViewfinder_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QCameraViewfinder_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QCameraViewfinder_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QCameraViewfinder_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQCameraViewfinder* self_cast = dynamic_cast<MiqtVirtualQCameraViewfinder*>( (QCameraViewfinder*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QCameraViewfinder_delete(QCameraViewfinder* self) {
	delete self;
}

