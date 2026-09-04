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
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qlistview.h>
#include "gen_qlistview.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QListView(intptr_t);
void miqt_exec_callback_QListView_indexesMoved(intptr_t, struct miqt_array /* of QModelIndex* */ );
QRect* miqt_exec_callback_QListView_visualRect(const QListView*, intptr_t, QModelIndex*);
void miqt_exec_callback_QListView_scrollTo(QListView*, intptr_t, QModelIndex*, int);
QModelIndex* miqt_exec_callback_QListView_indexAt(const QListView*, intptr_t, QPoint*);
void miqt_exec_callback_QListView_doItemsLayout(QListView*, intptr_t);
void miqt_exec_callback_QListView_reset(QListView*, intptr_t);
void miqt_exec_callback_QListView_setRootIndex(QListView*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QListView_event(QListView*, intptr_t, QEvent*);
void miqt_exec_callback_QListView_scrollContentsBy(QListView*, intptr_t, int, int);
void miqt_exec_callback_QListView_dataChanged(QListView*, intptr_t, QModelIndex*, QModelIndex*, struct miqt_array /* of int */ );
void miqt_exec_callback_QListView_rowsInserted(QListView*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QListView_rowsAboutToBeRemoved(QListView*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QListView_mouseMoveEvent(QListView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QListView_mouseReleaseEvent(QListView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QListView_wheelEvent(QListView*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QListView_timerEvent(QListView*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QListView_resizeEvent(QListView*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QListView_dragMoveEvent(QListView*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QListView_dragLeaveEvent(QListView*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QListView_dropEvent(QListView*, intptr_t, QDropEvent*);
void miqt_exec_callback_QListView_startDrag(QListView*, intptr_t, int);
void miqt_exec_callback_QListView_initViewItemOption(const QListView*, intptr_t, QStyleOptionViewItem*);
void miqt_exec_callback_QListView_paintEvent(QListView*, intptr_t, QPaintEvent*);
int miqt_exec_callback_QListView_horizontalOffset(const QListView*, intptr_t);
int miqt_exec_callback_QListView_verticalOffset(const QListView*, intptr_t);
QModelIndex* miqt_exec_callback_QListView_moveCursor(QListView*, intptr_t, int, int);
void miqt_exec_callback_QListView_setSelection(QListView*, intptr_t, QRect*, int);
QRegion* miqt_exec_callback_QListView_visualRegionForSelection(const QListView*, intptr_t, QItemSelection*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QListView_selectedIndexes(const QListView*, intptr_t);
void miqt_exec_callback_QListView_updateGeometries(QListView*, intptr_t);
bool miqt_exec_callback_QListView_isIndexHidden(const QListView*, intptr_t, QModelIndex*);
void miqt_exec_callback_QListView_selectionChanged(QListView*, intptr_t, QItemSelection*, QItemSelection*);
void miqt_exec_callback_QListView_currentChanged(QListView*, intptr_t, QModelIndex*, QModelIndex*);
QSize* miqt_exec_callback_QListView_viewportSizeHint(const QListView*, intptr_t);
void miqt_exec_callback_QListView_setModel(QListView*, intptr_t, QAbstractItemModel*);
void miqt_exec_callback_QListView_setSelectionModel(QListView*, intptr_t, QItemSelectionModel*);
void miqt_exec_callback_QListView_keyboardSearch(QListView*, intptr_t, struct miqt_string);
int miqt_exec_callback_QListView_sizeHintForRow(const QListView*, intptr_t, int);
int miqt_exec_callback_QListView_sizeHintForColumn(const QListView*, intptr_t, int);
QAbstractItemDelegate* miqt_exec_callback_QListView_itemDelegateForIndex(const QListView*, intptr_t, QModelIndex*);
QVariant* miqt_exec_callback_QListView_inputMethodQuery(const QListView*, intptr_t, int);
void miqt_exec_callback_QListView_selectAll(QListView*, intptr_t);
void miqt_exec_callback_QListView_updateEditorData(QListView*, intptr_t);
void miqt_exec_callback_QListView_updateEditorGeometries(QListView*, intptr_t);
void miqt_exec_callback_QListView_verticalScrollbarAction(QListView*, intptr_t, int);
void miqt_exec_callback_QListView_horizontalScrollbarAction(QListView*, intptr_t, int);
void miqt_exec_callback_QListView_verticalScrollbarValueChanged(QListView*, intptr_t, int);
void miqt_exec_callback_QListView_horizontalScrollbarValueChanged(QListView*, intptr_t, int);
void miqt_exec_callback_QListView_closeEditor(QListView*, intptr_t, QWidget*, int);
void miqt_exec_callback_QListView_commitData(QListView*, intptr_t, QWidget*);
void miqt_exec_callback_QListView_editorDestroyed(QListView*, intptr_t, QObject*);
bool miqt_exec_callback_QListView_edit2(QListView*, intptr_t, QModelIndex*, int, QEvent*);
int miqt_exec_callback_QListView_selectionCommand(const QListView*, intptr_t, QModelIndex*, QEvent*);
bool miqt_exec_callback_QListView_focusNextPrevChild(QListView*, intptr_t, bool);
bool miqt_exec_callback_QListView_viewportEvent(QListView*, intptr_t, QEvent*);
void miqt_exec_callback_QListView_mousePressEvent(QListView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QListView_mouseDoubleClickEvent(QListView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QListView_dragEnterEvent(QListView*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QListView_focusInEvent(QListView*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QListView_focusOutEvent(QListView*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QListView_keyPressEvent(QListView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QListView_inputMethodEvent(QListView*, intptr_t, QInputMethodEvent*);
bool miqt_exec_callback_QListView_eventFilter(QListView*, intptr_t, QObject*, QEvent*);
QSize* miqt_exec_callback_QListView_minimumSizeHint(const QListView*, intptr_t);
QSize* miqt_exec_callback_QListView_sizeHint(const QListView*, intptr_t);
void miqt_exec_callback_QListView_setupViewport(QListView*, intptr_t, QWidget*);
void miqt_exec_callback_QListView_contextMenuEvent(QListView*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QListView_changeEvent(QListView*, intptr_t, QEvent*);
void miqt_exec_callback_QListView_initStyleOption(const QListView*, intptr_t, QStyleOptionFrame*);
int miqt_exec_callback_QListView_devType(const QListView*, intptr_t);
void miqt_exec_callback_QListView_setVisible(QListView*, intptr_t, bool);
int miqt_exec_callback_QListView_heightForWidth(const QListView*, intptr_t, int);
bool miqt_exec_callback_QListView_hasHeightForWidth(const QListView*, intptr_t);
QPaintEngine* miqt_exec_callback_QListView_paintEngine(const QListView*, intptr_t);
void miqt_exec_callback_QListView_keyReleaseEvent(QListView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QListView_enterEvent(QListView*, intptr_t, QEnterEvent*);
void miqt_exec_callback_QListView_leaveEvent(QListView*, intptr_t, QEvent*);
void miqt_exec_callback_QListView_moveEvent(QListView*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QListView_closeEvent(QListView*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QListView_tabletEvent(QListView*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QListView_actionEvent(QListView*, intptr_t, QActionEvent*);
void miqt_exec_callback_QListView_showEvent(QListView*, intptr_t, QShowEvent*);
void miqt_exec_callback_QListView_hideEvent(QListView*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QListView_nativeEvent(QListView*, intptr_t, struct miqt_string, void*, intptr_t*);
int miqt_exec_callback_QListView_metric(const QListView*, intptr_t, int);
void miqt_exec_callback_QListView_initPainter(const QListView*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QListView_redirected(const QListView*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QListView_sharedPainter(const QListView*, intptr_t);
void miqt_exec_callback_QListView_childEvent(QListView*, intptr_t, QChildEvent*);
void miqt_exec_callback_QListView_customEvent(QListView*, intptr_t, QEvent*);
void miqt_exec_callback_QListView_connectNotify(QListView*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QListView_disconnectNotify(QListView*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQListView final : public QListView {
public:

	MiqtVirtualQListView(QWidget* parent): QListView(parent) {}
	MiqtVirtualQListView(): QListView() {}

	virtual ~MiqtVirtualQListView() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__visualRect;
	bool owns_return__visualRect = false;

	// Subclass to allow providing a Go implementation
	virtual QRect visualRect(const QModelIndex& index) const override {
		if (!handle__visualRect) {
			return QListView::visualRect(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QRect* callback_return_value = miqt_exec_callback_QListView_visualRect(this, handle__visualRect.value(), sigval1);
		std::unique_ptr<QRect> callback_return_value_owner;
		if (owns_return__visualRect) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QRect* QListView_virtualbase_visualRect(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__scrollTo;

	// Subclass to allow providing a Go implementation
	virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
		if (!handle__scrollTo) {
			QListView::scrollTo(index, hint);
			return;
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::ScrollHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);
		miqt_exec_callback_QListView_scrollTo(this, handle__scrollTo.value(), sigval1, sigval2);

	}

	friend void QListView_virtualbase_scrollTo(void* self, QModelIndex* index, int hint);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__indexAt;
	bool owns_return__indexAt = false;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex indexAt(const QPoint& p) const override {
		if (!handle__indexAt) {
			return QListView::indexAt(p);
		}

		const QPoint& p_ret = p;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&p_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QListView_indexAt(this, handle__indexAt.value(), sigval1);
		std::unique_ptr<QModelIndex> callback_return_value_owner;
		if (owns_return__indexAt) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QModelIndex* QListView_virtualbase_indexAt(const void* self, QPoint* p);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__doItemsLayout;

	// Subclass to allow providing a Go implementation
	virtual void doItemsLayout() override {
		if (!handle__doItemsLayout) {
			QListView::doItemsLayout();
			return;
		}

		miqt_exec_callback_QListView_doItemsLayout(this, handle__doItemsLayout.value());

	}

	friend void QListView_virtualbase_doItemsLayout(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__reset;

	// Subclass to allow providing a Go implementation
	virtual void reset() override {
		if (!handle__reset) {
			QListView::reset();
			return;
		}

		miqt_exec_callback_QListView_reset(this, handle__reset.value());

	}

	friend void QListView_virtualbase_reset(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__setRootIndex;

	// Subclass to allow providing a Go implementation
	virtual void setRootIndex(const QModelIndex& index) override {
		if (!handle__setRootIndex) {
			QListView::setRootIndex(index);
			return;
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		miqt_exec_callback_QListView_setRootIndex(this, handle__setRootIndex.value(), sigval1);

	}

	friend void QListView_virtualbase_setRootIndex(void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (!handle__event) {
			return QListView::event(e);
		}

		QEvent* sigval1 = e;
		bool callback_return_value = miqt_exec_callback_QListView_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QListView_virtualbase_event(void* self, QEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__scrollContentsBy;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (!handle__scrollContentsBy) {
			QListView::scrollContentsBy(dx, dy);
			return;
		}

		int sigval1 = dx;
		int sigval2 = dy;
		miqt_exec_callback_QListView_scrollContentsBy(this, handle__scrollContentsBy.value(), sigval1, sigval2);

	}

	friend void QListView_virtualbase_scrollContentsBy(void* self, int dx, int dy);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__dataChanged;

	// Subclass to allow providing a Go implementation
	virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QList<int>& roles) override {
		if (!handle__dataChanged) {
			QListView::dataChanged(topLeft, bottomRight, roles);
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
		miqt_exec_callback_QListView_dataChanged(this, handle__dataChanged.value(), sigval1, sigval2, sigval3);

	}

	friend void QListView_virtualbase_dataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__rowsInserted;

	// Subclass to allow providing a Go implementation
	virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
		if (!handle__rowsInserted) {
			QListView::rowsInserted(parent, start, end);
			return;
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;
		miqt_exec_callback_QListView_rowsInserted(this, handle__rowsInserted.value(), sigval1, sigval2, sigval3);

	}

	friend void QListView_virtualbase_rowsInserted(void* self, QModelIndex* parent, int start, int end);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__rowsAboutToBeRemoved;

	// Subclass to allow providing a Go implementation
	virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
		if (!handle__rowsAboutToBeRemoved) {
			QListView::rowsAboutToBeRemoved(parent, start, end);
			return;
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;
		miqt_exec_callback_QListView_rowsAboutToBeRemoved(this, handle__rowsAboutToBeRemoved.value(), sigval1, sigval2, sigval3);

	}

	friend void QListView_virtualbase_rowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__mouseMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* e) override {
		if (!handle__mouseMoveEvent) {
			QListView::mouseMoveEvent(e);
			return;
		}

		QMouseEvent* sigval1 = e;
		miqt_exec_callback_QListView_mouseMoveEvent(this, handle__mouseMoveEvent.value(), sigval1);

	}

	friend void QListView_virtualbase_mouseMoveEvent(void* self, QMouseEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__mouseReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (!handle__mouseReleaseEvent) {
			QListView::mouseReleaseEvent(e);
			return;
		}

		QMouseEvent* sigval1 = e;
		miqt_exec_callback_QListView_mouseReleaseEvent(this, handle__mouseReleaseEvent.value(), sigval1);

	}

	friend void QListView_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__wheelEvent;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* e) override {
		if (!handle__wheelEvent) {
			QListView::wheelEvent(e);
			return;
		}

		QWheelEvent* sigval1 = e;
		miqt_exec_callback_QListView_wheelEvent(this, handle__wheelEvent.value(), sigval1);

	}

	friend void QListView_virtualbase_wheelEvent(void* self, QWheelEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* e) override {
		if (!handle__timerEvent) {
			QListView::timerEvent(e);
			return;
		}

		QTimerEvent* sigval1 = e;
		miqt_exec_callback_QListView_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QListView_virtualbase_timerEvent(void* self, QTimerEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__resizeEvent;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* e) override {
		if (!handle__resizeEvent) {
			QListView::resizeEvent(e);
			return;
		}

		QResizeEvent* sigval1 = e;
		miqt_exec_callback_QListView_resizeEvent(this, handle__resizeEvent.value(), sigval1);

	}

	friend void QListView_virtualbase_resizeEvent(void* self, QResizeEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__dragMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* e) override {
		if (!handle__dragMoveEvent) {
			QListView::dragMoveEvent(e);
			return;
		}

		QDragMoveEvent* sigval1 = e;
		miqt_exec_callback_QListView_dragMoveEvent(this, handle__dragMoveEvent.value(), sigval1);

	}

	friend void QListView_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__dragLeaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
		if (!handle__dragLeaveEvent) {
			QListView::dragLeaveEvent(e);
			return;
		}

		QDragLeaveEvent* sigval1 = e;
		miqt_exec_callback_QListView_dragLeaveEvent(this, handle__dragLeaveEvent.value(), sigval1);

	}

	friend void QListView_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__dropEvent;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* e) override {
		if (!handle__dropEvent) {
			QListView::dropEvent(e);
			return;
		}

		QDropEvent* sigval1 = e;
		miqt_exec_callback_QListView_dropEvent(this, handle__dropEvent.value(), sigval1);

	}

	friend void QListView_virtualbase_dropEvent(void* self, QDropEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__startDrag;

	// Subclass to allow providing a Go implementation
	virtual void startDrag(Qt::DropActions supportedActions) override {
		if (!handle__startDrag) {
			QListView::startDrag(supportedActions);
			return;
		}

		Qt::DropActions supportedActions_ret = supportedActions;
		int sigval1 = static_cast<int>(supportedActions_ret);
		miqt_exec_callback_QListView_startDrag(this, handle__startDrag.value(), sigval1);

	}

	friend void QListView_virtualbase_startDrag(void* self, int supportedActions);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__initViewItemOption;

	// Subclass to allow providing a Go implementation
	virtual void initViewItemOption(QStyleOptionViewItem* option) const override {
		if (!handle__initViewItemOption) {
			QListView::initViewItemOption(option);
			return;
		}

		QStyleOptionViewItem* sigval1 = option;
		miqt_exec_callback_QListView_initViewItemOption(this, handle__initViewItemOption.value(), sigval1);

	}

	friend void QListView_virtualbase_initViewItemOption(const void* self, QStyleOptionViewItem* option);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__paintEvent;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* e) override {
		if (!handle__paintEvent) {
			QListView::paintEvent(e);
			return;
		}

		QPaintEvent* sigval1 = e;
		miqt_exec_callback_QListView_paintEvent(this, handle__paintEvent.value(), sigval1);

	}

	friend void QListView_virtualbase_paintEvent(void* self, QPaintEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__horizontalOffset;

	// Subclass to allow providing a Go implementation
	virtual int horizontalOffset() const override {
		if (!handle__horizontalOffset) {
			return QListView::horizontalOffset();
		}

		int callback_return_value = miqt_exec_callback_QListView_horizontalOffset(this, handle__horizontalOffset.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QListView_virtualbase_horizontalOffset(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__verticalOffset;

	// Subclass to allow providing a Go implementation
	virtual int verticalOffset() const override {
		if (!handle__verticalOffset) {
			return QListView::verticalOffset();
		}

		int callback_return_value = miqt_exec_callback_QListView_verticalOffset(this, handle__verticalOffset.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QListView_virtualbase_verticalOffset(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__moveCursor;
	bool owns_return__moveCursor = false;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
		if (!handle__moveCursor) {
			return QListView::moveCursor(cursorAction, modifiers);
		}

		QAbstractItemView::CursorAction cursorAction_ret = cursorAction;
		int sigval1 = static_cast<int>(cursorAction_ret);
		Qt::KeyboardModifiers modifiers_ret = modifiers;
		int sigval2 = static_cast<int>(modifiers_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QListView_moveCursor(this, handle__moveCursor.value(), sigval1, sigval2);
		std::unique_ptr<QModelIndex> callback_return_value_owner;
		if (owns_return__moveCursor) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QModelIndex* QListView_virtualbase_moveCursor(void* self, int cursorAction, int modifiers);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__setSelection;

	// Subclass to allow providing a Go implementation
	virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
		if (!handle__setSelection) {
			QListView::setSelection(rect, command);
			return;
		}

		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);
		QItemSelectionModel::SelectionFlags command_ret = command;
		int sigval2 = static_cast<int>(command_ret);
		miqt_exec_callback_QListView_setSelection(this, handle__setSelection.value(), sigval1, sigval2);

	}

	friend void QListView_virtualbase_setSelection(void* self, QRect* rect, int command);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__visualRegionForSelection;
	bool owns_return__visualRegionForSelection = false;

	// Subclass to allow providing a Go implementation
	virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
		if (!handle__visualRegionForSelection) {
			return QListView::visualRegionForSelection(selection);
		}

		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);
		QRegion* callback_return_value = miqt_exec_callback_QListView_visualRegionForSelection(this, handle__visualRegionForSelection.value(), sigval1);
		std::unique_ptr<QRegion> callback_return_value_owner;
		if (owns_return__visualRegionForSelection) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QRegion* QListView_virtualbase_visualRegionForSelection(const void* self, QItemSelection* selection);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__selectedIndexes;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList selectedIndexes() const override {
		if (!handle__selectedIndexes) {
			return QListView::selectedIndexes();
		}

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QListView_selectedIndexes(this, handle__selectedIndexes.value());
		QModelIndexList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QModelIndex** callback_return_value_arr = static_cast<QModelIndex**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(*(callback_return_value_arr[i]));
		}
		free(callback_return_value.data);
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of QModelIndex* */  QListView_virtualbase_selectedIndexes(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__updateGeometries;

	// Subclass to allow providing a Go implementation
	virtual void updateGeometries() override {
		if (!handle__updateGeometries) {
			QListView::updateGeometries();
			return;
		}

		miqt_exec_callback_QListView_updateGeometries(this, handle__updateGeometries.value());

	}

	friend void QListView_virtualbase_updateGeometries(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__isIndexHidden;

	// Subclass to allow providing a Go implementation
	virtual bool isIndexHidden(const QModelIndex& index) const override {
		if (!handle__isIndexHidden) {
			return QListView::isIndexHidden(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		bool callback_return_value = miqt_exec_callback_QListView_isIndexHidden(this, handle__isIndexHidden.value(), sigval1);
		return callback_return_value;
	}

	friend bool QListView_virtualbase_isIndexHidden(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__selectionChanged;

	// Subclass to allow providing a Go implementation
	virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
		if (!handle__selectionChanged) {
			QListView::selectionChanged(selected, deselected);
			return;
		}

		const QItemSelection& selected_ret = selected;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selected_ret);
		const QItemSelection& deselected_ret = deselected;
		// Cast returned reference into pointer
		QItemSelection* sigval2 = const_cast<QItemSelection*>(&deselected_ret);
		miqt_exec_callback_QListView_selectionChanged(this, handle__selectionChanged.value(), sigval1, sigval2);

	}

	friend void QListView_virtualbase_selectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__currentChanged;

	// Subclass to allow providing a Go implementation
	virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
		if (!handle__currentChanged) {
			QListView::currentChanged(current, previous);
			return;
		}

		const QModelIndex& current_ret = current;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&current_ret);
		const QModelIndex& previous_ret = previous;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&previous_ret);
		miqt_exec_callback_QListView_currentChanged(this, handle__currentChanged.value(), sigval1, sigval2);

	}

	friend void QListView_virtualbase_currentChanged(void* self, QModelIndex* current, QModelIndex* previous);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__viewportSizeHint;
	bool owns_return__viewportSizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (!handle__viewportSizeHint) {
			return QListView::viewportSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QListView_viewportSizeHint(this, handle__viewportSizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__viewportSizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QListView_virtualbase_viewportSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__setModel;

	// Subclass to allow providing a Go implementation
	virtual void setModel(QAbstractItemModel* model) override {
		if (!handle__setModel) {
			QListView::setModel(model);
			return;
		}

		QAbstractItemModel* sigval1 = model;
		miqt_exec_callback_QListView_setModel(this, handle__setModel.value(), sigval1);

	}

	friend void QListView_virtualbase_setModel(void* self, QAbstractItemModel* model);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__setSelectionModel;

	// Subclass to allow providing a Go implementation
	virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
		if (!handle__setSelectionModel) {
			QListView::setSelectionModel(selectionModel);
			return;
		}

		QItemSelectionModel* sigval1 = selectionModel;
		miqt_exec_callback_QListView_setSelectionModel(this, handle__setSelectionModel.value(), sigval1);

	}

	friend void QListView_virtualbase_setSelectionModel(void* self, QItemSelectionModel* selectionModel);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__keyboardSearch;

	// Subclass to allow providing a Go implementation
	virtual void keyboardSearch(const QString& search) override {
		if (!handle__keyboardSearch) {
			QListView::keyboardSearch(search);
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
		miqt_exec_callback_QListView_keyboardSearch(this, handle__keyboardSearch.value(), sigval1);

	}

	friend void QListView_virtualbase_keyboardSearch(void* self, struct miqt_string search);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__sizeHintForRow;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForRow(int row) const override {
		if (!handle__sizeHintForRow) {
			return QListView::sizeHintForRow(row);
		}

		int sigval1 = row;
		int callback_return_value = miqt_exec_callback_QListView_sizeHintForRow(this, handle__sizeHintForRow.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QListView_virtualbase_sizeHintForRow(const void* self, int row);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__sizeHintForColumn;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForColumn(int column) const override {
		if (!handle__sizeHintForColumn) {
			return QListView::sizeHintForColumn(column);
		}

		int sigval1 = column;
		int callback_return_value = miqt_exec_callback_QListView_sizeHintForColumn(this, handle__sizeHintForColumn.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QListView_virtualbase_sizeHintForColumn(const void* self, int column);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__itemDelegateForIndex;

	// Subclass to allow providing a Go implementation
	virtual QAbstractItemDelegate* itemDelegateForIndex(const QModelIndex& index) const override {
		if (!handle__itemDelegateForIndex) {
			return QListView::itemDelegateForIndex(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemDelegate* callback_return_value = miqt_exec_callback_QListView_itemDelegateForIndex(this, handle__itemDelegateForIndex.value(), sigval1);
		return callback_return_value;
	}

	friend QAbstractItemDelegate* QListView_virtualbase_itemDelegateForIndex(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__inputMethodQuery;
	bool owns_return__inputMethodQuery = false;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (!handle__inputMethodQuery) {
			return QListView::inputMethodQuery(query);
		}

		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);
		QVariant* callback_return_value = miqt_exec_callback_QListView_inputMethodQuery(this, handle__inputMethodQuery.value(), sigval1);
		std::unique_ptr<QVariant> callback_return_value_owner;
		if (owns_return__inputMethodQuery) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QVariant* QListView_virtualbase_inputMethodQuery(const void* self, int query);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__selectAll;

	// Subclass to allow providing a Go implementation
	virtual void selectAll() override {
		if (!handle__selectAll) {
			QListView::selectAll();
			return;
		}

		miqt_exec_callback_QListView_selectAll(this, handle__selectAll.value());

	}

	friend void QListView_virtualbase_selectAll(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__updateEditorData;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorData() override {
		if (!handle__updateEditorData) {
			QListView::updateEditorData();
			return;
		}

		miqt_exec_callback_QListView_updateEditorData(this, handle__updateEditorData.value());

	}

	friend void QListView_virtualbase_updateEditorData(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__updateEditorGeometries;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorGeometries() override {
		if (!handle__updateEditorGeometries) {
			QListView::updateEditorGeometries();
			return;
		}

		miqt_exec_callback_QListView_updateEditorGeometries(this, handle__updateEditorGeometries.value());

	}

	friend void QListView_virtualbase_updateEditorGeometries(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__verticalScrollbarAction;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarAction(int action) override {
		if (!handle__verticalScrollbarAction) {
			QListView::verticalScrollbarAction(action);
			return;
		}

		int sigval1 = action;
		miqt_exec_callback_QListView_verticalScrollbarAction(this, handle__verticalScrollbarAction.value(), sigval1);

	}

	friend void QListView_virtualbase_verticalScrollbarAction(void* self, int action);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__horizontalScrollbarAction;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarAction(int action) override {
		if (!handle__horizontalScrollbarAction) {
			QListView::horizontalScrollbarAction(action);
			return;
		}

		int sigval1 = action;
		miqt_exec_callback_QListView_horizontalScrollbarAction(this, handle__horizontalScrollbarAction.value(), sigval1);

	}

	friend void QListView_virtualbase_horizontalScrollbarAction(void* self, int action);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__verticalScrollbarValueChanged;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarValueChanged(int value) override {
		if (!handle__verticalScrollbarValueChanged) {
			QListView::verticalScrollbarValueChanged(value);
			return;
		}

		int sigval1 = value;
		miqt_exec_callback_QListView_verticalScrollbarValueChanged(this, handle__verticalScrollbarValueChanged.value(), sigval1);

	}

	friend void QListView_virtualbase_verticalScrollbarValueChanged(void* self, int value);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__horizontalScrollbarValueChanged;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarValueChanged(int value) override {
		if (!handle__horizontalScrollbarValueChanged) {
			QListView::horizontalScrollbarValueChanged(value);
			return;
		}

		int sigval1 = value;
		miqt_exec_callback_QListView_horizontalScrollbarValueChanged(this, handle__horizontalScrollbarValueChanged.value(), sigval1);

	}

	friend void QListView_virtualbase_horizontalScrollbarValueChanged(void* self, int value);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__closeEditor;

	// Subclass to allow providing a Go implementation
	virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
		if (!handle__closeEditor) {
			QListView::closeEditor(editor, hint);
			return;
		}

		QWidget* sigval1 = editor;
		QAbstractItemDelegate::EndEditHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);
		miqt_exec_callback_QListView_closeEditor(this, handle__closeEditor.value(), sigval1, sigval2);

	}

	friend void QListView_virtualbase_closeEditor(void* self, QWidget* editor, int hint);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__commitData;

	// Subclass to allow providing a Go implementation
	virtual void commitData(QWidget* editor) override {
		if (!handle__commitData) {
			QListView::commitData(editor);
			return;
		}

		QWidget* sigval1 = editor;
		miqt_exec_callback_QListView_commitData(this, handle__commitData.value(), sigval1);

	}

	friend void QListView_virtualbase_commitData(void* self, QWidget* editor);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__editorDestroyed;

	// Subclass to allow providing a Go implementation
	virtual void editorDestroyed(QObject* editor) override {
		if (!handle__editorDestroyed) {
			QListView::editorDestroyed(editor);
			return;
		}

		QObject* sigval1 = editor;
		miqt_exec_callback_QListView_editorDestroyed(this, handle__editorDestroyed.value(), sigval1);

	}

	friend void QListView_virtualbase_editorDestroyed(void* self, QObject* editor);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__edit2;

	// Subclass to allow providing a Go implementation
	virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
		if (!handle__edit2) {
			return QListView::edit(index, trigger, event);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::EditTrigger trigger_ret = trigger;
		int sigval2 = static_cast<int>(trigger_ret);
		QEvent* sigval3 = event;
		bool callback_return_value = miqt_exec_callback_QListView_edit2(this, handle__edit2.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QListView_virtualbase_edit2(void* self, QModelIndex* index, int trigger, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__selectionCommand;

	// Subclass to allow providing a Go implementation
	virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
		if (!handle__selectionCommand) {
			return QListView::selectionCommand(index, event);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QEvent* sigval2 = (QEvent*) event;
		int callback_return_value = miqt_exec_callback_QListView_selectionCommand(this, handle__selectionCommand.value(), sigval1, sigval2);
		return static_cast<QItemSelectionModel::SelectionFlags>(callback_return_value);
	}

	friend int QListView_virtualbase_selectionCommand(const void* self, QModelIndex* index, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__focusNextPrevChild;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (!handle__focusNextPrevChild) {
			return QListView::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QListView_focusNextPrevChild(this, handle__focusNextPrevChild.value(), sigval1);
		return callback_return_value;
	}

	friend bool QListView_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__viewportEvent;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* event) override {
		if (!handle__viewportEvent) {
			return QListView::viewportEvent(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QListView_viewportEvent(this, handle__viewportEvent.value(), sigval1);
		return callback_return_value;
	}

	friend bool QListView_virtualbase_viewportEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__mousePressEvent;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (!handle__mousePressEvent) {
			QListView::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QListView_mousePressEvent(this, handle__mousePressEvent.value(), sigval1);

	}

	friend void QListView_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__mouseDoubleClickEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (!handle__mouseDoubleClickEvent) {
			QListView::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QListView_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent.value(), sigval1);

	}

	friend void QListView_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__dragEnterEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (!handle__dragEnterEvent) {
			QListView::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QListView_dragEnterEvent(this, handle__dragEnterEvent.value(), sigval1);

	}

	friend void QListView_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__focusInEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (!handle__focusInEvent) {
			QListView::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QListView_focusInEvent(this, handle__focusInEvent.value(), sigval1);

	}

	friend void QListView_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__focusOutEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (!handle__focusOutEvent) {
			QListView::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QListView_focusOutEvent(this, handle__focusOutEvent.value(), sigval1);

	}

	friend void QListView_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__keyPressEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (!handle__keyPressEvent) {
			QListView::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QListView_keyPressEvent(this, handle__keyPressEvent.value(), sigval1);

	}

	friend void QListView_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__inputMethodEvent;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (!handle__inputMethodEvent) {
			QListView::inputMethodEvent(event);
			return;
		}

		QInputMethodEvent* sigval1 = event;
		miqt_exec_callback_QListView_inputMethodEvent(this, handle__inputMethodEvent.value(), sigval1);

	}

	friend void QListView_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (!handle__eventFilter) {
			return QListView::eventFilter(object, event);
		}

		QObject* sigval1 = object;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QListView_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QListView_virtualbase_eventFilter(void* self, QObject* object, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__minimumSizeHint;
	bool owns_return__minimumSizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (!handle__minimumSizeHint) {
			return QListView::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QListView_minimumSizeHint(this, handle__minimumSizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__minimumSizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QListView_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__sizeHint;
	bool owns_return__sizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (!handle__sizeHint) {
			return QListView::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QListView_sizeHint(this, handle__sizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__sizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QListView_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__setupViewport;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (!handle__setupViewport) {
			QListView::setupViewport(viewport);
			return;
		}

		QWidget* sigval1 = viewport;
		miqt_exec_callback_QListView_setupViewport(this, handle__setupViewport.value(), sigval1);

	}

	friend void QListView_virtualbase_setupViewport(void* self, QWidget* viewport);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__contextMenuEvent;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (!handle__contextMenuEvent) {
			QListView::contextMenuEvent(param1);
			return;
		}

		QContextMenuEvent* sigval1 = param1;
		miqt_exec_callback_QListView_contextMenuEvent(this, handle__contextMenuEvent.value(), sigval1);

	}

	friend void QListView_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__changeEvent;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (!handle__changeEvent) {
			QListView::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QListView_changeEvent(this, handle__changeEvent.value(), sigval1);

	}

	friend void QListView_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__initStyleOption;

	// Subclass to allow providing a Go implementation
	virtual void initStyleOption(QStyleOptionFrame* option) const override {
		if (!handle__initStyleOption) {
			QListView::initStyleOption(option);
			return;
		}

		QStyleOptionFrame* sigval1 = option;
		miqt_exec_callback_QListView_initStyleOption(this, handle__initStyleOption.value(), sigval1);

	}

	friend void QListView_virtualbase_initStyleOption(const void* self, QStyleOptionFrame* option);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__devType;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (!handle__devType) {
			return QListView::devType();
		}

		int callback_return_value = miqt_exec_callback_QListView_devType(this, handle__devType.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QListView_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__setVisible;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (!handle__setVisible) {
			QListView::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QListView_setVisible(this, handle__setVisible.value(), sigval1);

	}

	friend void QListView_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__heightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (!handle__heightForWidth) {
			return QListView::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QListView_heightForWidth(this, handle__heightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QListView_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__hasHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (!handle__hasHeightForWidth) {
			return QListView::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QListView_hasHeightForWidth(this, handle__hasHeightForWidth.value());
		return callback_return_value;
	}

	friend bool QListView_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__paintEngine;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (!handle__paintEngine) {
			return QListView::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QListView_paintEngine(this, handle__paintEngine.value());
		return callback_return_value;
	}

	friend QPaintEngine* QListView_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__keyReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (!handle__keyReleaseEvent) {
			QListView::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QListView_keyReleaseEvent(this, handle__keyReleaseEvent.value(), sigval1);

	}

	friend void QListView_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__enterEvent;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEnterEvent* event) override {
		if (!handle__enterEvent) {
			QListView::enterEvent(event);
			return;
		}

		QEnterEvent* sigval1 = event;
		miqt_exec_callback_QListView_enterEvent(this, handle__enterEvent.value(), sigval1);

	}

	friend void QListView_virtualbase_enterEvent(void* self, QEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__leaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (!handle__leaveEvent) {
			QListView::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QListView_leaveEvent(this, handle__leaveEvent.value(), sigval1);

	}

	friend void QListView_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__moveEvent;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (!handle__moveEvent) {
			QListView::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QListView_moveEvent(this, handle__moveEvent.value(), sigval1);

	}

	friend void QListView_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__closeEvent;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (!handle__closeEvent) {
			QListView::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QListView_closeEvent(this, handle__closeEvent.value(), sigval1);

	}

	friend void QListView_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__tabletEvent;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (!handle__tabletEvent) {
			QListView::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QListView_tabletEvent(this, handle__tabletEvent.value(), sigval1);

	}

	friend void QListView_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__actionEvent;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (!handle__actionEvent) {
			QListView::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QListView_actionEvent(this, handle__actionEvent.value(), sigval1);

	}

	friend void QListView_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__showEvent;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (!handle__showEvent) {
			QListView::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QListView_showEvent(this, handle__showEvent.value(), sigval1);

	}

	friend void QListView_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__hideEvent;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (!handle__hideEvent) {
			QListView::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QListView_hideEvent(this, handle__hideEvent.value(), sigval1);

	}

	friend void QListView_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__nativeEvent;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, qintptr* result) override {
		if (!handle__nativeEvent) {
			return QListView::nativeEvent(eventType, message, result);
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
		bool callback_return_value = miqt_exec_callback_QListView_nativeEvent(this, handle__nativeEvent.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QListView_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__metric;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (!handle__metric) {
			return QListView::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QListView_metric(this, handle__metric.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QListView_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__initPainter;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (!handle__initPainter) {
			QListView::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QListView_initPainter(this, handle__initPainter.value(), sigval1);

	}

	friend void QListView_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__redirected;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (!handle__redirected) {
			return QListView::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QListView_redirected(this, handle__redirected.value(), sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QListView_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__sharedPainter;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (!handle__sharedPainter) {
			return QListView::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QListView_sharedPainter(this, handle__sharedPainter.value());
		return callback_return_value;
	}

	friend QPainter* QListView_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QListView::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QListView_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QListView_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QListView::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QListView_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QListView_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QListView::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QListView_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QListView_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QListView::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QListView_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QListView_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QListView_protectedbase_resizeContents(bool* _dynamic_cast_ok, void* self, int width, int height);
	friend QSize* QListView_protectedbase_contentsSize(bool* _dynamic_cast_ok, const void* self);
	friend QRect* QListView_protectedbase_rectForIndex(bool* _dynamic_cast_ok, const void* self, QModelIndex* index);
	friend void QListView_protectedbase_setPositionForIndex(bool* _dynamic_cast_ok, void* self, QPoint* position, QModelIndex* index);
	friend int QListView_protectedbase_state(bool* _dynamic_cast_ok, const void* self);
	friend void QListView_protectedbase_setState(bool* _dynamic_cast_ok, void* self, int state);
	friend void QListView_protectedbase_scheduleDelayedItemsLayout(bool* _dynamic_cast_ok, void* self);
	friend void QListView_protectedbase_executeDelayedItemsLayout(bool* _dynamic_cast_ok, void* self);
	friend void QListView_protectedbase_setDirtyRegion(bool* _dynamic_cast_ok, void* self, QRegion* region);
	friend void QListView_protectedbase_scrollDirtyRegion(bool* _dynamic_cast_ok, void* self, int dx, int dy);
	friend QPoint* QListView_protectedbase_dirtyRegionOffset(bool* _dynamic_cast_ok, const void* self);
	friend void QListView_protectedbase_startAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend void QListView_protectedbase_stopAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend void QListView_protectedbase_doAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend int QListView_protectedbase_dropIndicatorPosition(bool* _dynamic_cast_ok, const void* self);
	friend void QListView_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom);
	friend QMargins* QListView_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self);
	friend void QListView_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
	friend void QListView_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QListView_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QListView_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QListView_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QListView_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QListView_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QListView_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QListView_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QListView_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QListView* QListView_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQListView(parent);
}

QListView* QListView_new2() {
	return new (std::nothrow) MiqtVirtualQListView();
}

void QListView_virtbase(QListView* src, QAbstractItemView** outptr_QAbstractItemView) {
	*outptr_QAbstractItemView = static_cast<QAbstractItemView*>(src);
}

QMetaObject* QListView_metaObject(const QListView* self) {
	return (QMetaObject*) self->metaObject();
}

void* QListView_metacast(QListView* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QListView_tr(const char* s) {
	QString _ret = QListView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QListView_setMovement(QListView* self, int movement) {
	self->setMovement(static_cast<QListView::Movement>(movement));
}

int QListView_movement(const QListView* self) {
	QListView::Movement _ret = self->movement();
	return static_cast<int>(_ret);
}

void QListView_setFlow(QListView* self, int flow) {
	self->setFlow(static_cast<QListView::Flow>(flow));
}

int QListView_flow(const QListView* self) {
	QListView::Flow _ret = self->flow();
	return static_cast<int>(_ret);
}

void QListView_setWrapping(QListView* self, bool enable) {
	self->setWrapping(enable);
}

bool QListView_isWrapping(const QListView* self) {
	return self->isWrapping();
}

void QListView_setResizeMode(QListView* self, int mode) {
	self->setResizeMode(static_cast<QListView::ResizeMode>(mode));
}

int QListView_resizeMode(const QListView* self) {
	QListView::ResizeMode _ret = self->resizeMode();
	return static_cast<int>(_ret);
}

void QListView_setLayoutMode(QListView* self, int mode) {
	self->setLayoutMode(static_cast<QListView::LayoutMode>(mode));
}

int QListView_layoutMode(const QListView* self) {
	QListView::LayoutMode _ret = self->layoutMode();
	return static_cast<int>(_ret);
}

void QListView_setSpacing(QListView* self, int space) {
	self->setSpacing(static_cast<int>(space));
}

int QListView_spacing(const QListView* self) {
	return self->spacing();
}

void QListView_setBatchSize(QListView* self, int batchSize) {
	self->setBatchSize(static_cast<int>(batchSize));
}

int QListView_batchSize(const QListView* self) {
	return self->batchSize();
}

void QListView_setGridSize(QListView* self, QSize* size) {
	self->setGridSize(*size);
}

QSize* QListView_gridSize(const QListView* self) {
	return new QSize(self->gridSize());
}

void QListView_setViewMode(QListView* self, int mode) {
	self->setViewMode(static_cast<QListView::ViewMode>(mode));
}

int QListView_viewMode(const QListView* self) {
	QListView::ViewMode _ret = self->viewMode();
	return static_cast<int>(_ret);
}

void QListView_clearPropertyFlags(QListView* self) {
	self->clearPropertyFlags();
}

bool QListView_isRowHidden(const QListView* self, int row) {
	return self->isRowHidden(static_cast<int>(row));
}

void QListView_setRowHidden(QListView* self, int row, bool hide) {
	self->setRowHidden(static_cast<int>(row), hide);
}

void QListView_setModelColumn(QListView* self, int column) {
	self->setModelColumn(static_cast<int>(column));
}

int QListView_modelColumn(const QListView* self) {
	return self->modelColumn();
}

void QListView_setUniformItemSizes(QListView* self, bool enable) {
	self->setUniformItemSizes(enable);
}

bool QListView_uniformItemSizes(const QListView* self) {
	return self->uniformItemSizes();
}

void QListView_setWordWrap(QListView* self, bool on) {
	self->setWordWrap(on);
}

bool QListView_wordWrap(const QListView* self) {
	return self->wordWrap();
}

void QListView_setSelectionRectVisible(QListView* self, bool show) {
	self->setSelectionRectVisible(show);
}

bool QListView_isSelectionRectVisible(const QListView* self) {
	return self->isSelectionRectVisible();
}

void QListView_setItemAlignment(QListView* self, int alignment) {
	self->setItemAlignment(static_cast<Qt::Alignment>(alignment));
}

int QListView_itemAlignment(const QListView* self) {
	Qt::Alignment _ret = self->itemAlignment();
	return static_cast<int>(_ret);
}

QRect* QListView_visualRect(const QListView* self, QModelIndex* index) {
	return new QRect(self->visualRect(*index));
}

void QListView_scrollTo(QListView* self, QModelIndex* index, int hint) {
	self->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

QModelIndex* QListView_indexAt(const QListView* self, QPoint* p) {
	return new QModelIndex(self->indexAt(*p));
}

void QListView_doItemsLayout(QListView* self) {
	self->doItemsLayout();
}

void QListView_reset(QListView* self) {
	self->reset();
}

void QListView_setRootIndex(QListView* self, QModelIndex* index) {
	self->setRootIndex(*index);
}

void QListView_indexesMoved(QListView* self, struct miqt_array /* of QModelIndex* */  indexes) {
	QModelIndexList indexes_QList;
	indexes_QList.reserve(indexes.len);
	QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
	for(size_t i = 0; i < indexes.len; ++i) {
		indexes_QList.push_back(*(indexes_arr[i]));
	}
	self->indexesMoved(indexes_QList);
}

void* QListView_connect_indexesMoved(QListView* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QListView>>(slot);
	return new QMetaObject::Connection(QListView::connect(self, static_cast<void (QListView::*)(const QModelIndexList&)>(&QListView::indexesMoved), self, [slot_handle](const QModelIndexList& indexes) {
		intptr_t slot = slot_handle->value();
		const QModelIndexList& indexes_ret = indexes;
		// Convert QList<> from C++ memory to manually-managed C memory
		QModelIndex** indexes_arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * indexes_ret.length()));
		for (size_t i = 0, e = indexes_ret.length(); i < e; ++i) {
			indexes_arr[i] = new QModelIndex(indexes_ret[i]);
		}
		struct miqt_array indexes_out;
		indexes_out.len = indexes_ret.length();
		indexes_out.data = static_cast<void*>(indexes_arr);
		struct miqt_array /* of QModelIndex* */  sigval1 = indexes_out;
		miqt_exec_callback_QListView_indexesMoved(slot, sigval1);
	}));
}

struct miqt_string QListView_tr2(const char* s, const char* c) {
	QString _ret = QListView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QListView_tr3(const char* s, const char* c, int n) {
	QString _ret = QListView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QListView_override_virtual_visualRect(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__visualRect = std::move(slot_handle);
	self_cast->owns_return__visualRect = false;
	return true;
}

bool QListView_override_virtual_owned_visualRect(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__visualRect = std::move(slot_handle);
	self_cast->owns_return__visualRect = true;
	return true;
}

QRect* QListView_virtualbase_visualRect(const void* self, QModelIndex* index) {
	return new QRect(static_cast<const MiqtVirtualQListView*>(self)->QListView::visualRect(*index));
}

bool QListView_override_virtual_scrollTo(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scrollTo = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_scrollTo(void* self, QModelIndex* index, int hint) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::scrollTo(*index, static_cast<MiqtVirtualQListView::ScrollHint>(hint));
}

bool QListView_override_virtual_indexAt(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__indexAt = std::move(slot_handle);
	self_cast->owns_return__indexAt = false;
	return true;
}

bool QListView_override_virtual_owned_indexAt(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__indexAt = std::move(slot_handle);
	self_cast->owns_return__indexAt = true;
	return true;
}

QModelIndex* QListView_virtualbase_indexAt(const void* self, QPoint* p) {
	return new QModelIndex(static_cast<const MiqtVirtualQListView*>(self)->QListView::indexAt(*p));
}

bool QListView_override_virtual_doItemsLayout(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__doItemsLayout = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_doItemsLayout(void* self) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::doItemsLayout();
}

bool QListView_override_virtual_reset(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__reset = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_reset(void* self) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::reset();
}

bool QListView_override_virtual_setRootIndex(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setRootIndex = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_setRootIndex(void* self, QModelIndex* index) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::setRootIndex(*index);
}

bool QListView_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QListView_virtualbase_event(void* self, QEvent* e) {
	return static_cast<MiqtVirtualQListView*>(self)->QListView::event(e);
}

bool QListView_override_virtual_scrollContentsBy(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scrollContentsBy = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_scrollContentsBy(void* self, int dx, int dy) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
}

bool QListView_override_virtual_dataChanged(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dataChanged = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_dataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
	QList<int> roles_QList;
	roles_QList.reserve(roles.len);
	int* roles_arr = static_cast<int*>(roles.data);
	for(size_t i = 0; i < roles.len; ++i) {
		roles_QList.push_back(static_cast<int>(roles_arr[i]));
	}
	static_cast<MiqtVirtualQListView*>(self)->QListView::dataChanged(*topLeft, *bottomRight, roles_QList);
}

bool QListView_override_virtual_rowsInserted(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__rowsInserted = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_rowsInserted(void* self, QModelIndex* parent, int start, int end) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
}

bool QListView_override_virtual_rowsAboutToBeRemoved(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__rowsAboutToBeRemoved = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_rowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
}

bool QListView_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_mouseMoveEvent(void* self, QMouseEvent* e) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::mouseMoveEvent(e);
}

bool QListView_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* e) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::mouseReleaseEvent(e);
}

bool QListView_override_virtual_wheelEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_wheelEvent(void* self, QWheelEvent* e) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::wheelEvent(e);
}

bool QListView_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_timerEvent(void* self, QTimerEvent* e) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::timerEvent(e);
}

bool QListView_override_virtual_resizeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_resizeEvent(void* self, QResizeEvent* e) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::resizeEvent(e);
}

bool QListView_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* e) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::dragMoveEvent(e);
}

bool QListView_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* e) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::dragLeaveEvent(e);
}

bool QListView_override_virtual_dropEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_dropEvent(void* self, QDropEvent* e) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::dropEvent(e);
}

bool QListView_override_virtual_startDrag(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__startDrag = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_startDrag(void* self, int supportedActions) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::startDrag(static_cast<Qt::DropActions>(supportedActions));
}

bool QListView_override_virtual_initViewItemOption(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initViewItemOption = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_initViewItemOption(const void* self, QStyleOptionViewItem* option) {
	static_cast<const MiqtVirtualQListView*>(self)->QListView::initViewItemOption(option);
}

bool QListView_override_virtual_paintEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_paintEvent(void* self, QPaintEvent* e) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::paintEvent(e);
}

bool QListView_override_virtual_horizontalOffset(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__horizontalOffset = std::move(slot_handle);
	return true;
}

int QListView_virtualbase_horizontalOffset(const void* self) {
	return static_cast<const MiqtVirtualQListView*>(self)->QListView::horizontalOffset();
}

bool QListView_override_virtual_verticalOffset(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__verticalOffset = std::move(slot_handle);
	return true;
}

int QListView_virtualbase_verticalOffset(const void* self) {
	return static_cast<const MiqtVirtualQListView*>(self)->QListView::verticalOffset();
}

bool QListView_override_virtual_moveCursor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveCursor = std::move(slot_handle);
	self_cast->owns_return__moveCursor = false;
	return true;
}

bool QListView_override_virtual_owned_moveCursor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveCursor = std::move(slot_handle);
	self_cast->owns_return__moveCursor = true;
	return true;
}

QModelIndex* QListView_virtualbase_moveCursor(void* self, int cursorAction, int modifiers) {
	return new QModelIndex(static_cast<MiqtVirtualQListView*>(self)->QListView::moveCursor(static_cast<MiqtVirtualQListView::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
}

bool QListView_override_virtual_setSelection(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setSelection = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_setSelection(void* self, QRect* rect, int command) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
}

bool QListView_override_virtual_visualRegionForSelection(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__visualRegionForSelection = std::move(slot_handle);
	self_cast->owns_return__visualRegionForSelection = false;
	return true;
}

bool QListView_override_virtual_owned_visualRegionForSelection(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__visualRegionForSelection = std::move(slot_handle);
	self_cast->owns_return__visualRegionForSelection = true;
	return true;
}

QRegion* QListView_virtualbase_visualRegionForSelection(const void* self, QItemSelection* selection) {
	return new QRegion(static_cast<const MiqtVirtualQListView*>(self)->QListView::visualRegionForSelection(*selection));
}

bool QListView_override_virtual_selectedIndexes(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__selectedIndexes = std::move(slot_handle);
	return true;
}

struct miqt_array /* of QModelIndex* */  QListView_virtualbase_selectedIndexes(const void* self) {
	QModelIndexList _ret = static_cast<const MiqtVirtualQListView*>(self)->QListView::selectedIndexes();
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

bool QListView_override_virtual_updateGeometries(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateGeometries = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_updateGeometries(void* self) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::updateGeometries();
}

bool QListView_override_virtual_isIndexHidden(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isIndexHidden = std::move(slot_handle);
	return true;
}

bool QListView_virtualbase_isIndexHidden(const void* self, QModelIndex* index) {
	return static_cast<const MiqtVirtualQListView*>(self)->QListView::isIndexHidden(*index);
}

bool QListView_override_virtual_selectionChanged(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__selectionChanged = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_selectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::selectionChanged(*selected, *deselected);
}

bool QListView_override_virtual_currentChanged(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__currentChanged = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_currentChanged(void* self, QModelIndex* current, QModelIndex* previous) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::currentChanged(*current, *previous);
}

bool QListView_override_virtual_viewportSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__viewportSizeHint = std::move(slot_handle);
	self_cast->owns_return__viewportSizeHint = false;
	return true;
}

bool QListView_override_virtual_owned_viewportSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__viewportSizeHint = std::move(slot_handle);
	self_cast->owns_return__viewportSizeHint = true;
	return true;
}

QSize* QListView_virtualbase_viewportSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQListView*>(self)->QListView::viewportSizeHint());
}

bool QListView_override_virtual_setModel(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setModel = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_setModel(void* self, QAbstractItemModel* model) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::setModel(model);
}

bool QListView_override_virtual_setSelectionModel(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setSelectionModel = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_setSelectionModel(void* self, QItemSelectionModel* selectionModel) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::setSelectionModel(selectionModel);
}

bool QListView_override_virtual_keyboardSearch(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyboardSearch = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_keyboardSearch(void* self, struct miqt_string search) {
	QString search_QString = QString::fromUtf8(search.data, search.len);
	static_cast<MiqtVirtualQListView*>(self)->QListView::keyboardSearch(search_QString);
}

bool QListView_override_virtual_sizeHintForRow(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHintForRow = std::move(slot_handle);
	return true;
}

int QListView_virtualbase_sizeHintForRow(const void* self, int row) {
	return static_cast<const MiqtVirtualQListView*>(self)->QListView::sizeHintForRow(static_cast<int>(row));
}

bool QListView_override_virtual_sizeHintForColumn(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHintForColumn = std::move(slot_handle);
	return true;
}

int QListView_virtualbase_sizeHintForColumn(const void* self, int column) {
	return static_cast<const MiqtVirtualQListView*>(self)->QListView::sizeHintForColumn(static_cast<int>(column));
}

bool QListView_override_virtual_itemDelegateForIndex(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__itemDelegateForIndex = std::move(slot_handle);
	return true;
}

QAbstractItemDelegate* QListView_virtualbase_itemDelegateForIndex(const void* self, QModelIndex* index) {
	return static_cast<const MiqtVirtualQListView*>(self)->QListView::itemDelegateForIndex(*index);
}

bool QListView_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	self_cast->owns_return__inputMethodQuery = false;
	return true;
}

bool QListView_override_virtual_owned_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	self_cast->owns_return__inputMethodQuery = true;
	return true;
}

QVariant* QListView_virtualbase_inputMethodQuery(const void* self, int query) {
	return new QVariant(static_cast<const MiqtVirtualQListView*>(self)->QListView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

bool QListView_override_virtual_selectAll(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__selectAll = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_selectAll(void* self) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::selectAll();
}

bool QListView_override_virtual_updateEditorData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateEditorData = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_updateEditorData(void* self) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::updateEditorData();
}

bool QListView_override_virtual_updateEditorGeometries(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateEditorGeometries = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_updateEditorGeometries(void* self) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::updateEditorGeometries();
}

bool QListView_override_virtual_verticalScrollbarAction(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__verticalScrollbarAction = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_verticalScrollbarAction(void* self, int action) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::verticalScrollbarAction(static_cast<int>(action));
}

bool QListView_override_virtual_horizontalScrollbarAction(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__horizontalScrollbarAction = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_horizontalScrollbarAction(void* self, int action) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::horizontalScrollbarAction(static_cast<int>(action));
}

bool QListView_override_virtual_verticalScrollbarValueChanged(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__verticalScrollbarValueChanged = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_verticalScrollbarValueChanged(void* self, int value) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::verticalScrollbarValueChanged(static_cast<int>(value));
}

bool QListView_override_virtual_horizontalScrollbarValueChanged(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__horizontalScrollbarValueChanged = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_horizontalScrollbarValueChanged(void* self, int value) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::horizontalScrollbarValueChanged(static_cast<int>(value));
}

bool QListView_override_virtual_closeEditor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEditor = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_closeEditor(void* self, QWidget* editor, int hint) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
}

bool QListView_override_virtual_commitData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__commitData = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_commitData(void* self, QWidget* editor) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::commitData(editor);
}

bool QListView_override_virtual_editorDestroyed(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__editorDestroyed = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_editorDestroyed(void* self, QObject* editor) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::editorDestroyed(editor);
}

bool QListView_override_virtual_edit2(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__edit2 = std::move(slot_handle);
	return true;
}

bool QListView_virtualbase_edit2(void* self, QModelIndex* index, int trigger, QEvent* event) {
	return static_cast<MiqtVirtualQListView*>(self)->QListView::edit(*index, static_cast<MiqtVirtualQListView::EditTrigger>(trigger), event);
}

bool QListView_override_virtual_selectionCommand(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__selectionCommand = std::move(slot_handle);
	return true;
}

int QListView_virtualbase_selectionCommand(const void* self, QModelIndex* index, QEvent* event) {
	QItemSelectionModel::SelectionFlags _ret = static_cast<const MiqtVirtualQListView*>(self)->QListView::selectionCommand(*index, event);
	return static_cast<int>(_ret);
}

bool QListView_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = std::move(slot_handle);
	return true;
}

bool QListView_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQListView*>(self)->QListView::focusNextPrevChild(next);
}

bool QListView_override_virtual_viewportEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__viewportEvent = std::move(slot_handle);
	return true;
}

bool QListView_virtualbase_viewportEvent(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQListView*>(self)->QListView::viewportEvent(event);
}

bool QListView_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::mousePressEvent(event);
}

bool QListView_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::mouseDoubleClickEvent(event);
}

bool QListView_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::dragEnterEvent(event);
}

bool QListView_override_virtual_focusInEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::focusInEvent(event);
}

bool QListView_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::focusOutEvent(event);
}

bool QListView_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::keyPressEvent(event);
}

bool QListView_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::inputMethodEvent(event);
}

bool QListView_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QListView_virtualbase_eventFilter(void* self, QObject* object, QEvent* event) {
	return static_cast<MiqtVirtualQListView*>(self)->QListView::eventFilter(object, event);
}

bool QListView_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	self_cast->owns_return__minimumSizeHint = false;
	return true;
}

bool QListView_override_virtual_owned_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	self_cast->owns_return__minimumSizeHint = true;
	return true;
}

QSize* QListView_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQListView*>(self)->QListView::minimumSizeHint());
}

bool QListView_override_virtual_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = false;
	return true;
}

bool QListView_override_virtual_owned_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = true;
	return true;
}

QSize* QListView_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQListView*>(self)->QListView::sizeHint());
}

bool QListView_override_virtual_setupViewport(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setupViewport = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_setupViewport(void* self, QWidget* viewport) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::setupViewport(viewport);
}

bool QListView_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::contextMenuEvent(param1);
}

bool QListView_override_virtual_changeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::changeEvent(param1);
}

bool QListView_override_virtual_initStyleOption(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initStyleOption = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_initStyleOption(const void* self, QStyleOptionFrame* option) {
	static_cast<const MiqtVirtualQListView*>(self)->QListView::initStyleOption(option);
}

bool QListView_override_virtual_devType(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = std::move(slot_handle);
	return true;
}

int QListView_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQListView*>(self)->QListView::devType();
}

bool QListView_override_virtual_setVisible(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::setVisible(visible);
}

bool QListView_override_virtual_heightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = std::move(slot_handle);
	return true;
}

int QListView_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQListView*>(self)->QListView::heightForWidth(static_cast<int>(param1));
}

bool QListView_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = std::move(slot_handle);
	return true;
}

bool QListView_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQListView*>(self)->QListView::hasHeightForWidth();
}

bool QListView_override_virtual_paintEngine(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = std::move(slot_handle);
	return true;
}

QPaintEngine* QListView_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQListView*>(self)->QListView::paintEngine();
}

bool QListView_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::keyReleaseEvent(event);
}

bool QListView_override_virtual_enterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_enterEvent(void* self, QEnterEvent* event) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::enterEvent(event);
}

bool QListView_override_virtual_leaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::leaveEvent(event);
}

bool QListView_override_virtual_moveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::moveEvent(event);
}

bool QListView_override_virtual_closeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::closeEvent(event);
}

bool QListView_override_virtual_tabletEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::tabletEvent(event);
}

bool QListView_override_virtual_actionEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::actionEvent(event);
}

bool QListView_override_virtual_showEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::showEvent(event);
}

bool QListView_override_virtual_hideEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::hideEvent(event);
}

bool QListView_override_virtual_nativeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = std::move(slot_handle);
	return true;
}

bool QListView_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, intptr_t* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQListView*>(self)->QListView::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
}

bool QListView_override_virtual_metric(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = std::move(slot_handle);
	return true;
}

int QListView_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQListView*>(self)->QListView::metric(static_cast<MiqtVirtualQListView::PaintDeviceMetric>(param1));
}

bool QListView_override_virtual_initPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQListView*>(self)->QListView::initPainter(painter);
}

bool QListView_override_virtual_redirected(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = std::move(slot_handle);
	return true;
}

QPaintDevice* QListView_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQListView*>(self)->QListView::redirected(offset);
}

bool QListView_override_virtual_sharedPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = std::move(slot_handle);
	return true;
}

QPainter* QListView_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQListView*>(self)->QListView::sharedPainter();
}

bool QListView_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::childEvent(event);
}

bool QListView_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::customEvent(event);
}

bool QListView_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::connectNotify(*signal);
}

bool QListView_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListView> slot_handle(slot);
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QListView_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQListView*>(self)->QListView::disconnectNotify(*signal);
}

void QListView_protectedbase_resizeContents(bool* _dynamic_cast_ok, void* self, int width, int height) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->resizeContents(static_cast<int>(width), static_cast<int>(height));
}

