#include <memory>
#include <utility>
#include <QChildEvent>
#include <QEvent>
#include <QLayout>
#include <QLayoutItem>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QRect>
#include <QSize>
#include <QSpacerItem>
#include <QStackedLayout>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWidget>
#include <qstackedlayout.h>
#include "gen_qstackedlayout.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QStackedLayout(intptr_t);
void miqt_exec_callback_QStackedLayout_widgetRemoved(intptr_t, int);
void miqt_exec_callback_QStackedLayout_currentChanged(intptr_t, int);
int miqt_exec_callback_QStackedLayout_count(const QStackedLayout*, intptr_t);
void miqt_exec_callback_QStackedLayout_addItem(QStackedLayout*, intptr_t, QLayoutItem*);
QSize* miqt_exec_callback_QStackedLayout_sizeHint(const QStackedLayout*, intptr_t);
QSize* miqt_exec_callback_QStackedLayout_minimumSize(const QStackedLayout*, intptr_t);
QLayoutItem* miqt_exec_callback_QStackedLayout_itemAt(const QStackedLayout*, intptr_t, int);
QLayoutItem* miqt_exec_callback_QStackedLayout_takeAt(QStackedLayout*, intptr_t, int);
void miqt_exec_callback_QStackedLayout_setGeometry(QStackedLayout*, intptr_t, QRect*);
bool miqt_exec_callback_QStackedLayout_hasHeightForWidth(const QStackedLayout*, intptr_t);
int miqt_exec_callback_QStackedLayout_heightForWidth(const QStackedLayout*, intptr_t, int);
int miqt_exec_callback_QStackedLayout_spacing(const QStackedLayout*, intptr_t);
void miqt_exec_callback_QStackedLayout_setSpacing(QStackedLayout*, intptr_t, int);
void miqt_exec_callback_QStackedLayout_invalidate(QStackedLayout*, intptr_t);
QRect* miqt_exec_callback_QStackedLayout_geometry(const QStackedLayout*, intptr_t);
int miqt_exec_callback_QStackedLayout_expandingDirections(const QStackedLayout*, intptr_t);
QSize* miqt_exec_callback_QStackedLayout_maximumSize(const QStackedLayout*, intptr_t);
int miqt_exec_callback_QStackedLayout_indexOf(const QStackedLayout*, intptr_t, QWidget*);
bool miqt_exec_callback_QStackedLayout_isEmpty(const QStackedLayout*, intptr_t);
int miqt_exec_callback_QStackedLayout_controlTypes(const QStackedLayout*, intptr_t);
QLayoutItem* miqt_exec_callback_QStackedLayout_replaceWidget(QStackedLayout*, intptr_t, QWidget*, QWidget*, int);
QLayout* miqt_exec_callback_QStackedLayout_layout(QStackedLayout*, intptr_t);
void miqt_exec_callback_QStackedLayout_childEvent(QStackedLayout*, intptr_t, QChildEvent*);
bool miqt_exec_callback_QStackedLayout_event(QStackedLayout*, intptr_t, QEvent*);
bool miqt_exec_callback_QStackedLayout_eventFilter(QStackedLayout*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QStackedLayout_timerEvent(QStackedLayout*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QStackedLayout_customEvent(QStackedLayout*, intptr_t, QEvent*);
void miqt_exec_callback_QStackedLayout_connectNotify(QStackedLayout*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QStackedLayout_disconnectNotify(QStackedLayout*, intptr_t, QMetaMethod*);
int miqt_exec_callback_QStackedLayout_minimumHeightForWidth(const QStackedLayout*, intptr_t, int);
QWidget* miqt_exec_callback_QStackedLayout_widget(const QStackedLayout*, intptr_t);
QSpacerItem* miqt_exec_callback_QStackedLayout_spacerItem(QStackedLayout*, intptr_t);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQStackedLayout final : public QStackedLayout {
public:

	MiqtVirtualQStackedLayout(QWidget* parent): QStackedLayout(parent) {}
	MiqtVirtualQStackedLayout(): QStackedLayout() {}
	MiqtVirtualQStackedLayout(QLayout* parentLayout): QStackedLayout(parentLayout) {}

	virtual ~MiqtVirtualQStackedLayout() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> handle__count;

	// Subclass to allow providing a Go implementation
	virtual int count() const override {
		if (!handle__count) {
			return QStackedLayout::count();
		}

		int callback_return_value = miqt_exec_callback_QStackedLayout_count(this, handle__count.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QStackedLayout_virtualbase_count(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> handle__addItem;

	// Subclass to allow providing a Go implementation
	virtual void addItem(QLayoutItem* item) override {
		if (!handle__addItem) {
			QStackedLayout::addItem(item);
			return;
		}

		QLayoutItem* sigval1 = item;
		miqt_exec_callback_QStackedLayout_addItem(this, handle__addItem.value(), sigval1);

	}

	friend void QStackedLayout_virtualbase_addItem(void* self, QLayoutItem* item);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> handle__sizeHint;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint() const override {
		if (!handle__sizeHint) {
			return QStackedLayout::sizeHint();
		}

		QSize* callback_return_value = miqt_exec_callback_QStackedLayout_sizeHint(this, handle__sizeHint.value());
		return *callback_return_value;
	}

	friend QSize* QStackedLayout_virtualbase_sizeHint(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> handle__minimumSize;

	// Subclass to allow providing a Go implementation
	virtual QSize minimumSize() const override {
		if (!handle__minimumSize) {
			return QStackedLayout::minimumSize();
		}

		QSize* callback_return_value = miqt_exec_callback_QStackedLayout_minimumSize(this, handle__minimumSize.value());
		return *callback_return_value;
	}

	friend QSize* QStackedLayout_virtualbase_minimumSize(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> handle__itemAt;

	// Subclass to allow providing a Go implementation
	virtual QLayoutItem* itemAt(int param1) const override {
		if (!handle__itemAt) {
			return QStackedLayout::itemAt(param1);
		}

		int sigval1 = param1;
		QLayoutItem* callback_return_value = miqt_exec_callback_QStackedLayout_itemAt(this, handle__itemAt.value(), sigval1);
		return callback_return_value;
	}

	friend QLayoutItem* QStackedLayout_virtualbase_itemAt(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> handle__takeAt;

	// Subclass to allow providing a Go implementation
	virtual QLayoutItem* takeAt(int param1) override {
		if (!handle__takeAt) {
			return QStackedLayout::takeAt(param1);
		}

		int sigval1 = param1;
		QLayoutItem* callback_return_value = miqt_exec_callback_QStackedLayout_takeAt(this, handle__takeAt.value(), sigval1);
		return callback_return_value;
	}

	friend QLayoutItem* QStackedLayout_virtualbase_takeAt(void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> handle__setGeometry;

	// Subclass to allow providing a Go implementation
	virtual void setGeometry(const QRect& rect) override {
		if (!handle__setGeometry) {
			QStackedLayout::setGeometry(rect);
			return;
		}

		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval1 = const_cast<QRect*>(&rect_ret);
		miqt_exec_callback_QStackedLayout_setGeometry(this, handle__setGeometry.value(), sigval1);

	}

	friend void QStackedLayout_virtualbase_setGeometry(void* self, QRect* rect);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> handle__hasHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual bool hasHeightForWidth() const override {
		if (!handle__hasHeightForWidth) {
			return QStackedLayout::hasHeightForWidth();
		}

		bool callback_return_value = miqt_exec_callback_QStackedLayout_hasHeightForWidth(this, handle__hasHeightForWidth.value());
		return callback_return_value;
	}

	friend bool QStackedLayout_virtualbase_hasHeightForWidth(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> handle__heightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int heightForWidth(int width) const override {
		if (!handle__heightForWidth) {
			return QStackedLayout::heightForWidth(width);
		}

		int sigval1 = width;
		int callback_return_value = miqt_exec_callback_QStackedLayout_heightForWidth(this, handle__heightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QStackedLayout_virtualbase_heightForWidth(const void* self, int width);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> handle__spacing;

	// Subclass to allow providing a Go implementation
	virtual int spacing() const override {
		if (!handle__spacing) {
			return QStackedLayout::spacing();
		}

		int callback_return_value = miqt_exec_callback_QStackedLayout_spacing(this, handle__spacing.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QStackedLayout_virtualbase_spacing(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> handle__setSpacing;

	// Subclass to allow providing a Go implementation
	virtual void setSpacing(int spacing) override {
		if (!handle__setSpacing) {
			QStackedLayout::setSpacing(spacing);
			return;
		}

		int sigval1 = spacing;
		miqt_exec_callback_QStackedLayout_setSpacing(this, handle__setSpacing.value(), sigval1);

	}

	friend void QStackedLayout_virtualbase_setSpacing(void* self, int spacing);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> handle__invalidate;

	// Subclass to allow providing a Go implementation
	virtual void invalidate() override {
		if (!handle__invalidate) {
			QStackedLayout::invalidate();
			return;
		}

		miqt_exec_callback_QStackedLayout_invalidate(this, handle__invalidate.value());

	}

	friend void QStackedLayout_virtualbase_invalidate(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> handle__geometry;

	// Subclass to allow providing a Go implementation
	virtual QRect geometry() const override {
		if (!handle__geometry) {
			return QStackedLayout::geometry();
		}

		QRect* callback_return_value = miqt_exec_callback_QStackedLayout_geometry(this, handle__geometry.value());
		return *callback_return_value;
	}

	friend QRect* QStackedLayout_virtualbase_geometry(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> handle__expandingDirections;

	// Subclass to allow providing a Go implementation
	virtual Qt::Orientations expandingDirections() const override {
		if (!handle__expandingDirections) {
			return QStackedLayout::expandingDirections();
		}

		int callback_return_value = miqt_exec_callback_QStackedLayout_expandingDirections(this, handle__expandingDirections.value());
		return static_cast<Qt::Orientations>(callback_return_value);
	}

	friend int QStackedLayout_virtualbase_expandingDirections(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> handle__maximumSize;

	// Subclass to allow providing a Go implementation
	virtual QSize maximumSize() const override {
		if (!handle__maximumSize) {
			return QStackedLayout::maximumSize();
		}

		QSize* callback_return_value = miqt_exec_callback_QStackedLayout_maximumSize(this, handle__maximumSize.value());
		return *callback_return_value;
	}

	friend QSize* QStackedLayout_virtualbase_maximumSize(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> handle__indexOf;

	// Subclass to allow providing a Go implementation
	virtual int indexOf(const QWidget* param1) const override {
		if (!handle__indexOf) {
			return QStackedLayout::indexOf(param1);
		}

		QWidget* sigval1 = (QWidget*) param1;
		int callback_return_value = miqt_exec_callback_QStackedLayout_indexOf(this, handle__indexOf.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QStackedLayout_virtualbase_indexOf(const void* self, QWidget* param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> handle__isEmpty;

	// Subclass to allow providing a Go implementation
	virtual bool isEmpty() const override {
		if (!handle__isEmpty) {
			return QStackedLayout::isEmpty();
		}

		bool callback_return_value = miqt_exec_callback_QStackedLayout_isEmpty(this, handle__isEmpty.value());
		return callback_return_value;
	}

	friend bool QStackedLayout_virtualbase_isEmpty(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> handle__controlTypes;

	// Subclass to allow providing a Go implementation
	virtual QSizePolicy::ControlTypes controlTypes() const override {
		if (!handle__controlTypes) {
			return QStackedLayout::controlTypes();
		}

		int callback_return_value = miqt_exec_callback_QStackedLayout_controlTypes(this, handle__controlTypes.value());
		return static_cast<QSizePolicy::ControlTypes>(callback_return_value);
	}

	friend int QStackedLayout_virtualbase_controlTypes(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> handle__replaceWidget;

	// Subclass to allow providing a Go implementation
	virtual QLayoutItem* replaceWidget(QWidget* from, QWidget* to, Qt::FindChildOptions options) override {
		if (!handle__replaceWidget) {
			return QStackedLayout::replaceWidget(from, to, options);
		}

		QWidget* sigval1 = from;
		QWidget* sigval2 = to;
		Qt::FindChildOptions options_ret = options;
		int sigval3 = static_cast<int>(options_ret);
		QLayoutItem* callback_return_value = miqt_exec_callback_QStackedLayout_replaceWidget(this, handle__replaceWidget.value(), sigval1, sigval2, sigval3);
		return callback_return_value;
	}

	friend QLayoutItem* QStackedLayout_virtualbase_replaceWidget(void* self, QWidget* from, QWidget* to, int options);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> handle__layout;

	// Subclass to allow providing a Go implementation
	virtual QLayout* layout() override {
		if (!handle__layout) {
			return QStackedLayout::layout();
		}

		QLayout* callback_return_value = miqt_exec_callback_QStackedLayout_layout(this, handle__layout.value());
		return callback_return_value;
	}

	friend QLayout* QStackedLayout_virtualbase_layout(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* e) override {
		if (!handle__childEvent) {
			QStackedLayout::childEvent(e);
			return;
		}

		QChildEvent* sigval1 = e;
		miqt_exec_callback_QStackedLayout_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QStackedLayout_virtualbase_childEvent(void* self, QChildEvent* e);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QStackedLayout::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QStackedLayout_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QStackedLayout_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QStackedLayout::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QStackedLayout_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QStackedLayout_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QStackedLayout::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QStackedLayout_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QStackedLayout_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QStackedLayout::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QStackedLayout_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QStackedLayout_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QStackedLayout::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QStackedLayout_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QStackedLayout_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QStackedLayout::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QStackedLayout_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QStackedLayout_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> handle__minimumHeightForWidth;

	// Subclass to allow providing a Go implementation
	virtual int minimumHeightForWidth(int param1) const override {
		if (!handle__minimumHeightForWidth) {
			return QStackedLayout::minimumHeightForWidth(param1);
		}

		int sigval1 = param1;
		int callback_return_value = miqt_exec_callback_QStackedLayout_minimumHeightForWidth(this, handle__minimumHeightForWidth.value(), sigval1);
		return static_cast<int>(callback_return_value);
	}

	friend int QStackedLayout_virtualbase_minimumHeightForWidth(const void* self, int param1);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> handle__widget;

	// Subclass to allow providing a Go implementation
	virtual QWidget* widget() const override {
		if (!handle__widget) {
			return QStackedLayout::widget();
		}

		QWidget* callback_return_value = miqt_exec_callback_QStackedLayout_widget(this, handle__widget.value());
		return callback_return_value;
	}

	friend QWidget* QStackedLayout_virtualbase_widget(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> handle__spacerItem;

	// Subclass to allow providing a Go implementation
	virtual QSpacerItem* spacerItem() override {
		if (!handle__spacerItem) {
			return QStackedLayout::spacerItem();
		}

		QSpacerItem* callback_return_value = miqt_exec_callback_QStackedLayout_spacerItem(this, handle__spacerItem.value());
		return callback_return_value;
	}

	friend QSpacerItem* QStackedLayout_virtualbase_spacerItem(void* self);

	// Wrappers to allow calling protected methods:
	friend void QStackedLayout_protectedbase_widgetEvent(bool* _dynamic_cast_ok, void* self, QEvent* param1);
	friend void QStackedLayout_protectedbase_addChildLayout(bool* _dynamic_cast_ok, void* self, QLayout* l);
	friend void QStackedLayout_protectedbase_addChildWidget(bool* _dynamic_cast_ok, void* self, QWidget* w);
	friend bool QStackedLayout_protectedbase_adoptLayout(bool* _dynamic_cast_ok, void* self, QLayout* layout);
	friend QRect* QStackedLayout_protectedbase_alignmentRect(bool* _dynamic_cast_ok, const void* self, QRect* param1);
	friend QObject* QStackedLayout_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QStackedLayout_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QStackedLayout_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QStackedLayout_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QStackedLayout* QStackedLayout_new(QWidget* parent) {
	return new (std::nothrow) MiqtVirtualQStackedLayout(parent);
}

QStackedLayout* QStackedLayout_new2() {
	return new (std::nothrow) MiqtVirtualQStackedLayout();
}

QStackedLayout* QStackedLayout_new3(QLayout* parentLayout) {
	return new (std::nothrow) MiqtVirtualQStackedLayout(parentLayout);
}

void QStackedLayout_virtbase(QStackedLayout* src, QLayout** outptr_QLayout) {
	*outptr_QLayout = static_cast<QLayout*>(src);
}

QMetaObject* QStackedLayout_metaObject(const QStackedLayout* self) {
	return (QMetaObject*) self->metaObject();
}

void* QStackedLayout_metacast(QStackedLayout* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QStackedLayout_tr(const char* s) {
	QString _ret = QStackedLayout::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QStackedLayout_addWidget(QStackedLayout* self, QWidget* w) {
	return self->addWidget(w);
}

int QStackedLayout_insertWidget(QStackedLayout* self, int index, QWidget* w) {
	return self->insertWidget(static_cast<int>(index), w);
}

QWidget* QStackedLayout_currentWidget(const QStackedLayout* self) {
	return self->currentWidget();
}

int QStackedLayout_currentIndex(const QStackedLayout* self) {
	return self->currentIndex();
}

QWidget* QStackedLayout_widget(const QStackedLayout* self, int param1) {
	return self->widget(static_cast<int>(param1));
}

int QStackedLayout_count(const QStackedLayout* self) {
	return self->count();
}

int QStackedLayout_stackingMode(const QStackedLayout* self) {
	QStackedLayout::StackingMode _ret = self->stackingMode();
	return static_cast<int>(_ret);
}

void QStackedLayout_setStackingMode(QStackedLayout* self, int stackingMode) {
	self->setStackingMode(static_cast<QStackedLayout::StackingMode>(stackingMode));
}

void QStackedLayout_addItem(QStackedLayout* self, QLayoutItem* item) {
	self->addItem(item);
}

QSize* QStackedLayout_sizeHint(const QStackedLayout* self) {
	return new QSize(self->sizeHint());
}

QSize* QStackedLayout_minimumSize(const QStackedLayout* self) {
	return new QSize(self->minimumSize());
}

QLayoutItem* QStackedLayout_itemAt(const QStackedLayout* self, int param1) {
	return self->itemAt(static_cast<int>(param1));
}

QLayoutItem* QStackedLayout_takeAt(QStackedLayout* self, int param1) {
	return self->takeAt(static_cast<int>(param1));
}

void QStackedLayout_setGeometry(QStackedLayout* self, QRect* rect) {
	self->setGeometry(*rect);
}

bool QStackedLayout_hasHeightForWidth(const QStackedLayout* self) {
	return self->hasHeightForWidth();
}

int QStackedLayout_heightForWidth(const QStackedLayout* self, int width) {
	return self->heightForWidth(static_cast<int>(width));
}

void QStackedLayout_widgetRemoved(QStackedLayout* self, int index) {
	self->widgetRemoved(static_cast<int>(index));
}

void* QStackedLayout_connect_widgetRemoved(QStackedLayout* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout>>(slot);
	return new QMetaObject::Connection(QStackedLayout::connect(self, static_cast<void (QStackedLayout::*)(int)>(&QStackedLayout::widgetRemoved), self, [slot_handle](int index) {
		intptr_t slot = slot_handle->value();
		int sigval1 = index;
		miqt_exec_callback_QStackedLayout_widgetRemoved(slot, sigval1);
	}));
}

void QStackedLayout_currentChanged(QStackedLayout* self, int index) {
	self->currentChanged(static_cast<int>(index));
}

void* QStackedLayout_connect_currentChanged(QStackedLayout* self, intptr_t slot) {
	auto slot_handle = std::make_shared<miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout>>(slot);
	return new QMetaObject::Connection(QStackedLayout::connect(self, static_cast<void (QStackedLayout::*)(int)>(&QStackedLayout::currentChanged), self, [slot_handle](int index) {
		intptr_t slot = slot_handle->value();
		int sigval1 = index;
		miqt_exec_callback_QStackedLayout_currentChanged(slot, sigval1);
	}));
}

void QStackedLayout_setCurrentIndex(QStackedLayout* self, int index) {
	self->setCurrentIndex(static_cast<int>(index));
}

void QStackedLayout_setCurrentWidget(QStackedLayout* self, QWidget* w) {
	self->setCurrentWidget(w);
}

struct miqt_string QStackedLayout_tr2(const char* s, const char* c) {
	QString _ret = QStackedLayout::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QStackedLayout_tr3(const char* s, const char* c, int n) {
	QString _ret = QStackedLayout::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QStackedLayout_override_virtual_count(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> slot_handle(slot);
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__count = std::move(slot_handle);
	return true;
}

int QStackedLayout_virtualbase_count(const void* self) {
	return static_cast<const MiqtVirtualQStackedLayout*>(self)->QStackedLayout::count();
}

bool QStackedLayout_override_virtual_addItem(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> slot_handle(slot);
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__addItem = std::move(slot_handle);
	return true;
}

void QStackedLayout_virtualbase_addItem(void* self, QLayoutItem* item) {
	static_cast<MiqtVirtualQStackedLayout*>(self)->QStackedLayout::addItem(item);
}

bool QStackedLayout_override_virtual_sizeHint(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> slot_handle(slot);
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__sizeHint = std::move(slot_handle);
	return true;
}

QSize* QStackedLayout_virtualbase_sizeHint(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQStackedLayout*>(self)->QStackedLayout::sizeHint());
}

bool QStackedLayout_override_virtual_minimumSize(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> slot_handle(slot);
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumSize = std::move(slot_handle);
	return true;
}

QSize* QStackedLayout_virtualbase_minimumSize(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQStackedLayout*>(self)->QStackedLayout::minimumSize());
}

bool QStackedLayout_override_virtual_itemAt(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> slot_handle(slot);
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__itemAt = std::move(slot_handle);
	return true;
}

QLayoutItem* QStackedLayout_virtualbase_itemAt(const void* self, int param1) {
	return static_cast<const MiqtVirtualQStackedLayout*>(self)->QStackedLayout::itemAt(static_cast<int>(param1));
}

bool QStackedLayout_override_virtual_takeAt(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> slot_handle(slot);
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__takeAt = std::move(slot_handle);
	return true;
}

QLayoutItem* QStackedLayout_virtualbase_takeAt(void* self, int param1) {
	return static_cast<MiqtVirtualQStackedLayout*>(self)->QStackedLayout::takeAt(static_cast<int>(param1));
}

bool QStackedLayout_override_virtual_setGeometry(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> slot_handle(slot);
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setGeometry = std::move(slot_handle);
	return true;
}

void QStackedLayout_virtualbase_setGeometry(void* self, QRect* rect) {
	static_cast<MiqtVirtualQStackedLayout*>(self)->QStackedLayout::setGeometry(*rect);
}

bool QStackedLayout_override_virtual_hasHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> slot_handle(slot);
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__hasHeightForWidth = std::move(slot_handle);
	return true;
}

bool QStackedLayout_virtualbase_hasHeightForWidth(const void* self) {
	return static_cast<const MiqtVirtualQStackedLayout*>(self)->QStackedLayout::hasHeightForWidth();
}

bool QStackedLayout_override_virtual_heightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> slot_handle(slot);
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__heightForWidth = std::move(slot_handle);
	return true;
}

int QStackedLayout_virtualbase_heightForWidth(const void* self, int width) {
	return static_cast<const MiqtVirtualQStackedLayout*>(self)->QStackedLayout::heightForWidth(static_cast<int>(width));
}

bool QStackedLayout_override_virtual_spacing(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> slot_handle(slot);
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__spacing = std::move(slot_handle);
	return true;
}

int QStackedLayout_virtualbase_spacing(const void* self) {
	return static_cast<const MiqtVirtualQStackedLayout*>(self)->QStackedLayout::spacing();
}

bool QStackedLayout_override_virtual_setSpacing(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> slot_handle(slot);
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setSpacing = std::move(slot_handle);
	return true;
}

void QStackedLayout_virtualbase_setSpacing(void* self, int spacing) {
	static_cast<MiqtVirtualQStackedLayout*>(self)->QStackedLayout::setSpacing(static_cast<int>(spacing));
}

bool QStackedLayout_override_virtual_invalidate(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> slot_handle(slot);
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__invalidate = std::move(slot_handle);
	return true;
}

void QStackedLayout_virtualbase_invalidate(void* self) {
	static_cast<MiqtVirtualQStackedLayout*>(self)->QStackedLayout::invalidate();
}

bool QStackedLayout_override_virtual_geometry(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> slot_handle(slot);
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__geometry = std::move(slot_handle);
	return true;
}

QRect* QStackedLayout_virtualbase_geometry(const void* self) {
	return new QRect(static_cast<const MiqtVirtualQStackedLayout*>(self)->QStackedLayout::geometry());
}

bool QStackedLayout_override_virtual_expandingDirections(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> slot_handle(slot);
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__expandingDirections = std::move(slot_handle);
	return true;
}

int QStackedLayout_virtualbase_expandingDirections(const void* self) {
	Qt::Orientations _ret = static_cast<const MiqtVirtualQStackedLayout*>(self)->QStackedLayout::expandingDirections();
	return static_cast<int>(_ret);
}

bool QStackedLayout_override_virtual_maximumSize(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> slot_handle(slot);
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__maximumSize = std::move(slot_handle);
	return true;
}

QSize* QStackedLayout_virtualbase_maximumSize(const void* self) {
	return new QSize(static_cast<const MiqtVirtualQStackedLayout*>(self)->QStackedLayout::maximumSize());
}

bool QStackedLayout_override_virtual_indexOf(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> slot_handle(slot);
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__indexOf = std::move(slot_handle);
	return true;
}

int QStackedLayout_virtualbase_indexOf(const void* self, QWidget* param1) {
	return static_cast<const MiqtVirtualQStackedLayout*>(self)->QStackedLayout::indexOf(param1);
}

bool QStackedLayout_override_virtual_isEmpty(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> slot_handle(slot);
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__isEmpty = std::move(slot_handle);
	return true;
}

bool QStackedLayout_virtualbase_isEmpty(const void* self) {
	return static_cast<const MiqtVirtualQStackedLayout*>(self)->QStackedLayout::isEmpty();
}

bool QStackedLayout_override_virtual_controlTypes(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> slot_handle(slot);
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__controlTypes = std::move(slot_handle);
	return true;
}

int QStackedLayout_virtualbase_controlTypes(const void* self) {
	QSizePolicy::ControlTypes _ret = static_cast<const MiqtVirtualQStackedLayout*>(self)->QStackedLayout::controlTypes();
	return static_cast<int>(_ret);
}

bool QStackedLayout_override_virtual_replaceWidget(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> slot_handle(slot);
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__replaceWidget = std::move(slot_handle);
	return true;
}

QLayoutItem* QStackedLayout_virtualbase_replaceWidget(void* self, QWidget* from, QWidget* to, int options) {
	return static_cast<MiqtVirtualQStackedLayout*>(self)->QStackedLayout::replaceWidget(from, to, static_cast<Qt::FindChildOptions>(options));
}

bool QStackedLayout_override_virtual_layout(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> slot_handle(slot);
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__layout = std::move(slot_handle);
	return true;
}

QLayout* QStackedLayout_virtualbase_layout(void* self) {
	return static_cast<MiqtVirtualQStackedLayout*>(self)->QStackedLayout::layout();
}

bool QStackedLayout_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> slot_handle(slot);
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QStackedLayout_virtualbase_childEvent(void* self, QChildEvent* e) {
	static_cast<MiqtVirtualQStackedLayout*>(self)->QStackedLayout::childEvent(e);
}

bool QStackedLayout_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> slot_handle(slot);
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QStackedLayout_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQStackedLayout*>(self)->QStackedLayout::event(event);
}

bool QStackedLayout_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> slot_handle(slot);
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QStackedLayout_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQStackedLayout*>(self)->QStackedLayout::eventFilter(watched, event);
}

bool QStackedLayout_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> slot_handle(slot);
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QStackedLayout_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQStackedLayout*>(self)->QStackedLayout::timerEvent(event);
}

bool QStackedLayout_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> slot_handle(slot);
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QStackedLayout_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQStackedLayout*>(self)->QStackedLayout::customEvent(event);
}

bool QStackedLayout_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> slot_handle(slot);
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QStackedLayout_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQStackedLayout*>(self)->QStackedLayout::connectNotify(*signal);
}

bool QStackedLayout_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> slot_handle(slot);
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QStackedLayout_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQStackedLayout*>(self)->QStackedLayout::disconnectNotify(*signal);
}

bool QStackedLayout_override_virtual_minimumHeightForWidth(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> slot_handle(slot);
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__minimumHeightForWidth = std::move(slot_handle);
	return true;
}

int QStackedLayout_virtualbase_minimumHeightForWidth(const void* self, int param1) {
	return static_cast<const MiqtVirtualQStackedLayout*>(self)->QStackedLayout::minimumHeightForWidth(static_cast<int>(param1));
}

bool QStackedLayout_override_virtual_widget(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> slot_handle(slot);
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__widget = std::move(slot_handle);
	return true;
}

QWidget* QStackedLayout_virtualbase_widget(const void* self) {
	return static_cast<const MiqtVirtualQStackedLayout*>(self)->QStackedLayout::widget();
}

bool QStackedLayout_override_virtual_spacerItem(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QStackedLayout> slot_handle(slot);
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__spacerItem = std::move(slot_handle);
	return true;
}

QSpacerItem* QStackedLayout_virtualbase_spacerItem(void* self) {
	return static_cast<MiqtVirtualQStackedLayout*>(self)->QStackedLayout::spacerItem();
}

void QStackedLayout_protectedbase_widgetEvent(bool* _dynamic_cast_ok, void* self, QEvent* param1) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->widgetEvent(param1);
}

void QStackedLayout_protectedbase_addChildLayout(bool* _dynamic_cast_ok, void* self, QLayout* l) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->addChildLayout(l);
}

void QStackedLayout_protectedbase_addChildWidget(bool* _dynamic_cast_ok, void* self, QWidget* w) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return ;
	}

	*_dynamic_cast_ok = true;
	self_cast->addChildWidget(w);
}

bool QStackedLayout_protectedbase_adoptLayout(bool* _dynamic_cast_ok, void* self, QLayout* layout) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->adoptLayout(layout);
}

QRect* QStackedLayout_protectedbase_alignmentRect(bool* _dynamic_cast_ok, const void* self, QRect* param1) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return new QRect(self_cast->alignmentRect(*param1));
}

QObject* QStackedLayout_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QStackedLayout_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QStackedLayout_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QStackedLayout_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQStackedLayout* self_cast = dynamic_cast<MiqtVirtualQStackedLayout*>( (QStackedLayout*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QStackedLayout_delete(QStackedLayout* self) {
	delete self;
}

