#include <memory>
#include <utility>
#include <QAction>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QCompleter>
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
#include <QLineEdit>
#include <QMargins>
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
#include <QRect>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QValidator>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qlineedit.h>
#include "gen_qlineedit.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QLineEdit(intptr_t);
void miqt_exec_callback_QLineEdit_textChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QLineEdit_textEdited(intptr_t, struct miqt_string);
void miqt_exec_callback_QLineEdit_cursorPositionChanged(intptr_t, int, int);
void miqt_exec_callback_QLineEdit_returnPressed(intptr_t);
void miqt_exec_callback_QLineEdit_editingFinished(intptr_t);
void miqt_exec_callback_QLineEdit_selectionChanged(intptr_t);
void miqt_exec_callback_QLineEdit_inputRejected(intptr_t);
QSize* miqt_exec_callback_QLineEdit_sizeHint(const QLineEdit*, intptr_t);
QSize* miqt_exec_callback_QLineEdit_minimumSizeHint(const QLineEdit*, intptr_t);
void miqt_exec_callback_QLineEdit_mousePressEvent(QLineEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QLineEdit_mouseMoveEvent(QLineEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QLineEdit_mouseReleaseEvent(QLineEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QLineEdit_mouseDoubleClickEvent(QLineEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QLineEdit_keyPressEvent(QLineEdit*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QLineEdit_keyReleaseEvent(QLineEdit*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QLineEdit_focusInEvent(QLineEdit*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QLineEdit_focusOutEvent(QLineEdit*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QLineEdit_paintEvent(QLineEdit*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QLineEdit_dragEnterEvent(QLineEdit*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QLineEdit_dragMoveEvent(QLineEdit*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QLineEdit_dragLeaveEvent(QLineEdit*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QLineEdit_dropEvent(QLineEdit*, intptr_t, QDropEvent*);
void miqt_exec_callback_QLineEdit_changeEvent(QLineEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QLineEdit_contextMenuEvent(QLineEdit*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QLineEdit_inputMethodEvent(QLineEdit*, intptr_t, QInputMethodEvent*);
void miqt_exec_callback_QLineEdit_initStyleOption(const QLineEdit*, intptr_t, QStyleOptionFrame*);
QVariant* miqt_exec_callback_QLineEdit_inputMethodQuery(const QLineEdit*, intptr_t, int);
void miqt_exec_callback_QLineEdit_timerEvent(QLineEdit*, intptr_t, QTimerEvent*);
bool miqt_exec_callback_QLineEdit_event(QLineEdit*, intptr_t, QEvent*);
int miqt_exec_callback_QLineEdit_devType(const QLineEdit*, intptr_t);
void miqt_exec_callback_QLineEdit_setVisible(QLineEdit*, intptr_t, bool);
int miqt_exec_callback_QLineEdit_heightForWidth(const QLineEdit*, intptr_t, int);
bool miqt_exec_callback_QLineEdit_hasHeightForWidth(const QLineEdit*, intptr_t);
QPaintEngine* miqt_exec_callback_QLineEdit_paintEngine(const QLineEdit*, intptr_t);
void miqt_exec_callback_QLineEdit_wheelEvent(QLineEdit*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QLineEdit_enterEvent(QLineEdit*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QLineEdit_leaveEvent(QLineEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QLineEdit_moveEvent(QLineEdit*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QLineEdit_resizeEvent(QLineEdit*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QLineEdit_closeEvent(QLineEdit*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QLineEdit_tabletEvent(QLineEdit*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QLineEdit_actionEvent(QLineEdit*, intptr_t, QActionEvent*);
void miqt_exec_callback_QLineEdit_showEvent(QLineEdit*, intptr_t, QShowEvent*);
void miqt_exec_callback_QLineEdit_hideEvent(QLineEdit*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QLineEdit_nativeEvent(QLineEdit*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QLineEdit_metric(const QLineEdit*, intptr_t, int);
void miqt_exec_callback_QLineEdit_initPainter(const QLineEdit*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QLineEdit_redirected(const QLineEdit*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QLineEdit_sharedPainter(const QLineEdit*, intptr_t);
bool miqt_exec_callback_QLineEdit_focusNextPrevChild(QLineEdit*, intptr_t, bool);
bool miqt_exec_callback_QLineEdit_eventFilter(QLineEdit*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QLineEdit_childEvent(QLineEdit*, intptr_t, QChildEvent*);
void miqt_exec_callback_QLineEdit_customEvent(QLineEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QLineEdit_connectNotify(QLineEdit*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QLineEdit_disconnectNotify(QLineEdit*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQLineEdit final : public QLineEdit {
public:

	MiqtVirtualQLineEdit(QWidget* parent): QLineEdit(parent) {}
	MiqtVirtualQLineEdit(): QLineEdit() {}
	MiqtVirtualQLineEdit(const QString& param1): QLineEdit(param1) {}
	MiqtVirtualQLineEdit(const QString& param1, QWidget* parent): QLineEdit(param1, parent) {}

	virtual ~MiqtVirtualQLineEdit() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__sizeHint;
	bool owns_return__sizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (!handle__sizeHint) {
			return QLineEdit::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QLineEdit_sizeHint(this, handle__sizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__sizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QLineEdit_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__minimumSizeHint;
	bool owns_return__minimumSizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (!handle__minimumSizeHint) {
			return QLineEdit::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QLineEdit_minimumSizeHint(this, handle__minimumSizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__minimumSizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QLineEdit_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__mousePressEvent;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (!handle__mousePressEvent) {
			QLineEdit::mousePressEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QLineEdit_mousePressEvent(this, handle__mousePressEvent.value(), sigval1);

	}

	friend void QLineEdit_virtualbase_mousePressEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__mouseMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (!handle__mouseMoveEvent) {
			QLineEdit::mouseMoveEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QLineEdit_mouseMoveEvent(this, handle__mouseMoveEvent.value(), sigval1);

	}

	friend void QLineEdit_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__mouseReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (!handle__mouseReleaseEvent) {
			QLineEdit::mouseReleaseEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QLineEdit_mouseReleaseEvent(this, handle__mouseReleaseEvent.value(), sigval1);

	}

	friend void QLineEdit_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__mouseDoubleClickEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* param1) override {
		if (!handle__mouseDoubleClickEvent) {
			QLineEdit::mouseDoubleClickEvent(param1);
			return;
		}

		QMouseEvent* sigval1 = param1;
		miqt_exec_callback_QLineEdit_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent.value(), sigval1);

	}

	friend void QLineEdit_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__keyPressEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* param1) override {
		if (!handle__keyPressEvent) {
			QLineEdit::keyPressEvent(param1);
			return;
		}

		QKeyEvent* sigval1 = param1;
		miqt_exec_callback_QLineEdit_keyPressEvent(this, handle__keyPressEvent.value(), sigval1);

	}

	friend void QLineEdit_virtualbase_keyPressEvent(void* self, QKeyEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__keyReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* param1) override {
		if (!handle__keyReleaseEvent) {
			QLineEdit::keyReleaseEvent(param1);
			return;
		}

		QKeyEvent* sigval1 = param1;
		miqt_exec_callback_QLineEdit_keyReleaseEvent(this, handle__keyReleaseEvent.value(), sigval1);

	}

	friend void QLineEdit_virtualbase_keyReleaseEvent(void* self, QKeyEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__focusInEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* param1) override {
		if (!handle__focusInEvent) {
			QLineEdit::focusInEvent(param1);
			return;
		}

		QFocusEvent* sigval1 = param1;
		miqt_exec_callback_QLineEdit_focusInEvent(this, handle__focusInEvent.value(), sigval1);

	}

	friend void QLineEdit_virtualbase_focusInEvent(void* self, QFocusEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__focusOutEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* param1) override {
		if (!handle__focusOutEvent) {
			QLineEdit::focusOutEvent(param1);
			return;
		}

		QFocusEvent* sigval1 = param1;
		miqt_exec_callback_QLineEdit_focusOutEvent(this, handle__focusOutEvent.value(), sigval1);

	}

	friend void QLineEdit_virtualbase_focusOutEvent(void* self, QFocusEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__paintEvent;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (!handle__paintEvent) {
			QLineEdit::paintEvent(param1);
			return;
		}

		QPaintEvent* sigval1 = param1;
		miqt_exec_callback_QLineEdit_paintEvent(this, handle__paintEvent.value(), sigval1);

	}

	friend void QLineEdit_virtualbase_paintEvent(void* self, QPaintEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__dragEnterEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* param1) override {
		if (!handle__dragEnterEvent) {
			QLineEdit::dragEnterEvent(param1);
			return;
		}

		QDragEnterEvent* sigval1 = param1;
		miqt_exec_callback_QLineEdit_dragEnterEvent(this, handle__dragEnterEvent.value(), sigval1);

	}

	friend void QLineEdit_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__dragMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* e) override {
		if (!handle__dragMoveEvent) {
			QLineEdit::dragMoveEvent(e);
			return;
		}

		QDragMoveEvent* sigval1 = e;
		miqt_exec_callback_QLineEdit_dragMoveEvent(this, handle__dragMoveEvent.value(), sigval1);

	}

	friend void QLineEdit_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__dragLeaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
		if (!handle__dragLeaveEvent) {
			QLineEdit::dragLeaveEvent(e);
			return;
		}

		QDragLeaveEvent* sigval1 = e;
		miqt_exec_callback_QLineEdit_dragLeaveEvent(this, handle__dragLeaveEvent.value(), sigval1);

	}

	friend void QLineEdit_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__dropEvent;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* param1) override {
		if (!handle__dropEvent) {
			QLineEdit::dropEvent(param1);
			return;
		}

		QDropEvent* sigval1 = param1;
		miqt_exec_callback_QLineEdit_dropEvent(this, handle__dropEvent.value(), sigval1);

	}

	friend void QLineEdit_virtualbase_dropEvent(void* self, QDropEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__changeEvent;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (!handle__changeEvent) {
			QLineEdit::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QLineEdit_changeEvent(this, handle__changeEvent.value(), sigval1);

	}

	friend void QLineEdit_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__contextMenuEvent;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (!handle__contextMenuEvent) {
			QLineEdit::contextMenuEvent(param1);
			return;
		}

		QContextMenuEvent* sigval1 = param1;
		miqt_exec_callback_QLineEdit_contextMenuEvent(this, handle__contextMenuEvent.value(), sigval1);

	}

	friend void QLineEdit_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__inputMethodEvent;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (!handle__inputMethodEvent) {
			QLineEdit::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QLineEdit_inputMethodEvent(this, handle__inputMethodEvent.value(), sigval1);

	}

	friend void QLineEdit_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__initStyleOption;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionFrame* option) const override {
		if (!handle__initStyleOption) {
			QLineEdit::initStyleOption(option);
			return;
		}

		QStyleOptionFrame* sigval1 = option;
		miqt_exec_callback_QLineEdit_initStyleOption(this, handle__initStyleOption.value(), sigval1);

	}

	friend void QLineEdit_virtualbase_initStyleOption(const void* self, QStyleOptionFrame* option);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__inputMethodQuery;
	bool owns_return__inputMethodQuery = false;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery param1) const override {
		if (!handle__inputMethodQuery) {
			return QLineEdit::inputMethodQuery(param1);
		}

		Qt::InputMethodQuery param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		QVariant* callback_return_value = miqt_exec_callback_QLineEdit_inputMethodQuery(this, handle__inputMethodQuery.value(), sigval1);
		std::unique_ptr<QVariant> callback_return_value_owner;
		if (owns_return__inputMethodQuery) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QVariant* QLineEdit_virtualbase_inputMethodQuery(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* param1) override {
		if (!handle__timerEvent) {
			QLineEdit::timerEvent(param1);
			return;
		}

		QTimerEvent* sigval1 = param1;
		miqt_exec_callback_QLineEdit_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QLineEdit_virtualbase_timerEvent(void* self, QTimerEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* param1) override {
		if (!handle__event) {
			return QLineEdit::event(param1);
		}

		QEvent* sigval1 = param1;
		bool callback_return_value = miqt_exec_callback_QLineEdit_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QLineEdit_virtualbase_event(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__devType;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (!handle__devType) {
			return QLineEdit::devType();
		}

		int callback_return_value = miqt_exec_callback_QLineEdit_devType(this, handle__devType.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QLineEdit_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__setVisible;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (!handle__setVisible) {
			QLineEdit::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QLineEdit_setVisible(this, handle__setVisible.value(), sigval1);

	}

	friend void QLineEdit_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__heightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (!handle__heightForWidth) {
			return QLineEdit::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QLineEdit_heightForWidth(this, handle__heightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QLineEdit_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__hasHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (!handle__hasHeightForWidth) {
			return QLineEdit::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QLineEdit_hasHeightForWidth(this, handle__hasHeightForWidth.value());
		return callback_return_value;
	}

	friend bool QLineEdit_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__paintEngine;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (!handle__paintEngine) {
			return QLineEdit::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QLineEdit_paintEngine(this, handle__paintEngine.value());
		return callback_return_value;
	}

	friend QPaintEngine* QLineEdit_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__wheelEvent;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* event) override {
		if (!handle__wheelEvent) {
			QLineEdit::wheelEvent(event);
			return;
		}

		QWheelEvent* sigval1 = event;
		miqt_exec_callback_QLineEdit_wheelEvent(this, handle__wheelEvent.value(), sigval1);

	}

	friend void QLineEdit_virtualbase_wheelEvent(void* self, QWheelEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__enterEvent;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (!handle__enterEvent) {
			QLineEdit::enterEvent(event);
			return;
		}

		QEnterEvent* sigval1 = event;
		miqt_exec_callback_QLineEdit_enterEvent(this, handle__enterEvent.value(), sigval1);

	}

	friend void QLineEdit_virtualbase_enterEvent(void* self, QEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__leaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (!handle__leaveEvent) {
			QLineEdit::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QLineEdit_leaveEvent(this, handle__leaveEvent.value(), sigval1);

	}

	friend void QLineEdit_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__moveEvent;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (!handle__moveEvent) {
			QLineEdit::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QLineEdit_moveEvent(this, handle__moveEvent.value(), sigval1);

	}

	friend void QLineEdit_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__resizeEvent;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (!handle__resizeEvent) {
			QLineEdit::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QLineEdit_resizeEvent(this, handle__resizeEvent.value(), sigval1);

	}

	friend void QLineEdit_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__closeEvent;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (!handle__closeEvent) {
			QLineEdit::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QLineEdit_closeEvent(this, handle__closeEvent.value(), sigval1);

	}

	friend void QLineEdit_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__tabletEvent;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (!handle__tabletEvent) {
			QLineEdit::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QLineEdit_tabletEvent(this, handle__tabletEvent.value(), sigval1);

	}

	friend void QLineEdit_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__actionEvent;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (!handle__actionEvent) {
			QLineEdit::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QLineEdit_actionEvent(this, handle__actionEvent.value(), sigval1);

	}

	friend void QLineEdit_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__showEvent;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (!handle__showEvent) {
			QLineEdit::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QLineEdit_showEvent(this, handle__showEvent.value(), sigval1);

	}

	friend void QLineEdit_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__hideEvent;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (!handle__hideEvent) {
			QLineEdit::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QLineEdit_hideEvent(this, handle__hideEvent.value(), sigval1);

	}

	friend void QLineEdit_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__nativeEvent;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (!handle__nativeEvent) {
			return QLineEdit::nativeEvent(eventType, message, result);
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
		bool callback_return_value = miqt_exec_callback_QLineEdit_nativeEvent(this, handle__nativeEvent.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QLineEdit_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__metric;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (!handle__metric) {
			return QLineEdit::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QLineEdit_metric(this, handle__metric.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QLineEdit_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__initPainter;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (!handle__initPainter) {
			QLineEdit::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QLineEdit_initPainter(this, handle__initPainter.value(), sigval1);

	}

	friend void QLineEdit_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__redirected;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (!handle__redirected) {
			return QLineEdit::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QLineEdit_redirected(this, handle__redirected.value(), sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QLineEdit_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__sharedPainter;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (!handle__sharedPainter) {
			return QLineEdit::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QLineEdit_sharedPainter(this, handle__sharedPainter.value());
		return callback_return_value;
	}

	friend QPainter* QLineEdit_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__focusNextPrevChild;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (!handle__focusNextPrevChild) {
			return QLineEdit::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QLineEdit_focusNextPrevChild(this, handle__focusNextPrevChild.value(), sigval1);
		return callback_return_value;
	}

	friend bool QLineEdit_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QLineEdit::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QLineEdit_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QLineEdit_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QLineEdit::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QLineEdit_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QLineEdit_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QLineEdit::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QLineEdit_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QLineEdit_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QLineEdit::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QLineEdit_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QLineEdit_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QLineEdit::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QLineEdit_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QLineEdit_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QRect* QLineEdit_protectedbase_cursorRect(bool* _dynamic_cast_ok, const void* self);
	friend void QLineEdit_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QLineEdit_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QLineEdit_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QLineEdit_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QLineEdit_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QLineEdit_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QLineEdit_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QLineEdit_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QLineEdit_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QLineEdit* QLineEdit_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQLineEdit(parent);
}

QLineEdit* QLineEdit_new2() {
	return new (std::nothrow) MiqtVirtualQLineEdit();
}

QLineEdit* QLineEdit_new3(struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	return new (std::nothrow) MiqtVirtualQLineEdit(param1_QString);
}

QLineEdit* QLineEdit_new4(struct miqt_string param1, QWidget* parent) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	return new (std::nothrow) MiqtVirtualQLineEdit(param1_QString, parent);
}

void QLineEdit_virtbase(QLineEdit* src, QWidget** outptr_QWidget) {
	*outptr_QWidget = static_cast<QWidget*>(src);
}

QMetaObject* QLineEdit_metaObject(const QLineEdit* self) {
	return (QMetaObject*) self->metaObject();
}

void* QLineEdit_metacast(QLineEdit* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QLineEdit_tr(const char* s) {
	QString _ret = QLineEdit::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLineEdit_text(const QLineEdit* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLineEdit_displayText(const QLineEdit* self) {
	QString _ret = self->displayText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLineEdit_placeholderText(const QLineEdit* self) {
	QString _ret = self->placeholderText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QLineEdit_setPlaceholderText(QLineEdit* self, struct miqt_string placeholderText) {
	QString placeholderText_QString = QString::fromUtf8(placeholderText.data, placeholderText.len);
	self->setPlaceholderText(placeholderText_QString);
}

int QLineEdit_maxLength(const QLineEdit* self) {
	return self->maxLength();
}

void QLineEdit_setMaxLength(QLineEdit* self, int maxLength) {
	self->setMaxLength(static_cast<int>(maxLength));
}

void QLineEdit_setFrame(QLineEdit* self, bool frame) {
	self->setFrame(frame);
}

bool QLineEdit_hasFrame(const QLineEdit* self) {
	return self->hasFrame();
}

void QLineEdit_setClearButtonEnabled(QLineEdit* self, bool enable) {
	self->setClearButtonEnabled(enable);
}

bool QLineEdit_isClearButtonEnabled(const QLineEdit* self) {
	return self->isClearButtonEnabled();
}

int QLineEdit_echoMode(const QLineEdit* self) {
	QLineEdit::EchoMode _ret = self->echoMode();
	return static_cast<int>(_ret);
}

void QLineEdit_setEchoMode(QLineEdit* self, int echoMode) {
	self->setEchoMode(static_cast<QLineEdit::EchoMode>(echoMode));
}

bool QLineEdit_isReadOnly(const QLineEdit* self) {
	return self->isReadOnly();
}

void QLineEdit_setReadOnly(QLineEdit* self, bool readOnly) {
	self->setReadOnly(readOnly);
}

void QLineEdit_setValidator(QLineEdit* self, QValidator* validator) {
	self->setValidator(validator);
}

QValidator* QLineEdit_validator(const QLineEdit* self) {
	return (QValidator*) self->validator();
}

void QLineEdit_setCompleter(QLineEdit* self, QCompleter* completer) {
	self->setCompleter(completer);
}

QCompleter* QLineEdit_completer(const QLineEdit* self) {
	return self->completer();
}

QSize* QLineEdit_sizeHint(const QLineEdit* self) {
	return new QSize(self->sizeHint());
}

QSize* QLineEdit_minimumSizeHint(const QLineEdit* self) {
	return new QSize(self->minimumSizeHint());
}

int QLineEdit_cursorPosition(const QLineEdit* self) {
	return self->cursorPosition();
}

void QLineEdit_setCursorPosition(QLineEdit* self, int cursorPosition) {
	self->setCursorPosition(static_cast<int>(cursorPosition));
}

int QLineEdit_cursorPositionAt(QLineEdit* self, QPoint* pos) {
	return self->cursorPositionAt(*pos);
}

void QLineEdit_setAlignment(QLineEdit* self, int flag) {
	self->setAlignment(static_cast<Qt::Alignment>(flag));
}

int QLineEdit_alignment(const QLineEdit* self) {
	Qt::Alignment _ret = self->alignment();
	return static_cast<int>(_ret);
}

void QLineEdit_cursorForward(QLineEdit* self, bool mark) {
	self->cursorForward(mark);
}

void QLineEdit_cursorBackward(QLineEdit* self, bool mark) {
	self->cursorBackward(mark);
}

void QLineEdit_cursorWordForward(QLineEdit* self, bool mark) {
	self->cursorWordForward(mark);
}

void QLineEdit_cursorWordBackward(QLineEdit* self, bool mark) {
	self->cursorWordBackward(mark);
}

void QLineEdit_backspace(QLineEdit* self) {
	self->backspace();
}

void QLineEdit_del(QLineEdit* self) {
	self->del();
}

void QLineEdit_home(QLineEdit* self, bool mark) {
	self->home(mark);
}

void QLineEdit_end(QLineEdit* self, bool mark) {
	self->end(mark);
}

bool QLineEdit_isModified(const QLineEdit* self) {
	return self->isModified();
}

void QLineEdit_setModified(QLineEdit* self, bool modified) {
	self->setModified(modified);
}

void QLineEdit_setSelection(QLineEdit* self, int param1, int param2) {
	self->setSelection(static_cast<int>(param1), static_cast<int>(param2));
}

bool QLineEdit_hasSelectedText(const QLineEdit* self) {
	return self->hasSelectedText();
}

struct miqt_string QLineEdit_selectedText(const QLineEdit* self) {
	QString _ret = self->selectedText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QLineEdit_selectionStart(const QLineEdit* self) {
	return self->selectionStart();
}

int QLineEdit_selectionEnd(const QLineEdit* self) {
	return self->selectionEnd();
}

int QLineEdit_selectionLength(const QLineEdit* self) {
	return self->selectionLength();
}

bool QLineEdit_isUndoAvailable(const QLineEdit* self) {
	return self->isUndoAvailable();
}

bool QLineEdit_isRedoAvailable(const QLineEdit* self) {
	return self->isRedoAvailable();
}

void QLineEdit_setDragEnabled(QLineEdit* self, bool b) {
	self->setDragEnabled(b);
}

bool QLineEdit_dragEnabled(const QLineEdit* self) {
	return self->dragEnabled();
}

void QLineEdit_setCursorMoveStyle(QLineEdit* self, int style) {
	self->setCursorMoveStyle(static_cast<Qt::CursorMoveStyle>(style));
}

int QLineEdit_cursorMoveStyle(const QLineEdit* self) {
	Qt::CursorMoveStyle _ret = self->cursorMoveStyle();
	return static_cast<int>(_ret);
}

struct miqt_string QLineEdit_inputMask(const QLineEdit* self) {
	QString _ret = self->inputMask();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QLineEdit_setInputMask(QLineEdit* self, struct miqt_string inputMask) {
	QString inputMask_QString = QString::fromUtf8(inputMask.data, inputMask.len);
	self->setInputMask(inputMask_QString);
}

bool QLineEdit_hasAcceptableInput(const QLineEdit* self) {
	return self->hasAcceptableInput();
}

void QLineEdit_setTextMargins(QLineEdit* self, int left, int top, int right, int bottom) {
	self->setTextMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
}

void QLineEdit_setTextMarginsWithMargins(QLineEdit* self, QMargins* margins) {
	self->setTextMargins(*margins);
}

QMargins* QLineEdit_textMargins(const QLineEdit* self) {
	return new QMargins(self->textMargins());
}

void QLineEdit_addAction(QLineEdit* self, QAction* action, int position) {
	self->addAction(action, static_cast<QLineEdit::ActionPosition>(position));
}

QAction* QLineEdit_addAction2(QLineEdit* self, QIcon* icon, int position) {
	return self->addAction(*icon, static_cast<QLineEdit::ActionPosition>(position));
}

void QLineEdit_setText(QLineEdit* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(text_QString);
}

void QLineEdit_clear(QLineEdit* self) {
	self->clear();
}

void QLineEdit_selectAll(QLineEdit* self) {
	self->selectAll();
}

void QLineEdit_undo(QLineEdit* self) {
	self->undo();
}

void QLineEdit_redo(QLineEdit* self) {
	self->redo();
}

void QLineEdit_cut(QLineEdit* self) {
	self->cut();
}

void QLineEdit_copy(const QLineEdit* self) {
	self->copy();
}

void QLineEdit_paste(QLineEdit* self) {
	self->paste();
}

void QLineEdit_deselect(QLineEdit* self) {
	self->deselect();
}

void QLineEdit_insert(QLineEdit* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->insert(param1_QString);
}

QMenu* QLineEdit_createStandardContextMenu(QLineEdit* self) {
	return self->createStandardContextMenu();
}

void QLineEdit_textChanged(QLineEdit* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->textChanged(param1_QString);
}

void* QLineEdit_connect_textChanged(QLineEdit* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit>>(slot);
	return new QMetaObject::Connection(QLineEdit::connect(self, static_cast<void (QLineEdit::*)(const QString&)>(&QLineEdit::textChanged), self, [slot_handle](const QString& param1) {
		intptr_t slot = slot_handle->value();
		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		miqt_exec_callback_QLineEdit_textChanged(slot, sigval1);
	}));
}

void QLineEdit_textEdited(QLineEdit* self, struct miqt_string param1) {
	QString param1_QString = QString::fromUtf8(param1.data, param1.len);
	self->textEdited(param1_QString);
}

void* QLineEdit_connect_textEdited(QLineEdit* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit>>(slot);
	return new QMetaObject::Connection(QLineEdit::connect(self, static_cast<void (QLineEdit::*)(const QString&)>(&QLineEdit::textEdited), self, [slot_handle](const QString& param1) {
		intptr_t slot = slot_handle->value();
		const QString param1_ret = param1;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray param1_b = param1_ret.toUtf8();
		struct miqt_string param1_ms;
		param1_ms.len = param1_b.length();
		param1_ms.data = static_cast<char*>(malloc(param1_ms.len));
		memcpy(param1_ms.data, param1_b.data(), param1_ms.len);
		struct miqt_string sigval1 = param1_ms;
		miqt_exec_callback_QLineEdit_textEdited(slot, sigval1);
	}));
}

void QLineEdit_cursorPositionChanged(QLineEdit* self, int param1, int param2) {
	self->cursorPositionChanged(static_cast<int>(param1), static_cast<int>(param2));
}

void* QLineEdit_connect_cursorPositionChanged(QLineEdit* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit>>(slot);
	return new QMetaObject::Connection(QLineEdit::connect(self, static_cast<void (QLineEdit::*)(int, int)>(&QLineEdit::cursorPositionChanged), self, [slot_handle](int param1, int param2) {
		intptr_t slot = slot_handle->value();
		int sigval1 = param1;
		int sigval2 = param2;
		miqt_exec_callback_QLineEdit_cursorPositionChanged(slot, sigval1, sigval2);
	}));
}

void QLineEdit_returnPressed(QLineEdit* self) {
	self->returnPressed();
}

void* QLineEdit_connect_returnPressed(QLineEdit* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit>>(slot);
	return new QMetaObject::Connection(QLineEdit::connect(self, static_cast<void (QLineEdit::*)()>(&QLineEdit::returnPressed), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QLineEdit_returnPressed(slot);
	}));
}

void QLineEdit_editingFinished(QLineEdit* self) {
	self->editingFinished();
}

void* QLineEdit_connect_editingFinished(QLineEdit* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit>>(slot);
	return new QMetaObject::Connection(QLineEdit::connect(self, static_cast<void (QLineEdit::*)()>(&QLineEdit::editingFinished), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QLineEdit_editingFinished(slot);
	}));
}

void QLineEdit_selectionChanged(QLineEdit* self) {
	self->selectionChanged();
}

void* QLineEdit_connect_selectionChanged(QLineEdit* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit>>(slot);
	return new QMetaObject::Connection(QLineEdit::connect(self, static_cast<void (QLineEdit::*)()>(&QLineEdit::selectionChanged), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QLineEdit_selectionChanged(slot);
	}));
}

void QLineEdit_inputRejected(QLineEdit* self) {
	self->inputRejected();
}

void* QLineEdit_connect_inputRejected(QLineEdit* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit>>(slot);
	return new QMetaObject::Connection(QLineEdit::connect(self, static_cast<void (QLineEdit::*)()>(&QLineEdit::inputRejected), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QLineEdit_inputRejected(slot);
	}));
}

QVariant* QLineEdit_inputMethodQuery(const QLineEdit* self, int param1) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

QVariant* QLineEdit_inputMethodQuery2(const QLineEdit* self, int property, QVariant* argument) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property), *argument));
}

void QLineEdit_timerEvent(QLineEdit* self, QTimerEvent* param1) {
	self->timerEvent(param1);
}

bool QLineEdit_event(QLineEdit* self, QEvent* param1) {
	return self->event(param1);
}

struct miqt_string QLineEdit_tr2(const char* s, const char* c) {
	QString _ret = QLineEdit::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QLineEdit_tr3(const char* s, const char* c, int n) {
	QString _ret = QLineEdit::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QLineEdit_cursorForward2(QLineEdit* self, bool mark, int steps) {
	self->cursorForward(mark, static_cast<int>(steps));
}

void QLineEdit_cursorBackward2(QLineEdit* self, bool mark, int steps) {
	self->cursorBackward(mark, static_cast<int>(steps));
}

bool QLineEdit_override_virtual_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = false;
	return true;
}

bool QLineEdit_override_virtual_owned_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = true;
	return true;
}

QSize* QLineEdit_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQLineEdit*>(self)->QLineEdit::sizeHint());
}

bool QLineEdit_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	self_cast->owns_return__minimumSizeHint = false;
	return true;
}

bool QLineEdit_override_virtual_owned_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	self_cast->owns_return__minimumSizeHint = true;
	return true;
}

QSize* QLineEdit_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQLineEdit*>(self)->QLineEdit::minimumSizeHint());
}

bool QLineEdit_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = std::move(slot_handle);
	return true;
}

void QLineEdit_virtualbase_mousePressEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQLineEdit*>(self)->QLineEdit::mousePressEvent(param1);
}

bool QLineEdit_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = std::move(slot_handle);
	return true;
}

void QLineEdit_virtualbase_mouseMoveEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQLineEdit*>(self)->QLineEdit::mouseMoveEvent(param1);
}

bool QLineEdit_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = std::move(slot_handle);
	return true;
}

void QLineEdit_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQLineEdit*>(self)->QLineEdit::mouseReleaseEvent(param1);
}

bool QLineEdit_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = std::move(slot_handle);
	return true;
}

void QLineEdit_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* param1) {
	static_cast<MiqtVirtualQLineEdit*>(self)->QLineEdit::mouseDoubleClickEvent(param1);
}

bool QLineEdit_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = std::move(slot_handle);
	return true;
}

void QLineEdit_virtualbase_keyPressEvent(void* self, QKeyEvent* param1) {
	static_cast<MiqtVirtualQLineEdit*>(self)->QLineEdit::keyPressEvent(param1);
}

bool QLineEdit_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = std::move(slot_handle);
	return true;
}

void QLineEdit_virtualbase_keyReleaseEvent(void* self, QKeyEvent* param1) {
	static_cast<MiqtVirtualQLineEdit*>(self)->QLineEdit::keyReleaseEvent(param1);
}

bool QLineEdit_override_virtual_focusInEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = std::move(slot_handle);
	return true;
}

void QLineEdit_virtualbase_focusInEvent(void* self, QFocusEvent* param1) {
	static_cast<MiqtVirtualQLineEdit*>(self)->QLineEdit::focusInEvent(param1);
}

bool QLineEdit_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = std::move(slot_handle);
	return true;
}

void QLineEdit_virtualbase_focusOutEvent(void* self, QFocusEvent* param1) {
	static_cast<MiqtVirtualQLineEdit*>(self)->QLineEdit::focusOutEvent(param1);
}

bool QLineEdit_override_virtual_paintEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = std::move(slot_handle);
	return true;
}

void QLineEdit_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	static_cast<MiqtVirtualQLineEdit*>(self)->QLineEdit::paintEvent(param1);
}

bool QLineEdit_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = std::move(slot_handle);
	return true;
}

void QLineEdit_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* param1) {
	static_cast<MiqtVirtualQLineEdit*>(self)->QLineEdit::dragEnterEvent(param1);
}

bool QLineEdit_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = std::move(slot_handle);
	return true;
}

void QLineEdit_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* e) {
	static_cast<MiqtVirtualQLineEdit*>(self)->QLineEdit::dragMoveEvent(e);
}

bool QLineEdit_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = std::move(slot_handle);
	return true;
}

void QLineEdit_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* e) {
	static_cast<MiqtVirtualQLineEdit*>(self)->QLineEdit::dragLeaveEvent(e);
}

bool QLineEdit_override_virtual_dropEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = std::move(slot_handle);
	return true;
}

void QLineEdit_virtualbase_dropEvent(void* self, QDropEvent* param1) {
	static_cast<MiqtVirtualQLineEdit*>(self)->QLineEdit::dropEvent(param1);
}

bool QLineEdit_override_virtual_changeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = std::move(slot_handle);
	return true;
}

void QLineEdit_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQLineEdit*>(self)->QLineEdit::changeEvent(param1);
}

bool QLineEdit_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = std::move(slot_handle);
	return true;
}

void QLineEdit_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1) {
	static_cast<MiqtVirtualQLineEdit*>(self)->QLineEdit::contextMenuEvent(param1);
}

bool QLineEdit_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = std::move(slot_handle);
	return true;
}

void QLineEdit_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQLineEdit*>(self)->QLineEdit::inputMethodEvent(param1);
}

bool QLineEdit_override_virtual_initStyleOption(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initStyleOption = std::move(slot_handle);
	return true;
}

void QLineEdit_virtualbase_initStyleOption(const void* self, QStyleOptionFrame* option) {
	static_cast<const MiqtVirtualQLineEdit*>(self)->QLineEdit::initStyleOption(option);
}

bool QLineEdit_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	self_cast->owns_return__inputMethodQuery = false;
	return true;
}

bool QLineEdit_override_virtual_owned_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	self_cast->owns_return__inputMethodQuery = true;
	return true;
}

QVariant* QLineEdit_virtualbase_inputMethodQuery(const void* self, int param1) {
	return new QVariant(static_cast<const MiqtVirtualQLineEdit*>(self)->QLineEdit::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

bool QLineEdit_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QLineEdit_virtualbase_timerEvent(void* self, QTimerEvent* param1) {
	static_cast<MiqtVirtualQLineEdit*>(self)->QLineEdit::timerEvent(param1);
}

bool QLineEdit_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QLineEdit_virtualbase_event(void* self, QEvent* param1) {
	return static_cast<MiqtVirtualQLineEdit*>(self)->QLineEdit::event(param1);
}

bool QLineEdit_override_virtual_devType(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = std::move(slot_handle);
	return true;
}

int QLineEdit_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQLineEdit*>(self)->QLineEdit::devType();
}

bool QLineEdit_override_virtual_setVisible(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = std::move(slot_handle);
	return true;
}

void QLineEdit_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQLineEdit*>(self)->QLineEdit::setVisible(visible);
}

bool QLineEdit_override_virtual_heightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = std::move(slot_handle);
	return true;
}

