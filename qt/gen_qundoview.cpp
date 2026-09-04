#include <memory>
#include <utility>
#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QAbstractScrollArea>
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
#include <QIcon>
#include <QInputMethodEvent>
#include <QItemSelection>
#include <QItemSelectionModel>
#include <QKeyEvent>
#include <QList>
#include <QListView>
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
#include <QUndoGroup>
#include <QUndoStack>
#include <QUndoView>
#include <QVariant>
#include <QVector>
#include <QWheelEvent>
#include <QWidget>
#include <qundoview.h>
#include "gen_qundoview.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QUndoView(intptr_t);
QRect* miqt_exec_callback_QUndoView_visualRect(const QUndoView*, intptr_t, QModelIndex*);
void miqt_exec_callback_QUndoView_scrollTo(QUndoView*, intptr_t, QModelIndex*, int);
QModelIndex* miqt_exec_callback_QUndoView_indexAt(const QUndoView*, intptr_t, QPoint*);
void miqt_exec_callback_QUndoView_doItemsLayout(QUndoView*, intptr_t);
void miqt_exec_callback_QUndoView_reset(QUndoView*, intptr_t);
void miqt_exec_callback_QUndoView_setRootIndex(QUndoView*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QUndoView_event(QUndoView*, intptr_t, QEvent*);
void miqt_exec_callback_QUndoView_scrollContentsBy(QUndoView*, intptr_t, int, int);
void miqt_exec_callback_QUndoView_dataChanged(QUndoView*, intptr_t, QModelIndex*, QModelIndex*, struct miqt_array /* of int */ );
void miqt_exec_callback_QUndoView_rowsInserted(QUndoView*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QUndoView_rowsAboutToBeRemoved(QUndoView*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QUndoView_mouseMoveEvent(QUndoView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QUndoView_mouseReleaseEvent(QUndoView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QUndoView_wheelEvent(QUndoView*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QUndoView_timerEvent(QUndoView*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QUndoView_resizeEvent(QUndoView*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QUndoView_dragMoveEvent(QUndoView*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QUndoView_dragLeaveEvent(QUndoView*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QUndoView_dropEvent(QUndoView*, intptr_t, QDropEvent*);
void miqt_exec_callback_QUndoView_startDrag(QUndoView*, intptr_t, int);
QStyleOptionViewItem* miqt_exec_callback_QUndoView_viewOptions(const QUndoView*, intptr_t);
void miqt_exec_callback_QUndoView_paintEvent(QUndoView*, intptr_t, QPaintEvent*);
int miqt_exec_callback_QUndoView_horizontalOffset(const QUndoView*, intptr_t);
int miqt_exec_callback_QUndoView_verticalOffset(const QUndoView*, intptr_t);
QModelIndex* miqt_exec_callback_QUndoView_moveCursor(QUndoView*, intptr_t, int, int);
void miqt_exec_callback_QUndoView_setSelection(QUndoView*, intptr_t, QRect*, int);
QRegion* miqt_exec_callback_QUndoView_visualRegionForSelection(const QUndoView*, intptr_t, QItemSelection*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QUndoView_selectedIndexes(const QUndoView*, intptr_t);
void miqt_exec_callback_QUndoView_updateGeometries(QUndoView*, intptr_t);
bool miqt_exec_callback_QUndoView_isIndexHidden(const QUndoView*, intptr_t, QModelIndex*);
void miqt_exec_callback_QUndoView_selectionChanged(QUndoView*, intptr_t, QItemSelection*, QItemSelection*);
void miqt_exec_callback_QUndoView_currentChanged(QUndoView*, intptr_t, QModelIndex*, QModelIndex*);
QSize* miqt_exec_callback_QUndoView_viewportSizeHint(const QUndoView*, intptr_t);
void miqt_exec_callback_QUndoView_setModel(QUndoView*, intptr_t, QAbstractItemModel*);
void miqt_exec_callback_QUndoView_setSelectionModel(QUndoView*, intptr_t, QItemSelectionModel*);
void miqt_exec_callback_QUndoView_keyboardSearch(QUndoView*, intptr_t, struct miqt_string);
int miqt_exec_callback_QUndoView_sizeHintForRow(const QUndoView*, intptr_t, int);
int miqt_exec_callback_QUndoView_sizeHintForColumn(const QUndoView*, intptr_t, int);
QVariant* miqt_exec_callback_QUndoView_inputMethodQuery(const QUndoView*, intptr_t, int);
void miqt_exec_callback_QUndoView_selectAll(QUndoView*, intptr_t);
void miqt_exec_callback_QUndoView_updateEditorData(QUndoView*, intptr_t);
void miqt_exec_callback_QUndoView_updateEditorGeometries(QUndoView*, intptr_t);
void miqt_exec_callback_QUndoView_verticalScrollbarAction(QUndoView*, intptr_t, int);
void miqt_exec_callback_QUndoView_horizontalScrollbarAction(QUndoView*, intptr_t, int);
void miqt_exec_callback_QUndoView_verticalScrollbarValueChanged(QUndoView*, intptr_t, int);
void miqt_exec_callback_QUndoView_horizontalScrollbarValueChanged(QUndoView*, intptr_t, int);
void miqt_exec_callback_QUndoView_closeEditor(QUndoView*, intptr_t, QWidget*, int);
void miqt_exec_callback_QUndoView_commitData(QUndoView*, intptr_t, QWidget*);
void miqt_exec_callback_QUndoView_editorDestroyed(QUndoView*, intptr_t, QObject*);
bool miqt_exec_callback_QUndoView_edit2(QUndoView*, intptr_t, QModelIndex*, int, QEvent*);
int miqt_exec_callback_QUndoView_selectionCommand(const QUndoView*, intptr_t, QModelIndex*, QEvent*);
bool miqt_exec_callback_QUndoView_focusNextPrevChild(QUndoView*, intptr_t, bool);
bool miqt_exec_callback_QUndoView_viewportEvent(QUndoView*, intptr_t, QEvent*);
void miqt_exec_callback_QUndoView_mousePressEvent(QUndoView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QUndoView_mouseDoubleClickEvent(QUndoView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QUndoView_dragEnterEvent(QUndoView*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QUndoView_focusInEvent(QUndoView*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QUndoView_focusOutEvent(QUndoView*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QUndoView_keyPressEvent(QUndoView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QUndoView_inputMethodEvent(QUndoView*, intptr_t, QInputMethodEvent*);
bool miqt_exec_callback_QUndoView_eventFilter(QUndoView*, intptr_t, QObject*, QEvent*);
QSize* miqt_exec_callback_QUndoView_minimumSizeHint(const QUndoView*, intptr_t);
QSize* miqt_exec_callback_QUndoView_sizeHint(const QUndoView*, intptr_t);
void miqt_exec_callback_QUndoView_setupViewport(QUndoView*, intptr_t, QWidget*);
void miqt_exec_callback_QUndoView_contextMenuEvent(QUndoView*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QUndoView_changeEvent(QUndoView*, intptr_t, QEvent*);
int miqt_exec_callback_QUndoView_devType(const QUndoView*, intptr_t);
void miqt_exec_callback_QUndoView_setVisible(QUndoView*, intptr_t, bool);
int miqt_exec_callback_QUndoView_heightForWidth(const QUndoView*, intptr_t, int);
bool miqt_exec_callback_QUndoView_hasHeightForWidth(const QUndoView*, intptr_t);
QPaintEngine* miqt_exec_callback_QUndoView_paintEngine(const QUndoView*, intptr_t);
void miqt_exec_callback_QUndoView_keyReleaseEvent(QUndoView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QUndoView_enterEvent(QUndoView*, intptr_t, QEvent*);
void miqt_exec_callback_QUndoView_leaveEvent(QUndoView*, intptr_t, QEvent*);
void miqt_exec_callback_QUndoView_moveEvent(QUndoView*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QUndoView_closeEvent(QUndoView*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QUndoView_tabletEvent(QUndoView*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QUndoView_actionEvent(QUndoView*, intptr_t, QActionEvent*);
void miqt_exec_callback_QUndoView_showEvent(QUndoView*, intptr_t, QShowEvent*);
void miqt_exec_callback_QUndoView_hideEvent(QUndoView*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QUndoView_nativeEvent(QUndoView*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QUndoView_metric(const QUndoView*, intptr_t, int);
void miqt_exec_callback_QUndoView_initPainter(const QUndoView*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QUndoView_redirected(const QUndoView*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QUndoView_sharedPainter(const QUndoView*, intptr_t);
void miqt_exec_callback_QUndoView_childEvent(QUndoView*, intptr_t, QChildEvent*);
void miqt_exec_callback_QUndoView_customEvent(QUndoView*, intptr_t, QEvent*);
void miqt_exec_callback_QUndoView_connectNotify(QUndoView*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QUndoView_disconnectNotify(QUndoView*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQUndoView final : public QUndoView {
public:

	MiqtVirtualQUndoView(QWidget* parent): QUndoView(parent) {}
	MiqtVirtualQUndoView(): QUndoView() {}
	MiqtVirtualQUndoView(QUndoStack* stack): QUndoView(stack) {}
	MiqtVirtualQUndoView(QUndoGroup* group): QUndoView(group) {}
	MiqtVirtualQUndoView(QUndoStack* stack, QWidget* parent): QUndoView(stack, parent) {}
	MiqtVirtualQUndoView(QUndoGroup* group, QWidget* parent): QUndoView(group, parent) {}

	virtual ~MiqtVirtualQUndoView() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__visualRect;
	bool owns_return__visualRect = false;

	// Subclass to allow providing a Go implementation
	virtual QRect visualRect(const QModelIndex& index) const override {
		if (!handle__visualRect) {
			return QUndoView::visualRect(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QRect* callback_return_value = miqt_exec_callback_QUndoView_visualRect(this, handle__visualRect.value(), sigval1);
		std::unique_ptr<QRect> callback_return_value_owner;
		if (owns_return__visualRect) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QRect* QUndoView_virtualbase_visualRect(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__scrollTo;

	// Subclass to allow providing a Go implementation
	virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
		if (!handle__scrollTo) {
			QUndoView::scrollTo(index, hint);
			return;
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::ScrollHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);
		miqt_exec_callback_QUndoView_scrollTo(this, handle__scrollTo.value(), sigval1, sigval2);

	}

	friend void QUndoView_virtualbase_scrollTo(void* self, QModelIndex* index, int hint);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__indexAt;
	bool owns_return__indexAt = false;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex indexAt(const QPoint& p) const override {
		if (!handle__indexAt) {
			return QUndoView::indexAt(p);
		}

		const QPoint& p_ret = p;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&p_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QUndoView_indexAt(this, handle__indexAt.value(), sigval1);
		std::unique_ptr<QModelIndex> callback_return_value_owner;
		if (owns_return__indexAt) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QModelIndex* QUndoView_virtualbase_indexAt(const void* self, QPoint* p);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__doItemsLayout;

	// Subclass to allow providing a Go implementation
	virtual void doItemsLayout() override {
		if (!handle__doItemsLayout) {
			QUndoView::doItemsLayout();
			return;
		}

		miqt_exec_callback_QUndoView_doItemsLayout(this, handle__doItemsLayout.value());

	}

	friend void QUndoView_virtualbase_doItemsLayout(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__reset;

	// Subclass to allow providing a Go implementation
	virtual void reset() override {
		if (!handle__reset) {
			QUndoView::reset();
			return;
		}

		miqt_exec_callback_QUndoView_reset(this, handle__reset.value());

	}

	friend void QUndoView_virtualbase_reset(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__setRootIndex;

	// Subclass to allow providing a Go implementation
	virtual void setRootIndex(const QModelIndex& index) override {
		if (!handle__setRootIndex) {
			QUndoView::setRootIndex(index);
			return;
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		miqt_exec_callback_QUndoView_setRootIndex(this, handle__setRootIndex.value(), sigval1);

	}

	friend void QUndoView_virtualbase_setRootIndex(void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (!handle__event) {
			return QUndoView::event(e);
		}

		QEvent* sigval1 = e;
		bool callback_return_value = miqt_exec_callback_QUndoView_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QUndoView_virtualbase_event(void* self, QEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__scrollContentsBy;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (!handle__scrollContentsBy) {
			QUndoView::scrollContentsBy(dx, dy);
			return;
		}

		int sigval1 = dx;
		int sigval2 = dy;
		miqt_exec_callback_QUndoView_scrollContentsBy(this, handle__scrollContentsBy.value(), sigval1, sigval2);

	}

	friend void QUndoView_virtualbase_scrollContentsBy(void* self, int dx, int dy);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__dataChanged;

	// Subclass to allow providing a Go implementation
	virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QVector<int>& roles) override {
		if (!handle__dataChanged) {
			QUndoView::dataChanged(topLeft, bottomRight, roles);
			return;
		}

		const QModelIndex& topLeft_ret = topLeft;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&topLeft_ret);
		const QModelIndex& bottomRight_ret = bottomRight;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&bottomRight_ret);
		const QVector<int>& roles_ret = roles;
		// Convert QList<> from C++ memory to manually-managed C memory
		int* roles_arr = static_cast<int*>(malloc(sizeof(int) * roles_ret.length()));
		for (size_t i = 0, e = roles_ret.length(); i < e; ++i) {
			roles_arr[i] = roles_ret[i];
		}
		struct miqt_array roles_out;
		roles_out.len = roles_ret.length();
		roles_out.data = static_cast<void*>(roles_arr);
		struct miqt_array /* of int */  sigval3 = roles_out;
		miqt_exec_callback_QUndoView_dataChanged(this, handle__dataChanged.value(), sigval1, sigval2, sigval3);

	}

	friend void QUndoView_virtualbase_dataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__rowsInserted;

	// Subclass to allow providing a Go implementation
	virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
		if (!handle__rowsInserted) {
			QUndoView::rowsInserted(parent, start, end);
			return;
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;
		miqt_exec_callback_QUndoView_rowsInserted(this, handle__rowsInserted.value(), sigval1, sigval2, sigval3);

	}

	friend void QUndoView_virtualbase_rowsInserted(void* self, QModelIndex* parent, int start, int end);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__rowsAboutToBeRemoved;

	// Subclass to allow providing a Go implementation
	virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
		if (!handle__rowsAboutToBeRemoved) {
			QUndoView::rowsAboutToBeRemoved(parent, start, end);
			return;
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;
		miqt_exec_callback_QUndoView_rowsAboutToBeRemoved(this, handle__rowsAboutToBeRemoved.value(), sigval1, sigval2, sigval3);

	}

	friend void QUndoView_virtualbase_rowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__mouseMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* e) override {
		if (!handle__mouseMoveEvent) {
			QUndoView::mouseMoveEvent(e);
			return;
		}

		QMouseEvent* sigval1 = e;
		miqt_exec_callback_QUndoView_mouseMoveEvent(this, handle__mouseMoveEvent.value(), sigval1);

	}

	friend void QUndoView_virtualbase_mouseMoveEvent(void* self, QMouseEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__mouseReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (!handle__mouseReleaseEvent) {
			QUndoView::mouseReleaseEvent(e);
			return;
		}

		QMouseEvent* sigval1 = e;
		miqt_exec_callback_QUndoView_mouseReleaseEvent(this, handle__mouseReleaseEvent.value(), sigval1);

	}

	friend void QUndoView_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__wheelEvent;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* e) override {
		if (!handle__wheelEvent) {
			QUndoView::wheelEvent(e);
			return;
		}

		QWheelEvent* sigval1 = e;
		miqt_exec_callback_QUndoView_wheelEvent(this, handle__wheelEvent.value(), sigval1);

	}

	friend void QUndoView_virtualbase_wheelEvent(void* self, QWheelEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* e) override {
		if (!handle__timerEvent) {
			QUndoView::timerEvent(e);
			return;
		}

		QTimerEvent* sigval1 = e;
		miqt_exec_callback_QUndoView_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QUndoView_virtualbase_timerEvent(void* self, QTimerEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__resizeEvent;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* e) override {
		if (!handle__resizeEvent) {
			QUndoView::resizeEvent(e);
			return;
		}

		QResizeEvent* sigval1 = e;
		miqt_exec_callback_QUndoView_resizeEvent(this, handle__resizeEvent.value(), sigval1);

	}

	friend void QUndoView_virtualbase_resizeEvent(void* self, QResizeEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__dragMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* e) override {
		if (!handle__dragMoveEvent) {
			QUndoView::dragMoveEvent(e);
			return;
		}

		QDragMoveEvent* sigval1 = e;
		miqt_exec_callback_QUndoView_dragMoveEvent(this, handle__dragMoveEvent.value(), sigval1);

	}

	friend void QUndoView_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__dragLeaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
		if (!handle__dragLeaveEvent) {
			QUndoView::dragLeaveEvent(e);
			return;
		}

		QDragLeaveEvent* sigval1 = e;
		miqt_exec_callback_QUndoView_dragLeaveEvent(this, handle__dragLeaveEvent.value(), sigval1);

	}

	friend void QUndoView_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__dropEvent;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* e) override {
		if (!handle__dropEvent) {
			QUndoView::dropEvent(e);
			return;
		}

		QDropEvent* sigval1 = e;
		miqt_exec_callback_QUndoView_dropEvent(this, handle__dropEvent.value(), sigval1);

	}

	friend void QUndoView_virtualbase_dropEvent(void* self, QDropEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__startDrag;

	// Subclass to allow providing a Go implementation
	virtual void startDrag(Qt::DropActions supportedActions) override {
		if (!handle__startDrag) {
			QUndoView::startDrag(supportedActions);
			return;
		}

		Qt::DropActions supportedActions_ret = supportedActions;
		int sigval1 = static_cast<int>(supportedActions_ret);
		miqt_exec_callback_QUndoView_startDrag(this, handle__startDrag.value(), sigval1);

	}

	friend void QUndoView_virtualbase_startDrag(void* self, int supportedActions);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__viewOptions;
	bool owns_return__viewOptions = false;

	// Subclass to allow providing a Go implementation
	virtual QStyleOptionViewItem viewOptions() const override {
		if (!handle__viewOptions) {
			return QUndoView::viewOptions();
		}

		QStyleOptionViewItem* callback_return_value = miqt_exec_callback_QUndoView_viewOptions(this, handle__viewOptions.value());
		std::unique_ptr<QStyleOptionViewItem> callback_return_value_owner;
		if (owns_return__viewOptions) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QStyleOptionViewItem* QUndoView_virtualbase_viewOptions(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__paintEvent;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* e) override {
		if (!handle__paintEvent) {
			QUndoView::paintEvent(e);
			return;
		}

		QPaintEvent* sigval1 = e;
		miqt_exec_callback_QUndoView_paintEvent(this, handle__paintEvent.value(), sigval1);

	}

	friend void QUndoView_virtualbase_paintEvent(void* self, QPaintEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__horizontalOffset;

	// Subclass to allow providing a Go implementation
	virtual int horizontalOffset() const override {
		if (!handle__horizontalOffset) {
			return QUndoView::horizontalOffset();
		}

		int callback_return_value = miqt_exec_callback_QUndoView_horizontalOffset(this, handle__horizontalOffset.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QUndoView_virtualbase_horizontalOffset(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__verticalOffset;

	// Subclass to allow providing a Go implementation
	virtual int verticalOffset() const override {
		if (!handle__verticalOffset) {
			return QUndoView::verticalOffset();
		}

		int callback_return_value = miqt_exec_callback_QUndoView_verticalOffset(this, handle__verticalOffset.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QUndoView_virtualbase_verticalOffset(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__moveCursor;
	bool owns_return__moveCursor = false;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
		if (!handle__moveCursor) {
			return QUndoView::moveCursor(cursorAction, modifiers);
		}

		QAbstractItemView::CursorAction cursorAction_ret = cursorAction;
		int sigval1 = static_cast<int>(cursorAction_ret);
		Qt::KeyboardModifiers modifiers_ret = modifiers;
		int sigval2 = static_cast<int>(modifiers_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QUndoView_moveCursor(this, handle__moveCursor.value(), sigval1, sigval2);
		std::unique_ptr<QModelIndex> callback_return_value_owner;
		if (owns_return__moveCursor) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QModelIndex* QUndoView_virtualbase_moveCursor(void* self, int cursorAction, int modifiers);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__setSelection;

	// Subclass to allow providing a Go implementation
	virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
		if (!handle__setSelection) {
			QUndoView::setSelection(rect, command);
			return;
		}

		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);
		QItemSelectionModel::SelectionFlags command_ret = command;
		int sigval2 = static_cast<int>(command_ret);
		miqt_exec_callback_QUndoView_setSelection(this, handle__setSelection.value(), sigval1, sigval2);

	}

	friend void QUndoView_virtualbase_setSelection(void* self, QRect* rect, int command);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__visualRegionForSelection;
	bool owns_return__visualRegionForSelection = false;

	// Subclass to allow providing a Go implementation
	virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
		if (!handle__visualRegionForSelection) {
			return QUndoView::visualRegionForSelection(selection);
		}

		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);
		QRegion* callback_return_value = miqt_exec_callback_QUndoView_visualRegionForSelection(this, handle__visualRegionForSelection.value(), sigval1);
		std::unique_ptr<QRegion> callback_return_value_owner;
		if (owns_return__visualRegionForSelection) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QRegion* QUndoView_virtualbase_visualRegionForSelection(const void* self, QItemSelection* selection);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__selectedIndexes;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList selectedIndexes() const override {
		if (!handle__selectedIndexes) {
			return QUndoView::selectedIndexes();
		}

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QUndoView_selectedIndexes(this, handle__selectedIndexes.value());
		QModelIndexList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QModelIndex** callback_return_value_arr = static_cast<QModelIndex**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(*(callback_return_value_arr[i]));
		}
		free(callback_return_value.data);
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of QModelIndex* */  QUndoView_virtualbase_selectedIndexes(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__updateGeometries;

	// Subclass to allow providing a Go implementation
	virtual void updateGeometries() override {
		if (!handle__updateGeometries) {
			QUndoView::updateGeometries();
			return;
		}

		miqt_exec_callback_QUndoView_updateGeometries(this, handle__updateGeometries.value());

	}

	friend void QUndoView_virtualbase_updateGeometries(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__isIndexHidden;

	// Subclass to allow providing a Go implementation
	virtual bool isIndexHidden(const QModelIndex& index) const override {
		if (!handle__isIndexHidden) {
			return QUndoView::isIndexHidden(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		bool callback_return_value = miqt_exec_callback_QUndoView_isIndexHidden(this, handle__isIndexHidden.value(), sigval1);
		return callback_return_value;
	}

	friend bool QUndoView_virtualbase_isIndexHidden(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__selectionChanged;

	// Subclass to allow providing a Go implementation
	virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
		if (!handle__selectionChanged) {
			QUndoView::selectionChanged(selected, deselected);
			return;
		}

		const QItemSelection& selected_ret = selected;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selected_ret);
		const QItemSelection& deselected_ret = deselected;
		// Cast returned reference into pointer
		QItemSelection* sigval2 = const_cast<QItemSelection*>(&deselected_ret);
		miqt_exec_callback_QUndoView_selectionChanged(this, handle__selectionChanged.value(), sigval1, sigval2);

	}

	friend void QUndoView_virtualbase_selectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__currentChanged;

	// Subclass to allow providing a Go implementation
	virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
		if (!handle__currentChanged) {
			QUndoView::currentChanged(current, previous);
			return;
		}

		const QModelIndex& current_ret = current;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&current_ret);
		const QModelIndex& previous_ret = previous;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&previous_ret);
		miqt_exec_callback_QUndoView_currentChanged(this, handle__currentChanged.value(), sigval1, sigval2);

	}

	friend void QUndoView_virtualbase_currentChanged(void* self, QModelIndex* current, QModelIndex* previous);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__viewportSizeHint;
	bool owns_return__viewportSizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (!handle__viewportSizeHint) {
			return QUndoView::viewportSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QUndoView_viewportSizeHint(this, handle__viewportSizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__viewportSizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QUndoView_virtualbase_viewportSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__setModel;

	// Subclass to allow providing a Go implementation
	virtual void setModel(QAbstractItemModel* model) override {
		if (!handle__setModel) {
			QUndoView::setModel(model);
			return;
		}

		QAbstractItemModel* sigval1 = model;
		miqt_exec_callback_QUndoView_setModel(this, handle__setModel.value(), sigval1);

	}

	friend void QUndoView_virtualbase_setModel(void* self, QAbstractItemModel* model);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__setSelectionModel;

	// Subclass to allow providing a Go implementation
	virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
		if (!handle__setSelectionModel) {
			QUndoView::setSelectionModel(selectionModel);
			return;
		}

		QItemSelectionModel* sigval1 = selectionModel;
		miqt_exec_callback_QUndoView_setSelectionModel(this, handle__setSelectionModel.value(), sigval1);

	}

	friend void QUndoView_virtualbase_setSelectionModel(void* self, QItemSelectionModel* selectionModel);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__keyboardSearch;

	// Subclass to allow providing a Go implementation
	virtual void keyboardSearch(const QString& search) override {
		if (!handle__keyboardSearch) {
			QUndoView::keyboardSearch(search);
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
		miqt_exec_callback_QUndoView_keyboardSearch(this, handle__keyboardSearch.value(), sigval1);

	}

	friend void QUndoView_virtualbase_keyboardSearch(void* self, struct miqt_string search);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__sizeHintForRow;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForRow(int row) const override {
		if (!handle__sizeHintForRow) {
			return QUndoView::sizeHintForRow(row);
		}

		int sigval1 = row;
		int callback_return_value = miqt_exec_callback_QUndoView_sizeHintForRow(this, handle__sizeHintForRow.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QUndoView_virtualbase_sizeHintForRow(const void* self, int row);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__sizeHintForColumn;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForColumn(int column) const override {
		if (!handle__sizeHintForColumn) {
			return QUndoView::sizeHintForColumn(column);
		}

		int sigval1 = column;
		int callback_return_value = miqt_exec_callback_QUndoView_sizeHintForColumn(this, handle__sizeHintForColumn.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QUndoView_virtualbase_sizeHintForColumn(const void* self, int column);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__inputMethodQuery;
	bool owns_return__inputMethodQuery = false;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (!handle__inputMethodQuery) {
			return QUndoView::inputMethodQuery(query);
		}

		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);
		QVariant* callback_return_value = miqt_exec_callback_QUndoView_inputMethodQuery(this, handle__inputMethodQuery.value(), sigval1);
		std::unique_ptr<QVariant> callback_return_value_owner;
		if (owns_return__inputMethodQuery) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QVariant* QUndoView_virtualbase_inputMethodQuery(const void* self, int query);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__selectAll;

	// Subclass to allow providing a Go implementation
	virtual void selectAll() override {
		if (!handle__selectAll) {
			QUndoView::selectAll();
			return;
		}

		miqt_exec_callback_QUndoView_selectAll(this, handle__selectAll.value());

	}

	friend void QUndoView_virtualbase_selectAll(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__updateEditorData;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorData() override {
		if (!handle__updateEditorData) {
			QUndoView::updateEditorData();
			return;
		}

		miqt_exec_callback_QUndoView_updateEditorData(this, handle__updateEditorData.value());

	}

	friend void QUndoView_virtualbase_updateEditorData(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__updateEditorGeometries;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorGeometries() override {
		if (!handle__updateEditorGeometries) {
			QUndoView::updateEditorGeometries();
			return;
		}

		miqt_exec_callback_QUndoView_updateEditorGeometries(this, handle__updateEditorGeometries.value());

	}

	friend void QUndoView_virtualbase_updateEditorGeometries(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__verticalScrollbarAction;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarAction(int action) override {
		if (!handle__verticalScrollbarAction) {
			QUndoView::verticalScrollbarAction(action);
			return;
		}

		int sigval1 = action;
		miqt_exec_callback_QUndoView_verticalScrollbarAction(this, handle__verticalScrollbarAction.value(), sigval1);

	}

	friend void QUndoView_virtualbase_verticalScrollbarAction(void* self, int action);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__horizontalScrollbarAction;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarAction(int action) override {
		if (!handle__horizontalScrollbarAction) {
			QUndoView::horizontalScrollbarAction(action);
			return;
		}

		int sigval1 = action;
		miqt_exec_callback_QUndoView_horizontalScrollbarAction(this, handle__horizontalScrollbarAction.value(), sigval1);

	}

	friend void QUndoView_virtualbase_horizontalScrollbarAction(void* self, int action);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__verticalScrollbarValueChanged;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarValueChanged(int value) override {
		if (!handle__verticalScrollbarValueChanged) {
			QUndoView::verticalScrollbarValueChanged(value);
			return;
		}

		int sigval1 = value;
		miqt_exec_callback_QUndoView_verticalScrollbarValueChanged(this, handle__verticalScrollbarValueChanged.value(), sigval1);

	}

	friend void QUndoView_virtualbase_verticalScrollbarValueChanged(void* self, int value);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__horizontalScrollbarValueChanged;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarValueChanged(int value) override {
		if (!handle__horizontalScrollbarValueChanged) {
			QUndoView::horizontalScrollbarValueChanged(value);
			return;
		}

		int sigval1 = value;
		miqt_exec_callback_QUndoView_horizontalScrollbarValueChanged(this, handle__horizontalScrollbarValueChanged.value(), sigval1);

	}

	friend void QUndoView_virtualbase_horizontalScrollbarValueChanged(void* self, int value);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__closeEditor;

	// Subclass to allow providing a Go implementation
	virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
		if (!handle__closeEditor) {
			QUndoView::closeEditor(editor, hint);
			return;
		}

		QWidget* sigval1 = editor;
		QAbstractItemDelegate::EndEditHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);
		miqt_exec_callback_QUndoView_closeEditor(this, handle__closeEditor.value(), sigval1, sigval2);

	}

	friend void QUndoView_virtualbase_closeEditor(void* self, QWidget* editor, int hint);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__commitData;

	// Subclass to allow providing a Go implementation
	virtual void commitData(QWidget* editor) override {
		if (!handle__commitData) {
			QUndoView::commitData(editor);
			return;
		}

		QWidget* sigval1 = editor;
		miqt_exec_callback_QUndoView_commitData(this, handle__commitData.value(), sigval1);

	}

	friend void QUndoView_virtualbase_commitData(void* self, QWidget* editor);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__editorDestroyed;

	// Subclass to allow providing a Go implementation
	virtual void editorDestroyed(QObject* editor) override {
		if (!handle__editorDestroyed) {
			QUndoView::editorDestroyed(editor);
			return;
		}

		QObject* sigval1 = editor;
		miqt_exec_callback_QUndoView_editorDestroyed(this, handle__editorDestroyed.value(), sigval1);

	}

	friend void QUndoView_virtualbase_editorDestroyed(void* self, QObject* editor);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__edit2;

	// Subclass to allow providing a Go implementation
	virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
		if (!handle__edit2) {
			return QUndoView::edit(index, trigger, event);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::EditTrigger trigger_ret = trigger;
		int sigval2 = static_cast<int>(trigger_ret);
		QEvent* sigval3 = event;
		bool callback_return_value = miqt_exec_callback_QUndoView_edit2(this, handle__edit2.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QUndoView_virtualbase_edit2(void* self, QModelIndex* index, int trigger, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__selectionCommand;

	// Subclass to allow providing a Go implementation
	virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
		if (!handle__selectionCommand) {
			return QUndoView::selectionCommand(index, event);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QEvent* sigval2 = (QEvent*) event;
		int callback_return_value = miqt_exec_callback_QUndoView_selectionCommand(this, handle__selectionCommand.value(), sigval1, sigval2);
		return static_cast<QItemSelectionModel::SelectionFlags>(callback_return_value);
	}

	friend int QUndoView_virtualbase_selectionCommand(const void* self, QModelIndex* index, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__focusNextPrevChild;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (!handle__focusNextPrevChild) {
			return QUndoView::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QUndoView_focusNextPrevChild(this, handle__focusNextPrevChild.value(), sigval1);
		return callback_return_value;
	}

	friend bool QUndoView_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__viewportEvent;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* event) override {
		if (!handle__viewportEvent) {
			return QUndoView::viewportEvent(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QUndoView_viewportEvent(this, handle__viewportEvent.value(), sigval1);
		return callback_return_value;
	}

	friend bool QUndoView_virtualbase_viewportEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__mousePressEvent;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (!handle__mousePressEvent) {
			QUndoView::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QUndoView_mousePressEvent(this, handle__mousePressEvent.value(), sigval1);

	}

	friend void QUndoView_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__mouseDoubleClickEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (!handle__mouseDoubleClickEvent) {
			QUndoView::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QUndoView_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent.value(), sigval1);

	}

	friend void QUndoView_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__dragEnterEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (!handle__dragEnterEvent) {
			QUndoView::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QUndoView_dragEnterEvent(this, handle__dragEnterEvent.value(), sigval1);

	}

	friend void QUndoView_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__focusInEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (!handle__focusInEvent) {
			QUndoView::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QUndoView_focusInEvent(this, handle__focusInEvent.value(), sigval1);

	}

	friend void QUndoView_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__focusOutEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (!handle__focusOutEvent) {
			QUndoView::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QUndoView_focusOutEvent(this, handle__focusOutEvent.value(), sigval1);

	}

	friend void QUndoView_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__keyPressEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (!handle__keyPressEvent) {
			QUndoView::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QUndoView_keyPressEvent(this, handle__keyPressEvent.value(), sigval1);

	}

	friend void QUndoView_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__inputMethodEvent;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (!handle__inputMethodEvent) {
			QUndoView::inputMethodEvent(event);
			return;
		}

		QInputMethodEvent* sigval1 = event;
		miqt_exec_callback_QUndoView_inputMethodEvent(this, handle__inputMethodEvent.value(), sigval1);

	}

	friend void QUndoView_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (!handle__eventFilter) {
			return QUndoView::eventFilter(object, event);
		}

		QObject* sigval1 = object;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QUndoView_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QUndoView_virtualbase_eventFilter(void* self, QObject* object, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__minimumSizeHint;
	bool owns_return__minimumSizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (!handle__minimumSizeHint) {
			return QUndoView::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QUndoView_minimumSizeHint(this, handle__minimumSizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__minimumSizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QUndoView_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__sizeHint;
	bool owns_return__sizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (!handle__sizeHint) {
			return QUndoView::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QUndoView_sizeHint(this, handle__sizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__sizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QUndoView_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__setupViewport;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (!handle__setupViewport) {
			QUndoView::setupViewport(viewport);
			return;
		}

		QWidget* sigval1 = viewport;
		miqt_exec_callback_QUndoView_setupViewport(this, handle__setupViewport.value(), sigval1);

	}

	friend void QUndoView_virtualbase_setupViewport(void* self, QWidget* viewport);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__contextMenuEvent;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (!handle__contextMenuEvent) {
			QUndoView::contextMenuEvent(param1);
			return;
		}

		QContextMenuEvent* sigval1 = param1;
		miqt_exec_callback_QUndoView_contextMenuEvent(this, handle__contextMenuEvent.value(), sigval1);

	}

	friend void QUndoView_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__changeEvent;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (!handle__changeEvent) {
			QUndoView::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QUndoView_changeEvent(this, handle__changeEvent.value(), sigval1);

	}

	friend void QUndoView_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__devType;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (!handle__devType) {
			return QUndoView::devType();
		}

		int callback_return_value = miqt_exec_callback_QUndoView_devType(this, handle__devType.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QUndoView_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__setVisible;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (!handle__setVisible) {
			QUndoView::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QUndoView_setVisible(this, handle__setVisible.value(), sigval1);

	}

	friend void QUndoView_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__heightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (!handle__heightForWidth) {
			return QUndoView::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QUndoView_heightForWidth(this, handle__heightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QUndoView_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__hasHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (!handle__hasHeightForWidth) {
			return QUndoView::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QUndoView_hasHeightForWidth(this, handle__hasHeightForWidth.value());
		return callback_return_value;
	}

	friend bool QUndoView_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__paintEngine;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (!handle__paintEngine) {
			return QUndoView::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QUndoView_paintEngine(this, handle__paintEngine.value());
		return callback_return_value;
	}

	friend QPaintEngine* QUndoView_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__keyReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (!handle__keyReleaseEvent) {
			QUndoView::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QUndoView_keyReleaseEvent(this, handle__keyReleaseEvent.value(), sigval1);

	}

	friend void QUndoView_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__enterEvent;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (!handle__enterEvent) {
			QUndoView::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QUndoView_enterEvent(this, handle__enterEvent.value(), sigval1);

	}

	friend void QUndoView_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__leaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (!handle__leaveEvent) {
			QUndoView::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QUndoView_leaveEvent(this, handle__leaveEvent.value(), sigval1);

	}

	friend void QUndoView_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__moveEvent;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (!handle__moveEvent) {
			QUndoView::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QUndoView_moveEvent(this, handle__moveEvent.value(), sigval1);

	}

	friend void QUndoView_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__closeEvent;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (!handle__closeEvent) {
			QUndoView::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QUndoView_closeEvent(this, handle__closeEvent.value(), sigval1);

	}

	friend void QUndoView_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__tabletEvent;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (!handle__tabletEvent) {
			QUndoView::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QUndoView_tabletEvent(this, handle__tabletEvent.value(), sigval1);

	}

	friend void QUndoView_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__actionEvent;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (!handle__actionEvent) {
			QUndoView::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QUndoView_actionEvent(this, handle__actionEvent.value(), sigval1);

	}

	friend void QUndoView_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__showEvent;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (!handle__showEvent) {
			QUndoView::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QUndoView_showEvent(this, handle__showEvent.value(), sigval1);

	}

	friend void QUndoView_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__hideEvent;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (!handle__hideEvent) {
			QUndoView::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QUndoView_hideEvent(this, handle__hideEvent.value(), sigval1);

	}

	friend void QUndoView_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__nativeEvent;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (!handle__nativeEvent) {
			return QUndoView::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QUndoView_nativeEvent(this, handle__nativeEvent.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QUndoView_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__metric;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (!handle__metric) {
			return QUndoView::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QUndoView_metric(this, handle__metric.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QUndoView_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__initPainter;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (!handle__initPainter) {
			QUndoView::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QUndoView_initPainter(this, handle__initPainter.value(), sigval1);

	}

	friend void QUndoView_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__redirected;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (!handle__redirected) {
			return QUndoView::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QUndoView_redirected(this, handle__redirected.value(), sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QUndoView_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__sharedPainter;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (!handle__sharedPainter) {
			return QUndoView::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QUndoView_sharedPainter(this, handle__sharedPainter.value());
		return callback_return_value;
	}

	friend QPainter* QUndoView_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QUndoView::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QUndoView_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QUndoView_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QUndoView::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QUndoView_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QUndoView_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QUndoView::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QUndoView_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QUndoView_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QUndoView::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QUndoView_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QUndoView_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QUndoView_protectedbase_resizeContents(bool* _dynamic_cast_ok, void* self, int width, int height);
	friend QSize* QUndoView_protectedbase_contentsSize(bool* _dynamic_cast_ok, const void* self);
	friend QRect* QUndoView_protectedbase_rectForIndex(bool* _dynamic_cast_ok, const void* self, QModelIndex* index);
	friend void QUndoView_protectedbase_setPositionForIndex(bool* _dynamic_cast_ok, void* self, QPoint* position, QModelIndex* index);
	friend void QUndoView_protectedbase_setHorizontalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps);
	friend int QUndoView_protectedbase_horizontalStepsPerItem(bool* _dynamic_cast_ok, const void* self);
	friend void QUndoView_protectedbase_setVerticalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps);
	friend int QUndoView_protectedbase_verticalStepsPerItem(bool* _dynamic_cast_ok, const void* self);
	friend int QUndoView_protectedbase_state(bool* _dynamic_cast_ok, const void* self);
	friend void QUndoView_protectedbase_setState(bool* _dynamic_cast_ok, void* self, int state);
	friend void QUndoView_protectedbase_scheduleDelayedItemsLayout(bool* _dynamic_cast_ok, void* self);
	friend void QUndoView_protectedbase_executeDelayedItemsLayout(bool* _dynamic_cast_ok, void* self);
	friend void QUndoView_protectedbase_setDirtyRegion(bool* _dynamic_cast_ok, void* self, QRegion* region);
	friend void QUndoView_protectedbase_scrollDirtyRegion(bool* _dynamic_cast_ok, void* self, int dx, int dy);
	friend QPoint* QUndoView_protectedbase_dirtyRegionOffset(bool* _dynamic_cast_ok, const void* self);
	friend void QUndoView_protectedbase_startAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend void QUndoView_protectedbase_stopAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend void QUndoView_protectedbase_doAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend int QUndoView_protectedbase_dropIndicatorPosition(bool* _dynamic_cast_ok, const void* self);
	friend void QUndoView_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom);
	friend QMargins* QUndoView_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self);
	friend void QUndoView_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
	friend void QUndoView_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option);
	friend void QUndoView_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QUndoView_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QUndoView_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QUndoView_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QUndoView_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QUndoView_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QUndoView_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QUndoView_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QUndoView_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QUndoView* QUndoView_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQUndoView(parent);
}

QUndoView* QUndoView_new2() {
	return new (std::nothrow) MiqtVirtualQUndoView();
}

QUndoView* QUndoView_new3(QUndoStack* stack) {
	return new (std::nothrow) MiqtVirtualQUndoView(stack);
}

QUndoView* QUndoView_new4(QUndoGroup* group) {
	return new (std::nothrow) MiqtVirtualQUndoView(group);
}

QUndoView* QUndoView_new5(QUndoStack* stack, QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQUndoView(stack, parent);
}

QUndoView* QUndoView_new6(QUndoGroup* group, QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQUndoView(group, parent);
}

void QUndoView_virtbase(QUndoView* src, QListView** outptr_QListView) {
	*outptr_QListView = static_cast<QListView*>(src);
}

QMetaObject* QUndoView_metaObject(const QUndoView* self) {
	return (QMetaObject*) self->metaObject();
}

void* QUndoView_metacast(QUndoView* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QUndoView_tr(const char* s) {
	QString _ret = QUndoView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUndoView_trUtf8(const char* s) {
	QString _ret = QUndoView::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QUndoStack* QUndoView_stack(const QUndoView* self) {
	return self->stack();
}

QUndoGroup* QUndoView_group(const QUndoView* self) {
	return self->group();
}

void QUndoView_setEmptyLabel(QUndoView* self, struct miqt_string label) {
	QString label_QString = QString::fromUtf8(label.data, label.len);
	self->setEmptyLabel(label_QString);
}

struct miqt_string QUndoView_emptyLabel(const QUndoView* self) {
	QString _ret = self->emptyLabel();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QUndoView_setCleanIcon(QUndoView* self, QIcon* icon) {
	self->setCleanIcon(*icon);
}

QIcon* QUndoView_cleanIcon(const QUndoView* self) {
	return new QIcon(self->cleanIcon());
}

void QUndoView_setStack(QUndoView* self, QUndoStack* stack) {
	self->setStack(stack);
}

void QUndoView_setGroup(QUndoView* self, QUndoGroup* group) {
	self->setGroup(group);
}

struct miqt_string QUndoView_tr2(const char* s, const char* c) {
	QString _ret = QUndoView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUndoView_tr3(const char* s, const char* c, int n) {
	QString _ret = QUndoView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUndoView_trUtf82(const char* s, const char* c) {
	QString _ret = QUndoView::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QUndoView_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QUndoView::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QUndoView_override_virtual_visualRect(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__visualRect = std::move(slot_handle);
	self_cast->owns_return__visualRect = false;
	return true;
}

bool QUndoView_override_virtual_owned_visualRect(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__visualRect = std::move(slot_handle);
	self_cast->owns_return__visualRect = true;
	return true;
}

QRect* QUndoView_virtualbase_visualRect(const void* self, QModelIndex* index) {
	return new QRect(static_cast<const MiqtVirtualQUndoView*>(self)->QUndoView::visualRect(*index));
}

bool QUndoView_override_virtual_scrollTo(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scrollTo = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_scrollTo(void* self, QModelIndex* index, int hint) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::scrollTo(*index, static_cast<MiqtVirtualQUndoView::ScrollHint>(hint));
}

bool QUndoView_override_virtual_indexAt(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__indexAt = std::move(slot_handle);
	self_cast->owns_return__indexAt = false;
	return true;
}

bool QUndoView_override_virtual_owned_indexAt(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__indexAt = std::move(slot_handle);
	self_cast->owns_return__indexAt = true;
	return true;
}

QModelIndex* QUndoView_virtualbase_indexAt(const void* self, QPoint* p) {
	return new QModelIndex(static_cast<const MiqtVirtualQUndoView*>(self)->QUndoView::indexAt(*p));
}

bool QUndoView_override_virtual_doItemsLayout(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__doItemsLayout = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_doItemsLayout(void* self) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::doItemsLayout();
}

bool QUndoView_override_virtual_reset(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__reset = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_reset(void* self) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::reset();
}

bool QUndoView_override_virtual_setRootIndex(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setRootIndex = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_setRootIndex(void* self, QModelIndex* index) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::setRootIndex(*index);
}

bool QUndoView_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QUndoView_virtualbase_event(void* self, QEvent* e) {
	return static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::event(e);
}

bool QUndoView_override_virtual_scrollContentsBy(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scrollContentsBy = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_scrollContentsBy(void* self, int dx, int dy) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
}

bool QUndoView_override_virtual_dataChanged(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dataChanged = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_dataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
	QVector<int> roles_QList;
	roles_QList.reserve(roles.len);
	int* roles_arr = static_cast<int*>(roles.data);
	for(size_t i = 0; i < roles.len; ++i) {
		roles_QList.push_back(static_cast<int>(roles_arr[i]));
	}
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::dataChanged(*topLeft, *bottomRight, roles_QList);
}

bool QUndoView_override_virtual_rowsInserted(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__rowsInserted = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_rowsInserted(void* self, QModelIndex* parent, int start, int end) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
}

bool QUndoView_override_virtual_rowsAboutToBeRemoved(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__rowsAboutToBeRemoved = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_rowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
}

bool QUndoView_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_mouseMoveEvent(void* self, QMouseEvent* e) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::mouseMoveEvent(e);
}

bool QUndoView_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* e) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::mouseReleaseEvent(e);
}

bool QUndoView_override_virtual_wheelEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_wheelEvent(void* self, QWheelEvent* e) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::wheelEvent(e);
}

bool QUndoView_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_timerEvent(void* self, QTimerEvent* e) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::timerEvent(e);
}

bool QUndoView_override_virtual_resizeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_resizeEvent(void* self, QResizeEvent* e) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::resizeEvent(e);
}

bool QUndoView_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* e) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::dragMoveEvent(e);
}

bool QUndoView_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* e) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::dragLeaveEvent(e);
}

bool QUndoView_override_virtual_dropEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_dropEvent(void* self, QDropEvent* e) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::dropEvent(e);
}

bool QUndoView_override_virtual_startDrag(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__startDrag = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_startDrag(void* self, int supportedActions) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::startDrag(static_cast<Qt::DropActions>(supportedActions));
}

bool QUndoView_override_virtual_viewOptions(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__viewOptions = std::move(slot_handle);
	self_cast->owns_return__viewOptions = false;
	return true;
}

bool QUndoView_override_virtual_owned_viewOptions(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__viewOptions = std::move(slot_handle);
	self_cast->owns_return__viewOptions = true;
	return true;
}

QStyleOptionViewItem* QUndoView_virtualbase_viewOptions(const void* self) {
	return new QStyleOptionViewItem(static_cast<const MiqtVirtualQUndoView*>(self)->QUndoView::viewOptions());
}

bool QUndoView_override_virtual_paintEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_paintEvent(void* self, QPaintEvent* e) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::paintEvent(e);
}

bool QUndoView_override_virtual_horizontalOffset(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__horizontalOffset = std::move(slot_handle);
	return true;
}

int QUndoView_virtualbase_horizontalOffset(const void* self) {
	return static_cast<const MiqtVirtualQUndoView*>(self)->QUndoView::horizontalOffset();
}

bool QUndoView_override_virtual_verticalOffset(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__verticalOffset = std::move(slot_handle);
	return true;
}

int QUndoView_virtualbase_verticalOffset(const void* self) {
	return static_cast<const MiqtVirtualQUndoView*>(self)->QUndoView::verticalOffset();
}

bool QUndoView_override_virtual_moveCursor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveCursor = std::move(slot_handle);
	self_cast->owns_return__moveCursor = false;
	return true;
}

bool QUndoView_override_virtual_owned_moveCursor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveCursor = std::move(slot_handle);
	self_cast->owns_return__moveCursor = true;
	return true;
}

QModelIndex* QUndoView_virtualbase_moveCursor(void* self, int cursorAction, int modifiers) {
	return new QModelIndex(static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::moveCursor(static_cast<MiqtVirtualQUndoView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
}

bool QUndoView_override_virtual_setSelection(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setSelection = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_setSelection(void* self, QRect* rect, int command) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
}

bool QUndoView_override_virtual_visualRegionForSelection(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__visualRegionForSelection = std::move(slot_handle);
	self_cast->owns_return__visualRegionForSelection = false;
	return true;
}

bool QUndoView_override_virtual_owned_visualRegionForSelection(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__visualRegionForSelection = std::move(slot_handle);
	self_cast->owns_return__visualRegionForSelection = true;
	return true;
}

QRegion* QUndoView_virtualbase_visualRegionForSelection(const void* self, QItemSelection* selection) {
	return new QRegion(static_cast<const MiqtVirtualQUndoView*>(self)->QUndoView::visualRegionForSelection(*selection));
}

bool QUndoView_override_virtual_selectedIndexes(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__selectedIndexes = std::move(slot_handle);
	return true;
}

struct miqt_array /* of QModelIndex* */  QUndoView_virtualbase_selectedIndexes(const void* self) {
	QModelIndexList _ret = static_cast<const MiqtVirtualQUndoView*>(self)->QUndoView::selectedIndexes();
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

bool QUndoView_override_virtual_updateGeometries(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateGeometries = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_updateGeometries(void* self) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::updateGeometries();
}

bool QUndoView_override_virtual_isIndexHidden(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isIndexHidden = std::move(slot_handle);
	return true;
}

bool QUndoView_virtualbase_isIndexHidden(const void* self, QModelIndex* index) {
	return static_cast<const MiqtVirtualQUndoView*>(self)->QUndoView::isIndexHidden(*index);
}

bool QUndoView_override_virtual_selectionChanged(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__selectionChanged = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_selectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::selectionChanged(*selected, *deselected);
}

bool QUndoView_override_virtual_currentChanged(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__currentChanged = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_currentChanged(void* self, QModelIndex* current, QModelIndex* previous) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::currentChanged(*current, *previous);
}

bool QUndoView_override_virtual_viewportSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__viewportSizeHint = std::move(slot_handle);
	self_cast->owns_return__viewportSizeHint = false;
	return true;
}

bool QUndoView_override_virtual_owned_viewportSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__viewportSizeHint = std::move(slot_handle);
	self_cast->owns_return__viewportSizeHint = true;
	return true;
}

QSize* QUndoView_virtualbase_viewportSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQUndoView*>(self)->QUndoView::viewportSizeHint());
}

bool QUndoView_override_virtual_setModel(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setModel = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_setModel(void* self, QAbstractItemModel* model) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::setModel(model);
}

bool QUndoView_override_virtual_setSelectionModel(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setSelectionModel = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_setSelectionModel(void* self, QItemSelectionModel* selectionModel) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::setSelectionModel(selectionModel);
}

bool QUndoView_override_virtual_keyboardSearch(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyboardSearch = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_keyboardSearch(void* self, struct miqt_string search) {
	QString search_QString = QString::fromUtf8(search.data, search.len);
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::keyboardSearch(search_QString);
}

bool QUndoView_override_virtual_sizeHintForRow(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHintForRow = std::move(slot_handle);
	return true;
}

int QUndoView_virtualbase_sizeHintForRow(const void* self, int row) {
	return static_cast<const MiqtVirtualQUndoView*>(self)->QUndoView::sizeHintForRow(static_cast<int>(row));
}

bool QUndoView_override_virtual_sizeHintForColumn(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHintForColumn = std::move(slot_handle);
	return true;
}

int QUndoView_virtualbase_sizeHintForColumn(const void* self, int column) {
	return static_cast<const MiqtVirtualQUndoView*>(self)->QUndoView::sizeHintForColumn(static_cast<int>(column));
}

bool QUndoView_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	self_cast->owns_return__inputMethodQuery = false;
	return true;
}

bool QUndoView_override_virtual_owned_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	self_cast->owns_return__inputMethodQuery = true;
	return true;
}

QVariant* QUndoView_virtualbase_inputMethodQuery(const void* self, int query) {
	return new QVariant(static_cast<const MiqtVirtualQUndoView*>(self)->QUndoView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

bool QUndoView_override_virtual_selectAll(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__selectAll = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_selectAll(void* self) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::selectAll();
}

bool QUndoView_override_virtual_updateEditorData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateEditorData = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_updateEditorData(void* self) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::updateEditorData();
}

bool QUndoView_override_virtual_updateEditorGeometries(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateEditorGeometries = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_updateEditorGeometries(void* self) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::updateEditorGeometries();
}

bool QUndoView_override_virtual_verticalScrollbarAction(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__verticalScrollbarAction = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_verticalScrollbarAction(void* self, int action) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::verticalScrollbarAction(static_cast<int>(action));
}

bool QUndoView_override_virtual_horizontalScrollbarAction(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__horizontalScrollbarAction = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_horizontalScrollbarAction(void* self, int action) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::horizontalScrollbarAction(static_cast<int>(action));
}

bool QUndoView_override_virtual_verticalScrollbarValueChanged(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__verticalScrollbarValueChanged = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_verticalScrollbarValueChanged(void* self, int value) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::verticalScrollbarValueChanged(static_cast<int>(value));
}

bool QUndoView_override_virtual_horizontalScrollbarValueChanged(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__horizontalScrollbarValueChanged = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_horizontalScrollbarValueChanged(void* self, int value) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::horizontalScrollbarValueChanged(static_cast<int>(value));
}

bool QUndoView_override_virtual_closeEditor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEditor = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_closeEditor(void* self, QWidget* editor, int hint) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
}

bool QUndoView_override_virtual_commitData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__commitData = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_commitData(void* self, QWidget* editor) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::commitData(editor);
}

bool QUndoView_override_virtual_editorDestroyed(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__editorDestroyed = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_editorDestroyed(void* self, QObject* editor) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::editorDestroyed(editor);
}

bool QUndoView_override_virtual_edit2(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__edit2 = std::move(slot_handle);
	return true;
}

bool QUndoView_virtualbase_edit2(void* self, QModelIndex* index, int trigger, QEvent* event) {
	return static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::edit(*index, static_cast<MiqtVirtualQUndoView::EditTrigger>(trigger), event);
}

bool QUndoView_override_virtual_selectionCommand(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__selectionCommand = std::move(slot_handle);
	return true;
}

int QUndoView_virtualbase_selectionCommand(const void* self, QModelIndex* index, QEvent* event) {
	QItemSelectionModel::SelectionFlags _ret = static_cast<const MiqtVirtualQUndoView*>(self)->QUndoView::selectionCommand(*index, event);
	return static_cast<int>(_ret);
}

bool QUndoView_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = std::move(slot_handle);
	return true;
}

bool QUndoView_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::focusNextPrevChild(next);
}

bool QUndoView_override_virtual_viewportEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__viewportEvent = std::move(slot_handle);
	return true;
}

bool QUndoView_virtualbase_viewportEvent(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::viewportEvent(event);
}

bool QUndoView_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::mousePressEvent(event);
}

bool QUndoView_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::mouseDoubleClickEvent(event);
}

bool QUndoView_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::dragEnterEvent(event);
}

bool QUndoView_override_virtual_focusInEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::focusInEvent(event);
}

bool QUndoView_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::focusOutEvent(event);
}

bool QUndoView_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::keyPressEvent(event);
}

bool QUndoView_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::inputMethodEvent(event);
}

bool QUndoView_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QUndoView_virtualbase_eventFilter(void* self, QObject* object, QEvent* event) {
	return static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::eventFilter(object, event);
}

bool QUndoView_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	self_cast->owns_return__minimumSizeHint = false;
	return true;
}

bool QUndoView_override_virtual_owned_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	self_cast->owns_return__minimumSizeHint = true;
	return true;
}

QSize* QUndoView_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQUndoView*>(self)->QUndoView::minimumSizeHint());
}

bool QUndoView_override_virtual_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = false;
	return true;
}

bool QUndoView_override_virtual_owned_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = true;
	return true;
}

QSize* QUndoView_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQUndoView*>(self)->QUndoView::sizeHint());
}

bool QUndoView_override_virtual_setupViewport(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setupViewport = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_setupViewport(void* self, QWidget* viewport) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::setupViewport(viewport);
}

bool QUndoView_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::contextMenuEvent(param1);
}

bool QUndoView_override_virtual_changeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::changeEvent(param1);
}

bool QUndoView_override_virtual_devType(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = std::move(slot_handle);
	return true;
}

int QUndoView_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQUndoView*>(self)->QUndoView::devType();
}

bool QUndoView_override_virtual_setVisible(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::setVisible(visible);
}

bool QUndoView_override_virtual_heightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = std::move(slot_handle);
	return true;
}

int QUndoView_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQUndoView*>(self)->QUndoView::heightForWidth(static_cast<int>(param1));
}

bool QUndoView_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = std::move(slot_handle);
	return true;
}

bool QUndoView_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQUndoView*>(self)->QUndoView::hasHeightForWidth();
}

bool QUndoView_override_virtual_paintEngine(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = std::move(slot_handle);
	return true;
}

QPaintEngine* QUndoView_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQUndoView*>(self)->QUndoView::paintEngine();
}

bool QUndoView_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::keyReleaseEvent(event);
}

bool QUndoView_override_virtual_enterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::enterEvent(event);
}

bool QUndoView_override_virtual_leaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::leaveEvent(event);
}

bool QUndoView_override_virtual_moveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::moveEvent(event);
}

bool QUndoView_override_virtual_closeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::closeEvent(event);
}

bool QUndoView_override_virtual_tabletEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::tabletEvent(event);
}

bool QUndoView_override_virtual_actionEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::actionEvent(event);
}

bool QUndoView_override_virtual_showEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::showEvent(event);
}

bool QUndoView_override_virtual_hideEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::hideEvent(event);
}

bool QUndoView_override_virtual_nativeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = std::move(slot_handle);
	return true;
}

bool QUndoView_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QUndoView_override_virtual_metric(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = std::move(slot_handle);
	return true;
}

int QUndoView_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQUndoView*>(self)->QUndoView::metric(static_cast<MiqtVirtualQUndoView::PaintDeviceMetric>(param1));
}

bool QUndoView_override_virtual_initPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQUndoView*>(self)->QUndoView::initPainter(painter);
}

bool QUndoView_override_virtual_redirected(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = std::move(slot_handle);
	return true;
}

QPaintDevice* QUndoView_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQUndoView*>(self)->QUndoView::redirected(offset);
}

bool QUndoView_override_virtual_sharedPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = std::move(slot_handle);
	return true;
}

QPainter* QUndoView_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQUndoView*>(self)->QUndoView::sharedPainter();
}

bool QUndoView_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::childEvent(event);
}

bool QUndoView_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::customEvent(event);
}

