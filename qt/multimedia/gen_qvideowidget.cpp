#include <memory>
#include <utility>
#include <QAbstractVideoSurface>
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
#include <qvideowidget.h>
#include "gen_qvideowidget.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QVideoWidget(intptr_t);
void miqt_exec_callback_QVideoWidget_fullScreenChanged(intptr_t, bool);
void miqt_exec_callback_QVideoWidget_brightnessChanged(intptr_t, int);
void miqt_exec_callback_QVideoWidget_contrastChanged(intptr_t, int);
void miqt_exec_callback_QVideoWidget_hueChanged(intptr_t, int);
void miqt_exec_callback_QVideoWidget_saturationChanged(intptr_t, int);
QMediaObject* miqt_exec_callback_QVideoWidget_mediaObject(const QVideoWidget*, intptr_t);
QSize* miqt_exec_callback_QVideoWidget_sizeHint(const QVideoWidget*, intptr_t);
bool miqt_exec_callback_QVideoWidget_event(QVideoWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QVideoWidget_showEvent(QVideoWidget*, intptr_t, QShowEvent*);
void miqt_exec_callback_QVideoWidget_hideEvent(QVideoWidget*, intptr_t, QHideEvent*);
void miqt_exec_callback_QVideoWidget_resizeEvent(QVideoWidget*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QVideoWidget_moveEvent(QVideoWidget*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QVideoWidget_paintEvent(QVideoWidget*, intptr_t, QPaintEvent*);
bool miqt_exec_callback_QVideoWidget_setMediaObject(QVideoWidget*, intptr_t, QMediaObject*);
int miqt_exec_callback_QVideoWidget_devType(const QVideoWidget*, intptr_t);
void miqt_exec_callback_QVideoWidget_setVisible(QVideoWidget*, intptr_t, bool);
QSize* miqt_exec_callback_QVideoWidget_minimumSizeHint(const QVideoWidget*, intptr_t);
int miqt_exec_callback_QVideoWidget_heightForWidth(const QVideoWidget*, intptr_t, int);
bool miqt_exec_callback_QVideoWidget_hasHeightForWidth(const QVideoWidget*, intptr_t);
QPaintEngine* miqt_exec_callback_QVideoWidget_paintEngine(const QVideoWidget*, intptr_t);
void miqt_exec_callback_QVideoWidget_mousePressEvent(QVideoWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QVideoWidget_mouseReleaseEvent(QVideoWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QVideoWidget_mouseDoubleClickEvent(QVideoWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QVideoWidget_mouseMoveEvent(QVideoWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QVideoWidget_wheelEvent(QVideoWidget*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QVideoWidget_keyPressEvent(QVideoWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QVideoWidget_keyReleaseEvent(QVideoWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QVideoWidget_focusInEvent(QVideoWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QVideoWidget_focusOutEvent(QVideoWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QVideoWidget_enterEvent(QVideoWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QVideoWidget_leaveEvent(QVideoWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QVideoWidget_closeEvent(QVideoWidget*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QVideoWidget_contextMenuEvent(QVideoWidget*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QVideoWidget_tabletEvent(QVideoWidget*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QVideoWidget_actionEvent(QVideoWidget*, intptr_t, QActionEvent*);
void miqt_exec_callback_QVideoWidget_dragEnterEvent(QVideoWidget*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QVideoWidget_dragMoveEvent(QVideoWidget*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QVideoWidget_dragLeaveEvent(QVideoWidget*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QVideoWidget_dropEvent(QVideoWidget*, intptr_t, QDropEvent*);
bool miqt_exec_callback_QVideoWidget_nativeEvent(QVideoWidget*, intptr_t, struct miqt_string, void*, long*);
void miqt_exec_callback_QVideoWidget_changeEvent(QVideoWidget*, intptr_t, QEvent*);
int miqt_exec_callback_QVideoWidget_metric(const QVideoWidget*, intptr_t, int);
void miqt_exec_callback_QVideoWidget_initPainter(const QVideoWidget*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QVideoWidget_redirected(const QVideoWidget*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QVideoWidget_sharedPainter(const QVideoWidget*, intptr_t);
void miqt_exec_callback_QVideoWidget_inputMethodEvent(QVideoWidget*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QVideoWidget_inputMethodQuery(const QVideoWidget*, intptr_t, int);
bool miqt_exec_callback_QVideoWidget_focusNextPrevChild(QVideoWidget*, intptr_t, bool);
bool miqt_exec_callback_QVideoWidget_eventFilter(QVideoWidget*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QVideoWidget_timerEvent(QVideoWidget*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QVideoWidget_childEvent(QVideoWidget*, intptr_t, QChildEvent*);
void miqt_exec_callback_QVideoWidget_customEvent(QVideoWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QVideoWidget_connectNotify(QVideoWidget*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QVideoWidget_disconnectNotify(QVideoWidget*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQVideoWidget final : public QVideoWidget {
public:

	MiqtVirtualQVideoWidget(QWidget* parent): QVideoWidget(parent) {}
	MiqtVirtualQVideoWidget(): QVideoWidget() {}

	virtual ~MiqtVirtualQVideoWidget() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__mediaObject;

	// Subclass to allow providing a Go implementation
	virtual QMediaObject* mediaObject() const override {
		if (!handle__mediaObject) {
			return QVideoWidget::mediaObject();
		}

		QMediaObject* callback_return_value = miqt_exec_callback_QVideoWidget_mediaObject(this, handle__mediaObject.value());
		return callback_return_value;
	}

	friend QMediaObject* QVideoWidget_virtualbase_mediaObject(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__sizeHint;
	bool owns_return__sizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (!handle__sizeHint) {
			return QVideoWidget::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QVideoWidget_sizeHint(this, handle__sizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__sizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QVideoWidget_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QVideoWidget::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QVideoWidget_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QVideoWidget_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__showEvent;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (!handle__showEvent) {
			QVideoWidget::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QVideoWidget_showEvent(this, handle__showEvent.value(), sigval1);

	}

	friend void QVideoWidget_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__hideEvent;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (!handle__hideEvent) {
			QVideoWidget::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QVideoWidget_hideEvent(this, handle__hideEvent.value(), sigval1);

	}

	friend void QVideoWidget_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__resizeEvent;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (!handle__resizeEvent) {
			QVideoWidget::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QVideoWidget_resizeEvent(this, handle__resizeEvent.value(), sigval1);

	}

	friend void QVideoWidget_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__moveEvent;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (!handle__moveEvent) {
			QVideoWidget::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QVideoWidget_moveEvent(this, handle__moveEvent.value(), sigval1);

	}

	friend void QVideoWidget_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__paintEvent;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* event) override {
		if (!handle__paintEvent) {
			QVideoWidget::paintEvent(event);
			return;
		}

		QPaintEvent* sigval1 = event;
		miqt_exec_callback_QVideoWidget_paintEvent(this, handle__paintEvent.value(), sigval1);

	}

	friend void QVideoWidget_virtualbase_paintEvent(void* self, QPaintEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__setMediaObject;

	// Subclass to allow providing a Go implementation
	virtual bool setMediaObject(QMediaObject* object) override {
		if (!handle__setMediaObject) {
			return QVideoWidget::setMediaObject(object);
		}

		QMediaObject* sigval1 = object;
		bool callback_return_value = miqt_exec_callback_QVideoWidget_setMediaObject(this, handle__setMediaObject.value(), sigval1);
		return callback_return_value;
	}

	friend bool QVideoWidget_virtualbase_setMediaObject(void* self, QMediaObject* object);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__devType;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (!handle__devType) {
			return QVideoWidget::devType();
		}

		int callback_return_value = miqt_exec_callback_QVideoWidget_devType(this, handle__devType.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QVideoWidget_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__setVisible;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (!handle__setVisible) {
			QVideoWidget::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QVideoWidget_setVisible(this, handle__setVisible.value(), sigval1);

	}

	friend void QVideoWidget_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__minimumSizeHint;
	bool owns_return__minimumSizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (!handle__minimumSizeHint) {
			return QVideoWidget::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QVideoWidget_minimumSizeHint(this, handle__minimumSizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__minimumSizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QVideoWidget_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__heightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (!handle__heightForWidth) {
			return QVideoWidget::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QVideoWidget_heightForWidth(this, handle__heightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QVideoWidget_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__hasHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (!handle__hasHeightForWidth) {
			return QVideoWidget::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QVideoWidget_hasHeightForWidth(this, handle__hasHeightForWidth.value());
		return callback_return_value;
	}

	friend bool QVideoWidget_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__paintEngine;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (!handle__paintEngine) {
			return QVideoWidget::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QVideoWidget_paintEngine(this, handle__paintEngine.value());
		return callback_return_value;
	}

	friend QPaintEngine* QVideoWidget_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__mousePressEvent;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (!handle__mousePressEvent) {
			QVideoWidget::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QVideoWidget_mousePressEvent(this, handle__mousePressEvent.value(), sigval1);

	}

	friend void QVideoWidget_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__mouseReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (!handle__mouseReleaseEvent) {
			QVideoWidget::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QVideoWidget_mouseReleaseEvent(this, handle__mouseReleaseEvent.value(), sigval1);

	}

	friend void QVideoWidget_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__mouseDoubleClickEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (!handle__mouseDoubleClickEvent) {
			QVideoWidget::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QVideoWidget_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent.value(), sigval1);

	}

	friend void QVideoWidget_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__mouseMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (!handle__mouseMoveEvent) {
			QVideoWidget::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QVideoWidget_mouseMoveEvent(this, handle__mouseMoveEvent.value(), sigval1);

	}

	friend void QVideoWidget_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__wheelEvent;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (!handle__wheelEvent) {
			QVideoWidget::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QVideoWidget_wheelEvent(this, handle__wheelEvent.value(), sigval1);

	}

	friend void QVideoWidget_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__keyPressEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (!handle__keyPressEvent) {
			QVideoWidget::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QVideoWidget_keyPressEvent(this, handle__keyPressEvent.value(), sigval1);

	}

	friend void QVideoWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__keyReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (!handle__keyReleaseEvent) {
			QVideoWidget::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QVideoWidget_keyReleaseEvent(this, handle__keyReleaseEvent.value(), sigval1);

	}

	friend void QVideoWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__focusInEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (!handle__focusInEvent) {
			QVideoWidget::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QVideoWidget_focusInEvent(this, handle__focusInEvent.value(), sigval1);

	}

	friend void QVideoWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__focusOutEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (!handle__focusOutEvent) {
			QVideoWidget::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QVideoWidget_focusOutEvent(this, handle__focusOutEvent.value(), sigval1);

	}

	friend void QVideoWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__enterEvent;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (!handle__enterEvent) {
			QVideoWidget::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QVideoWidget_enterEvent(this, handle__enterEvent.value(), sigval1);

	}

	friend void QVideoWidget_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__leaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (!handle__leaveEvent) {
			QVideoWidget::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QVideoWidget_leaveEvent(this, handle__leaveEvent.value(), sigval1);

	}

	friend void QVideoWidget_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__closeEvent;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (!handle__closeEvent) {
			QVideoWidget::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QVideoWidget_closeEvent(this, handle__closeEvent.value(), sigval1);

	}

	friend void QVideoWidget_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__contextMenuEvent;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (!handle__contextMenuEvent) {
			QVideoWidget::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QVideoWidget_contextMenuEvent(this, handle__contextMenuEvent.value(), sigval1);

	}

	friend void QVideoWidget_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__tabletEvent;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (!handle__tabletEvent) {
			QVideoWidget::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QVideoWidget_tabletEvent(this, handle__tabletEvent.value(), sigval1);

	}

	friend void QVideoWidget_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__actionEvent;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (!handle__actionEvent) {
			QVideoWidget::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QVideoWidget_actionEvent(this, handle__actionEvent.value(), sigval1);

	}

	friend void QVideoWidget_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__dragEnterEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (!handle__dragEnterEvent) {
			QVideoWidget::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QVideoWidget_dragEnterEvent(this, handle__dragEnterEvent.value(), sigval1);

	}

	friend void QVideoWidget_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__dragMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (!handle__dragMoveEvent) {
			QVideoWidget::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QVideoWidget_dragMoveEvent(this, handle__dragMoveEvent.value(), sigval1);

	}

	friend void QVideoWidget_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__dragLeaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (!handle__dragLeaveEvent) {
			QVideoWidget::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QVideoWidget_dragLeaveEvent(this, handle__dragLeaveEvent.value(), sigval1);

	}

	friend void QVideoWidget_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__dropEvent;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (!handle__dropEvent) {
			QVideoWidget::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QVideoWidget_dropEvent(this, handle__dropEvent.value(), sigval1);

	}

	friend void QVideoWidget_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__nativeEvent;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (!handle__nativeEvent) {
			return QVideoWidget::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QVideoWidget_nativeEvent(this, handle__nativeEvent.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QVideoWidget_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__changeEvent;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (!handle__changeEvent) {
			QVideoWidget::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QVideoWidget_changeEvent(this, handle__changeEvent.value(), sigval1);

	}

	friend void QVideoWidget_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__metric;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (!handle__metric) {
			return QVideoWidget::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QVideoWidget_metric(this, handle__metric.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QVideoWidget_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__initPainter;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (!handle__initPainter) {
			QVideoWidget::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QVideoWidget_initPainter(this, handle__initPainter.value(), sigval1);

	}

	friend void QVideoWidget_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__redirected;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (!handle__redirected) {
			return QVideoWidget::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QVideoWidget_redirected(this, handle__redirected.value(), sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QVideoWidget_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__sharedPainter;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (!handle__sharedPainter) {
			return QVideoWidget::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QVideoWidget_sharedPainter(this, handle__sharedPainter.value());
		return callback_return_value;
	}

	friend QPainter* QVideoWidget_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__inputMethodEvent;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (!handle__inputMethodEvent) {
			QVideoWidget::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QVideoWidget_inputMethodEvent(this, handle__inputMethodEvent.value(), sigval1);

	}

	friend void QVideoWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__inputMethodQuery;
	bool owns_return__inputMethodQuery = false;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (!handle__inputMethodQuery) {
			return QVideoWidget::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QVideoWidget_inputMethodQuery(this, handle__inputMethodQuery.value(), sigval1);
		std::unique_ptr<QVariant> callback_return_value_owner;
		if (owns_return__inputMethodQuery) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QVariant* QVideoWidget_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__focusNextPrevChild;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (!handle__focusNextPrevChild) {
			return QVideoWidget::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QVideoWidget_focusNextPrevChild(this, handle__focusNextPrevChild.value(), sigval1);
		return callback_return_value;
	}

	friend bool QVideoWidget_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QVideoWidget::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QVideoWidget_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QVideoWidget_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QVideoWidget::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QVideoWidget_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QVideoWidget_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QVideoWidget::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QVideoWidget_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QVideoWidget_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QVideoWidget::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QVideoWidget_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QVideoWidget_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QVideoWidget::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QVideoWidget_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QVideoWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QVideoWidget::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QVideoWidget_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QVideoWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QVideoWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QVideoWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QVideoWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QVideoWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QVideoWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QVideoWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QVideoWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QVideoWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QVideoWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QVideoWidget* QVideoWidget_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQVideoWidget(parent);
}

QVideoWidget* QVideoWidget_new2() {
	return new (std::nothrow) MiqtVirtualQVideoWidget();
}

void QVideoWidget_virtbase(QVideoWidget* src, QWidget** outptr_QWidget, QMediaBindableInterface** outptr_QMediaBindableInterface) {
	*outptr_QWidget = static_cast<QWidget*>(src);
	*outptr_QMediaBindableInterface = static_cast<QMediaBindableInterface*>(src);
}

QMetaObject* QVideoWidget_metaObject(const QVideoWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QVideoWidget_metacast(QVideoWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QVideoWidget_tr(const char* s) {
	QString _ret = QVideoWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoWidget_trUtf8(const char* s) {
	QString _ret = QVideoWidget::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QMediaObject* QVideoWidget_mediaObject(const QVideoWidget* self) {
	return self->mediaObject();
}

QAbstractVideoSurface* QVideoWidget_videoSurface(const QVideoWidget* self) {
	return self->videoSurface();
}

int QVideoWidget_aspectRatioMode(const QVideoWidget* self) {
	Qt::AspectRatioMode _ret = self->aspectRatioMode();
	return static_cast<int>(_ret);
}

int QVideoWidget_brightness(const QVideoWidget* self) {
	return self->brightness();
}

int QVideoWidget_contrast(const QVideoWidget* self) {
	return self->contrast();
}

int QVideoWidget_hue(const QVideoWidget* self) {
	return self->hue();
}

int QVideoWidget_saturation(const QVideoWidget* self) {
	return self->saturation();
}

QSize* QVideoWidget_sizeHint(const QVideoWidget* self) {
	return new QSize(self->sizeHint());
}

void QVideoWidget_setFullScreen(QVideoWidget* self, bool fullScreen) {
	self->setFullScreen(fullScreen);
}

void QVideoWidget_setAspectRatioMode(QVideoWidget* self, int mode) {
	self->setAspectRatioMode(static_cast<Qt::AspectRatioMode>(mode));
}

void QVideoWidget_setBrightness(QVideoWidget* self, int brightness) {
	self->setBrightness(static_cast<int>(brightness));
}

void QVideoWidget_setContrast(QVideoWidget* self, int contrast) {
	self->setContrast(static_cast<int>(contrast));
}

void QVideoWidget_setHue(QVideoWidget* self, int hue) {
	self->setHue(static_cast<int>(hue));
}

void QVideoWidget_setSaturation(QVideoWidget* self, int saturation) {
	self->setSaturation(static_cast<int>(saturation));
}

void QVideoWidget_fullScreenChanged(QVideoWidget* self, bool fullScreen) {
	self->fullScreenChanged(fullScreen);
}

void* QVideoWidget_connect_fullScreenChanged(QVideoWidget* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget>>(slot);
	return new QMetaObject::Connection(QVideoWidget::connect(self, static_cast<void (QVideoWidget::*)(bool)>(&QVideoWidget::fullScreenChanged), self, [slot_handle](bool fullScreen) {
		intptr_t slot = slot_handle->value();
		bool sigval1 = fullScreen;
		miqt_exec_callback_QVideoWidget_fullScreenChanged(slot, sigval1);
	}));
}

void QVideoWidget_brightnessChanged(QVideoWidget* self, int brightness) {
	self->brightnessChanged(static_cast<int>(brightness));
}

void* QVideoWidget_connect_brightnessChanged(QVideoWidget* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget>>(slot);
	return new QMetaObject::Connection(QVideoWidget::connect(self, static_cast<void (QVideoWidget::*)(int)>(&QVideoWidget::brightnessChanged), self, [slot_handle](int brightness) {
		intptr_t slot = slot_handle->value();
		int sigval1 = brightness;
		miqt_exec_callback_QVideoWidget_brightnessChanged(slot, sigval1);
	}));
}

void QVideoWidget_contrastChanged(QVideoWidget* self, int contrast) {
	self->contrastChanged(static_cast<int>(contrast));
}

void* QVideoWidget_connect_contrastChanged(QVideoWidget* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget>>(slot);
	return new QMetaObject::Connection(QVideoWidget::connect(self, static_cast<void (QVideoWidget::*)(int)>(&QVideoWidget::contrastChanged), self, [slot_handle](int contrast) {
		intptr_t slot = slot_handle->value();
		int sigval1 = contrast;
		miqt_exec_callback_QVideoWidget_contrastChanged(slot, sigval1);
	}));
}

void QVideoWidget_hueChanged(QVideoWidget* self, int hue) {
	self->hueChanged(static_cast<int>(hue));
}

void* QVideoWidget_connect_hueChanged(QVideoWidget* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget>>(slot);
	return new QMetaObject::Connection(QVideoWidget::connect(self, static_cast<void (QVideoWidget::*)(int)>(&QVideoWidget::hueChanged), self, [slot_handle](int hue) {
		intptr_t slot = slot_handle->value();
		int sigval1 = hue;
		miqt_exec_callback_QVideoWidget_hueChanged(slot, sigval1);
	}));
}

void QVideoWidget_saturationChanged(QVideoWidget* self, int saturation) {
	self->saturationChanged(static_cast<int>(saturation));
}

void* QVideoWidget_connect_saturationChanged(QVideoWidget* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget>>(slot);
	return new QMetaObject::Connection(QVideoWidget::connect(self, static_cast<void (QVideoWidget::*)(int)>(&QVideoWidget::saturationChanged), self, [slot_handle](int saturation) {
		intptr_t slot = slot_handle->value();
		int sigval1 = saturation;
		miqt_exec_callback_QVideoWidget_saturationChanged(slot, sigval1);
	}));
}

struct miqt_string QVideoWidget_tr2(const char* s, const char* c) {
	QString _ret = QVideoWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoWidget_tr3(const char* s, const char* c, int n) {
	QString _ret = QVideoWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoWidget_trUtf82(const char* s, const char* c) {
	QString _ret = QVideoWidget::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QVideoWidget_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QVideoWidget::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QVideoWidget_override_virtual_mediaObject(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mediaObject = std::move(slot_handle);
	return true;
}

QMediaObject* QVideoWidget_virtualbase_mediaObject(const void* self) {
	return static_cast<const MiqtVirtualQVideoWidget*>(self)->QVideoWidget::mediaObject();
}

bool QVideoWidget_override_virtual_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = false;
	return true;
}

bool QVideoWidget_override_virtual_owned_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = true;
	return true;
}

QSize* QVideoWidget_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQVideoWidget*>(self)->QVideoWidget::sizeHint());
}

bool QVideoWidget_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QVideoWidget_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQVideoWidget*>(self)->QVideoWidget::event(event);
}

bool QVideoWidget_override_virtual_showEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = std::move(slot_handle);
	return true;
}

void QVideoWidget_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQVideoWidget*>(self)->QVideoWidget::showEvent(event);
}

bool QVideoWidget_override_virtual_hideEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = std::move(slot_handle);
	return true;
}

void QVideoWidget_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQVideoWidget*>(self)->QVideoWidget::hideEvent(event);
}

bool QVideoWidget_override_virtual_resizeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = std::move(slot_handle);
	return true;
}

void QVideoWidget_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQVideoWidget*>(self)->QVideoWidget::resizeEvent(event);
}

bool QVideoWidget_override_virtual_moveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = std::move(slot_handle);
	return true;
}

void QVideoWidget_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQVideoWidget*>(self)->QVideoWidget::moveEvent(event);
}

bool QVideoWidget_override_virtual_paintEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = std::move(slot_handle);
	return true;
}

void QVideoWidget_virtualbase_paintEvent(void* self, QPaintEvent* event) {
	static_cast<MiqtVirtualQVideoWidget*>(self)->QVideoWidget::paintEvent(event);
}

bool QVideoWidget_override_virtual_setMediaObject(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setMediaObject = std::move(slot_handle);
	return true;
}

bool QVideoWidget_virtualbase_setMediaObject(void* self, QMediaObject* object) {
	return static_cast<MiqtVirtualQVideoWidget*>(self)->QVideoWidget::setMediaObject(object);
}

bool QVideoWidget_override_virtual_devType(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = std::move(slot_handle);
	return true;
}

int QVideoWidget_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQVideoWidget*>(self)->QVideoWidget::devType();
}

bool QVideoWidget_override_virtual_setVisible(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = std::move(slot_handle);
	return true;
}

void QVideoWidget_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQVideoWidget*>(self)->QVideoWidget::setVisible(visible);
}

bool QVideoWidget_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	self_cast->owns_return__minimumSizeHint = false;
	return true;
}

bool QVideoWidget_override_virtual_owned_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	self_cast->owns_return__minimumSizeHint = true;
	return true;
}

QSize* QVideoWidget_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQVideoWidget*>(self)->QVideoWidget::minimumSizeHint());
}

bool QVideoWidget_override_virtual_heightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = std::move(slot_handle);
	return true;
}

int QVideoWidget_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQVideoWidget*>(self)->QVideoWidget::heightForWidth(static_cast<int>(param1));
}

bool QVideoWidget_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = std::move(slot_handle);
	return true;
}

bool QVideoWidget_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQVideoWidget*>(self)->QVideoWidget::hasHeightForWidth();
}

bool QVideoWidget_override_virtual_paintEngine(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = std::move(slot_handle);
	return true;
}

QPaintEngine* QVideoWidget_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQVideoWidget*>(self)->QVideoWidget::paintEngine();
}

bool QVideoWidget_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = std::move(slot_handle);
	return true;
}

void QVideoWidget_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQVideoWidget*>(self)->QVideoWidget::mousePressEvent(event);
}

bool QVideoWidget_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = std::move(slot_handle);
	return true;
}

void QVideoWidget_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQVideoWidget*>(self)->QVideoWidget::mouseReleaseEvent(event);
}

bool QVideoWidget_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = std::move(slot_handle);
	return true;
}

void QVideoWidget_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQVideoWidget*>(self)->QVideoWidget::mouseDoubleClickEvent(event);
}

bool QVideoWidget_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = std::move(slot_handle);
	return true;
}

void QVideoWidget_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQVideoWidget*>(self)->QVideoWidget::mouseMoveEvent(event);
}

bool QVideoWidget_override_virtual_wheelEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = std::move(slot_handle);
	return true;
}

void QVideoWidget_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQVideoWidget*>(self)->QVideoWidget::wheelEvent(event);
}

bool QVideoWidget_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = std::move(slot_handle);
	return true;
}

void QVideoWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQVideoWidget*>(self)->QVideoWidget::keyPressEvent(event);
}

bool QVideoWidget_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = std::move(slot_handle);
	return true;
}

void QVideoWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQVideoWidget*>(self)->QVideoWidget::keyReleaseEvent(event);
}

bool QVideoWidget_override_virtual_focusInEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = std::move(slot_handle);
	return true;
}

void QVideoWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQVideoWidget*>(self)->QVideoWidget::focusInEvent(event);
}

bool QVideoWidget_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = std::move(slot_handle);
	return true;
}

void QVideoWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQVideoWidget*>(self)->QVideoWidget::focusOutEvent(event);
}

bool QVideoWidget_override_virtual_enterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = std::move(slot_handle);
	return true;
}

void QVideoWidget_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQVideoWidget*>(self)->QVideoWidget::enterEvent(event);
}

bool QVideoWidget_override_virtual_leaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = std::move(slot_handle);
	return true;
}

void QVideoWidget_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQVideoWidget*>(self)->QVideoWidget::leaveEvent(event);
}

bool QVideoWidget_override_virtual_closeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = std::move(slot_handle);
	return true;
}

void QVideoWidget_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQVideoWidget*>(self)->QVideoWidget::closeEvent(event);
}

