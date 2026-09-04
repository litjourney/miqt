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
#include <QList>
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
#include <qwt_abstract_legend.h>
#include "gen_qwt_abstract_legend.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QwtAbstractLegend(intptr_t);
void miqt_exec_callback_QwtAbstractLegend_renderLegend(const QwtAbstractLegend*, intptr_t, QPainter*, QRectF*, bool);
bool miqt_exec_callback_QwtAbstractLegend_isEmpty(const QwtAbstractLegend*, intptr_t);
int miqt_exec_callback_QwtAbstractLegend_scrollExtent(const QwtAbstractLegend*, intptr_t, int);
void miqt_exec_callback_QwtAbstractLegend_updateLegend(QwtAbstractLegend*, intptr_t, QVariant*, struct miqt_array /* of QwtLegendData* */ );
QSize* miqt_exec_callback_QwtAbstractLegend_sizeHint(const QwtAbstractLegend*, intptr_t);
bool miqt_exec_callback_QwtAbstractLegend_event(QwtAbstractLegend*, intptr_t, QEvent*);
void miqt_exec_callback_QwtAbstractLegend_paintEvent(QwtAbstractLegend*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QwtAbstractLegend_changeEvent(QwtAbstractLegend*, intptr_t, QEvent*);
int miqt_exec_callback_QwtAbstractLegend_devType(const QwtAbstractLegend*, intptr_t);
void miqt_exec_callback_QwtAbstractLegend_setVisible(QwtAbstractLegend*, intptr_t, bool);
QSize* miqt_exec_callback_QwtAbstractLegend_minimumSizeHint(const QwtAbstractLegend*, intptr_t);
int miqt_exec_callback_QwtAbstractLegend_heightForWidth(const QwtAbstractLegend*, intptr_t, int);
bool miqt_exec_callback_QwtAbstractLegend_hasHeightForWidth(const QwtAbstractLegend*, intptr_t);
QPaintEngine* miqt_exec_callback_QwtAbstractLegend_paintEngine(const QwtAbstractLegend*, intptr_t);
void miqt_exec_callback_QwtAbstractLegend_mousePressEvent(QwtAbstractLegend*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtAbstractLegend_mouseReleaseEvent(QwtAbstractLegend*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtAbstractLegend_mouseDoubleClickEvent(QwtAbstractLegend*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtAbstractLegend_mouseMoveEvent(QwtAbstractLegend*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QwtAbstractLegend_wheelEvent(QwtAbstractLegend*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QwtAbstractLegend_keyPressEvent(QwtAbstractLegend*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtAbstractLegend_keyReleaseEvent(QwtAbstractLegend*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QwtAbstractLegend_focusInEvent(QwtAbstractLegend*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QwtAbstractLegend_focusOutEvent(QwtAbstractLegend*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QwtAbstractLegend_enterEvent(QwtAbstractLegend*, intptr_t, QEvent*);
void miqt_exec_callback_QwtAbstractLegend_leaveEvent(QwtAbstractLegend*, intptr_t, QEvent*);
void miqt_exec_callback_QwtAbstractLegend_moveEvent(QwtAbstractLegend*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QwtAbstractLegend_resizeEvent(QwtAbstractLegend*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QwtAbstractLegend_closeEvent(QwtAbstractLegend*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QwtAbstractLegend_contextMenuEvent(QwtAbstractLegend*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QwtAbstractLegend_tabletEvent(QwtAbstractLegend*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QwtAbstractLegend_actionEvent(QwtAbstractLegend*, intptr_t, QActionEvent*);
void miqt_exec_callback_QwtAbstractLegend_dragEnterEvent(QwtAbstractLegend*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QwtAbstractLegend_dragMoveEvent(QwtAbstractLegend*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QwtAbstractLegend_dragLeaveEvent(QwtAbstractLegend*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QwtAbstractLegend_dropEvent(QwtAbstractLegend*, intptr_t, QDropEvent*);
void miqt_exec_callback_QwtAbstractLegend_showEvent(QwtAbstractLegend*, intptr_t, QShowEvent*);
void miqt_exec_callback_QwtAbstractLegend_hideEvent(QwtAbstractLegend*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QwtAbstractLegend_nativeEvent(QwtAbstractLegend*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QwtAbstractLegend_metric(const QwtAbstractLegend*, intptr_t, int);
void miqt_exec_callback_QwtAbstractLegend_initPainter(const QwtAbstractLegend*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QwtAbstractLegend_redirected(const QwtAbstractLegend*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QwtAbstractLegend_sharedPainter(const QwtAbstractLegend*, intptr_t);
void miqt_exec_callback_QwtAbstractLegend_inputMethodEvent(QwtAbstractLegend*, intptr_t, QInputMethodEvent*);
QVariant* miqt_exec_callback_QwtAbstractLegend_inputMethodQuery(const QwtAbstractLegend*, intptr_t, int);
bool miqt_exec_callback_QwtAbstractLegend_focusNextPrevChild(QwtAbstractLegend*, intptr_t, bool);
bool miqt_exec_callback_QwtAbstractLegend_eventFilter(QwtAbstractLegend*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QwtAbstractLegend_timerEvent(QwtAbstractLegend*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QwtAbstractLegend_childEvent(QwtAbstractLegend*, intptr_t, QChildEvent*);
void miqt_exec_callback_QwtAbstractLegend_customEvent(QwtAbstractLegend*, intptr_t, QEvent*);
void miqt_exec_callback_QwtAbstractLegend_connectNotify(QwtAbstractLegend*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QwtAbstractLegend_disconnectNotify(QwtAbstractLegend*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtAbstractLegend final : public QwtAbstractLegend {
public:

	MiqtVirtualQwtAbstractLegend(QWidget* parent): QwtAbstractLegend(parent) {}
	MiqtVirtualQwtAbstractLegend(): QwtAbstractLegend() {}

	virtual ~MiqtVirtualQwtAbstractLegend() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__renderLegend;

	// Subclass to allow providing a Go implementation
	virtual void renderLegend(QPainter* painter, const QRectF& rect, bool fillBackground) const override {
		if (!handle__renderLegend) {
			return; // Pure virtual, there is no base we can call
		}

		QPainter* sigval1 = painter;
		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval2 = const_cast<QRectF*>(&rect_ret);
		bool sigval3 = fillBackground;
		miqt_exec_callback_QwtAbstractLegend_renderLegend(this, handle__renderLegend.value(), sigval1, sigval2, sigval3);

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__isEmpty;

	// Subclass to allow providing a Go implementation
	virtual bool isEmpty() const override {
		if (!handle__isEmpty) {
			return false; // Pure virtual, there is no base we can call
		}

		bool callback_return_value = miqt_exec_callback_QwtAbstractLegend_isEmpty(this, handle__isEmpty.value());
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__scrollExtent;

	// Subclass to allow providing a Go implementation
	virtual int scrollExtent(Qt::Orientation param1) const override {
		if (!handle__scrollExtent) {
			return QwtAbstractLegend::scrollExtent(param1);
		}

		Qt::Orientation param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QwtAbstractLegend_scrollExtent(this, handle__scrollExtent.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtAbstractLegend_virtualbase_scrollExtent(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__updateLegend;

	// Subclass to allow providing a Go implementation
	virtual void updateLegend(const QVariant& itemInfo, const QList<QwtLegendData>& data) override {
		if (!handle__updateLegend) {
			return; // Pure virtual, there is no base we can call
		}

		const QVariant& itemInfo_ret = itemInfo;
		// Cast returned reference into pointer
		QVariant* sigval1 = const_cast<QVariant*>(&itemInfo_ret);
		const QList<QwtLegendData>& data_ret = data;
		// Convert QList<> from C++ memory to manually-managed C memory
		QwtLegendData** data_arr = static_cast<QwtLegendData**>(malloc(sizeof(QwtLegendData*) * data_ret.length()));
		for (size_t i = 0, e = data_ret.length(); i < e; ++i) {
			data_arr[i] = new QwtLegendData(data_ret[i]);
		}
		struct miqt_array data_out;
		data_out.len = data_ret.length();
		data_out.data = static_cast<void*>(data_arr);
		struct miqt_array /* of QwtLegendData* */  sigval2 = data_out;
		miqt_exec_callback_QwtAbstractLegend_updateLegend(this, handle__updateLegend.value(), sigval1, sigval2);

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__sizeHint;
	bool owns_return__sizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (!handle__sizeHint) {
			return QwtAbstractLegend::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtAbstractLegend_sizeHint(this, handle__sizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__sizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QwtAbstractLegend_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (!handle__event) {
			return QwtAbstractLegend::event(e);
		}

		QEvent* sigval1 = e;
		bool callback_return_value = miqt_exec_callback_QwtAbstractLegend_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QwtAbstractLegend_virtualbase_event(void* self, QEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__paintEvent;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (!handle__paintEvent) {
			QwtAbstractLegend::paintEvent(param1);
			return;
		}

		QPaintEvent* sigval1 = param1;
		miqt_exec_callback_QwtAbstractLegend_paintEvent(this, handle__paintEvent.value(), sigval1);

	}

	friend void QwtAbstractLegend_virtualbase_paintEvent(void* self, QPaintEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__changeEvent;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (!handle__changeEvent) {
			QwtAbstractLegend::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QwtAbstractLegend_changeEvent(this, handle__changeEvent.value(), sigval1);

	}

	friend void QwtAbstractLegend_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__devType;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (!handle__devType) {
			return QwtAbstractLegend::devType();
		}

		int callback_return_value = miqt_exec_callback_QwtAbstractLegend_devType(this, handle__devType.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QwtAbstractLegend_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__setVisible;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (!handle__setVisible) {
			QwtAbstractLegend::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QwtAbstractLegend_setVisible(this, handle__setVisible.value(), sigval1);

	}

	friend void QwtAbstractLegend_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__minimumSizeHint;
	bool owns_return__minimumSizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (!handle__minimumSizeHint) {
			return QwtAbstractLegend::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtAbstractLegend_minimumSizeHint(this, handle__minimumSizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__minimumSizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QwtAbstractLegend_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__heightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (!handle__heightForWidth) {
			return QwtAbstractLegend::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QwtAbstractLegend_heightForWidth(this, handle__heightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtAbstractLegend_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__hasHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (!handle__hasHeightForWidth) {
			return QwtAbstractLegend::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QwtAbstractLegend_hasHeightForWidth(this, handle__hasHeightForWidth.value());
		return callback_return_value;
	}

	friend bool QwtAbstractLegend_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__paintEngine;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (!handle__paintEngine) {
			return QwtAbstractLegend::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QwtAbstractLegend_paintEngine(this, handle__paintEngine.value());
		return callback_return_value;
	}

	friend QPaintEngine* QwtAbstractLegend_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__mousePressEvent;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (!handle__mousePressEvent) {
			QwtAbstractLegend::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractLegend_mousePressEvent(this, handle__mousePressEvent.value(), sigval1);

	}

	friend void QwtAbstractLegend_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__mouseReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (!handle__mouseReleaseEvent) {
			QwtAbstractLegend::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractLegend_mouseReleaseEvent(this, handle__mouseReleaseEvent.value(), sigval1);

	}

	friend void QwtAbstractLegend_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__mouseDoubleClickEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (!handle__mouseDoubleClickEvent) {
			QwtAbstractLegend::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractLegend_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent.value(), sigval1);

	}

	friend void QwtAbstractLegend_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__mouseMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (!handle__mouseMoveEvent) {
			QwtAbstractLegend::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractLegend_mouseMoveEvent(this, handle__mouseMoveEvent.value(), sigval1);

	}

	friend void QwtAbstractLegend_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__wheelEvent;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (!handle__wheelEvent) {
			QwtAbstractLegend::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractLegend_wheelEvent(this, handle__wheelEvent.value(), sigval1);

	}

	friend void QwtAbstractLegend_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__keyPressEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (!handle__keyPressEvent) {
			QwtAbstractLegend::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractLegend_keyPressEvent(this, handle__keyPressEvent.value(), sigval1);

	}

	friend void QwtAbstractLegend_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__keyReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (!handle__keyReleaseEvent) {
			QwtAbstractLegend::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractLegend_keyReleaseEvent(this, handle__keyReleaseEvent.value(), sigval1);

	}

	friend void QwtAbstractLegend_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__focusInEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (!handle__focusInEvent) {
			QwtAbstractLegend::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractLegend_focusInEvent(this, handle__focusInEvent.value(), sigval1);

	}

	friend void QwtAbstractLegend_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__focusOutEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (!handle__focusOutEvent) {
			QwtAbstractLegend::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractLegend_focusOutEvent(this, handle__focusOutEvent.value(), sigval1);

	}

	friend void QwtAbstractLegend_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__enterEvent;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (!handle__enterEvent) {
			QwtAbstractLegend::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractLegend_enterEvent(this, handle__enterEvent.value(), sigval1);

	}

	friend void QwtAbstractLegend_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__leaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (!handle__leaveEvent) {
			QwtAbstractLegend::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractLegend_leaveEvent(this, handle__leaveEvent.value(), sigval1);

	}

	friend void QwtAbstractLegend_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__moveEvent;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (!handle__moveEvent) {
			QwtAbstractLegend::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractLegend_moveEvent(this, handle__moveEvent.value(), sigval1);

	}

	friend void QwtAbstractLegend_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__resizeEvent;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (!handle__resizeEvent) {
			QwtAbstractLegend::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractLegend_resizeEvent(this, handle__resizeEvent.value(), sigval1);

	}

	friend void QwtAbstractLegend_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__closeEvent;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (!handle__closeEvent) {
			QwtAbstractLegend::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractLegend_closeEvent(this, handle__closeEvent.value(), sigval1);

	}

	friend void QwtAbstractLegend_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__contextMenuEvent;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* event) override {
		if (!handle__contextMenuEvent) {
			QwtAbstractLegend::contextMenuEvent(event);
			return;
		}

		QContextMenuEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractLegend_contextMenuEvent(this, handle__contextMenuEvent.value(), sigval1);

	}

	friend void QwtAbstractLegend_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__tabletEvent;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (!handle__tabletEvent) {
			QwtAbstractLegend::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractLegend_tabletEvent(this, handle__tabletEvent.value(), sigval1);

	}

	friend void QwtAbstractLegend_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__actionEvent;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (!handle__actionEvent) {
			QwtAbstractLegend::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractLegend_actionEvent(this, handle__actionEvent.value(), sigval1);

	}

	friend void QwtAbstractLegend_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__dragEnterEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (!handle__dragEnterEvent) {
			QwtAbstractLegend::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractLegend_dragEnterEvent(this, handle__dragEnterEvent.value(), sigval1);

	}

	friend void QwtAbstractLegend_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__dragMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (!handle__dragMoveEvent) {
			QwtAbstractLegend::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractLegend_dragMoveEvent(this, handle__dragMoveEvent.value(), sigval1);

	}

	friend void QwtAbstractLegend_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__dragLeaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (!handle__dragLeaveEvent) {
			QwtAbstractLegend::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractLegend_dragLeaveEvent(this, handle__dragLeaveEvent.value(), sigval1);

	}

	friend void QwtAbstractLegend_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__dropEvent;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (!handle__dropEvent) {
			QwtAbstractLegend::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractLegend_dropEvent(this, handle__dropEvent.value(), sigval1);

	}

	friend void QwtAbstractLegend_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__showEvent;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (!handle__showEvent) {
			QwtAbstractLegend::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractLegend_showEvent(this, handle__showEvent.value(), sigval1);

	}

	friend void QwtAbstractLegend_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__hideEvent;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (!handle__hideEvent) {
			QwtAbstractLegend::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractLegend_hideEvent(this, handle__hideEvent.value(), sigval1);

	}

	friend void QwtAbstractLegend_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__nativeEvent;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (!handle__nativeEvent) {
			return QwtAbstractLegend::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QwtAbstractLegend_nativeEvent(this, handle__nativeEvent.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QwtAbstractLegend_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__metric;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (!handle__metric) {
			return QwtAbstractLegend::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QwtAbstractLegend_metric(this, handle__metric.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtAbstractLegend_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__initPainter;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (!handle__initPainter) {
			QwtAbstractLegend::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QwtAbstractLegend_initPainter(this, handle__initPainter.value(), sigval1);

	}

	friend void QwtAbstractLegend_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__redirected;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (!handle__redirected) {
			return QwtAbstractLegend::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QwtAbstractLegend_redirected(this, handle__redirected.value(), sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QwtAbstractLegend_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__sharedPainter;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (!handle__sharedPainter) {
			return QwtAbstractLegend::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QwtAbstractLegend_sharedPainter(this, handle__sharedPainter.value());
		return callback_return_value;
	}

	friend QPainter* QwtAbstractLegend_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__inputMethodEvent;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (!handle__inputMethodEvent) {
			QwtAbstractLegend::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QwtAbstractLegend_inputMethodEvent(this, handle__inputMethodEvent.value(), sigval1);

	}

	friend void QwtAbstractLegend_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__inputMethodQuery;
	bool owns_return__inputMethodQuery = false;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (!handle__inputMethodQuery) {
			return QwtAbstractLegend::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QwtAbstractLegend_inputMethodQuery(this, handle__inputMethodQuery.value(), sigval1);
		std::unique_ptr<QVariant> callback_return_value_owner;
		if (owns_return__inputMethodQuery) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QVariant* QwtAbstractLegend_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__focusNextPrevChild;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (!handle__focusNextPrevChild) {
			return QwtAbstractLegend::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QwtAbstractLegend_focusNextPrevChild(this, handle__focusNextPrevChild.value(), sigval1);
		return callback_return_value;
	}

	friend bool QwtAbstractLegend_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QwtAbstractLegend::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QwtAbstractLegend_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QwtAbstractLegend_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QwtAbstractLegend::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractLegend_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QwtAbstractLegend_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QwtAbstractLegend::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractLegend_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QwtAbstractLegend_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QwtAbstractLegend::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtAbstractLegend_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QwtAbstractLegend_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QwtAbstractLegend::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtAbstractLegend_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QwtAbstractLegend_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QwtAbstractLegend::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtAbstractLegend_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QwtAbstractLegend_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QwtAbstractLegend_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
	friend void QwtAbstractLegend_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option);
	friend void QwtAbstractLegend_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QwtAbstractLegend_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QwtAbstractLegend_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QwtAbstractLegend_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QwtAbstractLegend_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QwtAbstractLegend_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QwtAbstractLegend_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QwtAbstractLegend_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QwtAbstractLegend_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QwtAbstractLegend* QwtAbstractLegend_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQwtAbstractLegend(parent);
}

QwtAbstractLegend* QwtAbstractLegend_new2() {
	return new (std::nothrow) MiqtVirtualQwtAbstractLegend();
}

void QwtAbstractLegend_virtbase(QwtAbstractLegend* src, QFrame** outptr_QFrame) {
	*outptr_QFrame = static_cast<QFrame*>(src);
}

QMetaObject* QwtAbstractLegend_metaObject(const QwtAbstractLegend* self) {
	return (QMetaObject*) self->metaObject();
}

void* QwtAbstractLegend_metacast(QwtAbstractLegend* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QwtAbstractLegend_tr(const char* s) {
	QString _ret = QwtAbstractLegend::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtAbstractLegend_trUtf8(const char* s) {
	QString _ret = QwtAbstractLegend::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QwtAbstractLegend_renderLegend(const QwtAbstractLegend* self, QPainter* painter, QRectF* rect, bool fillBackground) {
	self->renderLegend(painter, *rect, fillBackground);
}

bool QwtAbstractLegend_isEmpty(const QwtAbstractLegend* self) {
	return self->isEmpty();
}

int QwtAbstractLegend_scrollExtent(const QwtAbstractLegend* self, int param1) {
	return self->scrollExtent(static_cast<Qt::Orientation>(param1));
}

void QwtAbstractLegend_updateLegend(QwtAbstractLegend* self, QVariant* itemInfo, struct miqt_array /* of QwtLegendData* */  data) {
	QList<QwtLegendData> data_QList;
	data_QList.reserve(data.len);
	QwtLegendData** data_arr = static_cast<QwtLegendData**>(data.data);
	for(size_t i = 0; i < data.len; ++i) {
		data_QList.push_back(*(data_arr[i]));
	}
	self->updateLegend(*itemInfo, data_QList);
}

struct miqt_string QwtAbstractLegend_tr2(const char* s, const char* c) {
	QString _ret = QwtAbstractLegend::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtAbstractLegend_tr3(const char* s, const char* c, int n) {
	QString _ret = QwtAbstractLegend::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtAbstractLegend_trUtf82(const char* s, const char* c) {
	QString _ret = QwtAbstractLegend::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtAbstractLegend_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QwtAbstractLegend::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QwtAbstractLegend_override_virtual_renderLegend(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__renderLegend = std::move(slot_handle);
	return true;
}

bool QwtAbstractLegend_override_virtual_isEmpty(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isEmpty = std::move(slot_handle);
	return true;
}

bool QwtAbstractLegend_override_virtual_scrollExtent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scrollExtent = std::move(slot_handle);
	return true;
}

int QwtAbstractLegend_virtualbase_scrollExtent(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::scrollExtent(static_cast<Qt::Orientation>(param1));
}

bool QwtAbstractLegend_override_virtual_updateLegend(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateLegend = std::move(slot_handle);
	return true;
}

bool QwtAbstractLegend_override_virtual_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = false;
	return true;
}

bool QwtAbstractLegend_override_virtual_owned_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = true;
	return true;
}

QSize* QwtAbstractLegend_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::sizeHint());
}

bool QwtAbstractLegend_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QwtAbstractLegend_virtualbase_event(void* self, QEvent* e) {
	return static_cast<MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::event(e);
}

bool QwtAbstractLegend_override_virtual_paintEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = std::move(slot_handle);
	return true;
}

void QwtAbstractLegend_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	static_cast<MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::paintEvent(param1);
}

bool QwtAbstractLegend_override_virtual_changeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = std::move(slot_handle);
	return true;
}

void QwtAbstractLegend_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::changeEvent(param1);
}

bool QwtAbstractLegend_override_virtual_devType(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = std::move(slot_handle);
	return true;
}

int QwtAbstractLegend_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::devType();
}

bool QwtAbstractLegend_override_virtual_setVisible(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = std::move(slot_handle);
	return true;
}

void QwtAbstractLegend_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::setVisible(visible);
}

bool QwtAbstractLegend_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	self_cast->owns_return__minimumSizeHint = false;
	return true;
}

bool QwtAbstractLegend_override_virtual_owned_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	self_cast->owns_return__minimumSizeHint = true;
	return true;
}

QSize* QwtAbstractLegend_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::minimumSizeHint());
}

bool QwtAbstractLegend_override_virtual_heightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = std::move(slot_handle);
	return true;
}

int QwtAbstractLegend_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::heightForWidth(static_cast<int>(param1));
}

bool QwtAbstractLegend_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = std::move(slot_handle);
	return true;
}

bool QwtAbstractLegend_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::hasHeightForWidth();
}

bool QwtAbstractLegend_override_virtual_paintEngine(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = std::move(slot_handle);
	return true;
}

QPaintEngine* QwtAbstractLegend_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::paintEngine();
}

bool QwtAbstractLegend_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = std::move(slot_handle);
	return true;
}

void QwtAbstractLegend_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::mousePressEvent(event);
}

bool QwtAbstractLegend_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = std::move(slot_handle);
	return true;
}

void QwtAbstractLegend_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::mouseReleaseEvent(event);
}

bool QwtAbstractLegend_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = std::move(slot_handle);
	return true;
}

void QwtAbstractLegend_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::mouseDoubleClickEvent(event);
}

bool QwtAbstractLegend_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = std::move(slot_handle);
	return true;
}

void QwtAbstractLegend_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::mouseMoveEvent(event);
}

bool QwtAbstractLegend_override_virtual_wheelEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = std::move(slot_handle);
	return true;
}

void QwtAbstractLegend_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::wheelEvent(event);
}

bool QwtAbstractLegend_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = std::move(slot_handle);
	return true;
}

void QwtAbstractLegend_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::keyPressEvent(event);
}

bool QwtAbstractLegend_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = std::move(slot_handle);
	return true;
}

void QwtAbstractLegend_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::keyReleaseEvent(event);
}

bool QwtAbstractLegend_override_virtual_focusInEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = std::move(slot_handle);
	return true;
}

void QwtAbstractLegend_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::focusInEvent(event);
}

bool QwtAbstractLegend_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = std::move(slot_handle);
	return true;
}

void QwtAbstractLegend_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::focusOutEvent(event);
}

bool QwtAbstractLegend_override_virtual_enterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = std::move(slot_handle);
	return true;
}

void QwtAbstractLegend_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::enterEvent(event);
}

bool QwtAbstractLegend_override_virtual_leaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = std::move(slot_handle);
	return true;
}

void QwtAbstractLegend_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::leaveEvent(event);
}

bool QwtAbstractLegend_override_virtual_moveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = std::move(slot_handle);
	return true;
}

void QwtAbstractLegend_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::moveEvent(event);
}

bool QwtAbstractLegend_override_virtual_resizeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = std::move(slot_handle);
	return true;
}

void QwtAbstractLegend_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::resizeEvent(event);
}

bool QwtAbstractLegend_override_virtual_closeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = std::move(slot_handle);
	return true;
}

void QwtAbstractLegend_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::closeEvent(event);
}

bool QwtAbstractLegend_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = std::move(slot_handle);
	return true;
}

void QwtAbstractLegend_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* event) {
	static_cast<MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::contextMenuEvent(event);
}

