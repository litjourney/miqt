#include <memory>
#include <utility>
#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QAbstractScrollArea>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QColumnView>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFrame>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QItemSelection>
#include <QItemSelectionModel>
#include <QKeyEvent>
#include <QList>
#include <QMargins>
#include <QMetaMethod>
#include <QMetaObject>
#include <QModelIndex>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QRect>
#include <QRegion>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionFrame>
#include <QStyleOptionViewItem>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qcolumnview.h>
#include "gen_qcolumnview.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QColumnView(intptr_t);
void miqt_exec_callback_QColumnView_updatePreviewWidget(intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QColumnView_indexAt(const QColumnView*, intptr_t, QPoint*);
void miqt_exec_callback_QColumnView_scrollTo(QColumnView*, intptr_t, QModelIndex*, int);
QSize* miqt_exec_callback_QColumnView_sizeHint(const QColumnView*, intptr_t);
QRect* miqt_exec_callback_QColumnView_visualRect(const QColumnView*, intptr_t, QModelIndex*);
void miqt_exec_callback_QColumnView_setModel(QColumnView*, intptr_t, QAbstractItemModel*);
void miqt_exec_callback_QColumnView_setSelectionModel(QColumnView*, intptr_t, QItemSelectionModel*);
void miqt_exec_callback_QColumnView_setRootIndex(QColumnView*, intptr_t, QModelIndex*);
void miqt_exec_callback_QColumnView_selectAll(QColumnView*, intptr_t);
bool miqt_exec_callback_QColumnView_isIndexHidden(const QColumnView*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QColumnView_moveCursor(QColumnView*, intptr_t, int, int);
void miqt_exec_callback_QColumnView_resizeEvent(QColumnView*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QColumnView_setSelection(QColumnView*, intptr_t, QRect*, int);
QRegion* miqt_exec_callback_QColumnView_visualRegionForSelection(const QColumnView*, intptr_t, QItemSelection*);
int miqt_exec_callback_QColumnView_horizontalOffset(const QColumnView*, intptr_t);
int miqt_exec_callback_QColumnView_verticalOffset(const QColumnView*, intptr_t);
void miqt_exec_callback_QColumnView_rowsInserted(QColumnView*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QColumnView_currentChanged(QColumnView*, intptr_t, QModelIndex*, QModelIndex*);
void miqt_exec_callback_QColumnView_scrollContentsBy(QColumnView*, intptr_t, int, int);
QAbstractItemView* miqt_exec_callback_QColumnView_createColumn(QColumnView*, intptr_t, QModelIndex*);
void miqt_exec_callback_QColumnView_keyboardSearch(QColumnView*, intptr_t, struct miqt_string);
int miqt_exec_callback_QColumnView_sizeHintForRow(const QColumnView*, intptr_t, int);
int miqt_exec_callback_QColumnView_sizeHintForColumn(const QColumnView*, intptr_t, int);
QAbstractItemDelegate* miqt_exec_callback_QColumnView_itemDelegateForIndex(const QColumnView*, intptr_t, QModelIndex*);
QVariant* miqt_exec_callback_QColumnView_inputMethodQuery(const QColumnView*, intptr_t, int);
void miqt_exec_callback_QColumnView_reset(QColumnView*, intptr_t);
void miqt_exec_callback_QColumnView_doItemsLayout(QColumnView*, intptr_t);
void miqt_exec_callback_QColumnView_dataChanged(QColumnView*, intptr_t, QModelIndex*, QModelIndex*, struct miqt_array /* of int */ );
void miqt_exec_callback_QColumnView_rowsAboutToBeRemoved(QColumnView*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QColumnView_selectionChanged(QColumnView*, intptr_t, QItemSelection*, QItemSelection*);
void miqt_exec_callback_QColumnView_updateEditorData(QColumnView*, intptr_t);
void miqt_exec_callback_QColumnView_updateEditorGeometries(QColumnView*, intptr_t);
void miqt_exec_callback_QColumnView_updateGeometries(QColumnView*, intptr_t);
void miqt_exec_callback_QColumnView_verticalScrollbarAction(QColumnView*, intptr_t, int);
void miqt_exec_callback_QColumnView_horizontalScrollbarAction(QColumnView*, intptr_t, int);
void miqt_exec_callback_QColumnView_verticalScrollbarValueChanged(QColumnView*, intptr_t, int);
void miqt_exec_callback_QColumnView_horizontalScrollbarValueChanged(QColumnView*, intptr_t, int);
void miqt_exec_callback_QColumnView_closeEditor(QColumnView*, intptr_t, QWidget*, int);
void miqt_exec_callback_QColumnView_commitData(QColumnView*, intptr_t, QWidget*);
void miqt_exec_callback_QColumnView_editorDestroyed(QColumnView*, intptr_t, QObject*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QColumnView_selectedIndexes(const QColumnView*, intptr_t);
bool miqt_exec_callback_QColumnView_edit2(QColumnView*, intptr_t, QModelIndex*, int, QEvent*);
int miqt_exec_callback_QColumnView_selectionCommand(const QColumnView*, intptr_t, QModelIndex*, QEvent*);
void miqt_exec_callback_QColumnView_startDrag(QColumnView*, intptr_t, int);
void miqt_exec_callback_QColumnView_initViewItemOption(const QColumnView*, intptr_t, QStyleOptionViewItem*);
bool miqt_exec_callback_QColumnView_focusNextPrevChild(QColumnView*, intptr_t, bool);
bool miqt_exec_callback_QColumnView_event(QColumnView*, intptr_t, QEvent*);
bool miqt_exec_callback_QColumnView_viewportEvent(QColumnView*, intptr_t, QEvent*);
void miqt_exec_callback_QColumnView_mousePressEvent(QColumnView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QColumnView_mouseMoveEvent(QColumnView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QColumnView_mouseReleaseEvent(QColumnView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QColumnView_mouseDoubleClickEvent(QColumnView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QColumnView_dragEnterEvent(QColumnView*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QColumnView_dragMoveEvent(QColumnView*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QColumnView_dragLeaveEvent(QColumnView*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QColumnView_dropEvent(QColumnView*, intptr_t, QDropEvent*);
void miqt_exec_callback_QColumnView_focusInEvent(QColumnView*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QColumnView_focusOutEvent(QColumnView*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QColumnView_keyPressEvent(QColumnView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QColumnView_timerEvent(QColumnView*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QColumnView_inputMethodEvent(QColumnView*, intptr_t, QInputMethodEvent*);
bool miqt_exec_callback_QColumnView_eventFilter(QColumnView*, intptr_t, QObject*, QEvent*);
QSize* miqt_exec_callback_QColumnView_viewportSizeHint(const QColumnView*, intptr_t);
QSize* miqt_exec_callback_QColumnView_minimumSizeHint(const QColumnView*, intptr_t);
void miqt_exec_callback_QColumnView_setupViewport(QColumnView*, intptr_t, QWidget*);
void miqt_exec_callback_QColumnView_paintEvent(QColumnView*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QColumnView_wheelEvent(QColumnView*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QColumnView_contextMenuEvent(QColumnView*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QColumnView_changeEvent(QColumnView*, intptr_t, QEvent*);
void miqt_exec_callback_QColumnView_initStyleOption(const QColumnView*, intptr_t, QStyleOptionFrame*);
int miqt_exec_callback_QColumnView_devType(const QColumnView*, intptr_t);
void miqt_exec_callback_QColumnView_setVisible(QColumnView*, intptr_t, bool);
int miqt_exec_callback_QColumnView_heightForWidth(const QColumnView*, intptr_t, int);
bool miqt_exec_callback_QColumnView_hasHeightForWidth(const QColumnView*, intptr_t);
QPaintEngine* miqt_exec_callback_QColumnView_paintEngine(const QColumnView*, intptr_t);
void miqt_exec_callback_QColumnView_keyReleaseEvent(QColumnView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QColumnView_enterEvent(QColumnView*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QColumnView_leaveEvent(QColumnView*, intptr_t, QEvent*);
void miqt_exec_callback_QColumnView_moveEvent(QColumnView*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QColumnView_closeEvent(QColumnView*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QColumnView_tabletEvent(QColumnView*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QColumnView_actionEvent(QColumnView*, intptr_t, QActionEvent*);
void miqt_exec_callback_QColumnView_showEvent(QColumnView*, intptr_t, QShowEvent*);
void miqt_exec_callback_QColumnView_hideEvent(QColumnView*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QColumnView_nativeEvent(QColumnView*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QColumnView_metric(const QColumnView*, intptr_t, int);
void miqt_exec_callback_QColumnView_initPainter(const QColumnView*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QColumnView_redirected(const QColumnView*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QColumnView_sharedPainter(const QColumnView*, intptr_t);
void miqt_exec_callback_QColumnView_childEvent(QColumnView*, intptr_t, QChildEvent*);
void miqt_exec_callback_QColumnView_customEvent(QColumnView*, intptr_t, QEvent*);
void miqt_exec_callback_QColumnView_connectNotify(QColumnView*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QColumnView_disconnectNotify(QColumnView*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQColumnView final : public QColumnView {
public:

	MiqtVirtualQColumnView(QWidget* parent): QColumnView(parent) {}
	MiqtVirtualQColumnView(): QColumnView() {}

	virtual ~MiqtVirtualQColumnView() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__indexAt;
	bool owns_return__indexAt = false;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex indexAt(const QPoint& point) const override {
		if (!handle__indexAt) {
			return QColumnView::indexAt(point);
		}

		const QPoint& point_ret = point;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&point_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QColumnView_indexAt(this, handle__indexAt.value(), sigval1);
		std::unique_ptr<QModelIndex> callback_return_value_owner;
		if (owns_return__indexAt) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QModelIndex* QColumnView_virtualbase_indexAt(const void* self, QPoint* point);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__scrollTo;

	// Subclass to allow providing a Go implementation
	virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
		if (!handle__scrollTo) {
			QColumnView::scrollTo(index, hint);
			return;
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::ScrollHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);
		miqt_exec_callback_QColumnView_scrollTo(this, handle__scrollTo.value(), sigval1, sigval2);

	}

	friend void QColumnView_virtualbase_scrollTo(void* self, QModelIndex* index, int hint);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__sizeHint;
	bool owns_return__sizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (!handle__sizeHint) {
			return QColumnView::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QColumnView_sizeHint(this, handle__sizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__sizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QColumnView_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__visualRect;
	bool owns_return__visualRect = false;

	// Subclass to allow providing a Go implementation
	virtual QRect visualRect(const QModelIndex& index) const override {
		if (!handle__visualRect) {
			return QColumnView::visualRect(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QRect* callback_return_value = miqt_exec_callback_QColumnView_visualRect(this, handle__visualRect.value(), sigval1);
		std::unique_ptr<QRect> callback_return_value_owner;
		if (owns_return__visualRect) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QRect* QColumnView_virtualbase_visualRect(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__setModel;

	// Subclass to allow providing a Go implementation
	virtual void setModel(QAbstractItemModel* model) override {
		if (!handle__setModel) {
			QColumnView::setModel(model);
			return;
		}

		QAbstractItemModel* sigval1 = model;
		miqt_exec_callback_QColumnView_setModel(this, handle__setModel.value(), sigval1);

	}

	friend void QColumnView_virtualbase_setModel(void* self, QAbstractItemModel* model);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__setSelectionModel;

	// Subclass to allow providing a Go implementation
	virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
		if (!handle__setSelectionModel) {
			QColumnView::setSelectionModel(selectionModel);
			return;
		}

		QItemSelectionModel* sigval1 = selectionModel;
		miqt_exec_callback_QColumnView_setSelectionModel(this, handle__setSelectionModel.value(), sigval1);

	}

	friend void QColumnView_virtualbase_setSelectionModel(void* self, QItemSelectionModel* selectionModel);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__setRootIndex;

	// Subclass to allow providing a Go implementation
	virtual void setRootIndex(const QModelIndex& index) override {
		if (!handle__setRootIndex) {
			QColumnView::setRootIndex(index);
			return;
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		miqt_exec_callback_QColumnView_setRootIndex(this, handle__setRootIndex.value(), sigval1);

	}

	friend void QColumnView_virtualbase_setRootIndex(void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__selectAll;

	// Subclass to allow providing a Go implementation
	virtual void selectAll() override {
		if (!handle__selectAll) {
			QColumnView::selectAll();
			return;
		}

		miqt_exec_callback_QColumnView_selectAll(this, handle__selectAll.value());

	}

	friend void QColumnView_virtualbase_selectAll(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__isIndexHidden;

	// Subclass to allow providing a Go implementation
	virtual bool isIndexHidden(const QModelIndex& index) const override {
		if (!handle__isIndexHidden) {
			return QColumnView::isIndexHidden(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		bool callback_return_value = miqt_exec_callback_QColumnView_isIndexHidden(this, handle__isIndexHidden.value(), sigval1);
		return callback_return_value;
	}

	friend bool QColumnView_virtualbase_isIndexHidden(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__moveCursor;
	bool owns_return__moveCursor = false;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
		if (!handle__moveCursor) {
			return QColumnView::moveCursor(cursorAction, modifiers);
		}

		QAbstractItemView::CursorAction cursorAction_ret = cursorAction;
		int sigval1 = static_cast<int>(cursorAction_ret);
		Qt::KeyboardModifiers modifiers_ret = modifiers;
		int sigval2 = static_cast<int>(modifiers_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QColumnView_moveCursor(this, handle__moveCursor.value(), sigval1, sigval2);
		std::unique_ptr<QModelIndex> callback_return_value_owner;
		if (owns_return__moveCursor) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QModelIndex* QColumnView_virtualbase_moveCursor(void* self, int cursorAction, int modifiers);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__resizeEvent;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (!handle__resizeEvent) {
			QColumnView::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QColumnView_resizeEvent(this, handle__resizeEvent.value(), sigval1);

	}

	friend void QColumnView_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__setSelection;

	// Subclass to allow providing a Go implementation
	virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
		if (!handle__setSelection) {
			QColumnView::setSelection(rect, command);
			return;
		}

		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);
		QItemSelectionModel::SelectionFlags command_ret = command;
		int sigval2 = static_cast<int>(command_ret);
		miqt_exec_callback_QColumnView_setSelection(this, handle__setSelection.value(), sigval1, sigval2);

	}

	friend void QColumnView_virtualbase_setSelection(void* self, QRect* rect, int command);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__visualRegionForSelection;
	bool owns_return__visualRegionForSelection = false;

	// Subclass to allow providing a Go implementation
	virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
		if (!handle__visualRegionForSelection) {
			return QColumnView::visualRegionForSelection(selection);
		}

		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);
		QRegion* callback_return_value = miqt_exec_callback_QColumnView_visualRegionForSelection(this, handle__visualRegionForSelection.value(), sigval1);
		std::unique_ptr<QRegion> callback_return_value_owner;
		if (owns_return__visualRegionForSelection) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QRegion* QColumnView_virtualbase_visualRegionForSelection(const void* self, QItemSelection* selection);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__horizontalOffset;

	// Subclass to allow providing a Go implementation
	virtual int horizontalOffset() const override {
		if (!handle__horizontalOffset) {
			return QColumnView::horizontalOffset();
		}

		int callback_return_value = miqt_exec_callback_QColumnView_horizontalOffset(this, handle__horizontalOffset.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QColumnView_virtualbase_horizontalOffset(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__verticalOffset;

	// Subclass to allow providing a Go implementation
	virtual int verticalOffset() const override {
		if (!handle__verticalOffset) {
			return QColumnView::verticalOffset();
		}

		int callback_return_value = miqt_exec_callback_QColumnView_verticalOffset(this, handle__verticalOffset.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QColumnView_virtualbase_verticalOffset(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__rowsInserted;

	// Subclass to allow providing a Go implementation
	virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
		if (!handle__rowsInserted) {
			QColumnView::rowsInserted(parent, start, end);
			return;
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;
		miqt_exec_callback_QColumnView_rowsInserted(this, handle__rowsInserted.value(), sigval1, sigval2, sigval3);

	}

	friend void QColumnView_virtualbase_rowsInserted(void* self, QModelIndex* parent, int start, int end);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__currentChanged;

	// Subclass to allow providing a Go implementation
	virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
		if (!handle__currentChanged) {
			QColumnView::currentChanged(current, previous);
			return;
		}

		const QModelIndex& current_ret = current;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&current_ret);
		const QModelIndex& previous_ret = previous;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&previous_ret);
		miqt_exec_callback_QColumnView_currentChanged(this, handle__currentChanged.value(), sigval1, sigval2);

	}

	friend void QColumnView_virtualbase_currentChanged(void* self, QModelIndex* current, QModelIndex* previous);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__scrollContentsBy;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (!handle__scrollContentsBy) {
			QColumnView::scrollContentsBy(dx, dy);
			return;
		}

		int sigval1 = dx;
		int sigval2 = dy;
		miqt_exec_callback_QColumnView_scrollContentsBy(this, handle__scrollContentsBy.value(), sigval1, sigval2);

	}

	friend void QColumnView_virtualbase_scrollContentsBy(void* self, int dx, int dy);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__createColumn;

	// Subclass to allow providing a Go implementation
	virtual QAbstractItemView* createColumn(const QModelIndex& rootIndex) override {
		if (!handle__createColumn) {
			return QColumnView::createColumn(rootIndex);
		}

		const QModelIndex& rootIndex_ret = rootIndex;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&rootIndex_ret);
		QAbstractItemView* callback_return_value = miqt_exec_callback_QColumnView_createColumn(this, handle__createColumn.value(), sigval1);
		return callback_return_value;
	}

	friend QAbstractItemView* QColumnView_virtualbase_createColumn(void* self, QModelIndex* rootIndex);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__keyboardSearch;

	// Subclass to allow providing a Go implementation
	virtual void keyboardSearch(const QString& search) override {
		if (!handle__keyboardSearch) {
			QColumnView::keyboardSearch(search);
			return;
		}

		const QString search_ret = search;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray search_b = search_ret.toUtf8();
		struct miqt_string search_ms;
		search_ms.len = search_b.length();
		search_ms.data = static_cast<char*>(malloc(search_ms.len));
		memcpy(search_ms.data, search_b.data(), search_ms.len);
		struct miqt_string sigval1 = search_ms;
		miqt_exec_callback_QColumnView_keyboardSearch(this, handle__keyboardSearch.value(), sigval1);

	}

	friend void QColumnView_virtualbase_keyboardSearch(void* self, struct miqt_string search);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__sizeHintForRow;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForRow(int row) const override {
		if (!handle__sizeHintForRow) {
			return QColumnView::sizeHintForRow(row);
		}

		int sigval1 = row;
		int callback_return_value = miqt_exec_callback_QColumnView_sizeHintForRow(this, handle__sizeHintForRow.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QColumnView_virtualbase_sizeHintForRow(const void* self, int row);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__sizeHintForColumn;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForColumn(int column) const override {
		if (!handle__sizeHintForColumn) {
			return QColumnView::sizeHintForColumn(column);
		}

		int sigval1 = column;
		int callback_return_value = miqt_exec_callback_QColumnView_sizeHintForColumn(this, handle__sizeHintForColumn.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QColumnView_virtualbase_sizeHintForColumn(const void* self, int column);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__itemDelegateForIndex;

	// Subclass to allow providing a Go implementation
	virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
		if (!handle__itemDelegateForIndex) {
			return QColumnView::itemDelegateForIndex(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemDelegate* callback_return_value = miqt_exec_callback_QColumnView_itemDelegateForIndex(this, handle__itemDelegateForIndex.value(), sigval1);
		return callback_return_value;
	}

	friend QAbstractItemDelegate* QColumnView_virtualbase_itemDelegateForIndex(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__inputMethodQuery;
	bool owns_return__inputMethodQuery = false;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (!handle__inputMethodQuery) {
			return QColumnView::inputMethodQuery(query);
		}

		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);
		QVariant* callback_return_value = miqt_exec_callback_QColumnView_inputMethodQuery(this, handle__inputMethodQuery.value(), sigval1);
		std::unique_ptr<QVariant> callback_return_value_owner;
		if (owns_return__inputMethodQuery) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QVariant* QColumnView_virtualbase_inputMethodQuery(const void* self, int query);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__reset;

	// Subclass to allow providing a Go implementation
	virtual void reset() override {
		if (!handle__reset) {
			QColumnView::reset();
			return;
		}

		miqt_exec_callback_QColumnView_reset(this, handle__reset.value());

	}

	friend void QColumnView_virtualbase_reset(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__doItemsLayout;

	// Subclass to allow providing a Go implementation
	virtual void doItemsLayout() override {
		if (!handle__doItemsLayout) {
			QColumnView::doItemsLayout();
			return;
		}

		miqt_exec_callback_QColumnView_doItemsLayout(this, handle__doItemsLayout.value());

	}

	friend void QColumnView_virtualbase_doItemsLayout(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__dataChanged;

	// Subclass to allow providing a Go implementation
	virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
		if (!handle__dataChanged) {
			QColumnView::dataChanged(topLeft, bottomRight, roles);
			return;
		}

		const QModelIndex& topLeft_ret = topLeft;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&topLeft_ret);
		const QModelIndex& bottomRight_ret = bottomRight;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&bottomRight_ret);
		const QList<int>& roles_ret = roles;
		// Convert QList<> from C++ memory to manually-managed C memory
		int* roles_arr = static_cast<int*>(malloc(sizeof(int) * roles_ret.length()));
		for (size_t i = 0, e = roles_ret.length(); i < e; ++i) {
			roles_arr[i] = roles_ret[i];
		}
		struct miqt_array roles_out;
		roles_out.len = roles_ret.length();
		roles_out.data = static_cast<void*>(roles_arr);
		struct miqt_array /* of int */  sigval3 = roles_out;
		miqt_exec_callback_QColumnView_dataChanged(this, handle__dataChanged.value(), sigval1, sigval2, sigval3);

	}

	friend void QColumnView_virtualbase_dataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__rowsAboutToBeRemoved;

	// Subclass to allow providing a Go implementation
	virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
		if (!handle__rowsAboutToBeRemoved) {
			QColumnView::rowsAboutToBeRemoved(parent, start, end);
			return;
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;
		miqt_exec_callback_QColumnView_rowsAboutToBeRemoved(this, handle__rowsAboutToBeRemoved.value(), sigval1, sigval2, sigval3);

	}

	friend void QColumnView_virtualbase_rowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__selectionChanged;

	// Subclass to allow providing a Go implementation
	virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
		if (!handle__selectionChanged) {
			QColumnView::selectionChanged(selected, deselected);
			return;
		}

		const QItemSelection& selected_ret = selected;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selected_ret);
		const QItemSelection& deselected_ret = deselected;
		// Cast returned reference into pointer
		QItemSelection* sigval2 = const_cast<QItemSelection*>(&deselected_ret);
		miqt_exec_callback_QColumnView_selectionChanged(this, handle__selectionChanged.value(), sigval1, sigval2);

	}

	friend void QColumnView_virtualbase_selectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__updateEditorData;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorData() override {
		if (!handle__updateEditorData) {
			QColumnView::updateEditorData();
			return;
		}

		miqt_exec_callback_QColumnView_updateEditorData(this, handle__updateEditorData.value());

	}

	friend void QColumnView_virtualbase_updateEditorData(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__updateEditorGeometries;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorGeometries() override {
		if (!handle__updateEditorGeometries) {
			QColumnView::updateEditorGeometries();
			return;
		}

		miqt_exec_callback_QColumnView_updateEditorGeometries(this, handle__updateEditorGeometries.value());

	}

	friend void QColumnView_virtualbase_updateEditorGeometries(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__updateGeometries;

	// Subclass to allow providing a Go implementation
	virtual void updateGeometries() override {
		if (!handle__updateGeometries) {
			QColumnView::updateGeometries();
			return;
		}

		miqt_exec_callback_QColumnView_updateGeometries(this, handle__updateGeometries.value());

	}

	friend void QColumnView_virtualbase_updateGeometries(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__verticalScrollbarAction;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarAction(int action) override {
		if (!handle__verticalScrollbarAction) {
			QColumnView::verticalScrollbarAction(action);
			return;
		}

		int sigval1 = action;
		miqt_exec_callback_QColumnView_verticalScrollbarAction(this, handle__verticalScrollbarAction.value(), sigval1);

	}

	friend void QColumnView_virtualbase_verticalScrollbarAction(void* self, int action);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__horizontalScrollbarAction;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarAction(int action) override {
		if (!handle__horizontalScrollbarAction) {
			QColumnView::horizontalScrollbarAction(action);
			return;
		}

		int sigval1 = action;
		miqt_exec_callback_QColumnView_horizontalScrollbarAction(this, handle__horizontalScrollbarAction.value(), sigval1);

	}

	friend void QColumnView_virtualbase_horizontalScrollbarAction(void* self, int action);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__verticalScrollbarValueChanged;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarValueChanged(int value) override {
		if (!handle__verticalScrollbarValueChanged) {
			QColumnView::verticalScrollbarValueChanged(value);
			return;
		}

		int sigval1 = value;
		miqt_exec_callback_QColumnView_verticalScrollbarValueChanged(this, handle__verticalScrollbarValueChanged.value(), sigval1);

	}

	friend void QColumnView_virtualbase_verticalScrollbarValueChanged(void* self, int value);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__horizontalScrollbarValueChanged;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarValueChanged(int value) override {
		if (!handle__horizontalScrollbarValueChanged) {
			QColumnView::horizontalScrollbarValueChanged(value);
			return;
		}

		int sigval1 = value;
		miqt_exec_callback_QColumnView_horizontalScrollbarValueChanged(this, handle__horizontalScrollbarValueChanged.value(), sigval1);

	}

	friend void QColumnView_virtualbase_horizontalScrollbarValueChanged(void* self, int value);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__closeEditor;

	// Subclass to allow providing a Go implementation
	virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
		if (!handle__closeEditor) {
			QColumnView::closeEditor(editor, hint);
			return;
		}

		QWidget* sigval1 = editor;
		QAbstractItemDelegate::EndEditHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);
		miqt_exec_callback_QColumnView_closeEditor(this, handle__closeEditor.value(), sigval1, sigval2);

	}

	friend void QColumnView_virtualbase_closeEditor(void* self, QWidget* editor, int hint);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__commitData;

	// Subclass to allow providing a Go implementation
	virtual void commitData(QWidget* editor) override {
		if (!handle__commitData) {
			QColumnView::commitData(editor);
			return;
		}

		QWidget* sigval1 = editor;
		miqt_exec_callback_QColumnView_commitData(this, handle__commitData.value(), sigval1);

	}

	friend void QColumnView_virtualbase_commitData(void* self, QWidget* editor);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__editorDestroyed;

	// Subclass to allow providing a Go implementation
	virtual void editorDestroyed(QObject* editor) override {
		if (!handle__editorDestroyed) {
			QColumnView::editorDestroyed(editor);
			return;
		}

		QObject* sigval1 = editor;
		miqt_exec_callback_QColumnView_editorDestroyed(this, handle__editorDestroyed.value(), sigval1);

	}

	friend void QColumnView_virtualbase_editorDestroyed(void* self, QObject* editor);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__selectedIndexes;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList selectedIndexes() const override {
		if (!handle__selectedIndexes) {
			return QColumnView::selectedIndexes();
		}

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QColumnView_selectedIndexes(this, handle__selectedIndexes.value());
		QModelIndexList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QModelIndex** callback_return_value_arr = static_cast<QModelIndex**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(*(callback_return_value_arr[i]));
		}
		free(callback_return_value.data);
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of QModelIndex* */  QColumnView_virtualbase_selectedIndexes(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__edit2;

	// Subclass to allow providing a Go implementation
	virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
		if (!handle__edit2) {
			return QColumnView::edit(index, trigger, event);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::EditTrigger trigger_ret = trigger;
		int sigval2 = static_cast<int>(trigger_ret);
		QEvent* sigval3 = event;
		bool callback_return_value = miqt_exec_callback_QColumnView_edit2(this, handle__edit2.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QColumnView_virtualbase_edit2(void* self, QModelIndex* index, int trigger, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__selectionCommand;

	// Subclass to allow providing a Go implementation
	virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
		if (!handle__selectionCommand) {
			return QColumnView::selectionCommand(index, event);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QEvent* sigval2 = (QEvent*) event;
		int callback_return_value = miqt_exec_callback_QColumnView_selectionCommand(this, handle__selectionCommand.value(), sigval1, sigval2);
		return static_cast<QItemSelectionModel::SelectionFlags>(callback_return_value);
	}

	friend int QColumnView_virtualbase_selectionCommand(const void* self, QModelIndex* index, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__startDrag;

	// Subclass to allow providing a Go implementation
	virtual void startDrag(Qt::DropActions supportedActions) override {
		if (!handle__startDrag) {
			QColumnView::startDrag(supportedActions);
			return;
		}

		Qt::DropActions supportedActions_ret = supportedActions;
		int sigval1 = static_cast<int>(supportedActions_ret);
		miqt_exec_callback_QColumnView_startDrag(this, handle__startDrag.value(), sigval1);

	}

	friend void QColumnView_virtualbase_startDrag(void* self, int supportedActions);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__initViewItemOption;

	// Subclass to allow providing a Go implementation
	virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
		if (!handle__initViewItemOption) {
			QColumnView::initViewItemOption(option);
			return;
		}

		QStyleOptionViewItem* sigval1 = option;
		miqt_exec_callback_QColumnView_initViewItemOption(this, handle__initViewItemOption.value(), sigval1);

	}

	friend void QColumnView_virtualbase_initViewItemOption(const void* self, QStyleOptionViewItem* option);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__focusNextPrevChild;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (!handle__focusNextPrevChild) {
			return QColumnView::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QColumnView_focusNextPrevChild(this, handle__focusNextPrevChild.value(), sigval1);
		return callback_return_value;
	}

	friend bool QColumnView_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QColumnView::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QColumnView_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QColumnView_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__viewportEvent;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* event) override {
		if (!handle__viewportEvent) {
			return QColumnView::viewportEvent(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QColumnView_viewportEvent(this, handle__viewportEvent.value(), sigval1);
		return callback_return_value;
	}

	friend bool QColumnView_virtualbase_viewportEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__mousePressEvent;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (!handle__mousePressEvent) {
			QColumnView::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QColumnView_mousePressEvent(this, handle__mousePressEvent.value(), sigval1);

	}

	friend void QColumnView_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__mouseMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (!handle__mouseMoveEvent) {
			QColumnView::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QColumnView_mouseMoveEvent(this, handle__mouseMoveEvent.value(), sigval1);

	}

	friend void QColumnView_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__mouseReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (!handle__mouseReleaseEvent) {
			QColumnView::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QColumnView_mouseReleaseEvent(this, handle__mouseReleaseEvent.value(), sigval1);

	}

	friend void QColumnView_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__mouseDoubleClickEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (!handle__mouseDoubleClickEvent) {
			QColumnView::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QColumnView_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent.value(), sigval1);

	}

	friend void QColumnView_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__dragEnterEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (!handle__dragEnterEvent) {
			QColumnView::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QColumnView_dragEnterEvent(this, handle__dragEnterEvent.value(), sigval1);

	}

	friend void QColumnView_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__dragMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (!handle__dragMoveEvent) {
			QColumnView::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QColumnView_dragMoveEvent(this, handle__dragMoveEvent.value(), sigval1);

	}

	friend void QColumnView_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__dragLeaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (!handle__dragLeaveEvent) {
			QColumnView::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QColumnView_dragLeaveEvent(this, handle__dragLeaveEvent.value(), sigval1);

	}

	friend void QColumnView_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__dropEvent;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (!handle__dropEvent) {
			QColumnView::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QColumnView_dropEvent(this, handle__dropEvent.value(), sigval1);

	}

	friend void QColumnView_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__focusInEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (!handle__focusInEvent) {
			QColumnView::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QColumnView_focusInEvent(this, handle__focusInEvent.value(), sigval1);

	}

	friend void QColumnView_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__focusOutEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (!handle__focusOutEvent) {
			QColumnView::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QColumnView_focusOutEvent(this, handle__focusOutEvent.value(), sigval1);

	}

	friend void QColumnView_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__keyPressEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (!handle__keyPressEvent) {
			QColumnView::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QColumnView_keyPressEvent(this, handle__keyPressEvent.value(), sigval1);

	}

	friend void QColumnView_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QColumnView::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QColumnView_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QColumnView_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__inputMethodEvent;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (!handle__inputMethodEvent) {
			QColumnView::inputMethodEvent(event);
			return;
		}

		QInputMethodEvent* sigval1 = event;
		miqt_exec_callback_QColumnView_inputMethodEvent(this, handle__inputMethodEvent.value(), sigval1);

	}

	friend void QColumnView_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (!handle__eventFilter) {
			return QColumnView::eventFilter(object, event);
		}

		QObject* sigval1 = object;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QColumnView_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QColumnView_virtualbase_eventFilter(void* self, QObject* object, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__viewportSizeHint;
	bool owns_return__viewportSizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (!handle__viewportSizeHint) {
			return QColumnView::viewportSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QColumnView_viewportSizeHint(this, handle__viewportSizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__viewportSizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QColumnView_virtualbase_viewportSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__minimumSizeHint;
	bool owns_return__minimumSizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (!handle__minimumSizeHint) {
			return QColumnView::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QColumnView_minimumSizeHint(this, handle__minimumSizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__minimumSizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QColumnView_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__setupViewport;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (!handle__setupViewport) {
			QColumnView::setupViewport(viewport);
			return;
		}

		QWidget* sigval1 = viewport;
		miqt_exec_callback_QColumnView_setupViewport(this, handle__setupViewport.value(), sigval1);

	}

	friend void QColumnView_virtualbase_setupViewport(void* self, QWidget* viewport);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__paintEvent;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (!handle__paintEvent) {
			QColumnView::paintEvent(param1);
			return;
		}

		QPaintEvent* sigval1 = param1;
		miqt_exec_callback_QColumnView_paintEvent(this, handle__paintEvent.value(), sigval1);

	}

	friend void QColumnView_virtualbase_paintEvent(void* self, QPaintEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__wheelEvent;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (!handle__wheelEvent) {
			QColumnView::wheelEvent(param1);
			return;
		}

		QWheelEvent* sigval1 = param1;
		miqt_exec_callback_QColumnView_wheelEvent(this, handle__wheelEvent.value(), sigval1);

	}

	friend void QColumnView_virtualbase_wheelEvent(void* self, QWheelEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__contextMenuEvent;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (!handle__contextMenuEvent) {
			QColumnView::contextMenuEvent(param1);
			return;
		}

		QContextMenuEvent* sigval1 = param1;
		miqt_exec_callback_QColumnView_contextMenuEvent(this, handle__contextMenuEvent.value(), sigval1);

	}

	friend void QColumnView_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__changeEvent;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (!handle__changeEvent) {
			QColumnView::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QColumnView_changeEvent(this, handle__changeEvent.value(), sigval1);

	}

	friend void QColumnView_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__initStyleOption;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionFrame* option) const override {
		if (!handle__initStyleOption) {
			QColumnView::initStyleOption(option);
			return;
		}

		QStyleOptionFrame* sigval1 = option;
		miqt_exec_callback_QColumnView_initStyleOption(this, handle__initStyleOption.value(), sigval1);

	}

	friend void QColumnView_virtualbase_initStyleOption(const void* self, QStyleOptionFrame* option);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__devType;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (!handle__devType) {
			return QColumnView::devType();
		}

		int callback_return_value = miqt_exec_callback_QColumnView_devType(this, handle__devType.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QColumnView_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__setVisible;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (!handle__setVisible) {
			QColumnView::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QColumnView_setVisible(this, handle__setVisible.value(), sigval1);

	}

	friend void QColumnView_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__heightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (!handle__heightForWidth) {
			return QColumnView::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QColumnView_heightForWidth(this, handle__heightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QColumnView_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__hasHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (!handle__hasHeightForWidth) {
			return QColumnView::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QColumnView_hasHeightForWidth(this, handle__hasHeightForWidth.value());
		return callback_return_value;
	}

	friend bool QColumnView_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__paintEngine;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (!handle__paintEngine) {
			return QColumnView::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QColumnView_paintEngine(this, handle__paintEngine.value());
		return callback_return_value;
	}

	friend QPaintEngine* QColumnView_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__keyReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (!handle__keyReleaseEvent) {
			QColumnView::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QColumnView_keyReleaseEvent(this, handle__keyReleaseEvent.value(), sigval1);

	}

	friend void QColumnView_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__enterEvent;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (!handle__enterEvent) {
			QColumnView::enterEvent(event);
			return;
		}

		QEnterEvent* sigval1 = event;
		miqt_exec_callback_QColumnView_enterEvent(this, handle__enterEvent.value(), sigval1);

	}

	friend void QColumnView_virtualbase_enterEvent(void* self, QEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__leaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (!handle__leaveEvent) {
			QColumnView::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QColumnView_leaveEvent(this, handle__leaveEvent.value(), sigval1);

	}

	friend void QColumnView_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__moveEvent;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (!handle__moveEvent) {
			QColumnView::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QColumnView_moveEvent(this, handle__moveEvent.value(), sigval1);

	}

	friend void QColumnView_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__closeEvent;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (!handle__closeEvent) {
			QColumnView::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QColumnView_closeEvent(this, handle__closeEvent.value(), sigval1);

	}

	friend void QColumnView_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__tabletEvent;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (!handle__tabletEvent) {
			QColumnView::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QColumnView_tabletEvent(this, handle__tabletEvent.value(), sigval1);

	}

	friend void QColumnView_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__actionEvent;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (!handle__actionEvent) {
			QColumnView::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QColumnView_actionEvent(this, handle__actionEvent.value(), sigval1);

	}

	friend void QColumnView_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__showEvent;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (!handle__showEvent) {
			QColumnView::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QColumnView_showEvent(this, handle__showEvent.value(), sigval1);

	}

	friend void QColumnView_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__hideEvent;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (!handle__hideEvent) {
			QColumnView::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QColumnView_hideEvent(this, handle__hideEvent.value(), sigval1);

	}

	friend void QColumnView_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__nativeEvent;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (!handle__nativeEvent) {
			return QColumnView::nativeEvent(eventType, message, result);
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
		bool callback_return_value = miqt_exec_callback_QColumnView_nativeEvent(this, handle__nativeEvent.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QColumnView_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__metric;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (!handle__metric) {
			return QColumnView::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QColumnView_metric(this, handle__metric.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QColumnView_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__initPainter;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (!handle__initPainter) {
			QColumnView::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QColumnView_initPainter(this, handle__initPainter.value(), sigval1);

	}

	friend void QColumnView_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__redirected;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (!handle__redirected) {
			return QColumnView::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QColumnView_redirected(this, handle__redirected.value(), sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QColumnView_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__sharedPainter;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (!handle__sharedPainter) {
			return QColumnView::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QColumnView_sharedPainter(this, handle__sharedPainter.value());
		return callback_return_value;
	}

	friend QPainter* QColumnView_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QColumnView::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QColumnView_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QColumnView_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QColumnView::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QColumnView_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QColumnView_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QColumnView::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QColumnView_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QColumnView_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QColumnView::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QColumnView_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QColumnView_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QColumnView_protectedbase_initializeColumn(bool* _dynamic_cast_ok, const void* self, QAbstractItemView* column);
	friend int QColumnView_protectedbase_state(bool* _dynamic_cast_ok, const void* self);
	friend void QColumnView_protectedbase_setState(bool* _dynamic_cast_ok, void* self, int state);
	friend void QColumnView_protectedbase_scheduleDelayedItemsLayout(bool* _dynamic_cast_ok, void* self);
	friend void QColumnView_protectedbase_executeDelayedItemsLayout(bool* _dynamic_cast_ok, void* self);
	friend void QColumnView_protectedbase_setDirtyRegion(bool* _dynamic_cast_ok, void* self, QRegion* region);
	friend void QColumnView_protectedbase_scrollDirtyRegion(bool* _dynamic_cast_ok, void* self, int dx, int dy);
	friend QPoint* QColumnView_protectedbase_dirtyRegionOffset(bool* _dynamic_cast_ok, const void* self);
	friend void QColumnView_protectedbase_startAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend void QColumnView_protectedbase_stopAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend void QColumnView_protectedbase_doAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend int QColumnView_protectedbase_dropIndicatorPosition(bool* _dynamic_cast_ok, const void* self);
	friend void QColumnView_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom);
	friend QMargins* QColumnView_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self);
	friend void QColumnView_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
	friend void QColumnView_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QColumnView_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QColumnView_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QColumnView_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QColumnView_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QColumnView_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QColumnView_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QColumnView_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QColumnView_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QColumnView* QColumnView_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQColumnView(parent);
}

QColumnView* QColumnView_new2() {
	return new (std::nothrow) MiqtVirtualQColumnView();
}

void QColumnView_virtbase(QColumnView* src, QAbstractItemView** outptr_QAbstractItemView) {
	*outptr_QAbstractItemView = static_cast<QAbstractItemView*>(src);
}

QMetaObject* QColumnView_metaObject(const QColumnView* self) {
	return (QMetaObject*) self->metaObject();
}

void* QColumnView_metacast(QColumnView* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QColumnView_tr(const char* s) {
	QString _ret = QColumnView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QColumnView_updatePreviewWidget(QColumnView* self, QModelIndex* index) {
	self->updatePreviewWidget(*index);
}

void* QColumnView_connect_updatePreviewWidget(QColumnView* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView>>(slot);
	return new QMetaObject::Connection(QColumnView::connect(self, static_cast<void (QColumnView::*)(const QModelIndex&)>(&QColumnView::updatePreviewWidget), self, [slot_handle](const QModelIndex& index) {
		intptr_t slot = slot_handle->value();
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		miqt_exec_callback_QColumnView_updatePreviewWidget(slot, sigval1);
	}));
}

QModelIndex* QColumnView_indexAt(const QColumnView* self, QPoint* point) {
	return new QModelIndex(self->indexAt(*point));
}

void QColumnView_scrollTo(QColumnView* self, QModelIndex* index, int hint) {
	self->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

QSize* QColumnView_sizeHint(const QColumnView* self) {
	return new QSize(self->sizeHint());
}

QRect* QColumnView_visualRect(const QColumnView* self, QModelIndex* index) {
	return new QRect(self->visualRect(*index));
}

void QColumnView_setModel(QColumnView* self, QAbstractItemModel* model) {
	self->setModel(model);
}

void QColumnView_setSelectionModel(QColumnView* self, QItemSelectionModel* selectionModel) {
	self->setSelectionModel(selectionModel);
}

void QColumnView_setRootIndex(QColumnView* self, QModelIndex* index) {
	self->setRootIndex(*index);
}

void QColumnView_selectAll(QColumnView* self) {
	self->selectAll();
}

void QColumnView_setResizeGripsVisible(QColumnView* self, bool visible) {
	self->setResizeGripsVisible(visible);
}

bool QColumnView_resizeGripsVisible(const QColumnView* self) {
	return self->resizeGripsVisible();
}

QWidget* QColumnView_previewWidget(const QColumnView* self) {
	return self->previewWidget();
}

void QColumnView_setPreviewWidget(QColumnView* self, QWidget* widget) {
	self->setPreviewWidget(widget);
}

void QColumnView_setColumnWidths(QColumnView* self, struct miqt_array /* of int */  list) {
	QList<int> list_QList;
	list_QList.reserve(list.len);
	int* list_arr = static_cast<int*>(list.data);
	for(size_t i = 0; i < list.len; ++i) {
		list_QList.push_back(static_cast<int>(list_arr[i]));
	}
	self->setColumnWidths(list_QList);
}

struct miqt_array /* of int */  QColumnView_columnWidths(const QColumnView* self) {
	QList<int> _ret = self->columnWidths();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QColumnView_tr2(const char* s, const char* c) {
	QString _ret = QColumnView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QColumnView_tr3(const char* s, const char* c, int n) {
	QString _ret = QColumnView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QColumnView_override_virtual_indexAt(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__indexAt = std::move(slot_handle);
	self_cast->owns_return__indexAt = false;
	return true;
}

bool QColumnView_override_virtual_owned_indexAt(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__indexAt = std::move(slot_handle);
	self_cast->owns_return__indexAt = true;
	return true;
}

QModelIndex* QColumnView_virtualbase_indexAt(const void* self, QPoint* point) {
	return new QModelIndex(static_cast<const MiqtVirtualQColumnView*>(self)->QColumnView::indexAt(*point));
}

bool QColumnView_override_virtual_scrollTo(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scrollTo = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_scrollTo(void* self, QModelIndex* index, int hint) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::scrollTo(*index, static_cast<MiqtVirtualQColumnView::ScrollHint>(hint));
}

bool QColumnView_override_virtual_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = false;
	return true;
}

bool QColumnView_override_virtual_owned_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = true;
	return true;
}

QSize* QColumnView_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQColumnView*>(self)->QColumnView::sizeHint());
}

bool QColumnView_override_virtual_visualRect(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__visualRect = std::move(slot_handle);
	self_cast->owns_return__visualRect = false;
	return true;
}

bool QColumnView_override_virtual_owned_visualRect(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__visualRect = std::move(slot_handle);
	self_cast->owns_return__visualRect = true;
	return true;
}

QRect* QColumnView_virtualbase_visualRect(const void* self, QModelIndex* index) {
	return new QRect(static_cast<const MiqtVirtualQColumnView*>(self)->QColumnView::visualRect(*index));
}

bool QColumnView_override_virtual_setModel(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setModel = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_setModel(void* self, QAbstractItemModel* model) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::setModel(model);
}

bool QColumnView_override_virtual_setSelectionModel(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setSelectionModel = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_setSelectionModel(void* self, QItemSelectionModel* selectionModel) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::setSelectionModel(selectionModel);
}

bool QColumnView_override_virtual_setRootIndex(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setRootIndex = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_setRootIndex(void* self, QModelIndex* index) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::setRootIndex(*index);
}

bool QColumnView_override_virtual_selectAll(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__selectAll = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_selectAll(void* self) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::selectAll();
}

bool QColumnView_override_virtual_isIndexHidden(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isIndexHidden = std::move(slot_handle);
	return true;
}

bool QColumnView_virtualbase_isIndexHidden(const void* self, QModelIndex* index) {
	return static_cast<const MiqtVirtualQColumnView*>(self)->QColumnView::isIndexHidden(*index);
}

bool QColumnView_override_virtual_moveCursor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveCursor = std::move(slot_handle);
	self_cast->owns_return__moveCursor = false;
	return true;
}

bool QColumnView_override_virtual_owned_moveCursor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveCursor = std::move(slot_handle);
	self_cast->owns_return__moveCursor = true;
	return true;
}

QModelIndex* QColumnView_virtualbase_moveCursor(void* self, int cursorAction, int modifiers) {
	return new QModelIndex(static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::moveCursor(static_cast<MiqtVirtualQColumnView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
}

bool QColumnView_override_virtual_resizeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::resizeEvent(event);
}

bool QColumnView_override_virtual_setSelection(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setSelection = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_setSelection(void* self, QRect* rect, int command) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
}

bool QColumnView_override_virtual_visualRegionForSelection(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__visualRegionForSelection = std::move(slot_handle);
	self_cast->owns_return__visualRegionForSelection = false;
	return true;
}

bool QColumnView_override_virtual_owned_visualRegionForSelection(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__visualRegionForSelection = std::move(slot_handle);
	self_cast->owns_return__visualRegionForSelection = true;
	return true;
}

QRegion* QColumnView_virtualbase_visualRegionForSelection(const void* self, QItemSelection* selection) {
	return new QRegion(static_cast<const MiqtVirtualQColumnView*>(self)->QColumnView::visualRegionForSelection(*selection));
}

bool QColumnView_override_virtual_horizontalOffset(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__horizontalOffset = std::move(slot_handle);
	return true;
}

int QColumnView_virtualbase_horizontalOffset(const void* self) {
	return static_cast<const MiqtVirtualQColumnView*>(self)->QColumnView::horizontalOffset();
}

bool QColumnView_override_virtual_verticalOffset(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__verticalOffset = std::move(slot_handle);
	return true;
}

int QColumnView_virtualbase_verticalOffset(const void* self) {
	return static_cast<const MiqtVirtualQColumnView*>(self)->QColumnView::verticalOffset();
}

bool QColumnView_override_virtual_rowsInserted(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__rowsInserted = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_rowsInserted(void* self, QModelIndex* parent, int start, int end) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
}

bool QColumnView_override_virtual_currentChanged(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__currentChanged = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_currentChanged(void* self, QModelIndex* current, QModelIndex* previous) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::currentChanged(*current, *previous);
}

bool QColumnView_override_virtual_scrollContentsBy(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scrollContentsBy = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_scrollContentsBy(void* self, int dx, int dy) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
}

bool QColumnView_override_virtual_createColumn(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__createColumn = std::move(slot_handle);
	return true;
}

QAbstractItemView* QColumnView_virtualbase_createColumn(void* self, QModelIndex* rootIndex) {
	return static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::createColumn(*rootIndex);
}

bool QColumnView_override_virtual_keyboardSearch(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyboardSearch = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_keyboardSearch(void* self, struct miqt_string search) {
	QString search_QString = QString::fromUtf8(search.data, search.len);
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::keyboardSearch(search_QString);
}

bool QColumnView_override_virtual_sizeHintForRow(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHintForRow = std::move(slot_handle);
	return true;
}

int QColumnView_virtualbase_sizeHintForRow(const void* self, int row) {
	return static_cast<const MiqtVirtualQColumnView*>(self)->QColumnView::sizeHintForRow(static_cast<int>(row));
}

bool QColumnView_override_virtual_sizeHintForColumn(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHintForColumn = std::move(slot_handle);
	return true;
}

int QColumnView_virtualbase_sizeHintForColumn(const void* self, int column) {
	return static_cast<const MiqtVirtualQColumnView*>(self)->QColumnView::sizeHintForColumn(static_cast<int>(column));
}

bool QColumnView_override_virtual_itemDelegateForIndex(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__itemDelegateForIndex = std::move(slot_handle);
	return true;
}

QAbstractItemDelegate* QColumnView_virtualbase_itemDelegateForIndex(const void* self, QModelIndex* index) {
	return static_cast<const MiqtVirtualQColumnView*>(self)->QColumnView::itemDelegateForIndex(*index);
}

bool QColumnView_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	self_cast->owns_return__inputMethodQuery = false;
	return true;
}

bool QColumnView_override_virtual_owned_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	self_cast->owns_return__inputMethodQuery = true;
	return true;
}

QVariant* QColumnView_virtualbase_inputMethodQuery(const void* self, int query) {
	return new QVariant(static_cast<const MiqtVirtualQColumnView*>(self)->QColumnView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

bool QColumnView_override_virtual_reset(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__reset = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_reset(void* self) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::reset();
}

bool QColumnView_override_virtual_doItemsLayout(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__doItemsLayout = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_doItemsLayout(void* self) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::doItemsLayout();
}

bool QColumnView_override_virtual_dataChanged(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dataChanged = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_dataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
	QList<int> roles_QList;
	roles_QList.reserve(roles.len);
	int* roles_arr = static_cast<int*>(roles.data);
	for(size_t i = 0; i < roles.len; ++i) {
		roles_QList.push_back(static_cast<int>(roles_arr[i]));
	}
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::dataChanged(*topLeft, *bottomRight, roles_QList);
}

bool QColumnView_override_virtual_rowsAboutToBeRemoved(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__rowsAboutToBeRemoved = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_rowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
}

bool QColumnView_override_virtual_selectionChanged(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__selectionChanged = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_selectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::selectionChanged(*selected, *deselected);
}

bool QColumnView_override_virtual_updateEditorData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateEditorData = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_updateEditorData(void* self) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::updateEditorData();
}

bool QColumnView_override_virtual_updateEditorGeometries(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateEditorGeometries = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_updateEditorGeometries(void* self) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::updateEditorGeometries();
}

bool QColumnView_override_virtual_updateGeometries(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateGeometries = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_updateGeometries(void* self) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::updateGeometries();
}

bool QColumnView_override_virtual_verticalScrollbarAction(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__verticalScrollbarAction = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_verticalScrollbarAction(void* self, int action) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::verticalScrollbarAction(static_cast<int>(action));
}

bool QColumnView_override_virtual_horizontalScrollbarAction(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__horizontalScrollbarAction = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_horizontalScrollbarAction(void* self, int action) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::horizontalScrollbarAction(static_cast<int>(action));
}

bool QColumnView_override_virtual_verticalScrollbarValueChanged(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__verticalScrollbarValueChanged = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_verticalScrollbarValueChanged(void* self, int value) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::verticalScrollbarValueChanged(static_cast<int>(value));
}

bool QColumnView_override_virtual_horizontalScrollbarValueChanged(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__horizontalScrollbarValueChanged = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_horizontalScrollbarValueChanged(void* self, int value) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::horizontalScrollbarValueChanged(static_cast<int>(value));
}

bool QColumnView_override_virtual_closeEditor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEditor = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_closeEditor(void* self, QWidget* editor, int hint) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
}

bool QColumnView_override_virtual_commitData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__commitData = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_commitData(void* self, QWidget* editor) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::commitData(editor);
}

bool QColumnView_override_virtual_editorDestroyed(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__editorDestroyed = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_editorDestroyed(void* self, QObject* editor) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::editorDestroyed(editor);
}

bool QColumnView_override_virtual_selectedIndexes(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__selectedIndexes = std::move(slot_handle);
	return true;
}

struct miqt_array /* of QModelIndex* */  QColumnView_virtualbase_selectedIndexes(const void* self) {
	QModelIndexList _ret = static_cast<const MiqtVirtualQColumnView*>(self)->QColumnView::selectedIndexes();
	// Convert QList<> from C++ memory to manually-managed C memory
	QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QModelIndex(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QColumnView_override_virtual_edit2(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__edit2 = std::move(slot_handle);
	return true;
}

bool QColumnView_virtualbase_edit2(void* self, QModelIndex* index, int trigger, QEvent* event) {
	return static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::edit(*index, static_cast<MiqtVirtualQColumnView::EditTrigger>(trigger), event);
}

bool QColumnView_override_virtual_selectionCommand(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__selectionCommand = std::move(slot_handle);
	return true;
}

int QColumnView_virtualbase_selectionCommand(const void* self, QModelIndex* index, QEvent* event) {
	QItemSelectionModel::SelectionFlags _ret = static_cast<const MiqtVirtualQColumnView*>(self)->QColumnView::selectionCommand(*index, event);
	return static_cast<int>(_ret);
}

bool QColumnView_override_virtual_startDrag(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__startDrag = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_startDrag(void* self, int supportedActions) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::startDrag(static_cast<Qt::DropActions>(supportedActions));
}

bool QColumnView_override_virtual_initViewItemOption(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initViewItemOption = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_initViewItemOption(const void* self, QStyleOptionViewItem* option) {
	static_cast<const MiqtVirtualQColumnView*>(self)->QColumnView::initViewItemOption(option);
}

bool QColumnView_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = std::move(slot_handle);
	return true;
}

bool QColumnView_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::focusNextPrevChild(next);
}

bool QColumnView_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QColumnView_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::event(event);
}

bool QColumnView_override_virtual_viewportEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__viewportEvent = std::move(slot_handle);
	return true;
}

bool QColumnView_virtualbase_viewportEvent(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::viewportEvent(event);
}

bool QColumnView_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::mousePressEvent(event);
}

bool QColumnView_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::mouseMoveEvent(event);
}

bool QColumnView_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::mouseReleaseEvent(event);
}

bool QColumnView_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::mouseDoubleClickEvent(event);
}

bool QColumnView_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::dragEnterEvent(event);
}

bool QColumnView_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::dragMoveEvent(event);
}

bool QColumnView_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::dragLeaveEvent(event);
}

bool QColumnView_override_virtual_dropEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::dropEvent(event);
}

bool QColumnView_override_virtual_focusInEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::focusInEvent(event);
}

bool QColumnView_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::focusOutEvent(event);
}

bool QColumnView_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::keyPressEvent(event);
}

bool QColumnView_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::timerEvent(event);
}

bool QColumnView_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::inputMethodEvent(event);
}

bool QColumnView_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QColumnView_virtualbase_eventFilter(void* self, QObject* object, QEvent* event) {
	return static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::eventFilter(object, event);
}

bool QColumnView_override_virtual_viewportSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__viewportSizeHint = std::move(slot_handle);
	self_cast->owns_return__viewportSizeHint = false;
	return true;
}

bool QColumnView_override_virtual_owned_viewportSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__viewportSizeHint = std::move(slot_handle);
	self_cast->owns_return__viewportSizeHint = true;
	return true;
}

QSize* QColumnView_virtualbase_viewportSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQColumnView*>(self)->QColumnView::viewportSizeHint());
}

bool QColumnView_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	self_cast->owns_return__minimumSizeHint = false;
	return true;
}

bool QColumnView_override_virtual_owned_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	self_cast->owns_return__minimumSizeHint = true;
	return true;
}

QSize* QColumnView_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQColumnView*>(self)->QColumnView::minimumSizeHint());
}

bool QColumnView_override_virtual_setupViewport(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setupViewport = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_setupViewport(void* self, QWidget* viewport) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::setupViewport(viewport);
}

bool QColumnView_override_virtual_paintEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::paintEvent(param1);
}

bool QColumnView_override_virtual_wheelEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_wheelEvent(void* self, QWheelEvent* param1) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::wheelEvent(param1);
}

bool QColumnView_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::contextMenuEvent(param1);
}

bool QColumnView_override_virtual_changeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::changeEvent(param1);
}

bool QColumnView_override_virtual_initStyleOption(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initStyleOption = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_initStyleOption(const void* self, QStyleOptionFrame* option) {
	static_cast<const MiqtVirtualQColumnView*>(self)->QColumnView::initStyleOption(option);
}

bool QColumnView_override_virtual_devType(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = std::move(slot_handle);
	return true;
}

int QColumnView_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQColumnView*>(self)->QColumnView::devType();
}

bool QColumnView_override_virtual_setVisible(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::setVisible(visible);
}

bool QColumnView_override_virtual_heightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = std::move(slot_handle);
	return true;
}

int QColumnView_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQColumnView*>(self)->QColumnView::heightForWidth(static_cast<int>(param1));
}

bool QColumnView_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = std::move(slot_handle);
	return true;
}

bool QColumnView_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQColumnView*>(self)->QColumnView::hasHeightForWidth();
}

bool QColumnView_override_virtual_paintEngine(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = std::move(slot_handle);
	return true;
}

QPaintEngine* QColumnView_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQColumnView*>(self)->QColumnView::paintEngine();
}

bool QColumnView_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::keyReleaseEvent(event);
}

bool QColumnView_override_virtual_enterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::enterEvent(event);
}

bool QColumnView_override_virtual_leaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::leaveEvent(event);
}

bool QColumnView_override_virtual_moveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::moveEvent(event);
}

bool QColumnView_override_virtual_closeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::closeEvent(event);
}

bool QColumnView_override_virtual_tabletEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::tabletEvent(event);
}

bool QColumnView_override_virtual_actionEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::actionEvent(event);
}

bool QColumnView_override_virtual_showEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::showEvent(event);
}

bool QColumnView_override_virtual_hideEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::hideEvent(event);
}

bool QColumnView_override_virtual_nativeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = std::move(slot_handle);
	return true;
}

bool QColumnView_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
}

bool QColumnView_override_virtual_metric(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = std::move(slot_handle);
	return true;
}

int QColumnView_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQColumnView*>(self)->QColumnView::metric(static_cast<MiqtVirtualQColumnView::PaintDeviceMetric>(param1));
}

bool QColumnView_override_virtual_initPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQColumnView*>(self)->QColumnView::initPainter(painter);
}

bool QColumnView_override_virtual_redirected(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = std::move(slot_handle);
	return true;
}

QPaintDevice* QColumnView_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQColumnView*>(self)->QColumnView::redirected(offset);
}

bool QColumnView_override_virtual_sharedPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = std::move(slot_handle);
	return true;
}

QPainter* QColumnView_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQColumnView*>(self)->QColumnView::sharedPainter();
}

bool QColumnView_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::childEvent(event);
}

bool QColumnView_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::customEvent(event);
}

bool QColumnView_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::connectNotify(*signal);
}

bool QColumnView_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QColumnView> slot_handle(slot);
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QColumnView_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQColumnView*>(self)->QColumnView::disconnectNotify(*signal);
}

void QColumnView_protectedbase_initializeColumn(bool* _dynamic_cast_ok, const void* self, QAbstractItemView* column) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->initializeColumn(column);
}

int QColumnView_protectedbase_state(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}

	*_dynamic_cast_ok = true;
	MiqtVirtualQColumnView::State _ret = self_cast->state();
	return static_cast<int>(_ret);
}

void QColumnView_protectedbase_setState(bool* _dynamic_cast_ok, void* self, int state) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setState(static_cast<MiqtVirtualQColumnView::State>(state));
}

void QColumnView_protectedbase_scheduleDelayedItemsLayout(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->scheduleDelayedItemsLayout();
}

void QColumnView_protectedbase_executeDelayedItemsLayout(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->executeDelayedItemsLayout();
}

void QColumnView_protectedbase_setDirtyRegion(bool* _dynamic_cast_ok, void* self, QRegion* region) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setDirtyRegion(*region);
}

void QColumnView_protectedbase_scrollDirtyRegion(bool* _dynamic_cast_ok, void* self, int dx, int dy) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
}

QPoint* QColumnView_protectedbase_dirtyRegionOffset(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QPoint(self_cast->dirtyRegionOffset());
}

void QColumnView_protectedbase_startAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->startAutoScroll();
}

void QColumnView_protectedbase_stopAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->stopAutoScroll();
}

void QColumnView_protectedbase_doAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->doAutoScroll();
}

int QColumnView_protectedbase_dropIndicatorPosition(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}

	*_dynamic_cast_ok = true;
	MiqtVirtualQColumnView::DropIndicatorPosition _ret = self_cast->dropIndicatorPosition();
	return static_cast<int>(_ret);
}

void QColumnView_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
}

QMargins* QColumnView_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QMargins(self_cast->viewportMargins());
}

void QColumnView_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->drawFrame(param1);
}

void QColumnView_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QColumnView_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QColumnView_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QColumnView_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QColumnView_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QColumnView_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QColumnView_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QColumnView_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QColumnView_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQColumnView* self_cast = dynamic_cast<MiqtVirtualQColumnView*>( (QColumnView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QColumnView_delete(QColumnView* self) {
	delete self;
}