bool QUndoView_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::connectNotify(*signal);
}

bool QUndoView_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QUndoView> slot_handle(slot);
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QUndoView_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQUndoView*>(self)->QUndoView::disconnectNotify(*signal);
}

void QUndoView_protectedbase_resizeContents(bool* _dynamic_cast_ok, void* self, int width, int height) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->resizeContents(static_cast<int>(width), static_cast<int>(height));
}

QSize* QUndoView_protectedbase_contentsSize(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QSize(self_cast->contentsSize());
}

QRect* QUndoView_protectedbase_rectForIndex(bool* _dynamic_cast_ok, const void* self, QModelIndex* index) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QRect(self_cast->rectForIndex(*index));
}

void QUndoView_protectedbase_setPositionForIndex(bool* _dynamic_cast_ok, void* self, QPoint* position, QModelIndex* index) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setPositionForIndex(*position, *index);
}

void QUndoView_protectedbase_setHorizontalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setHorizontalStepsPerItem(static_cast<int>(steps));
}

int QUndoView_protectedbase_horizontalStepsPerItem(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->horizontalStepsPerItem();
}

void QUndoView_protectedbase_setVerticalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setVerticalStepsPerItem(static_cast<int>(steps));
}

int QUndoView_protectedbase_verticalStepsPerItem(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->verticalStepsPerItem();
}

