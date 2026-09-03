#include <memory>
#include <utility>
#include <QAbstractScrollArea>
#include <QAbstractTextDocumentLayout>
#define WORKAROUND_INNER_CLASS_DEFINITION_QAbstractTextDocumentLayout__PaintContext
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
#include <QMargins>
#include <QMenu>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeData>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPagedPaintDevice>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPlainTextDocumentLayout>
#include <QPlainTextEdit>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRectF>
#include <QRegExp>
#include <QRegularExpression>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QSizeF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTextBlock>
#include <QTextCharFormat>
#include <QTextCursor>
#include <QTextDocument>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTextEdit__ExtraSelection
#include <QTextFormat>
#include <QTextFrame>
#include <QTextInlineObject>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qplaintextedit.h>
#include "gen_qplaintextedit.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QPlainTextEdit(intptr_t);
void miqt_exec_callback_QPlainTextEdit_textChanged(intptr_t);
void miqt_exec_callback_QPlainTextEdit_undoAvailable(intptr_t, bool);
void miqt_exec_callback_QPlainTextEdit_redoAvailable(intptr_t, bool);
void miqt_exec_callback_QPlainTextEdit_copyAvailable(intptr_t, bool);
void miqt_exec_callback_QPlainTextEdit_selectionChanged(intptr_t);
void miqt_exec_callback_QPlainTextEdit_cursorPositionChanged(intptr_t);
void miqt_exec_callback_QPlainTextEdit_updateRequest(intptr_t, QRect*, int);
void miqt_exec_callback_QPlainTextEdit_blockCountChanged(intptr_t, int);
void miqt_exec_callback_QPlainTextEdit_modificationChanged(intptr_t, bool);
QVariant* miqt_exec_callback_QPlainTextEdit_loadResource(QPlainTextEdit*, intptr_t, int, QUrl*);
QVariant* miqt_exec_callback_QPlainTextEdit_inputMethodQuery(const QPlainTextEdit*, intptr_t, int);
bool miqt_exec_callback_QPlainTextEdit_event(QPlainTextEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QPlainTextEdit_timerEvent(QPlainTextEdit*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QPlainTextEdit_keyPressEvent(QPlainTextEdit*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QPlainTextEdit_keyReleaseEvent(QPlainTextEdit*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QPlainTextEdit_resizeEvent(QPlainTextEdit*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QPlainTextEdit_paintEvent(QPlainTextEdit*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QPlainTextEdit_mousePressEvent(QPlainTextEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPlainTextEdit_mouseMoveEvent(QPlainTextEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPlainTextEdit_mouseReleaseEvent(QPlainTextEdit*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QPlainTextEdit_mouseDoubleClickEvent(QPlainTextEdit*, intptr_t, QMouseEvent*);
bool miqt_exec_callback_QPlainTextEdit_focusNextPrevChild(QPlainTextEdit*, intptr_t, bool);
void miqt_exec_callback_QPlainTextEdit_contextMenuEvent(QPlainTextEdit*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QPlainTextEdit_dragEnterEvent(QPlainTextEdit*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QPlainTextEdit_dragLeaveEvent(QPlainTextEdit*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QPlainTextEdit_dragMoveEvent(QPlainTextEdit*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QPlainTextEdit_dropEvent(QPlainTextEdit*, intptr_t, QDropEvent*);
void miqt_exec_callback_QPlainTextEdit_focusInEvent(QPlainTextEdit*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QPlainTextEdit_focusOutEvent(QPlainTextEdit*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QPlainTextEdit_showEvent(QPlainTextEdit*, intptr_t, QShowEvent*);
void miqt_exec_callback_QPlainTextEdit_changeEvent(QPlainTextEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QPlainTextEdit_wheelEvent(QPlainTextEdit*, intptr_t, QWheelEvent*);
QMimeData* miqt_exec_callback_QPlainTextEdit_createMimeDataFromSelection(const QPlainTextEdit*, intptr_t);
bool miqt_exec_callback_QPlainTextEdit_canInsertFromMimeData(const QPlainTextEdit*, intptr_t, QMimeData*);
void miqt_exec_callback_QPlainTextEdit_insertFromMimeData(QPlainTextEdit*, intptr_t, QMimeData*);
void miqt_exec_callback_QPlainTextEdit_inputMethodEvent(QPlainTextEdit*, intptr_t, QInputMethodEvent*);
void miqt_exec_callback_QPlainTextEdit_scrollContentsBy(QPlainTextEdit*, intptr_t, int, int);
void miqt_exec_callback_QPlainTextEdit_doSetTextCursor(QPlainTextEdit*, intptr_t, QTextCursor*);
QSize* miqt_exec_callback_QPlainTextEdit_minimumSizeHint(const QPlainTextEdit*, intptr_t);
QSize* miqt_exec_callback_QPlainTextEdit_sizeHint(const QPlainTextEdit*, intptr_t);
void miqt_exec_callback_QPlainTextEdit_setupViewport(QPlainTextEdit*, intptr_t, QWidget*);
bool miqt_exec_callback_QPlainTextEdit_eventFilter(QPlainTextEdit*, intptr_t, QObject*, QEvent*);
bool miqt_exec_callback_QPlainTextEdit_viewportEvent(QPlainTextEdit*, intptr_t, QEvent*);
QSize* miqt_exec_callback_QPlainTextEdit_viewportSizeHint(const QPlainTextEdit*, intptr_t);
int miqt_exec_callback_QPlainTextEdit_devType(const QPlainTextEdit*, intptr_t);
void miqt_exec_callback_QPlainTextEdit_setVisible(QPlainTextEdit*, intptr_t, bool);
int miqt_exec_callback_QPlainTextEdit_heightForWidth(const QPlainTextEdit*, intptr_t, int);
bool miqt_exec_callback_QPlainTextEdit_hasHeightForWidth(const QPlainTextEdit*, intptr_t);
QPaintEngine* miqt_exec_callback_QPlainTextEdit_paintEngine(const QPlainTextEdit*, intptr_t);
void miqt_exec_callback_QPlainTextEdit_enterEvent(QPlainTextEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QPlainTextEdit_leaveEvent(QPlainTextEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QPlainTextEdit_moveEvent(QPlainTextEdit*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QPlainTextEdit_closeEvent(QPlainTextEdit*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QPlainTextEdit_tabletEvent(QPlainTextEdit*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QPlainTextEdit_actionEvent(QPlainTextEdit*, intptr_t, QActionEvent*);
void miqt_exec_callback_QPlainTextEdit_hideEvent(QPlainTextEdit*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QPlainTextEdit_nativeEvent(QPlainTextEdit*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QPlainTextEdit_metric(const QPlainTextEdit*, intptr_t, int);
void miqt_exec_callback_QPlainTextEdit_initPainter(const QPlainTextEdit*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QPlainTextEdit_redirected(const QPlainTextEdit*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QPlainTextEdit_sharedPainter(const QPlainTextEdit*, intptr_t);
void miqt_exec_callback_QPlainTextEdit_childEvent(QPlainTextEdit*, intptr_t, QChildEvent*);
void miqt_exec_callback_QPlainTextEdit_customEvent(QPlainTextEdit*, intptr_t, QEvent*);
void miqt_exec_callback_QPlainTextEdit_connectNotify(QPlainTextEdit*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPlainTextEdit_disconnectNotify(QPlainTextEdit*, intptr_t, QMetaMethod*);
void miqt_exec_callback_handle_release_QPlainTextDocumentLayout(intptr_t);
void miqt_exec_callback_QPlainTextDocumentLayout_draw(QPlainTextDocumentLayout*, intptr_t, QPainter*, QAbstractTextDocumentLayout__PaintContext*);
int miqt_exec_callback_QPlainTextDocumentLayout_hitTest(const QPlainTextDocumentLayout*, intptr_t, QPointF*, int);
int miqt_exec_callback_QPlainTextDocumentLayout_pageCount(const QPlainTextDocumentLayout*, intptr_t);
QSizeF* miqt_exec_callback_QPlainTextDocumentLayout_documentSize(const QPlainTextDocumentLayout*, intptr_t);
QRectF* miqt_exec_callback_QPlainTextDocumentLayout_frameBoundingRect(const QPlainTextDocumentLayout*, intptr_t, QTextFrame*);
QRectF* miqt_exec_callback_QPlainTextDocumentLayout_blockBoundingRect(const QPlainTextDocumentLayout*, intptr_t, QTextBlock*);
void miqt_exec_callback_QPlainTextDocumentLayout_documentChanged(QPlainTextDocumentLayout*, intptr_t, int, int, int);
void miqt_exec_callback_QPlainTextDocumentLayout_resizeInlineObject(QPlainTextDocumentLayout*, intptr_t, QTextInlineObject*, int, QTextFormat*);
void miqt_exec_callback_QPlainTextDocumentLayout_positionInlineObject(QPlainTextDocumentLayout*, intptr_t, QTextInlineObject*, int, QTextFormat*);
void miqt_exec_callback_QPlainTextDocumentLayout_drawInlineObject(QPlainTextDocumentLayout*, intptr_t, QPainter*, QRectF*, QTextInlineObject*, int, QTextFormat*);
bool miqt_exec_callback_QPlainTextDocumentLayout_event(QPlainTextDocumentLayout*, intptr_t, QEvent*);
bool miqt_exec_callback_QPlainTextDocumentLayout_eventFilter(QPlainTextDocumentLayout*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QPlainTextDocumentLayout_timerEvent(QPlainTextDocumentLayout*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QPlainTextDocumentLayout_childEvent(QPlainTextDocumentLayout*, intptr_t, QChildEvent*);
void miqt_exec_callback_QPlainTextDocumentLayout_customEvent(QPlainTextDocumentLayout*, intptr_t, QEvent*);
void miqt_exec_callback_QPlainTextDocumentLayout_connectNotify(QPlainTextDocumentLayout*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QPlainTextDocumentLayout_disconnectNotify(QPlainTextDocumentLayout*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQPlainTextEdit final : public QPlainTextEdit {
public:

	MiqtVirtualQPlainTextEdit(QWidget* parent): QPlainTextEdit(parent) {}
	MiqtVirtualQPlainTextEdit(): QPlainTextEdit() {}
	MiqtVirtualQPlainTextEdit(const QString& text): QPlainTextEdit(text) {}
	MiqtVirtualQPlainTextEdit(const QString& text, QWidget* parent): QPlainTextEdit(text, parent) {}

	virtual ~MiqtVirtualQPlainTextEdit() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__loadResource;

	// Subclass to allow providing a Go implementation
	virtual QVariant loadResource(int type, const QUrl& name) override {
		if (!handle__loadResource) {
			return QPlainTextEdit::loadResource(type, name);
		}

		int sigval1 = type;
		const QUrl& name_ret = name;
		// Cast returned reference into pointer
		QUrl* sigval2 = const_cast<QUrl*>(&name_ret);
		QVariant* callback_return_value = miqt_exec_callback_QPlainTextEdit_loadResource(this, handle__loadResource.value(), sigval1, sigval2);
		return *callback_return_value;
	}

	friend QVariant* QPlainTextEdit_virtualbase_loadResource(void* self, int type, QUrl* name);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__inputMethodQuery;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery property) const override {
		if (!handle__inputMethodQuery) {
			return QPlainTextEdit::inputMethodQuery(property);
		}

		Qt::InputMethodQuery property_ret = property;
		int sigval1 = static_cast<int>(property_ret);
		QVariant* callback_return_value = miqt_exec_callback_QPlainTextEdit_inputMethodQuery(this, handle__inputMethodQuery.value(), sigval1);
		return *callback_return_value;
	}

	friend QVariant* QPlainTextEdit_virtualbase_inputMethodQuery(const void* self, int property);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (!handle__event) {
			return QPlainTextEdit::event(e);
		}

		QEvent* sigval1 = e;
		bool callback_return_value = miqt_exec_callback_QPlainTextEdit_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QPlainTextEdit_virtualbase_event(void* self, QEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* e) override {
		if (!handle__timerEvent) {
			QPlainTextEdit::timerEvent(e);
			return;
		}

		QTimerEvent* sigval1 = e;
		miqt_exec_callback_QPlainTextEdit_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QPlainTextEdit_virtualbase_timerEvent(void* self, QTimerEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__keyPressEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* e) override {
		if (!handle__keyPressEvent) {
			QPlainTextEdit::keyPressEvent(e);
			return;
		}

		QKeyEvent* sigval1 = e;
		miqt_exec_callback_QPlainTextEdit_keyPressEvent(this, handle__keyPressEvent.value(), sigval1);

	}

	friend void QPlainTextEdit_virtualbase_keyPressEvent(void* self, QKeyEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__keyReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* e) override {
		if (!handle__keyReleaseEvent) {
			QPlainTextEdit::keyReleaseEvent(e);
			return;
		}

		QKeyEvent* sigval1 = e;
		miqt_exec_callback_QPlainTextEdit_keyReleaseEvent(this, handle__keyReleaseEvent.value(), sigval1);

	}

	friend void QPlainTextEdit_virtualbase_keyReleaseEvent(void* self, QKeyEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__resizeEvent;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* e) override {
		if (!handle__resizeEvent) {
			QPlainTextEdit::resizeEvent(e);
			return;
		}

		QResizeEvent* sigval1 = e;
		miqt_exec_callback_QPlainTextEdit_resizeEvent(this, handle__resizeEvent.value(), sigval1);

	}

	friend void QPlainTextEdit_virtualbase_resizeEvent(void* self, QResizeEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__paintEvent;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* e) override {
		if (!handle__paintEvent) {
			QPlainTextEdit::paintEvent(e);
			return;
		}

		QPaintEvent* sigval1 = e;
		miqt_exec_callback_QPlainTextEdit_paintEvent(this, handle__paintEvent.value(), sigval1);

	}

	friend void QPlainTextEdit_virtualbase_paintEvent(void* self, QPaintEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__mousePressEvent;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* e) override {
		if (!handle__mousePressEvent) {
			QPlainTextEdit::mousePressEvent(e);
			return;
		}

		QMouseEvent* sigval1 = e;
		miqt_exec_callback_QPlainTextEdit_mousePressEvent(this, handle__mousePressEvent.value(), sigval1);

	}

	friend void QPlainTextEdit_virtualbase_mousePressEvent(void* self, QMouseEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__mouseMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* e) override {
		if (!handle__mouseMoveEvent) {
			QPlainTextEdit::mouseMoveEvent(e);
			return;
		}

		QMouseEvent* sigval1 = e;
		miqt_exec_callback_QPlainTextEdit_mouseMoveEvent(this, handle__mouseMoveEvent.value(), sigval1);

	}

	friend void QPlainTextEdit_virtualbase_mouseMoveEvent(void* self, QMouseEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__mouseReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (!handle__mouseReleaseEvent) {
			QPlainTextEdit::mouseReleaseEvent(e);
			return;
		}

		QMouseEvent* sigval1 = e;
		miqt_exec_callback_QPlainTextEdit_mouseReleaseEvent(this, handle__mouseReleaseEvent.value(), sigval1);

	}

	friend void QPlainTextEdit_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__mouseDoubleClickEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* e) override {
		if (!handle__mouseDoubleClickEvent) {
			QPlainTextEdit::mouseDoubleClickEvent(e);
			return;
		}

		QMouseEvent* sigval1 = e;
		miqt_exec_callback_QPlainTextEdit_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent.value(), sigval1);

	}

	friend void QPlainTextEdit_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__focusNextPrevChild;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (!handle__focusNextPrevChild) {
			return QPlainTextEdit::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QPlainTextEdit_focusNextPrevChild(this, handle__focusNextPrevChild.value(), sigval1);
		return callback_return_value;
	}

	friend bool QPlainTextEdit_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__contextMenuEvent;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* e) override {
		if (!handle__contextMenuEvent) {
			QPlainTextEdit::contextMenuEvent(e);
			return;
		}

		QContextMenuEvent* sigval1 = e;
		miqt_exec_callback_QPlainTextEdit_contextMenuEvent(this, handle__contextMenuEvent.value(), sigval1);

	}

	friend void QPlainTextEdit_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__dragEnterEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* e) override {
		if (!handle__dragEnterEvent) {
			QPlainTextEdit::dragEnterEvent(e);
			return;
		}

		QDragEnterEvent* sigval1 = e;
		miqt_exec_callback_QPlainTextEdit_dragEnterEvent(this, handle__dragEnterEvent.value(), sigval1);

	}

	friend void QPlainTextEdit_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__dragLeaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
		if (!handle__dragLeaveEvent) {
			QPlainTextEdit::dragLeaveEvent(e);
			return;
		}

		QDragLeaveEvent* sigval1 = e;
		miqt_exec_callback_QPlainTextEdit_dragLeaveEvent(this, handle__dragLeaveEvent.value(), sigval1);

	}

	friend void QPlainTextEdit_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__dragMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* e) override {
		if (!handle__dragMoveEvent) {
			QPlainTextEdit::dragMoveEvent(e);
			return;
		}

		QDragMoveEvent* sigval1 = e;
		miqt_exec_callback_QPlainTextEdit_dragMoveEvent(this, handle__dragMoveEvent.value(), sigval1);

	}

	friend void QPlainTextEdit_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__dropEvent;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* e) override {
		if (!handle__dropEvent) {
			QPlainTextEdit::dropEvent(e);
			return;
		}

		QDropEvent* sigval1 = e;
		miqt_exec_callback_QPlainTextEdit_dropEvent(this, handle__dropEvent.value(), sigval1);

	}

	friend void QPlainTextEdit_virtualbase_dropEvent(void* self, QDropEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__focusInEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* e) override {
		if (!handle__focusInEvent) {
			QPlainTextEdit::focusInEvent(e);
			return;
		}

		QFocusEvent* sigval1 = e;
		miqt_exec_callback_QPlainTextEdit_focusInEvent(this, handle__focusInEvent.value(), sigval1);

	}

	friend void QPlainTextEdit_virtualbase_focusInEvent(void* self, QFocusEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__focusOutEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* e) override {
		if (!handle__focusOutEvent) {
			QPlainTextEdit::focusOutEvent(e);
			return;
		}

		QFocusEvent* sigval1 = e;
		miqt_exec_callback_QPlainTextEdit_focusOutEvent(this, handle__focusOutEvent.value(), sigval1);

	}

	friend void QPlainTextEdit_virtualbase_focusOutEvent(void* self, QFocusEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__showEvent;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* param1) override {
		if (!handle__showEvent) {
			QPlainTextEdit::showEvent(param1);
			return;
		}

		QShowEvent* sigval1 = param1;
		miqt_exec_callback_QPlainTextEdit_showEvent(this, handle__showEvent.value(), sigval1);

	}

	friend void QPlainTextEdit_virtualbase_showEvent(void* self, QShowEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__changeEvent;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* e) override {
		if (!handle__changeEvent) {
			QPlainTextEdit::changeEvent(e);
			return;
		}

		QEvent* sigval1 = e;
		miqt_exec_callback_QPlainTextEdit_changeEvent(this, handle__changeEvent.value(), sigval1);

	}

	friend void QPlainTextEdit_virtualbase_changeEvent(void* self, QEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__wheelEvent;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* e) override {
		if (!handle__wheelEvent) {
			QPlainTextEdit::wheelEvent(e);
			return;
		}

		QWheelEvent* sigval1 = e;
		miqt_exec_callback_QPlainTextEdit_wheelEvent(this, handle__wheelEvent.value(), sigval1);

	}

	friend void QPlainTextEdit_virtualbase_wheelEvent(void* self, QWheelEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__createMimeDataFromSelection;

	// Subclass to allow providing a Go implementation
	virtual QMimeData* createMimeDataFromSelection() const override {
		if (!handle__createMimeDataFromSelection) {
			return QPlainTextEdit::createMimeDataFromSelection();
		}

		QMimeData* callback_return_value = miqt_exec_callback_QPlainTextEdit_createMimeDataFromSelection(this, handle__createMimeDataFromSelection.value());
		return callback_return_value;
	}

	friend QMimeData* QPlainTextEdit_virtualbase_createMimeDataFromSelection(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__canInsertFromMimeData;

	// Subclass to allow providing a Go implementation
	virtual bool canInsertFromMimeData(const QMimeData* source) const override {
		if (!handle__canInsertFromMimeData) {
			return QPlainTextEdit::canInsertFromMimeData(source);
		}

		QMimeData* sigval1 = (QMimeData*) source;
		bool callback_return_value = miqt_exec_callback_QPlainTextEdit_canInsertFromMimeData(this, handle__canInsertFromMimeData.value(), sigval1);
		return callback_return_value;
	}

	friend bool QPlainTextEdit_virtualbase_canInsertFromMimeData(const void* self, QMimeData* source);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__insertFromMimeData;

	// Subclass to allow providing a Go implementation
	virtual void insertFromMimeData(const QMimeData* source) override {
		if (!handle__insertFromMimeData) {
			QPlainTextEdit::insertFromMimeData(source);
			return;
		}

		QMimeData* sigval1 = (QMimeData*) source;
		miqt_exec_callback_QPlainTextEdit_insertFromMimeData(this, handle__insertFromMimeData.value(), sigval1);

	}

	friend void QPlainTextEdit_virtualbase_insertFromMimeData(void* self, QMimeData* source);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__inputMethodEvent;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* param1) override {
		if (!handle__inputMethodEvent) {
			QPlainTextEdit::inputMethodEvent(param1);
			return;
		}

		QInputMethodEvent* sigval1 = param1;
		miqt_exec_callback_QPlainTextEdit_inputMethodEvent(this, handle__inputMethodEvent.value(), sigval1);

	}

	friend void QPlainTextEdit_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__scrollContentsBy;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (!handle__scrollContentsBy) {
			QPlainTextEdit::scrollContentsBy(dx, dy);
			return;
		}

		int sigval1 = dx;
		int sigval2 = dy;
		miqt_exec_callback_QPlainTextEdit_scrollContentsBy(this, handle__scrollContentsBy.value(), sigval1, sigval2);

	}

	friend void QPlainTextEdit_virtualbase_scrollContentsBy(void* self, int dx, int dy);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__doSetTextCursor;

	// Subclass to allow providing a Go implementation
	virtual void doSetTextCursor(const QTextCursor& cursor) override {
		if (!handle__doSetTextCursor) {
			QPlainTextEdit::doSetTextCursor(cursor);
			return;
		}

		const QTextCursor& cursor_ret = cursor;
		// Cast returned reference into pointer
		QTextCursor* sigval1 = const_cast<QTextCursor*>(&cursor_ret);
		miqt_exec_callback_QPlainTextEdit_doSetTextCursor(this, handle__doSetTextCursor.value(), sigval1);

	}

	friend void QPlainTextEdit_virtualbase_doSetTextCursor(void* self, QTextCursor* cursor);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__minimumSizeHint;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (!handle__minimumSizeHint) {
			return QPlainTextEdit::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QPlainTextEdit_minimumSizeHint(this, handle__minimumSizeHint.value());
		return *callback_return_value;
	}

	friend QSize* QPlainTextEdit_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__sizeHint;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (!handle__sizeHint) {
			return QPlainTextEdit::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QPlainTextEdit_sizeHint(this, handle__sizeHint.value());
		return *callback_return_value;
	}

	friend QSize* QPlainTextEdit_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__setupViewport;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (!handle__setupViewport) {
			QPlainTextEdit::setupViewport(viewport);
			return;
		}

		QWidget* sigval1 = viewport;
		miqt_exec_callback_QPlainTextEdit_setupViewport(this, handle__setupViewport.value(), sigval1);

	}

	friend void QPlainTextEdit_virtualbase_setupViewport(void* self, QWidget* viewport);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* param1, QEvent* param2) override {
		if (!handle__eventFilter) {
			return QPlainTextEdit::eventFilter(param1, param2);
		}

		QObject* sigval1 = param1;
		QEvent* sigval2 = param2;
		bool callback_return_value = miqt_exec_callback_QPlainTextEdit_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QPlainTextEdit_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__viewportEvent;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* param1) override {
		if (!handle__viewportEvent) {
			return QPlainTextEdit::viewportEvent(param1);
		}

		QEvent* sigval1 = param1;
		bool callback_return_value = miqt_exec_callback_QPlainTextEdit_viewportEvent(this, handle__viewportEvent.value(), sigval1);
		return callback_return_value;
	}

	friend bool QPlainTextEdit_virtualbase_viewportEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__viewportSizeHint;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (!handle__viewportSizeHint) {
			return QPlainTextEdit::viewportSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QPlainTextEdit_viewportSizeHint(this, handle__viewportSizeHint.value());
		return *callback_return_value;
	}

	friend QSize* QPlainTextEdit_virtualbase_viewportSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__devType;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (!handle__devType) {
			return QPlainTextEdit::devType();
		}

		int callback_return_value = miqt_exec_callback_QPlainTextEdit_devType(this, handle__devType.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QPlainTextEdit_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__setVisible;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (!handle__setVisible) {
			QPlainTextEdit::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QPlainTextEdit_setVisible(this, handle__setVisible.value(), sigval1);

	}

	friend void QPlainTextEdit_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__heightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (!handle__heightForWidth) {
			return QPlainTextEdit::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QPlainTextEdit_heightForWidth(this, handle__heightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QPlainTextEdit_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__hasHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (!handle__hasHeightForWidth) {
			return QPlainTextEdit::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QPlainTextEdit_hasHeightForWidth(this, handle__hasHeightForWidth.value());
		return callback_return_value;
	}

	friend bool QPlainTextEdit_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__paintEngine;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (!handle__paintEngine) {
			return QPlainTextEdit::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QPlainTextEdit_paintEngine(this, handle__paintEngine.value());
		return callback_return_value;
	}

	friend QPaintEngine* QPlainTextEdit_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__enterEvent;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (!handle__enterEvent) {
			QPlainTextEdit::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QPlainTextEdit_enterEvent(this, handle__enterEvent.value(), sigval1);

	}

	friend void QPlainTextEdit_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__leaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (!handle__leaveEvent) {
			QPlainTextEdit::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QPlainTextEdit_leaveEvent(this, handle__leaveEvent.value(), sigval1);

	}

	friend void QPlainTextEdit_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__moveEvent;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (!handle__moveEvent) {
			QPlainTextEdit::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QPlainTextEdit_moveEvent(this, handle__moveEvent.value(), sigval1);

	}

	friend void QPlainTextEdit_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__closeEvent;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (!handle__closeEvent) {
			QPlainTextEdit::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QPlainTextEdit_closeEvent(this, handle__closeEvent.value(), sigval1);

	}

	friend void QPlainTextEdit_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__tabletEvent;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (!handle__tabletEvent) {
			QPlainTextEdit::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QPlainTextEdit_tabletEvent(this, handle__tabletEvent.value(), sigval1);

	}

	friend void QPlainTextEdit_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__actionEvent;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (!handle__actionEvent) {
			QPlainTextEdit::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QPlainTextEdit_actionEvent(this, handle__actionEvent.value(), sigval1);

	}

	friend void QPlainTextEdit_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__hideEvent;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (!handle__hideEvent) {
			QPlainTextEdit::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QPlainTextEdit_hideEvent(this, handle__hideEvent.value(), sigval1);

	}

	friend void QPlainTextEdit_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__nativeEvent;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (!handle__nativeEvent) {
			return QPlainTextEdit::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QPlainTextEdit_nativeEvent(this, handle__nativeEvent.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QPlainTextEdit_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__metric;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (!handle__metric) {
			return QPlainTextEdit::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QPlainTextEdit_metric(this, handle__metric.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QPlainTextEdit_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__initPainter;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (!handle__initPainter) {
			QPlainTextEdit::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QPlainTextEdit_initPainter(this, handle__initPainter.value(), sigval1);

	}

	friend void QPlainTextEdit_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__redirected;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (!handle__redirected) {
			return QPlainTextEdit::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QPlainTextEdit_redirected(this, handle__redirected.value(), sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QPlainTextEdit_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__sharedPainter;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (!handle__sharedPainter) {
			return QPlainTextEdit::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QPlainTextEdit_sharedPainter(this, handle__sharedPainter.value());
		return callback_return_value;
	}

	friend QPainter* QPlainTextEdit_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QPlainTextEdit::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QPlainTextEdit_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QPlainTextEdit_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QPlainTextEdit::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QPlainTextEdit_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QPlainTextEdit_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QPlainTextEdit::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QPlainTextEdit_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QPlainTextEdit_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QPlainTextEdit::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QPlainTextEdit_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QPlainTextEdit_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QTextBlock* QPlainTextEdit_protectedbase_firstVisibleBlock(bool* _dynamic_cast_ok, const void* self);
	friend QPointF* QPlainTextEdit_protectedbase_contentOffset(bool* _dynamic_cast_ok, const void* self);
	friend QRectF* QPlainTextEdit_protectedbase_blockBoundingRect(bool* _dynamic_cast_ok, const void* self, QTextBlock* block);
	friend QRectF* QPlainTextEdit_protectedbase_blockBoundingGeometry(bool* _dynamic_cast_ok, const void* self, QTextBlock* block);
	friend QAbstractTextDocumentLayout__PaintContext* QPlainTextEdit_protectedbase_getPaintContext(bool* _dynamic_cast_ok, const void* self);
	friend void QPlainTextEdit_protectedbase_zoomInF(bool* _dynamic_cast_ok, void* self, float range);
	friend void QPlainTextEdit_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom);
	friend QMargins* QPlainTextEdit_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self);
	friend void QPlainTextEdit_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
	friend void QPlainTextEdit_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option);
	friend void QPlainTextEdit_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QPlainTextEdit_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QPlainTextEdit_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QPlainTextEdit_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QPlainTextEdit_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QPlainTextEdit_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QPlainTextEdit_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QPlainTextEdit_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QPlainTextEdit_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QPlainTextEdit* QPlainTextEdit_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQPlainTextEdit(parent);
}

QPlainTextEdit* QPlainTextEdit_new2() {
	return new (std::nothrow) MiqtVirtualQPlainTextEdit();
}

QPlainTextEdit* QPlainTextEdit_new3(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new (std::nothrow) MiqtVirtualQPlainTextEdit(text_QString);
}

QPlainTextEdit* QPlainTextEdit_new4(struct miqt_string text, QWidget* parent) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new (std::nothrow) MiqtVirtualQPlainTextEdit(text_QString, parent);
}

void QPlainTextEdit_virtbase(QPlainTextEdit* src, QAbstractScrollArea** outptr_QAbstractScrollArea) {
	*outptr_QAbstractScrollArea = static_cast<QAbstractScrollArea*>(src);
}

QMetaObject* QPlainTextEdit_metaObject(const QPlainTextEdit* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPlainTextEdit_metacast(QPlainTextEdit* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPlainTextEdit_tr(const char* s) {
	QString _ret = QPlainTextEdit::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPlainTextEdit_trUtf8(const char* s) {
	QString _ret = QPlainTextEdit::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPlainTextEdit_setDocument(QPlainTextEdit* self, QTextDocument* document) {
	self->setDocument(document);
}

QTextDocument* QPlainTextEdit_document(const QPlainTextEdit* self) {
	return self->document();
}

void QPlainTextEdit_setPlaceholderText(QPlainTextEdit* self, struct miqt_string placeholderText) {
	QString placeholderText_QString = QString::fromUtf8(placeholderText.data, placeholderText.len);
	self->setPlaceholderText(placeholderText_QString);
}

struct miqt_string QPlainTextEdit_placeholderText(const QPlainTextEdit* self) {
	QString _ret = self->placeholderText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPlainTextEdit_setTextCursor(QPlainTextEdit* self, QTextCursor* cursor) {
	self->setTextCursor(*cursor);
}

QTextCursor* QPlainTextEdit_textCursor(const QPlainTextEdit* self) {
	return new QTextCursor(self->textCursor());
}

bool QPlainTextEdit_isReadOnly(const QPlainTextEdit* self) {
	return self->isReadOnly();
}

void QPlainTextEdit_setReadOnly(QPlainTextEdit* self, bool ro) {
	self->setReadOnly(ro);
}

void QPlainTextEdit_setTextInteractionFlags(QPlainTextEdit* self, int flags) {
	self->setTextInteractionFlags(static_cast<Qt::TextInteractionFlags>(flags));
}

int QPlainTextEdit_textInteractionFlags(const QPlainTextEdit* self) {
	Qt::TextInteractionFlags _ret = self->textInteractionFlags();
	return static_cast<int>(_ret);
}

void QPlainTextEdit_mergeCurrentCharFormat(QPlainTextEdit* self, QTextCharFormat* modifier) {
	self->mergeCurrentCharFormat(*modifier);
}

void QPlainTextEdit_setCurrentCharFormat(QPlainTextEdit* self, QTextCharFormat* format) {
	self->setCurrentCharFormat(*format);
}

QTextCharFormat* QPlainTextEdit_currentCharFormat(const QPlainTextEdit* self) {
	return new QTextCharFormat(self->currentCharFormat());
}

bool QPlainTextEdit_tabChangesFocus(const QPlainTextEdit* self) {
	return self->tabChangesFocus();
}

void QPlainTextEdit_setTabChangesFocus(QPlainTextEdit* self, bool b) {
	self->setTabChangesFocus(b);
}

void QPlainTextEdit_setDocumentTitle(QPlainTextEdit* self, struct miqt_string title) {
	QString title_QString = QString::fromUtf8(title.data, title.len);
	self->setDocumentTitle(title_QString);
}

struct miqt_string QPlainTextEdit_documentTitle(const QPlainTextEdit* self) {
	QString _ret = self->documentTitle();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPlainTextEdit_isUndoRedoEnabled(const QPlainTextEdit* self) {
	return self->isUndoRedoEnabled();
}

void QPlainTextEdit_setUndoRedoEnabled(QPlainTextEdit* self, bool enable) {
	self->setUndoRedoEnabled(enable);
}

void QPlainTextEdit_setMaximumBlockCount(QPlainTextEdit* self, int maximum) {
	self->setMaximumBlockCount(static_cast<int>(maximum));
}

int QPlainTextEdit_maximumBlockCount(const QPlainTextEdit* self) {
	return self->maximumBlockCount();
}

int QPlainTextEdit_lineWrapMode(const QPlainTextEdit* self) {
	QPlainTextEdit::LineWrapMode _ret = self->lineWrapMode();
	return static_cast<int>(_ret);
}

void QPlainTextEdit_setLineWrapMode(QPlainTextEdit* self, int mode) {
	self->setLineWrapMode(static_cast<QPlainTextEdit::LineWrapMode>(mode));
}

int QPlainTextEdit_wordWrapMode(const QPlainTextEdit* self) {
	QTextOption::WrapMode _ret = self->wordWrapMode();
	return static_cast<int>(_ret);
}

void QPlainTextEdit_setWordWrapMode(QPlainTextEdit* self, int policy) {
	self->setWordWrapMode(static_cast<QTextOption::WrapMode>(policy));
}

void QPlainTextEdit_setBackgroundVisible(QPlainTextEdit* self, bool visible) {
	self->setBackgroundVisible(visible);
}

bool QPlainTextEdit_backgroundVisible(const QPlainTextEdit* self) {
	return self->backgroundVisible();
}

void QPlainTextEdit_setCenterOnScroll(QPlainTextEdit* self, bool enabled) {
	self->setCenterOnScroll(enabled);
}

bool QPlainTextEdit_centerOnScroll(const QPlainTextEdit* self) {
	return self->centerOnScroll();
}

bool QPlainTextEdit_find(QPlainTextEdit* self, struct miqt_string exp) {
	QString exp_QString = QString::fromUtf8(exp.data, exp.len);
	return self->find(exp_QString);
}

bool QPlainTextEdit_findWithExp(QPlainTextEdit* self, QRegExp* exp) {
	return self->find(*exp);
}

bool QPlainTextEdit_find2(QPlainTextEdit* self, QRegularExpression* exp) {
	return self->find(*exp);
}

struct miqt_string QPlainTextEdit_toPlainText(const QPlainTextEdit* self) {
	QString _ret = self->toPlainText();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPlainTextEdit_ensureCursorVisible(QPlainTextEdit* self) {
	self->ensureCursorVisible();
}

QVariant* QPlainTextEdit_loadResource(QPlainTextEdit* self, int type, QUrl* name) {
	return new QVariant(self->loadResource(static_cast<int>(type), *name));
}

QMenu* QPlainTextEdit_createStandardContextMenu(QPlainTextEdit* self) {
	return self->createStandardContextMenu();
}

QMenu* QPlainTextEdit_createStandardContextMenuWithPosition(QPlainTextEdit* self, QPoint* position) {
	return self->createStandardContextMenu(*position);
}

QTextCursor* QPlainTextEdit_cursorForPosition(const QPlainTextEdit* self, QPoint* pos) {
	return new QTextCursor(self->cursorForPosition(*pos));
}

QRect* QPlainTextEdit_cursorRect(const QPlainTextEdit* self, QTextCursor* cursor) {
	return new QRect(self->cursorRect(*cursor));
}

QRect* QPlainTextEdit_cursorRect2(const QPlainTextEdit* self) {
	return new QRect(self->cursorRect());
}

struct miqt_string QPlainTextEdit_anchorAt(const QPlainTextEdit* self, QPoint* pos) {
	QString _ret = self->anchorAt(*pos);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPlainTextEdit_overwriteMode(const QPlainTextEdit* self) {
	return self->overwriteMode();
}

void QPlainTextEdit_setOverwriteMode(QPlainTextEdit* self, bool overwrite) {
	self->setOverwriteMode(overwrite);
}

int QPlainTextEdit_tabStopWidth(const QPlainTextEdit* self) {
	return self->tabStopWidth();
}

void QPlainTextEdit_setTabStopWidth(QPlainTextEdit* self, int width) {
	self->setTabStopWidth(static_cast<int>(width));
}

double QPlainTextEdit_tabStopDistance(const QPlainTextEdit* self) {
	qreal _ret = self->tabStopDistance();
	return static_cast<double>(_ret);
}

void QPlainTextEdit_setTabStopDistance(QPlainTextEdit* self, double distance) {
	self->setTabStopDistance(static_cast<qreal>(distance));
}

int QPlainTextEdit_cursorWidth(const QPlainTextEdit* self) {
	return self->cursorWidth();
}

void QPlainTextEdit_setCursorWidth(QPlainTextEdit* self, int width) {
	self->setCursorWidth(static_cast<int>(width));
}

void QPlainTextEdit_setExtraSelections(QPlainTextEdit* self, struct miqt_array /* of QTextEdit__ExtraSelection* */  selections) {
	QList<QTextEdit::ExtraSelection> selections_QList;
	selections_QList.reserve(selections.len);
	QTextEdit__ExtraSelection** selections_arr = static_cast<QTextEdit__ExtraSelection**>(selections.data);
	for(size_t i = 0; i < selections.len; ++i) {
		selections_QList.push_back(*(selections_arr[i]));
	}
	self->setExtraSelections(selections_QList);
}

struct miqt_array /* of QTextEdit__ExtraSelection* */  QPlainTextEdit_extraSelections(const QPlainTextEdit* self) {
	QList<QTextEdit::ExtraSelection> _ret = self->extraSelections();
	// Convert QList<> from C++ memory to manually-managed C memory
	QTextEdit__ExtraSelection** _arr = static_cast<QTextEdit__ExtraSelection**>(malloc(sizeof(QTextEdit__ExtraSelection*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QTextEdit::ExtraSelection(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

void QPlainTextEdit_moveCursor(QPlainTextEdit* self, int operation) {
	self->moveCursor(static_cast<QTextCursor::MoveOperation>(operation));
}

bool QPlainTextEdit_canPaste(const QPlainTextEdit* self) {
	return self->canPaste();
}

void QPlainTextEdit_print(const QPlainTextEdit* self, QPagedPaintDevice* printer) {
	self->print(printer);
}

int QPlainTextEdit_blockCount(const QPlainTextEdit* self) {
	return self->blockCount();
}

QVariant* QPlainTextEdit_inputMethodQuery(const QPlainTextEdit* self, int property) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
}

QVariant* QPlainTextEdit_inputMethodQuery2(const QPlainTextEdit* self, int query, QVariant* argument) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query), *argument));
}

void QPlainTextEdit_setPlainText(QPlainTextEdit* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setPlainText(text_QString);
}

void QPlainTextEdit_cut(QPlainTextEdit* self) {
	self->cut();
}

void QPlainTextEdit_copy(QPlainTextEdit* self) {
	self->copy();
}

void QPlainTextEdit_paste(QPlainTextEdit* self) {
	self->paste();
}

void QPlainTextEdit_undo(QPlainTextEdit* self) {
	self->undo();
}

void QPlainTextEdit_redo(QPlainTextEdit* self) {
	self->redo();
}

void QPlainTextEdit_clear(QPlainTextEdit* self) {
	self->clear();
}

void QPlainTextEdit_selectAll(QPlainTextEdit* self) {
	self->selectAll();
}

void QPlainTextEdit_insertPlainText(QPlainTextEdit* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->insertPlainText(text_QString);
}

void QPlainTextEdit_appendPlainText(QPlainTextEdit* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->appendPlainText(text_QString);
}

void QPlainTextEdit_appendHtml(QPlainTextEdit* self, struct miqt_string html) {
	QString html_QString = QString::fromUtf8(html.data, html.len);
	self->appendHtml(html_QString);
}

void QPlainTextEdit_centerCursor(QPlainTextEdit* self) {
	self->centerCursor();
}

void QPlainTextEdit_zoomIn(QPlainTextEdit* self) {
	self->zoomIn();
}

void QPlainTextEdit_zoomOut(QPlainTextEdit* self) {
	self->zoomOut();
}

void QPlainTextEdit_textChanged(QPlainTextEdit* self) {
	self->textChanged();
}

void* QPlainTextEdit_connect_textChanged(QPlainTextEdit* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit>>(slot);
	return new QMetaObject::Connection(QPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)()>(&QPlainTextEdit::textChanged), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QPlainTextEdit_textChanged(slot);
	}));
}

void QPlainTextEdit_undoAvailable(QPlainTextEdit* self, bool b) {
	self->undoAvailable(b);
}

void* QPlainTextEdit_connect_undoAvailable(QPlainTextEdit* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit>>(slot);
	return new QMetaObject::Connection(QPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)(bool)>(&QPlainTextEdit::undoAvailable), self, [slot_handle](bool b) {
		intptr_t slot = slot_handle->value();
		bool sigval1 = b;
		miqt_exec_callback_QPlainTextEdit_undoAvailable(slot, sigval1);
	}));
}

void QPlainTextEdit_redoAvailable(QPlainTextEdit* self, bool b) {
	self->redoAvailable(b);
}

void* QPlainTextEdit_connect_redoAvailable(QPlainTextEdit* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit>>(slot);
	return new QMetaObject::Connection(QPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)(bool)>(&QPlainTextEdit::redoAvailable), self, [slot_handle](bool b) {
		intptr_t slot = slot_handle->value();
		bool sigval1 = b;
		miqt_exec_callback_QPlainTextEdit_redoAvailable(slot, sigval1);
	}));
}

void QPlainTextEdit_copyAvailable(QPlainTextEdit* self, bool b) {
	self->copyAvailable(b);
}

void* QPlainTextEdit_connect_copyAvailable(QPlainTextEdit* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit>>(slot);
	return new QMetaObject::Connection(QPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)(bool)>(&QPlainTextEdit::copyAvailable), self, [slot_handle](bool b) {
		intptr_t slot = slot_handle->value();
		bool sigval1 = b;
		miqt_exec_callback_QPlainTextEdit_copyAvailable(slot, sigval1);
	}));
}

void QPlainTextEdit_selectionChanged(QPlainTextEdit* self) {
	self->selectionChanged();
}

void* QPlainTextEdit_connect_selectionChanged(QPlainTextEdit* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit>>(slot);
	return new QMetaObject::Connection(QPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)()>(&QPlainTextEdit::selectionChanged), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QPlainTextEdit_selectionChanged(slot);
	}));
}

void QPlainTextEdit_cursorPositionChanged(QPlainTextEdit* self) {
	self->cursorPositionChanged();
}

void* QPlainTextEdit_connect_cursorPositionChanged(QPlainTextEdit* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit>>(slot);
	return new QMetaObject::Connection(QPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)()>(&QPlainTextEdit::cursorPositionChanged), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QPlainTextEdit_cursorPositionChanged(slot);
	}));
}

void QPlainTextEdit_updateRequest(QPlainTextEdit* self, QRect* rect, int dy) {
	self->updateRequest(*rect, static_cast<int>(dy));
}

void* QPlainTextEdit_connect_updateRequest(QPlainTextEdit* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit>>(slot);
	return new QMetaObject::Connection(QPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)(const QRect&, int)>(&QPlainTextEdit::updateRequest), self, [slot_handle](const QRect& rect, int dy) {
		intptr_t slot = slot_handle->value();
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);
		int sigval2 = dy;
		miqt_exec_callback_QPlainTextEdit_updateRequest(slot, sigval1, sigval2);
	}));
}

void QPlainTextEdit_blockCountChanged(QPlainTextEdit* self, int newBlockCount) {
	self->blockCountChanged(static_cast<int>(newBlockCount));
}

void* QPlainTextEdit_connect_blockCountChanged(QPlainTextEdit* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit>>(slot);
	return new QMetaObject::Connection(QPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)(int)>(&QPlainTextEdit::blockCountChanged), self, [slot_handle](int newBlockCount) {
		intptr_t slot = slot_handle->value();
		int sigval1 = newBlockCount;
		miqt_exec_callback_QPlainTextEdit_blockCountChanged(slot, sigval1);
	}));
}

void QPlainTextEdit_modificationChanged(QPlainTextEdit* self, bool param1) {
	self->modificationChanged(param1);
}

void* QPlainTextEdit_connect_modificationChanged(QPlainTextEdit* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit>>(slot);
	return new QMetaObject::Connection(QPlainTextEdit::connect(self, static_cast<void (QPlainTextEdit::*)(bool)>(&QPlainTextEdit::modificationChanged), self, [slot_handle](bool param1) {
		intptr_t slot = slot_handle->value();
		bool sigval1 = param1;
		miqt_exec_callback_QPlainTextEdit_modificationChanged(slot, sigval1);
	}));
}

struct miqt_string QPlainTextEdit_tr2(const char* s, const char* c) {
	QString _ret = QPlainTextEdit::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPlainTextEdit_tr3(const char* s, const char* c, int n) {
	QString _ret = QPlainTextEdit::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPlainTextEdit_trUtf82(const char* s, const char* c) {
	QString _ret = QPlainTextEdit::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPlainTextEdit_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QPlainTextEdit::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPlainTextEdit_find3(QPlainTextEdit* self, struct miqt_string exp, int options) {
	QString exp_QString = QString::fromUtf8(exp.data, exp.len);
	return self->find(exp_QString, static_cast<QTextDocument::FindFlags>(options));
}

bool QPlainTextEdit_find4(QPlainTextEdit* self, QRegExp* exp, int options) {
	return self->find(*exp, static_cast<QTextDocument::FindFlags>(options));
}

bool QPlainTextEdit_find5(QPlainTextEdit* self, QRegularExpression* exp, int options) {
	return self->find(*exp, static_cast<QTextDocument::FindFlags>(options));
}

void QPlainTextEdit_moveCursor2(QPlainTextEdit* self, int operation, int mode) {
	self->moveCursor(static_cast<QTextCursor::MoveOperation>(operation), static_cast<QTextCursor::MoveMode>(mode));
}

void QPlainTextEdit_zoomInWithRange(QPlainTextEdit* self, int range) {
	self->zoomIn(static_cast<int>(range));
}

void QPlainTextEdit_zoomOutWithRange(QPlainTextEdit* self, int range) {
	self->zoomOut(static_cast<int>(range));
}

bool QPlainTextEdit_override_virtual_loadResource(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__loadResource = std::move(slot_handle);
	return true;
}

QVariant* QPlainTextEdit_virtualbase_loadResource(void* self, int type, QUrl* name) {
	return new QVariant(static_cast<MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::loadResource(static_cast<int>(type), *name));
}

bool QPlainTextEdit_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	return true;
}

QVariant* QPlainTextEdit_virtualbase_inputMethodQuery(const void* self, int property) {
	return new QVariant(static_cast<const MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
}

bool QPlainTextEdit_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QPlainTextEdit_virtualbase_event(void* self, QEvent* e) {
	return static_cast<MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::event(e);
}

bool QPlainTextEdit_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QPlainTextEdit_virtualbase_timerEvent(void* self, QTimerEvent* e) {
	static_cast<MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::timerEvent(e);
}

bool QPlainTextEdit_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = std::move(slot_handle);
	return true;
}

void QPlainTextEdit_virtualbase_keyPressEvent(void* self, QKeyEvent* e) {
	static_cast<MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::keyPressEvent(e);
}

bool QPlainTextEdit_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = std::move(slot_handle);
	return true;
}

void QPlainTextEdit_virtualbase_keyReleaseEvent(void* self, QKeyEvent* e) {
	static_cast<MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::keyReleaseEvent(e);
}

bool QPlainTextEdit_override_virtual_resizeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = std::move(slot_handle);
	return true;
}

void QPlainTextEdit_virtualbase_resizeEvent(void* self, QResizeEvent* e) {
	static_cast<MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::resizeEvent(e);
}

bool QPlainTextEdit_override_virtual_paintEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = std::move(slot_handle);
	return true;
}

void QPlainTextEdit_virtualbase_paintEvent(void* self, QPaintEvent* e) {
	static_cast<MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::paintEvent(e);
}

bool QPlainTextEdit_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = std::move(slot_handle);
	return true;
}

void QPlainTextEdit_virtualbase_mousePressEvent(void* self, QMouseEvent* e) {
	static_cast<MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::mousePressEvent(e);
}

bool QPlainTextEdit_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = std::move(slot_handle);
	return true;
}

void QPlainTextEdit_virtualbase_mouseMoveEvent(void* self, QMouseEvent* e) {
	static_cast<MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::mouseMoveEvent(e);
}

bool QPlainTextEdit_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = std::move(slot_handle);
	return true;
}

void QPlainTextEdit_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* e) {
	static_cast<MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::mouseReleaseEvent(e);
}

bool QPlainTextEdit_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = std::move(slot_handle);
	return true;
}

void QPlainTextEdit_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* e) {
	static_cast<MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::mouseDoubleClickEvent(e);
}

bool QPlainTextEdit_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = std::move(slot_handle);
	return true;
}

bool QPlainTextEdit_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::focusNextPrevChild(next);
}

bool QPlainTextEdit_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = std::move(slot_handle);
	return true;
}

void QPlainTextEdit_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* e) {
	static_cast<MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::contextMenuEvent(e);
}

bool QPlainTextEdit_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = std::move(slot_handle);
	return true;
}

void QPlainTextEdit_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* e) {
	static_cast<MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::dragEnterEvent(e);
}

bool QPlainTextEdit_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = std::move(slot_handle);
	return true;
}