bool QwtAbstractLegend_override_virtual_tabletEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = std::move(slot_handle);
	return true;
}

void QwtAbstractLegend_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::tabletEvent(event);
}

bool QwtAbstractLegend_override_virtual_actionEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = std::move(slot_handle);
	return true;
}

void QwtAbstractLegend_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::actionEvent(event);
}

bool QwtAbstractLegend_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = std::move(slot_handle);
	return true;
}

void QwtAbstractLegend_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::dragEnterEvent(event);
}

bool QwtAbstractLegend_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = std::move(slot_handle);
	return true;
}

void QwtAbstractLegend_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::dragMoveEvent(event);
}

bool QwtAbstractLegend_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = std::move(slot_handle);
	return true;
}

void QwtAbstractLegend_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::dragLeaveEvent(event);
}

bool QwtAbstractLegend_override_virtual_dropEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = std::move(slot_handle);
	return true;
}

void QwtAbstractLegend_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::dropEvent(event);
}

bool QwtAbstractLegend_override_virtual_showEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = std::move(slot_handle);
	return true;
}

void QwtAbstractLegend_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::showEvent(event);
}

bool QwtAbstractLegend_override_virtual_hideEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = std::move(slot_handle);
	return true;
}

void QwtAbstractLegend_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::hideEvent(event);
}