int QLineEdit_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQLineEdit*>(self)->QLineEdit::heightForWidth(static_cast<int>(param1));
}

bool QLineEdit_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = std::move(slot_handle);
	return true;
}

bool QLineEdit_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQLineEdit*>(self)->QLineEdit::hasHeightForWidth();
}

bool QLineEdit_override_virtual_paintEngine(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = std::move(slot_handle);
	return true;
}

QPaintEngine* QLineEdit_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQLineEdit*>(self)->QLineEdit::paintEngine();
}

bool QLineEdit_override_virtual_wheelEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = std::move(slot_handle);
	return true;
}

void QLineEdit_virtualbase_wheelEvent(void* self, QWheelEvent* event) {
	static_cast<MiqtVirtualQLineEdit*>(self)->QLineEdit::wheelEvent(event);
}

bool QLineEdit_override_virtual_enterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = std::move(slot_handle);
	return true;
}

void QLineEdit_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	static_cast<MiqtVirtualQLineEdit*>(self)->QLineEdit::enterEvent(event);
}

bool QLineEdit_override_virtual_leaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = std::move(slot_handle);
	return true;
}

void QLineEdit_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQLineEdit*>(self)->QLineEdit::leaveEvent(event);
}

bool QLineEdit_override_virtual_moveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = std::move(slot_handle);
	return true;
}

