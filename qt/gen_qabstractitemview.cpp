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
#include <QVector>
#include <QWheelEvent>
#include <QWidget>
#include <qabstractitemview.h>
#include "gen_qabstractitemview.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QAbstractItemView(intptr_t);
void miqt_exec_callback_QAbstractItemView_pressed(intptr_t, QModelIndex*);
void miqt_exec_callback_QAbstractItemView_clicked(intptr_t, QModelIndex*);
void miqt_exec_callback_QAbstractItemView_doubleClicked(intptr_t, QModelIndex*);
void miqt_exec_callback_QAbstractItemView_activated(intptr_t, QModelIndex*);
void miqt_exec_callback_QAbstractItemView_entered(intptr_t, QModelIndex*);
void miqt_exec_callback_QAbstractItemView_viewportEntered(intptr_t);
void miqt_exec_callback_QAbstractItemView_iconSizeChanged(intptr_t, QSize*);
void miqt_exec_callback_QAbstractItemView_setModel(QAbstractItemView*, intptr_t, QAbstractItemModel*);
void miqt_exec_callback_QAbstractItemView_setSelectionModel(QAbstractItemView*, intptr_t, QItemSelectionModel*);
void miqt_exec_callback_QAbstractItemView_keyboardSearch(QAbstractItemView*, intptr_t, struct miqt_string);
QRect* miqt_exec_callback_QAbstractItemView_visualRect(const QAbstractItemView*, intptr_t, QModelIndex*);
void miqt_exec_callback_QAbstractItemView_scrollTo(QAbstractItemView*, intptr_t, QModelIndex*, int);
QModelIndex* miqt_exec_callback_QAbstractItemView_indexAt(const QAbstractItemView*, intptr_t, QPoint*);
int miqt_exec_callback_QAbstractItemView_sizeHintForRow(const QAbstractItemView*, intptr_t, int);
int miqt_exec_callback_QAbstractItemView_sizeHintForColumn(const QAbstractItemView*, intptr_t, int);
QVariant* miqt_exec_callback_QAbstractItemView_inputMethodQuery(const QAbstractItemView*, intptr_t, int);
void miqt_exec_callback_QAbstractItemView_reset(QAbstractItemView*, intptr_t);
void miqt_exec_callback_QAbstractItemView_setRootIndex(QAbstractItemView*, intptr_t, QModelIndex*);
void miqt_exec_callback_QAbstractItemView_doItemsLayout(QAbstractItemView*, intptr_t);
void miqt_exec_callback_QAbstractItemView_selectAll(QAbstractItemView*, intptr_t);
void miqt_exec_callback_QAbstractItemView_dataChanged(QAbstractItemView*, intptr_t, QModelIndex*, QModelIndex*, struct miqt_array /* of int */ );
void miqt_exec_callback_QAbstractItemView_rowsInserted(QAbstractItemView*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QAbstractItemView_rowsAboutToBeRemoved(QAbstractItemView*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QAbstractItemView_selectionChanged(QAbstractItemView*, intptr_t, QItemSelection*, QItemSelection*);
void miqt_exec_callback_QAbstractItemView_currentChanged(QAbstractItemView*, intptr_t, QModelIndex*, QModelIndex*);
void miqt_exec_callback_QAbstractItemView_updateEditorData(QAbstractItemView*, intptr_t);
void miqt_exec_callback_QAbstractItemView_updateEditorGeometries(QAbstractItemView*, intptr_t);
void miqt_exec_callback_QAbstractItemView_updateGeometries(QAbstractItemView*, intptr_t);
void miqt_exec_callback_QAbstractItemView_verticalScrollbarAction(QAbstractItemView*, intptr_t, int);
void miqt_exec_callback_QAbstractItemView_horizontalScrollbarAction(QAbstractItemView*, intptr_t, int);
void miqt_exec_callback_QAbstractItemView_verticalScrollbarValueChanged(QAbstractItemView*, intptr_t, int);
void miqt_exec_callback_QAbstractItemView_horizontalScrollbarValueChanged(QAbstractItemView*, intptr_t, int);
void miqt_exec_callback_QAbstractItemView_closeEditor(QAbstractItemView*, intptr_t, QWidget*, int);
void miqt_exec_callback_QAbstractItemView_commitData(QAbstractItemView*, intptr_t, QWidget*);
void miqt_exec_callback_QAbstractItemView_editorDestroyed(QAbstractItemView*, intptr_t, QObject*);
QModelIndex* miqt_exec_callback_QAbstractItemView_moveCursor(QAbstractItemView*, intptr_t, int, int);
int miqt_exec_callback_QAbstractItemView_horizontalOffset(const QAbstractItemView*, intptr_t);
int miqt_exec_callback_QAbstractItemView_verticalOffset(const QAbstractItemView*, intptr_t);
bool miqt_exec_callback_QAbstractItemView_isIndexHidden(const QAbstractItemView*, intptr_t, QModelIndex*);
void miqt_exec_callback_QAbstractItemView_setSelection(QAbstractItemView*, intptr_t, QRect*, int);
QRegion* miqt_exec_callback_QAbstractItemView_visualRegionForSelection(const QAbstractItemView*, intptr_t, QItemSelection*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QAbstractItemView_selectedIndexes(const QAbstractItemView*, intptr_t);
bool miqt_exec_callback_QAbstractItemView_edit2(QAbstractItemView*, intptr_t, QModelIndex*, int, QEvent*);
int miqt_exec_callback_QAbstractItemView_selectionCommand(const QAbstractItemView*, intptr_t, QModelIndex*, QEvent*);
void miqt_exec_callback_QAbstractItemView_startDrag(QAbstractItemView*, intptr_t, int);
QStyleOptionViewItem* miqt_exec_callback_QAbstractItemView_viewOptions(const QAbstractItemView*, intptr_t);
bool miqt_exec_callback_QAbstractItemView_focusNextPrevChild(QAbstractItemView*, intptr_t, bool);
bool miqt_exec_callback_QAbstractItemView_event(QAbstractItemView*, intptr_t, QEvent*);
bool miqt_exec_callback_QAbstractItemView_viewportEvent(QAbstractItemView*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractItemView_mousePressEvent(QAbstractItemView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractItemView_mouseMoveEvent(QAbstractItemView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractItemView_mouseReleaseEvent(QAbstractItemView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractItemView_mouseDoubleClickEvent(QAbstractItemView*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QAbstractItemView_dragEnterEvent(QAbstractItemView*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QAbstractItemView_dragMoveEvent(QAbstractItemView*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QAbstractItemView_dragLeaveEvent(QAbstractItemView*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QAbstractItemView_dropEvent(QAbstractItemView*, intptr_t, QDropEvent*);
void miqt_exec_callback_QAbstractItemView_focusInEvent(QAbstractItemView*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QAbstractItemView_focusOutEvent(QAbstractItemView*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QAbstractItemView_keyPressEvent(QAbstractItemView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QAbstractItemView_resizeEvent(QAbstractItemView*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QAbstractItemView_timerEvent(QAbstractItemView*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAbstractItemView_inputMethodEvent(QAbstractItemView*, intptr_t, QInputMethodEvent*);
bool miqt_exec_callback_QAbstractItemView_eventFilter(QAbstractItemView*, intptr_t, QObject*, QEvent*);
QSize* miqt_exec_callback_QAbstractItemView_viewportSizeHint(const QAbstractItemView*, intptr_t);
QSize* miqt_exec_callback_QAbstractItemView_minimumSizeHint(const QAbstractItemView*, intptr_t);
QSize* miqt_exec_callback_QAbstractItemView_sizeHint(const QAbstractItemView*, intptr_t);
void miqt_exec_callback_QAbstractItemView_setupViewport(QAbstractItemView*, intptr_t, QWidget*);
void miqt_exec_callback_QAbstractItemView_paintEvent(QAbstractItemView*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QAbstractItemView_wheelEvent(QAbstractItemView*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QAbstractItemView_contextMenuEvent(QAbstractItemView*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QAbstractItemView_scrollContentsBy(QAbstractItemView*, intptr_t, int, int);
void miqt_exec_callback_QAbstractItemView_changeEvent(QAbstractItemView*, intptr_t, QEvent*);
int miqt_exec_callback_QAbstractItemView_devType(const QAbstractItemView*, intptr_t);
void miqt_exec_callback_QAbstractItemView_setVisible(QAbstractItemView*, intptr_t, bool);
int miqt_exec_callback_QAbstractItemView_heightForWidth(const QAbstractItemView*, intptr_t, int);
bool miqt_exec_callback_QAbstractItemView_hasHeightForWidth(const QAbstractItemView*, intptr_t);
QPaintEngine* miqt_exec_callback_QAbstractItemView_paintEngine(const QAbstractItemView*, intptr_t);
void miqt_exec_callback_QAbstractItemView_keyReleaseEvent(QAbstractItemView*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QAbstractItemView_enterEvent(QAbstractItemView*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractItemView_leaveEvent(QAbstractItemView*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractItemView_moveEvent(QAbstractItemView*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QAbstractItemView_closeEvent(QAbstractItemView*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QAbstractItemView_tabletEvent(QAbstractItemView*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QAbstractItemView_actionEvent(QAbstractItemView*, intptr_t, QActionEvent*);
void miqt_exec_callback_QAbstractItemView_showEvent(QAbstractItemView*, intptr_t, QShowEvent*);
void miqt_exec_callback_QAbstractItemView_hideEvent(QAbstractItemView*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QAbstractItemView_nativeEvent(QAbstractItemView*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QAbstractItemView_metric(const QAbstractItemView*, intptr_t, int);
void miqt_exec_callback_QAbstractItemView_initPainter(const QAbstractItemView*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QAbstractItemView_redirected(const QAbstractItemView*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QAbstractItemView_sharedPainter(const QAbstractItemView*, intptr_t);
void miqt_exec_callback_QAbstractItemView_childEvent(QAbstractItemView*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAbstractItemView_customEvent(QAbstractItemView*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractItemView_connectNotify(QAbstractItemView*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAbstractItemView_disconnectNotify(QAbstractItemView*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAbstractItemView final : public QAbstractItemView {
public:

	MiqtVirtualQAbstractItemView(QWidget* parent): QAbstractItemView(parent) {}
	MiqtVirtualQAbstractItemView(): QAbstractItemView() {}

	virtual ~MiqtVirtualQAbstractItemView() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__setModel;

	// Subclass to allow providing a Go implementation
	virtual void setModel(QAbstractItemModel* model) override {
		if (!handle__setModel) {
			QAbstractItemView::setModel(model);
			return;
		}

		QAbstractItemModel* sigval1 = model;
		miqt_exec_callback_QAbstractItemView_setModel(this, handle__setModel.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_setModel(void* self, QAbstractItemModel* model);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__setSelectionModel;

	// Subclass to allow providing a Go implementation
	virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
		if (!handle__setSelectionModel) {
			QAbstractItemView::setSelectionModel(selectionModel);
			return;
		}

		QItemSelectionModel* sigval1 = selectionModel;
		miqt_exec_callback_QAbstractItemView_setSelectionModel(this, handle__setSelectionModel.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_setSelectionModel(void* self, QItemSelectionModel* selectionModel);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__keyboardSearch;

	// Subclass to allow providing a Go implementation
	virtual void keyboardSearch(const QString& search) override {
		if (!handle__keyboardSearch) {
			QAbstractItemView::keyboardSearch(search);
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
		miqt_exec_callback_QAbstractItemView_keyboardSearch(this, handle__keyboardSearch.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_keyboardSearch(void* self, struct miqt_string search);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__visualRect;
	bool owns_return__visualRect = false;

	// Subclass to allow providing a Go implementation
	virtual QRect visualRect(const QModelIndex& index) const override {
		if (!handle__visualRect) {
			return QRect(); // Pure virtual, there is no base we can call
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QRect* callback_return_value = miqt_exec_callback_QAbstractItemView_visualRect(this, handle__visualRect.value(), sigval1);
		std::unique_ptr<QRect> callback_return_value_owner;
		if (owns_return__visualRect) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__scrollTo;

	// Subclass to allow providing a Go implementation
	virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
		if (!handle__scrollTo) {
			return; // Pure virtual, there is no base we can call
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::ScrollHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);
		miqt_exec_callback_QAbstractItemView_scrollTo(this, handle__scrollTo.value(), sigval1, sigval2);

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__indexAt;
	bool owns_return__indexAt = false;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex indexAt(const QPoint& point) const override {
		if (!handle__indexAt) {
			return QModelIndex(); // Pure virtual, there is no base we can call
		}

		const QPoint& point_ret = point;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&point_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractItemView_indexAt(this, handle__indexAt.value(), sigval1);
		std::unique_ptr<QModelIndex> callback_return_value_owner;
		if (owns_return__indexAt) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__sizeHintForRow;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForRow(int row) const override {
		if (!handle__sizeHintForRow) {
			return QAbstractItemView::sizeHintForRow(row);
		}

		int sigval1 = row;
		int callback_return_value = miqt_exec_callback_QAbstractItemView_sizeHintForRow(this, handle__sizeHintForRow.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QAbstractItemView_virtualbase_sizeHintForRow(const void* self, int row);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__sizeHintForColumn;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForColumn(int column) const override {
		if (!handle__sizeHintForColumn) {
			return QAbstractItemView::sizeHintForColumn(column);
		}

		int sigval1 = column;
		int callback_return_value = miqt_exec_callback_QAbstractItemView_sizeHintForColumn(this, handle__sizeHintForColumn.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QAbstractItemView_virtualbase_sizeHintForColumn(const void* self, int column);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__inputMethodQuery;
	bool owns_return__inputMethodQuery = false;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (!handle__inputMethodQuery) {
			return QAbstractItemView::inputMethodQuery(query);
		}

		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);
		QVariant* callback_return_value = miqt_exec_callback_QAbstractItemView_inputMethodQuery(this, handle__inputMethodQuery.value(), sigval1);
		std::unique_ptr<QVariant> callback_return_value_owner;
		if (owns_return__inputMethodQuery) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QVariant* QAbstractItemView_virtualbase_inputMethodQuery(const void* self, int query);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__reset;

	// Subclass to allow providing a Go implementation
	virtual void reset() override {
		if (!handle__reset) {
			QAbstractItemView::reset();
			return;
		}

		miqt_exec_callback_QAbstractItemView_reset(this, handle__reset.value());

	}

	friend void QAbstractItemView_virtualbase_reset(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__setRootIndex;

	// Subclass to allow providing a Go implementation
	virtual void setRootIndex(const QModelIndex& index) override {
		if (!handle__setRootIndex) {
			QAbstractItemView::setRootIndex(index);
			return;
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		miqt_exec_callback_QAbstractItemView_setRootIndex(this, handle__setRootIndex.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_setRootIndex(void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__doItemsLayout;

	// Subclass to allow providing a Go implementation
	virtual void doItemsLayout() override {
		if (!handle__doItemsLayout) {
			QAbstractItemView::doItemsLayout();
			return;
		}

		miqt_exec_callback_QAbstractItemView_doItemsLayout(this, handle__doItemsLayout.value());

	}

	friend void QAbstractItemView_virtualbase_doItemsLayout(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__selectAll;

	// Subclass to allow providing a Go implementation
	virtual void selectAll() override {
		if (!handle__selectAll) {
			QAbstractItemView::selectAll();
			return;
		}

		miqt_exec_callback_QAbstractItemView_selectAll(this, handle__selectAll.value());

	}

	friend void QAbstractItemView_virtualbase_selectAll(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__dataChanged;

	// Subclass to allow providing a Go implementation
	virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QVector<int>& roles) override {
		if (!handle__dataChanged) {
			QAbstractItemView::dataChanged(topLeft, bottomRight, roles);
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
		miqt_exec_callback_QAbstractItemView_dataChanged(this, handle__dataChanged.value(), sigval1, sigval2, sigval3);

	}

	friend void QAbstractItemView_virtualbase_dataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__rowsInserted;

	// Subclass to allow providing a Go implementation
	virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
		if (!handle__rowsInserted) {
			QAbstractItemView::rowsInserted(parent, start, end);
			return;
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;
		miqt_exec_callback_QAbstractItemView_rowsInserted(this, handle__rowsInserted.value(), sigval1, sigval2, sigval3);

	}

	friend void QAbstractItemView_virtualbase_rowsInserted(void* self, QModelIndex* parent, int start, int end);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__rowsAboutToBeRemoved;

	// Subclass to allow providing a Go implementation
	virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
		if (!handle__rowsAboutToBeRemoved) {
			QAbstractItemView::rowsAboutToBeRemoved(parent, start, end);
			return;
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;
		miqt_exec_callback_QAbstractItemView_rowsAboutToBeRemoved(this, handle__rowsAboutToBeRemoved.value(), sigval1, sigval2, sigval3);

	}

	friend void QAbstractItemView_virtualbase_rowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__selectionChanged;

	// Subclass to allow providing a Go implementation
	virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
		if (!handle__selectionChanged) {
			QAbstractItemView::selectionChanged(selected, deselected);
			return;
		}

		const QItemSelection& selected_ret = selected;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selected_ret);
		const QItemSelection& deselected_ret = deselected;
		// Cast returned reference into pointer
		QItemSelection* sigval2 = const_cast<QItemSelection*>(&deselected_ret);
		miqt_exec_callback_QAbstractItemView_selectionChanged(this, handle__selectionChanged.value(), sigval1, sigval2);

	}

	friend void QAbstractItemView_virtualbase_selectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__currentChanged;

	// Subclass to allow providing a Go implementation
	virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
		if (!handle__currentChanged) {
			QAbstractItemView::currentChanged(current, previous);
			return;
		}

		const QModelIndex& current_ret = current;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&current_ret);
		const QModelIndex& previous_ret = previous;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&previous_ret);
		miqt_exec_callback_QAbstractItemView_currentChanged(this, handle__currentChanged.value(), sigval1, sigval2);

	}

	friend void QAbstractItemView_virtualbase_currentChanged(void* self, QModelIndex* current, QModelIndex* previous);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__updateEditorData;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorData() override {
		if (!handle__updateEditorData) {
			QAbstractItemView::updateEditorData();
			return;
		}

		miqt_exec_callback_QAbstractItemView_updateEditorData(this, handle__updateEditorData.value());

	}

	friend void QAbstractItemView_virtualbase_updateEditorData(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__updateEditorGeometries;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorGeometries() override {
		if (!handle__updateEditorGeometries) {
			QAbstractItemView::updateEditorGeometries();
			return;
		}

		miqt_exec_callback_QAbstractItemView_updateEditorGeometries(this, handle__updateEditorGeometries.value());

	}

	friend void QAbstractItemView_virtualbase_updateEditorGeometries(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__updateGeometries;

	// Subclass to allow providing a Go implementation
	virtual void updateGeometries() override {
		if (!handle__updateGeometries) {
			QAbstractItemView::updateGeometries();
			return;
		}

		miqt_exec_callback_QAbstractItemView_updateGeometries(this, handle__updateGeometries.value());

	}

	friend void QAbstractItemView_virtualbase_updateGeometries(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__verticalScrollbarAction;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarAction(int action) override {
		if (!handle__verticalScrollbarAction) {
			QAbstractItemView::verticalScrollbarAction(action);
			return;
		}

		int sigval1 = action;
		miqt_exec_callback_QAbstractItemView_verticalScrollbarAction(this, handle__verticalScrollbarAction.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_verticalScrollbarAction(void* self, int action);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__horizontalScrollbarAction;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarAction(int action) override {
		if (!handle__horizontalScrollbarAction) {
			QAbstractItemView::horizontalScrollbarAction(action);
			return;
		}

		int sigval1 = action;
		miqt_exec_callback_QAbstractItemView_horizontalScrollbarAction(this, handle__horizontalScrollbarAction.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_horizontalScrollbarAction(void* self, int action);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__verticalScrollbarValueChanged;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarValueChanged(int value) override {
		if (!handle__verticalScrollbarValueChanged) {
			QAbstractItemView::verticalScrollbarValueChanged(value);
			return;
		}

		int sigval1 = value;
		miqt_exec_callback_QAbstractItemView_verticalScrollbarValueChanged(this, handle__verticalScrollbarValueChanged.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_verticalScrollbarValueChanged(void* self, int value);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__horizontalScrollbarValueChanged;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarValueChanged(int value) override {
		if (!handle__horizontalScrollbarValueChanged) {
			QAbstractItemView::horizontalScrollbarValueChanged(value);
			return;
		}

		int sigval1 = value;
		miqt_exec_callback_QAbstractItemView_horizontalScrollbarValueChanged(this, handle__horizontalScrollbarValueChanged.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_horizontalScrollbarValueChanged(void* self, int value);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__closeEditor;

	// Subclass to allow providing a Go implementation
	virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
		if (!handle__closeEditor) {
			QAbstractItemView::closeEditor(editor, hint);
			return;
		}

		QWidget* sigval1 = editor;
		QAbstractItemDelegate::EndEditHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);
		miqt_exec_callback_QAbstractItemView_closeEditor(this, handle__closeEditor.value(), sigval1, sigval2);

	}

	friend void QAbstractItemView_virtualbase_closeEditor(void* self, QWidget* editor, int hint);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__commitData;

	// Subclass to allow providing a Go implementation
	virtual void commitData(QWidget* editor) override {
		if (!handle__commitData) {
			QAbstractItemView::commitData(editor);
			return;
		}

		QWidget* sigval1 = editor;
		miqt_exec_callback_QAbstractItemView_commitData(this, handle__commitData.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_commitData(void* self, QWidget* editor);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__editorDestroyed;

	// Subclass to allow providing a Go implementation
	virtual void editorDestroyed(QObject* editor) override {
		if (!handle__editorDestroyed) {
			QAbstractItemView::editorDestroyed(editor);
			return;
		}

		QObject* sigval1 = editor;
		miqt_exec_callback_QAbstractItemView_editorDestroyed(this, handle__editorDestroyed.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_editorDestroyed(void* self, QObject* editor);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__moveCursor;
	bool owns_return__moveCursor = false;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
		if (!handle__moveCursor) {
			return QModelIndex(); // Pure virtual, there is no base we can call
		}

		QAbstractItemView::CursorAction cursorAction_ret = cursorAction;
		int sigval1 = static_cast<int>(cursorAction_ret);
		Qt::KeyboardModifiers modifiers_ret = modifiers;
		int sigval2 = static_cast<int>(modifiers_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractItemView_moveCursor(this, handle__moveCursor.value(), sigval1, sigval2);
		std::unique_ptr<QModelIndex> callback_return_value_owner;
		if (owns_return__moveCursor) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__horizontalOffset;

	// Subclass to allow providing a Go implementation
	virtual int horizontalOffset() const override {
		if (!handle__horizontalOffset) {
			return 0; // Pure virtual, there is no base we can call
		}

		int callback_return_value = miqt_exec_callback_QAbstractItemView_horizontalOffset(this, handle__horizontalOffset.value());
		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__verticalOffset;

	// Subclass to allow providing a Go implementation
	virtual int verticalOffset() const override {
		if (!handle__verticalOffset) {
			return 0; // Pure virtual, there is no base we can call
		}

		int callback_return_value = miqt_exec_callback_QAbstractItemView_verticalOffset(this, handle__verticalOffset.value());
		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__isIndexHidden;

	// Subclass to allow providing a Go implementation
	virtual bool isIndexHidden(const QModelIndex& index) const override {
		if (!handle__isIndexHidden) {
			return false; // Pure virtual, there is no base we can call
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractItemView_isIndexHidden(this, handle__isIndexHidden.value(), sigval1);
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__setSelection;

	// Subclass to allow providing a Go implementation
	virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
		if (!handle__setSelection) {
			return; // Pure virtual, there is no base we can call
		}

		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);
		QItemSelectionModel::SelectionFlags command_ret = command;
		int sigval2 = static_cast<int>(command_ret);
		miqt_exec_callback_QAbstractItemView_setSelection(this, handle__setSelection.value(), sigval1, sigval2);

	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__visualRegionForSelection;
	bool owns_return__visualRegionForSelection = false;

	// Subclass to allow providing a Go implementation
	virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
		if (!handle__visualRegionForSelection) {
			return QRegion(); // Pure virtual, there is no base we can call
		}

		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);
		QRegion* callback_return_value = miqt_exec_callback_QAbstractItemView_visualRegionForSelection(this, handle__visualRegionForSelection.value(), sigval1);
		std::unique_ptr<QRegion> callback_return_value_owner;
		if (owns_return__visualRegionForSelection) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__selectedIndexes;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList selectedIndexes() const override {
		if (!handle__selectedIndexes) {
			return QAbstractItemView::selectedIndexes();
		}

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QAbstractItemView_selectedIndexes(this, handle__selectedIndexes.value());
		QModelIndexList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QModelIndex** callback_return_value_arr = static_cast<QModelIndex**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(*(callback_return_value_arr[i]));
		}
		free(callback_return_value.data);
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of QModelIndex* */  QAbstractItemView_virtualbase_selectedIndexes(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__edit2;

	// Subclass to allow providing a Go implementation
	virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
		if (!handle__edit2) {
			return QAbstractItemView::edit(index, trigger, event);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::EditTrigger trigger_ret = trigger;
		int sigval2 = static_cast<int>(trigger_ret);
		QEvent* sigval3 = event;
		bool callback_return_value = miqt_exec_callback_QAbstractItemView_edit2(this, handle__edit2.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QAbstractItemView_virtualbase_edit2(void* self, QModelIndex* index, int trigger, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__selectionCommand;

	// Subclass to allow providing a Go implementation
	virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
		if (!handle__selectionCommand) {
			return QAbstractItemView::selectionCommand(index, event);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QEvent* sigval2 = (QEvent*) event;
		int callback_return_value = miqt_exec_callback_QAbstractItemView_selectionCommand(this, handle__selectionCommand.value(), sigval1, sigval2);
		return static_cast<QItemSelectionModel::SelectionFlags>(callback_return_value);
	}

	friend int QAbstractItemView_virtualbase_selectionCommand(const void* self, QModelIndex* index, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__startDrag;

	// Subclass to allow providing a Go implementation
	virtual void startDrag(Qt::DropActions supportedActions) override {
		if (!handle__startDrag) {
			QAbstractItemView::startDrag(supportedActions);
			return;
		}

		Qt::DropActions supportedActions_ret = supportedActions;
		int sigval1 = static_cast<int>(supportedActions_ret);
		miqt_exec_callback_QAbstractItemView_startDrag(this, handle__startDrag.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_startDrag(void* self, int supportedActions);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__viewOptions;
	bool owns_return__viewOptions = false;

	// Subclass to allow providing a Go implementation
	virtual QStyleOptionViewItem viewOptions() const override {
		if (!handle__viewOptions) {
			return QAbstractItemView::viewOptions();
		}

		QStyleOptionViewItem* callback_return_value = miqt_exec_callback_QAbstractItemView_viewOptions(this, handle__viewOptions.value());
		std::unique_ptr<QStyleOptionViewItem> callback_return_value_owner;
		if (owns_return__viewOptions) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QStyleOptionViewItem* QAbstractItemView_virtualbase_viewOptions(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__focusNextPrevChild;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (!handle__focusNextPrevChild) {
			return QAbstractItemView::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QAbstractItemView_focusNextPrevChild(this, handle__focusNextPrevChild.value(), sigval1);
		return callback_return_value;
	}

	friend bool QAbstractItemView_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QAbstractItemView::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QAbstractItemView_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QAbstractItemView_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__viewportEvent;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* event) override {
		if (!handle__viewportEvent) {
			return QAbstractItemView::viewportEvent(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QAbstractItemView_viewportEvent(this, handle__viewportEvent.value(), sigval1);
		return callback_return_value;
	}

	friend bool QAbstractItemView_virtualbase_viewportEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__mousePressEvent;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (!handle__mousePressEvent) {
			QAbstractItemView::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QAbstractItemView_mousePressEvent(this, handle__mousePressEvent.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__mouseMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (!handle__mouseMoveEvent) {
			QAbstractItemView::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QAbstractItemView_mouseMoveEvent(this, handle__mouseMoveEvent.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__mouseReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (!handle__mouseReleaseEvent) {
			QAbstractItemView::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QAbstractItemView_mouseReleaseEvent(this, handle__mouseReleaseEvent.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__mouseDoubleClickEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (!handle__mouseDoubleClickEvent) {
			QAbstractItemView::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QAbstractItemView_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__dragEnterEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (!handle__dragEnterEvent) {
			QAbstractItemView::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QAbstractItemView_dragEnterEvent(this, handle__dragEnterEvent.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__dragMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (!handle__dragMoveEvent) {
			QAbstractItemView::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QAbstractItemView_dragMoveEvent(this, handle__dragMoveEvent.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__dragLeaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (!handle__dragLeaveEvent) {
			QAbstractItemView::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QAbstractItemView_dragLeaveEvent(this, handle__dragLeaveEvent.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__dropEvent;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (!handle__dropEvent) {
			QAbstractItemView::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QAbstractItemView_dropEvent(this, handle__dropEvent.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__focusInEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (!handle__focusInEvent) {
			QAbstractItemView::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QAbstractItemView_focusInEvent(this, handle__focusInEvent.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__focusOutEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (!handle__focusOutEvent) {
			QAbstractItemView::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QAbstractItemView_focusOutEvent(this, handle__focusOutEvent.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__keyPressEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (!handle__keyPressEvent) {
			QAbstractItemView::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QAbstractItemView_keyPressEvent(this, handle__keyPressEvent.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__resizeEvent;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (!handle__resizeEvent) {
			QAbstractItemView::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QAbstractItemView_resizeEvent(this, handle__resizeEvent.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QAbstractItemView::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QAbstractItemView_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__inputMethodEvent;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (!handle__inputMethodEvent) {
			QAbstractItemView::inputMethodEvent(event);
			return;
		}

		QInputMethodEvent* sigval1 = event;
		miqt_exec_callback_QAbstractItemView_inputMethodEvent(this, handle__inputMethodEvent.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (!handle__eventFilter) {
			return QAbstractItemView::eventFilter(object, event);
		}

		QObject* sigval1 = object;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QAbstractItemView_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QAbstractItemView_virtualbase_eventFilter(void* self, QObject* object, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__viewportSizeHint;
	bool owns_return__viewportSizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (!handle__viewportSizeHint) {
			return QAbstractItemView::viewportSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QAbstractItemView_viewportSizeHint(this, handle__viewportSizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__viewportSizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QAbstractItemView_virtualbase_viewportSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__minimumSizeHint;
	bool owns_return__minimumSizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (!handle__minimumSizeHint) {
			return QAbstractItemView::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QAbstractItemView_minimumSizeHint(this, handle__minimumSizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__minimumSizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QAbstractItemView_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__sizeHint;
	bool owns_return__sizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (!handle__sizeHint) {
			return QAbstractItemView::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QAbstractItemView_sizeHint(this, handle__sizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__sizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QAbstractItemView_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__setupViewport;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (!handle__setupViewport) {
			QAbstractItemView::setupViewport(viewport);
			return;
		}

		QWidget* sigval1 = viewport;
		miqt_exec_callback_QAbstractItemView_setupViewport(this, handle__setupViewport.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_setupViewport(void* self, QWidget* viewport);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__paintEvent;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* param1) override {
		if (!handle__paintEvent) {
			QAbstractItemView::paintEvent(param1);
			return;
		}

		QPaintEvent* sigval1 = param1;
		miqt_exec_callback_QAbstractItemView_paintEvent(this, handle__paintEvent.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_paintEvent(void* self, QPaintEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__wheelEvent;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (!handle__wheelEvent) {
			QAbstractItemView::wheelEvent(param1);
			return;
		}

		QWheelEvent* sigval1 = param1;
		miqt_exec_callback_QAbstractItemView_wheelEvent(this, handle__wheelEvent.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_wheelEvent(void* self, QWheelEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__contextMenuEvent;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (!handle__contextMenuEvent) {
			QAbstractItemView::contextMenuEvent(param1);
			return;
		}

		QContextMenuEvent* sigval1 = param1;
		miqt_exec_callback_QAbstractItemView_contextMenuEvent(this, handle__contextMenuEvent.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__scrollContentsBy;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (!handle__scrollContentsBy) {
			QAbstractItemView::scrollContentsBy(dx, dy);
			return;
		}

		int sigval1 = dx;
		int sigval2 = dy;
		miqt_exec_callback_QAbstractItemView_scrollContentsBy(this, handle__scrollContentsBy.value(), sigval1, sigval2);

	}

	friend void QAbstractItemView_virtualbase_scrollContentsBy(void* self, int dx, int dy);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__changeEvent;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (!handle__changeEvent) {
			QAbstractItemView::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QAbstractItemView_changeEvent(this, handle__changeEvent.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__devType;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (!handle__devType) {
			return QAbstractItemView::devType();
		}

		int callback_return_value = miqt_exec_callback_QAbstractItemView_devType(this, handle__devType.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QAbstractItemView_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__setVisible;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (!handle__setVisible) {
			QAbstractItemView::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QAbstractItemView_setVisible(this, handle__setVisible.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__heightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (!handle__heightForWidth) {
			return QAbstractItemView::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QAbstractItemView_heightForWidth(this, handle__heightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QAbstractItemView_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__hasHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (!handle__hasHeightForWidth) {
			return QAbstractItemView::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QAbstractItemView_hasHeightForWidth(this, handle__hasHeightForWidth.value());
		return callback_return_value;
	}

	friend bool QAbstractItemView_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__paintEngine;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (!handle__paintEngine) {
			return QAbstractItemView::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QAbstractItemView_paintEngine(this, handle__paintEngine.value());
		return callback_return_value;
	}

	friend QPaintEngine* QAbstractItemView_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__keyReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (!handle__keyReleaseEvent) {
			QAbstractItemView::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QAbstractItemView_keyReleaseEvent(this, handle__keyReleaseEvent.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__enterEvent;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (!handle__enterEvent) {
			QAbstractItemView::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QAbstractItemView_enterEvent(this, handle__enterEvent.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__leaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (!handle__leaveEvent) {
			QAbstractItemView::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QAbstractItemView_leaveEvent(this, handle__leaveEvent.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__moveEvent;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (!handle__moveEvent) {
			QAbstractItemView::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QAbstractItemView_moveEvent(this, handle__moveEvent.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__closeEvent;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (!handle__closeEvent) {
			QAbstractItemView::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QAbstractItemView_closeEvent(this, handle__closeEvent.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__tabletEvent;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (!handle__tabletEvent) {
			QAbstractItemView::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QAbstractItemView_tabletEvent(this, handle__tabletEvent.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__actionEvent;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (!handle__actionEvent) {
			QAbstractItemView::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QAbstractItemView_actionEvent(this, handle__actionEvent.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__showEvent;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (!handle__showEvent) {
			QAbstractItemView::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QAbstractItemView_showEvent(this, handle__showEvent.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__hideEvent;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (!handle__hideEvent) {
			QAbstractItemView::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QAbstractItemView_hideEvent(this, handle__hideEvent.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__nativeEvent;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (!handle__nativeEvent) {
			return QAbstractItemView::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QAbstractItemView_nativeEvent(this, handle__nativeEvent.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QAbstractItemView_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__metric;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (!handle__metric) {
			return QAbstractItemView::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QAbstractItemView_metric(this, handle__metric.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QAbstractItemView_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__initPainter;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (!handle__initPainter) {
			QAbstractItemView::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QAbstractItemView_initPainter(this, handle__initPainter.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__redirected;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (!handle__redirected) {
			return QAbstractItemView::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QAbstractItemView_redirected(this, handle__redirected.value(), sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QAbstractItemView_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__sharedPainter;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (!handle__sharedPainter) {
			return QAbstractItemView::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QAbstractItemView_sharedPainter(this, handle__sharedPainter.value());
		return callback_return_value;
	}

	friend QPainter* QAbstractItemView_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QAbstractItemView::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QAbstractItemView_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QAbstractItemView::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QAbstractItemView_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QAbstractItemView::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QAbstractItemView_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QAbstractItemView::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QAbstractItemView_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QAbstractItemView_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QAbstractItemView_protectedbase_setHorizontalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps);
	friend int QAbstractItemView_protectedbase_horizontalStepsPerItem(bool* _dynamic_cast_ok, const void* self);
	friend void QAbstractItemView_protectedbase_setVerticalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps);
	friend int QAbstractItemView_protectedbase_verticalStepsPerItem(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractItemView_protectedbase_state(bool* _dynamic_cast_ok, const void* self);
	friend void QAbstractItemView_protectedbase_setState(bool* _dynamic_cast_ok, void* self, int state);
	friend void QAbstractItemView_protectedbase_scheduleDelayedItemsLayout(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractItemView_protectedbase_executeDelayedItemsLayout(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractItemView_protectedbase_setDirtyRegion(bool* _dynamic_cast_ok, void* self, QRegion* region);
	friend void QAbstractItemView_protectedbase_scrollDirtyRegion(bool* _dynamic_cast_ok, void* self, int dx, int dy);
	friend QPoint* QAbstractItemView_protectedbase_dirtyRegionOffset(bool* _dynamic_cast_ok, const void* self);
	friend void QAbstractItemView_protectedbase_startAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractItemView_protectedbase_stopAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractItemView_protectedbase_doAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend int QAbstractItemView_protectedbase_dropIndicatorPosition(bool* _dynamic_cast_ok, const void* self);
	friend void QAbstractItemView_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom);
	friend QMargins* QAbstractItemView_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self);
	friend void QAbstractItemView_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
	friend void QAbstractItemView_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option);
	friend void QAbstractItemView_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractItemView_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractItemView_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QAbstractItemView_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QAbstractItemView_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QAbstractItemView_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractItemView_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractItemView_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAbstractItemView_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QAbstractItemView* QAbstractItemView_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQAbstractItemView(parent);
}

QAbstractItemView* QAbstractItemView_new2() {
	return new (std::nothrow) MiqtVirtualQAbstractItemView();
}

void QAbstractItemView_virtbase(QAbstractItemView* src, QAbstractScrollArea** outptr_QAbstractScrollArea) {
	*outptr_QAbstractScrollArea = static_cast<QAbstractScrollArea*>(src);
}

QMetaObject* QAbstractItemView_metaObject(const QAbstractItemView* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractItemView_metacast(QAbstractItemView* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractItemView_tr(const char* s) {
	QString _ret = QAbstractItemView::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractItemView_trUtf8(const char* s) {
	QString _ret = QAbstractItemView::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractItemView_setModel(QAbstractItemView* self, QAbstractItemModel* model) {
	self->setModel(model);
}

QAbstractItemModel* QAbstractItemView_model(const QAbstractItemView* self) {
	return self->model();
}

void QAbstractItemView_setSelectionModel(QAbstractItemView* self, QItemSelectionModel* selectionModel) {
	self->setSelectionModel(selectionModel);
}

QItemSelectionModel* QAbstractItemView_selectionModel(const QAbstractItemView* self) {
	return self->selectionModel();
}

void QAbstractItemView_setItemDelegate(QAbstractItemView* self, QAbstractItemDelegate* delegate) {
	self->setItemDelegate(delegate);
}

QAbstractItemDelegate* QAbstractItemView_itemDelegate(const QAbstractItemView* self) {
	return self->itemDelegate();
}

void QAbstractItemView_setSelectionMode(QAbstractItemView* self, int mode) {
	self->setSelectionMode(static_cast<QAbstractItemView::SelectionMode>(mode));
}

int QAbstractItemView_selectionMode(const QAbstractItemView* self) {
	QAbstractItemView::SelectionMode _ret = self->selectionMode();
	return static_cast<int>(_ret);
}

void QAbstractItemView_setSelectionBehavior(QAbstractItemView* self, int behavior) {
	self->setSelectionBehavior(static_cast<QAbstractItemView::SelectionBehavior>(behavior));
}

int QAbstractItemView_selectionBehavior(const QAbstractItemView* self) {
	QAbstractItemView::SelectionBehavior _ret = self->selectionBehavior();
	return static_cast<int>(_ret);
}

QModelIndex* QAbstractItemView_currentIndex(const QAbstractItemView* self) {
	return new QModelIndex(self->currentIndex());
}

QModelIndex* QAbstractItemView_rootIndex(const QAbstractItemView* self) {
	return new QModelIndex(self->rootIndex());
}

void QAbstractItemView_setEditTriggers(QAbstractItemView* self, int triggers) {
	self->setEditTriggers(static_cast<QAbstractItemView::EditTriggers>(triggers));
}

int QAbstractItemView_editTriggers(const QAbstractItemView* self) {
	QAbstractItemView::EditTriggers _ret = self->editTriggers();
	return static_cast<int>(_ret);
}

void QAbstractItemView_setVerticalScrollMode(QAbstractItemView* self, int mode) {
	self->setVerticalScrollMode(static_cast<QAbstractItemView::ScrollMode>(mode));
}

int QAbstractItemView_verticalScrollMode(const QAbstractItemView* self) {
	QAbstractItemView::ScrollMode _ret = self->verticalScrollMode();
	return static_cast<int>(_ret);
}

void QAbstractItemView_resetVerticalScrollMode(QAbstractItemView* self) {
	self->resetVerticalScrollMode();
}

void QAbstractItemView_setHorizontalScrollMode(QAbstractItemView* self, int mode) {
	self->setHorizontalScrollMode(static_cast<QAbstractItemView::ScrollMode>(mode));
}

int QAbstractItemView_horizontalScrollMode(const QAbstractItemView* self) {
	QAbstractItemView::ScrollMode _ret = self->horizontalScrollMode();
	return static_cast<int>(_ret);
}

void QAbstractItemView_resetHorizontalScrollMode(QAbstractItemView* self) {
	self->resetHorizontalScrollMode();
}

void QAbstractItemView_setAutoScroll(QAbstractItemView* self, bool enable) {
	self->setAutoScroll(enable);
}

bool QAbstractItemView_hasAutoScroll(const QAbstractItemView* self) {
	return self->hasAutoScroll();
}

void QAbstractItemView_setAutoScrollMargin(QAbstractItemView* self, int margin) {
	self->setAutoScrollMargin(static_cast<int>(margin));
}

int QAbstractItemView_autoScrollMargin(const QAbstractItemView* self) {
	return self->autoScrollMargin();
}

void QAbstractItemView_setTabKeyNavigation(QAbstractItemView* self, bool enable) {
	self->setTabKeyNavigation(enable);
}

bool QAbstractItemView_tabKeyNavigation(const QAbstractItemView* self) {
	return self->tabKeyNavigation();
}

void QAbstractItemView_setDropIndicatorShown(QAbstractItemView* self, bool enable) {
	self->setDropIndicatorShown(enable);
}

bool QAbstractItemView_showDropIndicator(const QAbstractItemView* self) {
	return self->showDropIndicator();
}

void QAbstractItemView_setDragEnabled(QAbstractItemView* self, bool enable) {
	self->setDragEnabled(enable);
}

bool QAbstractItemView_dragEnabled(const QAbstractItemView* self) {
	return self->dragEnabled();
}

void QAbstractItemView_setDragDropOverwriteMode(QAbstractItemView* self, bool overwrite) {
	self->setDragDropOverwriteMode(overwrite);
}

bool QAbstractItemView_dragDropOverwriteMode(const QAbstractItemView* self) {
	return self->dragDropOverwriteMode();
}

void QAbstractItemView_setDragDropMode(QAbstractItemView* self, int behavior) {
	self->setDragDropMode(static_cast<QAbstractItemView::DragDropMode>(behavior));
}

int QAbstractItemView_dragDropMode(const QAbstractItemView* self) {
	QAbstractItemView::DragDropMode _ret = self->dragDropMode();
	return static_cast<int>(_ret);
}

void QAbstractItemView_setDefaultDropAction(QAbstractItemView* self, int dropAction) {
	self->setDefaultDropAction(static_cast<Qt::DropAction>(dropAction));
}

int QAbstractItemView_defaultDropAction(const QAbstractItemView* self) {
	Qt::DropAction _ret = self->defaultDropAction();
	return static_cast<int>(_ret);
}

void QAbstractItemView_setAlternatingRowColors(QAbstractItemView* self, bool enable) {
	self->setAlternatingRowColors(enable);
}

bool QAbstractItemView_alternatingRowColors(const QAbstractItemView* self) {
	return self->alternatingRowColors();
}

void QAbstractItemView_setIconSize(QAbstractItemView* self, QSize* size) {
	self->setIconSize(*size);
}

QSize* QAbstractItemView_iconSize(const QAbstractItemView* self) {
	return new QSize(self->iconSize());
}

void QAbstractItemView_setTextElideMode(QAbstractItemView* self, int mode) {
	self->setTextElideMode(static_cast<Qt::TextElideMode>(mode));
}

int QAbstractItemView_textElideMode(const QAbstractItemView* self) {
	Qt::TextElideMode _ret = self->textElideMode();
	return static_cast<int>(_ret);
}

void QAbstractItemView_keyboardSearch(QAbstractItemView* self, struct miqt_string search) {
	QString search_QString = QString::fromUtf8(search.data, search.len);
	self->keyboardSearch(search_QString);
}

QRect* QAbstractItemView_visualRect(const QAbstractItemView* self, QModelIndex* index) {
	return new QRect(self->visualRect(*index));
}

void QAbstractItemView_scrollTo(QAbstractItemView* self, QModelIndex* index, int hint) {
	self->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

QModelIndex* QAbstractItemView_indexAt(const QAbstractItemView* self, QPoint* point) {
	return new QModelIndex(self->indexAt(*point));
}

QSize* QAbstractItemView_sizeHintForIndex(const QAbstractItemView* self, QModelIndex* index) {
	return new QSize(self->sizeHintForIndex(*index));
}

int QAbstractItemView_sizeHintForRow(const QAbstractItemView* self, int row) {
	return self->sizeHintForRow(static_cast<int>(row));
}

int QAbstractItemView_sizeHintForColumn(const QAbstractItemView* self, int column) {
	return self->sizeHintForColumn(static_cast<int>(column));
}

void QAbstractItemView_openPersistentEditor(QAbstractItemView* self, QModelIndex* index) {
	self->openPersistentEditor(*index);
}

void QAbstractItemView_closePersistentEditor(QAbstractItemView* self, QModelIndex* index) {
	self->closePersistentEditor(*index);
}

bool QAbstractItemView_isPersistentEditorOpen(const QAbstractItemView* self, QModelIndex* index) {
	return self->isPersistentEditorOpen(*index);
}

void QAbstractItemView_setIndexWidget(QAbstractItemView* self, QModelIndex* index, QWidget* widget) {
	self->setIndexWidget(*index, widget);
}

QWidget* QAbstractItemView_indexWidget(const QAbstractItemView* self, QModelIndex* index) {
	return self->indexWidget(*index);
}

void QAbstractItemView_setItemDelegateForRow(QAbstractItemView* self, int row, QAbstractItemDelegate* delegate) {
	self->setItemDelegateForRow(static_cast<int>(row), delegate);
}

QAbstractItemDelegate* QAbstractItemView_itemDelegateForRow(const QAbstractItemView* self, int row) {
	return self->itemDelegateForRow(static_cast<int>(row));
}

void QAbstractItemView_setItemDelegateForColumn(QAbstractItemView* self, int column, QAbstractItemDelegate* delegate) {
	self->setItemDelegateForColumn(static_cast<int>(column), delegate);
}

QAbstractItemDelegate* QAbstractItemView_itemDelegateForColumn(const QAbstractItemView* self, int column) {
	return self->itemDelegateForColumn(static_cast<int>(column));
}

QAbstractItemDelegate* QAbstractItemView_itemDelegateWithIndex(const QAbstractItemView* self, QModelIndex* index) {
	return self->itemDelegate(*index);
}

QVariant* QAbstractItemView_inputMethodQuery(const QAbstractItemView* self, int query) {
	return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

void QAbstractItemView_reset(QAbstractItemView* self) {
	self->reset();
}

void QAbstractItemView_setRootIndex(QAbstractItemView* self, QModelIndex* index) {
	self->setRootIndex(*index);
}

void QAbstractItemView_doItemsLayout(QAbstractItemView* self) {
	self->doItemsLayout();
}

void QAbstractItemView_selectAll(QAbstractItemView* self) {
	self->selectAll();
}

void QAbstractItemView_edit(QAbstractItemView* self, QModelIndex* index) {
	self->edit(*index);
}

void QAbstractItemView_clearSelection(QAbstractItemView* self) {
	self->clearSelection();
}

void QAbstractItemView_setCurrentIndex(QAbstractItemView* self, QModelIndex* index) {
	self->setCurrentIndex(*index);
}

void QAbstractItemView_scrollToTop(QAbstractItemView* self) {
	self->scrollToTop();
}

void QAbstractItemView_scrollToBottom(QAbstractItemView* self) {
	self->scrollToBottom();
}

void QAbstractItemView_update(QAbstractItemView* self, QModelIndex* index) {
	self->update(*index);
}

void QAbstractItemView_pressed(QAbstractItemView* self, QModelIndex* index) {
	self->pressed(*index);
}

void* QAbstractItemView_connect_pressed(QAbstractItemView* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView>>(slot);
	return new QMetaObject::Connection(QAbstractItemView::connect(self, static_cast<void (QAbstractItemView::*)(const QModelIndex&)>(&QAbstractItemView::pressed), self, [slot_handle](const QModelIndex& index) {
		intptr_t slot = slot_handle->value();
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		miqt_exec_callback_QAbstractItemView_pressed(slot, sigval1);
	}));
}

void QAbstractItemView_clicked(QAbstractItemView* self, QModelIndex* index) {
	self->clicked(*index);
}

void* QAbstractItemView_connect_clicked(QAbstractItemView* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView>>(slot);
	return new QMetaObject::Connection(QAbstractItemView::connect(self, static_cast<void (QAbstractItemView::*)(const QModelIndex&)>(&QAbstractItemView::clicked), self, [slot_handle](const QModelIndex& index) {
		intptr_t slot = slot_handle->value();
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		miqt_exec_callback_QAbstractItemView_clicked(slot, sigval1);
	}));
}

void QAbstractItemView_doubleClicked(QAbstractItemView* self, QModelIndex* index) {
	self->doubleClicked(*index);
}

void* QAbstractItemView_connect_doubleClicked(QAbstractItemView* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView>>(slot);
	return new QMetaObject::Connection(QAbstractItemView::connect(self, static_cast<void (QAbstractItemView::*)(const QModelIndex&)>(&QAbstractItemView::doubleClicked), self, [slot_handle](const QModelIndex& index) {
		intptr_t slot = slot_handle->value();
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		miqt_exec_callback_QAbstractItemView_doubleClicked(slot, sigval1);
	}));
}

void QAbstractItemView_activated(QAbstractItemView* self, QModelIndex* index) {
	self->activated(*index);
}

void* QAbstractItemView_connect_activated(QAbstractItemView* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView>>(slot);
	return new QMetaObject::Connection(QAbstractItemView::connect(self, static_cast<void (QAbstractItemView::*)(const QModelIndex&)>(&QAbstractItemView::activated), self, [slot_handle](const QModelIndex& index) {
		intptr_t slot = slot_handle->value();
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		miqt_exec_callback_QAbstractItemView_activated(slot, sigval1);
	}));
}

void QAbstractItemView_entered(QAbstractItemView* self, QModelIndex* index) {
	self->entered(*index);
}

void* QAbstractItemView_connect_entered(QAbstractItemView* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView>>(slot);
	return new QMetaObject::Connection(QAbstractItemView::connect(self, static_cast<void (QAbstractItemView::*)(const QModelIndex&)>(&QAbstractItemView::entered), self, [slot_handle](const QModelIndex& index) {
		intptr_t slot = slot_handle->value();
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		miqt_exec_callback_QAbstractItemView_entered(slot, sigval1);
	}));
}

void QAbstractItemView_viewportEntered(QAbstractItemView* self) {
	self->viewportEntered();
}

void* QAbstractItemView_connect_viewportEntered(QAbstractItemView* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView>>(slot);
	return new QMetaObject::Connection(QAbstractItemView::connect(self, static_cast<void (QAbstractItemView::*)()>(&QAbstractItemView::viewportEntered), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QAbstractItemView_viewportEntered(slot);
	}));
}

void QAbstractItemView_iconSizeChanged(QAbstractItemView* self, QSize* size) {
	self->iconSizeChanged(*size);
}

void* QAbstractItemView_connect_iconSizeChanged(QAbstractItemView* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView>>(slot);
	return new QMetaObject::Connection(QAbstractItemView::connect(self, static_cast<void (QAbstractItemView::*)(const QSize&)>(&QAbstractItemView::iconSizeChanged), self, [slot_handle](const QSize& size) {
		intptr_t slot = slot_handle->value();
		const QSize& size_ret = size;
		// Cast returned reference into pointer
		QSize* sigval1 = const_cast<QSize*>(&size_ret);
		miqt_exec_callback_QAbstractItemView_iconSizeChanged(slot, sigval1);
	}));
}

struct miqt_string QAbstractItemView_tr2(const char* s, const char* c) {
	QString _ret = QAbstractItemView::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractItemView_tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractItemView::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractItemView_trUtf82(const char* s, const char* c) {
	QString _ret = QAbstractItemView::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractItemView_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractItemView::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractItemView_override_virtual_setModel(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setModel = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_setModel(void* self, QAbstractItemModel* model) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::setModel(model);
}

bool QAbstractItemView_override_virtual_setSelectionModel(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setSelectionModel = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_setSelectionModel(void* self, QItemSelectionModel* selectionModel) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::setSelectionModel(selectionModel);
}

bool QAbstractItemView_override_virtual_keyboardSearch(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyboardSearch = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_keyboardSearch(void* self, struct miqt_string search) {
	QString search_QString = QString::fromUtf8(search.data, search.len);
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::keyboardSearch(search_QString);
}

bool QAbstractItemView_override_virtual_visualRect(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__visualRect = std::move(slot_handle);
	self_cast->owns_return__visualRect = false;
	return true;
}

bool QAbstractItemView_override_virtual_owned_visualRect(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__visualRect = std::move(slot_handle);
	self_cast->owns_return__visualRect = true;
	return true;
}

bool QAbstractItemView_override_virtual_scrollTo(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scrollTo = std::move(slot_handle);
	return true;
}

bool QAbstractItemView_override_virtual_indexAt(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__indexAt = std::move(slot_handle);
	self_cast->owns_return__indexAt = false;
	return true;
}

bool QAbstractItemView_override_virtual_owned_indexAt(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__indexAt = std::move(slot_handle);
	self_cast->owns_return__indexAt = true;
	return true;
}

bool QAbstractItemView_override_virtual_sizeHintForRow(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHintForRow = std::move(slot_handle);
	return true;
}

int QAbstractItemView_virtualbase_sizeHintForRow(const void* self, int row) {
	return static_cast<const MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::sizeHintForRow(static_cast<int>(row));
}

bool QAbstractItemView_override_virtual_sizeHintForColumn(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHintForColumn = std::move(slot_handle);
	return true;
}

int QAbstractItemView_virtualbase_sizeHintForColumn(const void* self, int column) {
	return static_cast<const MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::sizeHintForColumn(static_cast<int>(column));
}

bool QAbstractItemView_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	self_cast->owns_return__inputMethodQuery = false;
	return true;
}

bool QAbstractItemView_override_virtual_owned_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	self_cast->owns_return__inputMethodQuery = true;
	return true;
}

QVariant* QAbstractItemView_virtualbase_inputMethodQuery(const void* self, int query) {
	return new QVariant(static_cast<const MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

bool QAbstractItemView_override_virtual_reset(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__reset = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_reset(void* self) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::reset();
}

bool QAbstractItemView_override_virtual_setRootIndex(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setRootIndex = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_setRootIndex(void* self, QModelIndex* index) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::setRootIndex(*index);
}

bool QAbstractItemView_override_virtual_doItemsLayout(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__doItemsLayout = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_doItemsLayout(void* self) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::doItemsLayout();
}

bool QAbstractItemView_override_virtual_selectAll(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__selectAll = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_selectAll(void* self) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::selectAll();
}

bool QAbstractItemView_override_virtual_dataChanged(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dataChanged = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_dataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
	QVector<int> roles_QList;
	roles_QList.reserve(roles.len);
	int* roles_arr = static_cast<int*>(roles.data);
	for(size_t i = 0; i < roles.len; ++i) {
		roles_QList.push_back(static_cast<int>(roles_arr[i]));
	}
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::dataChanged(*topLeft, *bottomRight, roles_QList);
}

bool QAbstractItemView_override_virtual_rowsInserted(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__rowsInserted = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_rowsInserted(void* self, QModelIndex* parent, int start, int end) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
}

bool QAbstractItemView_override_virtual_rowsAboutToBeRemoved(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__rowsAboutToBeRemoved = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_rowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
}

bool QAbstractItemView_override_virtual_selectionChanged(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__selectionChanged = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_selectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::selectionChanged(*selected, *deselected);
}

bool QAbstractItemView_override_virtual_currentChanged(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__currentChanged = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_currentChanged(void* self, QModelIndex* current, QModelIndex* previous) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::currentChanged(*current, *previous);
}

bool QAbstractItemView_override_virtual_updateEditorData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateEditorData = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_updateEditorData(void* self) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::updateEditorData();
}

bool QAbstractItemView_override_virtual_updateEditorGeometries(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateEditorGeometries = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_updateEditorGeometries(void* self) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::updateEditorGeometries();
}

bool QAbstractItemView_override_virtual_updateGeometries(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateGeometries = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_updateGeometries(void* self) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::updateGeometries();
}

bool QAbstractItemView_override_virtual_verticalScrollbarAction(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__verticalScrollbarAction = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_verticalScrollbarAction(void* self, int action) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::verticalScrollbarAction(static_cast<int>(action));
}

bool QAbstractItemView_override_virtual_horizontalScrollbarAction(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__horizontalScrollbarAction = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_horizontalScrollbarAction(void* self, int action) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::horizontalScrollbarAction(static_cast<int>(action));
}

bool QAbstractItemView_override_virtual_verticalScrollbarValueChanged(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__verticalScrollbarValueChanged = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_verticalScrollbarValueChanged(void* self, int value) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::verticalScrollbarValueChanged(static_cast<int>(value));
}

bool QAbstractItemView_override_virtual_horizontalScrollbarValueChanged(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__horizontalScrollbarValueChanged = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_horizontalScrollbarValueChanged(void* self, int value) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::horizontalScrollbarValueChanged(static_cast<int>(value));
}

bool QAbstractItemView_override_virtual_closeEditor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEditor = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_closeEditor(void* self, QWidget* editor, int hint) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
}

bool QAbstractItemView_override_virtual_commitData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__commitData = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_commitData(void* self, QWidget* editor) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::commitData(editor);
}

bool QAbstractItemView_override_virtual_editorDestroyed(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__editorDestroyed = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_editorDestroyed(void* self, QObject* editor) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::editorDestroyed(editor);
}

bool QAbstractItemView_override_virtual_moveCursor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveCursor = std::move(slot_handle);
	self_cast->owns_return__moveCursor = false;
	return true;
}

bool QAbstractItemView_override_virtual_owned_moveCursor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveCursor = std::move(slot_handle);
	self_cast->owns_return__moveCursor = true;
	return true;
}

bool QAbstractItemView_override_virtual_horizontalOffset(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__horizontalOffset = std::move(slot_handle);
	return true;
}

bool QAbstractItemView_override_virtual_verticalOffset(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__verticalOffset = std::move(slot_handle);
	return true;
}

bool QAbstractItemView_override_virtual_isIndexHidden(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isIndexHidden = std::move(slot_handle);
	return true;
}

bool QAbstractItemView_override_virtual_setSelection(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setSelection = std::move(slot_handle);
	return true;
}

bool QAbstractItemView_override_virtual_visualRegionForSelection(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__visualRegionForSelection = std::move(slot_handle);
	self_cast->owns_return__visualRegionForSelection = false;
	return true;
}

bool QAbstractItemView_override_virtual_owned_visualRegionForSelection(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__visualRegionForSelection = std::move(slot_handle);
	self_cast->owns_return__visualRegionForSelection = true;
	return true;
}

bool QAbstractItemView_override_virtual_selectedIndexes(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__selectedIndexes = std::move(slot_handle);
	return true;
}

struct miqt_array /* of QModelIndex* */  QAbstractItemView_virtualbase_selectedIndexes(const void* self) {
	QModelIndexList _ret = static_cast<const MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::selectedIndexes();
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

bool QAbstractItemView_override_virtual_edit2(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__edit2 = std::move(slot_handle);
	return true;
}

bool QAbstractItemView_virtualbase_edit2(void* self, QModelIndex* index, int trigger, QEvent* event) {
	return static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::edit(*index, static_cast<MiqtVirtualQAbstractItemView::EditTrigger>(trigger), event);
}

bool QAbstractItemView_override_virtual_selectionCommand(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__selectionCommand = std::move(slot_handle);
	return true;
}

int QAbstractItemView_virtualbase_selectionCommand(const void* self, QModelIndex* index, QEvent* event) {
	QItemSelectionModel::SelectionFlags _ret = static_cast<const MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::selectionCommand(*index, event);
	return static_cast<int>(_ret);
}

bool QAbstractItemView_override_virtual_startDrag(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__startDrag = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_startDrag(void* self, int supportedActions) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::startDrag(static_cast<Qt::DropActions>(supportedActions));
}

bool QAbstractItemView_override_virtual_viewOptions(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__viewOptions = std::move(slot_handle);
	self_cast->owns_return__viewOptions = false;
	return true;
}

bool QAbstractItemView_override_virtual_owned_viewOptions(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__viewOptions = std::move(slot_handle);
	self_cast->owns_return__viewOptions = true;
	return true;
}

QStyleOptionViewItem* QAbstractItemView_virtualbase_viewOptions(const void* self) {
	return new QStyleOptionViewItem(static_cast<const MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::viewOptions());
}

bool QAbstractItemView_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = std::move(slot_handle);
	return true;
}

bool QAbstractItemView_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::focusNextPrevChild(next);
}

bool QAbstractItemView_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QAbstractItemView_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::event(event);
}

bool QAbstractItemView_override_virtual_viewportEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__viewportEvent = std::move(slot_handle);
	return true;
}

bool QAbstractItemView_virtualbase_viewportEvent(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::viewportEvent(event);
}

bool QAbstractItemView_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::mousePressEvent(event);
}

bool QAbstractItemView_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::mouseMoveEvent(event);
}

bool QAbstractItemView_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::mouseReleaseEvent(event);
}

bool QAbstractItemView_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::mouseDoubleClickEvent(event);
}

bool QAbstractItemView_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::dragEnterEvent(event);
}

bool QAbstractItemView_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::dragMoveEvent(event);
}

bool QAbstractItemView_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::dragLeaveEvent(event);
}

bool QAbstractItemView_override_virtual_dropEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::dropEvent(event);
}

bool QAbstractItemView_override_virtual_focusInEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::focusInEvent(event);
}

bool QAbstractItemView_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::focusOutEvent(event);
}

bool QAbstractItemView_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::keyPressEvent(event);
}

bool QAbstractItemView_override_virtual_resizeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::resizeEvent(event);
}

bool QAbstractItemView_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::timerEvent(event);
}

bool QAbstractItemView_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::inputMethodEvent(event);
}

bool QAbstractItemView_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QAbstractItemView_virtualbase_eventFilter(void* self, QObject* object, QEvent* event) {
	return static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::eventFilter(object, event);
}

bool QAbstractItemView_override_virtual_viewportSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__viewportSizeHint = std::move(slot_handle);
	self_cast->owns_return__viewportSizeHint = false;
	return true;
}

bool QAbstractItemView_override_virtual_owned_viewportSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__viewportSizeHint = std::move(slot_handle);
	self_cast->owns_return__viewportSizeHint = true;
	return true;
}

QSize* QAbstractItemView_virtualbase_viewportSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::viewportSizeHint());
}

bool QAbstractItemView_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	self_cast->owns_return__minimumSizeHint = false;
	return true;
}

bool QAbstractItemView_override_virtual_owned_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	self_cast->owns_return__minimumSizeHint = true;
	return true;
}

QSize* QAbstractItemView_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::minimumSizeHint());
}

bool QAbstractItemView_override_virtual_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = false;
	return true;
}

bool QAbstractItemView_override_virtual_owned_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = true;
	return true;
}

QSize* QAbstractItemView_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::sizeHint());
}

bool QAbstractItemView_override_virtual_setupViewport(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setupViewport = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_setupViewport(void* self, QWidget* viewport) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::setupViewport(viewport);
}

bool QAbstractItemView_override_virtual_paintEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_paintEvent(void* self, QPaintEvent* param1) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::paintEvent(param1);
}

bool QAbstractItemView_override_virtual_wheelEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_wheelEvent(void* self, QWheelEvent* param1) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::wheelEvent(param1);
}

bool QAbstractItemView_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::contextMenuEvent(param1);
}

bool QAbstractItemView_override_virtual_scrollContentsBy(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scrollContentsBy = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_scrollContentsBy(void* self, int dx, int dy) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
}

bool QAbstractItemView_override_virtual_changeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::changeEvent(param1);
}

bool QAbstractItemView_override_virtual_devType(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = std::move(slot_handle);
	return true;
}

int QAbstractItemView_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::devType();
}

bool QAbstractItemView_override_virtual_setVisible(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::setVisible(visible);
}

bool QAbstractItemView_override_virtual_heightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = std::move(slot_handle);
	return true;
}

int QAbstractItemView_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::heightForWidth(static_cast<int>(param1));
}

bool QAbstractItemView_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = std::move(slot_handle);
	return true;
}

bool QAbstractItemView_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::hasHeightForWidth();
}

bool QAbstractItemView_override_virtual_paintEngine(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = std::move(slot_handle);
	return true;
}

QPaintEngine* QAbstractItemView_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::paintEngine();
}

bool QAbstractItemView_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::keyReleaseEvent(event);
}

bool QAbstractItemView_override_virtual_enterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::enterEvent(event);
}

bool QAbstractItemView_override_virtual_leaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::leaveEvent(event);
}

bool QAbstractItemView_override_virtual_moveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::moveEvent(event);
}

bool QAbstractItemView_override_virtual_closeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::closeEvent(event);
}

bool QAbstractItemView_override_virtual_tabletEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::tabletEvent(event);
}

bool QAbstractItemView_override_virtual_actionEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::actionEvent(event);
}

bool QAbstractItemView_override_virtual_showEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::showEvent(event);
}

bool QAbstractItemView_override_virtual_hideEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::hideEvent(event);
}

bool QAbstractItemView_override_virtual_nativeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = std::move(slot_handle);
	return true;
}

bool QAbstractItemView_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QAbstractItemView_override_virtual_metric(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = std::move(slot_handle);
	return true;
}

int QAbstractItemView_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::metric(static_cast<MiqtVirtualQAbstractItemView::PaintDeviceMetric>(param1));
}

bool QAbstractItemView_override_virtual_initPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::initPainter(painter);
}

bool QAbstractItemView_override_virtual_redirected(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = std::move(slot_handle);
	return true;
}

QPaintDevice* QAbstractItemView_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::redirected(offset);
}

bool QAbstractItemView_override_virtual_sharedPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = std::move(slot_handle);
	return true;
}

QPainter* QAbstractItemView_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::sharedPainter();
}

bool QAbstractItemView_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::childEvent(event);
}

bool QAbstractItemView_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::customEvent(event);
}

bool QAbstractItemView_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::connectNotify(*signal);
}

bool QAbstractItemView_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemView> slot_handle(slot);
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QAbstractItemView_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQAbstractItemView*>(self)->QAbstractItemView::disconnectNotify(*signal);
}

void QAbstractItemView_protectedbase_setHorizontalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setHorizontalStepsPerItem(static_cast<int>(steps));
}

int QAbstractItemView_protectedbase_horizontalStepsPerItem(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->horizontalStepsPerItem();
}

void QAbstractItemView_protectedbase_setVerticalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setVerticalStepsPerItem(static_cast<int>(steps));
}

int QAbstractItemView_protectedbase_verticalStepsPerItem(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->verticalStepsPerItem();
}

int QAbstractItemView_protectedbase_state(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}

	*_dynamic_cast_ok = true;
	MiqtVirtualQAbstractItemView::State _ret = self_cast->state();
	return static_cast<int>(_ret);
}

void QAbstractItemView_protectedbase_setState(bool* _dynamic_cast_ok, void* self, int state) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setState(static_cast<MiqtVirtualQAbstractItemView::State>(state));
}

void QAbstractItemView_protectedbase_scheduleDelayedItemsLayout(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->scheduleDelayedItemsLayout();
}

void QAbstractItemView_protectedbase_executeDelayedItemsLayout(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->executeDelayedItemsLayout();
}

void QAbstractItemView_protectedbase_setDirtyRegion(bool* _dynamic_cast_ok, void* self, QRegion* region) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setDirtyRegion(*region);
}

void QAbstractItemView_protectedbase_scrollDirtyRegion(bool* _dynamic_cast_ok, void* self, int dx, int dy) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
}

QPoint* QAbstractItemView_protectedbase_dirtyRegionOffset(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QPoint(self_cast->dirtyRegionOffset());
}

void QAbstractItemView_protectedbase_startAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->startAutoScroll();
}

void QAbstractItemView_protectedbase_stopAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->stopAutoScroll();
}

void QAbstractItemView_protectedbase_doAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->doAutoScroll();
}

int QAbstractItemView_protectedbase_dropIndicatorPosition(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}

	*_dynamic_cast_ok = true;
	MiqtVirtualQAbstractItemView::DropIndicatorPosition _ret = self_cast->dropIndicatorPosition();
	return static_cast<int>(_ret);
}

void QAbstractItemView_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
}

QMargins* QAbstractItemView_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QMargins(self_cast->viewportMargins());
}

void QAbstractItemView_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->drawFrame(param1);
}

void QAbstractItemView_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->initStyleOption(option);
}

void QAbstractItemView_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QAbstractItemView_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QAbstractItemView_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QAbstractItemView_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QAbstractItemView_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QAbstractItemView_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QAbstractItemView_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QAbstractItemView_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QAbstractItemView_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAbstractItemView* self_cast = dynamic_cast<MiqtVirtualQAbstractItemView*>( (QAbstractItemView*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QAbstractItemView_delete(QAbstractItemView* self) {
	delete self;
}

