#include <memory>
#include <utility>
#include <QAbstractItemModel>
#include <QAbstractProxyModel>
#include <QByteArray>
#include <QChildEvent>
#include <QDataStream>
#include <QEvent>
#include <QHash>
#include <QItemSelection>
#include <QList>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeData>
#include <QModelIndex>
#include <QObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QVariant>
#include <qabstractproxymodel.h>
#include "gen_qabstractproxymodel.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QAbstractProxyModel(intptr_t);
void miqt_exec_callback_QAbstractProxyModel_sourceModelChanged(intptr_t);
void miqt_exec_callback_QAbstractProxyModel_setSourceModel(QAbstractProxyModel*, intptr_t, QAbstractItemModel*);
QModelIndex* miqt_exec_callback_QAbstractProxyModel_mapToSource(const QAbstractProxyModel*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QAbstractProxyModel_mapFromSource(const QAbstractProxyModel*, intptr_t, QModelIndex*);
QItemSelection* miqt_exec_callback_QAbstractProxyModel_mapSelectionToSource(const QAbstractProxyModel*, intptr_t, QItemSelection*);
QItemSelection* miqt_exec_callback_QAbstractProxyModel_mapSelectionFromSource(const QAbstractProxyModel*, intptr_t, QItemSelection*);
bool miqt_exec_callback_QAbstractProxyModel_submit(QAbstractProxyModel*, intptr_t);
void miqt_exec_callback_QAbstractProxyModel_revert(QAbstractProxyModel*, intptr_t);
QVariant* miqt_exec_callback_QAbstractProxyModel_data(const QAbstractProxyModel*, intptr_t, QModelIndex*, int);
QVariant* miqt_exec_callback_QAbstractProxyModel_headerData(const QAbstractProxyModel*, intptr_t, int, int, int);
struct miqt_map /* of int to QVariant* */  miqt_exec_callback_QAbstractProxyModel_itemData(const QAbstractProxyModel*, intptr_t, QModelIndex*);
int miqt_exec_callback_QAbstractProxyModel_flags(const QAbstractProxyModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QAbstractProxyModel_setData(QAbstractProxyModel*, intptr_t, QModelIndex*, QVariant*, int);
bool miqt_exec_callback_QAbstractProxyModel_setItemData(QAbstractProxyModel*, intptr_t, QModelIndex*, struct miqt_map /* of int to QVariant* */ );
bool miqt_exec_callback_QAbstractProxyModel_setHeaderData(QAbstractProxyModel*, intptr_t, int, int, QVariant*, int);
QModelIndex* miqt_exec_callback_QAbstractProxyModel_buddy(const QAbstractProxyModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QAbstractProxyModel_canFetchMore(const QAbstractProxyModel*, intptr_t, QModelIndex*);
void miqt_exec_callback_QAbstractProxyModel_fetchMore(QAbstractProxyModel*, intptr_t, QModelIndex*);
void miqt_exec_callback_QAbstractProxyModel_sort(QAbstractProxyModel*, intptr_t, int, int);
QSize* miqt_exec_callback_QAbstractProxyModel_span(const QAbstractProxyModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QAbstractProxyModel_hasChildren(const QAbstractProxyModel*, intptr_t, QModelIndex*);
QModelIndex* miqt_exec_callback_QAbstractProxyModel_sibling(const QAbstractProxyModel*, intptr_t, int, int, QModelIndex*);
QMimeData* miqt_exec_callback_QAbstractProxyModel_mimeData(const QAbstractProxyModel*, intptr_t, struct miqt_array /* of QModelIndex* */ );
bool miqt_exec_callback_QAbstractProxyModel_canDropMimeData(const QAbstractProxyModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractProxyModel_dropMimeData(QAbstractProxyModel*, intptr_t, QMimeData*, int, int, int, QModelIndex*);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QAbstractProxyModel_mimeTypes(const QAbstractProxyModel*, intptr_t);
int miqt_exec_callback_QAbstractProxyModel_supportedDragActions(const QAbstractProxyModel*, intptr_t);
int miqt_exec_callback_QAbstractProxyModel_supportedDropActions(const QAbstractProxyModel*, intptr_t);
QModelIndex* miqt_exec_callback_QAbstractProxyModel_index(const QAbstractProxyModel*, intptr_t, int, int, QModelIndex*);
QModelIndex* miqt_exec_callback_QAbstractProxyModel_parent(const QAbstractProxyModel*, intptr_t, QModelIndex*);
int miqt_exec_callback_QAbstractProxyModel_rowCount(const QAbstractProxyModel*, intptr_t, QModelIndex*);
int miqt_exec_callback_QAbstractProxyModel_columnCount(const QAbstractProxyModel*, intptr_t, QModelIndex*);
bool miqt_exec_callback_QAbstractProxyModel_insertRows(QAbstractProxyModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractProxyModel_insertColumns(QAbstractProxyModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractProxyModel_removeRows(QAbstractProxyModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractProxyModel_removeColumns(QAbstractProxyModel*, intptr_t, int, int, QModelIndex*);
bool miqt_exec_callback_QAbstractProxyModel_moveRows(QAbstractProxyModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
bool miqt_exec_callback_QAbstractProxyModel_moveColumns(QAbstractProxyModel*, intptr_t, QModelIndex*, int, int, QModelIndex*, int);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QAbstractProxyModel_match(const QAbstractProxyModel*, intptr_t, QModelIndex*, int, QVariant*, int, int);
struct miqt_map /* of int to struct miqt_string */  miqt_exec_callback_QAbstractProxyModel_roleNames(const QAbstractProxyModel*, intptr_t);
bool miqt_exec_callback_QAbstractProxyModel_event(QAbstractProxyModel*, intptr_t, QEvent*);
bool miqt_exec_callback_QAbstractProxyModel_eventFilter(QAbstractProxyModel*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QAbstractProxyModel_timerEvent(QAbstractProxyModel*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QAbstractProxyModel_childEvent(QAbstractProxyModel*, intptr_t, QChildEvent*);
void miqt_exec_callback_QAbstractProxyModel_customEvent(QAbstractProxyModel*, intptr_t, QEvent*);
void miqt_exec_callback_QAbstractProxyModel_connectNotify(QAbstractProxyModel*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QAbstractProxyModel_disconnectNotify(QAbstractProxyModel*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQAbstractProxyModel final : public QAbstractProxyModel {
public:

	MiqtVirtualQAbstractProxyModel(): QAbstractProxyModel() {}
	MiqtVirtualQAbstractProxyModel(QObject* parent): QAbstractProxyModel(parent) {}

	virtual ~MiqtVirtualQAbstractProxyModel() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__setSourceModel;

	// Subclass to allow providing a Go implementation
	virtual void setSourceModel(QAbstractItemModel* sourceModel) override {
		if (!handle__setSourceModel) {
			QAbstractProxyModel::setSourceModel(sourceModel);
			return;
		}

		QAbstractItemModel* sigval1 = sourceModel;
		miqt_exec_callback_QAbstractProxyModel_setSourceModel(this, handle__setSourceModel.value(), sigval1);

	}

	friend void QAbstractProxyModel_virtualbase_setSourceModel(void* self, QAbstractItemModel* sourceModel);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__mapToSource;
	bool owns_return__mapToSource = false;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex mapToSource(const QModelIndex& proxyIndex) const override {
		if (!handle__mapToSource) {
			return QModelIndex(); // Pure virtual, there is no base we can call
		}

		const QModelIndex& proxyIndex_ret = proxyIndex;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&proxyIndex_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractProxyModel_mapToSource(this, handle__mapToSource.value(), sigval1);
		std::unique_ptr<QModelIndex> callback_return_value_owner;
		if (owns_return__mapToSource) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__mapFromSource;
	bool owns_return__mapFromSource = false;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex mapFromSource(const QModelIndex& sourceIndex) const override {
		if (!handle__mapFromSource) {
			return QModelIndex(); // Pure virtual, there is no base we can call
		}

		const QModelIndex& sourceIndex_ret = sourceIndex;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&sourceIndex_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractProxyModel_mapFromSource(this, handle__mapFromSource.value(), sigval1);
		std::unique_ptr<QModelIndex> callback_return_value_owner;
		if (owns_return__mapFromSource) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__mapSelectionToSource;
	bool owns_return__mapSelectionToSource = false;

	// Subclass to allow providing a Go implementation
	virtual QItemSelection mapSelectionToSource(const QItemSelection& selection) const override {
		if (!handle__mapSelectionToSource) {
			return QAbstractProxyModel::mapSelectionToSource(selection);
		}

		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);
		QItemSelection* callback_return_value = miqt_exec_callback_QAbstractProxyModel_mapSelectionToSource(this, handle__mapSelectionToSource.value(), sigval1);
		std::unique_ptr<QItemSelection> callback_return_value_owner;
		if (owns_return__mapSelectionToSource) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QItemSelection* QAbstractProxyModel_virtualbase_mapSelectionToSource(const void* self, QItemSelection* selection);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__mapSelectionFromSource;
	bool owns_return__mapSelectionFromSource = false;

	// Subclass to allow providing a Go implementation
	virtual QItemSelection mapSelectionFromSource(const QItemSelection& selection) const override {
		if (!handle__mapSelectionFromSource) {
			return QAbstractProxyModel::mapSelectionFromSource(selection);
		}

		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);
		QItemSelection* callback_return_value = miqt_exec_callback_QAbstractProxyModel_mapSelectionFromSource(this, handle__mapSelectionFromSource.value(), sigval1);
		std::unique_ptr<QItemSelection> callback_return_value_owner;
		if (owns_return__mapSelectionFromSource) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QItemSelection* QAbstractProxyModel_virtualbase_mapSelectionFromSource(const void* self, QItemSelection* selection);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__submit;

	// Subclass to allow providing a Go implementation
	virtual bool submit() override {
		if (!handle__submit) {
			return QAbstractProxyModel::submit();
		}

		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_submit(this, handle__submit.value());
		return callback_return_value;
	}

	friend bool QAbstractProxyModel_virtualbase_submit(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__revert;

	// Subclass to allow providing a Go implementation
	virtual void revert() override {
		if (!handle__revert) {
			QAbstractProxyModel::revert();
			return;
		}

		miqt_exec_callback_QAbstractProxyModel_revert(this, handle__revert.value());

	}

	friend void QAbstractProxyModel_virtualbase_revert(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__data;
	bool owns_return__data = false;

	// Subclass to allow providing a Go implementation
	virtual QVariant data(const QModelIndex& proxyIndex, int role) const override {
		if (!handle__data) {
			return QAbstractProxyModel::data(proxyIndex, role);
		}

		const QModelIndex& proxyIndex_ret = proxyIndex;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&proxyIndex_ret);
		int sigval2 = role;
		QVariant* callback_return_value = miqt_exec_callback_QAbstractProxyModel_data(this, handle__data.value(), sigval1, sigval2);
		std::unique_ptr<QVariant> callback_return_value_owner;
		if (owns_return__data) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QVariant* QAbstractProxyModel_virtualbase_data(const void* self, QModelIndex* proxyIndex, int role);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__headerData;
	bool owns_return__headerData = false;

	// Subclass to allow providing a Go implementation
	virtual QVariant headerData(int section, Qt::Orientation orientation, int role) const override {
		if (!handle__headerData) {
			return QAbstractProxyModel::headerData(section, orientation, role);
		}

		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		int sigval3 = role;
		QVariant* callback_return_value = miqt_exec_callback_QAbstractProxyModel_headerData(this, handle__headerData.value(), sigval1, sigval2, sigval3);
		std::unique_ptr<QVariant> callback_return_value_owner;
		if (owns_return__headerData) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QVariant* QAbstractProxyModel_virtualbase_headerData(const void* self, int section, int orientation, int role);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__itemData;

	// Subclass to allow providing a Go implementation
	virtual QMap<int, QVariant> itemData(const QModelIndex& index) const override {
		if (!handle__itemData) {
			return QAbstractProxyModel::itemData(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		struct miqt_map /* of int to QVariant* */  callback_return_value = miqt_exec_callback_QAbstractProxyModel_itemData(this, handle__itemData.value(), sigval1);
		QMap<int, QVariant> callback_return_value_QMap;
		int* callback_return_value_karr = static_cast<int*>(callback_return_value.keys);
		QVariant** callback_return_value_varr = static_cast<QVariant**>(callback_return_value.values);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QMap[static_cast<int>(callback_return_value_karr[i])] = *(callback_return_value_varr[i]);
		}
		return callback_return_value_QMap;
	}

	friend struct miqt_map /* of int to QVariant* */  QAbstractProxyModel_virtualbase_itemData(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__flags;

	// Subclass to allow providing a Go implementation
	virtual Qt::ItemFlags flags(const QModelIndex& index) const override {
		if (!handle__flags) {
			return QAbstractProxyModel::flags(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		int callback_return_value = miqt_exec_callback_QAbstractProxyModel_flags(this, handle__flags.value(), sigval1);
		return static_cast<Qt::ItemFlags>(callback_return_value);
	}

	friend int QAbstractProxyModel_virtualbase_flags(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__setData;

	// Subclass to allow providing a Go implementation
	virtual bool setData(const QModelIndex& index, const QVariant& value, int role) override {
		if (!handle__setData) {
			return QAbstractProxyModel::setData(index, value, role);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		int sigval3 = role;
		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_setData(this, handle__setData.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QAbstractProxyModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__setItemData;

	// Subclass to allow providing a Go implementation
	virtual bool setItemData(const QModelIndex& index, const QMap<int, QVariant>& roles) override {
		if (!handle__setItemData) {
			return QAbstractProxyModel::setItemData(index, roles);
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
		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_setItemData(this, handle__setItemData.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QAbstractProxyModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__setHeaderData;

	// Subclass to allow providing a Go implementation
	virtual bool setHeaderData(int section, Qt::Orientation orientation, const QVariant& value, int role) override {
		if (!handle__setHeaderData) {
			return QAbstractProxyModel::setHeaderData(section, orientation, value, role);
		}

		int sigval1 = section;
		Qt::Orientation orientation_ret = orientation;
		int sigval2 = static_cast<int>(orientation_ret);
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval3 = const_cast<QVariant*>(&value_ret);
		int sigval4 = role;
		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_setHeaderData(this, handle__setHeaderData.value(), sigval1, sigval2, sigval3, sigval4);
		return callback_return_value;
	}

	friend bool QAbstractProxyModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__buddy;
	bool owns_return__buddy = false;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex buddy(const QModelIndex& index) const override {
		if (!handle__buddy) {
			return QAbstractProxyModel::buddy(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractProxyModel_buddy(this, handle__buddy.value(), sigval1);
		std::unique_ptr<QModelIndex> callback_return_value_owner;
		if (owns_return__buddy) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QModelIndex* QAbstractProxyModel_virtualbase_buddy(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__canFetchMore;

	// Subclass to allow providing a Go implementation
	virtual bool canFetchMore(const QModelIndex& parent) const override {
		if (!handle__canFetchMore) {
			return QAbstractProxyModel::canFetchMore(parent);
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_canFetchMore(this, handle__canFetchMore.value(), sigval1);
		return callback_return_value;
	}

	friend bool QAbstractProxyModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__fetchMore;

	// Subclass to allow providing a Go implementation
	virtual void fetchMore(const QModelIndex& parent) override {
		if (!handle__fetchMore) {
			QAbstractProxyModel::fetchMore(parent);
			return;
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		miqt_exec_callback_QAbstractProxyModel_fetchMore(this, handle__fetchMore.value(), sigval1);

	}

	friend void QAbstractProxyModel_virtualbase_fetchMore(void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__sort;

	// Subclass to allow providing a Go implementation
	virtual void sort(int column, Qt::SortOrder order) override {
		if (!handle__sort) {
			QAbstractProxyModel::sort(column, order);
			return;
		}

		int sigval1 = column;
		Qt::SortOrder order_ret = order;
		int sigval2 = static_cast<int>(order_ret);
		miqt_exec_callback_QAbstractProxyModel_sort(this, handle__sort.value(), sigval1, sigval2);

	}

	friend void QAbstractProxyModel_virtualbase_sort(void* self, int column, int order);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__span;
	bool owns_return__span = false;

	// Subclass to allow providing a Go implementation
	virtual QSize span(const QModelIndex& index) const override {
		if (!handle__span) {
			return QAbstractProxyModel::span(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QSize* callback_return_value = miqt_exec_callback_QAbstractProxyModel_span(this, handle__span.value(), sigval1);
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__span) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QAbstractProxyModel_virtualbase_span(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__hasChildren;

	// Subclass to allow providing a Go implementation
	virtual bool hasChildren(const QModelIndex& parent) const override {
		if (!handle__hasChildren) {
			return QAbstractProxyModel::hasChildren(parent);
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_hasChildren(this, handle__hasChildren.value(), sigval1);
		return callback_return_value;
	}

	friend bool QAbstractProxyModel_virtualbase_hasChildren(const void* self, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__sibling;
	bool owns_return__sibling = false;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex sibling(int row, int column, const QModelIndex& idx) const override {
		if (!handle__sibling) {
			return QAbstractProxyModel::sibling(row, column, idx);
		}

		int sigval1 = row;
		int sigval2 = column;
		const QModelIndex& idx_ret = idx;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&idx_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractProxyModel_sibling(this, handle__sibling.value(), sigval1, sigval2, sigval3);
		std::unique_ptr<QModelIndex> callback_return_value_owner;
		if (owns_return__sibling) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QModelIndex* QAbstractProxyModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__mimeData;

	// Subclass to allow providing a Go implementation
	virtual QMimeData* mimeData(const QModelIndexList& indexes) const override {
		if (!handle__mimeData) {
			return QAbstractProxyModel::mimeData(indexes);
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
		QMimeData* callback_return_value = miqt_exec_callback_QAbstractProxyModel_mimeData(this, handle__mimeData.value(), sigval1);
		return callback_return_value;
	}

	friend QMimeData* QAbstractProxyModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__canDropMimeData;

	// Subclass to allow providing a Go implementation
	virtual bool canDropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) const override {
		if (!handle__canDropMimeData) {
			return QAbstractProxyModel::canDropMimeData(data, action, row, column, parent);
		}

		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_canDropMimeData(this, handle__canDropMimeData.value(), sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QAbstractProxyModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__dropMimeData;

	// Subclass to allow providing a Go implementation
	virtual bool dropMimeData(const QMimeData* data, Qt::DropAction action, int row, int column, const QModelIndex& parent) override {
		if (!handle__dropMimeData) {
			return QAbstractProxyModel::dropMimeData(data, action, row, column, parent);
		}

		QMimeData* sigval1 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval2 = static_cast<int>(action_ret);
		int sigval3 = row;
		int sigval4 = column;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval5 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_dropMimeData(this, handle__dropMimeData.value(), sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QAbstractProxyModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__mimeTypes;

	// Subclass to allow providing a Go implementation
	virtual QStringList mimeTypes() const override {
		if (!handle__mimeTypes) {
			return QAbstractProxyModel::mimeTypes();
		}

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QAbstractProxyModel_mimeTypes(this, handle__mimeTypes.value());
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

	friend struct miqt_array /* of struct miqt_string */  QAbstractProxyModel_virtualbase_mimeTypes(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__supportedDragActions;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDragActions() const override {
		if (!handle__supportedDragActions) {
			return QAbstractProxyModel::supportedDragActions();
		}

		int callback_return_value = miqt_exec_callback_QAbstractProxyModel_supportedDragActions(this, handle__supportedDragActions.value());
		return static_cast<Qt::DropActions>(callback_return_value);
	}

	friend int QAbstractProxyModel_virtualbase_supportedDragActions(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__supportedDropActions;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDropActions() const override {
		if (!handle__supportedDropActions) {
			return QAbstractProxyModel::supportedDropActions();
		}

		int callback_return_value = miqt_exec_callback_QAbstractProxyModel_supportedDropActions(this, handle__supportedDropActions.value());
		return static_cast<Qt::DropActions>(callback_return_value);
	}

	friend int QAbstractProxyModel_virtualbase_supportedDropActions(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__index;
	bool owns_return__index = false;

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
		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractProxyModel_index(this, handle__index.value(), sigval1, sigval2, sigval3);
		std::unique_ptr<QModelIndex> callback_return_value_owner;
		if (owns_return__index) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__parent;
	bool owns_return__parent = false;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex parent(const QModelIndex& child) const override {
		if (!handle__parent) {
			return QModelIndex(); // Pure virtual, there is no base we can call
		}

		const QModelIndex& child_ret = child;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&child_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QAbstractProxyModel_parent(this, handle__parent.value(), sigval1);
		std::unique_ptr<QModelIndex> callback_return_value_owner;
		if (owns_return__parent) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__rowCount;

	// Subclass to allow providing a Go implementation
	virtual int rowCount(const QModelIndex& parent) const override {
		if (!handle__rowCount) {
			return 0; // Pure virtual, there is no base we can call
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int callback_return_value = miqt_exec_callback_QAbstractProxyModel_rowCount(this, handle__rowCount.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__columnCount;

	// Subclass to allow providing a Go implementation
	virtual int columnCount(const QModelIndex& parent) const override {
		if (!handle__columnCount) {
			return 0; // Pure virtual, there is no base we can call
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int callback_return_value = miqt_exec_callback_QAbstractProxyModel_columnCount(this, handle__columnCount.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__insertRows;

	// Subclass to allow providing a Go implementation
	virtual bool insertRows(int row, int count, const QModelIndex& parent) override {
		if (!handle__insertRows) {
			return QAbstractProxyModel::insertRows(row, count, parent);
		}

		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_insertRows(this, handle__insertRows.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QAbstractProxyModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__insertColumns;

	// Subclass to allow providing a Go implementation
	virtual bool insertColumns(int column, int count, const QModelIndex& parent) override {
		if (!handle__insertColumns) {
			return QAbstractProxyModel::insertColumns(column, count, parent);
		}

		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_insertColumns(this, handle__insertColumns.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QAbstractProxyModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__removeRows;

	// Subclass to allow providing a Go implementation
	virtual bool removeRows(int row, int count, const QModelIndex& parent) override {
		if (!handle__removeRows) {
			return QAbstractProxyModel::removeRows(row, count, parent);
		}

		int sigval1 = row;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_removeRows(this, handle__removeRows.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QAbstractProxyModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__removeColumns;

	// Subclass to allow providing a Go implementation
	virtual bool removeColumns(int column, int count, const QModelIndex& parent) override {
		if (!handle__removeColumns) {
			return QAbstractProxyModel::removeColumns(column, count, parent);
		}

		int sigval1 = column;
		int sigval2 = count;
		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&parent_ret);
		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_removeColumns(this, handle__removeColumns.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QAbstractProxyModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__moveRows;

	// Subclass to allow providing a Go implementation
	virtual bool moveRows(const QModelIndex& sourceParent, int sourceRow, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (!handle__moveRows) {
			return QAbstractProxyModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
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
		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_moveRows(this, handle__moveRows.value(), sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QAbstractProxyModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__moveColumns;

	// Subclass to allow providing a Go implementation
	virtual bool moveColumns(const QModelIndex& sourceParent, int sourceColumn, int count, const QModelIndex& destinationParent, int destinationChild) override {
		if (!handle__moveColumns) {
			return QAbstractProxyModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
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
		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_moveColumns(this, handle__moveColumns.value(), sigval1, sigval2, sigval3, sigval4, sigval5);
		return callback_return_value;
	}

	friend bool QAbstractProxyModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__match;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList match(const QModelIndex& start, int role, const QVariant& value, int hits, Qt::MatchFlags flags) const override {
		if (!handle__match) {
			return QAbstractProxyModel::match(start, role, value, hits, flags);
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
		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QAbstractProxyModel_match(this, handle__match.value(), sigval1, sigval2, sigval3, sigval4, sigval5);
		QModelIndexList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QModelIndex** callback_return_value_arr = static_cast<QModelIndex**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(*(callback_return_value_arr[i]));
		}
		free(callback_return_value.data);
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of QModelIndex* */  QAbstractProxyModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__roleNames;

	// Subclass to allow providing a Go implementation
	virtual QHash<int, QByteArray> roleNames() const override {
		if (!handle__roleNames) {
			return QAbstractProxyModel::roleNames();
		}

		struct miqt_map /* of int to struct miqt_string */  callback_return_value = miqt_exec_callback_QAbstractProxyModel_roleNames(this, handle__roleNames.value());
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

	friend struct miqt_map /* of int to struct miqt_string */  QAbstractProxyModel_virtualbase_roleNames(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QAbstractProxyModel::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QAbstractProxyModel_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QAbstractProxyModel::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QAbstractProxyModel_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QAbstractProxyModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QAbstractProxyModel::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QAbstractProxyModel_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QAbstractProxyModel_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QAbstractProxyModel::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QAbstractProxyModel_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QAbstractProxyModel_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QAbstractProxyModel::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QAbstractProxyModel_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QAbstractProxyModel_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QAbstractProxyModel::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QAbstractProxyModel_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QAbstractProxyModel_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QAbstractProxyModel::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QAbstractProxyModel_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QAbstractProxyModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend void QAbstractProxyModel_protectedbase_resetInternalData(bool* _dynamic_cast_ok, void* self);
	friend QModelIndex* QAbstractProxyModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column);
	friend void QAbstractProxyModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream);
	friend bool QAbstractProxyModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream);
	friend void QAbstractProxyModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QAbstractProxyModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractProxyModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QAbstractProxyModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self);
	friend bool QAbstractProxyModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow);
	friend void QAbstractProxyModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractProxyModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QAbstractProxyModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractProxyModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
	friend void QAbstractProxyModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self);
	friend bool QAbstractProxyModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn);
	friend void QAbstractProxyModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractProxyModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractProxyModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self);
	friend void QAbstractProxyModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to);
	friend void QAbstractProxyModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to);
	friend struct miqt_array /* of QModelIndex* */  QAbstractProxyModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self);
	friend QObject* QAbstractProxyModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractProxyModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QAbstractProxyModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QAbstractProxyModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QAbstractProxyModel* QAbstractProxyModel_new() {
	return new (std::nothrow) MiqtVirtualQAbstractProxyModel();
}

QAbstractProxyModel* QAbstractProxyModel_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQAbstractProxyModel(parent);
}

void QAbstractProxyModel_virtbase(QAbstractProxyModel* src, QAbstractItemModel** outptr_QAbstractItemModel) {
	*outptr_QAbstractItemModel = static_cast<QAbstractItemModel*>(src);
}

QMetaObject* QAbstractProxyModel_metaObject(const QAbstractProxyModel* self) {
	return (QMetaObject*) self->metaObject();
}

void* QAbstractProxyModel_metacast(QAbstractProxyModel* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QAbstractProxyModel_tr(const char* s) {
	QString _ret = QAbstractProxyModel::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractProxyModel_trUtf8(const char* s) {
	QString _ret = QAbstractProxyModel::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAbstractProxyModel_setSourceModel(QAbstractProxyModel* self, QAbstractItemModel* sourceModel) {
	self->setSourceModel(sourceModel);
}

QAbstractItemModel* QAbstractProxyModel_sourceModel(const QAbstractProxyModel* self) {
	return self->sourceModel();
}

QModelIndex* QAbstractProxyModel_mapToSource(const QAbstractProxyModel* self, QModelIndex* proxyIndex) {
	return new QModelIndex(self->mapToSource(*proxyIndex));
}

QModelIndex* QAbstractProxyModel_mapFromSource(const QAbstractProxyModel* self, QModelIndex* sourceIndex) {
	return new QModelIndex(self->mapFromSource(*sourceIndex));
}

QItemSelection* QAbstractProxyModel_mapSelectionToSource(const QAbstractProxyModel* self, QItemSelection* selection) {
	return new QItemSelection(self->mapSelectionToSource(*selection));
}

QItemSelection* QAbstractProxyModel_mapSelectionFromSource(const QAbstractProxyModel* self, QItemSelection* selection) {
	return new QItemSelection(self->mapSelectionFromSource(*selection));
}

bool QAbstractProxyModel_submit(QAbstractProxyModel* self) {
	return self->submit();
}

void QAbstractProxyModel_revert(QAbstractProxyModel* self) {
	self->revert();
}

QVariant* QAbstractProxyModel_data(const QAbstractProxyModel* self, QModelIndex* proxyIndex, int role) {
	return new QVariant(self->data(*proxyIndex, static_cast<int>(role)));
}

QVariant* QAbstractProxyModel_headerData(const QAbstractProxyModel* self, int section, int orientation, int role) {
	return new QVariant(self->headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

struct miqt_map /* of int to QVariant* */  QAbstractProxyModel_itemData(const QAbstractProxyModel* self, QModelIndex* index) {
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

int QAbstractProxyModel_flags(const QAbstractProxyModel* self, QModelIndex* index) {
	Qt::ItemFlags _ret = self->flags(*index);
	return static_cast<int>(_ret);
}

bool QAbstractProxyModel_setData(QAbstractProxyModel* self, QModelIndex* index, QVariant* value, int role) {
	return self->setData(*index, *value, static_cast<int>(role));
}

bool QAbstractProxyModel_setItemData(QAbstractProxyModel* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
	QMap<int, QVariant> roles_QMap;
	int* roles_karr = static_cast<int*>(roles.keys);
	QVariant** roles_varr = static_cast<QVariant**>(roles.values);
	for(size_t i = 0; i < roles.len; ++i) {
		roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
	}
	return self->setItemData(*index, roles_QMap);
}

bool QAbstractProxyModel_setHeaderData(QAbstractProxyModel* self, int section, int orientation, QVariant* value, int role) {
	return self->setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

QModelIndex* QAbstractProxyModel_buddy(const QAbstractProxyModel* self, QModelIndex* index) {
	return new QModelIndex(self->buddy(*index));
}

bool QAbstractProxyModel_canFetchMore(const QAbstractProxyModel* self, QModelIndex* parent) {
	return self->canFetchMore(*parent);
}

void QAbstractProxyModel_fetchMore(QAbstractProxyModel* self, QModelIndex* parent) {
	self->fetchMore(*parent);
}

void QAbstractProxyModel_sort(QAbstractProxyModel* self, int column, int order) {
	self->sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

QSize* QAbstractProxyModel_span(const QAbstractProxyModel* self, QModelIndex* index) {
	return new QSize(self->span(*index));
}

bool QAbstractProxyModel_hasChildren(const QAbstractProxyModel* self, QModelIndex* parent) {
	return self->hasChildren(*parent);
}

QModelIndex* QAbstractProxyModel_sibling(const QAbstractProxyModel* self, int row, int column, QModelIndex* idx) {
	return new QModelIndex(self->sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

QMimeData* QAbstractProxyModel_mimeData(const QAbstractProxyModel* self, struct miqt_array /* of QModelIndex* */  indexes) {
	QModelIndexList indexes_QList;
	indexes_QList.reserve(indexes.len);
	QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
	for(size_t i = 0; i < indexes.len; ++i) {
		indexes_QList.push_back(*(indexes_arr[i]));
	}
	return self->mimeData(indexes_QList);
}

bool QAbstractProxyModel_canDropMimeData(const QAbstractProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return self->canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QAbstractProxyModel_dropMimeData(QAbstractProxyModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return self->dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

struct miqt_array /* of struct miqt_string */  QAbstractProxyModel_mimeTypes(const QAbstractProxyModel* self) {
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

int QAbstractProxyModel_supportedDragActions(const QAbstractProxyModel* self) {
	Qt::DropActions _ret = self->supportedDragActions();
	return static_cast<int>(_ret);
}

int QAbstractProxyModel_supportedDropActions(const QAbstractProxyModel* self) {
	Qt::DropActions _ret = self->supportedDropActions();
	return static_cast<int>(_ret);
}

struct miqt_string QAbstractProxyModel_tr2(const char* s, const char* c) {
	QString _ret = QAbstractProxyModel::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractProxyModel_tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractProxyModel::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractProxyModel_trUtf82(const char* s, const char* c) {
	QString _ret = QAbstractProxyModel::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAbstractProxyModel_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QAbstractProxyModel::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QAbstractProxyModel_override_virtual_setSourceModel(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setSourceModel = std::move(slot_handle);
	return true;
}

void QAbstractProxyModel_virtualbase_setSourceModel(void* self, QAbstractItemModel* sourceModel) {
	static_cast<MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::setSourceModel(sourceModel);
}

bool QAbstractProxyModel_override_virtual_mapToSource(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mapToSource = std::move(slot_handle);
	self_cast->owns_return__mapToSource = false;
	return true;
}

bool QAbstractProxyModel_override_virtual_owned_mapToSource(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mapToSource = std::move(slot_handle);
	self_cast->owns_return__mapToSource = true;
	return true;
}

bool QAbstractProxyModel_override_virtual_mapFromSource(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mapFromSource = std::move(slot_handle);
	self_cast->owns_return__mapFromSource = false;
	return true;
}

bool QAbstractProxyModel_override_virtual_owned_mapFromSource(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mapFromSource = std::move(slot_handle);
	self_cast->owns_return__mapFromSource = true;
	return true;
}

bool QAbstractProxyModel_override_virtual_mapSelectionToSource(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mapSelectionToSource = std::move(slot_handle);
	self_cast->owns_return__mapSelectionToSource = false;
	return true;
}

bool QAbstractProxyModel_override_virtual_owned_mapSelectionToSource(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mapSelectionToSource = std::move(slot_handle);
	self_cast->owns_return__mapSelectionToSource = true;
	return true;
}

QItemSelection* QAbstractProxyModel_virtualbase_mapSelectionToSource(const void* self, QItemSelection* selection) {
	return new QItemSelection(static_cast<const MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::mapSelectionToSource(*selection));
}

bool QAbstractProxyModel_override_virtual_mapSelectionFromSource(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mapSelectionFromSource = std::move(slot_handle);
	self_cast->owns_return__mapSelectionFromSource = false;
	return true;
}

bool QAbstractProxyModel_override_virtual_owned_mapSelectionFromSource(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mapSelectionFromSource = std::move(slot_handle);
	self_cast->owns_return__mapSelectionFromSource = true;
	return true;
}

QItemSelection* QAbstractProxyModel_virtualbase_mapSelectionFromSource(const void* self, QItemSelection* selection) {
	return new QItemSelection(static_cast<const MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::mapSelectionFromSource(*selection));
}

bool QAbstractProxyModel_override_virtual_submit(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__submit = std::move(slot_handle);
	return true;
}

bool QAbstractProxyModel_virtualbase_submit(void* self) {
	return static_cast<MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::submit();
}

bool QAbstractProxyModel_override_virtual_revert(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__revert = std::move(slot_handle);
	return true;
}

void QAbstractProxyModel_virtualbase_revert(void* self) {
	static_cast<MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::revert();
}

bool QAbstractProxyModel_override_virtual_data(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__data = std::move(slot_handle);
	self_cast->owns_return__data = false;
	return true;
}

bool QAbstractProxyModel_override_virtual_owned_data(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__data = std::move(slot_handle);
	self_cast->owns_return__data = true;
	return true;
}

QVariant* QAbstractProxyModel_virtualbase_data(const void* self, QModelIndex* proxyIndex, int role) {
	return new QVariant(static_cast<const MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::data(*proxyIndex, static_cast<int>(role)));
}

bool QAbstractProxyModel_override_virtual_headerData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__headerData = std::move(slot_handle);
	self_cast->owns_return__headerData = false;
	return true;
}

bool QAbstractProxyModel_override_virtual_owned_headerData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__headerData = std::move(slot_handle);
	self_cast->owns_return__headerData = true;
	return true;
}

QVariant* QAbstractProxyModel_virtualbase_headerData(const void* self, int section, int orientation, int role) {
	return new QVariant(static_cast<const MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::headerData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), static_cast<int>(role)));
}

bool QAbstractProxyModel_override_virtual_itemData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__itemData = std::move(slot_handle);
	return true;
}

struct miqt_map /* of int to QVariant* */  QAbstractProxyModel_virtualbase_itemData(const void* self, QModelIndex* index) {
	QMap<int, QVariant> _ret = static_cast<const MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::itemData(*index);
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

bool QAbstractProxyModel_override_virtual_flags(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__flags = std::move(slot_handle);
	return true;
}

int QAbstractProxyModel_virtualbase_flags(const void* self, QModelIndex* index) {
	Qt::ItemFlags _ret = static_cast<const MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::flags(*index);
	return static_cast<int>(_ret);
}

bool QAbstractProxyModel_override_virtual_setData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setData = std::move(slot_handle);
	return true;
}

bool QAbstractProxyModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role) {
	return static_cast<MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::setData(*index, *value, static_cast<int>(role));
}

bool QAbstractProxyModel_override_virtual_setItemData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setItemData = std::move(slot_handle);
	return true;
}

bool QAbstractProxyModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles) {
	QMap<int, QVariant> roles_QMap;
	int* roles_karr = static_cast<int*>(roles.keys);
	QVariant** roles_varr = static_cast<QVariant**>(roles.values);
	for(size_t i = 0; i < roles.len; ++i) {
		roles_QMap[static_cast<int>(roles_karr[i])] = *(roles_varr[i]);
	}
	return static_cast<MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::setItemData(*index, roles_QMap);
}

bool QAbstractProxyModel_override_virtual_setHeaderData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setHeaderData = std::move(slot_handle);
	return true;
}

bool QAbstractProxyModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role) {
	return static_cast<MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::setHeaderData(static_cast<int>(section), static_cast<Qt::Orientation>(orientation), *value, static_cast<int>(role));
}

bool QAbstractProxyModel_override_virtual_buddy(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__buddy = std::move(slot_handle);
	self_cast->owns_return__buddy = false;
	return true;
}

bool QAbstractProxyModel_override_virtual_owned_buddy(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__buddy = std::move(slot_handle);
	self_cast->owns_return__buddy = true;
	return true;
}

QModelIndex* QAbstractProxyModel_virtualbase_buddy(const void* self, QModelIndex* index) {
	return new QModelIndex(static_cast<const MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::buddy(*index));
}

bool QAbstractProxyModel_override_virtual_canFetchMore(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__canFetchMore = std::move(slot_handle);
	return true;
}

bool QAbstractProxyModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::canFetchMore(*parent);
}

bool QAbstractProxyModel_override_virtual_fetchMore(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__fetchMore = std::move(slot_handle);
	return true;
}

void QAbstractProxyModel_virtualbase_fetchMore(void* self, QModelIndex* parent) {
	static_cast<MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::fetchMore(*parent);
}

bool QAbstractProxyModel_override_virtual_sort(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sort = std::move(slot_handle);
	return true;
}

void QAbstractProxyModel_virtualbase_sort(void* self, int column, int order) {
	static_cast<MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::sort(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

bool QAbstractProxyModel_override_virtual_span(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__span = std::move(slot_handle);
	self_cast->owns_return__span = false;
	return true;
}

bool QAbstractProxyModel_override_virtual_owned_span(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__span = std::move(slot_handle);
	self_cast->owns_return__span = true;
	return true;
}

QSize* QAbstractProxyModel_virtualbase_span(const void* self, QModelIndex* index) {
	return new QSize(static_cast<const MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::span(*index));
}

bool QAbstractProxyModel_override_virtual_hasChildren(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasChildren = std::move(slot_handle);
	return true;
}

bool QAbstractProxyModel_virtualbase_hasChildren(const void* self, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::hasChildren(*parent);
}

bool QAbstractProxyModel_override_virtual_sibling(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sibling = std::move(slot_handle);
	self_cast->owns_return__sibling = false;
	return true;
}

bool QAbstractProxyModel_override_virtual_owned_sibling(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sibling = std::move(slot_handle);
	self_cast->owns_return__sibling = true;
	return true;
}

QModelIndex* QAbstractProxyModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx) {
	return new QModelIndex(static_cast<const MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::sibling(static_cast<int>(row), static_cast<int>(column), *idx));
}

bool QAbstractProxyModel_override_virtual_mimeData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mimeData = std::move(slot_handle);
	return true;
}

QMimeData* QAbstractProxyModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes) {
	QModelIndexList indexes_QList;
	indexes_QList.reserve(indexes.len);
	QModelIndex** indexes_arr = static_cast<QModelIndex**>(indexes.data);
	for(size_t i = 0; i < indexes.len; ++i) {
		indexes_QList.push_back(*(indexes_arr[i]));
	}
	return static_cast<const MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::mimeData(indexes_QList);
}

bool QAbstractProxyModel_override_virtual_canDropMimeData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__canDropMimeData = std::move(slot_handle);
	return true;
}

bool QAbstractProxyModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return static_cast<const MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::canDropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QAbstractProxyModel_override_virtual_dropMimeData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropMimeData = std::move(slot_handle);
	return true;
}

bool QAbstractProxyModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent) {
	return static_cast<MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::dropMimeData(data, static_cast<Qt::DropAction>(action), static_cast<int>(row), static_cast<int>(column), *parent);
}

bool QAbstractProxyModel_override_virtual_mimeTypes(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mimeTypes = std::move(slot_handle);
	return true;
}

struct miqt_array /* of struct miqt_string */  QAbstractProxyModel_virtualbase_mimeTypes(const void* self) {
	QStringList _ret = static_cast<const MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::mimeTypes();
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

bool QAbstractProxyModel_override_virtual_supportedDragActions(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__supportedDragActions = std::move(slot_handle);
	return true;
}

int QAbstractProxyModel_virtualbase_supportedDragActions(const void* self) {
	Qt::DropActions _ret = static_cast<const MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::supportedDragActions();
	return static_cast<int>(_ret);
}

bool QAbstractProxyModel_override_virtual_supportedDropActions(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__supportedDropActions = std::move(slot_handle);
	return true;
}

int QAbstractProxyModel_virtualbase_supportedDropActions(const void* self) {
	Qt::DropActions _ret = static_cast<const MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::supportedDropActions();
	return static_cast<int>(_ret);
}

bool QAbstractProxyModel_override_virtual_index(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__index = std::move(slot_handle);
	self_cast->owns_return__index = false;
	return true;
}

bool QAbstractProxyModel_override_virtual_owned_index(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__index = std::move(slot_handle);
	self_cast->owns_return__index = true;
	return true;
}

bool QAbstractProxyModel_override_virtual_parent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__parent = std::move(slot_handle);
	self_cast->owns_return__parent = false;
	return true;
}

bool QAbstractProxyModel_override_virtual_owned_parent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__parent = std::move(slot_handle);
	self_cast->owns_return__parent = true;
	return true;
}

bool QAbstractProxyModel_override_virtual_rowCount(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__rowCount = std::move(slot_handle);
	return true;
}

bool QAbstractProxyModel_override_virtual_columnCount(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__columnCount = std::move(slot_handle);
	return true;
}

bool QAbstractProxyModel_override_virtual_insertRows(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__insertRows = std::move(slot_handle);
	return true;
}

bool QAbstractProxyModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::insertRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QAbstractProxyModel_override_virtual_insertColumns(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__insertColumns = std::move(slot_handle);
	return true;
}

bool QAbstractProxyModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::insertColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QAbstractProxyModel_override_virtual_removeRows(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__removeRows = std::move(slot_handle);
	return true;
}

bool QAbstractProxyModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::removeRows(static_cast<int>(row), static_cast<int>(count), *parent);
}

bool QAbstractProxyModel_override_virtual_removeColumns(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__removeColumns = std::move(slot_handle);
	return true;
}

bool QAbstractProxyModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent) {
	return static_cast<MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::removeColumns(static_cast<int>(column), static_cast<int>(count), *parent);
}

bool QAbstractProxyModel_override_virtual_moveRows(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveRows = std::move(slot_handle);
	return true;
}

bool QAbstractProxyModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild) {
	return static_cast<MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::moveRows(*sourceParent, static_cast<int>(sourceRow), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QAbstractProxyModel_override_virtual_moveColumns(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveColumns = std::move(slot_handle);
	return true;
}

bool QAbstractProxyModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild) {
	return static_cast<MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::moveColumns(*sourceParent, static_cast<int>(sourceColumn), static_cast<int>(count), *destinationParent, static_cast<int>(destinationChild));
}

bool QAbstractProxyModel_override_virtual_match(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__match = std::move(slot_handle);
	return true;
}

struct miqt_array /* of QModelIndex* */  QAbstractProxyModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags) {
	QModelIndexList _ret = static_cast<const MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::match(*start, static_cast<int>(role), *value, static_cast<int>(hits), static_cast<Qt::MatchFlags>(flags));
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

bool QAbstractProxyModel_override_virtual_roleNames(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__roleNames = std::move(slot_handle);
	return true;
}

struct miqt_map /* of int to struct miqt_string */  QAbstractProxyModel_virtualbase_roleNames(const void* self) {
	QHash<int, QByteArray> _ret = static_cast<const MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::roleNames();
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

bool QAbstractProxyModel_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QAbstractProxyModel_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::event(event);
}

bool QAbstractProxyModel_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QAbstractProxyModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::eventFilter(watched, event);
}

bool QAbstractProxyModel_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QAbstractProxyModel_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::timerEvent(event);
}

bool QAbstractProxyModel_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QAbstractProxyModel_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::childEvent(event);
}

bool QAbstractProxyModel_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QAbstractProxyModel_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::customEvent(event);
}

bool QAbstractProxyModel_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QAbstractProxyModel_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::connectNotify(*signal);
}

bool QAbstractProxyModel_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel> slot_handle(slot);
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QAbstractProxyModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQAbstractProxyModel*>(self)->QAbstractProxyModel::disconnectNotify(*signal);
}

void QAbstractProxyModel_protectedbase_resetInternalData(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->resetInternalData();
}

QModelIndex* QAbstractProxyModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QModelIndex(self_cast->createIndex(static_cast<int>(row), static_cast<int>(column)));
}

void QAbstractProxyModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
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

bool QAbstractProxyModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->decodeData(static_cast<int>(row), static_cast<int>(column), *parent, *stream);
}

void QAbstractProxyModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginInsertRows(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QAbstractProxyModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endInsertRows();
}

void QAbstractProxyModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginRemoveRows(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QAbstractProxyModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endRemoveRows();
}

bool QAbstractProxyModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->beginMoveRows(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationRow));
}

void QAbstractProxyModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endMoveRows();
}

void QAbstractProxyModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginInsertColumns(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QAbstractProxyModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endInsertColumns();
}

void QAbstractProxyModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginRemoveColumns(*parent, static_cast<int>(first), static_cast<int>(last));
}

void QAbstractProxyModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endRemoveColumns();
}

bool QAbstractProxyModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->beginMoveColumns(*sourceParent, static_cast<int>(sourceFirst), static_cast<int>(sourceLast), *destinationParent, static_cast<int>(destinationColumn));
}

void QAbstractProxyModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endMoveColumns();
}

void QAbstractProxyModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->beginResetModel();
}

void QAbstractProxyModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->endResetModel();
}

void QAbstractProxyModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->changePersistentIndex(*from, *to);
}

void QAbstractProxyModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
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

struct miqt_array /* of QModelIndex* */  QAbstractProxyModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
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

QObject* QAbstractProxyModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QAbstractProxyModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QAbstractProxyModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QAbstractProxyModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQAbstractProxyModel* self_cast = dynamic_cast<MiqtVirtualQAbstractProxyModel*>( (QAbstractProxyModel*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void* QAbstractProxyModel_connect_sourceModelChanged(QAbstractProxyModel* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QAbstractProxyModel>>(slot);
	return new QMetaObject::Connection(QAbstractProxyModel::connect(self, &QAbstractProxyModel::sourceModelChanged, self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QAbstractProxyModel_sourceModelChanged(slot);
	}));
}

void QAbstractProxyModel_delete(QAbstractProxyModel* self) {
	delete self;
}