bool QVideoWidget_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = std::move(slot_handle);
	return true;
}

void QVideoWidget_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQVideoWidget*>(self)->QVideoWidget::contextMenuEvent(event);
}

bool QVideoWidget_override_virtual_tabletEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = std::move(slot_handle);
	return true;
}

void QVideoWidget_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQVideoWidget*>(self)->QVideoWidget::tabletEvent(event);
}

bool QVideoWidget_override_virtual_actionEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = std::move(slot_handle);
	return true;
}

void QVideoWidget_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQVideoWidget*>(self)->QVideoWidget::actionEvent(event);
}

bool QVideoWidget_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = std::move(slot_handle);
	return true;
}

void QVideoWidget_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQVideoWidget*>(self)->QVideoWidget::dragEnterEvent(event);
}

bool QVideoWidget_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = std::move(slot_handle);
	return true;
}

void QVideoWidget_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQVideoWidget*>(self)->QVideoWidget::dragMoveEvent(event);
}

bool QVideoWidget_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = std::move(slot_handle);
	return true;
}

void QVideoWidget_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQVideoWidget*>(self)->QVideoWidget::dragLeaveEvent(event);
}

bool QVideoWidget_override_virtual_dropEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = std::move(slot_handle);
	return true;
}

void QVideoWidget_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQVideoWidget*>(self)->QVideoWidget::dropEvent(event);
}