int QUndoView_protectedbase_state(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}

	*_dynamic_cast_ok = true;
	MiqtVirtualQUndoView::State _ret = self_cast->state();
	return static_cast<int>(_ret);
}

void QUndoView_protectedbase_setState(bool* _dynamic_cast_ok, void* self, int state) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setState(static_cast<MiqtVirtualQUndoView::State>(state));
}

void QUndoView_protectedbase_scheduleDelayedItemsLayout(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->scheduleDelayedItemsLayout();
}

void QUndoView_protectedbase_executeDelayedItemsLayout(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->executeDelayedItemsLayout();
}

void QUndoView_protectedbase_setDirtyRegion(bool* _dynamic_cast_ok, void* self, QRegion* region) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setDirtyRegion(*region);
}

void QUndoView_protectedbase_scrollDirtyRegion(bool* _dynamic_cast_ok, void* self, int dx, int dy) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
}

QPoint* QUndoView_protectedbase_dirtyRegionOffset(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QPoint(self_cast->dirtyRegionOffset());
}

void QUndoView_protectedbase_startAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->startAutoScroll();
}

void QUndoView_protectedbase_stopAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->stopAutoScroll();
}

void QUndoView_protectedbase_doAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->doAutoScroll();
}

int QUndoView_protectedbase_dropIndicatorPosition(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}

	*_dynamic_cast_ok = true;
	MiqtVirtualQUndoView::DropIndicatorPosition _ret = self_cast->dropIndicatorPosition();
	return static_cast<int>(_ret);
}

void QUndoView_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
}

QMargins* QUndoView_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QMargins(self_cast->viewportMargins());
}

void QUndoView_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->drawFrame(param1);
}

void QUndoView_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->initStyleOption(option);
}

void QUndoView_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QUndoView_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QUndoView_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QUndoView_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QUndoView_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QUndoView_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QUndoView_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QUndoView_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QUndoView_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQUndoView* self_cast = dynamic_cast<MiqtVirtualQUndoView*>( (QUndoView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QUndoView_delete(QUndoView* self) {
	delete self;
}

