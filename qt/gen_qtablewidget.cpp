#include <memory>
#include <utility>
#include <QAbstractItemView>
#include <QAbstractScrollArea>
#include <QActionEvent>
#include <QBrush>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QColor>
#include <QContextMenuEvent>
#include <QDataStream>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QFrame>
#include <QHideEvent>
#include <QIcon>
#include <QInputMethodEvent>
#include <QItemSelection>
#include <QItemSelectionModel>
#include <QKeyEvent>
#include <QList>
#include <QMargins>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeData>
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
#include <QTableView>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QTableWidgetSelectionRange>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QVector>
#include <QWheelEvent>
#include <QWidget>
#include <qtablewidget.h>
#include "gen_qtablewidget.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QTableWidgetItem(intptr_t);
QTableWidgetItem* miqt_exec_callback_QTableWidgetItem_clone(const QTableWidgetItem*, intptr_t);
QVariant* miqt_exec_callback_QTableWidgetItem_data(const QTableWidgetItem*, intptr_t, int);
void miqt_exec_callback_QTableWidgetItem_setData(QTableWidgetItem*, intptr_t, int, QVariant*);
bool miqt_exec_callback_QTableWidgetItem_operatorLesser(const QTableWidgetItem*, intptr_t, QTableWidgetItem*);
void miqt_exec_callback_QTableWidgetItem_read(QTableWidgetItem*, intptr_t, QDataStream*);
void miqt_exec_callback_QTableWidgetItem_write(const QTableWidgetItem*, intptr_t, QDataStream*);
void miqt_exec_callback_handle_release_QTableWidget(intptr_t);
void miqt_exec_callback_QTableWidget_itemPressed(intptr_t, QTableWidgetItem*);
void miqt_exec_callback_QTableWidget_itemClicked(intptr_t, QTableWidgetItem*);
void miqt_exec_callback_QTableWidget_itemDoubleClicked(intptr_t, QTableWidgetItem*);
void miqt_exec_callback_QTableWidget_itemActivated(intptr_t, QTableWidgetItem*);
void miqt_exec_callback_QTableWidget_itemEntered(intptr_t, QTableWidgetItem*);
void miqt_exec_callback_QTableWidget_itemChanged(intptr_t, QTableWidgetItem*);
void miqt_exec_callback_QTableWidget_currentItemChanged(intptr_t, QTableWidgetItem*, QTableWidgetItem*);
void miqt_exec_callback_QTableWidget_itemSelectionChanged(intptr_t);
void miqt_exec_callback_QTableWidget_cellPressed(intptr_t, int, int);
void miqt_exec_callback_QTableWidget_cellClicked(intptr_t, int, int);
void miqt_exec_callback_QTableWidget_cellDoubleClicked(intptr_t, int, int);
void miqt_exec_callback_QTableWidget_cellActivated(intptr_t, int, int);
void miqt_exec_callback_QTableWidget_cellEntered(intptr_t, int, int);
void miqt_exec_callback_QTableWidget_cellChanged(intptr_t, int, int);
void miqt_exec_callback_QTableWidget_currentCellChanged(intptr_t, int, int, int, int);
bool miqt_exec_callback_QTableWidget_event(QTableWidget*, intptr_t, QEvent*);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QTableWidget_mimeTypes(const QTableWidget*, intptr_t);
QMimeData* miqt_exec_callback_QTableWidget_mimeData(const QTableWidget*, intptr_t, struct miqt_array /* of QTableWidgetItem* */ );
bool miqt_exec_callback_QTableWidget_dropMimeData(QTableWidget*, intptr_t, int, int, QMimeData*, int);
int miqt_exec_callback_QTableWidget_supportedDropActions(const QTableWidget*, intptr_t);
void miqt_exec_callback_QTableWidget_dropEvent(QTableWidget*, intptr_t, QDropEvent*);
void miqt_exec_callback_QTableWidget_setRootIndex(QTableWidget*, intptr_t, QModelIndex*);
void miqt_exec_callback_QTableWidget_setSelectionModel(QTableWidget*, intptr_t, QItemSelectionModel*);
void miqt_exec_callback_QTableWidget_doItemsLayout(QTableWidget*, intptr_t);
QRect* miqt_exec_callback_QTableWidget_visualRect(const QTableWidget*, intptr_t, QModelIndex*);
void miqt_exec_callback_QTableWidget_scrollTo(QTableWidget*, intptr_t, QModelIndex*, int);
QModelIndex* miqt_exec_callback_QTableWidget_indexAt(const QTableWidget*, intptr_t, QPoint*);
void miqt_exec_callback_QTableWidget_scrollContentsBy(QTableWidget*, intptr_t, int, int);
QStyleOptionViewItem* miqt_exec_callback_QTableWidget_viewOptions(const QTableWidget*, intptr_t);
void miqt_exec_callback_QTableWidget_paintEvent(QTableWidget*, intptr_t, QPaintEvent*);
void miqt_exec_callback_QTableWidget_timerEvent(QTableWidget*, intptr_t, QTimerEvent*);
int miqt_exec_callback_QTableWidget_horizontalOffset(const QTableWidget*, intptr_t);
int miqt_exec_callback_QTableWidget_verticalOffset(const QTableWidget*, intptr_t);
QModelIndex* miqt_exec_callback_QTableWidget_moveCursor(QTableWidget*, intptr_t, int, int);
void miqt_exec_callback_QTableWidget_setSelection(QTableWidget*, intptr_t, QRect*, int);
QRegion* miqt_exec_callback_QTableWidget_visualRegionForSelection(const QTableWidget*, intptr_t, QItemSelection*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QTableWidget_selectedIndexes(const QTableWidget*, intptr_t);
void miqt_exec_callback_QTableWidget_updateGeometries(QTableWidget*, intptr_t);
QSize* miqt_exec_callback_QTableWidget_viewportSizeHint(const QTableWidget*, intptr_t);
int miqt_exec_callback_QTableWidget_sizeHintForRow(const QTableWidget*, intptr_t, int);
int miqt_exec_callback_QTableWidget_sizeHintForColumn(const QTableWidget*, intptr_t, int);
void miqt_exec_callback_QTableWidget_verticalScrollbarAction(QTableWidget*, intptr_t, int);
void miqt_exec_callback_QTableWidget_horizontalScrollbarAction(QTableWidget*, intptr_t, int);
bool miqt_exec_callback_QTableWidget_isIndexHidden(const QTableWidget*, intptr_t, QModelIndex*);
void miqt_exec_callback_QTableWidget_selectionChanged(QTableWidget*, intptr_t, QItemSelection*, QItemSelection*);
void miqt_exec_callback_QTableWidget_currentChanged(QTableWidget*, intptr_t, QModelIndex*, QModelIndex*);
void miqt_exec_callback_QTableWidget_keyboardSearch(QTableWidget*, intptr_t, struct miqt_string);
QVariant* miqt_exec_callback_QTableWidget_inputMethodQuery(const QTableWidget*, intptr_t, int);
void miqt_exec_callback_QTableWidget_reset(QTableWidget*, intptr_t);
void miqt_exec_callback_QTableWidget_selectAll(QTableWidget*, intptr_t);
void miqt_exec_callback_QTableWidget_dataChanged(QTableWidget*, intptr_t, QModelIndex*, QModelIndex*, struct miqt_array /* of int */ );
void miqt_exec_callback_QTableWidget_rowsInserted(QTableWidget*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QTableWidget_rowsAboutToBeRemoved(QTableWidget*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QTableWidget_updateEditorData(QTableWidget*, intptr_t);
void miqt_exec_callback_QTableWidget_updateEditorGeometries(QTableWidget*, intptr_t);
void miqt_exec_callback_QTableWidget_verticalScrollbarValueChanged(QTableWidget*, intptr_t, int);
void miqt_exec_callback_QTableWidget_horizontalScrollbarValueChanged(QTableWidget*, intptr_t, int);
void miqt_exec_callback_QTableWidget_closeEditor(QTableWidget*, intptr_t, QWidget*, int);
void miqt_exec_callback_QTableWidget_commitData(QTableWidget*, intptr_t, QWidget*);
void miqt_exec_callback_QTableWidget_editorDestroyed(QTableWidget*, intptr_t, QObject*);
bool miqt_exec_callback_QTableWidget_edit2(QTableWidget*, intptr_t, QModelIndex*, int, QEvent*);
int miqt_exec_callback_QTableWidget_selectionCommand(const QTableWidget*, intptr_t, QModelIndex*, QEvent*);
void miqt_exec_callback_QTableWidget_startDrag(QTableWidget*, intptr_t, int);
bool miqt_exec_callback_QTableWidget_focusNextPrevChild(QTableWidget*, intptr_t, bool);
bool miqt_exec_callback_QTableWidget_viewportEvent(QTableWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QTableWidget_mousePressEvent(QTableWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTableWidget_mouseMoveEvent(QTableWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTableWidget_mouseReleaseEvent(QTableWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTableWidget_mouseDoubleClickEvent(QTableWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QTableWidget_dragEnterEvent(QTableWidget*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QTableWidget_dragMoveEvent(QTableWidget*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QTableWidget_dragLeaveEvent(QTableWidget*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QTableWidget_focusInEvent(QTableWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QTableWidget_focusOutEvent(QTableWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QTableWidget_keyPressEvent(QTableWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QTableWidget_resizeEvent(QTableWidget*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QTableWidget_inputMethodEvent(QTableWidget*, intptr_t, QInputMethodEvent*);
bool miqt_exec_callback_QTableWidget_eventFilter(QTableWidget*, intptr_t, QObject*, QEvent*);
QSize* miqt_exec_callback_QTableWidget_minimumSizeHint(const QTableWidget*, intptr_t);
QSize* miqt_exec_callback_QTableWidget_sizeHint(const QTableWidget*, intptr_t);
void miqt_exec_callback_QTableWidget_setupViewport(QTableWidget*, intptr_t, QWidget*);
void miqt_exec_callback_QTableWidget_wheelEvent(QTableWidget*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QTableWidget_contextMenuEvent(QTableWidget*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QTableWidget_changeEvent(QTableWidget*, intptr_t, QEvent*);
int miqt_exec_callback_QTableWidget_devType(const QTableWidget*, intptr_t);
void miqt_exec_callback_QTableWidget_setVisible(QTableWidget*, intptr_t, bool);
int miqt_exec_callback_QTableWidget_heightForWidth(const QTableWidget*, intptr_t, int);
bool miqt_exec_callback_QTableWidget_hasHeightForWidth(const QTableWidget*, intptr_t);
QPaintEngine* miqt_exec_callback_QTableWidget_paintEngine(const QTableWidget*, intptr_t);
void miqt_exec_callback_QTableWidget_keyReleaseEvent(QTableWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QTableWidget_enterEvent(QTableWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QTableWidget_leaveEvent(QTableWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QTableWidget_moveEvent(QTableWidget*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QTableWidget_closeEvent(QTableWidget*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QTableWidget_tabletEvent(QTableWidget*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QTableWidget_actionEvent(QTableWidget*, intptr_t, QActionEvent*);
void miqt_exec_callback_QTableWidget_showEvent(QTableWidget*, intptr_t, QShowEvent*);
void miqt_exec_callback_QTableWidget_hideEvent(QTableWidget*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QTableWidget_nativeEvent(QTableWidget*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QTableWidget_metric(const QTableWidget*, intptr_t, int);
void miqt_exec_callback_QTableWidget_initPainter(const QTableWidget*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QTableWidget_redirected(const QTableWidget*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QTableWidget_sharedPainter(const QTableWidget*, intptr_t);
void miqt_exec_callback_QTableWidget_childEvent(QTableWidget*, intptr_t, QChildEvent*);
void miqt_exec_callback_QTableWidget_customEvent(QTableWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QTableWidget_connectNotify(QTableWidget*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QTableWidget_disconnectNotify(QTableWidget*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

QTableWidgetSelectionRange* QTableWidgetSelectionRange_new() {
	return new (std::nothrow) QTableWidgetSelectionRange();
}

QTableWidgetSelectionRange* QTableWidgetSelectionRange_new2(int top, int left, int bottom, int right) {
	return new (std::nothrow) QTableWidgetSelectionRange(static_cast<int>(top), static_cast<int>(left), static_cast<int>(bottom), static_cast<int>(right));
}

QTableWidgetSelectionRange* QTableWidgetSelectionRange_new3(QTableWidgetSelectionRange* other) {
	return new (std::nothrow) QTableWidgetSelectionRange(*other);
}

void QTableWidgetSelectionRange_operatorAssign(QTableWidgetSelectionRange* self, QTableWidgetSelectionRange* other) {
	self->operator=(*other);
}

int QTableWidgetSelectionRange_topRow(const QTableWidgetSelectionRange* self) {
	return self->topRow();
}

int QTableWidgetSelectionRange_bottomRow(const QTableWidgetSelectionRange* self) {
	return self->bottomRow();
}

int QTableWidgetSelectionRange_leftColumn(const QTableWidgetSelectionRange* self) {
	return self->leftColumn();
}

int QTableWidgetSelectionRange_rightColumn(const QTableWidgetSelectionRange* self) {
	return self->rightColumn();
}

int QTableWidgetSelectionRange_rowCount(const QTableWidgetSelectionRange* self) {
	return self->rowCount();
}

int QTableWidgetSelectionRange_columnCount(const QTableWidgetSelectionRange* self) {
	return self->columnCount();
}

void QTableWidgetSelectionRange_delete(QTableWidgetSelectionRange* self) {
	delete self;
}

class MiqtVirtualQTableWidgetItem final : public QTableWidgetItem {
public:

	MiqtVirtualQTableWidgetItem(): QTableWidgetItem() {}
	MiqtVirtualQTableWidgetItem(const QString& text): QTableWidgetItem(text) {}
	MiqtVirtualQTableWidgetItem(const QIcon& icon, const QString& text): QTableWidgetItem(icon, text) {}
	MiqtVirtualQTableWidgetItem(const QTableWidgetItem& other): QTableWidgetItem(other) {}
	MiqtVirtualQTableWidgetItem(int type): QTableWidgetItem(type) {}
	MiqtVirtualQTableWidgetItem(const QString& text, int type): QTableWidgetItem(text, type) {}
	MiqtVirtualQTableWidgetItem(const QIcon& icon, const QString& text, int type): QTableWidgetItem(icon, text, type) {}

	virtual ~MiqtVirtualQTableWidgetItem() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidgetItem> handle__clone;

	// Subclass to allow providing a Go implementation
	virtual QTableWidgetItem* clone() const override {
		if (!handle__clone) {
			return QTableWidgetItem::clone();
		}

		QTableWidgetItem* callback_return_value = miqt_exec_callback_QTableWidgetItem_clone(this, handle__clone.value());
		return callback_return_value;
	}

	friend QTableWidgetItem* QTableWidgetItem_virtualbase_clone(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidgetItem> handle__data;
	bool owns_return__data = false;

	// Subclass to allow providing a Go implementation
	virtual QVariant data(int role) const override {
		if (!handle__data) {
			return QTableWidgetItem::data(role);
		}

		int sigval1 = role;
		QVariant* callback_return_value = miqt_exec_callback_QTableWidgetItem_data(this, handle__data.value(), sigval1);
		std::unique_ptr<QVariant> callback_return_value_owner;
		if (owns_return__data) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QVariant* QTableWidgetItem_virtualbase_data(const void* self, int role);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidgetItem> handle__setData;

	// Subclass to allow providing a Go implementation
	virtual void setData(int role, const QVariant& value) override {
		if (!handle__setData) {
			QTableWidgetItem::setData(role, value);
			return;
		}

		int sigval1 = role;
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		miqt_exec_callback_QTableWidgetItem_setData(this, handle__setData.value(), sigval1, sigval2);

	}

	friend void QTableWidgetItem_virtualbase_setData(void* self, int role, QVariant* value);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidgetItem> handle__operatorLesser;

	// Subclass to allow providing a Go implementation
	virtual bool operator<(const QTableWidgetItem& other) const override {
		if (!handle__operatorLesser) {
			return QTableWidgetItem::operator<(other);
		}

		const QTableWidgetItem& other_ret = other;
		// Cast returned reference into pointer
		QTableWidgetItem* sigval1 = const_cast<QTableWidgetItem*>(&other_ret);
		bool callback_return_value = miqt_exec_callback_QTableWidgetItem_operatorLesser(this, handle__operatorLesser.value(), sigval1);
		return callback_return_value;
	}

	friend bool QTableWidgetItem_virtualbase_operatorLesser(const void* self, QTableWidgetItem* other);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidgetItem> handle__read;

	// Subclass to allow providing a Go implementation
	virtual void read(QDataStream& in) override {
		if (!handle__read) {
			QTableWidgetItem::read(in);
			return;
		}

		QDataStream& in_ret = in;
		// Cast returned reference into pointer
		QDataStream* sigval1 = &in_ret;
		miqt_exec_callback_QTableWidgetItem_read(this, handle__read.value(), sigval1);

	}

	friend void QTableWidgetItem_virtualbase_read(void* self, QDataStream* in);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidgetItem> handle__write;

	// Subclass to allow providing a Go implementation
	virtual void write(QDataStream& out) const override {
		if (!handle__write) {
			QTableWidgetItem::write(out);
			return;
		}

		QDataStream& out_ret = out;
		// Cast returned reference into pointer
		QDataStream* sigval1 = &out_ret;
		miqt_exec_callback_QTableWidgetItem_write(this, handle__write.value(), sigval1);

	}

	friend void QTableWidgetItem_virtualbase_write(const void* self, QDataStream* out);

};

QTableWidgetItem* QTableWidgetItem_new() {
	return new (std::nothrow) MiqtVirtualQTableWidgetItem();
}

QTableWidgetItem* QTableWidgetItem_new2(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new (std::nothrow) MiqtVirtualQTableWidgetItem(text_QString);
}

QTableWidgetItem* QTableWidgetItem_new3(QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new (std::nothrow) MiqtVirtualQTableWidgetItem(*icon, text_QString);
}

QTableWidgetItem* QTableWidgetItem_new4(QTableWidgetItem* other) {
	return new (std::nothrow) MiqtVirtualQTableWidgetItem(*other);
}

QTableWidgetItem* QTableWidgetItem_new5(int type) {
	return new (std::nothrow) MiqtVirtualQTableWidgetItem(static_cast<int>(type));
}

QTableWidgetItem* QTableWidgetItem_new6(struct miqt_string text, int type) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new (std::nothrow) MiqtVirtualQTableWidgetItem(text_QString, static_cast<int>(type));
}

QTableWidgetItem* QTableWidgetItem_new7(QIcon* icon, struct miqt_string text, int type) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new (std::nothrow) MiqtVirtualQTableWidgetItem(*icon, text_QString, static_cast<int>(type));
}

QTableWidgetItem* QTableWidgetItem_clone(const QTableWidgetItem* self) {
	return self->clone();
}

QTableWidget* QTableWidgetItem_tableWidget(const QTableWidgetItem* self) {
	return self->tableWidget();
}

int QTableWidgetItem_row(const QTableWidgetItem* self) {
	return self->row();
}

int QTableWidgetItem_column(const QTableWidgetItem* self) {
	return self->column();
}

void QTableWidgetItem_setSelected(QTableWidgetItem* self, bool select) {
	self->setSelected(select);
}

bool QTableWidgetItem_isSelected(const QTableWidgetItem* self) {
	return self->isSelected();
}

int QTableWidgetItem_flags(const QTableWidgetItem* self) {
	Qt::ItemFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

void QTableWidgetItem_setFlags(QTableWidgetItem* self, int flags) {
	self->setFlags(static_cast<Qt::ItemFlags>(flags));
}

struct miqt_string QTableWidgetItem_text(const QTableWidgetItem* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTableWidgetItem_setText(QTableWidgetItem* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(text_QString);
}

QIcon* QTableWidgetItem_icon(const QTableWidgetItem* self) {
	return new QIcon(self->icon());
}

void QTableWidgetItem_setIcon(QTableWidgetItem* self, QIcon* icon) {
	self->setIcon(*icon);
}

struct miqt_string QTableWidgetItem_statusTip(const QTableWidgetItem* self) {
	QString _ret = self->statusTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTableWidgetItem_setStatusTip(QTableWidgetItem* self, struct miqt_string statusTip) {
	QString statusTip_QString = QString::fromUtf8(statusTip.data, statusTip.len);
	self->setStatusTip(statusTip_QString);
}

struct miqt_string QTableWidgetItem_toolTip(const QTableWidgetItem* self) {
	QString _ret = self->toolTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTableWidgetItem_setToolTip(QTableWidgetItem* self, struct miqt_string toolTip) {
	QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
	self->setToolTip(toolTip_QString);
}

struct miqt_string QTableWidgetItem_whatsThis(const QTableWidgetItem* self) {
	QString _ret = self->whatsThis();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTableWidgetItem_setWhatsThis(QTableWidgetItem* self, struct miqt_string whatsThis) {
	QString whatsThis_QString = QString::fromUtf8(whatsThis.data, whatsThis.len);
	self->setWhatsThis(whatsThis_QString);
}

QFont* QTableWidgetItem_font(const QTableWidgetItem* self) {
	return new QFont(self->font());
}

void QTableWidgetItem_setFont(QTableWidgetItem* self, QFont* font) {
	self->setFont(*font);
}

int QTableWidgetItem_textAlignment(const QTableWidgetItem* self) {
	return self->textAlignment();
}

void QTableWidgetItem_setTextAlignment(QTableWidgetItem* self, int alignment) {
	self->setTextAlignment(static_cast<int>(alignment));
}

QColor* QTableWidgetItem_backgroundColor(const QTableWidgetItem* self) {
	return new QColor(self->backgroundColor());
}

void QTableWidgetItem_setBackgroundColor(QTableWidgetItem* self, QColor* color) {
	self->setBackgroundColor(*color);
}

QBrush* QTableWidgetItem_background(const QTableWidgetItem* self) {
	return new QBrush(self->background());
}

void QTableWidgetItem_setBackground(QTableWidgetItem* self, QBrush* brush) {
	self->setBackground(*brush);
}

QColor* QTableWidgetItem_textColor(const QTableWidgetItem* self) {
	return new QColor(self->textColor());
}

void QTableWidgetItem_setTextColor(QTableWidgetItem* self, QColor* color) {
	self->setTextColor(*color);
}

QBrush* QTableWidgetItem_foreground(const QTableWidgetItem* self) {
	return new QBrush(self->foreground());
}

void QTableWidgetItem_setForeground(QTableWidgetItem* self, QBrush* brush) {
	self->setForeground(*brush);
}

int QTableWidgetItem_checkState(const QTableWidgetItem* self) {
	Qt::CheckState _ret = self->checkState();
	return static_cast<int>(_ret);
}

void QTableWidgetItem_setCheckState(QTableWidgetItem* self, int state) {
	self->setCheckState(static_cast<Qt::CheckState>(state));
}

QSize* QTableWidgetItem_sizeHint(const QTableWidgetItem* self) {
	return new QSize(self->sizeHint());
}

void QTableWidgetItem_setSizeHint(QTableWidgetItem* self, QSize* size) {
	self->setSizeHint(*size);
}

QVariant* QTableWidgetItem_data(const QTableWidgetItem* self, int role) {
	return new QVariant(self->data(static_cast<int>(role)));
}

void QTableWidgetItem_setData(QTableWidgetItem* self, int role, QVariant* value) {
	self->setData(static_cast<int>(role), *value);
}

bool QTableWidgetItem_operatorLesser(const QTableWidgetItem* self, QTableWidgetItem* other) {
	return (*self < *other);
}

void QTableWidgetItem_read(QTableWidgetItem* self, QDataStream* in) {
	self->read(*in);
}

void QTableWidgetItem_write(const QTableWidgetItem* self, QDataStream* out) {
	self->write(*out);
}

void QTableWidgetItem_operatorAssign(QTableWidgetItem* self, QTableWidgetItem* other) {
	self->operator=(*other);
}

int QTableWidgetItem_type(const QTableWidgetItem* self) {
	return self->type();
}

bool QTableWidgetItem_override_virtual_clone(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidgetItem> slot_handle(slot);
	MiqtVirtualQTableWidgetItem* self_cast = dynamic_cast<MiqtVirtualQTableWidgetItem*>( (QTableWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__clone = std::move(slot_handle);
	return true;
}

QTableWidgetItem* QTableWidgetItem_virtualbase_clone(const void* self) {
	return static_cast<const MiqtVirtualQTableWidgetItem*>(self)->QTableWidgetItem::clone();
}

bool QTableWidgetItem_override_virtual_data(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidgetItem> slot_handle(slot);
	MiqtVirtualQTableWidgetItem* self_cast = dynamic_cast<MiqtVirtualQTableWidgetItem*>( (QTableWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__data = std::move(slot_handle);
	self_cast->owns_return__data = false;
	return true;
}

bool QTableWidgetItem_override_virtual_owned_data(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidgetItem> slot_handle(slot);
	MiqtVirtualQTableWidgetItem* self_cast = dynamic_cast<MiqtVirtualQTableWidgetItem*>( (QTableWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__data = std::move(slot_handle);
	self_cast->owns_return__data = true;
	return true;
}

QVariant* QTableWidgetItem_virtualbase_data(const void* self, int role) {
	return new QVariant(static_cast<const MiqtVirtualQTableWidgetItem*>(self)->QTableWidgetItem::data(static_cast<int>(role)));
}

bool QTableWidgetItem_override_virtual_setData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidgetItem> slot_handle(slot);
	MiqtVirtualQTableWidgetItem* self_cast = dynamic_cast<MiqtVirtualQTableWidgetItem*>( (QTableWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setData = std::move(slot_handle);
	return true;
}

void QTableWidgetItem_virtualbase_setData(void* self, int role, QVariant* value) {
	static_cast<MiqtVirtualQTableWidgetItem*>(self)->QTableWidgetItem::setData(static_cast<int>(role), *value);
}

bool QTableWidgetItem_override_virtual_operatorLesser(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidgetItem> slot_handle(slot);
	MiqtVirtualQTableWidgetItem* self_cast = dynamic_cast<MiqtVirtualQTableWidgetItem*>( (QTableWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__operatorLesser = std::move(slot_handle);
	return true;
}

bool QTableWidgetItem_virtualbase_operatorLesser(const void* self, QTableWidgetItem* other) {
	return static_cast<const MiqtVirtualQTableWidgetItem*>(self)->QTableWidgetItem::operator<(*other);
}

bool QTableWidgetItem_override_virtual_read(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidgetItem> slot_handle(slot);
	MiqtVirtualQTableWidgetItem* self_cast = dynamic_cast<MiqtVirtualQTableWidgetItem*>( (QTableWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__read = std::move(slot_handle);
	return true;
}

void QTableWidgetItem_virtualbase_read(void* self, QDataStream* in) {
	static_cast<MiqtVirtualQTableWidgetItem*>(self)->QTableWidgetItem::read(*in);
}

bool QTableWidgetItem_override_virtual_write(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidgetItem> slot_handle(slot);
	MiqtVirtualQTableWidgetItem* self_cast = dynamic_cast<MiqtVirtualQTableWidgetItem*>( (QTableWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__write = std::move(slot_handle);
	return true;
}

void QTableWidgetItem_virtualbase_write(const void* self, QDataStream* out) {
	static_cast<const MiqtVirtualQTableWidgetItem*>(self)->QTableWidgetItem::write(*out);
}

void QTableWidgetItem_delete(QTableWidgetItem* self) {
	delete self;
}

class MiqtVirtualQTableWidget final : public QTableWidget {
public:

	MiqtVirtualQTableWidget(QWidget* parent): QTableWidget(parent) {}
	MiqtVirtualQTableWidget(): QTableWidget() {}
	MiqtVirtualQTableWidget(int rows, int columns): QTableWidget(rows, columns) {}
	MiqtVirtualQTableWidget(int rows, int columns, QWidget* parent): QTableWidget(rows, columns, parent) {}

	virtual ~MiqtVirtualQTableWidget() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (!handle__event) {
			return QTableWidget::event(e);
		}

		QEvent* sigval1 = e;
		bool callback_return_value = miqt_exec_callback_QTableWidget_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QTableWidget_virtualbase_event(void* self, QEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__mimeTypes;

	// Subclass to allow providing a Go implementation
	virtual QStringList mimeTypes() const override {
		if (!handle__mimeTypes) {
			return QTableWidget::mimeTypes();
		}

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QTableWidget_mimeTypes(this, handle__mimeTypes.value());
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

	friend struct miqt_array /* of struct miqt_string */  QTableWidget_virtualbase_mimeTypes(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__mimeData;

	// Subclass to allow providing a Go implementation
	virtual QMimeData* mimeData(const QList<QTableWidgetItem *> items) const override {
		if (!handle__mimeData) {
			return QTableWidget::mimeData(items);
		}

		const QList<QTableWidgetItem *> items_ret = items;
		// Convert QList<> from C++ memory to manually-managed C memory
		QTableWidgetItem** items_arr = static_cast<QTableWidgetItem**>(malloc(sizeof(QTableWidgetItem*) * items_ret.length()));
		for (size_t i = 0, e = items_ret.length(); i < e; ++i) {
			items_arr[i] = items_ret[i];
		}
		struct miqt_array items_out;
		items_out.len = items_ret.length();
		items_out.data = static_cast<void*>(items_arr);
		struct miqt_array /* of QTableWidgetItem* */  sigval1 = items_out;
		QMimeData* callback_return_value = miqt_exec_callback_QTableWidget_mimeData(this, handle__mimeData.value(), sigval1);
		return callback_return_value;
	}

	friend QMimeData* QTableWidget_virtualbase_mimeData(const void* self, struct miqt_array /* of QTableWidgetItem* */  items);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__dropMimeData;

	// Subclass to allow providing a Go implementation
	virtual bool dropMimeData(int row, int column, const QMimeData* data, Qt::DropAction action) override {
		if (!handle__dropMimeData) {
			return QTableWidget::dropMimeData(row, column, data, action);
		}

		int sigval1 = row;
		int sigval2 = column;
		QMimeData* sigval3 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval4 = static_cast<int>(action_ret);
		bool callback_return_value = miqt_exec_callback_QTableWidget_dropMimeData(this, handle__dropMimeData.value(), sigval1, sigval2, sigval3, sigval4);
		return callback_return_value;
	}

	friend bool QTableWidget_virtualbase_dropMimeData(void* self, int row, int column, QMimeData* data, int action);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__supportedDropActions;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDropActions() const override {
		if (!handle__supportedDropActions) {
			return QTableWidget::supportedDropActions();
		}

		int callback_return_value = miqt_exec_callback_QTableWidget_supportedDropActions(this, handle__supportedDropActions.value());
		return static_cast<Qt::DropActions>(callback_return_value);
	}

	friend int QTableWidget_virtualbase_supportedDropActions(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__dropEvent;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (!handle__dropEvent) {
			QTableWidget::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QTableWidget_dropEvent(this, handle__dropEvent.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__setRootIndex;

	// Subclass to allow providing a Go implementation
	virtual void setRootIndex(const QModelIndex& index) override {
		if (!handle__setRootIndex) {
			QTableWidget::setRootIndex(index);
			return;
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		miqt_exec_callback_QTableWidget_setRootIndex(this, handle__setRootIndex.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_setRootIndex(void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__setSelectionModel;

	// Subclass to allow providing a Go implementation
	virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
		if (!handle__setSelectionModel) {
			QTableWidget::setSelectionModel(selectionModel);
			return;
		}

		QItemSelectionModel* sigval1 = selectionModel;
		miqt_exec_callback_QTableWidget_setSelectionModel(this, handle__setSelectionModel.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_setSelectionModel(void* self, QItemSelectionModel* selectionModel);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__doItemsLayout;

	// Subclass to allow providing a Go implementation
	virtual void doItemsLayout() override {
		if (!handle__doItemsLayout) {
			QTableWidget::doItemsLayout();
			return;
		}

		miqt_exec_callback_QTableWidget_doItemsLayout(this, handle__doItemsLayout.value());

	}

	friend void QTableWidget_virtualbase_doItemsLayout(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__visualRect;
	bool owns_return__visualRect = false;

	// Subclass to allow providing a Go implementation
	virtual QRect visualRect(const QModelIndex& index) const override {
		if (!handle__visualRect) {
			return QTableWidget::visualRect(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QRect* callback_return_value = miqt_exec_callback_QTableWidget_visualRect(this, handle__visualRect.value(), sigval1);
		std::unique_ptr<QRect> callback_return_value_owner;
		if (owns_return__visualRect) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QRect* QTableWidget_virtualbase_visualRect(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__scrollTo;

	// Subclass to allow providing a Go implementation
	virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
		if (!handle__scrollTo) {
			QTableWidget::scrollTo(index, hint);
			return;
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::ScrollHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);
		miqt_exec_callback_QTableWidget_scrollTo(this, handle__scrollTo.value(), sigval1, sigval2);

	}

	friend void QTableWidget_virtualbase_scrollTo(void* self, QModelIndex* index, int hint);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__indexAt;
	bool owns_return__indexAt = false;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex indexAt(const QPoint& p) const override {
		if (!handle__indexAt) {
			return QTableWidget::indexAt(p);
		}

		const QPoint& p_ret = p;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&p_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QTableWidget_indexAt(this, handle__indexAt.value(), sigval1);
		std::unique_ptr<QModelIndex> callback_return_value_owner;
		if (owns_return__indexAt) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QModelIndex* QTableWidget_virtualbase_indexAt(const void* self, QPoint* p);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__scrollContentsBy;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (!handle__scrollContentsBy) {
			QTableWidget::scrollContentsBy(dx, dy);
			return;
		}

		int sigval1 = dx;
		int sigval2 = dy;
		miqt_exec_callback_QTableWidget_scrollContentsBy(this, handle__scrollContentsBy.value(), sigval1, sigval2);

	}

	friend void QTableWidget_virtualbase_scrollContentsBy(void* self, int dx, int dy);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__viewOptions;
	bool owns_return__viewOptions = false;

	// Subclass to allow providing a Go implementation
	virtual QStyleOptionViewItem viewOptions() const override {
		if (!handle__viewOptions) {
			return QTableWidget::viewOptions();
		}

		QStyleOptionViewItem* callback_return_value = miqt_exec_callback_QTableWidget_viewOptions(this, handle__viewOptions.value());
		std::unique_ptr<QStyleOptionViewItem> callback_return_value_owner;
		if (owns_return__viewOptions) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QStyleOptionViewItem* QTableWidget_virtualbase_viewOptions(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__paintEvent;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* e) override {
		if (!handle__paintEvent) {
			QTableWidget::paintEvent(e);
			return;
		}

		QPaintEvent* sigval1 = e;
		miqt_exec_callback_QTableWidget_paintEvent(this, handle__paintEvent.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_paintEvent(void* self, QPaintEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QTableWidget::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QTableWidget_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__horizontalOffset;

	// Subclass to allow providing a Go implementation
	virtual int horizontalOffset() const override {
		if (!handle__horizontalOffset) {
			return QTableWidget::horizontalOffset();
		}

		int callback_return_value = miqt_exec_callback_QTableWidget_horizontalOffset(this, handle__horizontalOffset.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QTableWidget_virtualbase_horizontalOffset(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__verticalOffset;

	// Subclass to allow providing a Go implementation
	virtual int verticalOffset() const override {
		if (!handle__verticalOffset) {
			return QTableWidget::verticalOffset();
		}

		int callback_return_value = miqt_exec_callback_QTableWidget_verticalOffset(this, handle__verticalOffset.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QTableWidget_virtualbase_verticalOffset(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__moveCursor;
	bool owns_return__moveCursor = false;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
		if (!handle__moveCursor) {
			return QTableWidget::moveCursor(cursorAction, modifiers);
		}

		QAbstractItemView::CursorAction cursorAction_ret = cursorAction;
		int sigval1 = static_cast<int>(cursorAction_ret);
		Qt::KeyboardModifiers modifiers_ret = modifiers;
		int sigval2 = static_cast<int>(modifiers_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QTableWidget_moveCursor(this, handle__moveCursor.value(), sigval1, sigval2);
		std::unique_ptr<QModelIndex> callback_return_value_owner;
		if (owns_return__moveCursor) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QModelIndex* QTableWidget_virtualbase_moveCursor(void* self, int cursorAction, int modifiers);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__setSelection;

	// Subclass to allow providing a Go implementation
	virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
		if (!handle__setSelection) {
			QTableWidget::setSelection(rect, command);
			return;
		}

		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);
		QItemSelectionModel::SelectionFlags command_ret = command;
		int sigval2 = static_cast<int>(command_ret);
		miqt_exec_callback_QTableWidget_setSelection(this, handle__setSelection.value(), sigval1, sigval2);

	}

	friend void QTableWidget_virtualbase_setSelection(void* self, QRect* rect, int command);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__visualRegionForSelection;
	bool owns_return__visualRegionForSelection = false;

	// Subclass to allow providing a Go implementation
	virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
		if (!handle__visualRegionForSelection) {
			return QTableWidget::visualRegionForSelection(selection);
		}

		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);
		QRegion* callback_return_value = miqt_exec_callback_QTableWidget_visualRegionForSelection(this, handle__visualRegionForSelection.value(), sigval1);
		std::unique_ptr<QRegion> callback_return_value_owner;
		if (owns_return__visualRegionForSelection) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QRegion* QTableWidget_virtualbase_visualRegionForSelection(const void* self, QItemSelection* selection);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__selectedIndexes;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList selectedIndexes() const override {
		if (!handle__selectedIndexes) {
			return QTableWidget::selectedIndexes();
		}

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QTableWidget_selectedIndexes(this, handle__selectedIndexes.value());
		QModelIndexList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QModelIndex** callback_return_value_arr = static_cast<QModelIndex**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(*(callback_return_value_arr[i]));
		}
		free(callback_return_value.data);
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of QModelIndex* */  QTableWidget_virtualbase_selectedIndexes(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__updateGeometries;

	// Subclass to allow providing a Go implementation
	virtual void updateGeometries() override {
		if (!handle__updateGeometries) {
			QTableWidget::updateGeometries();
			return;
		}

		miqt_exec_callback_QTableWidget_updateGeometries(this, handle__updateGeometries.value());

	}

	friend void QTableWidget_virtualbase_updateGeometries(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__viewportSizeHint;
	bool owns_return__viewportSizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (!handle__viewportSizeHint) {
			return QTableWidget::viewportSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QTableWidget_viewportSizeHint(this, handle__viewportSizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__viewportSizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QTableWidget_virtualbase_viewportSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__sizeHintForRow;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForRow(int row) const override {
		if (!handle__sizeHintForRow) {
			return QTableWidget::sizeHintForRow(row);
		}

		int sigval1 = row;
		int callback_return_value = miqt_exec_callback_QTableWidget_sizeHintForRow(this, handle__sizeHintForRow.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QTableWidget_virtualbase_sizeHintForRow(const void* self, int row);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__sizeHintForColumn;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForColumn(int column) const override {
		if (!handle__sizeHintForColumn) {
			return QTableWidget::sizeHintForColumn(column);
		}

		int sigval1 = column;
		int callback_return_value = miqt_exec_callback_QTableWidget_sizeHintForColumn(this, handle__sizeHintForColumn.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QTableWidget_virtualbase_sizeHintForColumn(const void* self, int column);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__verticalScrollbarAction;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarAction(int action) override {
		if (!handle__verticalScrollbarAction) {
			QTableWidget::verticalScrollbarAction(action);
			return;
		}

		int sigval1 = action;
		miqt_exec_callback_QTableWidget_verticalScrollbarAction(this, handle__verticalScrollbarAction.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_verticalScrollbarAction(void* self, int action);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__horizontalScrollbarAction;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarAction(int action) override {
		if (!handle__horizontalScrollbarAction) {
			QTableWidget::horizontalScrollbarAction(action);
			return;
		}

		int sigval1 = action;
		miqt_exec_callback_QTableWidget_horizontalScrollbarAction(this, handle__horizontalScrollbarAction.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_horizontalScrollbarAction(void* self, int action);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__isIndexHidden;

	// Subclass to allow providing a Go implementation
	virtual bool isIndexHidden(const QModelIndex& index) const override {
		if (!handle__isIndexHidden) {
			return QTableWidget::isIndexHidden(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		bool callback_return_value = miqt_exec_callback_QTableWidget_isIndexHidden(this, handle__isIndexHidden.value(), sigval1);
		return callback_return_value;
	}

	friend bool QTableWidget_virtualbase_isIndexHidden(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__selectionChanged;

	// Subclass to allow providing a Go implementation
	virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
		if (!handle__selectionChanged) {
			QTableWidget::selectionChanged(selected, deselected);
			return;
		}

		const QItemSelection& selected_ret = selected;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selected_ret);
		const QItemSelection& deselected_ret = deselected;
		// Cast returned reference into pointer
		QItemSelection* sigval2 = const_cast<QItemSelection*>(&deselected_ret);
		miqt_exec_callback_QTableWidget_selectionChanged(this, handle__selectionChanged.value(), sigval1, sigval2);

	}

	friend void QTableWidget_virtualbase_selectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__currentChanged;

	// Subclass to allow providing a Go implementation
	virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
		if (!handle__currentChanged) {
			QTableWidget::currentChanged(current, previous);
			return;
		}

		const QModelIndex& current_ret = current;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&current_ret);
		const QModelIndex& previous_ret = previous;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&previous_ret);
		miqt_exec_callback_QTableWidget_currentChanged(this, handle__currentChanged.value(), sigval1, sigval2);

	}

	friend void QTableWidget_virtualbase_currentChanged(void* self, QModelIndex* current, QModelIndex* previous);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__keyboardSearch;

	// Subclass to allow providing a Go implementation
	virtual void keyboardSearch(const QString& search) override {
		if (!handle__keyboardSearch) {
			QTableWidget::keyboardSearch(search);
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
		miqt_exec_callback_QTableWidget_keyboardSearch(this, handle__keyboardSearch.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_keyboardSearch(void* self, struct miqt_string search);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__inputMethodQuery;
	bool owns_return__inputMethodQuery = false;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (!handle__inputMethodQuery) {
			return QTableWidget::inputMethodQuery(query);
		}

		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);
		QVariant* callback_return_value = miqt_exec_callback_QTableWidget_inputMethodQuery(this, handle__inputMethodQuery.value(), sigval1);
		std::unique_ptr<QVariant> callback_return_value_owner;
		if (owns_return__inputMethodQuery) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QVariant* QTableWidget_virtualbase_inputMethodQuery(const void* self, int query);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__reset;

	// Subclass to allow providing a Go implementation
	virtual void reset() override {
		if (!handle__reset) {
			QTableWidget::reset();
			return;
		}

		miqt_exec_callback_QTableWidget_reset(this, handle__reset.value());

	}

	friend void QTableWidget_virtualbase_reset(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__selectAll;

	// Subclass to allow providing a Go implementation
	virtual void selectAll() override {
		if (!handle__selectAll) {
			QTableWidget::selectAll();
			return;
		}

		miqt_exec_callback_QTableWidget_selectAll(this, handle__selectAll.value());

	}

	friend void QTableWidget_virtualbase_selectAll(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__dataChanged;

	// Subclass to allow providing a Go implementation
	virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QVector<int>& roles) override {
		if (!handle__dataChanged) {
			QTableWidget::dataChanged(topLeft, bottomRight, roles);
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
		miqt_exec_callback_QTableWidget_dataChanged(this, handle__dataChanged.value(), sigval1, sigval2, sigval3);

	}

	friend void QTableWidget_virtualbase_dataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__rowsInserted;

	// Subclass to allow providing a Go implementation
	virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
		if (!handle__rowsInserted) {
			QTableWidget::rowsInserted(parent, start, end);
			return;
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;
		miqt_exec_callback_QTableWidget_rowsInserted(this, handle__rowsInserted.value(), sigval1, sigval2, sigval3);

	}

	friend void QTableWidget_virtualbase_rowsInserted(void* self, QModelIndex* parent, int start, int end);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__rowsAboutToBeRemoved;

	// Subclass to allow providing a Go implementation
	virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
		if (!handle__rowsAboutToBeRemoved) {
			QTableWidget::rowsAboutToBeRemoved(parent, start, end);
			return;
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;
		miqt_exec_callback_QTableWidget_rowsAboutToBeRemoved(this, handle__rowsAboutToBeRemoved.value(), sigval1, sigval2, sigval3);

	}

	friend void QTableWidget_virtualbase_rowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__updateEditorData;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorData() override {
		if (!handle__updateEditorData) {
			QTableWidget::updateEditorData();
			return;
		}

		miqt_exec_callback_QTableWidget_updateEditorData(this, handle__updateEditorData.value());

	}

	friend void QTableWidget_virtualbase_updateEditorData(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__updateEditorGeometries;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorGeometries() override {
		if (!handle__updateEditorGeometries) {
			QTableWidget::updateEditorGeometries();
			return;
		}

		miqt_exec_callback_QTableWidget_updateEditorGeometries(this, handle__updateEditorGeometries.value());

	}

	friend void QTableWidget_virtualbase_updateEditorGeometries(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__verticalScrollbarValueChanged;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarValueChanged(int value) override {
		if (!handle__verticalScrollbarValueChanged) {
			QTableWidget::verticalScrollbarValueChanged(value);
			return;
		}

		int sigval1 = value;
		miqt_exec_callback_QTableWidget_verticalScrollbarValueChanged(this, handle__verticalScrollbarValueChanged.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_verticalScrollbarValueChanged(void* self, int value);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__horizontalScrollbarValueChanged;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarValueChanged(int value) override {
		if (!handle__horizontalScrollbarValueChanged) {
			QTableWidget::horizontalScrollbarValueChanged(value);
			return;
		}

		int sigval1 = value;
		miqt_exec_callback_QTableWidget_horizontalScrollbarValueChanged(this, handle__horizontalScrollbarValueChanged.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_horizontalScrollbarValueChanged(void* self, int value);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__closeEditor;

	// Subclass to allow providing a Go implementation
	virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
		if (!handle__closeEditor) {
			QTableWidget::closeEditor(editor, hint);
			return;
		}

		QWidget* sigval1 = editor;
		QAbstractItemDelegate::EndEditHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);
		miqt_exec_callback_QTableWidget_closeEditor(this, handle__closeEditor.value(), sigval1, sigval2);

	}

	friend void QTableWidget_virtualbase_closeEditor(void* self, QWidget* editor, int hint);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__commitData;

	// Subclass to allow providing a Go implementation
	virtual void commitData(QWidget* editor) override {
		if (!handle__commitData) {
			QTableWidget::commitData(editor);
			return;
		}

		QWidget* sigval1 = editor;
		miqt_exec_callback_QTableWidget_commitData(this, handle__commitData.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_commitData(void* self, QWidget* editor);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__editorDestroyed;

	// Subclass to allow providing a Go implementation
	virtual void editorDestroyed(QObject* editor) override {
		if (!handle__editorDestroyed) {
			QTableWidget::editorDestroyed(editor);
			return;
		}

		QObject* sigval1 = editor;
		miqt_exec_callback_QTableWidget_editorDestroyed(this, handle__editorDestroyed.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_editorDestroyed(void* self, QObject* editor);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__edit2;

	// Subclass to allow providing a Go implementation
	virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
		if (!handle__edit2) {
			return QTableWidget::edit(index, trigger, event);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::EditTrigger trigger_ret = trigger;
		int sigval2 = static_cast<int>(trigger_ret);
		QEvent* sigval3 = event;
		bool callback_return_value = miqt_exec_callback_QTableWidget_edit2(this, handle__edit2.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QTableWidget_virtualbase_edit2(void* self, QModelIndex* index, int trigger, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__selectionCommand;

	// Subclass to allow providing a Go implementation
	virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
		if (!handle__selectionCommand) {
			return QTableWidget::selectionCommand(index, event);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QEvent* sigval2 = (QEvent*) event;
		int callback_return_value = miqt_exec_callback_QTableWidget_selectionCommand(this, handle__selectionCommand.value(), sigval1, sigval2);
		return static_cast<QItemSelectionModel::SelectionFlags>(callback_return_value);
	}

	friend int QTableWidget_virtualbase_selectionCommand(const void* self, QModelIndex* index, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__startDrag;

	// Subclass to allow providing a Go implementation
	virtual void startDrag(Qt::DropActions supportedActions) override {
		if (!handle__startDrag) {
			QTableWidget::startDrag(supportedActions);
			return;
		}

		Qt::DropActions supportedActions_ret = supportedActions;
		int sigval1 = static_cast<int>(supportedActions_ret);
		miqt_exec_callback_QTableWidget_startDrag(this, handle__startDrag.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_startDrag(void* self, int supportedActions);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__focusNextPrevChild;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (!handle__focusNextPrevChild) {
			return QTableWidget::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QTableWidget_focusNextPrevChild(this, handle__focusNextPrevChild.value(), sigval1);
		return callback_return_value;
	}

	friend bool QTableWidget_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__viewportEvent;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* event) override {
		if (!handle__viewportEvent) {
			return QTableWidget::viewportEvent(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QTableWidget_viewportEvent(this, handle__viewportEvent.value(), sigval1);
		return callback_return_value;
	}

	friend bool QTableWidget_virtualbase_viewportEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__mousePressEvent;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (!handle__mousePressEvent) {
			QTableWidget::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QTableWidget_mousePressEvent(this, handle__mousePressEvent.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__mouseMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* event) override {
		if (!handle__mouseMoveEvent) {
			QTableWidget::mouseMoveEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QTableWidget_mouseMoveEvent(this, handle__mouseMoveEvent.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__mouseReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* event) override {
		if (!handle__mouseReleaseEvent) {
			QTableWidget::mouseReleaseEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QTableWidget_mouseReleaseEvent(this, handle__mouseReleaseEvent.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__mouseDoubleClickEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (!handle__mouseDoubleClickEvent) {
			QTableWidget::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QTableWidget_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__dragEnterEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (!handle__dragEnterEvent) {
			QTableWidget::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QTableWidget_dragEnterEvent(this, handle__dragEnterEvent.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__dragMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* event) override {
		if (!handle__dragMoveEvent) {
			QTableWidget::dragMoveEvent(event);
			return;
		}

		QDragMoveEvent* sigval1 = event;
		miqt_exec_callback_QTableWidget_dragMoveEvent(this, handle__dragMoveEvent.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__dragLeaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* event) override {
		if (!handle__dragLeaveEvent) {
			QTableWidget::dragLeaveEvent(event);
			return;
		}

		QDragLeaveEvent* sigval1 = event;
		miqt_exec_callback_QTableWidget_dragLeaveEvent(this, handle__dragLeaveEvent.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__focusInEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (!handle__focusInEvent) {
			QTableWidget::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QTableWidget_focusInEvent(this, handle__focusInEvent.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__focusOutEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (!handle__focusOutEvent) {
			QTableWidget::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QTableWidget_focusOutEvent(this, handle__focusOutEvent.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__keyPressEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (!handle__keyPressEvent) {
			QTableWidget::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QTableWidget_keyPressEvent(this, handle__keyPressEvent.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__resizeEvent;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* event) override {
		if (!handle__resizeEvent) {
			QTableWidget::resizeEvent(event);
			return;
		}

		QResizeEvent* sigval1 = event;
		miqt_exec_callback_QTableWidget_resizeEvent(this, handle__resizeEvent.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_resizeEvent(void* self, QResizeEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__inputMethodEvent;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (!handle__inputMethodEvent) {
			QTableWidget::inputMethodEvent(event);
			return;
		}

		QInputMethodEvent* sigval1 = event;
		miqt_exec_callback_QTableWidget_inputMethodEvent(this, handle__inputMethodEvent.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (!handle__eventFilter) {
			return QTableWidget::eventFilter(object, event);
		}

		QObject* sigval1 = object;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QTableWidget_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QTableWidget_virtualbase_eventFilter(void* self, QObject* object, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__minimumSizeHint;
	bool owns_return__minimumSizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (!handle__minimumSizeHint) {
			return QTableWidget::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QTableWidget_minimumSizeHint(this, handle__minimumSizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__minimumSizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QTableWidget_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__sizeHint;
	bool owns_return__sizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (!handle__sizeHint) {
			return QTableWidget::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QTableWidget_sizeHint(this, handle__sizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__sizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QTableWidget_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__setupViewport;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (!handle__setupViewport) {
			QTableWidget::setupViewport(viewport);
			return;
		}

		QWidget* sigval1 = viewport;
		miqt_exec_callback_QTableWidget_setupViewport(this, handle__setupViewport.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_setupViewport(void* self, QWidget* viewport);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__wheelEvent;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* param1) override {
		if (!handle__wheelEvent) {
			QTableWidget::wheelEvent(param1);
			return;
		}

		QWheelEvent* sigval1 = param1;
		miqt_exec_callback_QTableWidget_wheelEvent(this, handle__wheelEvent.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_wheelEvent(void* self, QWheelEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__contextMenuEvent;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (!handle__contextMenuEvent) {
			QTableWidget::contextMenuEvent(param1);
			return;
		}

		QContextMenuEvent* sigval1 = param1;
		miqt_exec_callback_QTableWidget_contextMenuEvent(this, handle__contextMenuEvent.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__changeEvent;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (!handle__changeEvent) {
			QTableWidget::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QTableWidget_changeEvent(this, handle__changeEvent.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__devType;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (!handle__devType) {
			return QTableWidget::devType();
		}

		int callback_return_value = miqt_exec_callback_QTableWidget_devType(this, handle__devType.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QTableWidget_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__setVisible;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (!handle__setVisible) {
			QTableWidget::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QTableWidget_setVisible(this, handle__setVisible.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__heightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (!handle__heightForWidth) {
			return QTableWidget::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QTableWidget_heightForWidth(this, handle__heightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QTableWidget_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__hasHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (!handle__hasHeightForWidth) {
			return QTableWidget::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QTableWidget_hasHeightForWidth(this, handle__hasHeightForWidth.value());
		return callback_return_value;
	}

	friend bool QTableWidget_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__paintEngine;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (!handle__paintEngine) {
			return QTableWidget::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QTableWidget_paintEngine(this, handle__paintEngine.value());
		return callback_return_value;
	}

	friend QPaintEngine* QTableWidget_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__keyReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (!handle__keyReleaseEvent) {
			QTableWidget::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QTableWidget_keyReleaseEvent(this, handle__keyReleaseEvent.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__enterEvent;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (!handle__enterEvent) {
			QTableWidget::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QTableWidget_enterEvent(this, handle__enterEvent.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__leaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (!handle__leaveEvent) {
			QTableWidget::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QTableWidget_leaveEvent(this, handle__leaveEvent.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__moveEvent;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (!handle__moveEvent) {
			QTableWidget::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QTableWidget_moveEvent(this, handle__moveEvent.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__closeEvent;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (!handle__closeEvent) {
			QTableWidget::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QTableWidget_closeEvent(this, handle__closeEvent.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__tabletEvent;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (!handle__tabletEvent) {
			QTableWidget::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QTableWidget_tabletEvent(this, handle__tabletEvent.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__actionEvent;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (!handle__actionEvent) {
			QTableWidget::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QTableWidget_actionEvent(this, handle__actionEvent.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__showEvent;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (!handle__showEvent) {
			QTableWidget::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QTableWidget_showEvent(this, handle__showEvent.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__hideEvent;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (!handle__hideEvent) {
			QTableWidget::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QTableWidget_hideEvent(this, handle__hideEvent.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__nativeEvent;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (!handle__nativeEvent) {
			return QTableWidget::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QTableWidget_nativeEvent(this, handle__nativeEvent.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QTableWidget_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__metric;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (!handle__metric) {
			return QTableWidget::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QTableWidget_metric(this, handle__metric.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QTableWidget_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__initPainter;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (!handle__initPainter) {
			QTableWidget::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QTableWidget_initPainter(this, handle__initPainter.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__redirected;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (!handle__redirected) {
			return QTableWidget::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QTableWidget_redirected(this, handle__redirected.value(), sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QTableWidget_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__sharedPainter;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (!handle__sharedPainter) {
			return QTableWidget::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QTableWidget_sharedPainter(this, handle__sharedPainter.value());
		return callback_return_value;
	}

	friend QPainter* QTableWidget_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QTableWidget::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QTableWidget_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QTableWidget::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QTableWidget_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QTableWidget::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QTableWidget_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QTableWidget::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QTableWidget_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QTableWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend struct miqt_array /* of QTableWidgetItem* */  QTableWidget_protectedbase_items(bool* _dynamic_cast_ok, const void* self, QMimeData* data);
	friend QModelIndex* QTableWidget_protectedbase_indexFromItem(bool* _dynamic_cast_ok, const void* self, QTableWidgetItem* item);
	friend QModelIndex* QTableWidget_protectedbase_indexFromItemWithItem(bool* _dynamic_cast_ok, const void* self, QTableWidgetItem* item);
	friend QTableWidgetItem* QTableWidget_protectedbase_itemFromIndex(bool* _dynamic_cast_ok, const void* self, QModelIndex* index);
	friend void QTableWidget_protectedbase_rowMoved(bool* _dynamic_cast_ok, void* self, int row, int oldIndex, int newIndex);
	friend void QTableWidget_protectedbase_columnMoved(bool* _dynamic_cast_ok, void* self, int column, int oldIndex, int newIndex);
	friend void QTableWidget_protectedbase_rowResized(bool* _dynamic_cast_ok, void* self, int row, int oldHeight, int newHeight);
	friend void QTableWidget_protectedbase_columnResized(bool* _dynamic_cast_ok, void* self, int column, int oldWidth, int newWidth);
	friend void QTableWidget_protectedbase_rowCountChanged(bool* _dynamic_cast_ok, void* self, int oldCount, int newCount);
	friend void QTableWidget_protectedbase_columnCountChanged(bool* _dynamic_cast_ok, void* self, int oldCount, int newCount);
	friend void QTableWidget_protectedbase_setHorizontalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps);
	friend int QTableWidget_protectedbase_horizontalStepsPerItem(bool* _dynamic_cast_ok, const void* self);
	friend void QTableWidget_protectedbase_setVerticalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps);
	friend int QTableWidget_protectedbase_verticalStepsPerItem(bool* _dynamic_cast_ok, const void* self);
	friend int QTableWidget_protectedbase_state(bool* _dynamic_cast_ok, const void* self);
	friend void QTableWidget_protectedbase_setState(bool* _dynamic_cast_ok, void* self, int state);
	friend void QTableWidget_protectedbase_scheduleDelayedItemsLayout(bool* _dynamic_cast_ok, void* self);
	friend void QTableWidget_protectedbase_executeDelayedItemsLayout(bool* _dynamic_cast_ok, void* self);
	friend void QTableWidget_protectedbase_setDirtyRegion(bool* _dynamic_cast_ok, void* self, QRegion* region);
	friend void QTableWidget_protectedbase_scrollDirtyRegion(bool* _dynamic_cast_ok, void* self, int dx, int dy);
	friend QPoint* QTableWidget_protectedbase_dirtyRegionOffset(bool* _dynamic_cast_ok, const void* self);
	friend void QTableWidget_protectedbase_startAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend void QTableWidget_protectedbase_stopAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend void QTableWidget_protectedbase_doAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend int QTableWidget_protectedbase_dropIndicatorPosition(bool* _dynamic_cast_ok, const void* self);
	friend void QTableWidget_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom);
	friend QMargins* QTableWidget_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self);
	friend void QTableWidget_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
	friend void QTableWidget_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option);
	friend void QTableWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QTableWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QTableWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QTableWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QTableWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QTableWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QTableWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QTableWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QTableWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QTableWidget* QTableWidget_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQTableWidget(parent);
}

QTableWidget* QTableWidget_new2() {
	return new (std::nothrow) MiqtVirtualQTableWidget();
}

QTableWidget* QTableWidget_new3(int rows, int columns) {
	return new (std::nothrow) MiqtVirtualQTableWidget(static_cast<int>(rows), static_cast<int>(columns));
}

QTableWidget* QTableWidget_new4(int rows, int columns, QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQTableWidget(static_cast<int>(rows), static_cast<int>(columns), parent);
}

void QTableWidget_virtbase(QTableWidget* src, QTableView** outptr_QTableView) {
	*outptr_QTableView = static_cast<QTableView*>(src);
}

QMetaObject* QTableWidget_metaObject(const QTableWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QTableWidget_metacast(QTableWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QTableWidget_tr(const char* s) {
	QString _ret = QTableWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTableWidget_trUtf8(const char* s) {
	QString _ret = QTableWidget::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTableWidget_setRowCount(QTableWidget* self, int rows) {
	self->setRowCount(static_cast<int>(rows));
}

int QTableWidget_rowCount(const QTableWidget* self) {
	return self->rowCount();
}

void QTableWidget_setColumnCount(QTableWidget* self, int columns) {
	self->setColumnCount(static_cast<int>(columns));
}

int QTableWidget_columnCount(const QTableWidget* self) {
	return self->columnCount();
}

int QTableWidget_row(const QTableWidget* self, QTableWidgetItem* item) {
	return self->row(item);
}

int QTableWidget_column(const QTableWidget* self, QTableWidgetItem* item) {
	return self->column(item);
}

QTableWidgetItem* QTableWidget_item(const QTableWidget* self, int row, int column) {
	return self->item(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_setItem(QTableWidget* self, int row, int column, QTableWidgetItem* item) {
	self->setItem(static_cast<int>(row), static_cast<int>(column), item);
}

QTableWidgetItem* QTableWidget_takeItem(QTableWidget* self, int row, int column) {
	return self->takeItem(static_cast<int>(row), static_cast<int>(column));
}

QTableWidgetItem* QTableWidget_verticalHeaderItem(const QTableWidget* self, int row) {
	return self->verticalHeaderItem(static_cast<int>(row));
}

void QTableWidget_setVerticalHeaderItem(QTableWidget* self, int row, QTableWidgetItem* item) {
	self->setVerticalHeaderItem(static_cast<int>(row), item);
}

QTableWidgetItem* QTableWidget_takeVerticalHeaderItem(QTableWidget* self, int row) {
	return self->takeVerticalHeaderItem(static_cast<int>(row));
}

QTableWidgetItem* QTableWidget_horizontalHeaderItem(const QTableWidget* self, int column) {
	return self->horizontalHeaderItem(static_cast<int>(column));
}

void QTableWidget_setHorizontalHeaderItem(QTableWidget* self, int column, QTableWidgetItem* item) {
	self->setHorizontalHeaderItem(static_cast<int>(column), item);
}

QTableWidgetItem* QTableWidget_takeHorizontalHeaderItem(QTableWidget* self, int column) {
	return self->takeHorizontalHeaderItem(static_cast<int>(column));
}

void QTableWidget_setVerticalHeaderLabels(QTableWidget* self, struct miqt_array /* of struct miqt_string */  labels) {
	QStringList labels_QList;
	labels_QList.reserve(labels.len);
	struct miqt_string* labels_arr = static_cast<struct miqt_string*>(labels.data);
	for(size_t i = 0; i < labels.len; ++i) {
		QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
		labels_QList.push_back(labels_arr_i_QString);
	}
	self->setVerticalHeaderLabels(labels_QList);
}

void QTableWidget_setHorizontalHeaderLabels(QTableWidget* self, struct miqt_array /* of struct miqt_string */  labels) {
	QStringList labels_QList;
	labels_QList.reserve(labels.len);
	struct miqt_string* labels_arr = static_cast<struct miqt_string*>(labels.data);
	for(size_t i = 0; i < labels.len; ++i) {
		QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
		labels_QList.push_back(labels_arr_i_QString);
	}
	self->setHorizontalHeaderLabels(labels_QList);
}

int QTableWidget_currentRow(const QTableWidget* self) {
	return self->currentRow();
}

int QTableWidget_currentColumn(const QTableWidget* self) {
	return self->currentColumn();
}

QTableWidgetItem* QTableWidget_currentItem(const QTableWidget* self) {
	return self->currentItem();
}

void QTableWidget_setCurrentItem(QTableWidget* self, QTableWidgetItem* item) {
	self->setCurrentItem(item);
}

void QTableWidget_setCurrentItem2(QTableWidget* self, QTableWidgetItem* item, int command) {
	self->setCurrentItem(item, static_cast<QItemSelectionModel::SelectionFlags>(command));
}

void QTableWidget_setCurrentCell(QTableWidget* self, int row, int column) {
	self->setCurrentCell(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_setCurrentCell2(QTableWidget* self, int row, int column, int command) {
	self->setCurrentCell(static_cast<int>(row), static_cast<int>(column), static_cast<QItemSelectionModel::SelectionFlags>(command));
}

void QTableWidget_sortItems(QTableWidget* self, int column) {
	self->sortItems(static_cast<int>(column));
}

void QTableWidget_setSortingEnabled(QTableWidget* self, bool enable) {
	self->setSortingEnabled(enable);
}

bool QTableWidget_isSortingEnabled(const QTableWidget* self) {
	return self->isSortingEnabled();
}

void QTableWidget_editItem(QTableWidget* self, QTableWidgetItem* item) {
	self->editItem(item);
}

void QTableWidget_openPersistentEditor(QTableWidget* self, QTableWidgetItem* item) {
	self->openPersistentEditor(item);
}

void QTableWidget_closePersistentEditor(QTableWidget* self, QTableWidgetItem* item) {
	self->closePersistentEditor(item);
}

bool QTableWidget_isPersistentEditorOpen(const QTableWidget* self, QTableWidgetItem* item) {
	return self->isPersistentEditorOpen(item);
}

QWidget* QTableWidget_cellWidget(const QTableWidget* self, int row, int column) {
	return self->cellWidget(static_cast<int>(row), static_cast<int>(column));
}

void QTableWidget_setCellWidget(QTableWidget* self, int row, int column, QWidget* widget) {
	self->setCellWidget(static_cast<int>(row), static_cast<int>(column), widget);
}

void QTableWidget_removeCellWidget(QTableWidget* self, int row, int column) {
	self->removeCellWidget(static_cast<int>(row), static_cast<int>(column));
}

bool QTableWidget_isItemSelected(const QTableWidget* self, QTableWidgetItem* item) {
	return self->isItemSelected(item);
}

void QTableWidget_setItemSelected(QTableWidget* self, QTableWidgetItem* item, bool select) {
	self->setItemSelected(item, select);
}

void QTableWidget_setRangeSelected(QTableWidget* self, QTableWidgetSelectionRange* range, bool select) {
	self->setRangeSelected(*range, select);
}

struct miqt_array /* of QTableWidgetSelectionRange* */  QTableWidget_selectedRanges(const QTableWidget* self) {
	QList<QTableWidgetSelectionRange> _ret = self->selectedRanges();
	// Convert QList<> from C++ memory to manually-managed C memory
	QTableWidgetSelectionRange** _arr = static_cast<QTableWidgetSelectionRange**>(malloc(sizeof(QTableWidgetSelectionRange*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QTableWidgetSelectionRange(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QTableWidgetItem* */  QTableWidget_selectedItems(const QTableWidget* self) {
	QList<QTableWidgetItem *> _ret = self->selectedItems();
	// Convert QList<> from C++ memory to manually-managed C memory
	QTableWidgetItem** _arr = static_cast<QTableWidgetItem**>(malloc(sizeof(QTableWidgetItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QTableWidgetItem* */  QTableWidget_findItems(const QTableWidget* self, struct miqt_string text, int flags) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QList<QTableWidgetItem *> _ret = self->findItems(text_QString, static_cast<Qt::MatchFlags>(flags));
	// Convert QList<> from C++ memory to manually-managed C memory
	QTableWidgetItem** _arr = static_cast<QTableWidgetItem**>(malloc(sizeof(QTableWidgetItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

int QTableWidget_visualRow(const QTableWidget* self, int logicalRow) {
	return self->visualRow(static_cast<int>(logicalRow));
}

int QTableWidget_visualColumn(const QTableWidget* self, int logicalColumn) {
	return self->visualColumn(static_cast<int>(logicalColumn));
}

QTableWidgetItem* QTableWidget_itemAt(const QTableWidget* self, QPoint* p) {
	return self->itemAt(*p);
}

QTableWidgetItem* QTableWidget_itemAt2(const QTableWidget* self, int x, int y) {
	return self->itemAt(static_cast<int>(x), static_cast<int>(y));
}

QRect* QTableWidget_visualItemRect(const QTableWidget* self, QTableWidgetItem* item) {
	return new QRect(self->visualItemRect(item));
}

QTableWidgetItem* QTableWidget_itemPrototype(const QTableWidget* self) {
	return (QTableWidgetItem*) self->itemPrototype();
}

void QTableWidget_setItemPrototype(QTableWidget* self, QTableWidgetItem* item) {
	self->setItemPrototype(item);
}

void QTableWidget_scrollToItem(QTableWidget* self, QTableWidgetItem* item) {
	self->scrollToItem(item);
}

void QTableWidget_insertRow(QTableWidget* self, int row) {
	self->insertRow(static_cast<int>(row));
}

void QTableWidget_insertColumn(QTableWidget* self, int column) {
	self->insertColumn(static_cast<int>(column));
}

void QTableWidget_removeRow(QTableWidget* self, int row) {
	self->removeRow(static_cast<int>(row));
}

void QTableWidget_removeColumn(QTableWidget* self, int column) {
	self->removeColumn(static_cast<int>(column));
}

void QTableWidget_clear(QTableWidget* self) {
	self->clear();
}

void QTableWidget_clearContents(QTableWidget* self) {
	self->clearContents();
}

void QTableWidget_itemPressed(QTableWidget* self, QTableWidgetItem* item) {
	self->itemPressed(item);
}

void* QTableWidget_connect_itemPressed(QTableWidget* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget>>(slot);
	return new QMetaObject::Connection(QTableWidget::connect(self, static_cast<void (QTableWidget::*)(QTableWidgetItem*)>(&QTableWidget::itemPressed), self, [slot_handle](QTableWidgetItem* item) {
		intptr_t slot = slot_handle->value();
		QTableWidgetItem* sigval1 = item;
		miqt_exec_callback_QTableWidget_itemPressed(slot, sigval1);
	}));
}

void QTableWidget_itemClicked(QTableWidget* self, QTableWidgetItem* item) {
	self->itemClicked(item);
}

void* QTableWidget_connect_itemClicked(QTableWidget* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget>>(slot);
	return new QMetaObject::Connection(QTableWidget::connect(self, static_cast<void (QTableWidget::*)(QTableWidgetItem*)>(&QTableWidget::itemClicked), self, [slot_handle](QTableWidgetItem* item) {
		intptr_t slot = slot_handle->value();
		QTableWidgetItem* sigval1 = item;
		miqt_exec_callback_QTableWidget_itemClicked(slot, sigval1);
	}));
}

void QTableWidget_itemDoubleClicked(QTableWidget* self, QTableWidgetItem* item) {
	self->itemDoubleClicked(item);
}

void* QTableWidget_connect_itemDoubleClicked(QTableWidget* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget>>(slot);
	return new QMetaObject::Connection(QTableWidget::connect(self, static_cast<void (QTableWidget::*)(QTableWidgetItem*)>(&QTableWidget::itemDoubleClicked), self, [slot_handle](QTableWidgetItem* item) {
		intptr_t slot = slot_handle->value();
		QTableWidgetItem* sigval1 = item;
		miqt_exec_callback_QTableWidget_itemDoubleClicked(slot, sigval1);
	}));
}

void QTableWidget_itemActivated(QTableWidget* self, QTableWidgetItem* item) {
	self->itemActivated(item);
}

void* QTableWidget_connect_itemActivated(QTableWidget* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget>>(slot);
	return new QMetaObject::Connection(QTableWidget::connect(self, static_cast<void (QTableWidget::*)(QTableWidgetItem*)>(&QTableWidget::itemActivated), self, [slot_handle](QTableWidgetItem* item) {
		intptr_t slot = slot_handle->value();
		QTableWidgetItem* sigval1 = item;
		miqt_exec_callback_QTableWidget_itemActivated(slot, sigval1);
	}));
}

void QTableWidget_itemEntered(QTableWidget* self, QTableWidgetItem* item) {
	self->itemEntered(item);
}

void* QTableWidget_connect_itemEntered(QTableWidget* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget>>(slot);
	return new QMetaObject::Connection(QTableWidget::connect(self, static_cast<void (QTableWidget::*)(QTableWidgetItem*)>(&QTableWidget::itemEntered), self, [slot_handle](QTableWidgetItem* item) {
		intptr_t slot = slot_handle->value();
		QTableWidgetItem* sigval1 = item;
		miqt_exec_callback_QTableWidget_itemEntered(slot, sigval1);
	}));
}

void QTableWidget_itemChanged(QTableWidget* self, QTableWidgetItem* item) {
	self->itemChanged(item);
}

void* QTableWidget_connect_itemChanged(QTableWidget* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget>>(slot);
	return new QMetaObject::Connection(QTableWidget::connect(self, static_cast<void (QTableWidget::*)(QTableWidgetItem*)>(&QTableWidget::itemChanged), self, [slot_handle](QTableWidgetItem* item) {
		intptr_t slot = slot_handle->value();
		QTableWidgetItem* sigval1 = item;
		miqt_exec_callback_QTableWidget_itemChanged(slot, sigval1);
	}));
}

void QTableWidget_currentItemChanged(QTableWidget* self, QTableWidgetItem* current, QTableWidgetItem* previous) {
	self->currentItemChanged(current, previous);
}

void* QTableWidget_connect_currentItemChanged(QTableWidget* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget>>(slot);
	return new QMetaObject::Connection(QTableWidget::connect(self, static_cast<void (QTableWidget::*)(QTableWidgetItem*, QTableWidgetItem*)>(&QTableWidget::currentItemChanged), self, [slot_handle](QTableWidgetItem* current, QTableWidgetItem* previous) {
		intptr_t slot = slot_handle->value();
		QTableWidgetItem* sigval1 = current;
		QTableWidgetItem* sigval2 = previous;
		miqt_exec_callback_QTableWidget_currentItemChanged(slot, sigval1, sigval2);
	}));
}

void QTableWidget_itemSelectionChanged(QTableWidget* self) {
	self->itemSelectionChanged();
}

void* QTableWidget_connect_itemSelectionChanged(QTableWidget* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget>>(slot);
	return new QMetaObject::Connection(QTableWidget::connect(self, static_cast<void (QTableWidget::*)()>(&QTableWidget::itemSelectionChanged), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QTableWidget_itemSelectionChanged(slot);
	}));
}

void QTableWidget_cellPressed(QTableWidget* self, int row, int column) {
	self->cellPressed(static_cast<int>(row), static_cast<int>(column));
}

void* QTableWidget_connect_cellPressed(QTableWidget* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget>>(slot);
	return new QMetaObject::Connection(QTableWidget::connect(self, static_cast<void (QTableWidget::*)(int, int)>(&QTableWidget::cellPressed), self, [slot_handle](int row, int column) {
		intptr_t slot = slot_handle->value();
		int sigval1 = row;
		int sigval2 = column;
		miqt_exec_callback_QTableWidget_cellPressed(slot, sigval1, sigval2);
	}));
}

void QTableWidget_cellClicked(QTableWidget* self, int row, int column) {
	self->cellClicked(static_cast<int>(row), static_cast<int>(column));
}

void* QTableWidget_connect_cellClicked(QTableWidget* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget>>(slot);
	return new QMetaObject::Connection(QTableWidget::connect(self, static_cast<void (QTableWidget::*)(int, int)>(&QTableWidget::cellClicked), self, [slot_handle](int row, int column) {
		intptr_t slot = slot_handle->value();
		int sigval1 = row;
		int sigval2 = column;
		miqt_exec_callback_QTableWidget_cellClicked(slot, sigval1, sigval2);
	}));
}

void QTableWidget_cellDoubleClicked(QTableWidget* self, int row, int column) {
	self->cellDoubleClicked(static_cast<int>(row), static_cast<int>(column));
}

void* QTableWidget_connect_cellDoubleClicked(QTableWidget* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget>>(slot);
	return new QMetaObject::Connection(QTableWidget::connect(self, static_cast<void (QTableWidget::*)(int, int)>(&QTableWidget::cellDoubleClicked), self, [slot_handle](int row, int column) {
		intptr_t slot = slot_handle->value();
		int sigval1 = row;
		int sigval2 = column;
		miqt_exec_callback_QTableWidget_cellDoubleClicked(slot, sigval1, sigval2);
	}));
}

void QTableWidget_cellActivated(QTableWidget* self, int row, int column) {
	self->cellActivated(static_cast<int>(row), static_cast<int>(column));
}

void* QTableWidget_connect_cellActivated(QTableWidget* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget>>(slot);
	return new QMetaObject::Connection(QTableWidget::connect(self, static_cast<void (QTableWidget::*)(int, int)>(&QTableWidget::cellActivated), self, [slot_handle](int row, int column) {
		intptr_t slot = slot_handle->value();
		int sigval1 = row;
		int sigval2 = column;
		miqt_exec_callback_QTableWidget_cellActivated(slot, sigval1, sigval2);
	}));
}

void QTableWidget_cellEntered(QTableWidget* self, int row, int column) {
	self->cellEntered(static_cast<int>(row), static_cast<int>(column));
}

void* QTableWidget_connect_cellEntered(QTableWidget* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget>>(slot);
	return new QMetaObject::Connection(QTableWidget::connect(self, static_cast<void (QTableWidget::*)(int, int)>(&QTableWidget::cellEntered), self, [slot_handle](int row, int column) {
		intptr_t slot = slot_handle->value();
		int sigval1 = row;
		int sigval2 = column;
		miqt_exec_callback_QTableWidget_cellEntered(slot, sigval1, sigval2);
	}));
}

void QTableWidget_cellChanged(QTableWidget* self, int row, int column) {
	self->cellChanged(static_cast<int>(row), static_cast<int>(column));
}

void* QTableWidget_connect_cellChanged(QTableWidget* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget>>(slot);
	return new QMetaObject::Connection(QTableWidget::connect(self, static_cast<void (QTableWidget::*)(int, int)>(&QTableWidget::cellChanged), self, [slot_handle](int row, int column) {
		intptr_t slot = slot_handle->value();
		int sigval1 = row;
		int sigval2 = column;
		miqt_exec_callback_QTableWidget_cellChanged(slot, sigval1, sigval2);
	}));
}

void QTableWidget_currentCellChanged(QTableWidget* self, int currentRow, int currentColumn, int previousRow, int previousColumn) {
	self->currentCellChanged(static_cast<int>(currentRow), static_cast<int>(currentColumn), static_cast<int>(previousRow), static_cast<int>(previousColumn));
}

void* QTableWidget_connect_currentCellChanged(QTableWidget* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget>>(slot);
	return new QMetaObject::Connection(QTableWidget::connect(self, static_cast<void (QTableWidget::*)(int, int, int, int)>(&QTableWidget::currentCellChanged), self, [slot_handle](int currentRow, int currentColumn, int previousRow, int previousColumn) {
		intptr_t slot = slot_handle->value();
		int sigval1 = currentRow;
		int sigval2 = currentColumn;
		int sigval3 = previousRow;
		int sigval4 = previousColumn;
		miqt_exec_callback_QTableWidget_currentCellChanged(slot, sigval1, sigval2, sigval3, sigval4);
	}));
}

struct miqt_string QTableWidget_tr2(const char* s, const char* c) {
	QString _ret = QTableWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTableWidget_tr3(const char* s, const char* c, int n) {
	QString _ret = QTableWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTableWidget_trUtf82(const char* s, const char* c) {
	QString _ret = QTableWidget::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QTableWidget_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QTableWidget::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QTableWidget_sortItems2(QTableWidget* self, int column, int order) {
	self->sortItems(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

void QTableWidget_scrollToItem2(QTableWidget* self, QTableWidgetItem* item, int hint) {
	self->scrollToItem(item, static_cast<QAbstractItemView::ScrollHint>(hint));
}

bool QTableWidget_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QTableWidget_virtualbase_event(void* self, QEvent* e) {
	return static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::event(e);
}

bool QTableWidget_override_virtual_mimeTypes(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mimeTypes = std::move(slot_handle);
	return true;
}

struct miqt_array /* of struct miqt_string */  QTableWidget_virtualbase_mimeTypes(const void* self) {
	QStringList _ret = static_cast<const MiqtVirtualQTableWidget*>(self)->QTableWidget::mimeTypes();
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

bool QTableWidget_override_virtual_mimeData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mimeData = std::move(slot_handle);
	return true;
}

QMimeData* QTableWidget_virtualbase_mimeData(const void* self, struct miqt_array /* of QTableWidgetItem* */  items) {
	QList<QTableWidgetItem *> items_QList;
	items_QList.reserve(items.len);
	QTableWidgetItem** items_arr = static_cast<QTableWidgetItem**>(items.data);
	for(size_t i = 0; i < items.len; ++i) {
		items_QList.push_back(items_arr[i]);
	}
	return static_cast<const MiqtVirtualQTableWidget*>(self)->QTableWidget::mimeData(items_QList);
}

bool QTableWidget_override_virtual_dropMimeData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropMimeData = std::move(slot_handle);
	return true;
}

bool QTableWidget_virtualbase_dropMimeData(void* self, int row, int column, QMimeData* data, int action) {
	return static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::dropMimeData(static_cast<int>(row), static_cast<int>(column), data, static_cast<Qt::DropAction>(action));
}

bool QTableWidget_override_virtual_supportedDropActions(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__supportedDropActions = std::move(slot_handle);
	return true;
}

int QTableWidget_virtualbase_supportedDropActions(const void* self) {
	Qt::DropActions _ret = static_cast<const MiqtVirtualQTableWidget*>(self)->QTableWidget::supportedDropActions();
	return static_cast<int>(_ret);
}

bool QTableWidget_override_virtual_dropEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::dropEvent(event);
}

bool QTableWidget_override_virtual_setRootIndex(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setRootIndex = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_setRootIndex(void* self, QModelIndex* index) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::setRootIndex(*index);
}

bool QTableWidget_override_virtual_setSelectionModel(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setSelectionModel = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_setSelectionModel(void* self, QItemSelectionModel* selectionModel) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::setSelectionModel(selectionModel);
}

bool QTableWidget_override_virtual_doItemsLayout(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__doItemsLayout = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_doItemsLayout(void* self) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::doItemsLayout();
}

bool QTableWidget_override_virtual_visualRect(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__visualRect = std::move(slot_handle);
	self_cast->owns_return__visualRect = false;
	return true;
}

bool QTableWidget_override_virtual_owned_visualRect(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__visualRect = std::move(slot_handle);
	self_cast->owns_return__visualRect = true;
	return true;
}

QRect* QTableWidget_virtualbase_visualRect(const void* self, QModelIndex* index) {
	return new QRect(static_cast<const MiqtVirtualQTableWidget*>(self)->QTableWidget::visualRect(*index));
}

bool QTableWidget_override_virtual_scrollTo(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scrollTo = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_scrollTo(void* self, QModelIndex* index, int hint) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::scrollTo(*index, static_cast<MiqtVirtualQTableWidget::ScrollHint>(hint));
}

bool QTableWidget_override_virtual_indexAt(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__indexAt = std::move(slot_handle);
	self_cast->owns_return__indexAt = false;
	return true;
}

bool QTableWidget_override_virtual_owned_indexAt(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__indexAt = std::move(slot_handle);
	self_cast->owns_return__indexAt = true;
	return true;
}

QModelIndex* QTableWidget_virtualbase_indexAt(const void* self, QPoint* p) {
	return new QModelIndex(static_cast<const MiqtVirtualQTableWidget*>(self)->QTableWidget::indexAt(*p));
}

bool QTableWidget_override_virtual_scrollContentsBy(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scrollContentsBy = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_scrollContentsBy(void* self, int dx, int dy) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
}

bool QTableWidget_override_virtual_viewOptions(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__viewOptions = std::move(slot_handle);
	self_cast->owns_return__viewOptions = false;
	return true;
}

bool QTableWidget_override_virtual_owned_viewOptions(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__viewOptions = std::move(slot_handle);
	self_cast->owns_return__viewOptions = true;
	return true;
}

QStyleOptionViewItem* QTableWidget_virtualbase_viewOptions(const void* self) {
	return new QStyleOptionViewItem(static_cast<const MiqtVirtualQTableWidget*>(self)->QTableWidget::viewOptions());
}

bool QTableWidget_override_virtual_paintEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_paintEvent(void* self, QPaintEvent* e) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::paintEvent(e);
}

bool QTableWidget_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::timerEvent(event);
}

bool QTableWidget_override_virtual_horizontalOffset(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__horizontalOffset = std::move(slot_handle);
	return true;
}

int QTableWidget_virtualbase_horizontalOffset(const void* self) {
	return static_cast<const MiqtVirtualQTableWidget*>(self)->QTableWidget::horizontalOffset();
}

bool QTableWidget_override_virtual_verticalOffset(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__verticalOffset = std::move(slot_handle);
	return true;
}

int QTableWidget_virtualbase_verticalOffset(const void* self) {
	return static_cast<const MiqtVirtualQTableWidget*>(self)->QTableWidget::verticalOffset();
}

bool QTableWidget_override_virtual_moveCursor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveCursor = std::move(slot_handle);
	self_cast->owns_return__moveCursor = false;
	return true;
}

bool QTableWidget_override_virtual_owned_moveCursor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveCursor = std::move(slot_handle);
	self_cast->owns_return__moveCursor = true;
	return true;
}

QModelIndex* QTableWidget_virtualbase_moveCursor(void* self, int cursorAction, int modifiers) {
	return new QModelIndex(static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::moveCursor(static_cast<MiqtVirtualQTableWidget::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
}

bool QTableWidget_override_virtual_setSelection(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setSelection = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_setSelection(void* self, QRect* rect, int command) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
}

bool QTableWidget_override_virtual_visualRegionForSelection(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__visualRegionForSelection = std::move(slot_handle);
	self_cast->owns_return__visualRegionForSelection = false;
	return true;
}

bool QTableWidget_override_virtual_owned_visualRegionForSelection(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__visualRegionForSelection = std::move(slot_handle);
	self_cast->owns_return__visualRegionForSelection = true;
	return true;
}

QRegion* QTableWidget_virtualbase_visualRegionForSelection(const void* self, QItemSelection* selection) {
	return new QRegion(static_cast<const MiqtVirtualQTableWidget*>(self)->QTableWidget::visualRegionForSelection(*selection));
}

bool QTableWidget_override_virtual_selectedIndexes(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__selectedIndexes = std::move(slot_handle);
	return true;
}

struct miqt_array /* of QModelIndex* */  QTableWidget_virtualbase_selectedIndexes(const void* self) {
	QModelIndexList _ret = static_cast<const MiqtVirtualQTableWidget*>(self)->QTableWidget::selectedIndexes();
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

bool QTableWidget_override_virtual_updateGeometries(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateGeometries = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_updateGeometries(void* self) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::updateGeometries();
}

bool QTableWidget_override_virtual_viewportSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__viewportSizeHint = std::move(slot_handle);
	self_cast->owns_return__viewportSizeHint = false;
	return true;
}

bool QTableWidget_override_virtual_owned_viewportSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__viewportSizeHint = std::move(slot_handle);
	self_cast->owns_return__viewportSizeHint = true;
	return true;
}

QSize* QTableWidget_virtualbase_viewportSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQTableWidget*>(self)->QTableWidget::viewportSizeHint());
}

bool QTableWidget_override_virtual_sizeHintForRow(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHintForRow = std::move(slot_handle);
	return true;
}

int QTableWidget_virtualbase_sizeHintForRow(const void* self, int row) {
	return static_cast<const MiqtVirtualQTableWidget*>(self)->QTableWidget::sizeHintForRow(static_cast<int>(row));
}

bool QTableWidget_override_virtual_sizeHintForColumn(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHintForColumn = std::move(slot_handle);
	return true;
}

int QTableWidget_virtualbase_sizeHintForColumn(const void* self, int column) {
	return static_cast<const MiqtVirtualQTableWidget*>(self)->QTableWidget::sizeHintForColumn(static_cast<int>(column));
}

bool QTableWidget_override_virtual_verticalScrollbarAction(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__verticalScrollbarAction = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_verticalScrollbarAction(void* self, int action) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::verticalScrollbarAction(static_cast<int>(action));
}

bool QTableWidget_override_virtual_horizontalScrollbarAction(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__horizontalScrollbarAction = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_horizontalScrollbarAction(void* self, int action) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::horizontalScrollbarAction(static_cast<int>(action));
}

bool QTableWidget_override_virtual_isIndexHidden(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isIndexHidden = std::move(slot_handle);
	return true;
}

bool QTableWidget_virtualbase_isIndexHidden(const void* self, QModelIndex* index) {
	return static_cast<const MiqtVirtualQTableWidget*>(self)->QTableWidget::isIndexHidden(*index);
}

bool QTableWidget_override_virtual_selectionChanged(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__selectionChanged = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_selectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::selectionChanged(*selected, *deselected);
}

bool QTableWidget_override_virtual_currentChanged(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__currentChanged = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_currentChanged(void* self, QModelIndex* current, QModelIndex* previous) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::currentChanged(*current, *previous);
}

bool QTableWidget_override_virtual_keyboardSearch(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyboardSearch = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_keyboardSearch(void* self, struct miqt_string search) {
	QString search_QString = QString::fromUtf8(search.data, search.len);
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::keyboardSearch(search_QString);
}

bool QTableWidget_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	self_cast->owns_return__inputMethodQuery = false;
	return true;
}

bool QTableWidget_override_virtual_owned_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	self_cast->owns_return__inputMethodQuery = true;
	return true;
}

QVariant* QTableWidget_virtualbase_inputMethodQuery(const void* self, int query) {
	return new QVariant(static_cast<const MiqtVirtualQTableWidget*>(self)->QTableWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

bool QTableWidget_override_virtual_reset(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__reset = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_reset(void* self) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::reset();
}

bool QTableWidget_override_virtual_selectAll(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__selectAll = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_selectAll(void* self) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::selectAll();
}

bool QTableWidget_override_virtual_dataChanged(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dataChanged = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_dataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
	QVector<int> roles_QList;
	roles_QList.reserve(roles.len);
	int* roles_arr = static_cast<int*>(roles.data);
	for(size_t i = 0; i < roles.len; ++i) {
		roles_QList.push_back(static_cast<int>(roles_arr[i]));
	}
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::dataChanged(*topLeft, *bottomRight, roles_QList);
}

bool QTableWidget_override_virtual_rowsInserted(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__rowsInserted = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_rowsInserted(void* self, QModelIndex* parent, int start, int end) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
}

bool QTableWidget_override_virtual_rowsAboutToBeRemoved(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__rowsAboutToBeRemoved = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_rowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
}

bool QTableWidget_override_virtual_updateEditorData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateEditorData = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_updateEditorData(void* self) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::updateEditorData();
}

bool QTableWidget_override_virtual_updateEditorGeometries(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateEditorGeometries = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_updateEditorGeometries(void* self) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::updateEditorGeometries();
}

bool QTableWidget_override_virtual_verticalScrollbarValueChanged(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__verticalScrollbarValueChanged = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_verticalScrollbarValueChanged(void* self, int value) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::verticalScrollbarValueChanged(static_cast<int>(value));
}

bool QTableWidget_override_virtual_horizontalScrollbarValueChanged(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__horizontalScrollbarValueChanged = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_horizontalScrollbarValueChanged(void* self, int value) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::horizontalScrollbarValueChanged(static_cast<int>(value));
}

bool QTableWidget_override_virtual_closeEditor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEditor = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_closeEditor(void* self, QWidget* editor, int hint) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
}

bool QTableWidget_override_virtual_commitData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__commitData = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_commitData(void* self, QWidget* editor) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::commitData(editor);
}

bool QTableWidget_override_virtual_editorDestroyed(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__editorDestroyed = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_editorDestroyed(void* self, QObject* editor) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::editorDestroyed(editor);
}

bool QTableWidget_override_virtual_edit2(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__edit2 = std::move(slot_handle);
	return true;
}

bool QTableWidget_virtualbase_edit2(void* self, QModelIndex* index, int trigger, QEvent* event) {
	return static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::edit(*index, static_cast<MiqtVirtualQTableWidget::EditTrigger>(trigger), event);
}

bool QTableWidget_override_virtual_selectionCommand(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__selectionCommand = std::move(slot_handle);
	return true;
}

int QTableWidget_virtualbase_selectionCommand(const void* self, QModelIndex* index, QEvent* event) {
	QItemSelectionModel::SelectionFlags _ret = static_cast<const MiqtVirtualQTableWidget*>(self)->QTableWidget::selectionCommand(*index, event);
	return static_cast<int>(_ret);
}

bool QTableWidget_override_virtual_startDrag(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__startDrag = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_startDrag(void* self, int supportedActions) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::startDrag(static_cast<Qt::DropActions>(supportedActions));
}

bool QTableWidget_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = std::move(slot_handle);
	return true;
}

bool QTableWidget_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::focusNextPrevChild(next);
}

bool QTableWidget_override_virtual_viewportEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__viewportEvent = std::move(slot_handle);
	return true;
}

bool QTableWidget_virtualbase_viewportEvent(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::viewportEvent(event);
}

bool QTableWidget_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::mousePressEvent(event);
}

bool QTableWidget_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_mouseMoveEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::mouseMoveEvent(event);
}

bool QTableWidget_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::mouseReleaseEvent(event);
}

bool QTableWidget_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::mouseDoubleClickEvent(event);
}

bool QTableWidget_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::dragEnterEvent(event);
}

bool QTableWidget_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* event) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::dragMoveEvent(event);
}

bool QTableWidget_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* event) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::dragLeaveEvent(event);
}

bool QTableWidget_override_virtual_focusInEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::focusInEvent(event);
}

bool QTableWidget_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::focusOutEvent(event);
}

bool QTableWidget_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::keyPressEvent(event);
}

bool QTableWidget_override_virtual_resizeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_resizeEvent(void* self, QResizeEvent* event) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::resizeEvent(event);
}

bool QTableWidget_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::inputMethodEvent(event);
}

bool QTableWidget_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QTableWidget_virtualbase_eventFilter(void* self, QObject* object, QEvent* event) {
	return static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::eventFilter(object, event);
}

bool QTableWidget_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	self_cast->owns_return__minimumSizeHint = false;
	return true;
}

bool QTableWidget_override_virtual_owned_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	self_cast->owns_return__minimumSizeHint = true;
	return true;
}

QSize* QTableWidget_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQTableWidget*>(self)->QTableWidget::minimumSizeHint());
}

bool QTableWidget_override_virtual_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = false;
	return true;
}

bool QTableWidget_override_virtual_owned_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = true;
	return true;
}

QSize* QTableWidget_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQTableWidget*>(self)->QTableWidget::sizeHint());
}

bool QTableWidget_override_virtual_setupViewport(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setupViewport = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_setupViewport(void* self, QWidget* viewport) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::setupViewport(viewport);
}

bool QTableWidget_override_virtual_wheelEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_wheelEvent(void* self, QWheelEvent* param1) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::wheelEvent(param1);
}

bool QTableWidget_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::contextMenuEvent(param1);
}

bool QTableWidget_override_virtual_changeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::changeEvent(param1);
}

bool QTableWidget_override_virtual_devType(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = std::move(slot_handle);
	return true;
}

int QTableWidget_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQTableWidget*>(self)->QTableWidget::devType();
}

bool QTableWidget_override_virtual_setVisible(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::setVisible(visible);
}

bool QTableWidget_override_virtual_heightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = std::move(slot_handle);
	return true;
}

int QTableWidget_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQTableWidget*>(self)->QTableWidget::heightForWidth(static_cast<int>(param1));
}

bool QTableWidget_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = std::move(slot_handle);
	return true;
}

bool QTableWidget_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQTableWidget*>(self)->QTableWidget::hasHeightForWidth();
}

bool QTableWidget_override_virtual_paintEngine(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = std::move(slot_handle);
	return true;
}

QPaintEngine* QTableWidget_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQTableWidget*>(self)->QTableWidget::paintEngine();
}

bool QTableWidget_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::keyReleaseEvent(event);
}

bool QTableWidget_override_virtual_enterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::enterEvent(event);
}

bool QTableWidget_override_virtual_leaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::leaveEvent(event);
}

bool QTableWidget_override_virtual_moveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::moveEvent(event);
}

bool QTableWidget_override_virtual_closeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::closeEvent(event);
}

bool QTableWidget_override_virtual_tabletEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::tabletEvent(event);
}

bool QTableWidget_override_virtual_actionEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::actionEvent(event);
}

bool QTableWidget_override_virtual_showEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::showEvent(event);
}

bool QTableWidget_override_virtual_hideEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::hideEvent(event);
}

bool QTableWidget_override_virtual_nativeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = std::move(slot_handle);
	return true;
}

bool QTableWidget_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QTableWidget_override_virtual_metric(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = std::move(slot_handle);
	return true;
}

int QTableWidget_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQTableWidget*>(self)->QTableWidget::metric(static_cast<MiqtVirtualQTableWidget::PaintDeviceMetric>(param1));
}

bool QTableWidget_override_virtual_initPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQTableWidget*>(self)->QTableWidget::initPainter(painter);
}

bool QTableWidget_override_virtual_redirected(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = std::move(slot_handle);
	return true;
}

QPaintDevice* QTableWidget_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQTableWidget*>(self)->QTableWidget::redirected(offset);
}

bool QTableWidget_override_virtual_sharedPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = std::move(slot_handle);
	return true;
}

QPainter* QTableWidget_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQTableWidget*>(self)->QTableWidget::sharedPainter();
}

bool QTableWidget_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::childEvent(event);
}

bool QTableWidget_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::customEvent(event);
}

bool QTableWidget_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::connectNotify(*signal);
}

bool QTableWidget_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QTableWidget> slot_handle(slot);
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QTableWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQTableWidget*>(self)->QTableWidget::disconnectNotify(*signal);
}

struct miqt_array /* of QTableWidgetItem* */  QTableWidget_protectedbase_items(bool* _dynamic_cast_ok, const void* self, QMimeData* data) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (struct miqt_array){};
	}

	*_dynamic_cast_ok = true;
	QList<QTableWidgetItem *> _ret = self_cast->items(data);
	// Convert QList<> from C++ memory to manually-managed C memory
	QTableWidgetItem** _arr = static_cast<QTableWidgetItem**>(malloc(sizeof(QTableWidgetItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QModelIndex* QTableWidget_protectedbase_indexFromItem(bool* _dynamic_cast_ok, const void* self, QTableWidgetItem* item) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QModelIndex(self_cast->indexFromItem(item));
}

QModelIndex* QTableWidget_protectedbase_indexFromItemWithItem(bool* _dynamic_cast_ok, const void* self, QTableWidgetItem* item) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QModelIndex(self_cast->indexFromItem(item));
}

QTableWidgetItem* QTableWidget_protectedbase_itemFromIndex(bool* _dynamic_cast_ok, const void* self, QModelIndex* index) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->itemFromIndex(*index);
}

void QTableWidget_protectedbase_rowMoved(bool* _dynamic_cast_ok, void* self, int row, int oldIndex, int newIndex) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->rowMoved(static_cast<int>(row), static_cast<int>(oldIndex), static_cast<int>(newIndex));
}

void QTableWidget_protectedbase_columnMoved(bool* _dynamic_cast_ok, void* self, int column, int oldIndex, int newIndex) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->columnMoved(static_cast<int>(column), static_cast<int>(oldIndex), static_cast<int>(newIndex));
}

void QTableWidget_protectedbase_rowResized(bool* _dynamic_cast_ok, void* self, int row, int oldHeight, int newHeight) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->rowResized(static_cast<int>(row), static_cast<int>(oldHeight), static_cast<int>(newHeight));
}

void QTableWidget_protectedbase_columnResized(bool* _dynamic_cast_ok, void* self, int column, int oldWidth, int newWidth) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->columnResized(static_cast<int>(column), static_cast<int>(oldWidth), static_cast<int>(newWidth));
}

void QTableWidget_protectedbase_rowCountChanged(bool* _dynamic_cast_ok, void* self, int oldCount, int newCount) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->rowCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
}

void QTableWidget_protectedbase_columnCountChanged(bool* _dynamic_cast_ok, void* self, int oldCount, int newCount) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->columnCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
}

void QTableWidget_protectedbase_setHorizontalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setHorizontalStepsPerItem(static_cast<int>(steps));
}

int QTableWidget_protectedbase_horizontalStepsPerItem(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->horizontalStepsPerItem();
}

void QTableWidget_protectedbase_setVerticalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setVerticalStepsPerItem(static_cast<int>(steps));
}

int QTableWidget_protectedbase_verticalStepsPerItem(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->verticalStepsPerItem();
}

int QTableWidget_protectedbase_state(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}

	*_dynamic_cast_ok = true;
	MiqtVirtualQTableWidget::State _ret = self_cast->state();
	return static_cast<int>(_ret);
}

void QTableWidget_protectedbase_setState(bool* _dynamic_cast_ok, void* self, int state) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setState(static_cast<MiqtVirtualQTableWidget::State>(state));
}

void QTableWidget_protectedbase_scheduleDelayedItemsLayout(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->scheduleDelayedItemsLayout();
}

void QTableWidget_protectedbase_executeDelayedItemsLayout(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->executeDelayedItemsLayout();
}

void QTableWidget_protectedbase_setDirtyRegion(bool* _dynamic_cast_ok, void* self, QRegion* region) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setDirtyRegion(*region);
}

void QTableWidget_protectedbase_scrollDirtyRegion(bool* _dynamic_cast_ok, void* self, int dx, int dy) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
}

QPoint* QTableWidget_protectedbase_dirtyRegionOffset(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QPoint(self_cast->dirtyRegionOffset());
}

void QTableWidget_protectedbase_startAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->startAutoScroll();
}

void QTableWidget_protectedbase_stopAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->stopAutoScroll();
}

void QTableWidget_protectedbase_doAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->doAutoScroll();
}

int QTableWidget_protectedbase_dropIndicatorPosition(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}

	*_dynamic_cast_ok = true;
	MiqtVirtualQTableWidget::DropIndicatorPosition _ret = self_cast->dropIndicatorPosition();
	return static_cast<int>(_ret);
}

void QTableWidget_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
}

QMargins* QTableWidget_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QMargins(self_cast->viewportMargins());
}

void QTableWidget_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->drawFrame(param1);
}

void QTableWidget_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->initStyleOption(option);
}

void QTableWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QTableWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QTableWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QTableWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QTableWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QTableWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QTableWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QTableWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QTableWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQTableWidget* self_cast = dynamic_cast<MiqtVirtualQTableWidget*>( (QTableWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QTableWidget_delete(QTableWidget* self) {
	delete self;
}