bool QwtAbstractLegend_override_virtual_nativeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = std::move(slot_handle);
	return true;
}

bool QwtAbstractLegend_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QwtAbstractLegend_override_virtual_metric(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = std::move(slot_handle);
	return true;
}

int QwtAbstractLegend_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::metric(static_cast<MiqtVirtualQwtAbstractLegend::PaintDeviceMetric>(param1));
}

bool QwtAbstractLegend_override_virtual_initPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = std::move(slot_handle);
	return true;
}

void QwtAbstractLegend_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::initPainter(painter);
}

bool QwtAbstractLegend_override_virtual_redirected(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = std::move(slot_handle);
	return true;
}

QPaintDevice* QwtAbstractLegend_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::redirected(offset);
}

bool QwtAbstractLegend_override_virtual_sharedPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = std::move(slot_handle);
	return true;
}

QPainter* QwtAbstractLegend_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::sharedPainter();
}

bool QwtAbstractLegend_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = std::move(slot_handle);
	return true;
}

void QwtAbstractLegend_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::inputMethodEvent(param1);
}

bool QwtAbstractLegend_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	self_cast->owns_return__inputMethodQuery = false;
	return true;
}

bool QwtAbstractLegend_override_virtual_owned_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	self_cast->owns_return__inputMethodQuery = true;
	return true;
}