bool QVideoWidget_override_virtual_nativeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = std::move(slot_handle);
	return true;
}

bool QVideoWidget_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQVideoWidget*>(self)->QVideoWidget::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QVideoWidget_override_virtual_changeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = std::move(slot_handle);
	return true;
}

void QVideoWidget_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQVideoWidget*>(self)->QVideoWidget::changeEvent(param1);
}

bool QVideoWidget_override_virtual_metric(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = std::move(slot_handle);
	return true;
}

int QVideoWidget_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQVideoWidget*>(self)->QVideoWidget::metric(static_cast<MiqtVirtualQVideoWidget::PaintDeviceMetric>(param1));
}

bool QVideoWidget_override_virtual_initPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = std::move(slot_handle);
	return true;
}

void QVideoWidget_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQVideoWidget*>(self)->QVideoWidget::initPainter(painter);
}

bool QVideoWidget_override_virtual_redirected(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = std::move(slot_handle);
	return true;
}

QPaintDevice* QVideoWidget_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQVideoWidget*>(self)->QVideoWidget::redirected(offset);
}

bool QVideoWidget_override_virtual_sharedPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = std::move(slot_handle);
	return true;
}

QPainter* QVideoWidget_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQVideoWidget*>(self)->QVideoWidget::sharedPainter();
}

