#include <memory>
#include <utility>
#include <QChildEvent>
#include <QEvent>
#include <QLayout>
#include <QLayoutItem>
#include <QList>
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
#include <QVector>
#include <QWidget>
#include <qwt_dyngrid_layout.h>
#include "gen_qwt_dyngrid_layout.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QwtDynGridLayout(intptr_t);
void miqt_exec_callback_QwtDynGridLayout_invalidate(QwtDynGridLayout*, intptr_t);
void miqt_exec_callback_QwtDynGridLayout_addItem(QwtDynGridLayout*, intptr_t, QLayoutItem*);
QLayoutItem* miqt_exec_callback_QwtDynGridLayout_itemAt(const QwtDynGridLayout*, intptr_t, int);
QLayoutItem* miqt_exec_callback_QwtDynGridLayout_takeAt(QwtDynGridLayout*, intptr_t, int);
int miqt_exec_callback_QwtDynGridLayout_count(const QwtDynGridLayout*, intptr_t);
int miqt_exec_callback_QwtDynGridLayout_expandingDirections(const QwtDynGridLayout*, intptr_t);
int miqt_exec_callback_QwtDynGridLayout_maxItemWidth(const QwtDynGridLayout*, intptr_t);
void miqt_exec_callback_QwtDynGridLayout_setGeometry(QwtDynGridLayout*, intptr_t, QRect*);
bool miqt_exec_callback_QwtDynGridLayout_hasHeightForWidth(const QwtDynGridLayout*, intptr_t);
int miqt_exec_callback_QwtDynGridLayout_heightForWidth(const QwtDynGridLayout*, intptr_t, int);
QSize* miqt_exec_callback_QwtDynGridLayout_sizeHint(const QwtDynGridLayout*, intptr_t);
bool miqt_exec_callback_QwtDynGridLayout_isEmpty(const QwtDynGridLayout*, intptr_t);
unsigned int miqt_exec_callback_QwtDynGridLayout_columnsForWidth(const QwtDynGridLayout*, intptr_t, int);
QRect* miqt_exec_callback_QwtDynGridLayout_geometry(const QwtDynGridLayout*, intptr_t);
QSize* miqt_exec_callback_QwtDynGridLayout_minimumSize(const QwtDynGridLayout*, intptr_t);
QSize* miqt_exec_callback_QwtDynGridLayout_maximumSize(const QwtDynGridLayout*, intptr_t);
int miqt_exec_callback_QwtDynGridLayout_indexOf(const QwtDynGridLayout*, intptr_t, QWidget*);
int miqt_exec_callback_QwtDynGridLayout_controlTypes(const QwtDynGridLayout*, intptr_t);
QLayout* miqt_exec_callback_QwtDynGridLayout_layout(QwtDynGridLayout*, intptr_t);
void miqt_exec_callback_QwtDynGridLayout_childEvent(QwtDynGridLayout*, intptr_t, QChildEvent*);
bool miqt_exec_callback_QwtDynGridLayout_event(QwtDynGridLayout*, intptr_t, QEvent*);
bool miqt_exec_callback_QwtDynGridLayout_eventFilter(QwtDynGridLayout*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QwtDynGridLayout_timerEvent(QwtDynGridLayout*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QwtDynGridLayout_customEvent(QwtDynGridLayout*, intptr_t, QEvent*);
void miqt_exec_callback_QwtDynGridLayout_connectNotify(QwtDynGridLayout*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QwtDynGridLayout_disconnectNotify(QwtDynGridLayout*, intptr_t, QMetaMethod*);
int miqt_exec_callback_QwtDynGridLayout_minimumHeightForWidth(const QwtDynGridLayout*, intptr_t, int);
QWidget* miqt_exec_callback_QwtDynGridLayout_widget(QwtDynGridLayout*, intptr_t);
QSpacerItem* miqt_exec_callback_QwtDynGridLayout_spacerItem(QwtDynGridLayout*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQwtDynGridLayout final : public QwtDynGridLayout {
public:

	MiqtVirtualQwtDynGridLayout(QWidget* param1): QwtDynGridLayout(param1) {}
	MiqtVirtualQwtDynGridLayout(): QwtDynGridLayout() {}
	MiqtVirtualQwtDynGridLayout(QWidget* param1, int margin): QwtDynGridLayout(param1, margin) {}
	MiqtVirtualQwtDynGridLayout(QWidget* param1, int margin, int spacing): QwtDynGridLayout(param1, margin, spacing) {}
	MiqtVirtualQwtDynGridLayout(int spacing): QwtDynGridLayout(spacing) {}

	virtual ~MiqtVirtualQwtDynGridLayout() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> handle__invalidate;

	// Subclass to allow providing a Go implementation
	virtual void invalidate() override {
		if (!handle__invalidate) {
			QwtDynGridLayout::invalidate();
			return;
		}

		miqt_exec_callback_QwtDynGridLayout_invalidate(this, handle__invalidate.value());

	}

	friend void QwtDynGridLayout_virtualbase_invalidate(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> handle__addItem;

	// Subclass to allow providing a Go implementation
	virtual void addItem(QLayoutItem* param1) override {
		if (!handle__addItem) {
			QwtDynGridLayout::addItem(param1);
			return;
		}

		QLayoutItem* sigval1 = param1;
		miqt_exec_callback_QwtDynGridLayout_addItem(this, handle__addItem.value(), sigval1);

	}

	friend void QwtDynGridLayout_virtualbase_addItem(void* self, QLayoutItem* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> handle__itemAt;

	// Subclass to allow providing a Go implementation
	virtual QLayoutItem* itemAt(int index) const override {
		if (!handle__itemAt) {
			return QwtDynGridLayout::itemAt(index);
		}

		int sigval1 = index;
		QLayoutItem* callback_return_value = miqt_exec_callback_QwtDynGridLayout_itemAt(this, handle__itemAt.value(), sigval1);
		return callback_return_value;
	}

	friend QLayoutItem* QwtDynGridLayout_virtualbase_itemAt(const void* self, int index);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> handle__takeAt;

	// Subclass to allow providing a Go implementation
	virtual QLayoutItem* takeAt(int index) override {
		if (!handle__takeAt) {
			return QwtDynGridLayout::takeAt(index);
		}

		int sigval1 = index;
		QLayoutItem* callback_return_value = miqt_exec_callback_QwtDynGridLayout_takeAt(this, handle__takeAt.value(), sigval1);
		return callback_return_value;
	}

	friend QLayoutItem* QwtDynGridLayout_virtualbase_takeAt(void* self, int index);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> handle__count;

	// Subclass to allow providing a Go implementation
	virtual int count() const override {
		if (!handle__count) {
			return QwtDynGridLayout::count();
		}

		int callback_return_value = miqt_exec_callback_QwtDynGridLayout_count(this, handle__count.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QwtDynGridLayout_virtualbase_count(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> handle__expandingDirections;

	// Subclass to allow providing a Go implementation
	virtual Qt::Orientations expandingDirections() const override {
		if (!handle__expandingDirections) {
			return QwtDynGridLayout::expandingDirections();
		}

		int callback_return_value = miqt_exec_callback_QwtDynGridLayout_expandingDirections(this, handle__expandingDirections.value());
		return static_cast<Qt::Orientations>(callback_return_value);
	}

	friend int QwtDynGridLayout_virtualbase_expandingDirections(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> handle__maxItemWidth;

	// Subclass to allow providing a Go implementation
	virtual int maxItemWidth() const override {
		if (!handle__maxItemWidth) {
			return QwtDynGridLayout::maxItemWidth();
		}

		int callback_return_value = miqt_exec_callback_QwtDynGridLayout_maxItemWidth(this, handle__maxItemWidth.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QwtDynGridLayout_virtualbase_maxItemWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> handle__setGeometry;

	// Subclass to allow providing a Go implementation
	virtual void setGeometry(const QRect& rect) override {
		if (!handle__setGeometry) {
			QwtDynGridLayout::setGeometry(rect);
			return;
		}

		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);
		miqt_exec_callback_QwtDynGridLayout_setGeometry(this, handle__setGeometry.value(), sigval1);

	}

	friend void QwtDynGridLayout_virtualbase_setGeometry(void* self, QRect* rect);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> handle__hasHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (!handle__hasHeightForWidth) {
			return QwtDynGridLayout::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QwtDynGridLayout_hasHeightForWidth(this, handle__hasHeightForWidth.value());
		return callback_return_value;
	}

	friend bool QwtDynGridLayout_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> handle__heightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int param1) const override {
		if (!handle__heightForWidth) {
			return QwtDynGridLayout::heightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QwtDynGridLayout_heightForWidth(this, handle__heightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtDynGridLayout_virtualbase_heightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> handle__sizeHint;
	bool owns_return__sizeHint = false;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (!handle__sizeHint) {
			return QwtDynGridLayout::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtDynGridLayout_sizeHint(this, handle__sizeHint.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__sizeHint) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QwtDynGridLayout_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> handle__isEmpty;

	// Subclass to allow providing a Go implementation
	virtual bool isEmpty() const override {
		if (!handle__isEmpty) {
			return QwtDynGridLayout::isEmpty();
		}

		bool callback_return_value = miqt_exec_callback_QwtDynGridLayout_isEmpty(this, handle__isEmpty.value());
		return callback_return_value;
	}

	friend bool QwtDynGridLayout_virtualbase_isEmpty(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> handle__columnsForWidth;

	// Subclass to allow providing a Go implementation
	virtual uint columnsForWidth(int width) const override {
		if (!handle__columnsForWidth) {
			return QwtDynGridLayout::columnsForWidth(width);
		}

		int sigval1 = width;
		unsigned int callback_return_value = miqt_exec_callback_QwtDynGridLayout_columnsForWidth(this, handle__columnsForWidth.value(), sigval1);
		return static_cast<uint>(callback_return_value);
	}

	friend unsigned int QwtDynGridLayout_virtualbase_columnsForWidth(const void* self, int width);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> handle__geometry;
	bool owns_return__geometry = false;

	// Subclass to allow providing a Go implementation
	virtual QRect geometry() const override {
		if (!handle__geometry) {
			return QwtDynGridLayout::geometry();
		}

		QRect* callback_return_value = miqt_exec_callback_QwtDynGridLayout_geometry(this, handle__geometry.value());
		std::unique_ptr<QRect> callback_return_value_owner;
		if (owns_return__geometry) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QRect* QwtDynGridLayout_virtualbase_geometry(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> handle__minimumSize;
	bool owns_return__minimumSize = false;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSize() const override {
		if (!handle__minimumSize) {
			return QwtDynGridLayout::minimumSize();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtDynGridLayout_minimumSize(this, handle__minimumSize.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__minimumSize) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QwtDynGridLayout_virtualbase_minimumSize(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> handle__maximumSize;
	bool owns_return__maximumSize = false;

	// Subclass to allow providing a Go implementation
	virtual QSize maximumSize() const override {
		if (!handle__maximumSize) {
			return QwtDynGridLayout::maximumSize();
		}

		QSize* callback_return_value = miqt_exec_callback_QwtDynGridLayout_maximumSize(this, handle__maximumSize.value());
		std::unique_ptr<QSize> callback_return_value_owner;
		if (owns_return__maximumSize) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QSize* QwtDynGridLayout_virtualbase_maximumSize(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> handle__indexOf;

	// Subclass to allow providing a Go implementation
	virtual int indexOf(QWidget* param1) const override {
		if (!handle__indexOf) {
			return QwtDynGridLayout::indexOf(param1);
		}

		QWidget* sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QwtDynGridLayout_indexOf(this, handle__indexOf.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtDynGridLayout_virtualbase_indexOf(const void* self, QWidget* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> handle__controlTypes;

	// Subclass to allow providing a Go implementation
	virtual QSizePolicy::ControlTypes controlTypes() const override {
		if (!handle__controlTypes) {
			return QwtDynGridLayout::controlTypes();
		}

		int callback_return_value = miqt_exec_callback_QwtDynGridLayout_controlTypes(this, handle__controlTypes.value());
		return static_cast<QSizePolicy::ControlTypes>(callback_return_value);
	}

	friend int QwtDynGridLayout_virtualbase_controlTypes(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> handle__layout;

	// Subclass to allow providing a Go implementation
	virtual QLayout* layout() override {
		if (!handle__layout) {
			return QwtDynGridLayout::layout();
		}

		QLayout* callback_return_value = miqt_exec_callback_QwtDynGridLayout_layout(this, handle__layout.value());
		return callback_return_value;
	}

	friend QLayout* QwtDynGridLayout_virtualbase_layout(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* e) override {
		if (!handle__childEvent) {
			QwtDynGridLayout::childEvent(e);
			return;
		}

		QChildEvent* sigval1 = e;
		miqt_exec_callback_QwtDynGridLayout_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QwtDynGridLayout_virtualbase_childEvent(void* self, QChildEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QwtDynGridLayout::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QwtDynGridLayout_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QwtDynGridLayout_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QwtDynGridLayout::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QwtDynGridLayout_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QwtDynGridLayout_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QwtDynGridLayout::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QwtDynGridLayout_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QwtDynGridLayout_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QwtDynGridLayout::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QwtDynGridLayout_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QwtDynGridLayout_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QwtDynGridLayout::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtDynGridLayout_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QwtDynGridLayout_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QwtDynGridLayout::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QwtDynGridLayout_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QwtDynGridLayout_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> handle__minimumHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int minimumHeightForWidth(int param1) const override {
		if (!handle__minimumHeightForWidth) {
			return QwtDynGridLayout::minimumHeightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QwtDynGridLayout_minimumHeightForWidth(this, handle__minimumHeightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QwtDynGridLayout_virtualbase_minimumHeightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> handle__widget;

	// Subclass to allow providing a Go implementation
	virtual QWidget* widget() override {
		if (!handle__widget) {
			return QwtDynGridLayout::widget();
		}

		QWidget* callback_return_value = miqt_exec_callback_QwtDynGridLayout_widget(this, handle__widget.value());
		return callback_return_value;
	}

	friend QWidget* QwtDynGridLayout_virtualbase_widget(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> handle__spacerItem;

	// Subclass to allow providing a Go implementation
	virtual QSpacerItem* spacerItem() override {
		if (!handle__spacerItem) {
			return QwtDynGridLayout::spacerItem();
		}

		QSpacerItem* callback_return_value = miqt_exec_callback_QwtDynGridLayout_spacerItem(this, handle__spacerItem.value());
		return callback_return_value;
	}

	friend QSpacerItem* QwtDynGridLayout_virtualbase_spacerItem(void* self);

	// Wrappers to allow calling protected methods:
	friend void QwtDynGridLayout_protectedbase_layoutGrid(bool* _dynamic_cast_ok, const void* self, unsigned int numColumns, struct miqt_array /* of int */  rowHeight, struct miqt_array /* of int */  colWidth);
	friend void QwtDynGridLayout_protectedbase_stretchGrid(bool* _dynamic_cast_ok, const void* self, QRect* rect, unsigned int numColumns, struct miqt_array /* of int */  rowHeight, struct miqt_array /* of int */  colWidth);
	friend void QwtDynGridLayout_protectedbase_widgetEvent(bool* _dynamic_cast_ok, void* self, QEvent* param1);
	friend void QwtDynGridLayout_protectedbase_addChildLayout(bool* _dynamic_cast_ok, void* self, QLayout* l);
	friend void QwtDynGridLayout_protectedbase_addChildWidget(bool* _dynamic_cast_ok, void* self, QWidget* w);
	friend bool QwtDynGridLayout_protectedbase_adoptLayout(bool* _dynamic_cast_ok, void* self, QLayout* layout);
	friend QRect* QwtDynGridLayout_protectedbase_alignmentRect(bool* _dynamic_cast_ok, const void* self, QRect* param1);
	friend QObject* QwtDynGridLayout_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QwtDynGridLayout_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QwtDynGridLayout_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QwtDynGridLayout_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QwtDynGridLayout* QwtDynGridLayout_new(QWidget* param1) {
	return new (std::nothrow) MiqtVirtualQwtDynGridLayout(param1);
}

QwtDynGridLayout* QwtDynGridLayout_new2() {
	return new (std::nothrow) MiqtVirtualQwtDynGridLayout();
}

QwtDynGridLayout* QwtDynGridLayout_new3(QWidget* param1, int margin) {
	return new (std::nothrow) MiqtVirtualQwtDynGridLayout(param1, static_cast<int>(margin));
}

QwtDynGridLayout* QwtDynGridLayout_new4(QWidget* param1, int margin, int spacing) {
	return new (std::nothrow) MiqtVirtualQwtDynGridLayout(param1, static_cast<int>(margin), static_cast<int>(spacing));
}

QwtDynGridLayout* QwtDynGridLayout_new5(int spacing) {
	return new (std::nothrow) MiqtVirtualQwtDynGridLayout(static_cast<int>(spacing));
}

void QwtDynGridLayout_virtbase(QwtDynGridLayout* src, QLayout** outptr_QLayout) {
	*outptr_QLayout = static_cast<QLayout*>(src);
}

QMetaObject* QwtDynGridLayout_metaObject(const QwtDynGridLayout* self) {
	return (QMetaObject*) self->metaObject();
}

void* QwtDynGridLayout_metacast(QwtDynGridLayout* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QwtDynGridLayout_tr(const char* s) {
	QString _ret = QwtDynGridLayout::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtDynGridLayout_trUtf8(const char* s) {
	QString _ret = QwtDynGridLayout::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QwtDynGridLayout_invalidate(QwtDynGridLayout* self) {
	self->invalidate();
}

void QwtDynGridLayout_setMaxColumns(QwtDynGridLayout* self, unsigned int maxColumns) {
	self->setMaxColumns(static_cast<uint>(maxColumns));
}

unsigned int QwtDynGridLayout_maxColumns(const QwtDynGridLayout* self) {
	uint _ret = self->maxColumns();
	return static_cast<unsigned int>(_ret);
}

unsigned int QwtDynGridLayout_numRows(const QwtDynGridLayout* self) {
	uint _ret = self->numRows();
	return static_cast<unsigned int>(_ret);
}

unsigned int QwtDynGridLayout_numColumns(const QwtDynGridLayout* self) {
	uint _ret = self->numColumns();
	return static_cast<unsigned int>(_ret);
}

void QwtDynGridLayout_addItem(QwtDynGridLayout* self, QLayoutItem* param1) {
	self->addItem(param1);
}

QLayoutItem* QwtDynGridLayout_itemAt(const QwtDynGridLayout* self, int index) {
	return self->itemAt(static_cast<int>(index));
}

QLayoutItem* QwtDynGridLayout_takeAt(QwtDynGridLayout* self, int index) {
	return self->takeAt(static_cast<int>(index));
}

int QwtDynGridLayout_count(const QwtDynGridLayout* self) {
	return self->count();
}

void QwtDynGridLayout_setExpandingDirections(QwtDynGridLayout* self, int expandingDirections) {
	self->setExpandingDirections(static_cast<Qt::Orientations>(expandingDirections));
}

int QwtDynGridLayout_expandingDirections(const QwtDynGridLayout* self) {
	Qt::Orientations _ret = self->expandingDirections();
	return static_cast<int>(_ret);
}

struct miqt_array /* of QRect* */  QwtDynGridLayout_layoutItems(const QwtDynGridLayout* self, QRect* param1, unsigned int numColumns) {
	QList<QRect> _ret = self->layoutItems(*param1, static_cast<uint>(numColumns));
	// Convert QList<> from C++ memory to manually-managed C memory
	QRect** _arr = static_cast<QRect**>(malloc(sizeof(QRect*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = new QRect(_ret[i]);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

int QwtDynGridLayout_maxItemWidth(const QwtDynGridLayout* self) {
	return self->maxItemWidth();
}

void QwtDynGridLayout_setGeometry(QwtDynGridLayout* self, QRect* rect) {
	self->setGeometry(*rect);
}

bool QwtDynGridLayout_hasHeightForWidth(const QwtDynGridLayout* self) {
	return self->hasHeightForWidth();
}

int QwtDynGridLayout_heightForWidth(const QwtDynGridLayout* self, int param1) {
	return self->heightForWidth(static_cast<int>(param1));
}

QSize* QwtDynGridLayout_sizeHint(const QwtDynGridLayout* self) {
	return new QSize(self->sizeHint());
}

bool QwtDynGridLayout_isEmpty(const QwtDynGridLayout* self) {
	return self->isEmpty();
}

unsigned int QwtDynGridLayout_itemCount(const QwtDynGridLayout* self) {
	uint _ret = self->itemCount();
	return static_cast<unsigned int>(_ret);
}

unsigned int QwtDynGridLayout_columnsForWidth(const QwtDynGridLayout* self, int width) {
	uint _ret = self->columnsForWidth(static_cast<int>(width));
	return static_cast<unsigned int>(_ret);
}

struct miqt_string QwtDynGridLayout_tr2(const char* s, const char* c) {
	QString _ret = QwtDynGridLayout::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtDynGridLayout_tr3(const char* s, const char* c, int n) {
	QString _ret = QwtDynGridLayout::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtDynGridLayout_trUtf82(const char* s, const char* c) {
	QString _ret = QwtDynGridLayout::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QwtDynGridLayout_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QwtDynGridLayout::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QwtDynGridLayout_override_virtual_invalidate(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> slot_handle(slot);
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__invalidate = std::move(slot_handle);
	return true;
}

void QwtDynGridLayout_virtualbase_invalidate(void* self) {
	static_cast<MiqtVirtualQwtDynGridLayout*>(self)->QwtDynGridLayout::invalidate();
}

bool QwtDynGridLayout_override_virtual_addItem(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> slot_handle(slot);
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__addItem = std::move(slot_handle);
	return true;
}

void QwtDynGridLayout_virtualbase_addItem(void* self, QLayoutItem* param1) {
	static_cast<MiqtVirtualQwtDynGridLayout*>(self)->QwtDynGridLayout::addItem(param1);
}

bool QwtDynGridLayout_override_virtual_itemAt(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> slot_handle(slot);
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__itemAt = std::move(slot_handle);
	return true;
}

QLayoutItem* QwtDynGridLayout_virtualbase_itemAt(const void* self, int index) {
	return static_cast<const MiqtVirtualQwtDynGridLayout*>(self)->QwtDynGridLayout::itemAt(static_cast<int>(index));
}

bool QwtDynGridLayout_override_virtual_takeAt(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> slot_handle(slot);
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__takeAt = std::move(slot_handle);
	return true;
}

QLayoutItem* QwtDynGridLayout_virtualbase_takeAt(void* self, int index) {
	return static_cast<MiqtVirtualQwtDynGridLayout*>(self)->QwtDynGridLayout::takeAt(static_cast<int>(index));
}

bool QwtDynGridLayout_override_virtual_count(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> slot_handle(slot);
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__count = std::move(slot_handle);
	return true;
}

int QwtDynGridLayout_virtualbase_count(const void* self) {
	return static_cast<const MiqtVirtualQwtDynGridLayout*>(self)->QwtDynGridLayout::count();
}

bool QwtDynGridLayout_override_virtual_expandingDirections(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> slot_handle(slot);
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__expandingDirections = std::move(slot_handle);
	return true;
}

int QwtDynGridLayout_virtualbase_expandingDirections(const void* self) {
	Qt::Orientations _ret = static_cast<const MiqtVirtualQwtDynGridLayout*>(self)->QwtDynGridLayout::expandingDirections();
	return static_cast<int>(_ret);
}

bool QwtDynGridLayout_override_virtual_maxItemWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> slot_handle(slot);
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__maxItemWidth = std::move(slot_handle);
	return true;
}

int QwtDynGridLayout_virtualbase_maxItemWidth(const void* self) {
	return static_cast<const MiqtVirtualQwtDynGridLayout*>(self)->QwtDynGridLayout::maxItemWidth();
}

bool QwtDynGridLayout_override_virtual_setGeometry(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> slot_handle(slot);
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setGeometry = std::move(slot_handle);
	return true;
}

void QwtDynGridLayout_virtualbase_setGeometry(void* self, QRect* rect) {
	static_cast<MiqtVirtualQwtDynGridLayout*>(self)->QwtDynGridLayout::setGeometry(*rect);
}

bool QwtDynGridLayout_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> slot_handle(slot);
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = std::move(slot_handle);
	return true;
}

bool QwtDynGridLayout_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQwtDynGridLayout*>(self)->QwtDynGridLayout::hasHeightForWidth();
}

bool QwtDynGridLayout_override_virtual_heightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> slot_handle(slot);
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = std::move(slot_handle);
	return true;
}

int QwtDynGridLayout_virtualbase_heightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtDynGridLayout*>(self)->QwtDynGridLayout::heightForWidth(static_cast<int>(param1));
}

bool QwtDynGridLayout_override_virtual_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> slot_handle(slot);
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = false;
	return true;
}

bool QwtDynGridLayout_override_virtual_owned_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> slot_handle(slot);
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	self_cast->owns_return__sizeHint = true;
	return true;
}

QSize* QwtDynGridLayout_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtDynGridLayout*>(self)->QwtDynGridLayout::sizeHint());
}

bool QwtDynGridLayout_override_virtual_isEmpty(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> slot_handle(slot);
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isEmpty = std::move(slot_handle);
	return true;
}

bool QwtDynGridLayout_virtualbase_isEmpty(const void* self) {
	return static_cast<const MiqtVirtualQwtDynGridLayout*>(self)->QwtDynGridLayout::isEmpty();
}

bool QwtDynGridLayout_override_virtual_columnsForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> slot_handle(slot);
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__columnsForWidth = std::move(slot_handle);
	return true;
}

unsigned int QwtDynGridLayout_virtualbase_columnsForWidth(const void* self, int width) {
	uint _ret = static_cast<const MiqtVirtualQwtDynGridLayout*>(self)->QwtDynGridLayout::columnsForWidth(static_cast<int>(width));
	return static_cast<unsigned int>(_ret);
}

bool QwtDynGridLayout_override_virtual_geometry(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> slot_handle(slot);
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__geometry = std::move(slot_handle);
	self_cast->owns_return__geometry = false;
	return true;
}

bool QwtDynGridLayout_override_virtual_owned_geometry(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> slot_handle(slot);
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__geometry = std::move(slot_handle);
	self_cast->owns_return__geometry = true;
	return true;
}

QRect* QwtDynGridLayout_virtualbase_geometry(const void* self) {
	return new QRect(static_cast<const MiqtVirtualQwtDynGridLayout*>(self)->QwtDynGridLayout::geometry());
}

bool QwtDynGridLayout_override_virtual_minimumSize(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> slot_handle(slot);
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSize = std::move(slot_handle);
	self_cast->owns_return__minimumSize = false;
	return true;
}

bool QwtDynGridLayout_override_virtual_owned_minimumSize(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> slot_handle(slot);
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSize = std::move(slot_handle);
	self_cast->owns_return__minimumSize = true;
	return true;
}

QSize* QwtDynGridLayout_virtualbase_minimumSize(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtDynGridLayout*>(self)->QwtDynGridLayout::minimumSize());
}

bool QwtDynGridLayout_override_virtual_maximumSize(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> slot_handle(slot);
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__maximumSize = std::move(slot_handle);
	self_cast->owns_return__maximumSize = false;
	return true;
}

bool QwtDynGridLayout_override_virtual_owned_maximumSize(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> slot_handle(slot);
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__maximumSize = std::move(slot_handle);
	self_cast->owns_return__maximumSize = true;
	return true;
}

QSize* QwtDynGridLayout_virtualbase_maximumSize(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQwtDynGridLayout*>(self)->QwtDynGridLayout::maximumSize());
}

bool QwtDynGridLayout_override_virtual_indexOf(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> slot_handle(slot);
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__indexOf = std::move(slot_handle);
	return true;
}

int QwtDynGridLayout_virtualbase_indexOf(const void* self, QWidget* param1) {
	return static_cast<const MiqtVirtualQwtDynGridLayout*>(self)->QwtDynGridLayout::indexOf(param1);
}

bool QwtDynGridLayout_override_virtual_controlTypes(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> slot_handle(slot);
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__controlTypes = std::move(slot_handle);
	return true;
}

int QwtDynGridLayout_virtualbase_controlTypes(const void* self) {
	QSizePolicy::ControlTypes _ret = static_cast<const MiqtVirtualQwtDynGridLayout*>(self)->QwtDynGridLayout::controlTypes();
	return static_cast<int>(_ret);
}

bool QwtDynGridLayout_override_virtual_layout(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> slot_handle(slot);
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__layout = std::move(slot_handle);
	return true;
}

QLayout* QwtDynGridLayout_virtualbase_layout(void* self) {
	return static_cast<MiqtVirtualQwtDynGridLayout*>(self)->QwtDynGridLayout::layout();
}

bool QwtDynGridLayout_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> slot_handle(slot);
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QwtDynGridLayout_virtualbase_childEvent(void* self, QChildEvent* e) {
	static_cast<MiqtVirtualQwtDynGridLayout*>(self)->QwtDynGridLayout::childEvent(e);
}

bool QwtDynGridLayout_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> slot_handle(slot);
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QwtDynGridLayout_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQwtDynGridLayout*>(self)->QwtDynGridLayout::event(event);
}

bool QwtDynGridLayout_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> slot_handle(slot);
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QwtDynGridLayout_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQwtDynGridLayout*>(self)->QwtDynGridLayout::eventFilter(watched, event);
}

bool QwtDynGridLayout_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> slot_handle(slot);
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QwtDynGridLayout_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQwtDynGridLayout*>(self)->QwtDynGridLayout::timerEvent(event);
}

bool QwtDynGridLayout_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> slot_handle(slot);
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QwtDynGridLayout_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQwtDynGridLayout*>(self)->QwtDynGridLayout::customEvent(event);
}

bool QwtDynGridLayout_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> slot_handle(slot);
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QwtDynGridLayout_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtDynGridLayout*>(self)->QwtDynGridLayout::connectNotify(*signal);
}

bool QwtDynGridLayout_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> slot_handle(slot);
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QwtDynGridLayout_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQwtDynGridLayout*>(self)->QwtDynGridLayout::disconnectNotify(*signal);
}

bool QwtDynGridLayout_override_virtual_minimumHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> slot_handle(slot);
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumHeightForWidth = std::move(slot_handle);
	return true;
}

int QwtDynGridLayout_virtualbase_minimumHeightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQwtDynGridLayout*>(self)->QwtDynGridLayout::minimumHeightForWidth(static_cast<int>(param1));
}

bool QwtDynGridLayout_override_virtual_widget(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> slot_handle(slot);
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widget = std::move(slot_handle);
	return true;
}

QWidget* QwtDynGridLayout_virtualbase_widget(void* self) {
	return static_cast<MiqtVirtualQwtDynGridLayout*>(self)->QwtDynGridLayout::widget();
}

bool QwtDynGridLayout_override_virtual_spacerItem(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QwtDynGridLayout> slot_handle(slot);
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__spacerItem = std::move(slot_handle);
	return true;
}

QSpacerItem* QwtDynGridLayout_virtualbase_spacerItem(void* self) {
	return static_cast<MiqtVirtualQwtDynGridLayout*>(self)->QwtDynGridLayout::spacerItem();
}

void QwtDynGridLayout_protectedbase_layoutGrid(bool* _dynamic_cast_ok, const void* self, unsigned int numColumns, struct miqt_array /* of int */  rowHeight, struct miqt_array /* of int */  colWidth) {
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
		QVector<int> rowHeight_QList;
		rowHeight_QList.reserve(rowHeight.len);
		int* rowHeight_arr = static_cast<int*>(rowHeight.data);
		for(size_t i = 0; i < rowHeight.len; ++i) {
			rowHeight_QList.push_back(static_cast<int>(rowHeight_arr[i]));
		}
		QVector<int> colWidth_QList;
		colWidth_QList.reserve(colWidth.len);
		int* colWidth_arr = static_cast<int*>(colWidth.data);
		for(size_t i = 0; i < colWidth.len; ++i) {
			colWidth_QList.push_back(static_cast<int>(colWidth_arr[i]));
		}
	self_cast->layoutGrid(static_cast<uint>(numColumns), rowHeight_QList, colWidth_QList);
}

void QwtDynGridLayout_protectedbase_stretchGrid(bool* _dynamic_cast_ok, const void* self, QRect* rect, unsigned int numColumns, struct miqt_array /* of int */  rowHeight, struct miqt_array /* of int */  colWidth) {
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
		QVector<int> rowHeight_QList;
		rowHeight_QList.reserve(rowHeight.len);
		int* rowHeight_arr = static_cast<int*>(rowHeight.data);
		for(size_t i = 0; i < rowHeight.len; ++i) {
			rowHeight_QList.push_back(static_cast<int>(rowHeight_arr[i]));
		}
		QVector<int> colWidth_QList;
		colWidth_QList.reserve(colWidth.len);
		int* colWidth_arr = static_cast<int*>(colWidth.data);
		for(size_t i = 0; i < colWidth.len; ++i) {
			colWidth_QList.push_back(static_cast<int>(colWidth_arr[i]));
		}
	self_cast->stretchGrid(*rect, static_cast<uint>(numColumns), rowHeight_QList, colWidth_QList);
}

void QwtDynGridLayout_protectedbase_widgetEvent(bool* _dynamic_cast_ok, void* self, QEvent* param1) {
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->widgetEvent(param1);
}

void QwtDynGridLayout_protectedbase_addChildLayout(bool* _dynamic_cast_ok, void* self, QLayout* l) {
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->addChildLayout(l);
}

void QwtDynGridLayout_protectedbase_addChildWidget(bool* _dynamic_cast_ok, void* self, QWidget* w) {
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->addChildWidget(w);
}

bool QwtDynGridLayout_protectedbase_adoptLayout(bool* _dynamic_cast_ok, void* self, QLayout* layout) {
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->adoptLayout(layout);
}

QRect* QwtDynGridLayout_protectedbase_alignmentRect(bool* _dynamic_cast_ok, const void* self, QRect* param1) {
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QRect(self_cast->alignmentRect(*param1));
}

QObject* QwtDynGridLayout_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QwtDynGridLayout_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QwtDynGridLayout_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QwtDynGridLayout_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQwtDynGridLayout* self_cast = dynamic_cast<MiqtVirtualQwtDynGridLayout*>( (QwtDynGridLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QwtDynGridLayout_delete(QwtDynGridLayout* self) {
	delete self;
}