void QLineEdit_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQLineEdit*>(self)->QLineEdit::moveEvent(event);
}

bool QLineEdit_override_virtual_resizeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = std::move(slot_handle);
	return true;
}

void QLineEdit_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQLineEdit*>(self)->QLineEdit::resizeEvent(event);
}

bool QLineEdit_override_virtual_closeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = std::move(slot_handle);
	return true;
}

void QLineEdit_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQLineEdit*>(self)->QLineEdit::closeEvent(event);
}

bool QLineEdit_override_virtual_tabletEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = std::move(slot_handle);
	return true;
}

void QLineEdit_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQLineEdit*>(self)->QLineEdit::tabletEvent(event);
}

bool QLineEdit_override_virtual_actionEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = std::move(slot_handle);
	return true;
}

void QLineEdit_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQLineEdit*>(self)->QLineEdit::actionEvent(event);
}

bool QLineEdit_override_virtual_showEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = std::move(slot_handle);
	return true;
}

void QLineEdit_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQLineEdit*>(self)->QLineEdit::showEvent(event);
}

bool QLineEdit_override_virtual_hideEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = std::move(slot_handle);
	return true;
}

void QLineEdit_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQLineEdit*>(self)->QLineEdit::hideEvent(event);
}

bool QLineEdit_override_virtual_nativeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = std::move(slot_handle);
	return true;
}