QVariant* QwtAbstractLegend_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QwtAbstractLegend_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = std::move(slot_handle);
	return true;
}

bool QwtAbstractLegend_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::focusNextPrevChild(next);
}

bool QwtAbstractLegend_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QwtAbstractLegend_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::eventFilter(watched, event);
}

bool QwtAbstractLegend_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QwtAbstractLegend_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::timerEvent(event);
}

bool QwtAbstractLegend_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QwtAbstractLegend_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::childEvent(event);
}

bool QwtAbstractLegend_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QwtAbstractLegend_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::customEvent(event);
}

bool QwtAbstractLegend_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QwtAbstractLegend_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::connectNotify(*signal);
}

bool QwtAbstractLegend_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtAbstractLegend> slot_handle(slot);
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QwtAbstractLegend_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtAbstractLegend*>(self)->QwtAbstractLegend::disconnectNotify(*signal);
}

void QwtAbstractLegend_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1) {
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->drawFrame(param1);
}

void QwtAbstractLegend_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option) {
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->initStyleOption(option);
}

void QwtAbstractLegend_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QwtAbstractLegend_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QwtAbstractLegend_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QwtAbstractLegend_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QwtAbstractLegend_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QwtAbstractLegend_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QwtAbstractLegend_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QwtAbstractLegend_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QwtAbstractLegend_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQwtAbstractLegend* self_cast = dynamic_cast<MiqtVirtualQwtAbstractLegend*>( (QwtAbstractLegend*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QwtAbstractLegend_delete(QwtAbstractLegend* self) {
	delete self;
}