void QPlainTextEdit_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* e) {
	static_cast<MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::dragLeaveEvent(e);
}

bool QPlainTextEdit_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = std::move(slot_handle);
	return true;
}

void QPlainTextEdit_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* e) {
	static_cast<MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::dragMoveEvent(e);
}

bool QPlainTextEdit_override_virtual_dropEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = std::move(slot_handle);
	return true;
}

void QPlainTextEdit_virtualbase_dropEvent(void* self, QDropEvent* e) {
	static_cast<MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::dropEvent(e);
}

bool QPlainTextEdit_override_virtual_focusInEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = std::move(slot_handle);
	return true;
}

void QPlainTextEdit_virtualbase_focusInEvent(void* self, QFocusEvent* e) {
	static_cast<MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::focusInEvent(e);
}

bool QPlainTextEdit_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = std::move(slot_handle);
	return true;
}

void QPlainTextEdit_virtualbase_focusOutEvent(void* self, QFocusEvent* e) {
	static_cast<MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::focusOutEvent(e);
}

bool QPlainTextEdit_override_virtual_showEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = std::move(slot_handle);
	return true;
}

void QPlainTextEdit_virtualbase_showEvent(void* self, QShowEvent* param1) {
	static_cast<MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::showEvent(param1);
}

bool QPlainTextEdit_override_virtual_changeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = std::move(slot_handle);
	return true;
}

