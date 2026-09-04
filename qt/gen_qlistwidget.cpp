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
#include <QListView>
#include <QListWidget>
#include <QListWidgetItem>
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
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QVector>
#include <QWheelEvent>
#include <QWidget>
#include <qlistwidget.h>
#include "gen_qlistwidget.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QListWidgetItem(intptr_t);
QListWidgetItem* miqt_exec_callback_QListWidgetItem_clone(const QListWidgetItem*, intptr_t);
void miqt_exec_callback_QListWidgetItem_setBackgroundColor(QListWidgetItem*, intptr_t, QColor*);
QVariant* miqt_exec_callback_QListWidgetItem_data(const QListWidgetItem*, intptr_t, int);
void miqt_exec_callback_QListWidgetItem_setData(QListWidgetItem*, intptr_t, int, QVariant*);
bool miqt_exec_callback_QListWidgetItem_operatorLesser(const QListWidgetItem*, intptr_t, QListWidgetItem*);
void miqt_exec_callback_QListWidgetItem_read(QListWidgetItem*, intptr_t, QDataStream*);
void miqt_exec_callback_QListWidgetItem_write(const QListWidgetItem*, intptr_t, QDataStream*);
void miqt_exec_callback_handle_release_QListWidget(intptr_t);
void miqt_exec_callback_QListWidget_itemPressed(intptr_t, QListWidgetItem*);
void miqt_exec_callback_QListWidget_itemClicked(intptr_t, QListWidgetItem*);
void miqt_exec_callback_QListWidget_itemDoubleClicked(intptr_t, QListWidgetItem*);
void miqt_exec_callback_QListWidget_itemActivated(intptr_t, QListWidgetItem*);
void miqt_exec_callback_QListWidget_itemEntered(intptr_t, QListWidgetItem*);
void miqt_exec_callback_QListWidget_itemChanged(intptr_t, QListWidgetItem*);
void miqt_exec_callback_QListWidget_currentItemChanged(intptr_t, QListWidgetItem*, QListWidgetItem*);
void miqt_exec_callback_QListWidget_currentTextChanged(intptr_t, struct miqt_string);
void miqt_exec_callback_QListWidget_currentRowChanged(intptr_t, int);
void miqt_exec_callback_QListWidget_itemSelectionChanged(intptr_t);
void miqt_exec_callback_QListWidget_setSelectionModel(QListWidget*, intptr_t, QItemSelectionModel*);
void miqt_exec_callback_QListWidget_dropEvent(QListWidget*, intptr_t, QDropEvent*);
bool miqt_exec_callback_QListWidget_event(QListWidget*, intptr_t, QEvent*);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QListWidget_mimeTypes(const QListWidget*, intptr_t);
QMimeData* miqt_exec_callback_QListWidget_mimeData(const QListWidget*, intptr_t, struct miqt_array /* of QListWidgetItem* */ );
bool miqt_exec_callback_QListWidget_dropMimeData(QListWidget*, intptr_t, int, QMimeData*, int);
int miqt_exec_callback_QListWidget_supportedDropActions(const QListWidget*, intptr_t);
QRect* miqt_exec_callback_QListWidget_visualRect(const QListWidget*, intptr_t, QModelIndex*);
void miqt_exec_callback_QListWidget_scrollTo(QListWidget*, intptr_t, QModelIndex*, int);
QModelIndex* miqt_exec_callback_QListWidget_indexAt(const QListWidget*, intptr_t, QPoint*);
void miqt_exec_callback_QListWidget_doItemsLayout(QListWidget*, intptr_t);
void miqt_exec_callback_QListWidget_reset(QListWidget*, intptr_t);
void miqt_exec_callback_QListWidget_setRootIndex(QListWidget*, intptr_t, QModelIndex*);
void miqt_exec_callback_QListWidget_scrollContentsBy(QListWidget*, intptr_t, int, int);
void miqt_exec_callback_QListWidget_dataChanged(QListWidget*, intptr_t, QModelIndex*, QModelIndex*, struct miqt_array /* of int */ );
void miqt_exec_callback_QListWidget_rowsInserted(QListWidget*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QListWidget_rowsAboutToBeRemoved(QListWidget*, intptr_t, QModelIndex*, int, int);
void miqt_exec_callback_QListWidget_mouseMoveEvent(QListWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QListWidget_mouseReleaseEvent(QListWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QListWidget_wheelEvent(QListWidget*, intptr_t, QWheelEvent*);
void miqt_exec_callback_QListWidget_timerEvent(QListWidget*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QListWidget_resizeEvent(QListWidget*, intptr_t, QResizeEvent*);
void miqt_exec_callback_QListWidget_dragMoveEvent(QListWidget*, intptr_t, QDragMoveEvent*);
void miqt_exec_callback_QListWidget_dragLeaveEvent(QListWidget*, intptr_t, QDragLeaveEvent*);
void miqt_exec_callback_QListWidget_startDrag(QListWidget*, intptr_t, int);
QStyleOptionViewItem* miqt_exec_callback_QListWidget_viewOptions(const QListWidget*, intptr_t);
void miqt_exec_callback_QListWidget_paintEvent(QListWidget*, intptr_t, QPaintEvent*);
int miqt_exec_callback_QListWidget_horizontalOffset(const QListWidget*, intptr_t);
int miqt_exec_callback_QListWidget_verticalOffset(const QListWidget*, intptr_t);
QModelIndex* miqt_exec_callback_QListWidget_moveCursor(QListWidget*, intptr_t, int, int);
void miqt_exec_callback_QListWidget_setSelection(QListWidget*, intptr_t, QRect*, int);
QRegion* miqt_exec_callback_QListWidget_visualRegionForSelection(const QListWidget*, intptr_t, QItemSelection*);
struct miqt_array /* of QModelIndex* */  miqt_exec_callback_QListWidget_selectedIndexes(const QListWidget*, intptr_t);
void miqt_exec_callback_QListWidget_updateGeometries(QListWidget*, intptr_t);
bool miqt_exec_callback_QListWidget_isIndexHidden(const QListWidget*, intptr_t, QModelIndex*);
void miqt_exec_callback_QListWidget_selectionChanged(QListWidget*, intptr_t, QItemSelection*, QItemSelection*);
void miqt_exec_callback_QListWidget_currentChanged(QListWidget*, intptr_t, QModelIndex*, QModelIndex*);
QSize* miqt_exec_callback_QListWidget_viewportSizeHint(const QListWidget*, intptr_t);
void miqt_exec_callback_QListWidget_keyboardSearch(QListWidget*, intptr_t, struct miqt_string);
int miqt_exec_callback_QListWidget_sizeHintForRow(const QListWidget*, intptr_t, int);
int miqt_exec_callback_QListWidget_sizeHintForColumn(const QListWidget*, intptr_t, int);
QVariant* miqt_exec_callback_QListWidget_inputMethodQuery(const QListWidget*, intptr_t, int);
void miqt_exec_callback_QListWidget_selectAll(QListWidget*, intptr_t);
void miqt_exec_callback_QListWidget_updateEditorData(QListWidget*, intptr_t);
void miqt_exec_callback_QListWidget_updateEditorGeometries(QListWidget*, intptr_t);
void miqt_exec_callback_QListWidget_verticalScrollbarAction(QListWidget*, intptr_t, int);
void miqt_exec_callback_QListWidget_horizontalScrollbarAction(QListWidget*, intptr_t, int);
void miqt_exec_callback_QListWidget_verticalScrollbarValueChanged(QListWidget*, intptr_t, int);
void miqt_exec_callback_QListWidget_horizontalScrollbarValueChanged(QListWidget*, intptr_t, int);
void miqt_exec_callback_QListWidget_closeEditor(QListWidget*, intptr_t, QWidget*, int);
void miqt_exec_callback_QListWidget_commitData(QListWidget*, intptr_t, QWidget*);
void miqt_exec_callback_QListWidget_editorDestroyed(QListWidget*, intptr_t, QObject*);
bool miqt_exec_callback_QListWidget_edit2(QListWidget*, intptr_t, QModelIndex*, int, QEvent*);
int miqt_exec_callback_QListWidget_selectionCommand(const QListWidget*, intptr_t, QModelIndex*, QEvent*);
bool miqt_exec_callback_QListWidget_focusNextPrevChild(QListWidget*, intptr_t, bool);
bool miqt_exec_callback_QListWidget_viewportEvent(QListWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QListWidget_mousePressEvent(QListWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QListWidget_mouseDoubleClickEvent(QListWidget*, intptr_t, QMouseEvent*);
void miqt_exec_callback_QListWidget_dragEnterEvent(QListWidget*, intptr_t, QDragEnterEvent*);
void miqt_exec_callback_QListWidget_focusInEvent(QListWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QListWidget_focusOutEvent(QListWidget*, intptr_t, QFocusEvent*);
void miqt_exec_callback_QListWidget_keyPressEvent(QListWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QListWidget_inputMethodEvent(QListWidget*, intptr_t, QInputMethodEvent*);
bool miqt_exec_callback_QListWidget_eventFilter(QListWidget*, intptr_t, QObject*, QEvent*);
QSize* miqt_exec_callback_QListWidget_minimumSizeHint(const QListWidget*, intptr_t);
QSize* miqt_exec_callback_QListWidget_sizeHint(const QListWidget*, intptr_t);
void miqt_exec_callback_QListWidget_setupViewport(QListWidget*, intptr_t, QWidget*);
void miqt_exec_callback_QListWidget_contextMenuEvent(QListWidget*, intptr_t, QContextMenuEvent*);
void miqt_exec_callback_QListWidget_changeEvent(QListWidget*, intptr_t, QEvent*);
int miqt_exec_callback_QListWidget_devType(const QListWidget*, intptr_t);
void miqt_exec_callback_QListWidget_setVisible(QListWidget*, intptr_t, bool);
int miqt_exec_callback_QListWidget_heightForWidth(const QListWidget*, intptr_t, int);
bool miqt_exec_callback_QListWidget_hasHeightForWidth(const QListWidget*, intptr_t);
QPaintEngine* miqt_exec_callback_QListWidget_paintEngine(const QListWidget*, intptr_t);
void miqt_exec_callback_QListWidget_keyReleaseEvent(QListWidget*, intptr_t, QKeyEvent*);
void miqt_exec_callback_QListWidget_enterEvent(QListWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QListWidget_leaveEvent(QListWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QListWidget_moveEvent(QListWidget*, intptr_t, QMoveEvent*);
void miqt_exec_callback_QListWidget_closeEvent(QListWidget*, intptr_t, QCloseEvent*);
void miqt_exec_callback_QListWidget_tabletEvent(QListWidget*, intptr_t, QTabletEvent*);
void miqt_exec_callback_QListWidget_actionEvent(QListWidget*, intptr_t, QActionEvent*);
void miqt_exec_callback_QListWidget_showEvent(QListWidget*, intptr_t, QShowEvent*);
void miqt_exec_callback_QListWidget_hideEvent(QListWidget*, intptr_t, QHideEvent*);
bool miqt_exec_callback_QListWidget_nativeEvent(QListWidget*, intptr_t, struct miqt_string, void*, long*);
int miqt_exec_callback_QListWidget_metric(const QListWidget*, intptr_t, int);
void miqt_exec_callback_QListWidget_initPainter(const QListWidget*, intptr_t, QPainter*);
QPaintDevice* miqt_exec_callback_QListWidget_redirected(const QListWidget*, intptr_t, QPoint*);
QPainter* miqt_exec_callback_QListWidget_sharedPainter(const QListWidget*, intptr_t);
void miqt_exec_callback_QListWidget_childEvent(QListWidget*, intptr_t, QChildEvent*);
void miqt_exec_callback_QListWidget_customEvent(QListWidget*, intptr_t, QEvent*);
void miqt_exec_callback_QListWidget_connectNotify(QListWidget*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QListWidget_disconnectNotify(QListWidget*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQListWidgetItem final : public QListWidgetItem {
public:

	MiqtVirtualQListWidgetItem(): QListWidgetItem() {}
	MiqtVirtualQListWidgetItem(const QString& text): QListWidgetItem(text) {}
	MiqtVirtualQListWidgetItem(const QIcon& icon, const QString& text): QListWidgetItem(icon, text) {}
	MiqtVirtualQListWidgetItem(const QListWidgetItem& other): QListWidgetItem(other) {}
	MiqtVirtualQListWidgetItem(QListWidget* listview): QListWidgetItem(listview) {}
	MiqtVirtualQListWidgetItem(QListWidget* listview, int type): QListWidgetItem(listview, type) {}
	MiqtVirtualQListWidgetItem(const QString& text, QListWidget* listview): QListWidgetItem(text, listview) {}
	MiqtVirtualQListWidgetItem(const QString& text, QListWidget* listview, int type): QListWidgetItem(text, listview, type) {}
	MiqtVirtualQListWidgetItem(const QIcon& icon, const QString& text, QListWidget* listview): QListWidgetItem(icon, text, listview) {}
	MiqtVirtualQListWidgetItem(const QIcon& icon, const QString& text, QListWidget* listview, int type): QListWidgetItem(icon, text, listview, type) {}

	virtual ~MiqtVirtualQListWidgetItem() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidgetItem> handle__clone;

	// Subclass to allow providing a Go implementation
	virtual QListWidgetItem* clone() const override {
		if (!handle__clone) {
			return QListWidgetItem::clone();
		}

		QListWidgetItem* callback_return_value = miqt_exec_callback_QListWidgetItem_clone(this, handle__clone.value());
		return callback_return_value;
	}

	friend QListWidgetItem* QListWidgetItem_virtualbase_clone(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidgetItem> handle__setBackgroundColor;

	// Subclass to allow providing a Go implementation
	virtual void setBackgroundColor(const QColor& color) override {
		if (!handle__setBackgroundColor) {
			QListWidgetItem::setBackgroundColor(color);
			return;
		}

		const QColor& color_ret = color;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&color_ret);
		miqt_exec_callback_QListWidgetItem_setBackgroundColor(this, handle__setBackgroundColor.value(), sigval1);

	}

	friend void QListWidgetItem_virtualbase_setBackgroundColor(void* self, QColor* color);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidgetItem> handle__data;
	bool owns_return__data = false;

	// Subclass to allow providing a Go implementation
	virtual QVariant data(int role) const override {
		if (!handle__data) {
			return QListWidgetItem::data(role);
		}

		int sigval1 = role;
		QVariant* callback_return_value = miqt_exec_callback_QListWidgetItem_data(this, handle__data.value(), sigval1);
		std::unique_ptr<QVariant> callback_return_value_owner;
		if (owns_return__data) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QVariant* QListWidgetItem_virtualbase_data(const void* self, int role);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidgetItem> handle__setData;

	// Subclass to allow providing a Go implementation
	virtual void setData(int role, const QVariant& value) override {
		if (!handle__setData) {
			QListWidgetItem::setData(role, value);
			return;
		}

		int sigval1 = role;
		const QVariant& value_ret = value;
		// Cast returned reference into pointer
		QVariant* sigval2 = const_cast<QVariant*>(&value_ret);
		miqt_exec_callback_QListWidgetItem_setData(this, handle__setData.value(), sigval1, sigval2);

	}

	friend void QListWidgetItem_virtualbase_setData(void* self, int role, QVariant* value);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidgetItem> handle__operatorLesser;

	// Subclass to allow providing a Go implementation
	virtual bool operator<(const QListWidgetItem& other) const override {
		if (!handle__operatorLesser) {
			return QListWidgetItem::operator<(other);
		}

		const QListWidgetItem& other_ret = other;
		// Cast returned reference into pointer
		QListWidgetItem* sigval1 = const_cast<QListWidgetItem*>(&other_ret);
		bool callback_return_value = miqt_exec_callback_QListWidgetItem_operatorLesser(this, handle__operatorLesser.value(), sigval1);
		return callback_return_value;
	}

	friend bool QListWidgetItem_virtualbase_operatorLesser(const void* self, QListWidgetItem* other);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidgetItem> handle__read;

	// Subclass to allow providing a Go implementation
	virtual void read(QDataStream& in) override {
		if (!handle__read) {
			QListWidgetItem::read(in);
			return;
		}

		QDataStream& in_ret = in;
		// Cast returned reference into pointer
		QDataStream* sigval1 = &in_ret;
		miqt_exec_callback_QListWidgetItem_read(this, handle__read.value(), sigval1);

	}

	friend void QListWidgetItem_virtualbase_read(void* self, QDataStream* in);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidgetItem> handle__write;

	// Subclass to allow providing a Go implementation
	virtual void write(QDataStream& out) const override {
		if (!handle__write) {
			QListWidgetItem::write(out);
			return;
		}

		QDataStream& out_ret = out;
		// Cast returned reference into pointer
		QDataStream* sigval1 = &out_ret;
		miqt_exec_callback_QListWidgetItem_write(this, handle__write.value(), sigval1);

	}

	friend void QListWidgetItem_virtualbase_write(const void* self, QDataStream* out);

};

QListWidgetItem* QListWidgetItem_new() {
	return new (std::nothrow) MiqtVirtualQListWidgetItem();
}

QListWidgetItem* QListWidgetItem_new2(struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new (std::nothrow) MiqtVirtualQListWidgetItem(text_QString);
}

QListWidgetItem* QListWidgetItem_new3(QIcon* icon, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new (std::nothrow) MiqtVirtualQListWidgetItem(*icon, text_QString);
}

QListWidgetItem* QListWidgetItem_new4(QListWidgetItem* other) {
	return new (std::nothrow) MiqtVirtualQListWidgetItem(*other);
}

QListWidgetItem* QListWidgetItem_new5(QListWidget* listview) {
	return new (std::nothrow) MiqtVirtualQListWidgetItem(listview);
}

QListWidgetItem* QListWidgetItem_new6(QListWidget* listview, int type) {
	return new (std::nothrow) MiqtVirtualQListWidgetItem(listview, static_cast<int>(type));
}

QListWidgetItem* QListWidgetItem_new7(struct miqt_string text, QListWidget* listview) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new (std::nothrow) MiqtVirtualQListWidgetItem(text_QString, listview);
}

QListWidgetItem* QListWidgetItem_new8(struct miqt_string text, QListWidget* listview, int type) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new (std::nothrow) MiqtVirtualQListWidgetItem(text_QString, listview, static_cast<int>(type));
}

QListWidgetItem* QListWidgetItem_new9(QIcon* icon, struct miqt_string text, QListWidget* listview) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new (std::nothrow) MiqtVirtualQListWidgetItem(*icon, text_QString, listview);
}

QListWidgetItem* QListWidgetItem_new10(QIcon* icon, struct miqt_string text, QListWidget* listview, int type) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new (std::nothrow) MiqtVirtualQListWidgetItem(*icon, text_QString, listview, static_cast<int>(type));
}

QListWidgetItem* QListWidgetItem_clone(const QListWidgetItem* self) {
	return self->clone();
}

QListWidget* QListWidgetItem_listWidget(const QListWidgetItem* self) {
	return self->listWidget();
}

void QListWidgetItem_setSelected(QListWidgetItem* self, bool select) {
	self->setSelected(select);
}

bool QListWidgetItem_isSelected(const QListWidgetItem* self) {
	return self->isSelected();
}

void QListWidgetItem_setHidden(QListWidgetItem* self, bool hide) {
	self->setHidden(hide);
}

bool QListWidgetItem_isHidden(const QListWidgetItem* self) {
	return self->isHidden();
}

int QListWidgetItem_flags(const QListWidgetItem* self) {
	Qt::ItemFlags _ret = self->flags();
	return static_cast<int>(_ret);
}

void QListWidgetItem_setFlags(QListWidgetItem* self, int flags) {
	self->setFlags(static_cast<Qt::ItemFlags>(flags));
}

struct miqt_string QListWidgetItem_text(const QListWidgetItem* self) {
	QString _ret = self->text();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QListWidgetItem_setText(QListWidgetItem* self, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(text_QString);
}

QIcon* QListWidgetItem_icon(const QListWidgetItem* self) {
	return new QIcon(self->icon());
}

void QListWidgetItem_setIcon(QListWidgetItem* self, QIcon* icon) {
	self->setIcon(*icon);
}

struct miqt_string QListWidgetItem_statusTip(const QListWidgetItem* self) {
	QString _ret = self->statusTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QListWidgetItem_setStatusTip(QListWidgetItem* self, struct miqt_string statusTip) {
	QString statusTip_QString = QString::fromUtf8(statusTip.data, statusTip.len);
	self->setStatusTip(statusTip_QString);
}

struct miqt_string QListWidgetItem_toolTip(const QListWidgetItem* self) {
	QString _ret = self->toolTip();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QListWidgetItem_setToolTip(QListWidgetItem* self, struct miqt_string toolTip) {
	QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
	self->setToolTip(toolTip_QString);
}

struct miqt_string QListWidgetItem_whatsThis(const QListWidgetItem* self) {
	QString _ret = self->whatsThis();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QListWidgetItem_setWhatsThis(QListWidgetItem* self, struct miqt_string whatsThis) {
	QString whatsThis_QString = QString::fromUtf8(whatsThis.data, whatsThis.len);
	self->setWhatsThis(whatsThis_QString);
}

QFont* QListWidgetItem_font(const QListWidgetItem* self) {
	return new QFont(self->font());
}

void QListWidgetItem_setFont(QListWidgetItem* self, QFont* font) {
	self->setFont(*font);
}

int QListWidgetItem_textAlignment(const QListWidgetItem* self) {
	return self->textAlignment();
}

void QListWidgetItem_setTextAlignment(QListWidgetItem* self, int alignment) {
	self->setTextAlignment(static_cast<int>(alignment));
}

QColor* QListWidgetItem_backgroundColor(const QListWidgetItem* self) {
	return new QColor(self->backgroundColor());
}

void QListWidgetItem_setBackgroundColor(QListWidgetItem* self, QColor* color) {
	self->setBackgroundColor(*color);
}

QBrush* QListWidgetItem_background(const QListWidgetItem* self) {
	return new QBrush(self->background());
}

void QListWidgetItem_setBackground(QListWidgetItem* self, QBrush* brush) {
	self->setBackground(*brush);
}

QColor* QListWidgetItem_textColor(const QListWidgetItem* self) {
	return new QColor(self->textColor());
}

void QListWidgetItem_setTextColor(QListWidgetItem* self, QColor* color) {
	self->setTextColor(*color);
}

QBrush* QListWidgetItem_foreground(const QListWidgetItem* self) {
	return new QBrush(self->foreground());
}

void QListWidgetItem_setForeground(QListWidgetItem* self, QBrush* brush) {
	self->setForeground(*brush);
}

int QListWidgetItem_checkState(const QListWidgetItem* self) {
	Qt::CheckState _ret = self->checkState();
	return static_cast<int>(_ret);
}

void QListWidgetItem_setCheckState(QListWidgetItem* self, int state) {
	self->setCheckState(static_cast<Qt::CheckState>(state));
}

QSize* QListWidgetItem_sizeHint(const QListWidgetItem* self) {
	return new QSize(self->sizeHint());
}

void QListWidgetItem_setSizeHint(QListWidgetItem* self, QSize* size) {
	self->setSizeHint(*size);
}

QVariant* QListWidgetItem_data(const QListWidgetItem* self, int role) {
	return new QVariant(self->data(static_cast<int>(role)));
}

void QListWidgetItem_setData(QListWidgetItem* self, int role, QVariant* value) {
	self->setData(static_cast<int>(role), *value);
}

bool QListWidgetItem_operatorLesser(const QListWidgetItem* self, QListWidgetItem* other) {
	return (*self < *other);
}

void QListWidgetItem_read(QListWidgetItem* self, QDataStream* in) {
	self->read(*in);
}

void QListWidgetItem_write(const QListWidgetItem* self, QDataStream* out) {
	self->write(*out);
}

void QListWidgetItem_operatorAssign(QListWidgetItem* self, QListWidgetItem* other) {
	self->operator=(*other);
}

int QListWidgetItem_type(const QListWidgetItem* self) {
	return self->type();
}

bool QListWidgetItem_override_virtual_clone(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidgetItem> slot_handle(slot);
	MiqtVirtualQListWidgetItem* self_cast = dynamic_cast<MiqtVirtualQListWidgetItem*>( (QListWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__clone = std::move(slot_handle);
	return true;
}

QListWidgetItem* QListWidgetItem_virtualbase_clone(const void* self) {
	return static_cast<const MiqtVirtualQListWidgetItem*>(self)->QListWidgetItem::clone();
}

bool QListWidgetItem_override_virtual_setBackgroundColor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidgetItem> slot_handle(slot);
	MiqtVirtualQListWidgetItem* self_cast = dynamic_cast<MiqtVirtualQListWidgetItem*>( (QListWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setBackgroundColor = std::move(slot_handle);
	return true;
}

void QListWidgetItem_virtualbase_setBackgroundColor(void* self, QColor* color) {
	static_cast<MiqtVirtualQListWidgetItem*>(self)->QListWidgetItem::setBackgroundColor(*color);
}

bool QListWidgetItem_override_virtual_data(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidgetItem> slot_handle(slot);
	MiqtVirtualQListWidgetItem* self_cast = dynamic_cast<MiqtVirtualQListWidgetItem*>( (QListWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__data = std::move(slot_handle);
	self_cast->owns_return__data = false;
	return true;
}

bool QListWidgetItem_override_virtual_owned_data(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidgetItem> slot_handle(slot);
	MiqtVirtualQListWidgetItem* self_cast = dynamic_cast<MiqtVirtualQListWidgetItem*>( (QListWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__data = std::move(slot_handle);
	self_cast->owns_return__data = true;
	return true;
}

QVariant* QListWidgetItem_virtualbase_data(const void* self, int role) {
	return new QVariant(static_cast<const MiqtVirtualQListWidgetItem*>(self)->QListWidgetItem::data(static_cast<int>(role)));
}

bool QListWidgetItem_override_virtual_setData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidgetItem> slot_handle(slot);
	MiqtVirtualQListWidgetItem* self_cast = dynamic_cast<MiqtVirtualQListWidgetItem*>( (QListWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setData = std::move(slot_handle);
	return true;
}

void QListWidgetItem_virtualbase_setData(void* self, int role, QVariant* value) {
	static_cast<MiqtVirtualQListWidgetItem*>(self)->QListWidgetItem::setData(static_cast<int>(role), *value);
}

bool QListWidgetItem_override_virtual_operatorLesser(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidgetItem> slot_handle(slot);
	MiqtVirtualQListWidgetItem* self_cast = dynamic_cast<MiqtVirtualQListWidgetItem*>( (QListWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__operatorLesser = std::move(slot_handle);
	return true;
}

bool QListWidgetItem_virtualbase_operatorLesser(const void* self, QListWidgetItem* other) {
	return static_cast<const MiqtVirtualQListWidgetItem*>(self)->QListWidgetItem::operator<(*other);
}

bool QListWidgetItem_override_virtual_read(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidgetItem> slot_handle(slot);
	MiqtVirtualQListWidgetItem* self_cast = dynamic_cast<MiqtVirtualQListWidgetItem*>( (QListWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__read = std::move(slot_handle);
	return true;
}

void QListWidgetItem_virtualbase_read(void* self, QDataStream* in) {
	static_cast<MiqtVirtualQListWidgetItem*>(self)->QListWidgetItem::read(*in);
}

bool QListWidgetItem_override_virtual_write(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidgetItem> slot_handle(slot);
	MiqtVirtualQListWidgetItem* self_cast = dynamic_cast<MiqtVirtualQListWidgetItem*>( (QListWidgetItem*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__write = std::move(slot_handle);
	return true;
}

void QListWidgetItem_virtualbase_write(const void* self, QDataStream* out) {
	static_cast<const MiqtVirtualQListWidgetItem*>(self)->QListWidgetItem::write(*out);
}

void QListWidgetItem_delete(QListWidgetItem* self) {
	delete self;
}

class MiqtVirtualQListWidget final : public QListWidget {
public:

	MiqtVirtualQListWidget(QWidget* parent): QListWidget(parent) {}
	MiqtVirtualQListWidget(): QListWidget() {}

	virtual ~MiqtVirtualQListWidget() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__setSelectionModel;

	// Subclass to allow providing a Go implementation
	virtual void setSelectionModel(QItemSelectionModel* selectionModel) override {
		if (!handle__setSelectionModel) {
			QListWidget::setSelectionModel(selectionModel);
			return;
		}

		QItemSelectionModel* sigval1 = selectionModel;
		miqt_exec_callback_QListWidget_setSelectionModel(this, handle__setSelectionModel.value(), sigval1);

	}

	friend void QListWidget_virtualbase_setSelectionModel(void* self, QItemSelectionModel* selectionModel);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__dropEvent;

	// Subclass to allow providing a Go implementation
	virtual void dropEvent(QDropEvent* event) override {
		if (!handle__dropEvent) {
			QListWidget::dropEvent(event);
			return;
		}

		QDropEvent* sigval1 = event;
		miqt_exec_callback_QListWidget_dropEvent(this, handle__dropEvent.value(), sigval1);

	}

	friend void QListWidget_virtualbase_dropEvent(void* self, QDropEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* e) override {
		if (!handle__event) {
			return QListWidget::event(e);
		}

		QEvent* sigval1 = e;
		bool callback_return_value = miqt_exec_callback_QListWidget_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QListWidget_virtualbase_event(void* self, QEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__mimeTypes;

	// Subclass to allow providing a Go implementation
	virtual QStringList mimeTypes() const override {
		if (!handle__mimeTypes) {
			return QListWidget::mimeTypes();
		}

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QListWidget_mimeTypes(this, handle__mimeTypes.value());
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

	friend struct miqt_array /* of struct miqt_string */  QListWidget_virtualbase_mimeTypes(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__mimeData;

	// Subclass to allow providing a Go implementation
	virtual QMimeData* mimeData(const QList<QListWidgetItem *> items) const override {
		if (!handle__mimeData) {
			return QListWidget::mimeData(items);
		}

		const QList<QListWidgetItem *> items_ret = items;
		// Convert QList<> from C++ memory to manually-managed C memory
		QListWidgetItem** items_arr = static_cast<QListWidgetItem**>(malloc(sizeof(QListWidgetItem*) * items_ret.length()));
		for (size_t i = 0, e = items_ret.length(); i < e; ++i) {
			items_arr[i] = items_ret[i];
		}
		struct miqt_array items_out;
		items_out.len = items_ret.length();
		items_out.data = static_cast<void*>(items_arr);
		struct miqt_array /* of QListWidgetItem* */  sigval1 = items_out;
		QMimeData* callback_return_value = miqt_exec_callback_QListWidget_mimeData(this, handle__mimeData.value(), sigval1);
		return callback_return_value;
	}

	friend QMimeData* QListWidget_virtualbase_mimeData(const void* self, struct miqt_array /* of QListWidgetItem* */  items);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__dropMimeData;

	// Subclass to allow providing a Go implementation
	virtual bool dropMimeData(int index, const QMimeData* data, Qt::DropAction action) override {
		if (!handle__dropMimeData) {
			return QListWidget::dropMimeData(index, data, action);
		}

		int sigval1 = index;
		QMimeData* sigval2 = (QMimeData*) data;
		Qt::DropAction action_ret = action;
		int sigval3 = static_cast<int>(action_ret);
		bool callback_return_value = miqt_exec_callback_QListWidget_dropMimeData(this, handle__dropMimeData.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QListWidget_virtualbase_dropMimeData(void* self, int index, QMimeData* data, int action);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__supportedDropActions;

	// Subclass to allow providing a Go implementation
	virtual Qt::DropActions supportedDropActions() const override {
		if (!handle__supportedDropActions) {
			return QListWidget::supportedDropActions();
		}

		int callback_return_value = miqt_exec_callback_QListWidget_supportedDropActions(this, handle__supportedDropActions.value());
		return static_cast<Qt::DropActions>(callback_return_value);
	}

	friend int QListWidget_virtualbase_supportedDropActions(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__visualRect;
	bool owns_return__visualRect = false;

	// Subclass to allow providing a Go implementation
	virtual QRect visualRect(const QModelIndex& index) const override {
		if (!handle__visualRect) {
			return QListWidget::visualRect(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QRect* callback_return_value = miqt_exec_callback_QListWidget_visualRect(this, handle__visualRect.value(), sigval1);
		std::unique_ptr<QRect> callback_return_value_owner;
		if (owns_return__visualRect) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QRect* QListWidget_virtualbase_visualRect(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__scrollTo;

	// Subclass to allow providing a Go implementation
	virtual void scrollTo(const QModelIndex& index, QAbstractItemView::ScrollHint hint) override {
		if (!handle__scrollTo) {
			QListWidget::scrollTo(index, hint);
			return;
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::ScrollHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);
		miqt_exec_callback_QListWidget_scrollTo(this, handle__scrollTo.value(), sigval1, sigval2);

	}

	friend void QListWidget_virtualbase_scrollTo(void* self, QModelIndex* index, int hint);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__indexAt;
	bool owns_return__indexAt = false;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex indexAt(const QPoint& p) const override {
		if (!handle__indexAt) {
			return QListWidget::indexAt(p);
		}

		const QPoint& p_ret = p;
		// Cast returned reference into pointer
		QPoint* sigval1 = const_cast<QPoint*>(&p_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QListWidget_indexAt(this, handle__indexAt.value(), sigval1);
		std::unique_ptr<QModelIndex> callback_return_value_owner;
		if (owns_return__indexAt) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QModelIndex* QListWidget_virtualbase_indexAt(const void* self, QPoint* p);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__doItemsLayout;

	// Subclass to allow providing a Go implementation
	virtual void doItemsLayout() override {
		if (!handle__doItemsLayout) {
			QListWidget::doItemsLayout();
			return;
		}

		miqt_exec_callback_QListWidget_doItemsLayout(this, handle__doItemsLayout.value());

	}

	friend void QListWidget_virtualbase_doItemsLayout(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__reset;

	// Subclass to allow providing a Go implementation
	virtual void reset() override {
		if (!handle__reset) {
			QListWidget::reset();
			return;
		}

		miqt_exec_callback_QListWidget_reset(this, handle__reset.value());

	}

	friend void QListWidget_virtualbase_reset(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__setRootIndex;

	// Subclass to allow providing a Go implementation
	virtual void setRootIndex(const QModelIndex& index) override {
		if (!handle__setRootIndex) {
			QListWidget::setRootIndex(index);
			return;
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		miqt_exec_callback_QListWidget_setRootIndex(this, handle__setRootIndex.value(), sigval1);

	}

	friend void QListWidget_virtualbase_setRootIndex(void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__scrollContentsBy;

	// Subclass to allow providing a Go implementation
	virtual void scrollContentsBy(int dx, int dy) override {
		if (!handle__scrollContentsBy) {
			QListWidget::scrollContentsBy(dx, dy);
			return;
		}

		int sigval1 = dx;
		int sigval2 = dy;
		miqt_exec_callback_QListWidget_scrollContentsBy(this, handle__scrollContentsBy.value(), sigval1, sigval2);

	}

	friend void QListWidget_virtualbase_scrollContentsBy(void* self, int dx, int dy);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__dataChanged;

	// Subclass to allow providing a Go implementation
	virtual void dataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight, const QVector<int>& roles) override {
		if (!handle__dataChanged) {
			QListWidget::dataChanged(topLeft, bottomRight, roles);
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
		miqt_exec_callback_QListWidget_dataChanged(this, handle__dataChanged.value(), sigval1, sigval2, sigval3);

	}

	friend void QListWidget_virtualbase_dataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__rowsInserted;

	// Subclass to allow providing a Go implementation
	virtual void rowsInserted(const QModelIndex& parent, int start, int end) override {
		if (!handle__rowsInserted) {
			QListWidget::rowsInserted(parent, start, end);
			return;
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;
		miqt_exec_callback_QListWidget_rowsInserted(this, handle__rowsInserted.value(), sigval1, sigval2, sigval3);

	}

	friend void QListWidget_virtualbase_rowsInserted(void* self, QModelIndex* parent, int start, int end);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__rowsAboutToBeRemoved;

	// Subclass to allow providing a Go implementation
	virtual void rowsAboutToBeRemoved(const QModelIndex& parent, int start, int end) override {
		if (!handle__rowsAboutToBeRemoved) {
			QListWidget::rowsAboutToBeRemoved(parent, start, end);
			return;
		}

		const QModelIndex& parent_ret = parent;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&parent_ret);
		int sigval2 = start;
		int sigval3 = end;
		miqt_exec_callback_QListWidget_rowsAboutToBeRemoved(this, handle__rowsAboutToBeRemoved.value(), sigval1, sigval2, sigval3);

	}

	friend void QListWidget_virtualbase_rowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__mouseMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseMoveEvent(QMouseEvent* e) override {
		if (!handle__mouseMoveEvent) {
			QListWidget::mouseMoveEvent(e);
			return;
		}

		QMouseEvent* sigval1 = e;
		miqt_exec_callback_QListWidget_mouseMoveEvent(this, handle__mouseMoveEvent.value(), sigval1);

	}

	friend void QListWidget_virtualbase_mouseMoveEvent(void* self, QMouseEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__mouseReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseReleaseEvent(QMouseEvent* e) override {
		if (!handle__mouseReleaseEvent) {
			QListWidget::mouseReleaseEvent(e);
			return;
		}

		QMouseEvent* sigval1 = e;
		miqt_exec_callback_QListWidget_mouseReleaseEvent(this, handle__mouseReleaseEvent.value(), sigval1);

	}

	friend void QListWidget_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__wheelEvent;

	// Subclass to allow providing a Go implementation
	virtual void wheelEvent(QWheelEvent* e) override {
		if (!handle__wheelEvent) {
			QListWidget::wheelEvent(e);
			return;
		}

		QWheelEvent* sigval1 = e;
		miqt_exec_callback_QListWidget_wheelEvent(this, handle__wheelEvent.value(), sigval1);

	}

	friend void QListWidget_virtualbase_wheelEvent(void* self, QWheelEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* e) override {
		if (!handle__timerEvent) {
			QListWidget::timerEvent(e);
			return;
		}

		QTimerEvent* sigval1 = e;
		miqt_exec_callback_QListWidget_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QListWidget_virtualbase_timerEvent(void* self, QTimerEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__resizeEvent;

	// Subclass to allow providing a Go implementation
	virtual void resizeEvent(QResizeEvent* e) override {
		if (!handle__resizeEvent) {
			QListWidget::resizeEvent(e);
			return;
		}

		QResizeEvent* sigval1 = e;
		miqt_exec_callback_QListWidget_resizeEvent(this, handle__resizeEvent.value(), sigval1);

	}

	friend void QListWidget_virtualbase_resizeEvent(void* self, QResizeEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__dragMoveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragMoveEvent(QDragMoveEvent* e) override {
		if (!handle__dragMoveEvent) {
			QListWidget::dragMoveEvent(e);
			return;
		}

		QDragMoveEvent* sigval1 = e;
		miqt_exec_callback_QListWidget_dragMoveEvent(this, handle__dragMoveEvent.value(), sigval1);

	}

	friend void QListWidget_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__dragLeaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragLeaveEvent(QDragLeaveEvent* e) override {
		if (!handle__dragLeaveEvent) {
			QListWidget::dragLeaveEvent(e);
			return;
		}

		QDragLeaveEvent* sigval1 = e;
		miqt_exec_callback_QListWidget_dragLeaveEvent(this, handle__dragLeaveEvent.value(), sigval1);

	}

	friend void QListWidget_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__startDrag;

	// Subclass to allow providing a Go implementation
	virtual void startDrag(Qt::DropActions supportedActions) override {
		if (!handle__startDrag) {
			QListWidget::startDrag(supportedActions);
			return;
		}

		Qt::DropActions supportedActions_ret = supportedActions;
		int sigval1 = static_cast<int>(supportedActions_ret);
		miqt_exec_callback_QListWidget_startDrag(this, handle__startDrag.value(), sigval1);

	}

	friend void QListWidget_virtualbase_startDrag(void* self, int supportedActions);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__viewOptions;
	bool owns_return__viewOptions = false;

	// Subclass to allow providing a Go implementation
	virtual QStyleOptionViewItem viewOptions() const override {
		if (!handle__viewOptions) {
			return QListWidget::viewOptions();
		}

		QStyleOptionViewItem* callback_return_value = miqt_exec_callback_QListWidget_viewOptions(this, handle__viewOptions.value());
		std::unique_ptr<QStyleOptionViewItem> callback_return_value_owner;
		if (owns_return__viewOptions) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QStyleOptionViewItem* QListWidget_virtualbase_viewOptions(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__paintEvent;

	// Subclass to allow providing a Go implementation
	virtual void paintEvent(QPaintEvent* e) override {
		if (!handle__paintEvent) {
			QListWidget::paintEvent(e);
			return;
		}

		QPaintEvent* sigval1 = e;
		miqt_exec_callback_QListWidget_paintEvent(this, handle__paintEvent.value(), sigval1);

	}

	friend void QListWidget_virtualbase_paintEvent(void* self, QPaintEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__horizontalOffset;

	// Subclass to allow providing a Go implementation
	virtual int horizontalOffset() const override {
		if (!handle__horizontalOffset) {
			return QListWidget::horizontalOffset();
		}

		int callback_return_value = miqt_exec_callback_QListWidget_horizontalOffset(this, handle__horizontalOffset.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QListWidget_virtualbase_horizontalOffset(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__verticalOffset;

	// Subclass to allow providing a Go implementation
	virtual int verticalOffset() const override {
		if (!handle__verticalOffset) {
			return QListWidget::verticalOffset();
		}

		int callback_return_value = miqt_exec_callback_QListWidget_verticalOffset(this, handle__verticalOffset.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QListWidget_virtualbase_verticalOffset(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__moveCursor;
	bool owns_return__moveCursor = false;

	// Subclass to allow providing a Go implementation
	virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers) override {
		if (!handle__moveCursor) {
			return QListWidget::moveCursor(cursorAction, modifiers);
		}

		QAbstractItemView::CursorAction cursorAction_ret = cursorAction;
		int sigval1 = static_cast<int>(cursorAction_ret);
		Qt::KeyboardModifiers modifiers_ret = modifiers;
		int sigval2 = static_cast<int>(modifiers_ret);
		QModelIndex* callback_return_value = miqt_exec_callback_QListWidget_moveCursor(this, handle__moveCursor.value(), sigval1, sigval2);
		std::unique_ptr<QModelIndex> callback_return_value_owner;
		if (owns_return__moveCursor) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QModelIndex* QListWidget_virtualbase_moveCursor(void* self, int cursorAction, int modifiers);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__setSelection;

	// Subclass to allow providing a Go implementation
	virtual void setSelection(const QRect& rect, QItemSelectionModel::SelectionFlags command) override {
		if (!handle__setSelection) {
			QListWidget::setSelection(rect, command);
			return;
		}

		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);
		QItemSelectionModel::SelectionFlags command_ret = command;
		int sigval2 = static_cast<int>(command_ret);
		miqt_exec_callback_QListWidget_setSelection(this, handle__setSelection.value(), sigval1, sigval2);

	}

	friend void QListWidget_virtualbase_setSelection(void* self, QRect* rect, int command);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__visualRegionForSelection;
	bool owns_return__visualRegionForSelection = false;

	// Subclass to allow providing a Go implementation
	virtual QRegion visualRegionForSelection(const QItemSelection& selection) const override {
		if (!handle__visualRegionForSelection) {
			return QListWidget::visualRegionForSelection(selection);
		}

		const QItemSelection& selection_ret = selection;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selection_ret);
		QRegion* callback_return_value = miqt_exec_callback_QListWidget_visualRegionForSelection(this, handle__visualRegionForSelection.value(), sigval1);
		std::unique_ptr<QRegion> callback_return_value_owner;
		if (owns_return__visualRegionForSelection) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QRegion* QListWidget_virtualbase_visualRegionForSelection(const void* self, QItemSelection* selection);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__selectedIndexes;

	// Subclass to allow providing a Go implementation
	virtual QModelIndexList selectedIndexes() const override {
		if (!handle__selectedIndexes) {
			return QListWidget::selectedIndexes();
		}

		struct miqt_array /* of QModelIndex* */  callback_return_value = miqt_exec_callback_QListWidget_selectedIndexes(this, handle__selectedIndexes.value());
		QModelIndexList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		QModelIndex** callback_return_value_arr = static_cast<QModelIndex**>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(*(callback_return_value_arr[i]));
		}
		free(callback_return_value.data);
		return callback_return_value_QList;
	}

	friend struct miqt_array /* of QModelIndex* */  QListWidget_virtualbase_selectedIndexes(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__updateGeometries;

	// Subclass to allow providing a Go implementation
	virtual void updateGeometries() override {
		if (!handle__updateGeometries) {
			QListWidget::updateGeometries();
			return;
		}

		miqt_exec_callback_QListWidget_updateGeometries(this, handle__updateGeometries.value());

	}

	friend void QListWidget_virtualbase_updateGeometries(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__isIndexHidden;

	// Subclass to allow providing a Go implementation
	virtual bool isIndexHidden(const QModelIndex& index) const override {
		if (!handle__isIndexHidden) {
			return QListWidget::isIndexHidden(index);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		bool callback_return_value = miqt_exec_callback_QListWidget_isIndexHidden(this, handle__isIndexHidden.value(), sigval1);
		return callback_return_value;
	}

	friend bool QListWidget_virtualbase_isIndexHidden(const void* self, QModelIndex* index);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__selectionChanged;

	// Subclass to allow providing a Go implementation
	virtual void selectionChanged(const QItemSelection& selected, const QItemSelection& deselected) override {
		if (!handle__selectionChanged) {
			QListWidget::selectionChanged(selected, deselected);
			return;
		}

		const QItemSelection& selected_ret = selected;
		// Cast returned reference into pointer
		QItemSelection* sigval1 = const_cast<QItemSelection*>(&selected_ret);
		const QItemSelection& deselected_ret = deselected;
		// Cast returned reference into pointer
		QItemSelection* sigval2 = const_cast<QItemSelection*>(&deselected_ret);
		miqt_exec_callback_QListWidget_selectionChanged(this, handle__selectionChanged.value(), sigval1, sigval2);

	}

	friend void QListWidget_virtualbase_selectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__currentChanged;

	// Subclass to allow providing a Go implementation
	virtual void currentChanged(const QModelIndex& current, const QModelIndex& previous) override {
		if (!handle__currentChanged) {
			QListWidget::currentChanged(current, previous);
			return;
		}

		const QModelIndex& current_ret = current;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&current_ret);
		const QModelIndex& previous_ret = previous;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&previous_ret);
		miqt_exec_callback_QListWidget_currentChanged(this, handle__currentChanged.value(), sigval1, sigval2);

	}

	friend void QListWidget_virtualbase_currentChanged(void* self, QModelIndex* current, QModelIndex* previous);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__viewportSizeHint;
	bool owns_return__viewportSizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize viewportSizeHint() const override {
		if (!handle__viewportSizeHint) {
			return QListWidget::viewportSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QListWidget_viewportSizeHint(this, handle__viewportSizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__viewportSizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QListWidget_virtualbase_viewportSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__keyboardSearch;

	// Subclass to allow providing a Go implementation
	virtual void keyboardSearch(const QString& search) override {
		if (!handle__keyboardSearch) {
			QListWidget::keyboardSearch(search);
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
		miqt_exec_callback_QListWidget_keyboardSearch(this, handle__keyboardSearch.value(), sigval1);

	}

	friend void QListWidget_virtualbase_keyboardSearch(void* self, struct miqt_string search);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__sizeHintForRow;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForRow(int row) const override {
		if (!handle__sizeHintForRow) {
			return QListWidget::sizeHintForRow(row);
		}

		int sigval1 = row;
		int callback_return_value = miqt_exec_callback_QListWidget_sizeHintForRow(this, handle__sizeHintForRow.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QListWidget_virtualbase_sizeHintForRow(const void* self, int row);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__sizeHintForColumn;

	// Subclass to allow providing a Go implementation
	virtual int sizeHintForColumn(int column) const override {
		if (!handle__sizeHintForColumn) {
			return QListWidget::sizeHintForColumn(column);
		}

		int sigval1 = column;
		int callback_return_value = miqt_exec_callback_QListWidget_sizeHintForColumn(this, handle__sizeHintForColumn.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QListWidget_virtualbase_sizeHintForColumn(const void* self, int column);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__inputMethodQuery;
	bool owns_return__inputMethodQuery = false;

	// Subclass to allow providing a Go implementation
	virtual QVariant inputMethodQuery(Qt::InputMethodQuery query) const override {
		if (!handle__inputMethodQuery) {
			return QListWidget::inputMethodQuery(query);
		}

		Qt::InputMethodQuery query_ret = query;
		int sigval1 = static_cast<int>(query_ret);
		QVariant* callback_return_value = miqt_exec_callback_QListWidget_inputMethodQuery(this, handle__inputMethodQuery.value(), sigval1);
		std::unique_ptr<QVariant> callback_return_value_owner;
		if (owns_return__inputMethodQuery) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QVariant* QListWidget_virtualbase_inputMethodQuery(const void* self, int query);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__selectAll;

	// Subclass to allow providing a Go implementation
	virtual void selectAll() override {
		if (!handle__selectAll) {
			QListWidget::selectAll();
			return;
		}

		miqt_exec_callback_QListWidget_selectAll(this, handle__selectAll.value());

	}

	friend void QListWidget_virtualbase_selectAll(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__updateEditorData;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorData() override {
		if (!handle__updateEditorData) {
			QListWidget::updateEditorData();
			return;
		}

		miqt_exec_callback_QListWidget_updateEditorData(this, handle__updateEditorData.value());

	}

	friend void QListWidget_virtualbase_updateEditorData(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__updateEditorGeometries;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorGeometries() override {
		if (!handle__updateEditorGeometries) {
			QListWidget::updateEditorGeometries();
			return;
		}

		miqt_exec_callback_QListWidget_updateEditorGeometries(this, handle__updateEditorGeometries.value());

	}

	friend void QListWidget_virtualbase_updateEditorGeometries(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__verticalScrollbarAction;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarAction(int action) override {
		if (!handle__verticalScrollbarAction) {
			QListWidget::verticalScrollbarAction(action);
			return;
		}

		int sigval1 = action;
		miqt_exec_callback_QListWidget_verticalScrollbarAction(this, handle__verticalScrollbarAction.value(), sigval1);

	}

	friend void QListWidget_virtualbase_verticalScrollbarAction(void* self, int action);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__horizontalScrollbarAction;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarAction(int action) override {
		if (!handle__horizontalScrollbarAction) {
			QListWidget::horizontalScrollbarAction(action);
			return;
		}

		int sigval1 = action;
		miqt_exec_callback_QListWidget_horizontalScrollbarAction(this, handle__horizontalScrollbarAction.value(), sigval1);

	}

	friend void QListWidget_virtualbase_horizontalScrollbarAction(void* self, int action);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__verticalScrollbarValueChanged;

	// Subclass to allow providing a Go implementation
	virtual void verticalScrollbarValueChanged(int value) override {
		if (!handle__verticalScrollbarValueChanged) {
			QListWidget::verticalScrollbarValueChanged(value);
			return;
		}

		int sigval1 = value;
		miqt_exec_callback_QListWidget_verticalScrollbarValueChanged(this, handle__verticalScrollbarValueChanged.value(), sigval1);

	}

	friend void QListWidget_virtualbase_verticalScrollbarValueChanged(void* self, int value);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__horizontalScrollbarValueChanged;

	// Subclass to allow providing a Go implementation
	virtual void horizontalScrollbarValueChanged(int value) override {
		if (!handle__horizontalScrollbarValueChanged) {
			QListWidget::horizontalScrollbarValueChanged(value);
			return;
		}

		int sigval1 = value;
		miqt_exec_callback_QListWidget_horizontalScrollbarValueChanged(this, handle__horizontalScrollbarValueChanged.value(), sigval1);

	}

	friend void QListWidget_virtualbase_horizontalScrollbarValueChanged(void* self, int value);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__closeEditor;

	// Subclass to allow providing a Go implementation
	virtual void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) override {
		if (!handle__closeEditor) {
			QListWidget::closeEditor(editor, hint);
			return;
		}

		QWidget* sigval1 = editor;
		QAbstractItemDelegate::EndEditHint hint_ret = hint;
		int sigval2 = static_cast<int>(hint_ret);
		miqt_exec_callback_QListWidget_closeEditor(this, handle__closeEditor.value(), sigval1, sigval2);

	}

	friend void QListWidget_virtualbase_closeEditor(void* self, QWidget* editor, int hint);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__commitData;

	// Subclass to allow providing a Go implementation
	virtual void commitData(QWidget* editor) override {
		if (!handle__commitData) {
			QListWidget::commitData(editor);
			return;
		}

		QWidget* sigval1 = editor;
		miqt_exec_callback_QListWidget_commitData(this, handle__commitData.value(), sigval1);

	}

	friend void QListWidget_virtualbase_commitData(void* self, QWidget* editor);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__editorDestroyed;

	// Subclass to allow providing a Go implementation
	virtual void editorDestroyed(QObject* editor) override {
		if (!handle__editorDestroyed) {
			QListWidget::editorDestroyed(editor);
			return;
		}

		QObject* sigval1 = editor;
		miqt_exec_callback_QListWidget_editorDestroyed(this, handle__editorDestroyed.value(), sigval1);

	}

	friend void QListWidget_virtualbase_editorDestroyed(void* self, QObject* editor);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__edit2;

	// Subclass to allow providing a Go implementation
	virtual bool edit(const QModelIndex& index, QAbstractItemView::EditTrigger trigger, QEvent* event) override {
		if (!handle__edit2) {
			return QListWidget::edit(index, trigger, event);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QAbstractItemView::EditTrigger trigger_ret = trigger;
		int sigval2 = static_cast<int>(trigger_ret);
		QEvent* sigval3 = event;
		bool callback_return_value = miqt_exec_callback_QListWidget_edit2(this, handle__edit2.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QListWidget_virtualbase_edit2(void* self, QModelIndex* index, int trigger, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__selectionCommand;

	// Subclass to allow providing a Go implementation
	virtual QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex& index, const QEvent* event) const override {
		if (!handle__selectionCommand) {
			return QListWidget::selectionCommand(index, event);
		}

		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
		QEvent* sigval2 = (QEvent*) event;
		int callback_return_value = miqt_exec_callback_QListWidget_selectionCommand(this, handle__selectionCommand.value(), sigval1, sigval2);
		return static_cast<QItemSelectionModel::SelectionFlags>(callback_return_value);
	}

	friend int QListWidget_virtualbase_selectionCommand(const void* self, QModelIndex* index, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__focusNextPrevChild;

	// Subclass to allow providing a Go implementation
	virtual bool focusNextPrevChild(bool next) override {
		if (!handle__focusNextPrevChild) {
			return QListWidget::focusNextPrevChild(next);
		}

		bool sigval1 = next;
		bool callback_return_value = miqt_exec_callback_QListWidget_focusNextPrevChild(this, handle__focusNextPrevChild.value(), sigval1);
		return callback_return_value;
	}

	friend bool QListWidget_virtualbase_focusNextPrevChild(void* self, bool next);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__viewportEvent;

	// Subclass to allow providing a Go implementation
	virtual bool viewportEvent(QEvent* event) override {
		if (!handle__viewportEvent) {
			return QListWidget::viewportEvent(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QListWidget_viewportEvent(this, handle__viewportEvent.value(), sigval1);
		return callback_return_value;
	}

	friend bool QListWidget_virtualbase_viewportEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__mousePressEvent;

	// Subclass to allow providing a Go implementation
	virtual void mousePressEvent(QMouseEvent* event) override {
		if (!handle__mousePressEvent) {
			QListWidget::mousePressEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QListWidget_mousePressEvent(this, handle__mousePressEvent.value(), sigval1);

	}

	friend void QListWidget_virtualbase_mousePressEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__mouseDoubleClickEvent;

	// Subclass to allow providing a Go implementation
	virtual void mouseDoubleClickEvent(QMouseEvent* event) override {
		if (!handle__mouseDoubleClickEvent) {
			QListWidget::mouseDoubleClickEvent(event);
			return;
		}

		QMouseEvent* sigval1 = event;
		miqt_exec_callback_QListWidget_mouseDoubleClickEvent(this, handle__mouseDoubleClickEvent.value(), sigval1);

	}

	friend void QListWidget_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__dragEnterEvent;

	// Subclass to allow providing a Go implementation
	virtual void dragEnterEvent(QDragEnterEvent* event) override {
		if (!handle__dragEnterEvent) {
			QListWidget::dragEnterEvent(event);
			return;
		}

		QDragEnterEvent* sigval1 = event;
		miqt_exec_callback_QListWidget_dragEnterEvent(this, handle__dragEnterEvent.value(), sigval1);

	}

	friend void QListWidget_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__focusInEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusInEvent(QFocusEvent* event) override {
		if (!handle__focusInEvent) {
			QListWidget::focusInEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QListWidget_focusInEvent(this, handle__focusInEvent.value(), sigval1);

	}

	friend void QListWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__focusOutEvent;

	// Subclass to allow providing a Go implementation
	virtual void focusOutEvent(QFocusEvent* event) override {
		if (!handle__focusOutEvent) {
			QListWidget::focusOutEvent(event);
			return;
		}

		QFocusEvent* sigval1 = event;
		miqt_exec_callback_QListWidget_focusOutEvent(this, handle__focusOutEvent.value(), sigval1);

	}

	friend void QListWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__keyPressEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyPressEvent(QKeyEvent* event) override {
		if (!handle__keyPressEvent) {
			QListWidget::keyPressEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QListWidget_keyPressEvent(this, handle__keyPressEvent.value(), sigval1);

	}

	friend void QListWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__inputMethodEvent;

	// Subclass to allow providing a Go implementation
	virtual void inputMethodEvent(QInputMethodEvent* event) override {
		if (!handle__inputMethodEvent) {
			QListWidget::inputMethodEvent(event);
			return;
		}

		QInputMethodEvent* sigval1 = event;
		miqt_exec_callback_QListWidget_inputMethodEvent(this, handle__inputMethodEvent.value(), sigval1);

	}

	friend void QListWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (!handle__eventFilter) {
			return QListWidget::eventFilter(object, event);
		}

		QObject* sigval1 = object;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QListWidget_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QListWidget_virtualbase_eventFilter(void* self, QObject* object, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__minimumSizeHint;
	bool owns_return__minimumSizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSizeHint() const override {
		if (!handle__minimumSizeHint) {
			return QListWidget::minimumSizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QListWidget_minimumSizeHint(this, handle__minimumSizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__minimumSizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QListWidget_virtualbase_minimumSizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__sizeHint;
	bool owns_return__sizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (!handle__sizeHint) {
			return QListWidget::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QListWidget_sizeHint(this, handle__sizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__sizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QListWidget_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__setupViewport;

	// Subclass to allow providing a Go implementation
	virtual void setupViewport(QWidget* viewport) override {
		if (!handle__setupViewport) {
			QListWidget::setupViewport(viewport);
			return;
		}

		QWidget* sigval1 = viewport;
		miqt_exec_callback_QListWidget_setupViewport(this, handle__setupViewport.value(), sigval1);

	}

	friend void QListWidget_virtualbase_setupViewport(void* self, QWidget* viewport);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__contextMenuEvent;

	// Subclass to allow providing a Go implementation
	virtual void contextMenuEvent(QContextMenuEvent* param1) override {
		if (!handle__contextMenuEvent) {
			QListWidget::contextMenuEvent(param1);
			return;
		}

		QContextMenuEvent* sigval1 = param1;
		miqt_exec_callback_QListWidget_contextMenuEvent(this, handle__contextMenuEvent.value(), sigval1);

	}

	friend void QListWidget_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__changeEvent;

	// Subclass to allow providing a Go implementation
	virtual void changeEvent(QEvent* param1) override {
		if (!handle__changeEvent) {
			QListWidget::changeEvent(param1);
			return;
		}

		QEvent* sigval1 = param1;
		miqt_exec_callback_QListWidget_changeEvent(this, handle__changeEvent.value(), sigval1);

	}

	friend void QListWidget_virtualbase_changeEvent(void* self, QEvent* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__devType;

	// Subclass to allow providing a Go implementation
	virtual int devType() const override {
		if (!handle__devType) {
			return QListWidget::devType();
		}

		int callback_return_value = miqt_exec_callback_QListWidget_devType(this, handle__devType.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QListWidget_virtualbase_devType(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__setVisible;

	// Subclass to allow providing a Go implementation
	virtual void setVisible(bool visible) override {
		if (!handle__setVisible) {
			QListWidget::setVisible(visible);
			return;
		}

		bool sigval1 = visible;
		miqt_exec_callback_QListWidget_setVisible(this, handle__setVisible.value(), sigval1);

	}

	friend void QListWidget_virtualbase_setVisible(void* self, bool visible);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__heightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (!handle__heightForWidth) {
			return QListWidget::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QListWidget_heightForWidth(this, handle__heightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QListWidget_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__hasHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (!handle__hasHeightForWidth) {
			return QListWidget::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QListWidget_hasHeightForWidth(this, handle__hasHeightForWidth.value());
		return callback_return_value;
	}

	friend bool QListWidget_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__paintEngine;

	// Subclass to allow providing a Go implementation
	virtual QPaintEngine* paintEngine() const override {
		if (!handle__paintEngine) {
			return QListWidget::paintEngine();
		}

		QPaintEngine* callback_return_value = miqt_exec_callback_QListWidget_paintEngine(this, handle__paintEngine.value());
		return callback_return_value;
	}

	friend QPaintEngine* QListWidget_virtualbase_paintEngine(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__keyReleaseEvent;

	// Subclass to allow providing a Go implementation
	virtual void keyReleaseEvent(QKeyEvent* event) override {
		if (!handle__keyReleaseEvent) {
			QListWidget::keyReleaseEvent(event);
			return;
		}

		QKeyEvent* sigval1 = event;
		miqt_exec_callback_QListWidget_keyReleaseEvent(this, handle__keyReleaseEvent.value(), sigval1);

	}

	friend void QListWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__enterEvent;

	// Subclass to allow providing a Go implementation
	virtual void enterEvent(QEvent* event) override {
		if (!handle__enterEvent) {
			QListWidget::enterEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QListWidget_enterEvent(this, handle__enterEvent.value(), sigval1);

	}

	friend void QListWidget_virtualbase_enterEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__leaveEvent;

	// Subclass to allow providing a Go implementation
	virtual void leaveEvent(QEvent* event) override {
		if (!handle__leaveEvent) {
			QListWidget::leaveEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QListWidget_leaveEvent(this, handle__leaveEvent.value(), sigval1);

	}

	friend void QListWidget_virtualbase_leaveEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__moveEvent;

	// Subclass to allow providing a Go implementation
	virtual void moveEvent(QMoveEvent* event) override {
		if (!handle__moveEvent) {
			QListWidget::moveEvent(event);
			return;
		}

		QMoveEvent* sigval1 = event;
		miqt_exec_callback_QListWidget_moveEvent(this, handle__moveEvent.value(), sigval1);

	}

	friend void QListWidget_virtualbase_moveEvent(void* self, QMoveEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__closeEvent;

	// Subclass to allow providing a Go implementation
	virtual void closeEvent(QCloseEvent* event) override {
		if (!handle__closeEvent) {
			QListWidget::closeEvent(event);
			return;
		}

		QCloseEvent* sigval1 = event;
		miqt_exec_callback_QListWidget_closeEvent(this, handle__closeEvent.value(), sigval1);

	}

	friend void QListWidget_virtualbase_closeEvent(void* self, QCloseEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__tabletEvent;

	// Subclass to allow providing a Go implementation
	virtual void tabletEvent(QTabletEvent* event) override {
		if (!handle__tabletEvent) {
			QListWidget::tabletEvent(event);
			return;
		}

		QTabletEvent* sigval1 = event;
		miqt_exec_callback_QListWidget_tabletEvent(this, handle__tabletEvent.value(), sigval1);

	}

	friend void QListWidget_virtualbase_tabletEvent(void* self, QTabletEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__actionEvent;

	// Subclass to allow providing a Go implementation
	virtual void actionEvent(QActionEvent* event) override {
		if (!handle__actionEvent) {
			QListWidget::actionEvent(event);
			return;
		}

		QActionEvent* sigval1 = event;
		miqt_exec_callback_QListWidget_actionEvent(this, handle__actionEvent.value(), sigval1);

	}

	friend void QListWidget_virtualbase_actionEvent(void* self, QActionEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__showEvent;

	// Subclass to allow providing a Go implementation
	virtual void showEvent(QShowEvent* event) override {
		if (!handle__showEvent) {
			QListWidget::showEvent(event);
			return;
		}

		QShowEvent* sigval1 = event;
		miqt_exec_callback_QListWidget_showEvent(this, handle__showEvent.value(), sigval1);

	}

	friend void QListWidget_virtualbase_showEvent(void* self, QShowEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__hideEvent;

	// Subclass to allow providing a Go implementation
	virtual void hideEvent(QHideEvent* event) override {
		if (!handle__hideEvent) {
			QListWidget::hideEvent(event);
			return;
		}

		QHideEvent* sigval1 = event;
		miqt_exec_callback_QListWidget_hideEvent(this, handle__hideEvent.value(), sigval1);

	}

	friend void QListWidget_virtualbase_hideEvent(void* self, QHideEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__nativeEvent;

	// Subclass to allow providing a Go implementation
	virtual bool nativeEvent(const QByteArray& eventType, void* message, long* result) override {
		if (!handle__nativeEvent) {
			return QListWidget::nativeEvent(eventType, message, result);
		}

		const QByteArray eventType_qb = eventType;
		struct miqt_string eventType_ms;
		eventType_ms.len = eventType_qb.length();
		eventType_ms.data = static_cast<char*>(malloc(eventType_ms.len));
		memcpy(eventType_ms.data, eventType_qb.data(), eventType_ms.len);
		struct miqt_string sigval1 = eventType_ms;
		void* sigval2 = message;
		long* sigval3 = result;
		bool callback_return_value = miqt_exec_callback_QListWidget_nativeEvent(this, handle__nativeEvent.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend bool QListWidget_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__metric;

	// Subclass to allow providing a Go implementation
	virtual int metric(QPaintDevice::PaintDeviceMetric param1) const override {
		if (!handle__metric) {
			return QListWidget::metric(param1);
		}

		QPaintDevice::PaintDeviceMetric param1_ret = param1;
		int sigval1 = static_cast<int>(param1_ret);
		int callback_return_value = miqt_exec_callback_QListWidget_metric(this, handle__metric.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QListWidget_virtualbase_metric(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__initPainter;

	// Subclass to allow providing a Go implementation
	virtual void initPainter(QPainter* painter) const override {
		if (!handle__initPainter) {
			QListWidget::initPainter(painter);
			return;
		}

		QPainter* sigval1 = painter;
		miqt_exec_callback_QListWidget_initPainter(this, handle__initPainter.value(), sigval1);

	}

	friend void QListWidget_virtualbase_initPainter(const void* self, QPainter* painter);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__redirected;

	// Subclass to allow providing a Go implementation
	virtual QPaintDevice* redirected(QPoint* offset) const override {
		if (!handle__redirected) {
			return QListWidget::redirected(offset);
		}

		QPoint* sigval1 = offset;
		QPaintDevice* callback_return_value = miqt_exec_callback_QListWidget_redirected(this, handle__redirected.value(), sigval1);
		return callback_return_value;
	}

	friend QPaintDevice* QListWidget_virtualbase_redirected(const void* self, QPoint* offset);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__sharedPainter;

	// Subclass to allow providing a Go implementation
	virtual QPainter* sharedPainter() const override {
		if (!handle__sharedPainter) {
			return QListWidget::sharedPainter();
		}

		QPainter* callback_return_value = miqt_exec_callback_QListWidget_sharedPainter(this, handle__sharedPainter.value());
		return callback_return_value;
	}

	friend QPainter* QListWidget_virtualbase_sharedPainter(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QListWidget::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QListWidget_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QListWidget_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QListWidget::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QListWidget_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QListWidget_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QListWidget::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QListWidget_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QListWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QListWidget::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QListWidget_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QListWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend struct miqt_array /* of QListWidgetItem* */  QListWidget_protectedbase_items(bool* _dynamic_cast_ok, const void* self, QMimeData* data);
	friend QModelIndex* QListWidget_protectedbase_indexFromItem(bool* _dynamic_cast_ok, const void* self, QListWidgetItem* item);
	friend QModelIndex* QListWidget_protectedbase_indexFromItemWithItem(bool* _dynamic_cast_ok, const void* self, QListWidgetItem* item);
	friend QListWidgetItem* QListWidget_protectedbase_itemFromIndex(bool* _dynamic_cast_ok, const void* self, QModelIndex* index);
	friend void QListWidget_protectedbase_resizeContents(bool* _dynamic_cast_ok, void* self, int width, int height);
	friend QSize* QListWidget_protectedbase_contentsSize(bool* _dynamic_cast_ok, const void* self);
	friend QRect* QListWidget_protectedbase_rectForIndex(bool* _dynamic_cast_ok, const void* self, QModelIndex* index);
	friend void QListWidget_protectedbase_setPositionForIndex(bool* _dynamic_cast_ok, void* self, QPoint* position, QModelIndex* index);
	friend void QListWidget_protectedbase_setHorizontalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps);
	friend int QListWidget_protectedbase_horizontalStepsPerItem(bool* _dynamic_cast_ok, const void* self);
	friend void QListWidget_protectedbase_setVerticalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps);
	friend int QListWidget_protectedbase_verticalStepsPerItem(bool* _dynamic_cast_ok, const void* self);
	friend int QListWidget_protectedbase_state(bool* _dynamic_cast_ok, const void* self);
	friend void QListWidget_protectedbase_setState(bool* _dynamic_cast_ok, void* self, int state);
	friend void QListWidget_protectedbase_scheduleDelayedItemsLayout(bool* _dynamic_cast_ok, void* self);
	friend void QListWidget_protectedbase_executeDelayedItemsLayout(bool* _dynamic_cast_ok, void* self);
	friend void QListWidget_protectedbase_setDirtyRegion(bool* _dynamic_cast_ok, void* self, QRegion* region);
	friend void QListWidget_protectedbase_scrollDirtyRegion(bool* _dynamic_cast_ok, void* self, int dx, int dy);
	friend QPoint* QListWidget_protectedbase_dirtyRegionOffset(bool* _dynamic_cast_ok, const void* self);
	friend void QListWidget_protectedbase_startAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend void QListWidget_protectedbase_stopAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend void QListWidget_protectedbase_doAutoScroll(bool* _dynamic_cast_ok, void* self);
	friend int QListWidget_protectedbase_dropIndicatorPosition(bool* _dynamic_cast_ok, const void* self);
	friend void QListWidget_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom);
	friend QMargins* QListWidget_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self);
	friend void QListWidget_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
	friend void QListWidget_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option);
	friend void QListWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
	friend void QListWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self);
	friend void QListWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
	friend bool QListWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
	friend bool QListWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
	friend QObject* QListWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QListWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QListWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QListWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QListWidget* QListWidget_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQListWidget(parent);
}

QListWidget* QListWidget_new2() {
	return new (std::nothrow) MiqtVirtualQListWidget();
}

void QListWidget_virtbase(QListWidget* src, QListView** outptr_QListView) {
	*outptr_QListView = static_cast<QListView*>(src);
}

QMetaObject* QListWidget_metaObject(const QListWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QListWidget_metacast(QListWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QListWidget_tr(const char* s) {
	QString _ret = QListWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QListWidget_trUtf8(const char* s) {
	QString _ret = QListWidget::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QListWidget_setSelectionModel(QListWidget* self, QItemSelectionModel* selectionModel) {
	self->setSelectionModel(selectionModel);
}

QListWidgetItem* QListWidget_item(const QListWidget* self, int row) {
	return self->item(static_cast<int>(row));
}

int QListWidget_row(const QListWidget* self, QListWidgetItem* item) {
	return self->row(item);
}

void QListWidget_insertItem(QListWidget* self, int row, QListWidgetItem* item) {
	self->insertItem(static_cast<int>(row), item);
}

void QListWidget_insertItem2(QListWidget* self, int row, struct miqt_string label) {
	QString label_QString = QString::fromUtf8(label.data, label.len);
	self->insertItem(static_cast<int>(row), label_QString);
}

void QListWidget_insertItems(QListWidget* self, int row, struct miqt_array /* of struct miqt_string */  labels) {
	QStringList labels_QList;
	labels_QList.reserve(labels.len);
	struct miqt_string* labels_arr = static_cast<struct miqt_string*>(labels.data);
	for(size_t i = 0; i < labels.len; ++i) {
		QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
		labels_QList.push_back(labels_arr_i_QString);
	}
	self->insertItems(static_cast<int>(row), labels_QList);
}

void QListWidget_addItem(QListWidget* self, struct miqt_string label) {
	QString label_QString = QString::fromUtf8(label.data, label.len);
	self->addItem(label_QString);
}

void QListWidget_addItemWithItem(QListWidget* self, QListWidgetItem* item) {
	self->addItem(item);
}

void QListWidget_addItems(QListWidget* self, struct miqt_array /* of struct miqt_string */  labels) {
	QStringList labels_QList;
	labels_QList.reserve(labels.len);
	struct miqt_string* labels_arr = static_cast<struct miqt_string*>(labels.data);
	for(size_t i = 0; i < labels.len; ++i) {
		QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
		labels_QList.push_back(labels_arr_i_QString);
	}
	self->addItems(labels_QList);
}

QListWidgetItem* QListWidget_takeItem(QListWidget* self, int row) {
	return self->takeItem(static_cast<int>(row));
}

int QListWidget_count(const QListWidget* self) {
	return self->count();
}

QListWidgetItem* QListWidget_currentItem(const QListWidget* self) {
	return self->currentItem();
}

void QListWidget_setCurrentItem(QListWidget* self, QListWidgetItem* item) {
	self->setCurrentItem(item);
}

void QListWidget_setCurrentItem2(QListWidget* self, QListWidgetItem* item, int command) {
	self->setCurrentItem(item, static_cast<QItemSelectionModel::SelectionFlags>(command));
}

int QListWidget_currentRow(const QListWidget* self) {
	return self->currentRow();
}

void QListWidget_setCurrentRow(QListWidget* self, int row) {
	self->setCurrentRow(static_cast<int>(row));
}

void QListWidget_setCurrentRow2(QListWidget* self, int row, int command) {
	self->setCurrentRow(static_cast<int>(row), static_cast<QItemSelectionModel::SelectionFlags>(command));
}

QListWidgetItem* QListWidget_itemAt(const QListWidget* self, QPoint* p) {
	return self->itemAt(*p);
}

QListWidgetItem* QListWidget_itemAt2(const QListWidget* self, int x, int y) {
	return self->itemAt(static_cast<int>(x), static_cast<int>(y));
}

QRect* QListWidget_visualItemRect(const QListWidget* self, QListWidgetItem* item) {
	return new QRect(self->visualItemRect(item));
}

void QListWidget_sortItems(QListWidget* self) {
	self->sortItems();
}

void QListWidget_setSortingEnabled(QListWidget* self, bool enable) {
	self->setSortingEnabled(enable);
}

bool QListWidget_isSortingEnabled(const QListWidget* self) {
	return self->isSortingEnabled();
}

void QListWidget_editItem(QListWidget* self, QListWidgetItem* item) {
	self->editItem(item);
}

void QListWidget_openPersistentEditor(QListWidget* self, QListWidgetItem* item) {
	self->openPersistentEditor(item);
}

void QListWidget_closePersistentEditor(QListWidget* self, QListWidgetItem* item) {
	self->closePersistentEditor(item);
}

bool QListWidget_isPersistentEditorOpen(const QListWidget* self, QListWidgetItem* item) {
	return self->isPersistentEditorOpen(item);
}

QWidget* QListWidget_itemWidget(const QListWidget* self, QListWidgetItem* item) {
	return self->itemWidget(item);
}

void QListWidget_setItemWidget(QListWidget* self, QListWidgetItem* item, QWidget* widget) {
	self->setItemWidget(item, widget);
}

void QListWidget_removeItemWidget(QListWidget* self, QListWidgetItem* item) {
	self->removeItemWidget(item);
}

bool QListWidget_isItemSelected(const QListWidget* self, QListWidgetItem* item) {
	return self->isItemSelected(item);
}

void QListWidget_setItemSelected(QListWidget* self, QListWidgetItem* item, bool select) {
	self->setItemSelected(item, select);
}

struct miqt_array /* of QListWidgetItem* */  QListWidget_selectedItems(const QListWidget* self) {
	QList<QListWidgetItem *> _ret = self->selectedItems();
	// Convert QList<> from C++ memory to manually-managed C memory
	QListWidgetItem** _arr = static_cast<QListWidgetItem**>(malloc(sizeof(QListWidgetItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array /* of QListWidgetItem* */  QListWidget_findItems(const QListWidget* self, struct miqt_string text, int flags) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	QList<QListWidgetItem *> _ret = self->findItems(text_QString, static_cast<Qt::MatchFlags>(flags));
	// Convert QList<> from C++ memory to manually-managed C memory
	QListWidgetItem** _arr = static_cast<QListWidgetItem**>(malloc(sizeof(QListWidgetItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

bool QListWidget_isItemHidden(const QListWidget* self, QListWidgetItem* item) {
	return self->isItemHidden(item);
}

void QListWidget_setItemHidden(QListWidget* self, QListWidgetItem* item, bool hide) {
	self->setItemHidden(item, hide);
}

void QListWidget_dropEvent(QListWidget* self, QDropEvent* event) {
	self->dropEvent(event);
}

void QListWidget_scrollToItem(QListWidget* self, QListWidgetItem* item) {
	self->scrollToItem(item);
}

void QListWidget_clear(QListWidget* self) {
	self->clear();
}

void QListWidget_itemPressed(QListWidget* self, QListWidgetItem* item) {
	self->itemPressed(item);
}

void* QListWidget_connect_itemPressed(QListWidget* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget>>(slot);
	return new QMetaObject::Connection(QListWidget::connect(self, static_cast<void (QListWidget::*)(QListWidgetItem*)>(&QListWidget::itemPressed), self, [slot_handle](QListWidgetItem* item) {
		intptr_t slot = slot_handle->value();
		QListWidgetItem* sigval1 = item;
		miqt_exec_callback_QListWidget_itemPressed(slot, sigval1);
	}));
}

void QListWidget_itemClicked(QListWidget* self, QListWidgetItem* item) {
	self->itemClicked(item);
}

void* QListWidget_connect_itemClicked(QListWidget* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget>>(slot);
	return new QMetaObject::Connection(QListWidget::connect(self, static_cast<void (QListWidget::*)(QListWidgetItem*)>(&QListWidget::itemClicked), self, [slot_handle](QListWidgetItem* item) {
		intptr_t slot = slot_handle->value();
		QListWidgetItem* sigval1 = item;
		miqt_exec_callback_QListWidget_itemClicked(slot, sigval1);
	}));
}

void QListWidget_itemDoubleClicked(QListWidget* self, QListWidgetItem* item) {
	self->itemDoubleClicked(item);
}

void* QListWidget_connect_itemDoubleClicked(QListWidget* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget>>(slot);
	return new QMetaObject::Connection(QListWidget::connect(self, static_cast<void (QListWidget::*)(QListWidgetItem*)>(&QListWidget::itemDoubleClicked), self, [slot_handle](QListWidgetItem* item) {
		intptr_t slot = slot_handle->value();
		QListWidgetItem* sigval1 = item;
		miqt_exec_callback_QListWidget_itemDoubleClicked(slot, sigval1);
	}));
}

void QListWidget_itemActivated(QListWidget* self, QListWidgetItem* item) {
	self->itemActivated(item);
}

void* QListWidget_connect_itemActivated(QListWidget* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget>>(slot);
	return new QMetaObject::Connection(QListWidget::connect(self, static_cast<void (QListWidget::*)(QListWidgetItem*)>(&QListWidget::itemActivated), self, [slot_handle](QListWidgetItem* item) {
		intptr_t slot = slot_handle->value();
		QListWidgetItem* sigval1 = item;
		miqt_exec_callback_QListWidget_itemActivated(slot, sigval1);
	}));
}

void QListWidget_itemEntered(QListWidget* self, QListWidgetItem* item) {
	self->itemEntered(item);
}

void* QListWidget_connect_itemEntered(QListWidget* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget>>(slot);
	return new QMetaObject::Connection(QListWidget::connect(self, static_cast<void (QListWidget::*)(QListWidgetItem*)>(&QListWidget::itemEntered), self, [slot_handle](QListWidgetItem* item) {
		intptr_t slot = slot_handle->value();
		QListWidgetItem* sigval1 = item;
		miqt_exec_callback_QListWidget_itemEntered(slot, sigval1);
	}));
}

void QListWidget_itemChanged(QListWidget* self, QListWidgetItem* item) {
	self->itemChanged(item);
}

void* QListWidget_connect_itemChanged(QListWidget* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget>>(slot);
	return new QMetaObject::Connection(QListWidget::connect(self, static_cast<void (QListWidget::*)(QListWidgetItem*)>(&QListWidget::itemChanged), self, [slot_handle](QListWidgetItem* item) {
		intptr_t slot = slot_handle->value();
		QListWidgetItem* sigval1 = item;
		miqt_exec_callback_QListWidget_itemChanged(slot, sigval1);
	}));
}

void QListWidget_currentItemChanged(QListWidget* self, QListWidgetItem* current, QListWidgetItem* previous) {
	self->currentItemChanged(current, previous);
}

void* QListWidget_connect_currentItemChanged(QListWidget* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget>>(slot);
	return new QMetaObject::Connection(QListWidget::connect(self, static_cast<void (QListWidget::*)(QListWidgetItem*, QListWidgetItem*)>(&QListWidget::currentItemChanged), self, [slot_handle](QListWidgetItem* current, QListWidgetItem* previous) {
		intptr_t slot = slot_handle->value();
		QListWidgetItem* sigval1 = current;
		QListWidgetItem* sigval2 = previous;
		miqt_exec_callback_QListWidget_currentItemChanged(slot, sigval1, sigval2);
	}));
}

void QListWidget_currentTextChanged(QListWidget* self, struct miqt_string currentText) {
	QString currentText_QString = QString::fromUtf8(currentText.data, currentText.len);
	self->currentTextChanged(currentText_QString);
}

void* QListWidget_connect_currentTextChanged(QListWidget* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget>>(slot);
	return new QMetaObject::Connection(QListWidget::connect(self, static_cast<void (QListWidget::*)(const QString&)>(&QListWidget::currentTextChanged), self, [slot_handle](const QString& currentText) {
		intptr_t slot = slot_handle->value();
		const QString currentText_ret = currentText;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray currentText_b = currentText_ret.toUtf8();
		struct miqt_string currentText_ms;
		currentText_ms.len = currentText_b.length();
		currentText_ms.data = static_cast<char*>(malloc(currentText_ms.len));
		memcpy(currentText_ms.data, currentText_b.data(), currentText_ms.len);
		struct miqt_string sigval1 = currentText_ms;
		miqt_exec_callback_QListWidget_currentTextChanged(slot, sigval1);
	}));
}

void QListWidget_currentRowChanged(QListWidget* self, int currentRow) {
	self->currentRowChanged(static_cast<int>(currentRow));
}

void* QListWidget_connect_currentRowChanged(QListWidget* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget>>(slot);
	return new QMetaObject::Connection(QListWidget::connect(self, static_cast<void (QListWidget::*)(int)>(&QListWidget::currentRowChanged), self, [slot_handle](int currentRow) {
		intptr_t slot = slot_handle->value();
		int sigval1 = currentRow;
		miqt_exec_callback_QListWidget_currentRowChanged(slot, sigval1);
	}));
}

void QListWidget_itemSelectionChanged(QListWidget* self) {
	self->itemSelectionChanged();
}

void* QListWidget_connect_itemSelectionChanged(QListWidget* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget>>(slot);
	return new QMetaObject::Connection(QListWidget::connect(self, static_cast<void (QListWidget::*)()>(&QListWidget::itemSelectionChanged), self, [slot_handle]() {
		intptr_t slot = slot_handle->value();
		miqt_exec_callback_QListWidget_itemSelectionChanged(slot);
	}));
}

struct miqt_string QListWidget_tr2(const char* s, const char* c) {
	QString _ret = QListWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QListWidget_tr3(const char* s, const char* c, int n) {
	QString _ret = QListWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QListWidget_trUtf82(const char* s, const char* c) {
	QString _ret = QListWidget::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QListWidget_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QListWidget::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QListWidget_sortItemsWithOrder(QListWidget* self, int order) {
	self->sortItems(static_cast<Qt::SortOrder>(order));
}

void QListWidget_scrollToItem2(QListWidget* self, QListWidgetItem* item, int hint) {
	self->scrollToItem(item, static_cast<QAbstractItemView::ScrollHint>(hint));
}

bool QListWidget_override_virtual_setSelectionModel(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setSelectionModel = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_setSelectionModel(void* self, QItemSelectionModel* selectionModel) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::setSelectionModel(selectionModel);
}

bool QListWidget_override_virtual_dropEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropEvent = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_dropEvent(void* self, QDropEvent* event) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::dropEvent(event);
}

bool QListWidget_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QListWidget_virtualbase_event(void* self, QEvent* e) {
	return static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::event(e);
}

bool QListWidget_override_virtual_mimeTypes(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mimeTypes = std::move(slot_handle);
	return true;
}

struct miqt_array /* of struct miqt_string */  QListWidget_virtualbase_mimeTypes(const void* self) {
	QStringList _ret = static_cast<const MiqtVirtualQListWidget*>(self)->QListWidget::mimeTypes();
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

bool QListWidget_override_virtual_mimeData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mimeData = std::move(slot_handle);
	return true;
}

QMimeData* QListWidget_virtualbase_mimeData(const void* self, struct miqt_array /* of QListWidgetItem* */  items) {
	QList<QListWidgetItem *> items_QList;
	items_QList.reserve(items.len);
	QListWidgetItem** items_arr = static_cast<QListWidgetItem**>(items.data);
	for(size_t i = 0; i < items.len; ++i) {
		items_QList.push_back(items_arr[i]);
	}
	return static_cast<const MiqtVirtualQListWidget*>(self)->QListWidget::mimeData(items_QList);
}

bool QListWidget_override_virtual_dropMimeData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dropMimeData = std::move(slot_handle);
	return true;
}

bool QListWidget_virtualbase_dropMimeData(void* self, int index, QMimeData* data, int action) {
	return static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::dropMimeData(static_cast<int>(index), data, static_cast<Qt::DropAction>(action));
}

bool QListWidget_override_virtual_supportedDropActions(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__supportedDropActions = std::move(slot_handle);
	return true;
}

int QListWidget_virtualbase_supportedDropActions(const void* self) {
	Qt::DropActions _ret = static_cast<const MiqtVirtualQListWidget*>(self)->QListWidget::supportedDropActions();
	return static_cast<int>(_ret);
}

bool QListWidget_override_virtual_visualRect(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__visualRect = std::move(slot_handle);
	self_cast->owns_return__visualRect = false;
	return true;
}

bool QListWidget_override_virtual_owned_visualRect(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__visualRect = std::move(slot_handle);
	self_cast->owns_return__visualRect = true;
	return true;
}

QRect* QListWidget_virtualbase_visualRect(const void* self, QModelIndex* index) {
	return new QRect(static_cast<const MiqtVirtualQListWidget*>(self)->QListWidget::visualRect(*index));
}

bool QListWidget_override_virtual_scrollTo(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scrollTo = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_scrollTo(void* self, QModelIndex* index, int hint) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::scrollTo(*index, static_cast<MiqtVirtualQListWidget::ScrollHint>(hint));
}

bool QListWidget_override_virtual_indexAt(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__indexAt = std::move(slot_handle);
	self_cast->owns_return__indexAt = false;
	return true;
}

bool QListWidget_override_virtual_owned_indexAt(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__indexAt = std::move(slot_handle);
	self_cast->owns_return__indexAt = true;
	return true;
}

QModelIndex* QListWidget_virtualbase_indexAt(const void* self, QPoint* p) {
	return new QModelIndex(static_cast<const MiqtVirtualQListWidget*>(self)->QListWidget::indexAt(*p));
}

bool QListWidget_override_virtual_doItemsLayout(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__doItemsLayout = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_doItemsLayout(void* self) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::doItemsLayout();
}

bool QListWidget_override_virtual_reset(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__reset = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_reset(void* self) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::reset();
}

bool QListWidget_override_virtual_setRootIndex(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setRootIndex = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_setRootIndex(void* self, QModelIndex* index) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::setRootIndex(*index);
}

bool QListWidget_override_virtual_scrollContentsBy(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__scrollContentsBy = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_scrollContentsBy(void* self, int dx, int dy) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
}

bool QListWidget_override_virtual_dataChanged(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dataChanged = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_dataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles) {
	QVector<int> roles_QList;
	roles_QList.reserve(roles.len);
	int* roles_arr = static_cast<int*>(roles.data);
	for(size_t i = 0; i < roles.len; ++i) {
		roles_QList.push_back(static_cast<int>(roles_arr[i]));
	}
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::dataChanged(*topLeft, *bottomRight, roles_QList);
}

bool QListWidget_override_virtual_rowsInserted(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__rowsInserted = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_rowsInserted(void* self, QModelIndex* parent, int start, int end) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
}

bool QListWidget_override_virtual_rowsAboutToBeRemoved(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__rowsAboutToBeRemoved = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_rowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
}

bool QListWidget_override_virtual_mouseMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseMoveEvent = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_mouseMoveEvent(void* self, QMouseEvent* e) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::mouseMoveEvent(e);
}

bool QListWidget_override_virtual_mouseReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseReleaseEvent = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* e) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::mouseReleaseEvent(e);
}

bool QListWidget_override_virtual_wheelEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wheelEvent = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_wheelEvent(void* self, QWheelEvent* e) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::wheelEvent(e);
}

bool QListWidget_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_timerEvent(void* self, QTimerEvent* e) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::timerEvent(e);
}

bool QListWidget_override_virtual_resizeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__resizeEvent = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_resizeEvent(void* self, QResizeEvent* e) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::resizeEvent(e);
}

bool QListWidget_override_virtual_dragMoveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragMoveEvent = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* e) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::dragMoveEvent(e);
}

bool QListWidget_override_virtual_dragLeaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragLeaveEvent = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* e) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::dragLeaveEvent(e);
}

bool QListWidget_override_virtual_startDrag(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__startDrag = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_startDrag(void* self, int supportedActions) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::startDrag(static_cast<Qt::DropActions>(supportedActions));
}

bool QListWidget_override_virtual_viewOptions(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__viewOptions = std::move(slot_handle);
	self_cast->owns_return__viewOptions = false;
	return true;
}

bool QListWidget_override_virtual_owned_viewOptions(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__viewOptions = std::move(slot_handle);
	self_cast->owns_return__viewOptions = true;
	return true;
}

QStyleOptionViewItem* QListWidget_virtualbase_viewOptions(const void* self) {
	return new QStyleOptionViewItem(static_cast<const MiqtVirtualQListWidget*>(self)->QListWidget::viewOptions());
}

bool QListWidget_override_virtual_paintEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEvent = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_paintEvent(void* self, QPaintEvent* e) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::paintEvent(e);
}

bool QListWidget_override_virtual_horizontalOffset(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__horizontalOffset = std::move(slot_handle);
	return true;
}

int QListWidget_virtualbase_horizontalOffset(const void* self) {
	return static_cast<const MiqtVirtualQListWidget*>(self)->QListWidget::horizontalOffset();
}

bool QListWidget_override_virtual_verticalOffset(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__verticalOffset = std::move(slot_handle);
	return true;
}

int QListWidget_virtualbase_verticalOffset(const void* self) {
	return static_cast<const MiqtVirtualQListWidget*>(self)->QListWidget::verticalOffset();
}

bool QListWidget_override_virtual_moveCursor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveCursor = std::move(slot_handle);
	self_cast->owns_return__moveCursor = false;
	return true;
}

bool QListWidget_override_virtual_owned_moveCursor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveCursor = std::move(slot_handle);
	self_cast->owns_return__moveCursor = true;
	return true;
}

QModelIndex* QListWidget_virtualbase_moveCursor(void* self, int cursorAction, int modifiers) {
	return new QModelIndex(static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::moveCursor(static_cast<MiqtVirtualQListWidget::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
}

bool QListWidget_override_virtual_setSelection(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setSelection = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_setSelection(void* self, QRect* rect, int command) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
}

bool QListWidget_override_virtual_visualRegionForSelection(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__visualRegionForSelection = std::move(slot_handle);
	self_cast->owns_return__visualRegionForSelection = false;
	return true;
}

bool QListWidget_override_virtual_owned_visualRegionForSelection(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__visualRegionForSelection = std::move(slot_handle);
	self_cast->owns_return__visualRegionForSelection = true;
	return true;
}

QRegion* QListWidget_virtualbase_visualRegionForSelection(const void* self, QItemSelection* selection) {
	return new QRegion(static_cast<const MiqtVirtualQListWidget*>(self)->QListWidget::visualRegionForSelection(*selection));
}

bool QListWidget_override_virtual_selectedIndexes(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__selectedIndexes = std::move(slot_handle);
	return true;
}

struct miqt_array /* of QModelIndex* */  QListWidget_virtualbase_selectedIndexes(const void* self) {
	QModelIndexList _ret = static_cast<const MiqtVirtualQListWidget*>(self)->QListWidget::selectedIndexes();
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

bool QListWidget_override_virtual_updateGeometries(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateGeometries = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_updateGeometries(void* self) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::updateGeometries();
}

bool QListWidget_override_virtual_isIndexHidden(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isIndexHidden = std::move(slot_handle);
	return true;
}

bool QListWidget_virtualbase_isIndexHidden(const void* self, QModelIndex* index) {
	return static_cast<const MiqtVirtualQListWidget*>(self)->QListWidget::isIndexHidden(*index);
}

bool QListWidget_override_virtual_selectionChanged(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__selectionChanged = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_selectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::selectionChanged(*selected, *deselected);
}

bool QListWidget_override_virtual_currentChanged(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__currentChanged = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_currentChanged(void* self, QModelIndex* current, QModelIndex* previous) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::currentChanged(*current, *previous);
}

bool QListWidget_override_virtual_viewportSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__viewportSizeHint = std::move(slot_handle);
	self_cast->owns_return__viewportSizeHint = false;
	return true;
}

bool QListWidget_override_virtual_owned_viewportSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__viewportSizeHint = std::move(slot_handle);
	self_cast->owns_return__viewportSizeHint = true;
	return true;
}

QSize* QListWidget_virtualbase_viewportSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQListWidget*>(self)->QListWidget::viewportSizeHint());
}

bool QListWidget_override_virtual_keyboardSearch(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyboardSearch = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_keyboardSearch(void* self, struct miqt_string search) {
	QString search_QString = QString::fromUtf8(search.data, search.len);
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::keyboardSearch(search_QString);
}

bool QListWidget_override_virtual_sizeHintForRow(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHintForRow = std::move(slot_handle);
	return true;
}

int QListWidget_virtualbase_sizeHintForRow(const void* self, int row) {
	return static_cast<const MiqtVirtualQListWidget*>(self)->QListWidget::sizeHintForRow(static_cast<int>(row));
}

bool QListWidget_override_virtual_sizeHintForColumn(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHintForColumn = std::move(slot_handle);
	return true;
}

int QListWidget_virtualbase_sizeHintForColumn(const void* self, int column) {
	return static_cast<const MiqtVirtualQListWidget*>(self)->QListWidget::sizeHintForColumn(static_cast<int>(column));
}

bool QListWidget_override_virtual_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	self_cast->owns_return__inputMethodQuery = false;
	return true;
}

bool QListWidget_override_virtual_owned_inputMethodQuery(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodQuery = std::move(slot_handle);
	self_cast->owns_return__inputMethodQuery = true;
	return true;
}

QVariant* QListWidget_virtualbase_inputMethodQuery(const void* self, int query) {
	return new QVariant(static_cast<const MiqtVirtualQListWidget*>(self)->QListWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

bool QListWidget_override_virtual_selectAll(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__selectAll = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_selectAll(void* self) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::selectAll();
}

bool QListWidget_override_virtual_updateEditorData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateEditorData = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_updateEditorData(void* self) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::updateEditorData();
}

bool QListWidget_override_virtual_updateEditorGeometries(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__updateEditorGeometries = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_updateEditorGeometries(void* self) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::updateEditorGeometries();
}

bool QListWidget_override_virtual_verticalScrollbarAction(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__verticalScrollbarAction = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_verticalScrollbarAction(void* self, int action) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::verticalScrollbarAction(static_cast<int>(action));
}

bool QListWidget_override_virtual_horizontalScrollbarAction(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__horizontalScrollbarAction = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_horizontalScrollbarAction(void* self, int action) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::horizontalScrollbarAction(static_cast<int>(action));
}

bool QListWidget_override_virtual_verticalScrollbarValueChanged(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__verticalScrollbarValueChanged = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_verticalScrollbarValueChanged(void* self, int value) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::verticalScrollbarValueChanged(static_cast<int>(value));
}

bool QListWidget_override_virtual_horizontalScrollbarValueChanged(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__horizontalScrollbarValueChanged = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_horizontalScrollbarValueChanged(void* self, int value) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::horizontalScrollbarValueChanged(static_cast<int>(value));
}

bool QListWidget_override_virtual_closeEditor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEditor = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_closeEditor(void* self, QWidget* editor, int hint) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
}

bool QListWidget_override_virtual_commitData(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__commitData = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_commitData(void* self, QWidget* editor) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::commitData(editor);
}

bool QListWidget_override_virtual_editorDestroyed(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__editorDestroyed = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_editorDestroyed(void* self, QObject* editor) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::editorDestroyed(editor);
}

bool QListWidget_override_virtual_edit2(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__edit2 = std::move(slot_handle);
	return true;
}

bool QListWidget_virtualbase_edit2(void* self, QModelIndex* index, int trigger, QEvent* event) {
	return static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::edit(*index, static_cast<MiqtVirtualQListWidget::EditTrigger>(trigger), event);
}

bool QListWidget_override_virtual_selectionCommand(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__selectionCommand = std::move(slot_handle);
	return true;
}

int QListWidget_virtualbase_selectionCommand(const void* self, QModelIndex* index, QEvent* event) {
	QItemSelectionModel::SelectionFlags _ret = static_cast<const MiqtVirtualQListWidget*>(self)->QListWidget::selectionCommand(*index, event);
	return static_cast<int>(_ret);
}

bool QListWidget_override_virtual_focusNextPrevChild(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusNextPrevChild = std::move(slot_handle);
	return true;
}

bool QListWidget_virtualbase_focusNextPrevChild(void* self, bool next) {
	return static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::focusNextPrevChild(next);
}

bool QListWidget_override_virtual_viewportEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__viewportEvent = std::move(slot_handle);
	return true;
}

bool QListWidget_virtualbase_viewportEvent(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::viewportEvent(event);
}

bool QListWidget_override_virtual_mousePressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mousePressEvent = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_mousePressEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::mousePressEvent(event);
}

bool QListWidget_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__mouseDoubleClickEvent = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* event) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::mouseDoubleClickEvent(event);
}

bool QListWidget_override_virtual_dragEnterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__dragEnterEvent = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* event) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::dragEnterEvent(event);
}

bool QListWidget_override_virtual_focusInEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusInEvent = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_focusInEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::focusInEvent(event);
}

bool QListWidget_override_virtual_focusOutEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__focusOutEvent = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_focusOutEvent(void* self, QFocusEvent* event) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::focusOutEvent(event);
}

bool QListWidget_override_virtual_keyPressEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyPressEvent = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_keyPressEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::keyPressEvent(event);
}

bool QListWidget_override_virtual_inputMethodEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__inputMethodEvent = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::inputMethodEvent(event);
}

bool QListWidget_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QListWidget_virtualbase_eventFilter(void* self, QObject* object, QEvent* event) {
	return static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::eventFilter(object, event);
}

bool QListWidget_override_virtual_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	self_cast->owns_return__minimumSizeHint = false;
	return true;
}

bool QListWidget_override_virtual_owned_minimumSizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSizeHint = std::move(slot_handle);
	self_cast->owns_return__minimumSizeHint = true;
	return true;
}

QSize* QListWidget_virtualbase_minimumSizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQListWidget*>(self)->QListWidget::minimumSizeHint());
}

bool QListWidget_override_virtual_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = false;
	return true;
}

bool QListWidget_override_virtual_owned_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = true;
	return true;
}

QSize* QListWidget_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQListWidget*>(self)->QListWidget::sizeHint());
}

bool QListWidget_override_virtual_setupViewport(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setupViewport = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_setupViewport(void* self, QWidget* viewport) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::setupViewport(viewport);
}

bool QListWidget_override_virtual_contextMenuEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__contextMenuEvent = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* param1) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::contextMenuEvent(param1);
}

bool QListWidget_override_virtual_changeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__changeEvent = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_changeEvent(void* self, QEvent* param1) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::changeEvent(param1);
}

bool QListWidget_override_virtual_devType(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__devType = std::move(slot_handle);
	return true;
}

int QListWidget_virtualbase_devType(const void* self) {
	return static_cast<const MiqtVirtualQListWidget*>(self)->QListWidget::devType();
}

bool QListWidget_override_virtual_setVisible(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setVisible = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_setVisible(void* self, bool visible) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::setVisible(visible);
}

bool QListWidget_override_virtual_heightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = std::move(slot_handle);
	return true;
}

int QListWidget_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQListWidget*>(self)->QListWidget::heightForWidth(static_cast<int>(param1));
}

bool QListWidget_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = std::move(slot_handle);
	return true;
}

bool QListWidget_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQListWidget*>(self)->QListWidget::hasHeightForWidth();
}

bool QListWidget_override_virtual_paintEngine(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paintEngine = std::move(slot_handle);
	return true;
}

QPaintEngine* QListWidget_virtualbase_paintEngine(const void* self) {
	return static_cast<const MiqtVirtualQListWidget*>(self)->QListWidget::paintEngine();
}

bool QListWidget_override_virtual_keyReleaseEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keyReleaseEvent = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::keyReleaseEvent(event);
}

bool QListWidget_override_virtual_enterEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__enterEvent = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_enterEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::enterEvent(event);
}

bool QListWidget_override_virtual_leaveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__leaveEvent = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_leaveEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::leaveEvent(event);
}

bool QListWidget_override_virtual_moveEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__moveEvent = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_moveEvent(void* self, QMoveEvent* event) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::moveEvent(event);
}

bool QListWidget_override_virtual_closeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__closeEvent = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_closeEvent(void* self, QCloseEvent* event) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::closeEvent(event);
}

bool QListWidget_override_virtual_tabletEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__tabletEvent = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_tabletEvent(void* self, QTabletEvent* event) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::tabletEvent(event);
}

bool QListWidget_override_virtual_actionEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__actionEvent = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_actionEvent(void* self, QActionEvent* event) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::actionEvent(event);
}

bool QListWidget_override_virtual_showEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__showEvent = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_showEvent(void* self, QShowEvent* event) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::showEvent(event);
}

bool QListWidget_override_virtual_hideEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hideEvent = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_hideEvent(void* self, QHideEvent* event) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::hideEvent(event);
}

bool QListWidget_override_virtual_nativeEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__nativeEvent = std::move(slot_handle);
	return true;
}

bool QListWidget_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result) {
	QByteArray eventType_QByteArray(eventType.data, eventType.len);
	return static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::nativeEvent(eventType_QByteArray, message, static_cast<long*>(result));
}

bool QListWidget_override_virtual_metric(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__metric = std::move(slot_handle);
	return true;
}

int QListWidget_virtualbase_metric(const void* self, int param1) {
	return static_cast<const MiqtVirtualQListWidget*>(self)->QListWidget::metric(static_cast<MiqtVirtualQListWidget::PaintDeviceMetric>(param1));
}

bool QListWidget_override_virtual_initPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__initPainter = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_initPainter(const void* self, QPainter* painter) {
	static_cast<const MiqtVirtualQListWidget*>(self)->QListWidget::initPainter(painter);
}

bool QListWidget_override_virtual_redirected(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__redirected = std::move(slot_handle);
	return true;
}

QPaintDevice* QListWidget_virtualbase_redirected(const void* self, QPoint* offset) {
	return static_cast<const MiqtVirtualQListWidget*>(self)->QListWidget::redirected(offset);
}

bool QListWidget_override_virtual_sharedPainter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sharedPainter = std::move(slot_handle);
	return true;
}

QPainter* QListWidget_virtualbase_sharedPainter(const void* self) {
	return static_cast<const MiqtVirtualQListWidget*>(self)->QListWidget::sharedPainter();
}

bool QListWidget_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::childEvent(event);
}

bool QListWidget_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::customEvent(event);
}

bool QListWidget_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::connectNotify(*signal);
}

bool QListWidget_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QListWidget> slot_handle(slot);
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QListWidget_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQListWidget*>(self)->QListWidget::disconnectNotify(*signal);
}

struct miqt_array /* of QListWidgetItem* */  QListWidget_protectedbase_items(bool* _dynamic_cast_ok, const void* self, QMimeData* data) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (struct miqt_array){};
	}

	*_dynamic_cast_ok = true;
	QList<QListWidgetItem *> _ret = self_cast->items(data);
	// Convert QList<> from C++ memory to manually-managed C memory
	QListWidgetItem** _arr = static_cast<QListWidgetItem**>(malloc(sizeof(QListWidgetItem*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QModelIndex* QListWidget_protectedbase_indexFromItem(bool* _dynamic_cast_ok, const void* self, QListWidgetItem* item) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QModelIndex(self_cast->indexFromItem(item));
}

QModelIndex* QListWidget_protectedbase_indexFromItemWithItem(bool* _dynamic_cast_ok, const void* self, QListWidgetItem* item) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QModelIndex(self_cast->indexFromItem(item));
}

QListWidgetItem* QListWidget_protectedbase_itemFromIndex(bool* _dynamic_cast_ok, const void* self, QModelIndex* index) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->itemFromIndex(*index);
}

void QListWidget_protectedbase_resizeContents(bool* _dynamic_cast_ok, void* self, int width, int height) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->resizeContents(static_cast<int>(width), static_cast<int>(height));
}

QSize* QListWidget_protectedbase_contentsSize(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QSize(self_cast->contentsSize());
}

QRect* QListWidget_protectedbase_rectForIndex(bool* _dynamic_cast_ok, const void* self, QModelIndex* index) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QRect(self_cast->rectForIndex(*index));
}

void QListWidget_protectedbase_setPositionForIndex(bool* _dynamic_cast_ok, void* self, QPoint* position, QModelIndex* index) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setPositionForIndex(*position, *index);
}

void QListWidget_protectedbase_setHorizontalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setHorizontalStepsPerItem(static_cast<int>(steps));
}

int QListWidget_protectedbase_horizontalStepsPerItem(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->horizontalStepsPerItem();
}

void QListWidget_protectedbase_setVerticalStepsPerItem(bool* _dynamic_cast_ok, void* self, int steps) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setVerticalStepsPerItem(static_cast<int>(steps));
}

int QListWidget_protectedbase_verticalStepsPerItem(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->verticalStepsPerItem();
}

int QListWidget_protectedbase_state(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}

	*_dynamic_cast_ok = true;
	MiqtVirtualQListWidget::State _ret = self_cast->state();
	return static_cast<int>(_ret);
}

void QListWidget_protectedbase_setState(bool* _dynamic_cast_ok, void* self, int state) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setState(static_cast<MiqtVirtualQListWidget::State>(state));
}

void QListWidget_protectedbase_scheduleDelayedItemsLayout(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->scheduleDelayedItemsLayout();
}

void QListWidget_protectedbase_executeDelayedItemsLayout(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->executeDelayedItemsLayout();
}

void QListWidget_protectedbase_setDirtyRegion(bool* _dynamic_cast_ok, void* self, QRegion* region) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setDirtyRegion(*region);
}

void QListWidget_protectedbase_scrollDirtyRegion(bool* _dynamic_cast_ok, void* self, int dx, int dy) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
}

QPoint* QListWidget_protectedbase_dirtyRegionOffset(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QPoint(self_cast->dirtyRegionOffset());
}

void QListWidget_protectedbase_startAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->startAutoScroll();
}

void QListWidget_protectedbase_stopAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->stopAutoScroll();
}

void QListWidget_protectedbase_doAutoScroll(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->doAutoScroll();
}

int QListWidget_protectedbase_dropIndicatorPosition(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return (int)(0);
	}

	*_dynamic_cast_ok = true;
	MiqtVirtualQListWidget::DropIndicatorPosition _ret = self_cast->dropIndicatorPosition();
	return static_cast<int>(_ret);
}

void QListWidget_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
}

QMargins* QListWidget_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QMargins(self_cast->viewportMargins());
}

void QListWidget_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->drawFrame(param1);
}

void QListWidget_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->initStyleOption(option);
}

void QListWidget_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->updateMicroFocus();
}

void QListWidget_protectedbase_create(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->create();
}

void QListWidget_protectedbase_destroy(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->destroy();
}

bool QListWidget_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusNextChild();
}

bool QListWidget_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->focusPreviousChild();
}

QObject* QListWidget_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QListWidget_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QListWidget_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QListWidget_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQListWidget* self_cast = dynamic_cast<MiqtVirtualQListWidget*>( (QListWidget*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QListWidget_delete(QListWidget* self) {
	delete self;
}