QSize* QListView_protectedbase_contentsSize(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QSize(self_cast->contentsSize());
}

QRect* QListView_protectedbase_rectForIndex(bool* _dynamic_cast_ok, const void* self, QModelIndex* index) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QRect(self_cast->rectForIndex(*index));
}

void QListView_protectedbase_setPositionForIndex(bool* _dynamic_cast_ok, void* self, QPoint* position, QModelIndex* index) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setPositionForIndex(*position, *index);
}

int QListView_protectedbase_state(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}

	*_dynamic_cast_ok = true;
	MiqtVirtualQListView::State _ret = self_cast->state();
	return static_cast<int>(_ret);
}

void QListView_protectedbase_setState(bool* _dynamic_cast_ok, void* self, int state) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setState(static_cast<MiqtVirtualQListView::State>(state));
}

void QListView_protectedbase_scheduleDelayedItemsLayout(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->scheduleDelayedItemsLayout();
}

void QListView_protectedbase_executeDelayedItemsLayout(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->executeDelayedItemsLayout();
}

void QListView_protectedbase_setDirtyRegion(bool* _dynamic_cast_ok, void* self, QRegion* region) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setDirtyRegion(*region);
}

void QListView_protectedbase_scrollDirtyRegion(bool* _dynamic_cast_ok, void* self, int dx, int dy) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
}

QPoint* QListView_protectedbase_dirtyRegionOffset(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QPoint(self_cast->dirtyRegionOffset());
}

void QListView_protectedbase_startAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->startAutoScroll();
}

void QListView_protectedbase_stopAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->stopAutoScroll();
}

void QListView_protectedbase_doAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->doAutoScroll();
}

int QListView_protectedbase_dropIndicatorPosition(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}

	*_dynamic_cast_ok = true;
	MiqtVirtualQListView::DropIndicatorPosition _ret = self_cast->dropIndicatorPosition();
	return static_cast<int>(_ret);
}

void QListView_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
}

QMargins* QListView_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QMargins(self_cast->viewportMargins());
}

void QListView_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->drawFrame(param1);
}

void QListView_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QListView_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QListView_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QListView_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QListView_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QListView_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QListView_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QListView_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QListView_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQListView* self_cast = dynamic_cast<MiqtVirtualQListView*>( (QListView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QListView_delete(QListView* self) {
	delete self;
}