void QPlainTextEdit_virtualbase_changeEvent(void* self, QEvent* e) {
	static_cast<MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::changeEvent(e);
}

bool QPlainTextEdit_override_virtual_wheelEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = std::move(slot_handle);
	return true;
}

void QPlainTextEdit_virtualbase_wheelEvent(void* self, QWheelEvent* e) {
	static_cast<MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::wheelEvent(e);
}

bool QPlainTextEdit_override_virtual_createMimeDataFromSelection(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__createMimeDataFromSelection = std::move(slot_handle);
	return true;
}

QMimeData* QPlainTextEdit_virtualbase_createMimeDataFromSelection(const void* self) {
	return static_cast<const MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::createMimeDataFromSelection();
}

bool QPlainTextEdit_override_virtual_canInsertFromMimeData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__canInsertFromMimeData = std::move(slot_handle);
	return true;
}

bool QPlainTextEdit_virtualbase_canInsertFromMimeData(const void* self, QMimeData* source) {
	return static_cast<const MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::canInsertFromMimeData(source);
}

bool QPlainTextEdit_override_virtual_insertFromMimeData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__insertFromMimeData = std::move(slot_handle);
	return true;
}

void QPlainTextEdit_virtualbase_insertFromMimeData(void* self, QMimeData* source) {
	static_cast<MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::insertFromMimeData(source);
}

