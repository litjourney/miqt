#include <memory>
#include <utility>
#include <QAbstractItemModel>
#include <QAbstractListModel>
#include <QAbstractTableModel>
#include <QByteArray>
#include <QChildEvent>
#include <QDataStream>
#include <QEvent>
#include <QHash>
#include <QList>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeData>
#include <QModelIndex>
#include <QObject>
#include <QPersistentModelIndex>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <QVector>
#include <qabstractitemmodel.h>
#include "gen_qabstractitemmodel.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QAbstractItemModel(intptr_t);
void miqt_exec_callback_QAbstractItemModel_dataChanged(intptr_t, QModelIndex*, QModelIndex*);
void miqt_exec_callback_QAbstractItemModel_headerDataChanged(intptr_t, int, int, int);
void miqt_exec_callback_QAbstractItemModel_layoutChanged(intptr_t);
void miqt_exec_callback_QAbstractItemModel_layoutAboutToBeChanged(intptr_t);
void miqt_exec_callback_QAbstractItemModel_dataChanged2(intptr_t, QModelIndex*, QModelIndex*, struct miqt_array /* of int */ );
void miqt_exec_callback_QAbstractItemModel_layoutChangedWithParents(intptr_t, struct miqt_array /* of QPersistentModelIndex* */ );
void miqt_exec_callback_QAbstractItemModel_layoutChanged2(intptr_t, struct miqt_array /* of QPersistentModelIndex* */ , int);
void miqt_exec_callback_QAbstractItemModel_layoutAboutToBeChangedWithParents(intptr_t, struct miqt_array /* of QPersistentModelIndex* */ );
void miqt_exec_callback_QAbstractItemModel_layoutAboutToBeChanged2(intptr_t, struct miqt_array /* of QPersistentModelIndex* */ , int);
void miqt_exec_callback_QAbstractItemModel_rowsAboutToBeInserted(intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QAbstractItemModel_rowsInserted(intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QAbstractItemModel_rowsAboutToBeRemoved(intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QAbstractItemModel_rowsRemoved(intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QAbstractItemModel_columnsAboutToBeInserted(intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QAbstractItemModel_columnsInserted(intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QAbstractItemModel_columnsAboutToBeRemoved(intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QAbstractItemModel_columnsRemoved(intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QAbstractItemModel_modelAboutToBeReset(intptr_t);
void miqt_exec_callback_QAbstractItemModel_modelReset(intptr_t);
void miqt_exec_callback_QAbstractItemModel_rowsAboutToBeMoved(intptr_t, QModelIndex*, int, int, QModelIndex*, int);
void miqt_exec_callback_QAbstractItemModel_rowsMoved(intptr_t, QModelIndex*, int, int, QModelIndex*, int);
void miqt_exec_callback_QAbstractItemModel_columnsAboutToBeMoved(intptr_t, QModelIndex*, int, int, QModelIndex*, int);
void miqt_exec_callback_QAbstractItemModel_columnsMoved(intptr_t, QModelIndex*, int, int, QModelIndex*, int);
QModelIndex* miqt_exec_callback_QAbstractItemModel_index(const QAbstractItemModel*, intptr_t, int, int, QModelIndex*);
QModelIndex* miqt_exec_callback_QAbstractItemModel_parent(const QAbstractItemModel*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QAbstractItemModel_sibling(const QAbstractItemModel*, intptr_t, int, int, QModelIndex*);
int miqt_exec_callback_QAbstractItemModel_rowCount(const QAbstractItemModel*, intptr_t, QModelIndex*);
int miqt_exec_callback_QAbstractItemModel_columnCount(const QAbstractItemModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QAbstractItemModel_hasChildren(const QAbstractItemModel*, intptr_t, QModelIndex*);
QVariant* miqt_exec_callback_QAbstractItemModel_data(const QAbstractItemModel*, intptr_t, QModelIndex*, int);
bool miqt_exec_callback_QAbstractItemModel_setData(QAbstractItemModel*, intptr_t, QModelIndex*, QVariant*, int);
QVariant* miqt_exec_callback_QAbstractItemModel_headerData(const QAbstractItemModel*, intptr_t, int, int, int);
bool miqt_exec_callback_QAbstractItemModel_setHeaderData(QAbstractItemModel*, intptr_t, int, int, QVariant*, int);
struct miqt_map /* of int to QVariant* */  miqt_exec_callback_QAbstractItemModel_itemData(const QAbstractItemModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QAbstractItemModel_setItemData(QAbstractItemModel*, intptr_t, QModelIndex*, struct miqt_map /* of int to QVariant* */ );
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QAbstractItemModel_mimeTypes(const QAbstractItemModel*, intptr_t);
QMimeData* miqt_exec_callback_QAbstractItemModel_mimeData(const QAbstractItemModel*, intptr_t, struct miqt_array /* of QModelIndex* */ );
bool miqt_exec_callback_QAbstractItemModel_canDropMimeData(const QAbstractItemModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractItemModel_dropMimeData(QAbstractItemModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
int miqt_exec_callback_QAbstractItemModel_supportedDropActions(const QAbstractItemModel*, intptr_t);
int miqt_exec_callback_QAbstractItemModel_supportedDragActions(const QAbstractItemModel*, intptr_t);
bool miqt_exec_callback_QAbstractItemModel_insertRows(QAbstractItemModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractItemModel_insertColumns(QAbstractItemModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractItemModel_removeRows(QAbstractItemModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractItemModel_removeColumns(QAbstractItemModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractItemModel_moveRows(QAbstractItemModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
bool miqt_exec_callback_QAbstractItemModel_moveColumns(QAbstractItemModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
void miqt_exec_callback_QAbstractItemModel_fetchMore(QAbstractItemModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QAbstractItemModel_canFetchMore(const QAbstractItemModel*, intptr_t, QModelIndex*);
int miqt_exec_callback_QAbstractItemModel_flags(const QAbstractItemModel*, intptr_t, QModelIndex*);
void miqt_exec_callback_QAbstractItemModel_sort(QAbstractItemModel*, intptr_t, int, int);
QModelIndex* miqt_exec_callback_QAbstractItemModel_buddy(const QAbstractItemModel*, intptr_t, QModelIndex*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QAbstractItemModel_match(const QAbstractItemModel*, intptr_t, QModelIndex*, int, QVariant*, int, int);
QSize* miqt_exec_callback_QAbstractItemModel_span(const QAbstractItemModel*, intptr_t, QModelIndex*);
struct miqt_map /* of int to struct miqt_string */  miqt_exec_callback_QAbstractItemModel_roleNames(const QAbstractItemModel*, intptr_t);
bool miqt_exec_callback_QAbstractItemModel_submit(QAbstractItemModel*, intptr_t);
void miqt_exec_callback_QAbstractItemModel_revert(QAbstractItemModel*, intptr_t);
bool miqt_exec_callback_QAbstractItemModel_event(QAbstractItemModel*, intptr_t, QEvent*);
bool miqt_exec_callback_QAbstractItemModel_eventFilter(QAbstractItemModel*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAbstractItemModel_timerEvent(QAbstractItemModel*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAbstractItemModel_childEvent(QAbstractItemModel*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAbstractItemModel_customEvent(QAbstractItemModel*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractItemModel_connectNotify(QAbstractItemModel*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAbstractItemModel_disconnectNotify(QAbstractItemModel*, intptr_t, QMetaMethod*);
void miqt_exec_callback_handle_release_QAbstractTableModel(intptr_t);
QModelIndex* miqt_exec_callback_QAbstractTableModel_index(const QAbstractTableModel*, intptr_t, int, int, QModelIndex*);
QModelIndex* miqt_exec_callback_QAbstractTableModel_sibling(const QAbstractTableModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractTableModel_dropMimeData(QAbstractTableModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
int miqt_exec_callback_QAbstractTableModel_flags(const QAbstractTableModel*, intptr_t, QModelIndex*);
int miqt_exec_callback_QAbstractTableModel_rowCount(const QAbstractTableModel*, intptr_t, QModelIndex*);
int miqt_exec_callback_QAbstractTableModel_columnCount(const QAbstractTableModel*, intptr_t, QModelIndex*);
QVariant* miqt_exec_callback_QAbstractTableModel_data(const QAbstractTableModel*, intptr_t, QModelIndex*, int);
bool miqt_exec_callback_QAbstractTableModel_setData(QAbstractTableModel*, intptr_t, QModelIndex*, QVariant*, int);
QVariant* miqt_exec_callback_QAbstractTableModel_headerData(const QAbstractTableModel*, intptr_t, int, int, int);
bool miqt_exec_callback_QAbstractTableModel_setHeaderData(QAbstractTableModel*, intptr_t, int, int, QVariant*, int);
struct miqt_map /* of int to QVariant* */  miqt_exec_callback_QAbstractTableModel_itemData(const QAbstractTableModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QAbstractTableModel_setItemData(QAbstractTableModel*, intptr_t, QModelIndex*, struct miqt_map /* of int to QVariant* */ );
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QAbstractTableModel_mimeTypes(const QAbstractTableModel*, intptr_t);
QMimeData* miqt_exec_callback_QAbstractTableModel_mimeData(const QAbstractTableModel*, intptr_t, struct miqt_array /* of QModelIndex* */ );
bool miqt_exec_callback_QAbstractTableModel_canDropMimeData(const QAbstractTableModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
int miqt_exec_callback_QAbstractTableModel_supportedDropActions(const QAbstractTableModel*, intptr_t);
int miqt_exec_callback_QAbstractTableModel_supportedDragActions(const QAbstractTableModel*, intptr_t);
bool miqt_exec_callback_QAbstractTableModel_insertRows(QAbstractTableModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractTableModel_insertColumns(QAbstractTableModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractTableModel_removeRows(QAbstractTableModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractTableModel_removeColumns(QAbstractTableModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractTableModel_moveRows(QAbstractTableModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
bool miqt_exec_callback_QAbstractTableModel_moveColumns(QAbstractTableModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
void miqt_exec_callback_QAbstractTableModel_fetchMore(QAbstractTableModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QAbstractTableModel_canFetchMore(const QAbstractTableModel*, intptr_t, QModelIndex*);
void miqt_exec_callback_QAbstractTableModel_sort(QAbstractTableModel*, intptr_t, int, int);
QModelIndex* miqt_exec_callback_QAbstractTableModel_buddy(const QAbstractTableModel*, intptr_t, QModelIndex*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QAbstractTableModel_match(const QAbstractTableModel*, intptr_t, QModelIndex*, int, QVariant*, int, int);
QSize* miqt_exec_callback_QAbstractTableModel_span(const QAbstractTableModel*, intptr_t, QModelIndex*);
struct miqt_map /* of int to struct miqt_string */  miqt_exec_callback_QAbstractTableModel_roleNames(const QAbstractTableModel*, intptr_t);
bool miqt_exec_callback_QAbstractTableModel_submit(QAbstractTableModel*, intptr_t);
void miqt_exec_callback_QAbstractTableModel_revert(QAbstractTableModel*, intptr_t);
bool miqt_exec_callback_QAbstractTableModel_event(QAbstractTableModel*, intptr_t, QEvent*);
bool miqt_exec_callback_QAbstractTableModel_eventFilter(QAbstractTableModel*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAbstractTableModel_timerEvent(QAbstractTableModel*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAbstractTableModel_childEvent(QAbstractTableModel*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAbstractTableModel_customEvent(QAbstractTableModel*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractTableModel_connectNotify(QAbstractTableModel*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAbstractTableModel_disconnectNotify(QAbstractTableModel*, intptr_t, QMetaMethod*);
void miqt_exec_callback_handle_release_QAbstractListModel(intptr_t);
QModelIndex* miqt_exec_callback_QAbstractListModel_index(const QAbstractListModel*, intptr_t, int, int, QModelIndex*);
QModelIndex* miqt_exec_callback_QAbstractListModel_sibling(const QAbstractListModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractListModel_dropMimeData(QAbstractListModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
int miqt_exec_callback_QAbstractListModel_flags(const QAbstractListModel*, intptr_t, QModelIndex*);
int miqt_exec_callback_QAbstractListModel_rowCount(const QAbstractListModel*, intptr_t, QModelIndex*);
QVariant* miqt_exec_callback_QAbstractListModel_data(const QAbstractListModel*, intptr_t, QModelIndex*, int);
bool miqt_exec_callback_QAbstractListModel_setData(QAbstractListModel*, intptr_t, QModelIndex*, QVariant*, int);
QVariant* miqt_exec_callback_QAbstractListModel_headerData(const QAbstractListModel*, intptr_t, int, int, int);
bool miqt_exec_callback_QAbstractListModel_setHeaderData(QAbstractListModel*, intptr_t, int, int, QVariant*, int);
struct miqt_map /* of int to QVariant* */  miqt_exec_callback_QAbstractListModel_itemData(const QAbstractListModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QAbstractListModel_setItemData(QAbstractListModel*, intptr_t, QModelIndex*, struct miqt_map /* of int to QVariant* */ );
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QAbstractListModel_mimeTypes(const QAbstractListModel*, intptr_t);
QMimeData* miqt_exec_callback_QAbstractListModel_mimeData(const QAbstractListModel*, intptr_t, struct miqt_array /* of QModelIndex* */ );
bool miqt_exec_callback_QAbstractListModel_canDropMimeData(const QAbstractListModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
int miqt_exec_callback_QAbstractListModel_supportedDropActions(const QAbstractListModel*, intptr_t);
int miqt_exec_callback_QAbstractListModel_supportedDragActions(const QAbstractListModel*, intptr_t);
bool miqt_exec_callback_QAbstractListModel_insertRows(QAbstractListModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractListModel_insertColumns(QAbstractListModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractListModel_removeRows(QAbstractListModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractListModel_removeColumns(QAbstractListModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractListModel_moveRows(QAbstractListModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
bool miqt_exec_callback_QAbstractListModel_moveColumns(QAbstractListModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
void miqt_exec_callback_QAbstractListModel_fetchMore(QAbstractListModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QAbstractListModel_canFetchMore(const QAbstractListModel*, intptr_t, QModelIndex*);
void miqt_exec_callback_QAbstractListModel_sort(QAbstractListModel*, intptr_t, int, int);
QModelIndex* miqt_exec_callback_QAbstractListModel_buddy(const QAbstractListModel*, intptr_t, QModelIndex*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QAbstractListModel_match(const QAbstractListModel*, intptr_t, QModelIndex*, int, QVariant*, int, int);
QSize* miqt_exec_callback_QAbstractListModel_span(const QAbstractListModel*, intptr_t, QModelIndex*);
struct miqt_map /* of int to struct miqt_string */  miqt_exec_callback_QAbstractListModel_roleNames(const QAbstractListModel*, intptr_t);
bool miqt_exec_callback_QAbstractListModel_submit(QAbstractListModel*, intptr_t);
void miqt_exec_callback_QAbstractListModel_revert(QAbstractListModel*, intptr_t);
bool miqt_exec_callback_QAbstractListModel_event(QAbstractListModel*, intptr_t, QEvent*);
bool miqt_exec_callback_QAbstractListModel_eventFilter(QAbstractListModel*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAbstractListModel_timerEvent(QAbstractListModel*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAbstractListModel_childEvent(QAbstractListModel*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAbstractListModel_customEvent(QAbstractListModel*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractListModel_connectNotify(QAbstractListModel*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAbstractListModel_disconnectNotify(QAbstractListModel*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

QModelIndex* QModelIndex_new() {
	return new (std::nothrow) QModelIndex();
}

QModelIndex* QModelIndex_new2(QModelIndex* param1) {
	return new (std::nothrow) QModelIndex(*param1);
}

int QModelIndex_row(const QModelIndex* self) {
	return self->row();
}

int QModelIndex_column(const QModelIndex* self) {
	return self->column();
}

uintptr_t QModelIndex_internalId(const QModelIndex* self) {
	quintptr _ret = self->internalId();
	return static_cast<uintptr_t>(_ret);
}

void* QModelIndex_internalPointer(const QModelIndex* self) {
	return self->internalPointer();
}

QModelIndex* QModelIndex_parent(const QModelIndex* self) {
	return new QModelIndex(self->parent());
}

QModelIndex* QModelIndex_sibling(const QModelIndex* self, int row, int column) {
	return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column)));
}

QModelIndex* QModelIndex_siblingAtColumn(const QModelIndex* self, int column) {
	return new QModelIndex(self->siblingAtColumn(static_cast<int>(column)));
}

QModelIndex* QModelIndex_siblingAtRow(const QModelIndex* self, int row) {
	return new QModelIndex(self->siblingAtRow(static_cast<int>(row)));
}

QModelIndex* QModelIndex_child(const QModelIndex* self, int row, int column) {
	return new QModelIndex(self->child(static_cast<int>(row), static_cast<int>(column)));
}

QVariant* QModelIndex_data(const QModelIndex* self) {
	return new QVariant(self->data());
}

int QModelIndex_flags(const QModelIndex* self) {
	Qt::ItemFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

QAbstractItemModel* QModelIndex_model(const QModelIndex* self) {
	return (QAbstractItemModel*) self->model();
}

bool QModelIndex_isValid(const QModelIndex* self) {
	return self->isValid();
}

bool QModelIndex_operatorEqual(const QModelIndex* self, QModelIndex* other) {
	return (*self == *other);
}

bool QModelIndex_operatorNotEqual(const QModelIndex* self, QModelIndex* other) {
	return (*self != *other);
}

bool QModelIndex_operatorLesser(const QModelIndex* self, QModelIndex* other) {
	return (*self < *other);
}

void QModelIndex_operatorAssign(QModelIndex* self, QModelIndex* param1) {
	self->operator=(*param1);
}

QVariant* QModelIndex_dataWithRole(const QModelIndex* self, int role) {
	return new QVariant(self->data(static_cast<int>(role)));
}

void QModelIndex_delete(QModelIndex* self) {
	delete self;
}

QPersistentModelIndex* QPersistentModelIndex_new() {
	return new (std::nothrow) QPersistentModelIndex();
}

QPersistentModelIndex* QPersistentModelIndex_new2(QModelIndex* index) {
	return new (std::nothrow) QPersistentModelIndex(*index);
}

QPersistentModelIndex* QPersistentModelIndex_new3(QPersistentModelIndex* other) {
	return new (std::nothrow) QPersistentModelIndex(*other);
}

bool QPersistentModelIndex_operatorLesser(const QPersistentModelIndex* self, QPersistentModelIndex* other) {
	return (*self < *other);
}

bool QPersistentModelIndex_operatorEqual(const QPersistentModelIndex* self, QPersistentModelIndex* other) {
	return (*self == *other);
}

bool QPersistentModelIndex_operatorNotEqual(const QPersistentModelIndex* self, QPersistentModelIndex* other) {
	return (*self != *other);
}

void QPersistentModelIndex_operatorAssign(QPersistentModelIndex* self, QPersistentModelIndex* other) {
	self->operator=(*other);
}

void QPersistentModelIndex_swap(QPersistentModelIndex* self, QPersistentModelIndex* other) {
	self->swap(*other);
}

bool QPersistentModelIndex_operatorEqualWithOther(const QPersistentModelIndex* self, QModelIndex* other) {
	return (*self == *other);
}

bool QPersistentModelIndex_operatorNotEqualWithOther(const QPersistentModelIndex* self, QModelIndex* other) {
	return (*self != *other);
}

void QPersistentModelIndex_operatorAssignWithOther(QPersistentModelIndex* self, QModelIndex* other) {
	self->operator=(*other);
}

QModelIndex* QPersistentModelIndex_ToConstQModelIndexBitwiseAnd(const QPersistentModelIndex* self) {
	const QModelIndex& _ret = self->operator const QModelIndex &();
	// Cast returned reference into pointer
	return const_cast<QModelIndex*>(&_ret);
}

int QPersistentModelIndex_row(const QPersistentModelIndex* self) {
	return self->row();
}

int QPersistentModelIndex_column(const QPersistentModelIndex* self) {
	return self->column();
}

void* QPersistentModelIndex_internalPointer(const QPersistentModelIndex* self) {
	return self->internalPointer();
}

uintptr_t QPersistentModelIndex_internalId(const QPersistentModelIndex* self) {
	quintptr _ret = self->internalId();
	return static_cast<uintptr_t>(_ret);
}

QModelIndex* QPersistentModelIndex_parent(const QPersistentModelIndex* self) {
	return new QModelIndex(self->parent());
}

QModelIndex* QPersistentModelIndex_sibling(const QPersistentModelIndex* self, int row, int column) {
	return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column)));
}

QModelIndex* QPersistentModelIndex_child(const QPersistentModelIndex* self, int row, int column) {
	return new QModelIndex(self->child(static_cast<int>(row), static_cast<int>(column)));
}

QVariant* QPersistentModelIndex_data(const QPersistentModelIndex* self) {
	return new QVariant(self->data());
}

int QPersistentModelIndex_flags(const QPersistentModelIndex* self) {
	Qt::ItemFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

QAbstractItemModel* QPersistentModelIndex_model(const QPersistentModelIndex* self) {
	return (QAbstractItemModel*) self->model();
}

bool QPersistentModelIndex_isValid(const QPersistentModelIndex* self) {
	return self->isValid();
}

QVariant* QPersistentModelIndex_dataWithRole(const QPersistentModelIndex* self, int role) {
	return new QVariant(self->data(static_cast<int>(role)));
}

void QPersistentModelIndex_delete(QPersistentModelIndex* self) {
	delete self;
}

class MiqtVirtualQAbstractItemModel final : public QAbstractItemModel {
public:

	MiqtVirtualQAbstractItemModel(): QAbstractItemModel() {}
	MiqtVirtualQAbstractItemModel(QObject* parent): QAbstractItemModel(parent) {}

	virtual ~MiqtVirtualQAbstractItemModel() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> handle__index;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
		if (!handle__index) {
			return QModelIndex(); // Pure virtual, there is no base we can call
		}

		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractItemModel_index(this, handle__index.value(), sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> handle__parent;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex parent(const QModelIndex& child) const override {
		if (!handle__parent) {
			return QModelIndex(); // Pure virtual, there is no base we can call
		}

		const QModelIndex& child_ret = child;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&child_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractItemModel_parent(this, handle__parent.value(), sigval1);
		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> handle__sibling;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
		if (!handle__sibling) {
			return QAbstractItemModel::sibling(row, column, idx);
		}

		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& idx_ret = idx;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&idx_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractItemModel_sibling(this, handle__sibling.value(), sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	friend QModelIndex* QAbstractItemModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> handle__rowCount;

	// Subclass to allow providing a Go implementation
	virtual int rowCount(const QModelIndex& parent) const override {
		if (!handle__rowCount) {
			return 0; // Pure virtual, there is no base we can call
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int callback_return_value = miqt_exec_callback_QAbstractItemModel_rowCount(this, handle__rowCount.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> handle__columnCount;

	// Subclass to allow providing a Go implementation
	virtual int columnCount(const QModelIndex& parent) const override {
		if (!handle__columnCount) {
			return 0; // Pure virtual, there is no base we can call
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int callback_return_value = miqt_exec_callback_QAbstractItemModel_columnCount(this, handle__columnCount.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> handle__hasChildren;

	// Subclass to allow providing a Go implementation
	virtual bool hasChildren(const QModelIndex& parent) const override {
		if (!handle__hasChildren) {
			return QAbstractItemModel::hasChildren(parent);
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_hasChildren(this, handle__hasChildren.value(), sigval1);
		return callback_return_value;
	}

	friend bool QAbstractItemModel_virtualbase_hasChildren(const void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> handle__data;

	// Subclass to allow providing a Go implementation
	virtual QVariant data(const QModelIndex& index, int role) const override {
		if (!handle__data) {
			return QVariant(); // Pure virtual, there is no base we can call
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		int sigval2 = role;
		QVariant* callback_return_value = miqt_exec_callback_QAbstractItemModel_data(this, handle__data.value(), sigval1, sigval2);
		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> handle__setData;

	// Subclass to allow providing a Go implementation
	virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
		if (!handle__setData) {
			return QAbstractItemModel::setData(index, value, role);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		int sigval3 = role;
		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_setData(this, handle__setData.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QAbstractItemModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> handle__headerData;

	// Subclass to allow providing a Go implementation
	virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
		if (!handle__headerData) {
			return QAbstractItemModel::headerData(section, orientation, role);
		}

		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		int sigval3 = role;
		QVariant* callback_return_value = miqt_exec_callback_QAbstractItemModel_headerData(this, handle__headerData.value(), sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	friend QVariant* QAbstractItemModel_virtualbase_headerData(const void* self, int section, int orientation, int role);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> handle__setHeaderData;

	// Subclass to allow providing a Go implementation
	virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
		if (!handle__setHeaderData) {
			return QAbstractItemModel::setHeaderData(section, orientation, value, role);
		}

		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval3 = const_cast<QVariant*>(&value_ret);
		int sigval4 = role;
		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_setHeaderData(this, handle__setHeaderData.value(), sigval1, sigval2, sigval3, sigval4);
		return callback_return_value;
	}

	friend bool QAbstractItemModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> handle__itemData;

	// Subclass to allow providing a Go implementation
	virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
		if (!handle__itemData) {
			return QAbstractItemModel::itemData(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		struct miqt_map /* of int to QVariant* */  callback_return_value = miqt_exec_callback_QAbstractItemModel_itemData(this, handle__itemData.value(), sigval1);
		QMap<int, QVariant> callback_return_value_QMap;
		int* callback_return_value_karr = static_cast<int*>(callback_return_value.keys);
		QVariant** callback_return_value_varr = static_cast<QVariant**>(callback_return_value.values);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QMap[static_cast<int>(callback_return_value_karr[i])] = *(callback_return_value_varr[i]);
		}
		return callback_return_value_QMap;
	}

	friend struct miqt_map /* of int to QVariant* */  QAbstractItemModel_virtualbase_itemData(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> handle__setItemData;

	// Subclass to allow providing a Go implementation
	virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
		if (!handle__setItemData) {
			return QAbstractItemModel::setItemData(index, roles);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		const QMap<int, QVariant>& roles_ret = roles;
		// Convert QMap<> from C++ memory to manually-managed C memory
		int* roles_karr = static_cast<int*>(malloc(sizeof(int) * roles_ret.size()));
		QVariant** roles_varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * roles_ret.size()));
		int roles_ctr = 0;
		for (auto roles_itr = roles_ret.keyValueBegin(); roles_itr != roles_ret.keyValueEnd(); ++roles_itr) {
			roles_karr[roles_ctr] = roles_itr->first;
			roles_varr[roles_ctr] = new QVariant(roles_itr->second);
			roles_ctr++;
		}
		struct miqt_map roles_out;
		roles_out.len = roles_ret.size();
		roles_out.keys = static_cast<void*>(roles_karr);
		roles_out.values = static_cast<void*>(roles_varr);
		struct miqt_map /* of int to QVariant* */  sigval2 = roles_out;
		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_setItemData(this, handle__setItemData.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QAbstractItemModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> handle__mimeTypes;

	// Subclass to allow providing a Go implementation
	virtual QStringList mimeTypes() const override {
		if (!handle__mimeTypes) {
			return QAbstractItemModel::mimeTypes();
		}

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QAbstractItemModel_mimeTypes(this, handle__mimeTypes.value());
		QStringList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		struct miqt_string* callback_return_value_arr = static_cast<struct miqt_string*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QString callback_return_value_arr_i_QString = QString::fromUtf8(callback_return_value_arr[i].data, callback_return_value_arr[i].len);
			callback_return_value_QList.push_back(callback_return_value_arr_i_QString);
		}
		struct miqt_string* callback_return_value_free_arr = static_cast<struct miqt_string*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			free(callback_return_value_free_arr[i].data);
		}
		free(callback_return_value.data);
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of struct miqt_string */  QAbstractItemModel_virtualbase_mimeTypes(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> handle__mimeData;

	// Subclass to allow providing a Go implementation
	virtual QMimeData* mimeData(const QModelIndexList& indexes) const override {
		if (!handle__mimeData) {
			return QAbstractItemModel::mimeData(indexes);
		}

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
		QMimeData* callback_return_value = miqt_exec_callback_QAbstractItemModel_mimeData(this, handle__mimeData.value(), sigval1);
		return callback_return_value;
	}

	friend QMimeData* QAbstractItemModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> handle__canDropMimeData;

	// Subclass to allow providing a Go implementation
	virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
		if (!handle__canDropMimeData) {
			return QAbstractItemModel::canDropMimeData(data, action, row, column, parent);
		}

		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_canDropMimeData(this, handle__canDropMimeData.value(), sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QAbstractItemModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> handle__dropMimeData;

	// Subclass to allow providing a Go implementation
	virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
		if (!handle__dropMimeData) {
			return QAbstractItemModel::dropMimeData(data, action, row, column, parent);
		}

		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_dropMimeData(this, handle__dropMimeData.value(), sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QAbstractItemModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> handle__supportedDropActions;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDropActions() const override {
		if (!handle__supportedDropActions) {
			return QAbstractItemModel::supportedDropActions();
		}

		int callback_return_value = miqt_exec_callback_QAbstractItemModel_supportedDropActions(this, handle__supportedDropActions.value());
		return static_cast<Qt::DropActions>(callback_return_value);
	}

	friend int QAbstractItemModel_virtualbase_supportedDropActions(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> handle__supportedDragActions;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDragActions() const override {
		if (!handle__supportedDragActions) {
			return QAbstractItemModel::supportedDragActions();
		}

		int callback_return_value = miqt_exec_callback_QAbstractItemModel_supportedDragActions(this, handle__supportedDragActions.value());
		return static_cast<Qt::DropActions>(callback_return_value);
	}

	friend int QAbstractItemModel_virtualbase_supportedDragActions(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> handle__insertRows;

	// Subclass to allow providing a Go implementation
	virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
		if (!handle__insertRows) {
			return QAbstractItemModel::insertRows(row, count, parent);
		}

		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_insertRows(this, handle__insertRows.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QAbstractItemModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> handle__insertColumns;

	// Subclass to allow providing a Go implementation
	virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
		if (!handle__insertColumns) {
			return QAbstractItemModel::insertColumns(column, count, parent);
		}

		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_insertColumns(this, handle__insertColumns.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QAbstractItemModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> handle__removeRows;

	// Subclass to allow providing a Go implementation
	virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
		if (!handle__removeRows) {
			return QAbstractItemModel::removeRows(row, count, parent);
		}

		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_removeRows(this, handle__removeRows.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QAbstractItemModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> handle__removeColumns;

	// Subclass to allow providing a Go implementation
	virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
		if (!handle__removeColumns) {
			return QAbstractItemModel::removeColumns(column, count, parent);
		}

		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_removeColumns(this, handle__removeColumns.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QAbstractItemModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> handle__moveRows;

	// Subclass to allow providing a Go implementation
	virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (!handle__moveRows) {
			return QAbstractItemModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
		}

		const QModelIndex& sourceParent_ret = sourceParent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&sourceParent_ret);
		int sigval2 = sourceRow;
		int sigval3 = count;
		const QModelIndex& destinationParent_ret = destinationParent;
		// Cast returned reference into pointer
		QModelIndex* sigval4 = const_cast<QModelIndex*>(&destinationParent_ret);
		int sigval5 = destinationChild;
		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_moveRows(this, handle__moveRows.value(), sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QAbstractItemModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> handle__moveColumns;

	// Subclass to allow providing a Go implementation
	virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (!handle__moveColumns) {
			return QAbstractItemModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
		}

		const QModelIndex& sourceParent_ret = sourceParent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&sourceParent_ret);
		int sigval2 = sourceColumn;
		int sigval3 = count;
		const QModelIndex& destinationParent_ret = destinationParent;
		// Cast returned reference into pointer
		QModelIndex* sigval4 = const_cast<QModelIndex*>(&destinationParent_ret);
		int sigval5 = destinationChild;
		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_moveColumns(this, handle__moveColumns.value(), sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QAbstractItemModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> handle__fetchMore;

	// Subclass to allow providing a Go implementation
	virtual void fetchMore(const QModelIndex& parent) override {
		if (!handle__fetchMore) {
			QAbstractItemModel::fetchMore(parent);
			return;
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		miqt_exec_callback_QAbstractItemModel_fetchMore(this, handle__fetchMore.value(), sigval1);

	}

	friend void QAbstractItemModel_virtualbase_fetchMore(void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> handle__canFetchMore;

	// Subclass to allow providing a Go implementation
	virtual bool canFetchMore(const QModelIndex& parent) const override {
		if (!handle__canFetchMore) {
			return QAbstractItemModel::canFetchMore(parent);
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_canFetchMore(this, handle__canFetchMore.value(), sigval1);
		return callback_return_value;
	}

	friend bool QAbstractItemModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> handle__flags;

	// Subclass to allow providing a Go implementation
	virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
		if (!handle__flags) {
			return QAbstractItemModel::flags(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		int callback_return_value = miqt_exec_callback_QAbstractItemModel_flags(this, handle__flags.value(), sigval1);
		return static_cast<Qt::ItemFlags>(callback_return_value);
	}

	friend int QAbstractItemModel_virtualbase_flags(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> handle__sort;

	// Subclass to allow providing a Go implementation
	virtual void sort(int column, Qt::SortOrder order) override {
		if (!handle__sort) {
			QAbstractItemModel::sort(column, order);
			return;
		}

		int sigval1 = column;
		Qt::SortOrder order_ret = order;
		int sigval2 = static_cast<int>(order_ret);
		miqt_exec_callback_QAbstractItemModel_sort(this, handle__sort.value(), sigval1, sigval2);

	}

	friend void QAbstractItemModel_virtualbase_sort(void* self, int column, int order);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> handle__buddy;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex buddy(const QModelIndex& index) const override {
		if (!handle__buddy) {
			return QAbstractItemModel::buddy(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractItemModel_buddy(this, handle__buddy.value(), sigval1);
		return *callback_return_value;
	}

	friend QModelIndex* QAbstractItemModel_virtualbase_buddy(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> handle__match;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
		if (!handle__match) {
			return QAbstractItemModel::match(start, role, value, hits, flags);
		}

		const QModelIndex& start_ret = start;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&start_ret);
		int sigval2 = role;
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval3 = const_cast<QVariant*>(&value_ret);
		int sigval4 = hits;
		Qt::MatchFlags flags_ret = flags;
		int sigval5 = static_cast<int>(flags_ret);
		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QAbstractItemModel_match(this, handle__match.value(), sigval1, sigval2, sigval3, sigval4, sigval5);
		QModelIndexList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QModelIndex** callback_return_value_arr = static_cast<QModelIndex**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(*(callback_return_value_arr[i]));
		}
		free(callback_return_value.data);
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of QModelIndex* */  QAbstractItemModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> handle__span;

	// Subclass to allow providing a Go implementation
	virtual QSize span(const QModelIndex& index) const override {
		if (!handle__span) {
			return QAbstractItemModel::span(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QSize* callback_return_value = miqt_exec_callback_QAbstractItemModel_span(this, handle__span.value(), sigval1);
		return *callback_return_value;
	}

	friend QSize* QAbstractItemModel_virtualbase_span(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> handle__roleNames;

	// Subclass to allow providing a Go implementation
	virtual QHash<int, QByteArray> roleNames() const override {
		if (!handle__roleNames) {
			return QAbstractItemModel::roleNames();
		}

		struct miqt_map /* of int to struct miqt_string */  callback_return_value = miqt_exec_callback_QAbstractItemModel_roleNames(this, handle__roleNames.value());
		QHash<int, QByteArray> callback_return_value_QMap;
		callback_return_value_QMap.reserve(callback_return_value.len);
		int* callback_return_value_karr = static_cast<int*>(callback_return_value.keys);
		struct miqt_string* callback_return_value_varr = static_cast<struct miqt_string*>(callback_return_value.values);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QByteArray callback_return_value_varr_i_QByteArray(callback_return_value_varr[i].data, callback_return_value_varr[i].len);
			callback_return_value_QMap[static_cast<int>(callback_return_value_karr[i])] = callback_return_value_varr_i_QByteArray;
		}
		return callback_return_value_QMap;
	}

	friend struct miqt_map /* of int to struct miqt_string */  QAbstractItemModel_virtualbase_roleNames(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> handle__submit;

	// Subclass to allow providing a Go implementation
	virtual bool submit() override {
		if (!handle__submit) {
			return QAbstractItemModel::submit();
		}

		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_submit(this, handle__submit.value());
		return callback_return_value;
	}

	friend bool QAbstractItemModel_virtualbase_submit(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> handle__revert;

	// Subclass to allow providing a Go implementation
	virtual void revert() override {
		if (!handle__revert) {
			QAbstractItemModel::revert();
			return;
		}

		miqt_exec_callback_QAbstractItemModel_revert(this, handle__revert.value());

	}

	friend void QAbstractItemModel_virtualbase_revert(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QAbstractItemModel::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QAbstractItemModel_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QAbstractItemModel::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QAbstractItemModel_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QAbstractItemModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QAbstractItemModel::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QAbstractItemModel_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QAbstractItemModel_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QAbstractItemModel::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QAbstractItemModel_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QAbstractItemModel_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QAbstractItemModel::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QAbstractItemModel_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QAbstractItemModel_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QAbstractItemModel::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QAbstractItemModel_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QAbstractItemModel_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QAbstractItemModel::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QAbstractItemModel_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QAbstractItemModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QAbstractItemModel_protectedbase_resetInternalData(bool* _dynamic_cast_ok, void* self);
	friend QModelIndex* QAbstractItemModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column);
	friend QModelIndex* QAbstractItemModel_protectedbase_createIndex2(bool* _dynamic_cast_ok, const void* self, int row, int column, uintptr_t id);
	friend void QAbstractItemModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream);
	friend bool QAbstractItemModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream);
	friend void QAbstractItemModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QAbstractItemModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractItemModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QAbstractItemModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self);
	friend bool QAbstractItemModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow);
	friend void QAbstractItemModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractItemModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QAbstractItemModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractItemModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QAbstractItemModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self);
	friend bool QAbstractItemModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn);
	friend void QAbstractItemModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractItemModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractItemModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractItemModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to);
	friend void QAbstractItemModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to);
	friend struct miqt_array /* of QModelIndex* */  QAbstractItemModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self);
	friend QModelIndex* QAbstractItemModel_protectedbase_createIndex3(bool* _dynamic_cast_ok, const void* self, int row, int column, void* data);
	friend QObject* QAbstractItemModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractItemModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractItemModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAbstractItemModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QAbstractItemModel* QAbstractItemModel_new() {
	return new (std::nothrow) MiqtVirtualQAbstractItemModel();
}

QAbstractItemModel* QAbstractItemModel_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQAbstractItemModel(parent);
}

void QAbstractItemModel_virtbase(QAbstractItemModel* src, QObject** outptr_QObject) {
	*outptr_QObject = static_cast<QObject*>(src);
}

QMetaObject* QAbstractItemModel_metaObject(const QAbstractItemModel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractItemModel_metacast(QAbstractItemModel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractItemModel_tr(const char* s) {
	QString _ret = QAbstractItemModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractItemModel_trUtf8(const char* s) {
	QString _ret = QAbstractItemModel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractItemModel_hasIndex(const QAbstractItemModel* self, int row, int column) {
	return self->hasIndex(static_cast<int>(row), static_cast<int>(column));
}

QModelIndex* QAbstractItemModel_index(const QAbstractItemModel* self, int row, int column, QModelIndex* parent) {
	return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

QModelIndex* QAbstractItemModel_parent(const QAbstractItemModel* self, QModelIndex* child) {
	return new QModelIndex(self->parent(*child));
}

QModelIndex* QAbstractItemModel_sibling(const QAbstractItemModel* self, int row, int column, QModelIndex* idx) {
	return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

int QAbstractItemModel_rowCount(const QAbstractItemModel* self, QModelIndex* parent) {
	return self->rowCount(*parent);
}

int QAbstractItemModel_columnCount(const QAbstractItemModel* self, QModelIndex* parent) {
	return self->columnCount(*parent);
}

bool QAbstractItemModel_hasChildren(const QAbstractItemModel* self, QModelIndex* parent) {
	return self->hasChildren(*parent);
}

QVariant* QAbstractItemModel_data(const QAbstractItemModel* self, QModelIndex* index, int role) {
	return new QVariant(self->data(*index, static_cast<int>(role)));
}

bool QAbstractItemModel_setData(QAbstractItemModel* self, QModelIndex* index, QVariant* value, int role) {
	return self->setData(*index, *value, static_cast<int>(role));
}

QVariant* QAbstractItemModel_headerData(const QAbstractItemModel* self, int section, int orientation, int role) {
	return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

bool QAbstractItemModel_setHeaderData(QAbstractItemModel* self, int section, int orientation, QVariant* value, int role) {
	return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

struct miqt_map /* of int to QVariant* */  QAbstractItemModel_itemData(const QAbstractItemModel* self, QModelIndex* index) {
	QMap<int, QVariant> _ret = self->itemData(*index);
	// Convert QMap<> from C++ memory to manually-managed C memory
	int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
	QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		_karr[_ctr] = _itr->first;
		_varr[_ctr] = new QVariant(_itr->second);
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

bool QAbstractItemModel_setItemData(QAbstractItemModel* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
	QMap<int, QVariant> roles_QMap;
	int* roles_karr = static_cast<int*>(roles.keys);
	QVariant** roles_varr = static_cast<QVariant**>(roles.values);
	for(size_t i = 0; i < roles.len; ++i) {
		roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
	}
	return self->setItemData(*index, roles_QMap);
}

struct miqt_array /* of struct miqt_string */  QAbstractItemModel_mimeTypes(const QAbstractItemModel* self) {
	QStringList _ret = self->mimeTypes();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QMimeData* QAbstractItemModel_mimeData(const QAbstractItemModel* self, struct miqt_array /* of QModelIndex* */  indexes) {
	QModelIndexList indexes_QList;
	indexes_QList.reserve(indexes.len);
	QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
	for(size_t i = 0; i < indexes.len; ++i) {
		indexes_QList.push_back(*(indexes_arr[i]));
	}
	return self->mimeData(indexes_QList);
}

bool QAbstractItemModel_canDropMimeData(const QAbstractItemModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QAbstractItemModel_dropMimeData(QAbstractItemModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

int QAbstractItemModel_supportedDropActions(const QAbstractItemModel* self) {
	Qt::DropActions _ret = self->supportedDropActions();
	return static_cast<int>(_ret);
}

int QAbstractItemModel_supportedDragActions(const QAbstractItemModel* self) {
	Qt::DropActions _ret = self->supportedDragActions();
	return static_cast<int>(_ret);
}

bool QAbstractItemModel_insertRows(QAbstractItemModel* self, int row, int count, QModelIndex* parent) {
	return self->insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QAbstractItemModel_insertColumns(QAbstractItemModel* self, int column, int count, QModelIndex* parent) {
	return self->insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QAbstractItemModel_removeRows(QAbstractItemModel* self, int row, int count, QModelIndex* parent) {
	return self->removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QAbstractItemModel_removeColumns(QAbstractItemModel* self, int column, int count, QModelIndex* parent) {
	return self->removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QAbstractItemModel_moveRows(QAbstractItemModel* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return self->moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QAbstractItemModel_moveColumns(QAbstractItemModel* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
	return self->moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QAbstractItemModel_insertRow(QAbstractItemModel* self, int row) {
	return self->insertRow(static_cast<int>(row));
}

bool QAbstractItemModel_insertColumn(QAbstractItemModel* self, int column) {
	return self->insertColumn(static_cast<int>(column));
}

bool QAbstractItemModel_removeRow(QAbstractItemModel* self, int row) {
	return self->removeRow(static_cast<int>(row));
}

bool QAbstractItemModel_removeColumn(QAbstractItemModel* self, int column) {
	return self->removeColumn(static_cast<int>(column));
}

bool QAbstractItemModel_moveRow(QAbstractItemModel* self, QModelIndex* sourceParent, int sourceRow, QModelIndex* destinationParent, int destinationChild) {
	return self->moveRow(*sourceParent, static_cast<int>(sourceRow), *destinationParent, static_cast<int>(destinationChild));
}

bool QAbstractItemModel_moveColumn(QAbstractItemModel* self, QModelIndex* sourceParent, int sourceColumn, QModelIndex* destinationParent, int destinationChild) {
	return self->moveColumn(*sourceParent, static_cast<int>(sourceColumn), *destinationParent, static_cast<int>(destinationChild));
}

void QAbstractItemModel_fetchMore(QAbstractItemModel* self, QModelIndex* parent) {
	self->fetchMore(*parent);
}

bool QAbstractItemModel_canFetchMore(const QAbstractItemModel* self, QModelIndex* parent) {
	return self->canFetchMore(*parent);
}

int QAbstractItemModel_flags(const QAbstractItemModel* self, QModelIndex* index) {
	Qt::ItemFlags _ret = self->flags(*index);
	return static_cast<int>(_ret);
}

void QAbstractItemModel_sort(QAbstractItemModel* self, int column, int order) {
	self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

QModelIndex* QAbstractItemModel_buddy(const QAbstractItemModel* self, QModelIndex* index) {
	return new QModelIndex(self->buddy(*index));
}

struct miqt_array /* of QModelIndex* */  QAbstractItemModel_match(const QAbstractItemModel* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
	QModelIndexList _ret = self->match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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

QSize* QAbstractItemModel_span(const QAbstractItemModel* self, QModelIndex* index) {
	return new QSize(self->span(*index));
}

struct miqt_map /* of int to struct miqt_string */  QAbstractItemModel_roleNames(const QAbstractItemModel* self) {
	QHash<int, QByteArray> _ret = self->roleNames();
	// Convert QMap<> from C++ memory to manually-managed C memory
	int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
	struct miqt_string* _varr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		_karr[_ctr] = _itr->first;
		QByteArray _hashval_qb = _itr->second;
		struct miqt_string _hashval_ms;
		_hashval_ms.len = _hashval_qb.length();
		_hashval_ms.data = static_cast<char*>(malloc(_hashval_ms.len));
		memcpy(_hashval_ms.data, _hashval_qb.data(), _hashval_ms.len);
		_varr[_ctr] = _hashval_ms;
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

bool QAbstractItemModel_checkIndex(const QAbstractItemModel* self, QModelIndex* index) {
	return self->checkIndex(*index);
}

void QAbstractItemModel_dataChanged(QAbstractItemModel* self, QModelIndex* topLeft, QModelIndex* bottomRight) {
	self->dataChanged(*topLeft, *bottomRight);
}

void* QAbstractItemModel_connect_dataChanged(QAbstractItemModel* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel>>(slot);
	return new QMetaObject::Connection(QAbstractItemModel::connect(self, static_cast<void (QAbstractItemModel::*)(const QModelIndex&, const QModelIndex&, const QVector<int>&)>(&QAbstractItemModel::dataChanged), self, [slot_handle](const QModelIndex& topLeft, const QModelIndex& bottomRight) {
		intptr_t slot = slot_handle->value();
		const QModelIndex& topLeft_ret = topLeft;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&topLeft_ret);
		const QModelIndex& bottomRight_ret = bottomRight;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&bottomRight_ret);
		miqt_exec_callback_QAbstractItemModel_dataChanged(slot, sigval1, sigval2);
	}));
}

void QAbstractItemModel_headerDataChanged(QAbstractItemModel* self, int orientation, int first, int last) {
	self->headerDataChanged(static_cast<Qt::Orientation>(orientation), static_cast<int>(first), static_cast<int>(last));
}

void* QAbstractItemModel_connect_headerDataChanged(QAbstractItemModel* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel>>(slot);
	return new QMetaObject::Connection(QAbstractItemModel::connect(self, static_cast<void (QAbstractItemModel::*)(Qt::Orientation, int, int)>(&QAbstractItemModel::headerDataChanged), self, [slot_handle](Qt::Orientation orientation, int first, int last) {
		intptr_t slot = slot_handle->value();
		Qt::Orientation orientation_ret = orientation;
		int sigval1 = static_cast<int>(orientation_ret);
		int sigval2 = first;
		int sigval3 = last;
		miqt_exec_callback_QAbstractItemModel_headerDataChanged(slot, sigval1, sigval2, sigval3);
	}));
}

void QAbstractItemModel_layoutChanged(QAbstractItemModel* self) {
	self->layoutChanged();
}

void* QAbstractItemModel_connect_layoutChanged(QAbstractItemModel* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel>>(slot);
	return new QMetaObject::Connection(QAbstractItemModel::connect(self, static_cast<void (QAbstractItemModel::*)(const QList<QPersistentModelIndex>&, QAbstractItemModel::LayoutChangeHint)>(&QAbstractItemModel::layoutChanged), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QAbstractItemModel_layoutChanged(slot);
	}));
}

void QAbstractItemModel_layoutAboutToBeChanged(QAbstractItemModel* self) {
	self->layoutAboutToBeChanged();
}

void* QAbstractItemModel_connect_layoutAboutToBeChanged(QAbstractItemModel* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel>>(slot);
	return new QMetaObject::Connection(QAbstractItemModel::connect(self, static_cast<void (QAbstractItemModel::*)(const QList<QPersistentModelIndex>&, QAbstractItemModel::LayoutChangeHint)>(&QAbstractItemModel::layoutAboutToBeChanged), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QAbstractItemModel_layoutAboutToBeChanged(slot);
	}));
}

bool QAbstractItemModel_submit(QAbstractItemModel* self) {
	return self->submit();
}

void QAbstractItemModel_revert(QAbstractItemModel* self) {
	self->revert();
}

struct miqt_string QAbstractItemModel_tr2(const char* s, const char* c) {
	QString _ret = QAbstractItemModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractItemModel_tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractItemModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractItemModel_trUtf82(const char* s, const char* c) {
	QString _ret = QAbstractItemModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractItemModel_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractItemModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractItemModel_hasIndex2(const QAbstractItemModel* self, int row, int column, QModelIndex* parent) {
	return self->hasIndex(static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QAbstractItemModel_insertRow2(QAbstractItemModel* self, int row, QModelIndex* parent) {
	return self->insertRow(static_cast<int>(row), *parent);
}

bool QAbstractItemModel_insertColumn2(QAbstractItemModel* self, int column, QModelIndex* parent) {
	return self->insertColumn(static_cast<int>(column), *parent);
}

bool QAbstractItemModel_removeRow2(QAbstractItemModel* self, int row, QModelIndex* parent) {
	return self->removeRow(static_cast<int>(row), *parent);
}

bool QAbstractItemModel_removeColumn2(QAbstractItemModel* self, int column, QModelIndex* parent) {
	return self->removeColumn(static_cast<int>(column), *parent);
}

bool QAbstractItemModel_checkIndex2(const QAbstractItemModel* self, QModelIndex* index, int options) {
	return self->checkIndex(*index, static_cast<QAbstractItemModel::CheckIndexOptions>(options));
}

void QAbstractItemModel_dataChanged2(QAbstractItemModel* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
	QVector<int> roles_QList;
	roles_QList.reserve(roles.len);
	int* roles_arr = static_cast<int*>(roles.data);
	for(size_t i = 0; i < roles.len; ++i) {
		roles_QList.push_back(static_cast<int>(roles_arr[i]));
	}
	self->dataChanged(*topLeft, *bottomRight, roles_QList);
}

void* QAbstractItemModel_connect_dataChanged2(QAbstractItemModel* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel>>(slot);
	return new QMetaObject::Connection(QAbstractItemModel::connect(self, static_cast<void (QAbstractItemModel::*)(const QModelIndex&, const QModelIndex&, const QVector<int>&)>(&QAbstractItemModel::dataChanged), self, [slot_handle](const QModelIndex& topLeft, const QModelIndex& bottomRight, const QVector<int>& roles) {
		intptr_t slot = slot_handle->value();
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
		miqt_exec_callback_QAbstractItemModel_dataChanged2(slot, sigval1, sigval2, sigval3);
	}));
}

void QAbstractItemModel_layoutChangedWithParents(QAbstractItemModel* self, struct miqt_array /* of QPersistentModelIndex* */  parents) {
	QList<QPersistentModelIndex> parents_QList;
	parents_QList.reserve(parents.len);
	QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(parents.data);
	for(size_t i = 0; i < parents.len; ++i) {
		parents_QList.push_back(*(parents_arr[i]));
	}
	self->layoutChanged(parents_QList);
}

void* QAbstractItemModel_connect_layoutChangedWithParents(QAbstractItemModel* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel>>(slot);
	return new QMetaObject::Connection(QAbstractItemModel::connect(self, static_cast<void (QAbstractItemModel::*)(const QList<QPersistentModelIndex>&, QAbstractItemModel::LayoutChangeHint)>(&QAbstractItemModel::layoutChanged), self, [slot_handle](const QList<QPersistentModelIndex>& parents) {
		intptr_t slot = slot_handle->value();
		const QList<QPersistentModelIndex>& parents_ret = parents;
		// Convert QList<> from C++ memory to manually-managed C memory
		QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(malloc(sizeof(QPersistentModelIndex*) * parents_ret.length()));
		for (size_t i = 0, e = parents_ret.length(); i < e; ++i) {
			parents_arr[i] = new QPersistentModelIndex(parents_ret[i]);
		}
		struct miqt_array parents_out;
		parents_out.len = parents_ret.length();
		parents_out.data = static_cast<void*>(parents_arr);
		struct miqt_array /* of QPersistentModelIndex* */  sigval1 = parents_out;
		miqt_exec_callback_QAbstractItemModel_layoutChangedWithParents(slot, sigval1);
	}));
}

void QAbstractItemModel_layoutChanged2(QAbstractItemModel* self, struct miqt_array /* of QPersistentModelIndex* */  parents, int hint) {
	QList<QPersistentModelIndex> parents_QList;
	parents_QList.reserve(parents.len);
	QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(parents.data);
	for(size_t i = 0; i < parents.len; ++i) {
		parents_QList.push_back(*(parents_arr[i]));
	}
	self->layoutChanged(parents_QList, static_cast<QAbstractItemModel::LayoutChangeHint>(hint));
}

void* QAbstractItemModel_connect_layoutChanged2(QAbstractItemModel* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel>>(slot);
	return new QMetaObject::Connection(QAbstractItemModel::connect(self, static_cast<void (QAbstractItemModel::*)(const QList<QPersistentModelIndex>&, QAbstractItemModel::LayoutChangeHint)>(&QAbstractItemModel::layoutChanged), self, [slot_handle](const QList<QPersistentModelIndex>& parents, QAbstractItemModel::LayoutChangeHint hint) {
		intptr_t slot = slot_handle->value();
		const QList<QPersistentModelIndex>& parents_ret = parents;
		// Convert QList<> from C++ memory to manually-managed C memory
		QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(malloc(sizeof(QPersistentModelIndex*) * parents_ret.length()));
		for (size_t i = 0, e = parents_ret.length(); i < e; ++i) {
			parents_arr[i] = new QPersistentModelIndex(parents_ret[i]);
		}
		struct miqt_array parents_out;
		parents_out.len = parents_ret.length();
		parents_out.data = static_cast<void*>(parents_arr);
		struct miqt_array /* of QPersistentModelIndex* */  sigval1 = parents_out;
		QAbstractItemModel::LayoutChangeHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);
		miqt_exec_callback_QAbstractItemModel_layoutChanged2(slot, sigval1, sigval2);
	}));
}

void QAbstractItemModel_layoutAboutToBeChangedWithParents(QAbstractItemModel* self, struct miqt_array /* of QPersistentModelIndex* */  parents) {
	QList<QPersistentModelIndex> parents_QList;
	parents_QList.reserve(parents.len);
	QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(parents.data);
	for(size_t i = 0; i < parents.len; ++i) {
		parents_QList.push_back(*(parents_arr[i]));
	}
	self->layoutAboutToBeChanged(parents_QList);
}

void* QAbstractItemModel_connect_layoutAboutToBeChangedWithParents(QAbstractItemModel* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel>>(slot);
	return new QMetaObject::Connection(QAbstractItemModel::connect(self, static_cast<void (QAbstractItemModel::*)(const QList<QPersistentModelIndex>&, QAbstractItemModel::LayoutChangeHint)>(&QAbstractItemModel::layoutAboutToBeChanged), self, [slot_handle](const QList<QPersistentModelIndex>& parents) {
		intptr_t slot = slot_handle->value();
		const QList<QPersistentModelIndex>& parents_ret = parents;
		// Convert QList<> from C++ memory to manually-managed C memory
		QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(malloc(sizeof(QPersistentModelIndex*) * parents_ret.length()));
		for (size_t i = 0, e = parents_ret.length(); i < e; ++i) {
			parents_arr[i] = new QPersistentModelIndex(parents_ret[i]);
		}
		struct miqt_array parents_out;
		parents_out.len = parents_ret.length();
		parents_out.data = static_cast<void*>(parents_arr);
		struct miqt_array /* of QPersistentModelIndex* */  sigval1 = parents_out;
		miqt_exec_callback_QAbstractItemModel_layoutAboutToBeChangedWithParents(slot, sigval1);
	}));
}

void QAbstractItemModel_layoutAboutToBeChanged2(QAbstractItemModel* self, struct miqt_array /* of QPersistentModelIndex* */  parents, int hint) {
	QList<QPersistentModelIndex> parents_QList;
	parents_QList.reserve(parents.len);
	QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(parents.data);
	for(size_t i = 0; i < parents.len; ++i) {
		parents_QList.push_back(*(parents_arr[i]));
	}
	self->layoutAboutToBeChanged(parents_QList, static_cast<QAbstractItemModel::LayoutChangeHint>(hint));
}

void* QAbstractItemModel_connect_layoutAboutToBeChanged2(QAbstractItemModel* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel>>(slot);
	return new QMetaObject::Connection(QAbstractItemModel::connect(self, static_cast<void (QAbstractItemModel::*)(const QList<QPersistentModelIndex>&, QAbstractItemModel::LayoutChangeHint)>(&QAbstractItemModel::layoutAboutToBeChanged), self, [slot_handle](const QList<QPersistentModelIndex>& parents, QAbstractItemModel::LayoutChangeHint hint) {
		intptr_t slot = slot_handle->value();
		const QList<QPersistentModelIndex>& parents_ret = parents;
		// Convert QList<> from C++ memory to manually-managed C memory
		QPersistentModelIndex** parents_arr = static_cast<QPersistentModelIndex**>(malloc(sizeof(QPersistentModelIndex*) * parents_ret.length()));
		for (size_t i = 0, e = parents_ret.length(); i < e; ++i) {
			parents_arr[i] = new QPersistentModelIndex(parents_ret[i]);
		}
		struct miqt_array parents_out;
		parents_out.len = parents_ret.length();
		parents_out.data = static_cast<void*>(parents_arr);
		struct miqt_array /* of QPersistentModelIndex* */  sigval1 = parents_out;
		QAbstractItemModel::LayoutChangeHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);
		miqt_exec_callback_QAbstractItemModel_layoutAboutToBeChanged2(slot, sigval1, sigval2);
	}));
}

bool QAbstractItemModel_override_virtual_index(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> slot_handle(slot);
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__index = std::move(slot_handle);
	return true;
}

bool QAbstractItemModel_override_virtual_parent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> slot_handle(slot);
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__parent = std::move(slot_handle);
	return true;
}

bool QAbstractItemModel_override_virtual_sibling(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> slot_handle(slot);
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sibling = std::move(slot_handle);
	return true;
}

QModelIndex* QAbstractItemModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx) {
	return new QModelIndex(static_cast<const MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

bool QAbstractItemModel_override_virtual_rowCount(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> slot_handle(slot);
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__rowCount = std::move(slot_handle);
	return true;
}

bool QAbstractItemModel_override_virtual_columnCount(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> slot_handle(slot);
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__columnCount = std::move(slot_handle);
	return true;
}

bool QAbstractItemModel_override_virtual_hasChildren(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> slot_handle(slot);
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasChildren = std::move(slot_handle);
	return true;
}

bool QAbstractItemModel_virtualbase_hasChildren(const void* self, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::hasChildren(*parent);
}

bool QAbstractItemModel_override_virtual_data(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> slot_handle(slot);
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__data = std::move(slot_handle);
	return true;
}

bool QAbstractItemModel_override_virtual_setData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> slot_handle(slot);
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setData = std::move(slot_handle);
	return true;
}

bool QAbstractItemModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role) {
	return static_cast<MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::setData(*index, *value, static_cast<int>(role));
}

bool QAbstractItemModel_override_virtual_headerData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> slot_handle(slot);
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__headerData = std::move(slot_handle);
	return true;
}

QVariant* QAbstractItemModel_virtualbase_headerData(const void* self, int section, int orientation, int role) {
	return new QVariant(static_cast<const MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

bool QAbstractItemModel_override_virtual_setHeaderData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> slot_handle(slot);
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setHeaderData = std::move(slot_handle);
	return true;
}

bool QAbstractItemModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role) {
	return static_cast<MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

bool QAbstractItemModel_override_virtual_itemData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> slot_handle(slot);
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__itemData = std::move(slot_handle);
	return true;
}

struct miqt_map /* of int to QVariant* */  QAbstractItemModel_virtualbase_itemData(const void* self, QModelIndex* index) {
	QMap<int, QVariant> _ret = static_cast<const MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::itemData(*index);
	// Convert QMap<> from C++ memory to manually-managed C memory
	int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
	QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		_karr[_ctr] = _itr->first;
		_varr[_ctr] = new QVariant(_itr->second);
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

bool QAbstractItemModel_override_virtual_setItemData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> slot_handle(slot);
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setItemData = std::move(slot_handle);
	return true;
}

bool QAbstractItemModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
	QMap<int, QVariant> roles_QMap;
	int* roles_karr = static_cast<int*>(roles.keys);
	QVariant** roles_varr = static_cast<QVariant**>(roles.values);
	for(size_t i = 0; i < roles.len; ++i) {
		roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
	}
	return static_cast<MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::setItemData(*index, roles_QMap);
}

bool QAbstractItemModel_override_virtual_mimeTypes(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> slot_handle(slot);
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mimeTypes = std::move(slot_handle);
	return true;
}

struct miqt_array /* of struct miqt_string */  QAbstractItemModel_virtualbase_mimeTypes(const void* self) {
	QStringList _ret = static_cast<const MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::mimeTypes();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QAbstractItemModel_override_virtual_mimeData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> slot_handle(slot);
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mimeData = std::move(slot_handle);
	return true;
}

QMimeData* QAbstractItemModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes) {
	QModelIndexList indexes_QList;
	indexes_QList.reserve(indexes.len);
	QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
	for(size_t i = 0; i < indexes.len; ++i) {
		indexes_QList.push_back(*(indexes_arr[i]));
	}
	return static_cast<const MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::mimeData(indexes_QList);
}

bool QAbstractItemModel_override_virtual_canDropMimeData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> slot_handle(slot);
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__canDropMimeData = std::move(slot_handle);
	return true;
}

bool QAbstractItemModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QAbstractItemModel_override_virtual_dropMimeData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> slot_handle(slot);
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropMimeData = std::move(slot_handle);
	return true;
}

bool QAbstractItemModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return static_cast<MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QAbstractItemModel_override_virtual_supportedDropActions(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> slot_handle(slot);
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__supportedDropActions = std::move(slot_handle);
	return true;
}

int QAbstractItemModel_virtualbase_supportedDropActions(const void* self) {
	Qt::DropActions _ret = static_cast<const MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::supportedDropActions();
	return static_cast<int>(_ret);
}

bool QAbstractItemModel_override_virtual_supportedDragActions(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> slot_handle(slot);
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__supportedDragActions = std::move(slot_handle);
	return true;
}

int QAbstractItemModel_virtualbase_supportedDragActions(const void* self) {
	Qt::DropActions _ret = static_cast<const MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::supportedDragActions();
	return static_cast<int>(_ret);
}

bool QAbstractItemModel_override_virtual_insertRows(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> slot_handle(slot);
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__insertRows = std::move(slot_handle);
	return true;
}

bool QAbstractItemModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QAbstractItemModel_override_virtual_insertColumns(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> slot_handle(slot);
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__insertColumns = std::move(slot_handle);
	return true;
}

bool QAbstractItemModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QAbstractItemModel_override_virtual_removeRows(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> slot_handle(slot);
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__removeRows = std::move(slot_handle);
	return true;
}

bool QAbstractItemModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QAbstractItemModel_override_virtual_removeColumns(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> slot_handle(slot);
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__removeColumns = std::move(slot_handle);
	return true;
}

bool QAbstractItemModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QAbstractItemModel_override_virtual_moveRows(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> slot_handle(slot);
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveRows = std::move(slot_handle);
	return true;
}

bool QAbstractItemModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return static_cast<MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QAbstractItemModel_override_virtual_moveColumns(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> slot_handle(slot);
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveColumns = std::move(slot_handle);
	return true;
}

bool QAbstractItemModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
	return static_cast<MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QAbstractItemModel_override_virtual_fetchMore(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> slot_handle(slot);
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__fetchMore = std::move(slot_handle);
	return true;
}

void QAbstractItemModel_virtualbase_fetchMore(void* self, QModelIndex* parent) {
	static_cast<MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::fetchMore(*parent);
}

bool QAbstractItemModel_override_virtual_canFetchMore(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> slot_handle(slot);
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__canFetchMore = std::move(slot_handle);
	return true;
}

bool QAbstractItemModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::canFetchMore(*parent);
}

bool QAbstractItemModel_override_virtual_flags(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> slot_handle(slot);
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__flags = std::move(slot_handle);
	return true;
}

int QAbstractItemModel_virtualbase_flags(const void* self, QModelIndex* index) {
	Qt::ItemFlags _ret = static_cast<const MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::flags(*index);
	return static_cast<int>(_ret);
}

bool QAbstractItemModel_override_virtual_sort(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> slot_handle(slot);
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sort = std::move(slot_handle);
	return true;
}

void QAbstractItemModel_virtualbase_sort(void* self, int column, int order) {
	static_cast<MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

bool QAbstractItemModel_override_virtual_buddy(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> slot_handle(slot);
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__buddy = std::move(slot_handle);
	return true;
}

QModelIndex* QAbstractItemModel_virtualbase_buddy(const void* self, QModelIndex* index) {
	return new QModelIndex(static_cast<const MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::buddy(*index));
}

bool QAbstractItemModel_override_virtual_match(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> slot_handle(slot);
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__match = std::move(slot_handle);
	return true;
}

struct miqt_array /* of QModelIndex* */  QAbstractItemModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
	QModelIndexList _ret = static_cast<const MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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

bool QAbstractItemModel_override_virtual_span(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> slot_handle(slot);
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__span = std::move(slot_handle);
	return true;
}

QSize* QAbstractItemModel_virtualbase_span(const void* self, QModelIndex* index) {
	return new QSize(static_cast<const MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::span(*index));
}

bool QAbstractItemModel_override_virtual_roleNames(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> slot_handle(slot);
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__roleNames = std::move(slot_handle);
	return true;
}

struct miqt_map /* of int to struct miqt_string */  QAbstractItemModel_virtualbase_roleNames(const void* self) {
	QHash<int, QByteArray> _ret = static_cast<const MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::roleNames();
	// Convert QMap<> from C++ memory to manually-managed C memory
	int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
	struct miqt_string* _varr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		_karr[_ctr] = _itr->first;
		QByteArray _hashval_qb = _itr->second;
		struct miqt_string _hashval_ms;
		_hashval_ms.len = _hashval_qb.length();
		_hashval_ms.data = static_cast<char*>(malloc(_hashval_ms.len));
		memcpy(_hashval_ms.data, _hashval_qb.data(), _hashval_ms.len);
		_varr[_ctr] = _hashval_ms;
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

bool QAbstractItemModel_override_virtual_submit(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> slot_handle(slot);
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__submit = std::move(slot_handle);
	return true;
}

bool QAbstractItemModel_virtualbase_submit(void* self) {
	return static_cast<MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::submit();
}

bool QAbstractItemModel_override_virtual_revert(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> slot_handle(slot);
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__revert = std::move(slot_handle);
	return true;
}

void QAbstractItemModel_virtualbase_revert(void* self) {
	static_cast<MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::revert();
}

bool QAbstractItemModel_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> slot_handle(slot);
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QAbstractItemModel_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::event(event);
}

bool QAbstractItemModel_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> slot_handle(slot);
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QAbstractItemModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::eventFilter(watched, event);
}

bool QAbstractItemModel_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> slot_handle(slot);
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QAbstractItemModel_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::timerEvent(event);
}

bool QAbstractItemModel_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> slot_handle(slot);
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QAbstractItemModel_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::childEvent(event);
}

bool QAbstractItemModel_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> slot_handle(slot);
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QAbstractItemModel_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::customEvent(event);
}

bool QAbstractItemModel_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> slot_handle(slot);
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QAbstractItemModel_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::connectNotify(*signal);
}

bool QAbstractItemModel_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel> slot_handle(slot);
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QAbstractItemModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQAbstractItemModel*>(self)->QAbstractItemModel::disconnectNotify(*signal);
}

void QAbstractItemModel_protectedbase_resetInternalData(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->resetInternalData();
}

QModelIndex* QAbstractItemModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QModelIndex(self_cast->createIndex(static_cast<int>(row), static_cast<int>(column)));
}

QModelIndex* QAbstractItemModel_protectedbase_createIndex2(bool* _dynamic_cast_ok, const void* self, int row, int column, uintptr_t id) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QModelIndex(self_cast->createIndex(static_cast<int>(row), static_cast<int>(column), static_cast<quintptr>(id)));
}

void QAbstractItemModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
		QModelIndexList indexes_QList;
		indexes_QList.reserve(indexes.len);
		QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
		for(size_t i = 0; i < indexes.len; ++i) {
			indexes_QList.push_back(*(indexes_arr[i]));
		}
	self_cast->encodeData(indexes_QList, *stream);
}

bool QAbstractItemModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
}

void QAbstractItemModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QAbstractItemModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endInsertRows();
}

void QAbstractItemModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QAbstractItemModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endRemoveRows();
}

bool QAbstractItemModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
}

void QAbstractItemModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endMoveRows();
}

void QAbstractItemModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QAbstractItemModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endInsertColumns();
}

void QAbstractItemModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QAbstractItemModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endRemoveColumns();
}

bool QAbstractItemModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
}

void QAbstractItemModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endMoveColumns();
}

void QAbstractItemModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginResetModel();
}

void QAbstractItemModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endResetModel();
}

void QAbstractItemModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->changePersistentIndex(*from, *to);
}

void QAbstractItemModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
		QModelIndexList from_QList;
		from_QList.reserve(from.len);
		QModelIndex** from_arr = static_cast<QModelIndex**>(from.data);
		for(size_t i = 0; i < from.len; ++i) {
			from_QList.push_back(*(from_arr[i]));
		}
		QModelIndexList to_QList;
		to_QList.reserve(to.len);
		QModelIndex** to_arr = static_cast<QModelIndex**>(to.data);
		for(size_t i = 0; i < to.len; ++i) {
			to_QList.push_back(*(to_arr[i]));
		}
	self_cast->changePersistentIndexList(from_QList, to_QList);
}

struct miqt_array /* of QModelIndex* */  QAbstractItemModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (struct miqt_array){};
	}

	*_dynamic_cast_ok = true;
	QModelIndexList _ret = self_cast->persistentIndexList();
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

QModelIndex* QAbstractItemModel_protectedbase_createIndex3(bool* _dynamic_cast_ok, const void* self, int row, int column, void* data) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QModelIndex(self_cast->createIndex(static_cast<int>(row), static_cast<int>(column), data));
}

QObject* QAbstractItemModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QAbstractItemModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QAbstractItemModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QAbstractItemModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAbstractItemModel* self_cast = dynamic_cast<MiqtVirtualQAbstractItemModel*>( (QAbstractItemModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void* QAbstractItemModel_connect_rowsAboutToBeInserted(QAbstractItemModel* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel>>(slot);
	return new QMetaObject::Connection(QAbstractItemModel::connect(self, &QAbstractItemModel::rowsAboutToBeInserted, self, [slot_handle](const QModelIndex& parent, int first, int last) {
		intptr_t slot = slot_handle->value();
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = first;
		int sigval3 = last;
		miqt_exec_callback_QAbstractItemModel_rowsAboutToBeInserted(slot, sigval1, sigval2, sigval3);
	}));
}

void* QAbstractItemModel_connect_rowsInserted(QAbstractItemModel* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel>>(slot);
	return new QMetaObject::Connection(QAbstractItemModel::connect(self, &QAbstractItemModel::rowsInserted, self, [slot_handle](const QModelIndex& parent, int first, int last) {
		intptr_t slot = slot_handle->value();
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = first;
		int sigval3 = last;
		miqt_exec_callback_QAbstractItemModel_rowsInserted(slot, sigval1, sigval2, sigval3);
	}));
}

void* QAbstractItemModel_connect_rowsAboutToBeRemoved(QAbstractItemModel* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel>>(slot);
	return new QMetaObject::Connection(QAbstractItemModel::connect(self, &QAbstractItemModel::rowsAboutToBeRemoved, self, [slot_handle](const QModelIndex& parent, int first, int last) {
		intptr_t slot = slot_handle->value();
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = first;
		int sigval3 = last;
		miqt_exec_callback_QAbstractItemModel_rowsAboutToBeRemoved(slot, sigval1, sigval2, sigval3);
	}));
}

void* QAbstractItemModel_connect_rowsRemoved(QAbstractItemModel* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel>>(slot);
	return new QMetaObject::Connection(QAbstractItemModel::connect(self, &QAbstractItemModel::rowsRemoved, self, [slot_handle](const QModelIndex& parent, int first, int last) {
		intptr_t slot = slot_handle->value();
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = first;
		int sigval3 = last;
		miqt_exec_callback_QAbstractItemModel_rowsRemoved(slot, sigval1, sigval2, sigval3);
	}));
}

void* QAbstractItemModel_connect_columnsAboutToBeInserted(QAbstractItemModel* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel>>(slot);
	return new QMetaObject::Connection(QAbstractItemModel::connect(self, &QAbstractItemModel::columnsAboutToBeInserted, self, [slot_handle](const QModelIndex& parent, int first, int last) {
		intptr_t slot = slot_handle->value();
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = first;
		int sigval3 = last;
		miqt_exec_callback_QAbstractItemModel_columnsAboutToBeInserted(slot, sigval1, sigval2, sigval3);
	}));
}

void* QAbstractItemModel_connect_columnsInserted(QAbstractItemModel* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel>>(slot);
	return new QMetaObject::Connection(QAbstractItemModel::connect(self, &QAbstractItemModel::columnsInserted, self, [slot_handle](const QModelIndex& parent, int first, int last) {
		intptr_t slot = slot_handle->value();
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = first;
		int sigval3 = last;
		miqt_exec_callback_QAbstractItemModel_columnsInserted(slot, sigval1, sigval2, sigval3);
	}));
}

void* QAbstractItemModel_connect_columnsAboutToBeRemoved(QAbstractItemModel* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel>>(slot);
	return new QMetaObject::Connection(QAbstractItemModel::connect(self, &QAbstractItemModel::columnsAboutToBeRemoved, self, [slot_handle](const QModelIndex& parent, int first, int last) {
		intptr_t slot = slot_handle->value();
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = first;
		int sigval3 = last;
		miqt_exec_callback_QAbstractItemModel_columnsAboutToBeRemoved(slot, sigval1, sigval2, sigval3);
	}));
}

void* QAbstractItemModel_connect_columnsRemoved(QAbstractItemModel* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel>>(slot);
	return new QMetaObject::Connection(QAbstractItemModel::connect(self, &QAbstractItemModel::columnsRemoved, self, [slot_handle](const QModelIndex& parent, int first, int last) {
		intptr_t slot = slot_handle->value();
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = first;
		int sigval3 = last;
		miqt_exec_callback_QAbstractItemModel_columnsRemoved(slot, sigval1, sigval2, sigval3);
	}));
}

void* QAbstractItemModel_connect_modelAboutToBeReset(QAbstractItemModel* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel>>(slot);
	return new QMetaObject::Connection(QAbstractItemModel::connect(self, &QAbstractItemModel::modelAboutToBeReset, self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QAbstractItemModel_modelAboutToBeReset(slot);
	}));
}

void* QAbstractItemModel_connect_modelReset(QAbstractItemModel* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel>>(slot);
	return new QMetaObject::Connection(QAbstractItemModel::connect(self, &QAbstractItemModel::modelReset, self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QAbstractItemModel_modelReset(slot);
	}));
}

void* QAbstractItemModel_connect_rowsAboutToBeMoved(QAbstractItemModel* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel>>(slot);
	return new QMetaObject::Connection(QAbstractItemModel::connect(self, &QAbstractItemModel::rowsAboutToBeMoved, self, [slot_handle](const QModelIndex& sourceParent, int sourceStart, int sourceEnd, const QModelIndex& destinationParent, int destinationRow) {
		intptr_t slot = slot_handle->value();
		const QModelIndex& sourceParent_ret = sourceParent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&sourceParent_ret);
		int sigval2 = sourceStart;
		int sigval3 = sourceEnd;
		const QModelIndex& destinationParent_ret = destinationParent;
		// Cast returned reference into pointer
		QModelIndex* sigval4 = const_cast<QModelIndex*>(&destinationParent_ret);
		int sigval5 = destinationRow;
		miqt_exec_callback_QAbstractItemModel_rowsAboutToBeMoved(slot, sigval1, sigval2, sigval3, sigval4, sigval5);
	}));
}

void* QAbstractItemModel_connect_rowsMoved(QAbstractItemModel* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel>>(slot);
	return new QMetaObject::Connection(QAbstractItemModel::connect(self, &QAbstractItemModel::rowsMoved, self, [slot_handle](const QModelIndex& parent, int start, int end, const QModelIndex& destination, int row) {
		intptr_t slot = slot_handle->value();
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;
		const QModelIndex& destination_ret = destination;
		// Cast returned reference into pointer
		QModelIndex* sigval4 = const_cast<QModelIndex*>(&destination_ret);
		int sigval5 = row;
		miqt_exec_callback_QAbstractItemModel_rowsMoved(slot, sigval1, sigval2, sigval3, sigval4, sigval5);
	}));
}

void* QAbstractItemModel_connect_columnsAboutToBeMoved(QAbstractItemModel* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel>>(slot);
	return new QMetaObject::Connection(QAbstractItemModel::connect(self, &QAbstractItemModel::columnsAboutToBeMoved, self, [slot_handle](const QModelIndex& sourceParent, int sourceStart, int sourceEnd, const QModelIndex& destinationParent, int destinationColumn) {
		intptr_t slot = slot_handle->value();
		const QModelIndex& sourceParent_ret = sourceParent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&sourceParent_ret);
		int sigval2 = sourceStart;
		int sigval3 = sourceEnd;
		const QModelIndex& destinationParent_ret = destinationParent;
		// Cast returned reference into pointer
		QModelIndex* sigval4 = const_cast<QModelIndex*>(&destinationParent_ret);
		int sigval5 = destinationColumn;
		miqt_exec_callback_QAbstractItemModel_columnsAboutToBeMoved(slot, sigval1, sigval2, sigval3, sigval4, sigval5);
	}));
}

void* QAbstractItemModel_connect_columnsMoved(QAbstractItemModel* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractItemModel>>(slot);
	return new QMetaObject::Connection(QAbstractItemModel::connect(self, &QAbstractItemModel::columnsMoved, self, [slot_handle](const QModelIndex& parent, int start, int end, const QModelIndex& destination, int column) {
		intptr_t slot = slot_handle->value();
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;
		const QModelIndex& destination_ret = destination;
		// Cast returned reference into pointer
		QModelIndex* sigval4 = const_cast<QModelIndex*>(&destination_ret);
		int sigval5 = column;
		miqt_exec_callback_QAbstractItemModel_columnsMoved(slot, sigval1, sigval2, sigval3, sigval4, sigval5);
	}));
}

void QAbstractItemModel_delete(QAbstractItemModel* self) {
	delete self;
}

class MiqtVirtualQAbstractTableModel final : public QAbstractTableModel {
public:

	MiqtVirtualQAbstractTableModel(): QAbstractTableModel() {}
	MiqtVirtualQAbstractTableModel(QObject* parent): QAbstractTableModel(parent) {}

	virtual ~MiqtVirtualQAbstractTableModel() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> handle__index;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
		if (!handle__index) {
			return QAbstractTableModel::index(row, column, parent);
		}

		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractTableModel_index(this, handle__index.value(), sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	friend QModelIndex* QAbstractTableModel_virtualbase_index(const void* self, int row, int column, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> handle__sibling;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
		if (!handle__sibling) {
			return QAbstractTableModel::sibling(row, column, idx);
		}

		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& idx_ret = idx;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&idx_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractTableModel_sibling(this, handle__sibling.value(), sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	friend QModelIndex* QAbstractTableModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> handle__dropMimeData;

	// Subclass to allow providing a Go implementation
	virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
		if (!handle__dropMimeData) {
			return QAbstractTableModel::dropMimeData(data, action, row, column, parent);
		}

		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_dropMimeData(this, handle__dropMimeData.value(), sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QAbstractTableModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> handle__flags;

	// Subclass to allow providing a Go implementation
	virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
		if (!handle__flags) {
			return QAbstractTableModel::flags(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		int callback_return_value = miqt_exec_callback_QAbstractTableModel_flags(this, handle__flags.value(), sigval1);
		return static_cast<Qt::ItemFlags>(callback_return_value);
	}

	friend int QAbstractTableModel_virtualbase_flags(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> handle__rowCount;

	// Subclass to allow providing a Go implementation
	virtual int rowCount(const QModelIndex& parent) const override {
		if (!handle__rowCount) {
			return 0; // Pure virtual, there is no base we can call
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int callback_return_value = miqt_exec_callback_QAbstractTableModel_rowCount(this, handle__rowCount.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> handle__columnCount;

	// Subclass to allow providing a Go implementation
	virtual int columnCount(const QModelIndex& parent) const override {
		if (!handle__columnCount) {
			return 0; // Pure virtual, there is no base we can call
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int callback_return_value = miqt_exec_callback_QAbstractTableModel_columnCount(this, handle__columnCount.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> handle__data;

	// Subclass to allow providing a Go implementation
	virtual QVariant data(const QModelIndex& index, int role) const override {
		if (!handle__data) {
			return QVariant(); // Pure virtual, there is no base we can call
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		int sigval2 = role;
		QVariant* callback_return_value = miqt_exec_callback_QAbstractTableModel_data(this, handle__data.value(), sigval1, sigval2);
		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> handle__setData;

	// Subclass to allow providing a Go implementation
	virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
		if (!handle__setData) {
			return QAbstractTableModel::setData(index, value, role);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		int sigval3 = role;
		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_setData(this, handle__setData.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QAbstractTableModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> handle__headerData;

	// Subclass to allow providing a Go implementation
	virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
		if (!handle__headerData) {
			return QAbstractTableModel::headerData(section, orientation, role);
		}

		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		int sigval3 = role;
		QVariant* callback_return_value = miqt_exec_callback_QAbstractTableModel_headerData(this, handle__headerData.value(), sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	friend QVariant* QAbstractTableModel_virtualbase_headerData(const void* self, int section, int orientation, int role);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> handle__setHeaderData;

	// Subclass to allow providing a Go implementation
	virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
		if (!handle__setHeaderData) {
			return QAbstractTableModel::setHeaderData(section, orientation, value, role);
		}

		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval3 = const_cast<QVariant*>(&value_ret);
		int sigval4 = role;
		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_setHeaderData(this, handle__setHeaderData.value(), sigval1, sigval2, sigval3, sigval4);
		return callback_return_value;
	}

	friend bool QAbstractTableModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> handle__itemData;

	// Subclass to allow providing a Go implementation
	virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
		if (!handle__itemData) {
			return QAbstractTableModel::itemData(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		struct miqt_map /* of int to QVariant* */  callback_return_value = miqt_exec_callback_QAbstractTableModel_itemData(this, handle__itemData.value(), sigval1);
		QMap<int, QVariant> callback_return_value_QMap;
		int* callback_return_value_karr = static_cast<int*>(callback_return_value.keys);
		QVariant** callback_return_value_varr = static_cast<QVariant**>(callback_return_value.values);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QMap[static_cast<int>(callback_return_value_karr[i])] = *(callback_return_value_varr[i]);
		}
		return callback_return_value_QMap;
	}

	friend struct miqt_map /* of int to QVariant* */  QAbstractTableModel_virtualbase_itemData(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> handle__setItemData;

	// Subclass to allow providing a Go implementation
	virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
		if (!handle__setItemData) {
			return QAbstractTableModel::setItemData(index, roles);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		const QMap<int, QVariant>& roles_ret = roles;
		// Convert QMap<> from C++ memory to manually-managed C memory
		int* roles_karr = static_cast<int*>(malloc(sizeof(int) * roles_ret.size()));
		QVariant** roles_varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * roles_ret.size()));
		int roles_ctr = 0;
		for (auto roles_itr = roles_ret.keyValueBegin(); roles_itr != roles_ret.keyValueEnd(); ++roles_itr) {
			roles_karr[roles_ctr] = roles_itr->first;
			roles_varr[roles_ctr] = new QVariant(roles_itr->second);
			roles_ctr++;
		}
		struct miqt_map roles_out;
		roles_out.len = roles_ret.size();
		roles_out.keys = static_cast<void*>(roles_karr);
		roles_out.values = static_cast<void*>(roles_varr);
		struct miqt_map /* of int to QVariant* */  sigval2 = roles_out;
		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_setItemData(this, handle__setItemData.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QAbstractTableModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> handle__mimeTypes;

	// Subclass to allow providing a Go implementation
	virtual QStringList mimeTypes() const override {
		if (!handle__mimeTypes) {
			return QAbstractTableModel::mimeTypes();
		}

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QAbstractTableModel_mimeTypes(this, handle__mimeTypes.value());
		QStringList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		struct miqt_string* callback_return_value_arr = static_cast<struct miqt_string*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QString callback_return_value_arr_i_QString = QString::fromUtf8(callback_return_value_arr[i].data, callback_return_value_arr[i].len);
			callback_return_value_QList.push_back(callback_return_value_arr_i_QString);
		}
		struct miqt_string* callback_return_value_free_arr = static_cast<struct miqt_string*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			free(callback_return_value_free_arr[i].data);
		}
		free(callback_return_value.data);
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of struct miqt_string */  QAbstractTableModel_virtualbase_mimeTypes(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> handle__mimeData;

	// Subclass to allow providing a Go implementation
	virtual QMimeData* mimeData(const QModelIndexList& indexes) const override {
		if (!handle__mimeData) {
			return QAbstractTableModel::mimeData(indexes);
		}

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
		QMimeData* callback_return_value = miqt_exec_callback_QAbstractTableModel_mimeData(this, handle__mimeData.value(), sigval1);
		return callback_return_value;
	}

	friend QMimeData* QAbstractTableModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> handle__canDropMimeData;

	// Subclass to allow providing a Go implementation
	virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
		if (!handle__canDropMimeData) {
			return QAbstractTableModel::canDropMimeData(data, action, row, column, parent);
		}

		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_canDropMimeData(this, handle__canDropMimeData.value(), sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QAbstractTableModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> handle__supportedDropActions;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDropActions() const override {
		if (!handle__supportedDropActions) {
			return QAbstractTableModel::supportedDropActions();
		}

		int callback_return_value = miqt_exec_callback_QAbstractTableModel_supportedDropActions(this, handle__supportedDropActions.value());
		return static_cast<Qt::DropActions>(callback_return_value);
	}

	friend int QAbstractTableModel_virtualbase_supportedDropActions(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> handle__supportedDragActions;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDragActions() const override {
		if (!handle__supportedDragActions) {
			return QAbstractTableModel::supportedDragActions();
		}

		int callback_return_value = miqt_exec_callback_QAbstractTableModel_supportedDragActions(this, handle__supportedDragActions.value());
		return static_cast<Qt::DropActions>(callback_return_value);
	}

	friend int QAbstractTableModel_virtualbase_supportedDragActions(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> handle__insertRows;

	// Subclass to allow providing a Go implementation
	virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
		if (!handle__insertRows) {
			return QAbstractTableModel::insertRows(row, count, parent);
		}

		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_insertRows(this, handle__insertRows.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QAbstractTableModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> handle__insertColumns;

	// Subclass to allow providing a Go implementation
	virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
		if (!handle__insertColumns) {
			return QAbstractTableModel::insertColumns(column, count, parent);
		}

		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_insertColumns(this, handle__insertColumns.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QAbstractTableModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> handle__removeRows;

	// Subclass to allow providing a Go implementation
	virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
		if (!handle__removeRows) {
			return QAbstractTableModel::removeRows(row, count, parent);
		}

		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_removeRows(this, handle__removeRows.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QAbstractTableModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> handle__removeColumns;

	// Subclass to allow providing a Go implementation
	virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
		if (!handle__removeColumns) {
			return QAbstractTableModel::removeColumns(column, count, parent);
		}

		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_removeColumns(this, handle__removeColumns.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QAbstractTableModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> handle__moveRows;

	// Subclass to allow providing a Go implementation
	virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (!handle__moveRows) {
			return QAbstractTableModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
		}

		const QModelIndex& sourceParent_ret = sourceParent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&sourceParent_ret);
		int sigval2 = sourceRow;
		int sigval3 = count;
		const QModelIndex& destinationParent_ret = destinationParent;
		// Cast returned reference into pointer
		QModelIndex* sigval4 = const_cast<QModelIndex*>(&destinationParent_ret);
		int sigval5 = destinationChild;
		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_moveRows(this, handle__moveRows.value(), sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QAbstractTableModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> handle__moveColumns;

	// Subclass to allow providing a Go implementation
	virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (!handle__moveColumns) {
			return QAbstractTableModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
		}

		const QModelIndex& sourceParent_ret = sourceParent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&sourceParent_ret);
		int sigval2 = sourceColumn;
		int sigval3 = count;
		const QModelIndex& destinationParent_ret = destinationParent;
		// Cast returned reference into pointer
		QModelIndex* sigval4 = const_cast<QModelIndex*>(&destinationParent_ret);
		int sigval5 = destinationChild;
		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_moveColumns(this, handle__moveColumns.value(), sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QAbstractTableModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> handle__fetchMore;

	// Subclass to allow providing a Go implementation
	virtual void fetchMore(const QModelIndex& parent) override {
		if (!handle__fetchMore) {
			QAbstractTableModel::fetchMore(parent);
			return;
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		miqt_exec_callback_QAbstractTableModel_fetchMore(this, handle__fetchMore.value(), sigval1);

	}

	friend void QAbstractTableModel_virtualbase_fetchMore(void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> handle__canFetchMore;

	// Subclass to allow providing a Go implementation
	virtual bool canFetchMore(const QModelIndex& parent) const override {
		if (!handle__canFetchMore) {
			return QAbstractTableModel::canFetchMore(parent);
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_canFetchMore(this, handle__canFetchMore.value(), sigval1);
		return callback_return_value;
	}

	friend bool QAbstractTableModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> handle__sort;

	// Subclass to allow providing a Go implementation
	virtual void sort(int column, Qt::SortOrder order) override {
		if (!handle__sort) {
			QAbstractTableModel::sort(column, order);
			return;
		}

		int sigval1 = column;
		Qt::SortOrder order_ret = order;
		int sigval2 = static_cast<int>(order_ret);
		miqt_exec_callback_QAbstractTableModel_sort(this, handle__sort.value(), sigval1, sigval2);

	}

	friend void QAbstractTableModel_virtualbase_sort(void* self, int column, int order);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> handle__buddy;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex buddy(const QModelIndex& index) const override {
		if (!handle__buddy) {
			return QAbstractTableModel::buddy(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractTableModel_buddy(this, handle__buddy.value(), sigval1);
		return *callback_return_value;
	}

	friend QModelIndex* QAbstractTableModel_virtualbase_buddy(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> handle__match;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
		if (!handle__match) {
			return QAbstractTableModel::match(start, role, value, hits, flags);
		}

		const QModelIndex& start_ret = start;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&start_ret);
		int sigval2 = role;
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval3 = const_cast<QVariant*>(&value_ret);
		int sigval4 = hits;
		Qt::MatchFlags flags_ret = flags;
		int sigval5 = static_cast<int>(flags_ret);
		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QAbstractTableModel_match(this, handle__match.value(), sigval1, sigval2, sigval3, sigval4, sigval5);
		QModelIndexList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QModelIndex** callback_return_value_arr = static_cast<QModelIndex**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(*(callback_return_value_arr[i]));
		}
		free(callback_return_value.data);
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of QModelIndex* */  QAbstractTableModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> handle__span;

	// Subclass to allow providing a Go implementation
	virtual QSize span(const QModelIndex& index) const override {
		if (!handle__span) {
			return QAbstractTableModel::span(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QSize* callback_return_value = miqt_exec_callback_QAbstractTableModel_span(this, handle__span.value(), sigval1);
		return *callback_return_value;
	}

	friend QSize* QAbstractTableModel_virtualbase_span(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> handle__roleNames;

	// Subclass to allow providing a Go implementation
	virtual QHash<int, QByteArray> roleNames() const override {
		if (!handle__roleNames) {
			return QAbstractTableModel::roleNames();
		}

		struct miqt_map /* of int to struct miqt_string */  callback_return_value = miqt_exec_callback_QAbstractTableModel_roleNames(this, handle__roleNames.value());
		QHash<int, QByteArray> callback_return_value_QMap;
		callback_return_value_QMap.reserve(callback_return_value.len);
		int* callback_return_value_karr = static_cast<int*>(callback_return_value.keys);
		struct miqt_string* callback_return_value_varr = static_cast<struct miqt_string*>(callback_return_value.values);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QByteArray callback_return_value_varr_i_QByteArray(callback_return_value_varr[i].data, callback_return_value_varr[i].len);
			callback_return_value_QMap[static_cast<int>(callback_return_value_karr[i])] = callback_return_value_varr_i_QByteArray;
		}
		return callback_return_value_QMap;
	}

	friend struct miqt_map /* of int to struct miqt_string */  QAbstractTableModel_virtualbase_roleNames(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> handle__submit;

	// Subclass to allow providing a Go implementation
	virtual bool submit() override {
		if (!handle__submit) {
			return QAbstractTableModel::submit();
		}

		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_submit(this, handle__submit.value());
		return callback_return_value;
	}

	friend bool QAbstractTableModel_virtualbase_submit(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> handle__revert;

	// Subclass to allow providing a Go implementation
	virtual void revert() override {
		if (!handle__revert) {
			QAbstractTableModel::revert();
			return;
		}

		miqt_exec_callback_QAbstractTableModel_revert(this, handle__revert.value());

	}

	friend void QAbstractTableModel_virtualbase_revert(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QAbstractTableModel::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QAbstractTableModel_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QAbstractTableModel::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QAbstractTableModel_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QAbstractTableModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QAbstractTableModel::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QAbstractTableModel_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QAbstractTableModel_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QAbstractTableModel::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QAbstractTableModel_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QAbstractTableModel_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QAbstractTableModel::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QAbstractTableModel_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QAbstractTableModel_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QAbstractTableModel::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QAbstractTableModel_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QAbstractTableModel_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QAbstractTableModel::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QAbstractTableModel_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QAbstractTableModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QAbstractTableModel_protectedbase_resetInternalData(bool* _dynamic_cast_ok, void* self);
	friend QModelIndex* QAbstractTableModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column);
	friend void QAbstractTableModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream);
	friend bool QAbstractTableModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream);
	friend void QAbstractTableModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QAbstractTableModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractTableModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QAbstractTableModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self);
	friend bool QAbstractTableModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow);
	friend void QAbstractTableModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractTableModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QAbstractTableModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractTableModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QAbstractTableModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self);
	friend bool QAbstractTableModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn);
	friend void QAbstractTableModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractTableModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractTableModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractTableModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to);
	friend void QAbstractTableModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to);
	friend struct miqt_array /* of QModelIndex* */  QAbstractTableModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self);
	friend QObject* QAbstractTableModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractTableModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractTableModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAbstractTableModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QAbstractTableModel* QAbstractTableModel_new() {
	return new (std::nothrow) MiqtVirtualQAbstractTableModel();
}

QAbstractTableModel* QAbstractTableModel_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQAbstractTableModel(parent);
}

void QAbstractTableModel_virtbase(QAbstractTableModel* src, QAbstractItemModel** outptr_QAbstractItemModel) {
	*outptr_QAbstractItemModel = static_cast<QAbstractItemModel*>(src);
}

QMetaObject* QAbstractTableModel_metaObject(const QAbstractTableModel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractTableModel_metacast(QAbstractTableModel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractTableModel_tr(const char* s) {
	QString _ret = QAbstractTableModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractTableModel_trUtf8(const char* s) {
	QString _ret = QAbstractTableModel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QModelIndex* QAbstractTableModel_index(const QAbstractTableModel* self, int row, int column, QModelIndex* parent) {
	return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

QModelIndex* QAbstractTableModel_sibling(const QAbstractTableModel* self, int row, int column, QModelIndex* idx) {
	return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

bool QAbstractTableModel_dropMimeData(QAbstractTableModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

int QAbstractTableModel_flags(const QAbstractTableModel* self, QModelIndex* index) {
	Qt::ItemFlags _ret = self->flags(*index);
	return static_cast<int>(_ret);
}

struct miqt_string QAbstractTableModel_tr2(const char* s, const char* c) {
	QString _ret = QAbstractTableModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractTableModel_tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractTableModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractTableModel_trUtf82(const char* s, const char* c) {
	QString _ret = QAbstractTableModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractTableModel_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractTableModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractTableModel_override_virtual_index(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> slot_handle(slot);
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__index = std::move(slot_handle);
	return true;
}

QModelIndex* QAbstractTableModel_virtualbase_index(const void* self, int row, int column, QModelIndex* parent) {
	return new QModelIndex(static_cast<const MiqtVirtualQAbstractTableModel*>(self)->QAbstractTableModel::index(static_cast<int>(row), static_cast<int>(column), *parent));
}

bool QAbstractTableModel_override_virtual_sibling(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> slot_handle(slot);
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sibling = std::move(slot_handle);
	return true;
}

QModelIndex* QAbstractTableModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx) {
	return new QModelIndex(static_cast<const MiqtVirtualQAbstractTableModel*>(self)->QAbstractTableModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

bool QAbstractTableModel_override_virtual_dropMimeData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> slot_handle(slot);
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropMimeData = std::move(slot_handle);
	return true;
}

bool QAbstractTableModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return static_cast<MiqtVirtualQAbstractTableModel*>(self)->QAbstractTableModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QAbstractTableModel_override_virtual_flags(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> slot_handle(slot);
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__flags = std::move(slot_handle);
	return true;
}

int QAbstractTableModel_virtualbase_flags(const void* self, QModelIndex* index) {
	Qt::ItemFlags _ret = static_cast<const MiqtVirtualQAbstractTableModel*>(self)->QAbstractTableModel::flags(*index);
	return static_cast<int>(_ret);
}

bool QAbstractTableModel_override_virtual_rowCount(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> slot_handle(slot);
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__rowCount = std::move(slot_handle);
	return true;
}

bool QAbstractTableModel_override_virtual_columnCount(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> slot_handle(slot);
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__columnCount = std::move(slot_handle);
	return true;
}

bool QAbstractTableModel_override_virtual_data(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> slot_handle(slot);
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__data = std::move(slot_handle);
	return true;
}

bool QAbstractTableModel_override_virtual_setData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> slot_handle(slot);
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setData = std::move(slot_handle);
	return true;
}

bool QAbstractTableModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role) {
	return static_cast<MiqtVirtualQAbstractTableModel*>(self)->QAbstractTableModel::setData(*index, *value, static_cast<int>(role));
}

bool QAbstractTableModel_override_virtual_headerData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> slot_handle(slot);
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__headerData = std::move(slot_handle);
	return true;
}

QVariant* QAbstractTableModel_virtualbase_headerData(const void* self, int section, int orientation, int role) {
	return new QVariant(static_cast<const MiqtVirtualQAbstractTableModel*>(self)->QAbstractTableModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

bool QAbstractTableModel_override_virtual_setHeaderData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> slot_handle(slot);
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setHeaderData = std::move(slot_handle);
	return true;
}

bool QAbstractTableModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role) {
	return static_cast<MiqtVirtualQAbstractTableModel*>(self)->QAbstractTableModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

bool QAbstractTableModel_override_virtual_itemData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> slot_handle(slot);
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__itemData = std::move(slot_handle);
	return true;
}

struct miqt_map /* of int to QVariant* */  QAbstractTableModel_virtualbase_itemData(const void* self, QModelIndex* index) {
	QMap<int, QVariant> _ret = static_cast<const MiqtVirtualQAbstractTableModel*>(self)->QAbstractTableModel::itemData(*index);
	// Convert QMap<> from C++ memory to manually-managed C memory
	int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
	QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		_karr[_ctr] = _itr->first;
		_varr[_ctr] = new QVariant(_itr->second);
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

bool QAbstractTableModel_override_virtual_setItemData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> slot_handle(slot);
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setItemData = std::move(slot_handle);
	return true;
}

bool QAbstractTableModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
	QMap<int, QVariant> roles_QMap;
	int* roles_karr = static_cast<int*>(roles.keys);
	QVariant** roles_varr = static_cast<QVariant**>(roles.values);
	for(size_t i = 0; i < roles.len; ++i) {
		roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
	}
	return static_cast<MiqtVirtualQAbstractTableModel*>(self)->QAbstractTableModel::setItemData(*index, roles_QMap);
}

bool QAbstractTableModel_override_virtual_mimeTypes(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> slot_handle(slot);
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mimeTypes = std::move(slot_handle);
	return true;
}

struct miqt_array /* of struct miqt_string */  QAbstractTableModel_virtualbase_mimeTypes(const void* self) {
	QStringList _ret = static_cast<const MiqtVirtualQAbstractTableModel*>(self)->QAbstractTableModel::mimeTypes();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QAbstractTableModel_override_virtual_mimeData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> slot_handle(slot);
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mimeData = std::move(slot_handle);
	return true;
}

QMimeData* QAbstractTableModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes) {
	QModelIndexList indexes_QList;
	indexes_QList.reserve(indexes.len);
	QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
	for(size_t i = 0; i < indexes.len; ++i) {
		indexes_QList.push_back(*(indexes_arr[i]));
	}
	return static_cast<const MiqtVirtualQAbstractTableModel*>(self)->QAbstractTableModel::mimeData(indexes_QList);
}

bool QAbstractTableModel_override_virtual_canDropMimeData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> slot_handle(slot);
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__canDropMimeData = std::move(slot_handle);
	return true;
}

bool QAbstractTableModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQAbstractTableModel*>(self)->QAbstractTableModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QAbstractTableModel_override_virtual_supportedDropActions(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> slot_handle(slot);
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__supportedDropActions = std::move(slot_handle);
	return true;
}

int QAbstractTableModel_virtualbase_supportedDropActions(const void* self) {
	Qt::DropActions _ret = static_cast<const MiqtVirtualQAbstractTableModel*>(self)->QAbstractTableModel::supportedDropActions();
	return static_cast<int>(_ret);
}

bool QAbstractTableModel_override_virtual_supportedDragActions(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> slot_handle(slot);
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__supportedDragActions = std::move(slot_handle);
	return true;
}

int QAbstractTableModel_virtualbase_supportedDragActions(const void* self) {
	Qt::DropActions _ret = static_cast<const MiqtVirtualQAbstractTableModel*>(self)->QAbstractTableModel::supportedDragActions();
	return static_cast<int>(_ret);
}

bool QAbstractTableModel_override_virtual_insertRows(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> slot_handle(slot);
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__insertRows = std::move(slot_handle);
	return true;
}

bool QAbstractTableModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQAbstractTableModel*>(self)->QAbstractTableModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QAbstractTableModel_override_virtual_insertColumns(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> slot_handle(slot);
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__insertColumns = std::move(slot_handle);
	return true;
}

bool QAbstractTableModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQAbstractTableModel*>(self)->QAbstractTableModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QAbstractTableModel_override_virtual_removeRows(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> slot_handle(slot);
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__removeRows = std::move(slot_handle);
	return true;
}

bool QAbstractTableModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQAbstractTableModel*>(self)->QAbstractTableModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QAbstractTableModel_override_virtual_removeColumns(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> slot_handle(slot);
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__removeColumns = std::move(slot_handle);
	return true;
}

bool QAbstractTableModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQAbstractTableModel*>(self)->QAbstractTableModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QAbstractTableModel_override_virtual_moveRows(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> slot_handle(slot);
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveRows = std::move(slot_handle);
	return true;
}

bool QAbstractTableModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return static_cast<MiqtVirtualQAbstractTableModel*>(self)->QAbstractTableModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QAbstractTableModel_override_virtual_moveColumns(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> slot_handle(slot);
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveColumns = std::move(slot_handle);
	return true;
}

bool QAbstractTableModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
	return static_cast<MiqtVirtualQAbstractTableModel*>(self)->QAbstractTableModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QAbstractTableModel_override_virtual_fetchMore(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> slot_handle(slot);
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__fetchMore = std::move(slot_handle);
	return true;
}

void QAbstractTableModel_virtualbase_fetchMore(void* self, QModelIndex* parent) {
	static_cast<MiqtVirtualQAbstractTableModel*>(self)->QAbstractTableModel::fetchMore(*parent);
}

bool QAbstractTableModel_override_virtual_canFetchMore(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> slot_handle(slot);
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__canFetchMore = std::move(slot_handle);
	return true;
}

bool QAbstractTableModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQAbstractTableModel*>(self)->QAbstractTableModel::canFetchMore(*parent);
}

bool QAbstractTableModel_override_virtual_sort(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> slot_handle(slot);
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sort = std::move(slot_handle);
	return true;
}

void QAbstractTableModel_virtualbase_sort(void* self, int column, int order) {
	static_cast<MiqtVirtualQAbstractTableModel*>(self)->QAbstractTableModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

bool QAbstractTableModel_override_virtual_buddy(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> slot_handle(slot);
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__buddy = std::move(slot_handle);
	return true;
}

QModelIndex* QAbstractTableModel_virtualbase_buddy(const void* self, QModelIndex* index) {
	return new QModelIndex(static_cast<const MiqtVirtualQAbstractTableModel*>(self)->QAbstractTableModel::buddy(*index));
}

bool QAbstractTableModel_override_virtual_match(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> slot_handle(slot);
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__match = std::move(slot_handle);
	return true;
}

struct miqt_array /* of QModelIndex* */  QAbstractTableModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
	QModelIndexList _ret = static_cast<const MiqtVirtualQAbstractTableModel*>(self)->QAbstractTableModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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

bool QAbstractTableModel_override_virtual_span(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> slot_handle(slot);
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__span = std::move(slot_handle);
	return true;
}

QSize* QAbstractTableModel_virtualbase_span(const void* self, QModelIndex* index) {
	return new QSize(static_cast<const MiqtVirtualQAbstractTableModel*>(self)->QAbstractTableModel::span(*index));
}

bool QAbstractTableModel_override_virtual_roleNames(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> slot_handle(slot);
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__roleNames = std::move(slot_handle);
	return true;
}

struct miqt_map /* of int to struct miqt_string */  QAbstractTableModel_virtualbase_roleNames(const void* self) {
	QHash<int, QByteArray> _ret = static_cast<const MiqtVirtualQAbstractTableModel*>(self)->QAbstractTableModel::roleNames();
	// Convert QMap<> from C++ memory to manually-managed C memory
	int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
	struct miqt_string* _varr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		_karr[_ctr] = _itr->first;
		QByteArray _hashval_qb = _itr->second;
		struct miqt_string _hashval_ms;
		_hashval_ms.len = _hashval_qb.length();
		_hashval_ms.data = static_cast<char*>(malloc(_hashval_ms.len));
		memcpy(_hashval_ms.data, _hashval_qb.data(), _hashval_ms.len);
		_varr[_ctr] = _hashval_ms;
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

bool QAbstractTableModel_override_virtual_submit(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> slot_handle(slot);
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__submit = std::move(slot_handle);
	return true;
}

bool QAbstractTableModel_virtualbase_submit(void* self) {
	return static_cast<MiqtVirtualQAbstractTableModel*>(self)->QAbstractTableModel::submit();
}

bool QAbstractTableModel_override_virtual_revert(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> slot_handle(slot);
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__revert = std::move(slot_handle);
	return true;
}

void QAbstractTableModel_virtualbase_revert(void* self) {
	static_cast<MiqtVirtualQAbstractTableModel*>(self)->QAbstractTableModel::revert();
}

bool QAbstractTableModel_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> slot_handle(slot);
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QAbstractTableModel_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQAbstractTableModel*>(self)->QAbstractTableModel::event(event);
}

bool QAbstractTableModel_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> slot_handle(slot);
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QAbstractTableModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQAbstractTableModel*>(self)->QAbstractTableModel::eventFilter(watched, event);
}

bool QAbstractTableModel_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> slot_handle(slot);
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QAbstractTableModel_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQAbstractTableModel*>(self)->QAbstractTableModel::timerEvent(event);
}

bool QAbstractTableModel_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> slot_handle(slot);
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QAbstractTableModel_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQAbstractTableModel*>(self)->QAbstractTableModel::childEvent(event);
}

bool QAbstractTableModel_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> slot_handle(slot);
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QAbstractTableModel_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQAbstractTableModel*>(self)->QAbstractTableModel::customEvent(event);
}

bool QAbstractTableModel_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> slot_handle(slot);
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QAbstractTableModel_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQAbstractTableModel*>(self)->QAbstractTableModel::connectNotify(*signal);
}

bool QAbstractTableModel_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractTableModel> slot_handle(slot);
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QAbstractTableModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQAbstractTableModel*>(self)->QAbstractTableModel::disconnectNotify(*signal);
}

void QAbstractTableModel_protectedbase_resetInternalData(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->resetInternalData();
}

QModelIndex* QAbstractTableModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QModelIndex(self_cast->createIndex(static_cast<int>(row), static_cast<int>(column)));
}

void QAbstractTableModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
		QModelIndexList indexes_QList;
		indexes_QList.reserve(indexes.len);
		QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
		for(size_t i = 0; i < indexes.len; ++i) {
			indexes_QList.push_back(*(indexes_arr[i]));
		}
	self_cast->encodeData(indexes_QList, *stream);
}

bool QAbstractTableModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
}

void QAbstractTableModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QAbstractTableModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endInsertRows();
}

void QAbstractTableModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QAbstractTableModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endRemoveRows();
}

bool QAbstractTableModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
}

void QAbstractTableModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endMoveRows();
}

void QAbstractTableModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QAbstractTableModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endInsertColumns();
}

void QAbstractTableModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QAbstractTableModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endRemoveColumns();
}

bool QAbstractTableModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
}

void QAbstractTableModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endMoveColumns();
}

void QAbstractTableModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginResetModel();
}

void QAbstractTableModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endResetModel();
}

void QAbstractTableModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->changePersistentIndex(*from, *to);
}

void QAbstractTableModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
		QModelIndexList from_QList;
		from_QList.reserve(from.len);
		QModelIndex** from_arr = static_cast<QModelIndex**>(from.data);
		for(size_t i = 0; i < from.len; ++i) {
			from_QList.push_back(*(from_arr[i]));
		}
		QModelIndexList to_QList;
		to_QList.reserve(to.len);
		QModelIndex** to_arr = static_cast<QModelIndex**>(to.data);
		for(size_t i = 0; i < to.len; ++i) {
			to_QList.push_back(*(to_arr[i]));
		}
	self_cast->changePersistentIndexList(from_QList, to_QList);
}

struct miqt_array /* of QModelIndex* */  QAbstractTableModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (struct miqt_array){};
	}

	*_dynamic_cast_ok = true;
	QModelIndexList _ret = self_cast->persistentIndexList();
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

QObject* QAbstractTableModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QAbstractTableModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QAbstractTableModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QAbstractTableModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAbstractTableModel* self_cast = dynamic_cast<MiqtVirtualQAbstractTableModel*>( (QAbstractTableModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QAbstractTableModel_delete(QAbstractTableModel* self) {
	delete self;
}

class MiqtVirtualQAbstractListModel final : public QAbstractListModel {
public:

	MiqtVirtualQAbstractListModel(): QAbstractListModel() {}
	MiqtVirtualQAbstractListModel(QObject* parent): QAbstractListModel(parent) {}

	virtual ~MiqtVirtualQAbstractListModel() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> handle__index;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex index(int row, int column, const QModelIndex& parent) const override {
		if (!handle__index) {
			return QAbstractListModel::index(row, column, parent);
		}

		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractListModel_index(this, handle__index.value(), sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	friend QModelIndex* QAbstractListModel_virtualbase_index(const void* self, int row, int column, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> handle__sibling;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
		if (!handle__sibling) {
			return QAbstractListModel::sibling(row, column, idx);
		}

		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& idx_ret = idx;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&idx_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractListModel_sibling(this, handle__sibling.value(), sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	friend QModelIndex* QAbstractListModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> handle__dropMimeData;

	// Subclass to allow providing a Go implementation
	virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
		if (!handle__dropMimeData) {
			return QAbstractListModel::dropMimeData(data, action, row, column, parent);
		}

		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractListModel_dropMimeData(this, handle__dropMimeData.value(), sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QAbstractListModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> handle__flags;

	// Subclass to allow providing a Go implementation
	virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
		if (!handle__flags) {
			return QAbstractListModel::flags(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		int callback_return_value = miqt_exec_callback_QAbstractListModel_flags(this, handle__flags.value(), sigval1);
		return static_cast<Qt::ItemFlags>(callback_return_value);
	}

	friend int QAbstractListModel_virtualbase_flags(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> handle__rowCount;

	// Subclass to allow providing a Go implementation
	virtual int rowCount(const QModelIndex& parent) const override {
		if (!handle__rowCount) {
			return 0; // Pure virtual, there is no base we can call
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int callback_return_value = miqt_exec_callback_QAbstractListModel_rowCount(this, handle__rowCount.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> handle__data;

	// Subclass to allow providing a Go implementation
	virtual QVariant data(const QModelIndex& index, int role) const override {
		if (!handle__data) {
			return QVariant(); // Pure virtual, there is no base we can call
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		int sigval2 = role;
		QVariant* callback_return_value = miqt_exec_callback_QAbstractListModel_data(this, handle__data.value(), sigval1, sigval2);
		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> handle__setData;

	// Subclass to allow providing a Go implementation
	virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
		if (!handle__setData) {
			return QAbstractListModel::setData(index, value, role);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		int sigval3 = role;
		bool callback_return_value = miqt_exec_callback_QAbstractListModel_setData(this, handle__setData.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QAbstractListModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> handle__headerData;

	// Subclass to allow providing a Go implementation
	virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
		if (!handle__headerData) {
			return QAbstractListModel::headerData(section, orientation, role);
		}

		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		int sigval3 = role;
		QVariant* callback_return_value = miqt_exec_callback_QAbstractListModel_headerData(this, handle__headerData.value(), sigval1, sigval2, sigval3);
		return *callback_return_value;
	}

	friend QVariant* QAbstractListModel_virtualbase_headerData(const void* self, int section, int orientation, int role);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> handle__setHeaderData;

	// Subclass to allow providing a Go implementation
	virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
		if (!handle__setHeaderData) {
			return QAbstractListModel::setHeaderData(section, orientation, value, role);
		}

		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval3 = const_cast<QVariant*>(&value_ret);
		int sigval4 = role;
		bool callback_return_value = miqt_exec_callback_QAbstractListModel_setHeaderData(this, handle__setHeaderData.value(), sigval1, sigval2, sigval3, sigval4);
		return callback_return_value;
	}

	friend bool QAbstractListModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> handle__itemData;

	// Subclass to allow providing a Go implementation
	virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
		if (!handle__itemData) {
			return QAbstractListModel::itemData(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		struct miqt_map /* of int to QVariant* */  callback_return_value = miqt_exec_callback_QAbstractListModel_itemData(this, handle__itemData.value(), sigval1);
		QMap<int, QVariant> callback_return_value_QMap;
		int* callback_return_value_karr = static_cast<int*>(callback_return_value.keys);
		QVariant** callback_return_value_varr = static_cast<QVariant**>(callback_return_value.values);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QMap[static_cast<int>(callback_return_value_karr[i])] = *(callback_return_value_varr[i]);
		}
		return callback_return_value_QMap;
	}

	friend struct miqt_map /* of int to QVariant* */  QAbstractListModel_virtualbase_itemData(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> handle__setItemData;

	// Subclass to allow providing a Go implementation
	virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
		if (!handle__setItemData) {
			return QAbstractListModel::setItemData(index, roles);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		const QMap<int, QVariant>& roles_ret = roles;
		// Convert QMap<> from C++ memory to manually-managed C memory
		int* roles_karr = static_cast<int*>(malloc(sizeof(int) * roles_ret.size()));
		QVariant** roles_varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * roles_ret.size()));
		int roles_ctr = 0;
		for (auto roles_itr = roles_ret.keyValueBegin(); roles_itr != roles_ret.keyValueEnd(); ++roles_itr) {
			roles_karr[roles_ctr] = roles_itr->first;
			roles_varr[roles_ctr] = new QVariant(roles_itr->second);
			roles_ctr++;
		}
		struct miqt_map roles_out;
		roles_out.len = roles_ret.size();
		roles_out.keys = static_cast<void*>(roles_karr);
		roles_out.values = static_cast<void*>(roles_varr);
		struct miqt_map /* of int to QVariant* */  sigval2 = roles_out;
		bool callback_return_value = miqt_exec_callback_QAbstractListModel_setItemData(this, handle__setItemData.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QAbstractListModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> handle__mimeTypes;

	// Subclass to allow providing a Go implementation
	virtual QStringList mimeTypes() const override {
		if (!handle__mimeTypes) {
			return QAbstractListModel::mimeTypes();
		}

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QAbstractListModel_mimeTypes(this, handle__mimeTypes.value());
		QStringList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		struct miqt_string* callback_return_value_arr = static_cast<struct miqt_string*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QString callback_return_value_arr_i_QString = QString::fromUtf8(callback_return_value_arr[i].data, callback_return_value_arr[i].len);
			callback_return_value_QList.push_back(callback_return_value_arr_i_QString);
		}
		struct miqt_string* callback_return_value_free_arr = static_cast<struct miqt_string*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			free(callback_return_value_free_arr[i].data);
		}
		free(callback_return_value.data);
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of struct miqt_string */  QAbstractListModel_virtualbase_mimeTypes(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> handle__mimeData;

	// Subclass to allow providing a Go implementation
	virtual QMimeData* mimeData(const QModelIndexList& indexes) const override {
		if (!handle__mimeData) {
			return QAbstractListModel::mimeData(indexes);
		}

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
		QMimeData* callback_return_value = miqt_exec_callback_QAbstractListModel_mimeData(this, handle__mimeData.value(), sigval1);
		return callback_return_value;
	}

	friend QMimeData* QAbstractListModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> handle__canDropMimeData;

	// Subclass to allow providing a Go implementation
	virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
		if (!handle__canDropMimeData) {
			return QAbstractListModel::canDropMimeData(data, action, row, column, parent);
		}

		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractListModel_canDropMimeData(this, handle__canDropMimeData.value(), sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QAbstractListModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> handle__supportedDropActions;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDropActions() const override {
		if (!handle__supportedDropActions) {
			return QAbstractListModel::supportedDropActions();
		}

		int callback_return_value = miqt_exec_callback_QAbstractListModel_supportedDropActions(this, handle__supportedDropActions.value());
		return static_cast<Qt::DropActions>(callback_return_value);
	}

	friend int QAbstractListModel_virtualbase_supportedDropActions(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> handle__supportedDragActions;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDragActions() const override {
		if (!handle__supportedDragActions) {
			return QAbstractListModel::supportedDragActions();
		}

		int callback_return_value = miqt_exec_callback_QAbstractListModel_supportedDragActions(this, handle__supportedDragActions.value());
		return static_cast<Qt::DropActions>(callback_return_value);
	}

	friend int QAbstractListModel_virtualbase_supportedDragActions(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> handle__insertRows;

	// Subclass to allow providing a Go implementation
	virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
		if (!handle__insertRows) {
			return QAbstractListModel::insertRows(row, count, parent);
		}

		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractListModel_insertRows(this, handle__insertRows.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QAbstractListModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> handle__insertColumns;

	// Subclass to allow providing a Go implementation
	virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
		if (!handle__insertColumns) {
			return QAbstractListModel::insertColumns(column, count, parent);
		}

		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractListModel_insertColumns(this, handle__insertColumns.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QAbstractListModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> handle__removeRows;

	// Subclass to allow providing a Go implementation
	virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
		if (!handle__removeRows) {
			return QAbstractListModel::removeRows(row, count, parent);
		}

		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractListModel_removeRows(this, handle__removeRows.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QAbstractListModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> handle__removeColumns;

	// Subclass to allow providing a Go implementation
	virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
		if (!handle__removeColumns) {
			return QAbstractListModel::removeColumns(column, count, parent);
		}

		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractListModel_removeColumns(this, handle__removeColumns.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QAbstractListModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> handle__moveRows;

	// Subclass to allow providing a Go implementation
	virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (!handle__moveRows) {
			return QAbstractListModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
		}

		const QModelIndex& sourceParent_ret = sourceParent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&sourceParent_ret);
		int sigval2 = sourceRow;
		int sigval3 = count;
		const QModelIndex& destinationParent_ret = destinationParent;
		// Cast returned reference into pointer
		QModelIndex* sigval4 = const_cast<QModelIndex*>(&destinationParent_ret);
		int sigval5 = destinationChild;
		bool callback_return_value = miqt_exec_callback_QAbstractListModel_moveRows(this, handle__moveRows.value(), sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QAbstractListModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> handle__moveColumns;

	// Subclass to allow providing a Go implementation
	virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (!handle__moveColumns) {
			return QAbstractListModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
		}

		const QModelIndex& sourceParent_ret = sourceParent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&sourceParent_ret);
		int sigval2 = sourceColumn;
		int sigval3 = count;
		const QModelIndex& destinationParent_ret = destinationParent;
		// Cast returned reference into pointer
		QModelIndex* sigval4 = const_cast<QModelIndex*>(&destinationParent_ret);
		int sigval5 = destinationChild;
		bool callback_return_value = miqt_exec_callback_QAbstractListModel_moveColumns(this, handle__moveColumns.value(), sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QAbstractListModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> handle__fetchMore;

	// Subclass to allow providing a Go implementation
	virtual void fetchMore(const QModelIndex& parent) override {
		if (!handle__fetchMore) {
			QAbstractListModel::fetchMore(parent);
			return;
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		miqt_exec_callback_QAbstractListModel_fetchMore(this, handle__fetchMore.value(), sigval1);

	}

	friend void QAbstractListModel_virtualbase_fetchMore(void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> handle__canFetchMore;

	// Subclass to allow providing a Go implementation
	virtual bool canFetchMore(const QModelIndex& parent) const override {
		if (!handle__canFetchMore) {
			return QAbstractListModel::canFetchMore(parent);
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractListModel_canFetchMore(this, handle__canFetchMore.value(), sigval1);
		return callback_return_value;
	}

	friend bool QAbstractListModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> handle__sort;

	// Subclass to allow providing a Go implementation
	virtual void sort(int column, Qt::SortOrder order) override {
		if (!handle__sort) {
			QAbstractListModel::sort(column, order);
			return;
		}

		int sigval1 = column;
		Qt::SortOrder order_ret = order;
		int sigval2 = static_cast<int>(order_ret);
		miqt_exec_callback_QAbstractListModel_sort(this, handle__sort.value(), sigval1, sigval2);

	}

	friend void QAbstractListModel_virtualbase_sort(void* self, int column, int order);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> handle__buddy;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex buddy(const QModelIndex& index) const override {
		if (!handle__buddy) {
			return QAbstractListModel::buddy(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractListModel_buddy(this, handle__buddy.value(), sigval1);
		return *callback_return_value;
	}

	friend QModelIndex* QAbstractListModel_virtualbase_buddy(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> handle__match;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
		if (!handle__match) {
			return QAbstractListModel::match(start, role, value, hits, flags);
		}

		const QModelIndex& start_ret = start;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&start_ret);
		int sigval2 = role;
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval3 = const_cast<QVariant*>(&value_ret);
		int sigval4 = hits;
		Qt::MatchFlags flags_ret = flags;
		int sigval5 = static_cast<int>(flags_ret);
		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QAbstractListModel_match(this, handle__match.value(), sigval1, sigval2, sigval3, sigval4, sigval5);
		QModelIndexList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QModelIndex** callback_return_value_arr = static_cast<QModelIndex**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(*(callback_return_value_arr[i]));
		}
		free(callback_return_value.data);
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of QModelIndex* */  QAbstractListModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> handle__span;

	// Subclass to allow providing a Go implementation
	virtual QSize span(const QModelIndex& index) const override {
		if (!handle__span) {
			return QAbstractListModel::span(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QSize* callback_return_value = miqt_exec_callback_QAbstractListModel_span(this, handle__span.value(), sigval1);
		return *callback_return_value;
	}

	friend QSize* QAbstractListModel_virtualbase_span(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> handle__roleNames;

	// Subclass to allow providing a Go implementation
	virtual QHash<int, QByteArray> roleNames() const override {
		if (!handle__roleNames) {
			return QAbstractListModel::roleNames();
		}

		struct miqt_map /* of int to struct miqt_string */  callback_return_value = miqt_exec_callback_QAbstractListModel_roleNames(this, handle__roleNames.value());
		QHash<int, QByteArray> callback_return_value_QMap;
		callback_return_value_QMap.reserve(callback_return_value.len);
		int* callback_return_value_karr = static_cast<int*>(callback_return_value.keys);
		struct miqt_string* callback_return_value_varr = static_cast<struct miqt_string*>(callback_return_value.values);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QByteArray callback_return_value_varr_i_QByteArray(callback_return_value_varr[i].data, callback_return_value_varr[i].len);
			callback_return_value_QMap[static_cast<int>(callback_return_value_karr[i])] = callback_return_value_varr_i_QByteArray;
		}
		return callback_return_value_QMap;
	}

	friend struct miqt_map /* of int to struct miqt_string */  QAbstractListModel_virtualbase_roleNames(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> handle__submit;

	// Subclass to allow providing a Go implementation
	virtual bool submit() override {
		if (!handle__submit) {
			return QAbstractListModel::submit();
		}

		bool callback_return_value = miqt_exec_callback_QAbstractListModel_submit(this, handle__submit.value());
		return callback_return_value;
	}

	friend bool QAbstractListModel_virtualbase_submit(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> handle__revert;

	// Subclass to allow providing a Go implementation
	virtual void revert() override {
		if (!handle__revert) {
			QAbstractListModel::revert();
			return;
		}

		miqt_exec_callback_QAbstractListModel_revert(this, handle__revert.value());

	}

	friend void QAbstractListModel_virtualbase_revert(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QAbstractListModel::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QAbstractListModel_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QAbstractListModel_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QAbstractListModel::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QAbstractListModel_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QAbstractListModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QAbstractListModel::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QAbstractListModel_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QAbstractListModel_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QAbstractListModel::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QAbstractListModel_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QAbstractListModel_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QAbstractListModel::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QAbstractListModel_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QAbstractListModel_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QAbstractListModel::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QAbstractListModel_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QAbstractListModel_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QAbstractListModel::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QAbstractListModel_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QAbstractListModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QAbstractListModel_protectedbase_resetInternalData(bool* _dynamic_cast_ok, void* self);
	friend QModelIndex* QAbstractListModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column);
	friend void QAbstractListModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream);
	friend bool QAbstractListModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream);
	friend void QAbstractListModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QAbstractListModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractListModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QAbstractListModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self);
	friend bool QAbstractListModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow);
	friend void QAbstractListModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractListModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QAbstractListModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractListModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QAbstractListModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self);
	friend bool QAbstractListModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn);
	friend void QAbstractListModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractListModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractListModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractListModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to);
	friend void QAbstractListModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to);
	friend struct miqt_array /* of QModelIndex* */  QAbstractListModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self);
	friend QObject* QAbstractListModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractListModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractListModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAbstractListModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QAbstractListModel* QAbstractListModel_new() {
	return new (std::nothrow) MiqtVirtualQAbstractListModel();
}

QAbstractListModel* QAbstractListModel_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQAbstractListModel(parent);
}

void QAbstractListModel_virtbase(QAbstractListModel* src, QAbstractItemModel** outptr_QAbstractItemModel) {
	*outptr_QAbstractItemModel = static_cast<QAbstractItemModel*>(src);
}

QMetaObject* QAbstractListModel_metaObject(const QAbstractListModel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractListModel_metacast(QAbstractListModel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractListModel_tr(const char* s) {
	QString _ret = QAbstractListModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractListModel_trUtf8(const char* s) {
	QString _ret = QAbstractListModel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QModelIndex* QAbstractListModel_index(const QAbstractListModel* self, int row, int column, QModelIndex* parent) {
	return new QModelIndex(self->index(static_cast<int>(row), static_cast<int>(column), *parent));
}

QModelIndex* QAbstractListModel_sibling(const QAbstractListModel* self, int row, int column, QModelIndex* idx) {
	return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

bool QAbstractListModel_dropMimeData(QAbstractListModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

int QAbstractListModel_flags(const QAbstractListModel* self, QModelIndex* index) {
	Qt::ItemFlags _ret = self->flags(*index);
	return static_cast<int>(_ret);
}

struct miqt_string QAbstractListModel_tr2(const char* s, const char* c) {
	QString _ret = QAbstractListModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractListModel_tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractListModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractListModel_trUtf82(const char* s, const char* c) {
	QString _ret = QAbstractListModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractListModel_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractListModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractListModel_override_virtual_index(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> slot_handle(slot);
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__index = std::move(slot_handle);
	return true;
}

QModelIndex* QAbstractListModel_virtualbase_index(const void* self, int row, int column, QModelIndex* parent) {
	return new QModelIndex(static_cast<const MiqtVirtualQAbstractListModel*>(self)->QAbstractListModel::index(static_cast<int>(row), static_cast<int>(column), *parent));
}

bool QAbstractListModel_override_virtual_sibling(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> slot_handle(slot);
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sibling = std::move(slot_handle);
	return true;
}

QModelIndex* QAbstractListModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx) {
	return new QModelIndex(static_cast<const MiqtVirtualQAbstractListModel*>(self)->QAbstractListModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

bool QAbstractListModel_override_virtual_dropMimeData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> slot_handle(slot);
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropMimeData = std::move(slot_handle);
	return true;
}

bool QAbstractListModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return static_cast<MiqtVirtualQAbstractListModel*>(self)->QAbstractListModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QAbstractListModel_override_virtual_flags(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> slot_handle(slot);
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__flags = std::move(slot_handle);
	return true;
}

int QAbstractListModel_virtualbase_flags(const void* self, QModelIndex* index) {
	Qt::ItemFlags _ret = static_cast<const MiqtVirtualQAbstractListModel*>(self)->QAbstractListModel::flags(*index);
	return static_cast<int>(_ret);
}

bool QAbstractListModel_override_virtual_rowCount(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> slot_handle(slot);
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__rowCount = std::move(slot_handle);
	return true;
}

bool QAbstractListModel_override_virtual_data(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> slot_handle(slot);
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__data = std::move(slot_handle);
	return true;
}

bool QAbstractListModel_override_virtual_setData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> slot_handle(slot);
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setData = std::move(slot_handle);
	return true;
}

bool QAbstractListModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role) {
	return static_cast<MiqtVirtualQAbstractListModel*>(self)->QAbstractListModel::setData(*index, *value, static_cast<int>(role));
}

bool QAbstractListModel_override_virtual_headerData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> slot_handle(slot);
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__headerData = std::move(slot_handle);
	return true;
}

QVariant* QAbstractListModel_virtualbase_headerData(const void* self, int section, int orientation, int role) {
	return new QVariant(static_cast<const MiqtVirtualQAbstractListModel*>(self)->QAbstractListModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

bool QAbstractListModel_override_virtual_setHeaderData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> slot_handle(slot);
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setHeaderData = std::move(slot_handle);
	return true;
}

bool QAbstractListModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role) {
	return static_cast<MiqtVirtualQAbstractListModel*>(self)->QAbstractListModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

bool QAbstractListModel_override_virtual_itemData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> slot_handle(slot);
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__itemData = std::move(slot_handle);
	return true;
}

struct miqt_map /* of int to QVariant* */  QAbstractListModel_virtualbase_itemData(const void* self, QModelIndex* index) {
	QMap<int, QVariant> _ret = static_cast<const MiqtVirtualQAbstractListModel*>(self)->QAbstractListModel::itemData(*index);
	// Convert QMap<> from C++ memory to manually-managed C memory
	int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
	QVariant** _varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		_karr[_ctr] = _itr->first;
		_varr[_ctr] = new QVariant(_itr->second);
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

bool QAbstractListModel_override_virtual_setItemData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> slot_handle(slot);
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setItemData = std::move(slot_handle);
	return true;
}

bool QAbstractListModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
	QMap<int, QVariant> roles_QMap;
	int* roles_karr = static_cast<int*>(roles.keys);
	QVariant** roles_varr = static_cast<QVariant**>(roles.values);
	for(size_t i = 0; i < roles.len; ++i) {
		roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
	}
	return static_cast<MiqtVirtualQAbstractListModel*>(self)->QAbstractListModel::setItemData(*index, roles_QMap);
}

bool QAbstractListModel_override_virtual_mimeTypes(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> slot_handle(slot);
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mimeTypes = std::move(slot_handle);
	return true;
}

struct miqt_array /* of struct miqt_string */  QAbstractListModel_virtualbase_mimeTypes(const void* self) {
	QStringList _ret = static_cast<const MiqtVirtualQAbstractListModel*>(self)->QAbstractListModel::mimeTypes();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QAbstractListModel_override_virtual_mimeData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> slot_handle(slot);
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mimeData = std::move(slot_handle);
	return true;
}

QMimeData* QAbstractListModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes) {
	QModelIndexList indexes_QList;
	indexes_QList.reserve(indexes.len);
	QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
	for(size_t i = 0; i < indexes.len; ++i) {
		indexes_QList.push_back(*(indexes_arr[i]));
	}
	return static_cast<const MiqtVirtualQAbstractListModel*>(self)->QAbstractListModel::mimeData(indexes_QList);
}

bool QAbstractListModel_override_virtual_canDropMimeData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> slot_handle(slot);
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__canDropMimeData = std::move(slot_handle);
	return true;
}

bool QAbstractListModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQAbstractListModel*>(self)->QAbstractListModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QAbstractListModel_override_virtual_supportedDropActions(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> slot_handle(slot);
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__supportedDropActions = std::move(slot_handle);
	return true;
}

int QAbstractListModel_virtualbase_supportedDropActions(const void* self) {
	Qt::DropActions _ret = static_cast<const MiqtVirtualQAbstractListModel*>(self)->QAbstractListModel::supportedDropActions();
	return static_cast<int>(_ret);
}

bool QAbstractListModel_override_virtual_supportedDragActions(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> slot_handle(slot);
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__supportedDragActions = std::move(slot_handle);
	return true;
}

int QAbstractListModel_virtualbase_supportedDragActions(const void* self) {
	Qt::DropActions _ret = static_cast<const MiqtVirtualQAbstractListModel*>(self)->QAbstractListModel::supportedDragActions();
	return static_cast<int>(_ret);
}

bool QAbstractListModel_override_virtual_insertRows(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> slot_handle(slot);
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__insertRows = std::move(slot_handle);
	return true;
}

bool QAbstractListModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQAbstractListModel*>(self)->QAbstractListModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QAbstractListModel_override_virtual_insertColumns(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> slot_handle(slot);
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__insertColumns = std::move(slot_handle);
	return true;
}

bool QAbstractListModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQAbstractListModel*>(self)->QAbstractListModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QAbstractListModel_override_virtual_removeRows(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> slot_handle(slot);
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__removeRows = std::move(slot_handle);
	return true;
}

bool QAbstractListModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQAbstractListModel*>(self)->QAbstractListModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QAbstractListModel_override_virtual_removeColumns(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> slot_handle(slot);
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__removeColumns = std::move(slot_handle);
	return true;
}

bool QAbstractListModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQAbstractListModel*>(self)->QAbstractListModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QAbstractListModel_override_virtual_moveRows(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> slot_handle(slot);
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveRows = std::move(slot_handle);
	return true;
}

bool QAbstractListModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return static_cast<MiqtVirtualQAbstractListModel*>(self)->QAbstractListModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QAbstractListModel_override_virtual_moveColumns(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> slot_handle(slot);
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveColumns = std::move(slot_handle);
	return true;
}

bool QAbstractListModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
	return static_cast<MiqtVirtualQAbstractListModel*>(self)->QAbstractListModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QAbstractListModel_override_virtual_fetchMore(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> slot_handle(slot);
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__fetchMore = std::move(slot_handle);
	return true;
}

void QAbstractListModel_virtualbase_fetchMore(void* self, QModelIndex* parent) {
	static_cast<MiqtVirtualQAbstractListModel*>(self)->QAbstractListModel::fetchMore(*parent);
}

bool QAbstractListModel_override_virtual_canFetchMore(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> slot_handle(slot);
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__canFetchMore = std::move(slot_handle);
	return true;
}

bool QAbstractListModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQAbstractListModel*>(self)->QAbstractListModel::canFetchMore(*parent);
}

bool QAbstractListModel_override_virtual_sort(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> slot_handle(slot);
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sort = std::move(slot_handle);
	return true;
}

void QAbstractListModel_virtualbase_sort(void* self, int column, int order) {
	static_cast<MiqtVirtualQAbstractListModel*>(self)->QAbstractListModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

bool QAbstractListModel_override_virtual_buddy(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> slot_handle(slot);
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__buddy = std::move(slot_handle);
	return true;
}

QModelIndex* QAbstractListModel_virtualbase_buddy(const void* self, QModelIndex* index) {
	return new QModelIndex(static_cast<const MiqtVirtualQAbstractListModel*>(self)->QAbstractListModel::buddy(*index));
}

bool QAbstractListModel_override_virtual_match(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> slot_handle(slot);
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__match = std::move(slot_handle);
	return true;
}

struct miqt_array /* of QModelIndex* */  QAbstractListModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
	QModelIndexList _ret = static_cast<const MiqtVirtualQAbstractListModel*>(self)->QAbstractListModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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

bool QAbstractListModel_override_virtual_span(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> slot_handle(slot);
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__span = std::move(slot_handle);
	return true;
}

QSize* QAbstractListModel_virtualbase_span(const void* self, QModelIndex* index) {
	return new QSize(static_cast<const MiqtVirtualQAbstractListModel*>(self)->QAbstractListModel::span(*index));
}

bool QAbstractListModel_override_virtual_roleNames(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> slot_handle(slot);
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__roleNames = std::move(slot_handle);
	return true;
}

struct miqt_map /* of int to struct miqt_string */  QAbstractListModel_virtualbase_roleNames(const void* self) {
	QHash<int, QByteArray> _ret = static_cast<const MiqtVirtualQAbstractListModel*>(self)->QAbstractListModel::roleNames();
	// Convert QMap<> from C++ memory to manually-managed C memory
	int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
	struct miqt_string* _varr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.size()));
	int _ctr = 0;
	for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
		_karr[_ctr] = _itr->first;
		QByteArray _hashval_qb = _itr->second;
		struct miqt_string _hashval_ms;
		_hashval_ms.len = _hashval_qb.length();
		_hashval_ms.data = static_cast<char*>(malloc(_hashval_ms.len));
		memcpy(_hashval_ms.data, _hashval_qb.data(), _hashval_ms.len);
		_varr[_ctr] = _hashval_ms;
		_ctr++;
	}
	struct miqt_map _out;
	_out.len = _ret.size();
	_out.keys = static_cast<void*>(_karr);
	_out.values = static_cast<void*>(_varr);
	return _out;
}

bool QAbstractListModel_override_virtual_submit(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> slot_handle(slot);
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__submit = std::move(slot_handle);
	return true;
}

bool QAbstractListModel_virtualbase_submit(void* self) {
	return static_cast<MiqtVirtualQAbstractListModel*>(self)->QAbstractListModel::submit();
}

bool QAbstractListModel_override_virtual_revert(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> slot_handle(slot);
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__revert = std::move(slot_handle);
	return true;
}

void QAbstractListModel_virtualbase_revert(void* self) {
	static_cast<MiqtVirtualQAbstractListModel*>(self)->QAbstractListModel::revert();
}

bool QAbstractListModel_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> slot_handle(slot);
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QAbstractListModel_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQAbstractListModel*>(self)->QAbstractListModel::event(event);
}

bool QAbstractListModel_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> slot_handle(slot);
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QAbstractListModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQAbstractListModel*>(self)->QAbstractListModel::eventFilter(watched, event);
}

bool QAbstractListModel_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> slot_handle(slot);
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QAbstractListModel_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQAbstractListModel*>(self)->QAbstractListModel::timerEvent(event);
}

bool QAbstractListModel_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> slot_handle(slot);
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QAbstractListModel_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQAbstractListModel*>(self)->QAbstractListModel::childEvent(event);
}

bool QAbstractListModel_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> slot_handle(slot);
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QAbstractListModel_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQAbstractListModel*>(self)->QAbstractListModel::customEvent(event);
}

bool QAbstractListModel_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> slot_handle(slot);
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QAbstractListModel_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQAbstractListModel*>(self)->QAbstractListModel::connectNotify(*signal);
}

bool QAbstractListModel_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractListModel> slot_handle(slot);
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QAbstractListModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQAbstractListModel*>(self)->QAbstractListModel::disconnectNotify(*signal);
}

void QAbstractListModel_protectedbase_resetInternalData(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->resetInternalData();
}

QModelIndex* QAbstractListModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QModelIndex(self_cast->createIndex(static_cast<int>(row), static_cast<int>(column)));
}

void QAbstractListModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
		QModelIndexList indexes_QList;
		indexes_QList.reserve(indexes.len);
		QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
		for(size_t i = 0; i < indexes.len; ++i) {
			indexes_QList.push_back(*(indexes_arr[i]));
		}
	self_cast->encodeData(indexes_QList, *stream);
}

bool QAbstractListModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
}

void QAbstractListModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QAbstractListModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endInsertRows();
}

void QAbstractListModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QAbstractListModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endRemoveRows();
}

bool QAbstractListModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
}

void QAbstractListModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endMoveRows();
}

void QAbstractListModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QAbstractListModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endInsertColumns();
}

void QAbstractListModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QAbstractListModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endRemoveColumns();
}

bool QAbstractListModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
}

void QAbstractListModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endMoveColumns();
}

void QAbstractListModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginResetModel();
}

void QAbstractListModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endResetModel();
}

void QAbstractListModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->changePersistentIndex(*from, *to);
}

void QAbstractListModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
		QModelIndexList from_QList;
		from_QList.reserve(from.len);
		QModelIndex** from_arr = static_cast<QModelIndex**>(from.data);
		for(size_t i = 0; i < from.len; ++i) {
			from_QList.push_back(*(from_arr[i]));
		}
		QModelIndexList to_QList;
		to_QList.reserve(to.len);
		QModelIndex** to_arr = static_cast<QModelIndex**>(to.data);
		for(size_t i = 0; i < to.len; ++i) {
			to_QList.push_back(*(to_arr[i]));
		}
	self_cast->changePersistentIndexList(from_QList, to_QList);
}

struct miqt_array /* of QModelIndex* */  QAbstractListModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (struct miqt_array){};
	}

	*_dynamic_cast_ok = true;
	QModelIndexList _ret = self_cast->persistentIndexList();
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

QObject* QAbstractListModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QAbstractListModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QAbstractListModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QAbstractListModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAbstractListModel* self_cast = dynamic_cast<MiqtVirtualQAbstractListModel*>( (QAbstractListModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QAbstractListModel_delete(QAbstractListModel* self) {
	delete self;
}

