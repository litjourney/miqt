#include <memory>
#include <utility>
#include <QChildEvent>
#include <QEvent>
#include <QFormLayout>
#define WORKAROUND_INNER_CLASS_DEFINITION_QFormLayout__TakeRowResult
#include <QLayout>
#include <QLayoutItem>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QRect>
#include <QSize>
#include <QSpacerItem>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWidget>
#include <qformlayout.h>
#include "gen_qformlayout.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QFormLayout(intptr_t);
void miqt_exec_callback_QFormLayout_addItem(QFormLayout*, intptr_t, QLayoutItem*);
QLayoutItem* miqt_exec_callback_QFormLayout_itemAtWithIndex(const QFormLayout*, intptr_t, int);
QLayoutItem* miqt_exec_callback_QFormLayout_takeAt(QFormLayout*, intptr_t, int);
void miqt_exec_callback_QFormLayout_setGeometry(QFormLayout*, intptr_t, QRect*);
QSize* miqt_exec_callback_QFormLayout_minimumSize(const QFormLayout*, intptr_t);
QSize* miqt_exec_callback_QFormLayout_sizeHint(const QFormLayout*, intptr_t);
void miqt_exec_callback_QFormLayout_invalidate(QFormLayout*, intptr_t);
bool miqt_exec_callback_QFormLayout_hasHeightForWidth(const QFormLayout*, intptr_t);
int miqt_exec_callback_QFormLayout_heightForWidth(const QFormLayout*, intptr_t, int);
int miqt_exec_callback_QFormLayout_expandingDirections(const QFormLayout*, intptr_t);
int miqt_exec_callback_QFormLayout_count(const QFormLayout*, intptr_t);
QRect* miqt_exec_callback_QFormLayout_geometry(const QFormLayout*, intptr_t);
QSize* miqt_exec_callback_QFormLayout_maximumSize(const QFormLayout*, intptr_t);
int miqt_exec_callback_QFormLayout_indexOf(const QFormLayout*, intptr_t, QWidget*);
bool miqt_exec_callback_QFormLayout_isEmpty(const QFormLayout*, intptr_t);
int miqt_exec_callback_QFormLayout_controlTypes(const QFormLayout*, intptr_t);
QLayout* miqt_exec_callback_QFormLayout_layout(QFormLayout*, intptr_t);
void miqt_exec_callback_QFormLayout_childEvent(QFormLayout*, intptr_t, QChildEvent*);
bool miqt_exec_callback_QFormLayout_event(QFormLayout*, intptr_t, QEvent*);
bool miqt_exec_callback_QFormLayout_eventFilter(QFormLayout*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QFormLayout_timerEvent(QFormLayout*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QFormLayout_customEvent(QFormLayout*, intptr_t, QEvent*);
void miqt_exec_callback_QFormLayout_connectNotify(QFormLayout*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QFormLayout_disconnectNotify(QFormLayout*, intptr_t, QMetaMethod*);
int miqt_exec_callback_QFormLayout_minimumHeightForWidth(const QFormLayout*, intptr_t, int);
QWidget* miqt_exec_callback_QFormLayout_widget(QFormLayout*, intptr_t);
QSpacerItem* miqt_exec_callback_QFormLayout_spacerItem(QFormLayout*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQFormLayout final : public QFormLayout {
public:

	MiqtVirtualQFormLayout(QWidget* parent): QFormLayout(parent) {}
	MiqtVirtualQFormLayout(): QFormLayout() {}

	virtual ~MiqtVirtualQFormLayout() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> handle__addItem;

	// Subclass to allow providing a Go implementation
	virtual void addItem(QLayoutItem* item) override {
		if (!handle__addItem) {
			QFormLayout::addItem(item);
			return;
		}

		QLayoutItem* sigval1 = item;
		miqt_exec_callback_QFormLayout_addItem(this, handle__addItem.value(), sigval1);

	}

	friend void QFormLayout_virtualbase_addItem(void* self, QLayoutItem* item);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> handle__itemAtWithIndex;

	// Subclass to allow providing a Go implementation
	virtual QLayoutItem* itemAt(int index) const override {
		if (!handle__itemAtWithIndex) {
			return QFormLayout::itemAt(index);
		}

		int sigval1 = index;
		QLayoutItem* callback_return_value = miqt_exec_callback_QFormLayout_itemAtWithIndex(this, handle__itemAtWithIndex.value(), sigval1);
		return callback_return_value;
	}

	friend QLayoutItem* QFormLayout_virtualbase_itemAtWithIndex(const void* self, int index);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> handle__takeAt;

	// Subclass to allow providing a Go implementation
	virtual QLayoutItem* takeAt(int index) override {
		if (!handle__takeAt) {
			return QFormLayout::takeAt(index);
		}

		int sigval1 = index;
		QLayoutItem* callback_return_value = miqt_exec_callback_QFormLayout_takeAt(this, handle__takeAt.value(), sigval1);
		return callback_return_value;
	}

	friend QLayoutItem* QFormLayout_virtualbase_takeAt(void* self, int index);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> handle__setGeometry;

	// Subclass to allow providing a Go implementation
	virtual void setGeometry(const QRect& rect) override {
		if (!handle__setGeometry) {
			QFormLayout::setGeometry(rect);
			return;
		}

		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);
		miqt_exec_callback_QFormLayout_setGeometry(this, handle__setGeometry.value(), sigval1);

	}

	friend void QFormLayout_virtualbase_setGeometry(void* self, QRect* rect);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> handle__minimumSize;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSize() const override {
		if (!handle__minimumSize) {
			return QFormLayout::minimumSize();
		}

		QSize* callback_return_value = miqt_exec_callback_QFormLayout_minimumSize(this, handle__minimumSize.value());
		return *callback_return_value;
	}

	friend QSize* QFormLayout_virtualbase_minimumSize(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> handle__sizeHint;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (!handle__sizeHint) {
			return QFormLayout::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QFormLayout_sizeHint(this, handle__sizeHint.value());
		return *callback_return_value;
	}

	friend QSize* QFormLayout_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> handle__invalidate;

	// Subclass to allow providing a Go implementation
	virtual void invalidate() override {
		if (!handle__invalidate) {
			QFormLayout::invalidate();
			return;
		}

		miqt_exec_callback_QFormLayout_invalidate(this, handle__invalidate.value());

	}

	friend void QFormLayout_virtualbase_invalidate(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> handle__hasHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (!handle__hasHeightForWidth) {
			return QFormLayout::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QFormLayout_hasHeightForWidth(this, handle__hasHeightForWidth.value());
		return callback_return_value;
	}

	friend bool QFormLayout_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> handle__heightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int width) const override {
		if (!handle__heightForWidth) {
			return QFormLayout::heightForWidth(width);
		}

		int sigval1 = width;
		int callback_return_value = miqt_exec_callback_QFormLayout_heightForWidth(this, handle__heightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QFormLayout_virtualbase_heightForWidth(const void* self, int width);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> handle__expandingDirections;

	// Subclass to allow providing a Go implementation
	virtual Qt::Orientations expandingDirections() const override {
		if (!handle__expandingDirections) {
			return QFormLayout::expandingDirections();
		}

		int callback_return_value = miqt_exec_callback_QFormLayout_expandingDirections(this, handle__expandingDirections.value());
		return static_cast<Qt::Orientations>(callback_return_value);
	}

	friend int QFormLayout_virtualbase_expandingDirections(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> handle__count;

	// Subclass to allow providing a Go implementation
	virtual int count() const override {
		if (!handle__count) {
			return QFormLayout::count();
		}

		int callback_return_value = miqt_exec_callback_QFormLayout_count(this, handle__count.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QFormLayout_virtualbase_count(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> handle__geometry;

	// Subclass to allow providing a Go implementation
	virtual QRect geometry() const override {
		if (!handle__geometry) {
			return QFormLayout::geometry();
		}

		QRect* callback_return_value = miqt_exec_callback_QFormLayout_geometry(this, handle__geometry.value());
		return *callback_return_value;
	}

	friend QRect* QFormLayout_virtualbase_geometry(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> handle__maximumSize;

	// Subclass to allow providing a Go implementation
	virtual QSize maximumSize() const override {
		if (!handle__maximumSize) {
			return QFormLayout::maximumSize();
		}

		QSize* callback_return_value = miqt_exec_callback_QFormLayout_maximumSize(this, handle__maximumSize.value());
		return *callback_return_value;
	}

	friend QSize* QFormLayout_virtualbase_maximumSize(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> handle__indexOf;

	// Subclass to allow providing a Go implementation
	virtual int indexOf(QWidget* param1) const override {
		if (!handle__indexOf) {
			return QFormLayout::indexOf(param1);
		}

		QWidget* sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QFormLayout_indexOf(this, handle__indexOf.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QFormLayout_virtualbase_indexOf(const void* self, QWidget* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> handle__isEmpty;

	// Subclass to allow providing a Go implementation
	virtual bool isEmpty() const override {
		if (!handle__isEmpty) {
			return QFormLayout::isEmpty();
		}

		bool callback_return_value = miqt_exec_callback_QFormLayout_isEmpty(this, handle__isEmpty.value());
		return callback_return_value;
	}

	friend bool QFormLayout_virtualbase_isEmpty(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> handle__controlTypes;

	// Subclass to allow providing a Go implementation
	virtual QSizePolicy::ControlTypes controlTypes() const override {
		if (!handle__controlTypes) {
			return QFormLayout::controlTypes();
		}

		int callback_return_value = miqt_exec_callback_QFormLayout_controlTypes(this, handle__controlTypes.value());
		return static_cast<QSizePolicy::ControlTypes>(callback_return_value);
	}

	friend int QFormLayout_virtualbase_controlTypes(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> handle__layout;

	// Subclass to allow providing a Go implementation
	virtual QLayout* layout() override {
		if (!handle__layout) {
			return QFormLayout::layout();
		}

		QLayout* callback_return_value = miqt_exec_callback_QFormLayout_layout(this, handle__layout.value());
		return callback_return_value;
	}

	friend QLayout* QFormLayout_virtualbase_layout(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* e) override {
		if (!handle__childEvent) {
			QFormLayout::childEvent(e);
			return;
		}

		QChildEvent* sigval1 = e;
		miqt_exec_callback_QFormLayout_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QFormLayout_virtualbase_childEvent(void* self, QChildEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QFormLayout::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QFormLayout_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QFormLayout_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QFormLayout::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QFormLayout_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QFormLayout_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QFormLayout::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QFormLayout_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QFormLayout_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QFormLayout::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QFormLayout_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QFormLayout_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QFormLayout::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QFormLayout_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QFormLayout_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QFormLayout::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QFormLayout_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QFormLayout_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> handle__minimumHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int minimumHeightForWidth(int param1) const override {
		if (!handle__minimumHeightForWidth) {
			return QFormLayout::minimumHeightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QFormLayout_minimumHeightForWidth(this, handle__minimumHeightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QFormLayout_virtualbase_minimumHeightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> handle__widget;

	// Subclass to allow providing a Go implementation
	virtual QWidget* widget() override {
		if (!handle__widget) {
			return QFormLayout::widget();
		}

		QWidget* callback_return_value = miqt_exec_callback_QFormLayout_widget(this, handle__widget.value());
		return callback_return_value;
	}

	friend QWidget* QFormLayout_virtualbase_widget(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> handle__spacerItem;

	// Subclass to allow providing a Go implementation
	virtual QSpacerItem* spacerItem() override {
		if (!handle__spacerItem) {
			return QFormLayout::spacerItem();
		}

		QSpacerItem* callback_return_value = miqt_exec_callback_QFormLayout_spacerItem(this, handle__spacerItem.value());
		return callback_return_value;
	}

	friend QSpacerItem* QFormLayout_virtualbase_spacerItem(void* self);

	// Wrappers to allow calling protected methods:
	friend void QFormLayout_protectedbase_widgetEvent(bool* _dynamic_cast_ok, void* self, QEvent* param1);
	friend void QFormLayout_protectedbase_addChildLayout(bool* _dynamic_cast_ok, void* self, QLayout* l);
	friend void QFormLayout_protectedbase_addChildWidget(bool* _dynamic_cast_ok, void* self, QWidget* w);
	friend bool QFormLayout_protectedbase_adoptLayout(bool* _dynamic_cast_ok, void* self, QLayout* layout);
	friend QRect* QFormLayout_protectedbase_alignmentRect(bool* _dynamic_cast_ok, const void* self, QRect* param1);
	friend QObject* QFormLayout_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QFormLayout_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QFormLayout_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QFormLayout_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QFormLayout* QFormLayout_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQFormLayout(parent);
}

QFormLayout* QFormLayout_new2() {
	return new (std::nothrow) MiqtVirtualQFormLayout();
}

void QFormLayout_virtbase(QFormLayout* src, QLayout** outptr_QLayout) {
	*outptr_QLayout = static_cast<QLayout*>(src);
}

QMetaObject* QFormLayout_metaObject(const QFormLayout* self) {
	return (QMetaObject*) self->metaObject();
}

void* QFormLayout_metacast(QFormLayout* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QFormLayout_tr(const char* s) {
	QString _ret = QFormLayout::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFormLayout_trUtf8(const char* s) {
	QString _ret = QFormLayout::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QFormLayout_setFieldGrowthPolicy(QFormLayout* self, int policy) {
	self->setFieldGrowthPolicy(static_cast<QFormLayout::FieldGrowthPolicy>(policy));
}

int QFormLayout_fieldGrowthPolicy(const QFormLayout* self) {
	QFormLayout::FieldGrowthPolicy _ret = self->fieldGrowthPolicy();
	return static_cast<int>(_ret);
}

void QFormLayout_setRowWrapPolicy(QFormLayout* self, int policy) {
	self->setRowWrapPolicy(static_cast<QFormLayout::RowWrapPolicy>(policy));
}

int QFormLayout_rowWrapPolicy(const QFormLayout* self) {
	QFormLayout::RowWrapPolicy _ret = self->rowWrapPolicy();
	return static_cast<int>(_ret);
}

void QFormLayout_setLabelAlignment(QFormLayout* self, int alignment) {
	self->setLabelAlignment(static_cast<Qt::Alignment>(alignment));
}

int QFormLayout_labelAlignment(const QFormLayout* self) {
	Qt::Alignment _ret = self->labelAlignment();
	return static_cast<int>(_ret);
}

void QFormLayout_setFormAlignment(QFormLayout* self, int alignment) {
	self->setFormAlignment(static_cast<Qt::Alignment>(alignment));
}

int QFormLayout_formAlignment(const QFormLayout* self) {
	Qt::Alignment _ret = self->formAlignment();
	return static_cast<int>(_ret);
}

void QFormLayout_setHorizontalSpacing(QFormLayout* self, int spacing) {
	self->setHorizontalSpacing(static_cast<int>(spacing));
}

int QFormLayout_horizontalSpacing(const QFormLayout* self) {
	return self->horizontalSpacing();
}

void QFormLayout_setVerticalSpacing(QFormLayout* self, int spacing) {
	self->setVerticalSpacing(static_cast<int>(spacing));
}

int QFormLayout_verticalSpacing(const QFormLayout* self) {
	return self->verticalSpacing();
}

int QFormLayout_spacing(const QFormLayout* self) {
	return self->spacing();
}

void QFormLayout_setSpacing(QFormLayout* self, int spacing) {
	self->setSpacing(static_cast<int>(spacing));
}

void QFormLayout_addRow(QFormLayout* self, QWidget* label, QWidget* field) {
	self->addRow(label, field);
}

void QFormLayout_addRow2(QFormLayout* self, QWidget* label, QLayout* field) {
	self->addRow(label, field);
}

void QFormLayout_addRow3(QFormLayout* self, struct miqt_string labelText, QWidget* field) {
	QString labelText_QString = QString::fromUtf8(labelText.data, labelText.len);
	self->addRow(labelText_QString, field);
}

void QFormLayout_addRow4(QFormLayout* self, struct miqt_string labelText, QLayout* field) {
	QString labelText_QString = QString::fromUtf8(labelText.data, labelText.len);
	self->addRow(labelText_QString, field);
}

void QFormLayout_addRowWithWidget(QFormLayout* self, QWidget* widget) {
	self->addRow(widget);
}

void QFormLayout_addRowWithLayout(QFormLayout* self, QLayout* layout) {
	self->addRow(layout);
}

void QFormLayout_insertRow(QFormLayout* self, int row, QWidget* label, QWidget* field) {
	self->insertRow(static_cast<int>(row), label, field);
}

void QFormLayout_insertRow2(QFormLayout* self, int row, QWidget* label, QLayout* field) {
	self->insertRow(static_cast<int>(row), label, field);
}

void QFormLayout_insertRow3(QFormLayout* self, int row, struct miqt_string labelText, QWidget* field) {
	QString labelText_QString = QString::fromUtf8(labelText.data, labelText.len);
	self->insertRow(static_cast<int>(row), labelText_QString, field);
}

void QFormLayout_insertRow4(QFormLayout* self, int row, struct miqt_string labelText, QLayout* field) {
	QString labelText_QString = QString::fromUtf8(labelText.data, labelText.len);
	self->insertRow(static_cast<int>(row), labelText_QString, field);
}

void QFormLayout_insertRow5(QFormLayout* self, int row, QWidget* widget) {
	self->insertRow(static_cast<int>(row), widget);
}

void QFormLayout_insertRow6(QFormLayout* self, int row, QLayout* layout) {
	self->insertRow(static_cast<int>(row), layout);
}

void QFormLayout_removeRow(QFormLayout* self, int row) {
	self->removeRow(static_cast<int>(row));
}

void QFormLayout_removeRowWithWidget(QFormLayout* self, QWidget* widget) {
	self->removeRow(widget);
}

void QFormLayout_removeRowWithLayout(QFormLayout* self, QLayout* layout) {
	self->removeRow(layout);
}

QFormLayout__TakeRowResult* QFormLayout_takeRow(QFormLayout* self, int row) {
	return new QFormLayout::TakeRowResult(self->takeRow(static_cast<int>(row)));
}

QFormLayout__TakeRowResult* QFormLayout_takeRowWithWidget(QFormLayout* self, QWidget* widget) {
	return new QFormLayout::TakeRowResult(self->takeRow(widget));
}

QFormLayout__TakeRowResult* QFormLayout_takeRowWithLayout(QFormLayout* self, QLayout* layout) {
	return new QFormLayout::TakeRowResult(self->takeRow(layout));
}

void QFormLayout_setItem(QFormLayout* self, int row, int role, QLayoutItem* item) {
	self->setItem(static_cast<int>(row), static_cast<QFormLayout::ItemRole>(role), item);
}

void QFormLayout_setWidget(QFormLayout* self, int row, int role, QWidget* widget) {
	self->setWidget(static_cast<int>(row), static_cast<QFormLayout::ItemRole>(role), widget);
}

void QFormLayout_setLayout(QFormLayout* self, int row, int role, QLayout* layout) {
	self->setLayout(static_cast<int>(row), static_cast<QFormLayout::ItemRole>(role), layout);
}

QLayoutItem* QFormLayout_itemAt(const QFormLayout* self, int row, int role) {
	return self->itemAt(static_cast<int>(row), static_cast<QFormLayout::ItemRole>(role));
}

QWidget* QFormLayout_labelForField(const QFormLayout* self, QWidget* field) {
	return self->labelForField(field);
}

QWidget* QFormLayout_labelForFieldWithField(const QFormLayout* self, QLayout* field) {
	return self->labelForField(field);
}

void QFormLayout_addItem(QFormLayout* self, QLayoutItem* item) {
	self->addItem(item);
}

QLayoutItem* QFormLayout_itemAtWithIndex(const QFormLayout* self, int index) {
	return self->itemAt(static_cast<int>(index));
}

QLayoutItem* QFormLayout_takeAt(QFormLayout* self, int index) {
	return self->takeAt(static_cast<int>(index));
}

void QFormLayout_setGeometry(QFormLayout* self, QRect* rect) {
	self->setGeometry(*rect);
}

QSize* QFormLayout_minimumSize(const QFormLayout* self) {
	return new QSize(self->minimumSize());
}

QSize* QFormLayout_sizeHint(const QFormLayout* self) {
	return new QSize(self->sizeHint());
}

void QFormLayout_invalidate(QFormLayout* self) {
	self->invalidate();
}

bool QFormLayout_hasHeightForWidth(const QFormLayout* self) {
	return self->hasHeightForWidth();
}

int QFormLayout_heightForWidth(const QFormLayout* self, int width) {
	return self->heightForWidth(static_cast<int>(width));
}

int QFormLayout_expandingDirections(const QFormLayout* self) {
	Qt::Orientations _ret = self->expandingDirections();
	return static_cast<int>(_ret);
}

int QFormLayout_count(const QFormLayout* self) {
	return self->count();
}

int QFormLayout_rowCount(const QFormLayout* self) {
	return self->rowCount();
}

struct miqt_string QFormLayout_tr2(const char* s, const char* c) {
	QString _ret = QFormLayout::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFormLayout_tr3(const char* s, const char* c, int n) {
	QString _ret = QFormLayout::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFormLayout_trUtf82(const char* s, const char* c) {
	QString _ret = QFormLayout::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QFormLayout_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QFormLayout::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QFormLayout_override_virtual_addItem(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> slot_handle(slot);
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__addItem = std::move(slot_handle);
	return true;
}

void QFormLayout_virtualbase_addItem(void* self, QLayoutItem* item) {
	static_cast<MiqtVirtualQFormLayout*>(self)->QFormLayout::addItem(item);
}

bool QFormLayout_override_virtual_itemAtWithIndex(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> slot_handle(slot);
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__itemAtWithIndex = std::move(slot_handle);
	return true;
}

QLayoutItem* QFormLayout_virtualbase_itemAtWithIndex(const void* self, int index) {
	return static_cast<const MiqtVirtualQFormLayout*>(self)->QFormLayout::itemAt(static_cast<int>(index));
}

bool QFormLayout_override_virtual_takeAt(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> slot_handle(slot);
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__takeAt = std::move(slot_handle);
	return true;
}

QLayoutItem* QFormLayout_virtualbase_takeAt(void* self, int index) {
	return static_cast<MiqtVirtualQFormLayout*>(self)->QFormLayout::takeAt(static_cast<int>(index));
}

bool QFormLayout_override_virtual_setGeometry(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> slot_handle(slot);
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setGeometry = std::move(slot_handle);
	return true;
}

void QFormLayout_virtualbase_setGeometry(void* self, QRect* rect) {
	static_cast<MiqtVirtualQFormLayout*>(self)->QFormLayout::setGeometry(*rect);
}

bool QFormLayout_override_virtual_minimumSize(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> slot_handle(slot);
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSize = std::move(slot_handle);
	return true;
}

QSize* QFormLayout_virtualbase_minimumSize(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQFormLayout*>(self)->QFormLayout::minimumSize());
}

bool QFormLayout_override_virtual_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> slot_handle(slot);
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	return true;
}

QSize* QFormLayout_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQFormLayout*>(self)->QFormLayout::sizeHint());
}

bool QFormLayout_override_virtual_invalidate(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> slot_handle(slot);
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__invalidate = std::move(slot_handle);
	return true;
}

void QFormLayout_virtualbase_invalidate(void* self) {
	static_cast<MiqtVirtualQFormLayout*>(self)->QFormLayout::invalidate();
}

bool QFormLayout_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> slot_handle(slot);
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = std::move(slot_handle);
	return true;
}

bool QFormLayout_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQFormLayout*>(self)->QFormLayout::hasHeightForWidth();
}

bool QFormLayout_override_virtual_heightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> slot_handle(slot);
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = std::move(slot_handle);
	return true;
}

int QFormLayout_virtualbase_heightForWidth(const void* self, int width) {
	return static_cast<const MiqtVirtualQFormLayout*>(self)->QFormLayout::heightForWidth(static_cast<int>(width));
}

bool QFormLayout_override_virtual_expandingDirections(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> slot_handle(slot);
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__expandingDirections = std::move(slot_handle);
	return true;
}

int QFormLayout_virtualbase_expandingDirections(const void* self) {
	Qt::Orientations _ret = static_cast<const MiqtVirtualQFormLayout*>(self)->QFormLayout::expandingDirections();
	return static_cast<int>(_ret);
}

bool QFormLayout_override_virtual_count(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> slot_handle(slot);
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__count = std::move(slot_handle);
	return true;
}

int QFormLayout_virtualbase_count(const void* self) {
	return static_cast<const MiqtVirtualQFormLayout*>(self)->QFormLayout::count();
}

bool QFormLayout_override_virtual_geometry(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> slot_handle(slot);
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__geometry = std::move(slot_handle);
	return true;
}

QRect* QFormLayout_virtualbase_geometry(const void* self) {
	return new QRect(static_cast<const MiqtVirtualQFormLayout*>(self)->QFormLayout::geometry());
}

bool QFormLayout_override_virtual_maximumSize(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> slot_handle(slot);
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__maximumSize = std::move(slot_handle);
	return true;
}

QSize* QFormLayout_virtualbase_maximumSize(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQFormLayout*>(self)->QFormLayout::maximumSize());
}

bool QFormLayout_override_virtual_indexOf(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> slot_handle(slot);
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__indexOf = std::move(slot_handle);
	return true;
}

int QFormLayout_virtualbase_indexOf(const void* self, QWidget* param1) {
	return static_cast<const MiqtVirtualQFormLayout*>(self)->QFormLayout::indexOf(param1);
}

bool QFormLayout_override_virtual_isEmpty(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> slot_handle(slot);
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isEmpty = std::move(slot_handle);
	return true;
}

bool QFormLayout_virtualbase_isEmpty(const void* self) {
	return static_cast<const MiqtVirtualQFormLayout*>(self)->QFormLayout::isEmpty();
}

bool QFormLayout_override_virtual_controlTypes(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> slot_handle(slot);
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__controlTypes = std::move(slot_handle);
	return true;
}

int QFormLayout_virtualbase_controlTypes(const void* self) {
	QSizePolicy::ControlTypes _ret = static_cast<const MiqtVirtualQFormLayout*>(self)->QFormLayout::controlTypes();
	return static_cast<int>(_ret);
}

bool QFormLayout_override_virtual_layout(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> slot_handle(slot);
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__layout = std::move(slot_handle);
	return true;
}

QLayout* QFormLayout_virtualbase_layout(void* self) {
	return static_cast<MiqtVirtualQFormLayout*>(self)->QFormLayout::layout();
}

bool QFormLayout_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> slot_handle(slot);
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QFormLayout_virtualbase_childEvent(void* self, QChildEvent* e) {
	static_cast<MiqtVirtualQFormLayout*>(self)->QFormLayout::childEvent(e);
}

bool QFormLayout_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> slot_handle(slot);
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QFormLayout_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQFormLayout*>(self)->QFormLayout::event(event);
}

bool QFormLayout_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> slot_handle(slot);
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QFormLayout_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQFormLayout*>(self)->QFormLayout::eventFilter(watched, event);
}

bool QFormLayout_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> slot_handle(slot);
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QFormLayout_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQFormLayout*>(self)->QFormLayout::timerEvent(event);
}

bool QFormLayout_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> slot_handle(slot);
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QFormLayout_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQFormLayout*>(self)->QFormLayout::customEvent(event);
}

bool QFormLayout_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> slot_handle(slot);
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QFormLayout_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQFormLayout*>(self)->QFormLayout::connectNotify(*signal);
}

bool QFormLayout_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> slot_handle(slot);
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QFormLayout_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQFormLayout*>(self)->QFormLayout::disconnectNotify(*signal);
}

bool QFormLayout_override_virtual_minimumHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> slot_handle(slot);
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumHeightForWidth = std::move(slot_handle);
	return true;
}

int QFormLayout_virtualbase_minimumHeightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQFormLayout*>(self)->QFormLayout::minimumHeightForWidth(static_cast<int>(param1));
}

bool QFormLayout_override_virtual_widget(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> slot_handle(slot);
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widget = std::move(slot_handle);
	return true;
}

QWidget* QFormLayout_virtualbase_widget(void* self) {
	return static_cast<MiqtVirtualQFormLayout*>(self)->QFormLayout::widget();
}

bool QFormLayout_override_virtual_spacerItem(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QFormLayout> slot_handle(slot);
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__spacerItem = std::move(slot_handle);
	return true;
}

QSpacerItem* QFormLayout_virtualbase_spacerItem(void* self) {
	return static_cast<MiqtVirtualQFormLayout*>(self)->QFormLayout::spacerItem();
}

void QFormLayout_protectedbase_widgetEvent(bool* _dynamic_cast_ok, void* self, QEvent* param1) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->widgetEvent(param1);
}

void QFormLayout_protectedbase_addChildLayout(bool* _dynamic_cast_ok, void* self, QLayout* l) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->addChildLayout(l);
}

void QFormLayout_protectedbase_addChildWidget(bool* _dynamic_cast_ok, void* self, QWidget* w) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->addChildWidget(w);
}

bool QFormLayout_protectedbase_adoptLayout(bool* _dynamic_cast_ok, void* self, QLayout* layout) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->adoptLayout(layout);
}

QRect* QFormLayout_protectedbase_alignmentRect(bool* _dynamic_cast_ok, const void* self, QRect* param1) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QRect(self_cast->alignmentRect(*param1));
}

QObject* QFormLayout_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QFormLayout_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QFormLayout_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QFormLayout_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQFormLayout* self_cast = dynamic_cast<MiqtVirtualQFormLayout*>( (QFormLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QFormLayout_delete(QFormLayout* self) {
	delete self;
}

QLayoutItem* QFormLayout__TakeRowResult_labelItem(const QFormLayout__TakeRowResult* self) {
	return self->labelItem;
}

void QFormLayout__TakeRowResult_setLabelItem(QFormLayout__TakeRowResult* self, QLayoutItem* labelItem) {
	self->labelItem = labelItem;
}

QLayoutItem* QFormLayout__TakeRowResult_fieldItem(const QFormLayout__TakeRowResult* self) {
	return self->fieldItem;
}

void QFormLayout__TakeRowResult_setFieldItem(QFormLayout__TakeRowResult* self, QLayoutItem* fieldItem) {
	self->fieldItem = fieldItem;
}

void QFormLayout__TakeRowResult_delete(QFormLayout__TakeRowResult* self) {
	delete self;
}