bool QPlainTextEdit_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = std::move(slot_handle);
	return true;
}

void QPlainTextEdit_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* param1) {
	static_cast<MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::inputMethodEvent(param1);
}

bool QPlainTextEdit_override_virtual_scrollContentsBy(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scrollContentsBy = std::move(slot_handle);
	return true;
}

void QPlainTextEdit_virtualbase_scrollContentsBy(void* self, int dx, int dy) {
	static_cast<MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
}

bool QPlainTextEdit_override_virtual_doSetTextCursor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__doSetTextCursor = std::move(slot_handle);
	return true;
}

void QPlainTextEdit_virtualbase_doSetTextCursor(void* self, QTextCursor* cursor) {
	static_cast<MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::doSetTextCursor(*cursor);
}

bool QPlainTextEdit_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	return true;
}

QSize* QPlainTextEdit_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::minimumSizeHint());
}

bool QPlainTextEdit_override_virtual_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	return true;
}

QSize* QPlainTextEdit_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::sizeHint());
}

bool QPlainTextEdit_override_virtual_setupViewport(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setupViewport = std::move(slot_handle);
	return true;
}

void QPlainTextEdit_virtualbase_setupViewport(void* self, QWidget* viewport) {
	static_cast<MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::setupViewport(viewport);
}