bool QVideoWidget_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = std::move(slot_handle);
	return true;
}

void QVideoWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQVideoWidget*>(self)->QVideoWidget::inputMethodEvent(param1);
}

bool QVideoWidget_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	self_cast->owns_return__inputMethodQuery = false;
	return true;
}

bool QVideoWidget_override_virtual_owned_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	self_cast->owns_return__inputMethodQuery = true;
	return true;
}

QVariant* QVideoWidget_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQVideoWidget*>(self)->QVideoWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QVideoWidget_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = std::move(slot_handle);
	return true;
}

bool QVideoWidget_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQVideoWidget*>(self)->QVideoWidget::focusNextPrevChild(next);
}

bool QVideoWidget_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QVideoWidget_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQVideoWidget*>(self)->QVideoWidget::eventFilter(watched, event);
}

bool QVideoWidget_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QVideoWidget_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQVideoWidget*>(self)->QVideoWidget::timerEvent(event);
}

bool QVideoWidget_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QVideoWidget_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQVideoWidget*>(self)->QVideoWidget::childEvent(event);
}

bool QVideoWidget_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QVideoWidget_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQVideoWidget*>(self)->QVideoWidget::customEvent(event);
}

bool QVideoWidget_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QVideoWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQVideoWidget*>(self)->QVideoWidget::connectNotify(*signal);
}

bool QVideoWidget_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QVideoWidget> slot_handle(slot);
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QVideoWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQVideoWidget*>(self)->QVideoWidget::disconnectNotify(*signal);
}

void QVideoWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QVideoWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QVideoWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QVideoWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QVideoWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QVideoWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QVideoWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QVideoWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QVideoWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQVideoWidget* self_cast = dynamic_cast<MiqtVirtualQVideoWidget*>( (QVideoWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QVideoWidget_delete(QVideoWidget* self) {
	delete self;
}