bool QLineEdit_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQLineEdit*>(self)->QLineEdit::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
}

bool QLineEdit_override_virtual_metric(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = std::move(slot_handle);
	return true;
}

int QLineEdit_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQLineEdit*>(self)->QLineEdit::metric(static_cast<MiqtVirtualQLineEdit::PaintDeviceMetric>(param1));
}

bool QLineEdit_override_virtual_initPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = std::move(slot_handle);
	return true;
}

void QLineEdit_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQLineEdit*>(self)->QLineEdit::initPainter(painter);
}

bool QLineEdit_override_virtual_redirected(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = std::move(slot_handle);
	return true;
}

QPaintDevice* QLineEdit_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQLineEdit*>(self)->QLineEdit::redirected(offset);
}

bool QLineEdit_override_virtual_sharedPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = std::move(slot_handle);
	return true;
}

QPainter* QLineEdit_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQLineEdit*>(self)->QLineEdit::sharedPainter();
}

bool QLineEdit_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = std::move(slot_handle);
	return true;
}

bool QLineEdit_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQLineEdit*>(self)->QLineEdit::focusNextPrevChild(next);
}

bool QLineEdit_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QLineEdit_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQLineEdit*>(self)->QLineEdit::eventFilter(watched, event);
}

bool QLineEdit_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QLineEdit_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQLineEdit*>(self)->QLineEdit::childEvent(event);
}

bool QLineEdit_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QLineEdit_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQLineEdit*>(self)->QLineEdit::customEvent(event);
}

bool QLineEdit_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QLineEdit_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQLineEdit*>(self)->QLineEdit::connectNotify(*signal);
}

bool QLineEdit_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QLineEdit> slot_handle(slot);
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QLineEdit_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQLineEdit*>(self)->QLineEdit::disconnectNotify(*signal);
}

QRect* QLineEdit_protectedbase_cursorRect(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QRect(self_cast->cursorRect());
}

void QLineEdit_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QLineEdit_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QLineEdit_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QLineEdit_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QLineEdit_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QLineEdit_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QLineEdit_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QLineEdit_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QLineEdit_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQLineEdit* self_cast = dynamic_cast<MiqtVirtualQLineEdit*>( (QLineEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QLineEdit_delete(QLineEdit* self) {
	delete self;
}