bool QPlainTextEdit_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QPlainTextEdit_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2) {
	return static_cast<MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::eventFilter(param1, param2);
}

bool QPlainTextEdit_override_virtual_viewportEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__viewportEvent = std::move(slot_handle);
	return true;
}

bool QPlainTextEdit_virtualbase_viewportEvent(void* self, QEvent* param1) {
	return static_cast<MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::viewportEvent(param1);
}

bool QPlainTextEdit_override_virtual_viewportSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__viewportSizeHint = std::move(slot_handle);
	return true;
}

QSize* QPlainTextEdit_virtualbase_viewportSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::viewportSizeHint());
}

bool QPlainTextEdit_override_virtual_devType(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = std::move(slot_handle);
	return true;
}

int QPlainTextEdit_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::devType();
}

bool QPlainTextEdit_override_virtual_setVisible(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = std::move(slot_handle);
	return true;
}

void QPlainTextEdit_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::setVisible(visible);
}

bool QPlainTextEdit_override_virtual_heightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = std::move(slot_handle);
	return true;
}

int QPlainTextEdit_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::heightForWidth(static_cast<int>(param1));
}

bool QPlainTextEdit_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = std::move(slot_handle);
	return true;
}

bool QPlainTextEdit_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::hasHeightForWidth();
}

bool QPlainTextEdit_override_virtual_paintEngine(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = std::move(slot_handle);
	return true;
}

QPaintEngine* QPlainTextEdit_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::paintEngine();
}

bool QPlainTextEdit_override_virtual_enterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = std::move(slot_handle);
	return true;
}

void QPlainTextEdit_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::enterEvent(event);
}

bool QPlainTextEdit_override_virtual_leaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = std::move(slot_handle);
	return true;
}

void QPlainTextEdit_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::leaveEvent(event);
}

bool QPlainTextEdit_override_virtual_moveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = std::move(slot_handle);
	return true;
}

void QPlainTextEdit_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::moveEvent(event);
}

bool QPlainTextEdit_override_virtual_closeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = std::move(slot_handle);
	return true;
}

void QPlainTextEdit_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::closeEvent(event);
}

bool QPlainTextEdit_override_virtual_tabletEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = std::move(slot_handle);
	return true;
}

void QPlainTextEdit_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::tabletEvent(event);
}

bool QPlainTextEdit_override_virtual_actionEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = std::move(slot_handle);
	return true;
}

void QPlainTextEdit_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::actionEvent(event);
}

bool QPlainTextEdit_override_virtual_hideEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = std::move(slot_handle);
	return true;
}

void QPlainTextEdit_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::hideEvent(event);
}

bool QPlainTextEdit_override_virtual_nativeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = std::move(slot_handle);
	return true;
}

bool QPlainTextEdit_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QPlainTextEdit_override_virtual_metric(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = std::move(slot_handle);
	return true;
}

int QPlainTextEdit_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::metric(static_cast<MiqtVirtualQPlainTextEdit::PaintDeviceMetric>(param1));
}

bool QPlainTextEdit_override_virtual_initPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = std::move(slot_handle);
	return true;
}

void QPlainTextEdit_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::initPainter(painter);
}

bool QPlainTextEdit_override_virtual_redirected(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = std::move(slot_handle);
	return true;
}

QPaintDevice* QPlainTextEdit_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::redirected(offset);
}

bool QPlainTextEdit_override_virtual_sharedPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = std::move(slot_handle);
	return true;
}

QPainter* QPlainTextEdit_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::sharedPainter();
}

bool QPlainTextEdit_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QPlainTextEdit_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::childEvent(event);
}

bool QPlainTextEdit_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QPlainTextEdit_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::customEvent(event);
}

bool QPlainTextEdit_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QPlainTextEdit_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::connectNotify(*signal);
}

bool QPlainTextEdit_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextEdit> slot_handle(slot);
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QPlainTextEdit_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQPlainTextEdit*>(self)->QPlainTextEdit::disconnectNotify(*signal);
}

QTextBlock* QPlainTextEdit_protectedbase_firstVisibleBlock(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QTextBlock(self_cast->firstVisibleBlock());
}

QPointF* QPlainTextEdit_protectedbase_contentOffset(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QPointF(self_cast->contentOffset());
}

QRectF* QPlainTextEdit_protectedbase_blockBoundingRect(bool* _dynamic_cast_ok, const void* self, QTextBlock* block) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QRectF(self_cast->blockBoundingRect(*block));
}

QRectF* QPlainTextEdit_protectedbase_blockBoundingGeometry(bool* _dynamic_cast_ok, const void* self, QTextBlock* block) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QRectF(self_cast->blockBoundingGeometry(*block));
}

QAbstractTextDocumentLayout__PaintContext* QPlainTextEdit_protectedbase_getPaintContext(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QAbstractTextDocumentLayout::PaintContext(self_cast->getPaintContext());
}

void QPlainTextEdit_protectedbase_zoomInF(bool* _dynamic_cast_ok, void* self, float range) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->zoomInF(static_cast<float>(range));
}

void QPlainTextEdit_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
}

QMargins* QPlainTextEdit_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QMargins(self_cast->viewportMargins());
}

void QPlainTextEdit_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->drawFrame(param1);
}

void QPlainTextEdit_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->initStyleOption(option);
}

void QPlainTextEdit_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QPlainTextEdit_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QPlainTextEdit_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QPlainTextEdit_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QPlainTextEdit_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QPlainTextEdit_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QPlainTextEdit_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QPlainTextEdit_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QPlainTextEdit_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQPlainTextEdit* self_cast = dynamic_cast<MiqtVirtualQPlainTextEdit*>( (QPlainTextEdit*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QPlainTextEdit_delete(QPlainTextEdit* self) {
	delete self;
}

class MiqtVirtualQPlainTextDocumentLayout final : public QPlainTextDocumentLayout {
public:

	MiqtVirtualQPlainTextDocumentLayout(QTextDocument* document): QPlainTextDocumentLayout(document) {}

	virtual ~MiqtVirtualQPlainTextDocumentLayout() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextDocumentLayout> handle__draw;

	// Subclass to allow providing a Go implementation
	virtual void draw(QPainter* param1, const QAbstractTextDocumentLayout::PaintContext& param2) override {
		if (!handle__draw) {
			QPlainTextDocumentLayout::draw(param1, param2);
			return;
		}

		QPainter* sigval1 = param1;
		const QAbstractTextDocumentLayout::PaintContext& param2_ret = param2;
		// Cast returned reference into pointer
		QAbstractTextDocumentLayout__PaintContext* sigval2 = const_cast<QAbstractTextDocumentLayout::PaintContext*>(&param2_ret);
		miqt_exec_callback_QPlainTextDocumentLayout_draw(this, handle__draw.value(), sigval1, sigval2);

	}

	friend void QPlainTextDocumentLayout_virtualbase_draw(void* self, QPainter* param1, QAbstractTextDocumentLayout__PaintContext* param2);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextDocumentLayout> handle__hitTest;

	// Subclass to allow providing a Go implementation
	virtual int hitTest(const QPointF& param1, Qt::HitTestAccuracy param2) const override {
		if (!handle__hitTest) {
			return QPlainTextDocumentLayout::hitTest(param1, param2);
		}

		const QPointF& param1_ret = param1;
		// Cast returned reference into pointer
		QPointF* sigval1 = const_cast<QPointF*>(&param1_ret);
		Qt::HitTestAccuracy param2_ret = param2;
		int sigval2 = static_cast<int>(param2_ret);
		int callback_return_value = miqt_exec_callback_QPlainTextDocumentLayout_hitTest(this, handle__hitTest.value(), sigval1, sigval2);
		return static_cast<int>(callback_return_value);
	}

	friend int QPlainTextDocumentLayout_virtualbase_hitTest(const void* self, QPointF* param1, int param2);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextDocumentLayout> handle__pageCount;

	// Subclass to allow providing a Go implementation
	virtual int pageCount() const override {
		if (!handle__pageCount) {
			return QPlainTextDocumentLayout::pageCount();
		}

		int callback_return_value = miqt_exec_callback_QPlainTextDocumentLayout_pageCount(this, handle__pageCount.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QPlainTextDocumentLayout_virtualbase_pageCount(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextDocumentLayout> handle__documentSize;

	// Subclass to allow providing a Go implementation
	virtual QSizeF documentSize() const override {
		if (!handle__documentSize) {
			return QPlainTextDocumentLayout::documentSize();
		}

		QSizeF* callback_return_value = miqt_exec_callback_QPlainTextDocumentLayout_documentSize(this, handle__documentSize.value());
		return *callback_return_value;
	}

	friend QSizeF* QPlainTextDocumentLayout_virtualbase_documentSize(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextDocumentLayout> handle__frameBoundingRect;

	// Subclass to allow providing a Go implementation
	virtual QRectF frameBoundingRect(QTextFrame* param1) const override {
		if (!handle__frameBoundingRect) {
			return QPlainTextDocumentLayout::frameBoundingRect(param1);
		}

		QTextFrame* sigval1 = param1;
		QRectF* callback_return_value = miqt_exec_callback_QPlainTextDocumentLayout_frameBoundingRect(this, handle__frameBoundingRect.value(), sigval1);
		return *callback_return_value;
	}

	friend QRectF* QPlainTextDocumentLayout_virtualbase_frameBoundingRect(const void* self, QTextFrame* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextDocumentLayout> handle__blockBoundingRect;

	// Subclass to allow providing a Go implementation
	virtual QRectF blockBoundingRect(const QTextBlock& block) const override {
		if (!handle__blockBoundingRect) {
			return QPlainTextDocumentLayout::blockBoundingRect(block);
		}

		const QTextBlock& block_ret = block;
		// Cast returned reference into pointer
		QTextBlock* sigval1 = const_cast<QTextBlock*>(&block_ret);
		QRectF* callback_return_value = miqt_exec_callback_QPlainTextDocumentLayout_blockBoundingRect(this, handle__blockBoundingRect.value(), sigval1);
		return *callback_return_value;
	}

	friend QRectF* QPlainTextDocumentLayout_virtualbase_blockBoundingRect(const void* self, QTextBlock* block);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextDocumentLayout> handle__documentChanged;

	// Subclass to allow providing a Go implementation
	virtual void documentChanged(int from, int param2, int charsAdded) override {
		if (!handle__documentChanged) {
			QPlainTextDocumentLayout::documentChanged(from, param2, charsAdded);
			return;
		}

		int sigval1 = from;
		int sigval2 = param2;
		int sigval3 = charsAdded;
		miqt_exec_callback_QPlainTextDocumentLayout_documentChanged(this, handle__documentChanged.value(), sigval1, sigval2, sigval3);

	}

	friend void QPlainTextDocumentLayout_virtualbase_documentChanged(void* self, int from, int param2, int charsAdded);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextDocumentLayout> handle__resizeInlineObject;

	// Subclass to allow providing a Go implementation
	virtual void resizeInlineObject(QTextInlineObject item, int posInDocument, const QTextFormat& format) override {
		if (!handle__resizeInlineObject) {
			QPlainTextDocumentLayout::resizeInlineObject(item, posInDocument, format);
			return;
		}

		QTextInlineObject* sigval1 = new QTextInlineObject(item);
		int sigval2 = posInDocument;
		const QTextFormat& format_ret = format;
		// Cast returned reference into pointer
		QTextFormat* sigval3 = const_cast<QTextFormat*>(&format_ret);
		miqt_exec_callback_QPlainTextDocumentLayout_resizeInlineObject(this, handle__resizeInlineObject.value(), sigval1, sigval2, sigval3);

	}

	friend void QPlainTextDocumentLayout_virtualbase_resizeInlineObject(void* self, QTextInlineObject* item, int posInDocument, QTextFormat* format);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextDocumentLayout> handle__positionInlineObject;

	// Subclass to allow providing a Go implementation
	virtual void positionInlineObject(QTextInlineObject item, int posInDocument, const QTextFormat& format) override {
		if (!handle__positionInlineObject) {
			QPlainTextDocumentLayout::positionInlineObject(item, posInDocument, format);
			return;
		}

		QTextInlineObject* sigval1 = new QTextInlineObject(item);
		int sigval2 = posInDocument;
		const QTextFormat& format_ret = format;
		// Cast returned reference into pointer
		QTextFormat* sigval3 = const_cast<QTextFormat*>(&format_ret);
		miqt_exec_callback_QPlainTextDocumentLayout_positionInlineObject(this, handle__positionInlineObject.value(), sigval1, sigval2, sigval3);

	}

	friend void QPlainTextDocumentLayout_virtualbase_positionInlineObject(void* self, QTextInlineObject* item, int posInDocument, QTextFormat* format);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextDocumentLayout> handle__drawInlineObject;

	// Subclass to allow providing a Go implementation
	virtual void drawInlineObject(QPainter* painter, const QRectF& rect, QTextInlineObject object, int posInDocument, const QTextFormat& format) override {
		if (!handle__drawInlineObject) {
			QPlainTextDocumentLayout::drawInlineObject(painter, rect, object, posInDocument, format);
			return;
		}

		QPainter* sigval1 = painter;
		const QRectF& rect_ret = rect;
		// Cast returned reference into pointer
		QRectF* sigval2 = const_cast<QRectF*>(&rect_ret);
		QTextInlineObject* sigval3 = new QTextInlineObject(object);
		int sigval4 = posInDocument;
		const QTextFormat& format_ret = format;
		// Cast returned reference into pointer
		QTextFormat* sigval5 = const_cast<QTextFormat*>(&format_ret);
		miqt_exec_callback_QPlainTextDocumentLayout_drawInlineObject(this, handle__drawInlineObject.value(), sigval1, sigval2, sigval3, sigval4, sigval5);

	}

	friend void QPlainTextDocumentLayout_virtualbase_drawInlineObject(void* self, QPainter* painter, QRectF* rect, QTextInlineObject* object, int posInDocument, QTextFormat* format);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextDocumentLayout> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QPlainTextDocumentLayout::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QPlainTextDocumentLayout_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QPlainTextDocumentLayout_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextDocumentLayout> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QPlainTextDocumentLayout::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QPlainTextDocumentLayout_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QPlainTextDocumentLayout_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextDocumentLayout> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QPlainTextDocumentLayout::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QPlainTextDocumentLayout_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QPlainTextDocumentLayout_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextDocumentLayout> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QPlainTextDocumentLayout::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QPlainTextDocumentLayout_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QPlainTextDocumentLayout_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextDocumentLayout> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QPlainTextDocumentLayout::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QPlainTextDocumentLayout_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QPlainTextDocumentLayout_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextDocumentLayout> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QPlainTextDocumentLayout::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QPlainTextDocumentLayout_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QPlainTextDocumentLayout_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextDocumentLayout> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QPlainTextDocumentLayout::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QPlainTextDocumentLayout_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QPlainTextDocumentLayout_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend int QPlainTextDocumentLayout_protectedbase_formatIndex(bool* _dynamic_cast_ok, void* self, int pos);
	friend QTextCharFormat* QPlainTextDocumentLayout_protectedbase_format(bool* _dynamic_cast_ok, void* self, int pos);
	friend QObject* QPlainTextDocumentLayout_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QPlainTextDocumentLayout_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QPlainTextDocumentLayout_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QPlainTextDocumentLayout_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QPlainTextDocumentLayout* QPlainTextDocumentLayout_new(QTextDocument* document) {
	return new (std::nothrow) MiqtVirtualQPlainTextDocumentLayout(document);
}

void QPlainTextDocumentLayout_virtbase(QPlainTextDocumentLayout* src, QAbstractTextDocumentLayout** outptr_QAbstractTextDocumentLayout) {
	*outptr_QAbstractTextDocumentLayout = static_cast<QAbstractTextDocumentLayout*>(src);
}

QMetaObject* QPlainTextDocumentLayout_metaObject(const QPlainTextDocumentLayout* self) {
	return (QMetaObject*) self->metaObject();
}

void* QPlainTextDocumentLayout_metacast(QPlainTextDocumentLayout* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QPlainTextDocumentLayout_tr(const char* s) {
	QString _ret = QPlainTextDocumentLayout::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPlainTextDocumentLayout_trUtf8(const char* s) {
	QString _ret = QPlainTextDocumentLayout::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QPlainTextDocumentLayout_draw(QPlainTextDocumentLayout* self, QPainter* param1, QAbstractTextDocumentLayout__PaintContext* param2) {
	self->draw(param1, *param2);
}

int QPlainTextDocumentLayout_hitTest(const QPlainTextDocumentLayout* self, QPointF* param1, int param2) {
	return self->hitTest(*param1, static_cast<Qt::HitTestAccuracy>(param2));
}

int QPlainTextDocumentLayout_pageCount(const QPlainTextDocumentLayout* self) {
	return self->pageCount();
}

QSizeF* QPlainTextDocumentLayout_documentSize(const QPlainTextDocumentLayout* self) {
	return new QSizeF(self->documentSize());
}

QRectF* QPlainTextDocumentLayout_frameBoundingRect(const QPlainTextDocumentLayout* self, QTextFrame* param1) {
	return new QRectF(self->frameBoundingRect(param1));
}

QRectF* QPlainTextDocumentLayout_blockBoundingRect(const QPlainTextDocumentLayout* self, QTextBlock* block) {
	return new QRectF(self->blockBoundingRect(*block));
}

void QPlainTextDocumentLayout_ensureBlockLayout(const QPlainTextDocumentLayout* self, QTextBlock* block) {
	self->ensureBlockLayout(*block);
}

void QPlainTextDocumentLayout_setCursorWidth(QPlainTextDocumentLayout* self, int width) {
	self->setCursorWidth(static_cast<int>(width));
}

int QPlainTextDocumentLayout_cursorWidth(const QPlainTextDocumentLayout* self) {
	return self->cursorWidth();
}

void QPlainTextDocumentLayout_requestUpdate(QPlainTextDocumentLayout* self) {
	self->requestUpdate();
}

struct miqt_string QPlainTextDocumentLayout_tr2(const char* s, const char* c) {
	QString _ret = QPlainTextDocumentLayout::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPlainTextDocumentLayout_tr3(const char* s, const char* c, int n) {
	QString _ret = QPlainTextDocumentLayout::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPlainTextDocumentLayout_trUtf82(const char* s, const char* c) {
	QString _ret = QPlainTextDocumentLayout::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QPlainTextDocumentLayout_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QPlainTextDocumentLayout::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QPlainTextDocumentLayout_override_virtual_draw(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextDocumentLayout> slot_handle(slot);
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__draw = std::move(slot_handle);
	return true;
}

void QPlainTextDocumentLayout_virtualbase_draw(void* self, QPainter* param1, QAbstractTextDocumentLayout__PaintContext* param2) {
	static_cast<MiqtVirtualQPlainTextDocumentLayout*>(self)->QPlainTextDocumentLayout::draw(param1, *param2);
}

bool QPlainTextDocumentLayout_override_virtual_hitTest(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextDocumentLayout> slot_handle(slot);
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hitTest = std::move(slot_handle);
	return true;
}

int QPlainTextDocumentLayout_virtualbase_hitTest(const void* self, QPointF* param1, int param2) {
	return static_cast<const MiqtVirtualQPlainTextDocumentLayout*>(self)->QPlainTextDocumentLayout::hitTest(*param1, static_cast<Qt::HitTestAccuracy>(param2));
}

bool QPlainTextDocumentLayout_override_virtual_pageCount(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextDocumentLayout> slot_handle(slot);
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__pageCount = std::move(slot_handle);
	return true;
}

int QPlainTextDocumentLayout_virtualbase_pageCount(const void* self) {
	return static_cast<const MiqtVirtualQPlainTextDocumentLayout*>(self)->QPlainTextDocumentLayout::pageCount();
}

bool QPlainTextDocumentLayout_override_virtual_documentSize(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextDocumentLayout> slot_handle(slot);
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__documentSize = std::move(slot_handle);
	return true;
}

QSizeF* QPlainTextDocumentLayout_virtualbase_documentSize(const void* self) {
	return new QSizeF(static_cast<const MiqtVirtualQPlainTextDocumentLayout*>(self)->QPlainTextDocumentLayout::documentSize());
}

bool QPlainTextDocumentLayout_override_virtual_frameBoundingRect(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextDocumentLayout> slot_handle(slot);
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__frameBoundingRect = std::move(slot_handle);
	return true;
}

QRectF* QPlainTextDocumentLayout_virtualbase_frameBoundingRect(const void* self, QTextFrame* param1) {
	return new QRectF(static_cast<const MiqtVirtualQPlainTextDocumentLayout*>(self)->QPlainTextDocumentLayout::frameBoundingRect(param1));
}

bool QPlainTextDocumentLayout_override_virtual_blockBoundingRect(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextDocumentLayout> slot_handle(slot);
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockBoundingRect = std::move(slot_handle);
	return true;
}

QRectF* QPlainTextDocumentLayout_virtualbase_blockBoundingRect(const void* self, QTextBlock* block) {
	return new QRectF(static_cast<const MiqtVirtualQPlainTextDocumentLayout*>(self)->QPlainTextDocumentLayout::blockBoundingRect(*block));
}

bool QPlainTextDocumentLayout_override_virtual_documentChanged(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextDocumentLayout> slot_handle(slot);
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__documentChanged = std::move(slot_handle);
	return true;
}

void QPlainTextDocumentLayout_virtualbase_documentChanged(void* self, int from, int param2, int charsAdded) {
	static_cast<MiqtVirtualQPlainTextDocumentLayout*>(self)->QPlainTextDocumentLayout::documentChanged(static_cast<int>(from), static_cast<int>(param2), static_cast<int>(charsAdded));
}

bool QPlainTextDocumentLayout_override_virtual_resizeInlineObject(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextDocumentLayout> slot_handle(slot);
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeInlineObject = std::move(slot_handle);
	return true;
}

void QPlainTextDocumentLayout_virtualbase_resizeInlineObject(void* self, QTextInlineObject* item, int posInDocument, QTextFormat* format) {
	static_cast<MiqtVirtualQPlainTextDocumentLayout*>(self)->QPlainTextDocumentLayout::resizeInlineObject(*item, static_cast<int>(posInDocument), *format);
}

bool QPlainTextDocumentLayout_override_virtual_positionInlineObject(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextDocumentLayout> slot_handle(slot);
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__positionInlineObject = std::move(slot_handle);
	return true;
}

void QPlainTextDocumentLayout_virtualbase_positionInlineObject(void* self, QTextInlineObject* item, int posInDocument, QTextFormat* format) {
	static_cast<MiqtVirtualQPlainTextDocumentLayout*>(self)->QPlainTextDocumentLayout::positionInlineObject(*item, static_cast<int>(posInDocument), *format);
}

bool QPlainTextDocumentLayout_override_virtual_drawInlineObject(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextDocumentLayout> slot_handle(slot);
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__drawInlineObject = std::move(slot_handle);
	return true;
}

void QPlainTextDocumentLayout_virtualbase_drawInlineObject(void* self, QPainter* painter, QRectF* rect, QTextInlineObject* object, int posInDocument, QTextFormat* format) {
	static_cast<MiqtVirtualQPlainTextDocumentLayout*>(self)->QPlainTextDocumentLayout::drawInlineObject(painter, *rect, *object, static_cast<int>(posInDocument), *format);
}

bool QPlainTextDocumentLayout_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextDocumentLayout> slot_handle(slot);
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QPlainTextDocumentLayout_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQPlainTextDocumentLayout*>(self)->QPlainTextDocumentLayout::event(event);
}

bool QPlainTextDocumentLayout_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextDocumentLayout> slot_handle(slot);
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QPlainTextDocumentLayout_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQPlainTextDocumentLayout*>(self)->QPlainTextDocumentLayout::eventFilter(watched, event);
}

bool QPlainTextDocumentLayout_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextDocumentLayout> slot_handle(slot);
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QPlainTextDocumentLayout_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQPlainTextDocumentLayout*>(self)->QPlainTextDocumentLayout::timerEvent(event);
}

bool QPlainTextDocumentLayout_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextDocumentLayout> slot_handle(slot);
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QPlainTextDocumentLayout_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQPlainTextDocumentLayout*>(self)->QPlainTextDocumentLayout::childEvent(event);
}

bool QPlainTextDocumentLayout_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextDocumentLayout> slot_handle(slot);
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QPlainTextDocumentLayout_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQPlainTextDocumentLayout*>(self)->QPlainTextDocumentLayout::customEvent(event);
}

bool QPlainTextDocumentLayout_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextDocumentLayout> slot_handle(slot);
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QPlainTextDocumentLayout_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQPlainTextDocumentLayout*>(self)->QPlainTextDocumentLayout::connectNotify(*signal);
}

bool QPlainTextDocumentLayout_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QPlainTextDocumentLayout> slot_handle(slot);
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QPlainTextDocumentLayout_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQPlainTextDocumentLayout*>(self)->QPlainTextDocumentLayout::disconnectNotify(*signal);
}

int QPlainTextDocumentLayout_protectedbase_formatIndex(bool* _dynamic_cast_ok, void* self, int pos) {
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->formatIndex(static_cast<int>(pos));
}

QTextCharFormat* QPlainTextDocumentLayout_protectedbase_format(bool* _dynamic_cast_ok, void* self, int pos) {
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QTextCharFormat(self_cast->format(static_cast<int>(pos)));
}

QObject* QPlainTextDocumentLayout_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QPlainTextDocumentLayout_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QPlainTextDocumentLayout_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QPlainTextDocumentLayout_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQPlainTextDocumentLayout* self_cast = dynamic_cast<MiqtVirtualQPlainTextDocumentLayout*>( (QPlainTextDocumentLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QPlainTextDocumentLayout_delete(QPlainTextDocumentLayout* self) {
	delete self;
}

