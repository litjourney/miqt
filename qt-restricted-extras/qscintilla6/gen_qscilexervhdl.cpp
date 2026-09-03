#include <memory>
#include <utility>
#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QFont>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSettings>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qscilexervhdl.h>
#include "gen_qscilexervhdl.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QsciLexerVHDL(intptr_t);
void miqt_exec_callback_QsciLexerVHDL_setFoldComments(QsciLexerVHDL*, intptr_t, bool);
void miqt_exec_callback_QsciLexerVHDL_setFoldCompact(QsciLexerVHDL*, intptr_t, bool);
void miqt_exec_callback_QsciLexerVHDL_setFoldAtElse(QsciLexerVHDL*, intptr_t, bool);
void miqt_exec_callback_QsciLexerVHDL_setFoldAtBegin(QsciLexerVHDL*, intptr_t, bool);
void miqt_exec_callback_QsciLexerVHDL_setFoldAtParenthesis(QsciLexerVHDL*, intptr_t, bool);
const char* miqt_exec_callback_QsciLexerVHDL_language(const QsciLexerVHDL*, intptr_t);
const char* miqt_exec_callback_QsciLexerVHDL_lexer(const QsciLexerVHDL*, intptr_t);
int miqt_exec_callback_QsciLexerVHDL_lexerId(const QsciLexerVHDL*, intptr_t);
const char* miqt_exec_callback_QsciLexerVHDL_autoCompletionFillups(const QsciLexerVHDL*, intptr_t);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QsciLexerVHDL_autoCompletionWordSeparators(const QsciLexerVHDL*, intptr_t);
const char* miqt_exec_callback_QsciLexerVHDL_blockEnd(const QsciLexerVHDL*, intptr_t, int*);
int miqt_exec_callback_QsciLexerVHDL_blockLookback(const QsciLexerVHDL*, intptr_t);
const char* miqt_exec_callback_QsciLexerVHDL_blockStart(const QsciLexerVHDL*, intptr_t, int*);
const char* miqt_exec_callback_QsciLexerVHDL_blockStartKeyword(const QsciLexerVHDL*, intptr_t, int*);
int miqt_exec_callback_QsciLexerVHDL_braceStyle(const QsciLexerVHDL*, intptr_t);
bool miqt_exec_callback_QsciLexerVHDL_caseSensitive(const QsciLexerVHDL*, intptr_t);
QColor* miqt_exec_callback_QsciLexerVHDL_color(const QsciLexerVHDL*, intptr_t, int);
bool miqt_exec_callback_QsciLexerVHDL_eolFill(const QsciLexerVHDL*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerVHDL_font(const QsciLexerVHDL*, intptr_t, int);
int miqt_exec_callback_QsciLexerVHDL_indentationGuideView(const QsciLexerVHDL*, intptr_t);
const char* miqt_exec_callback_QsciLexerVHDL_keywords(const QsciLexerVHDL*, intptr_t, int);
int miqt_exec_callback_QsciLexerVHDL_defaultStyle(const QsciLexerVHDL*, intptr_t);
struct miqt_string miqt_exec_callback_QsciLexerVHDL_description(const QsciLexerVHDL*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerVHDL_paper(const QsciLexerVHDL*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerVHDL_defaultColorWithStyle(const QsciLexerVHDL*, intptr_t, int);
bool miqt_exec_callback_QsciLexerVHDL_defaultEolFill(const QsciLexerVHDL*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerVHDL_defaultFontWithStyle(const QsciLexerVHDL*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerVHDL_defaultPaperWithStyle(const QsciLexerVHDL*, intptr_t, int);
void miqt_exec_callback_QsciLexerVHDL_setEditor(QsciLexerVHDL*, intptr_t, QsciScintilla*);
void miqt_exec_callback_QsciLexerVHDL_refreshProperties(QsciLexerVHDL*, intptr_t);
int miqt_exec_callback_QsciLexerVHDL_styleBitsNeeded(const QsciLexerVHDL*, intptr_t);
const char* miqt_exec_callback_QsciLexerVHDL_wordCharacters(const QsciLexerVHDL*, intptr_t);
void miqt_exec_callback_QsciLexerVHDL_setAutoIndentStyle(QsciLexerVHDL*, intptr_t, int);
void miqt_exec_callback_QsciLexerVHDL_setColor(QsciLexerVHDL*, intptr_t, QColor*, int);
void miqt_exec_callback_QsciLexerVHDL_setEolFill(QsciLexerVHDL*, intptr_t, bool, int);
void miqt_exec_callback_QsciLexerVHDL_setFont(QsciLexerVHDL*, intptr_t, QFont*, int);
void miqt_exec_callback_QsciLexerVHDL_setPaper(QsciLexerVHDL*, intptr_t, QColor*, int);
bool miqt_exec_callback_QsciLexerVHDL_readProperties(QsciLexerVHDL*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerVHDL_writeProperties(const QsciLexerVHDL*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerVHDL_event(QsciLexerVHDL*, intptr_t, QEvent*);
bool miqt_exec_callback_QsciLexerVHDL_eventFilter(QsciLexerVHDL*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QsciLexerVHDL_timerEvent(QsciLexerVHDL*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QsciLexerVHDL_childEvent(QsciLexerVHDL*, intptr_t, QChildEvent*);
void miqt_exec_callback_QsciLexerVHDL_customEvent(QsciLexerVHDL*, intptr_t, QEvent*);
void miqt_exec_callback_QsciLexerVHDL_connectNotify(QsciLexerVHDL*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QsciLexerVHDL_disconnectNotify(QsciLexerVHDL*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciLexerVHDL final : public QsciLexerVHDL {
public:

	MiqtVirtualQsciLexerVHDL(): QsciLexerVHDL() {}
	MiqtVirtualQsciLexerVHDL(QObject* parent): QsciLexerVHDL(parent) {}

	virtual ~MiqtVirtualQsciLexerVHDL() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__setFoldComments;

	// Subclass to allow providing a Go implementation
	virtual void setFoldComments(bool fold) override {
		if (!handle__setFoldComments) {
			QsciLexerVHDL::setFoldComments(fold);
			return;
		}

		bool sigval1 = fold;
		miqt_exec_callback_QsciLexerVHDL_setFoldComments(this, handle__setFoldComments.value(), sigval1);

	}

	friend void QsciLexerVHDL_virtualbase_setFoldComments(void* self, bool fold);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__setFoldCompact;

	// Subclass to allow providing a Go implementation
	virtual void setFoldCompact(bool fold) override {
		if (!handle__setFoldCompact) {
			QsciLexerVHDL::setFoldCompact(fold);
			return;
		}

		bool sigval1 = fold;
		miqt_exec_callback_QsciLexerVHDL_setFoldCompact(this, handle__setFoldCompact.value(), sigval1);

	}

	friend void QsciLexerVHDL_virtualbase_setFoldCompact(void* self, bool fold);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__setFoldAtElse;

	// Subclass to allow providing a Go implementation
	virtual void setFoldAtElse(bool fold) override {
		if (!handle__setFoldAtElse) {
			QsciLexerVHDL::setFoldAtElse(fold);
			return;
		}

		bool sigval1 = fold;
		miqt_exec_callback_QsciLexerVHDL_setFoldAtElse(this, handle__setFoldAtElse.value(), sigval1);

	}

	friend void QsciLexerVHDL_virtualbase_setFoldAtElse(void* self, bool fold);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__setFoldAtBegin;

	// Subclass to allow providing a Go implementation
	virtual void setFoldAtBegin(bool fold) override {
		if (!handle__setFoldAtBegin) {
			QsciLexerVHDL::setFoldAtBegin(fold);
			return;
		}

		bool sigval1 = fold;
		miqt_exec_callback_QsciLexerVHDL_setFoldAtBegin(this, handle__setFoldAtBegin.value(), sigval1);

	}

	friend void QsciLexerVHDL_virtualbase_setFoldAtBegin(void* self, bool fold);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__setFoldAtParenthesis;

	// Subclass to allow providing a Go implementation
	virtual void setFoldAtParenthesis(bool fold) override {
		if (!handle__setFoldAtParenthesis) {
			QsciLexerVHDL::setFoldAtParenthesis(fold);
			return;
		}

		bool sigval1 = fold;
		miqt_exec_callback_QsciLexerVHDL_setFoldAtParenthesis(this, handle__setFoldAtParenthesis.value(), sigval1);

	}

	friend void QsciLexerVHDL_virtualbase_setFoldAtParenthesis(void* self, bool fold);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__language;

	// Subclass to allow providing a Go implementation
	virtual const char* language() const override {
		if (!handle__language) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerVHDL_language(this, handle__language.value());
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__lexer;

	// Subclass to allow providing a Go implementation
	virtual const char* lexer() const override {
		if (!handle__lexer) {
			return QsciLexerVHDL::lexer();
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerVHDL_lexer(this, handle__lexer.value());
		return callback_return_value;
	}

	friend const char* QsciLexerVHDL_virtualbase_lexer(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__lexerId;

	// Subclass to allow providing a Go implementation
	virtual int lexerId() const override {
		if (!handle__lexerId) {
			return QsciLexerVHDL::lexerId();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerVHDL_lexerId(this, handle__lexerId.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerVHDL_virtualbase_lexerId(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__autoCompletionFillups;

	// Subclass to allow providing a Go implementation
	virtual const char* autoCompletionFillups() const override {
		if (!handle__autoCompletionFillups) {
			return QsciLexerVHDL::autoCompletionFillups();
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerVHDL_autoCompletionFillups(this, handle__autoCompletionFillups.value());
		return callback_return_value;
	}

	friend const char* QsciLexerVHDL_virtualbase_autoCompletionFillups(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__autoCompletionWordSeparators;

	// Subclass to allow providing a Go implementation
	virtual QStringList autoCompletionWordSeparators() const override {
		if (!handle__autoCompletionWordSeparators) {
			return QsciLexerVHDL::autoCompletionWordSeparators();
		}

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QsciLexerVHDL_autoCompletionWordSeparators(this, handle__autoCompletionWordSeparators.value());
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

	friend struct miqt_array /* of struct miqt_string */  QsciLexerVHDL_virtualbase_autoCompletionWordSeparators(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__blockEnd;

	// Subclass to allow providing a Go implementation
	virtual const char* blockEnd(int* style) const override {
		if (!handle__blockEnd) {
			return QsciLexerVHDL::blockEnd(style);
		}

		int* sigval1 = style;
		const char* callback_return_value = miqt_exec_callback_QsciLexerVHDL_blockEnd(this, handle__blockEnd.value(), sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerVHDL_virtualbase_blockEnd(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__blockLookback;

	// Subclass to allow providing a Go implementation
	virtual int blockLookback() const override {
		if (!handle__blockLookback) {
			return QsciLexerVHDL::blockLookback();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerVHDL_blockLookback(this, handle__blockLookback.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerVHDL_virtualbase_blockLookback(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__blockStart;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStart(int* style) const override {
		if (!handle__blockStart) {
			return QsciLexerVHDL::blockStart(style);
		}

		int* sigval1 = style;
		const char* callback_return_value = miqt_exec_callback_QsciLexerVHDL_blockStart(this, handle__blockStart.value(), sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerVHDL_virtualbase_blockStart(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__blockStartKeyword;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStartKeyword(int* style) const override {
		if (!handle__blockStartKeyword) {
			return QsciLexerVHDL::blockStartKeyword(style);
		}

		int* sigval1 = style;
		const char* callback_return_value = miqt_exec_callback_QsciLexerVHDL_blockStartKeyword(this, handle__blockStartKeyword.value(), sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerVHDL_virtualbase_blockStartKeyword(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__braceStyle;

	// Subclass to allow providing a Go implementation
	virtual int braceStyle() const override {
		if (!handle__braceStyle) {
			return QsciLexerVHDL::braceStyle();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerVHDL_braceStyle(this, handle__braceStyle.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerVHDL_virtualbase_braceStyle(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__caseSensitive;

	// Subclass to allow providing a Go implementation
	virtual bool caseSensitive() const override {
		if (!handle__caseSensitive) {
			return QsciLexerVHDL::caseSensitive();
		}

		bool callback_return_value = miqt_exec_callback_QsciLexerVHDL_caseSensitive(this, handle__caseSensitive.value());
		return callback_return_value;
	}

	friend bool QsciLexerVHDL_virtualbase_caseSensitive(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__color;

	// Subclass to allow providing a Go implementation
	virtual QColor color(int style) const override {
		if (!handle__color) {
			return QsciLexerVHDL::color(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerVHDL_color(this, handle__color.value(), sigval1);
		return *callback_return_value;
	}

	friend QColor* QsciLexerVHDL_virtualbase_color(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__eolFill;

	// Subclass to allow providing a Go implementation
	virtual bool eolFill(int style) const override {
		if (!handle__eolFill) {
			return QsciLexerVHDL::eolFill(style);
		}

		int sigval1 = style;
		bool callback_return_value = miqt_exec_callback_QsciLexerVHDL_eolFill(this, handle__eolFill.value(), sigval1);
		return callback_return_value;
	}

	friend bool QsciLexerVHDL_virtualbase_eolFill(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__font;

	// Subclass to allow providing a Go implementation
	virtual QFont font(int style) const override {
		if (!handle__font) {
			return QsciLexerVHDL::font(style);
		}

		int sigval1 = style;
		QFont* callback_return_value = miqt_exec_callback_QsciLexerVHDL_font(this, handle__font.value(), sigval1);
		return *callback_return_value;
	}

	friend QFont* QsciLexerVHDL_virtualbase_font(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__indentationGuideView;

	// Subclass to allow providing a Go implementation
	virtual int indentationGuideView() const override {
		if (!handle__indentationGuideView) {
			return QsciLexerVHDL::indentationGuideView();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerVHDL_indentationGuideView(this, handle__indentationGuideView.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerVHDL_virtualbase_indentationGuideView(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__keywords;

	// Subclass to allow providing a Go implementation
	virtual const char* keywords(int set) const override {
		if (!handle__keywords) {
			return QsciLexerVHDL::keywords(set);
		}

		int sigval1 = set;
		const char* callback_return_value = miqt_exec_callback_QsciLexerVHDL_keywords(this, handle__keywords.value(), sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerVHDL_virtualbase_keywords(const void* self, int set);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__defaultStyle;

	// Subclass to allow providing a Go implementation
	virtual int defaultStyle() const override {
		if (!handle__defaultStyle) {
			return QsciLexerVHDL::defaultStyle();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerVHDL_defaultStyle(this, handle__defaultStyle.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerVHDL_virtualbase_defaultStyle(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__description;

	// Subclass to allow providing a Go implementation
	virtual QString description(int style) const override {
		if (!handle__description) {
			return QString(); // Pure virtual, there is no base we can call
		}

		int sigval1 = style;
		struct miqt_string callback_return_value = miqt_exec_callback_QsciLexerVHDL_description(this, handle__description.value(), sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		free(callback_return_value.data);
		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__paper;

	// Subclass to allow providing a Go implementation
	virtual QColor paper(int style) const override {
		if (!handle__paper) {
			return QsciLexerVHDL::paper(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerVHDL_paper(this, handle__paper.value(), sigval1);
		return *callback_return_value;
	}

	friend QColor* QsciLexerVHDL_virtualbase_paper(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__defaultColorWithStyle;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultColor(int style) const override {
		if (!handle__defaultColorWithStyle) {
			return QsciLexerVHDL::defaultColor(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerVHDL_defaultColorWithStyle(this, handle__defaultColorWithStyle.value(), sigval1);
		return *callback_return_value;
	}

	friend QColor* QsciLexerVHDL_virtualbase_defaultColorWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__defaultEolFill;

	// Subclass to allow providing a Go implementation
	virtual bool defaultEolFill(int style) const override {
		if (!handle__defaultEolFill) {
			return QsciLexerVHDL::defaultEolFill(style);
		}

		int sigval1 = style;
		bool callback_return_value = miqt_exec_callback_QsciLexerVHDL_defaultEolFill(this, handle__defaultEolFill.value(), sigval1);
		return callback_return_value;
	}

	friend bool QsciLexerVHDL_virtualbase_defaultEolFill(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__defaultFontWithStyle;

	// Subclass to allow providing a Go implementation
	virtual QFont defaultFont(int style) const override {
		if (!handle__defaultFontWithStyle) {
			return QsciLexerVHDL::defaultFont(style);
		}

		int sigval1 = style;
		QFont* callback_return_value = miqt_exec_callback_QsciLexerVHDL_defaultFontWithStyle(this, handle__defaultFontWithStyle.value(), sigval1);
		return *callback_return_value;
	}

	friend QFont* QsciLexerVHDL_virtualbase_defaultFontWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__defaultPaperWithStyle;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultPaper(int style) const override {
		if (!handle__defaultPaperWithStyle) {
			return QsciLexerVHDL::defaultPaper(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerVHDL_defaultPaperWithStyle(this, handle__defaultPaperWithStyle.value(), sigval1);
		return *callback_return_value;
	}

	friend QColor* QsciLexerVHDL_virtualbase_defaultPaperWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__setEditor;

	// Subclass to allow providing a Go implementation
	virtual void setEditor(QsciScintilla* editor) override {
		if (!handle__setEditor) {
			QsciLexerVHDL::setEditor(editor);
			return;
		}

		QsciScintilla* sigval1 = editor;
		miqt_exec_callback_QsciLexerVHDL_setEditor(this, handle__setEditor.value(), sigval1);

	}

	friend void QsciLexerVHDL_virtualbase_setEditor(void* self, QsciScintilla* editor);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__refreshProperties;

	// Subclass to allow providing a Go implementation
	virtual void refreshProperties() override {
		if (!handle__refreshProperties) {
			QsciLexerVHDL::refreshProperties();
			return;
		}

		miqt_exec_callback_QsciLexerVHDL_refreshProperties(this, handle__refreshProperties.value());

	}

	friend void QsciLexerVHDL_virtualbase_refreshProperties(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__styleBitsNeeded;

	// Subclass to allow providing a Go implementation
	virtual int styleBitsNeeded() const override {
		if (!handle__styleBitsNeeded) {
			return QsciLexerVHDL::styleBitsNeeded();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerVHDL_styleBitsNeeded(this, handle__styleBitsNeeded.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerVHDL_virtualbase_styleBitsNeeded(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__wordCharacters;

	// Subclass to allow providing a Go implementation
	virtual const char* wordCharacters() const override {
		if (!handle__wordCharacters) {
			return QsciLexerVHDL::wordCharacters();
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerVHDL_wordCharacters(this, handle__wordCharacters.value());
		return callback_return_value;
	}

	friend const char* QsciLexerVHDL_virtualbase_wordCharacters(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__setAutoIndentStyle;

	// Subclass to allow providing a Go implementation
	virtual void setAutoIndentStyle(int autoindentstyle) override {
		if (!handle__setAutoIndentStyle) {
			QsciLexerVHDL::setAutoIndentStyle(autoindentstyle);
			return;
		}

		int sigval1 = autoindentstyle;
		miqt_exec_callback_QsciLexerVHDL_setAutoIndentStyle(this, handle__setAutoIndentStyle.value(), sigval1);

	}

	friend void QsciLexerVHDL_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__setColor;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& c, int style) override {
		if (!handle__setColor) {
			QsciLexerVHDL::setColor(c, style);
			return;
		}

		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexerVHDL_setColor(this, handle__setColor.value(), sigval1, sigval2);

	}

	friend void QsciLexerVHDL_virtualbase_setColor(void* self, QColor* c, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__setEolFill;

	// Subclass to allow providing a Go implementation
	virtual void setEolFill(bool eoffill, int style) override {
		if (!handle__setEolFill) {
			QsciLexerVHDL::setEolFill(eoffill, style);
			return;
		}

		bool sigval1 = eoffill;
		int sigval2 = style;
		miqt_exec_callback_QsciLexerVHDL_setEolFill(this, handle__setEolFill.value(), sigval1, sigval2);

	}

	friend void QsciLexerVHDL_virtualbase_setEolFill(void* self, bool eoffill, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__setFont;

	// Subclass to allow providing a Go implementation
	virtual void setFont(const QFont& f, int style) override {
		if (!handle__setFont) {
			QsciLexerVHDL::setFont(f, style);
			return;
		}

		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexerVHDL_setFont(this, handle__setFont.value(), sigval1, sigval2);

	}

	friend void QsciLexerVHDL_virtualbase_setFont(void* self, QFont* f, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__setPaper;

	// Subclass to allow providing a Go implementation
	virtual void setPaper(const QColor& c, int style) override {
		if (!handle__setPaper) {
			QsciLexerVHDL::setPaper(c, style);
			return;
		}

		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexerVHDL_setPaper(this, handle__setPaper.value(), sigval1, sigval2);

	}

	friend void QsciLexerVHDL_virtualbase_setPaper(void* self, QColor* c, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__readProperties;

	// Subclass to allow providing a Go implementation
	virtual bool readProperties(QSettings& qs, const QString& prefix) override {
		if (!handle__readProperties) {
			return QsciLexerVHDL::readProperties(qs, prefix);
		}

		QSettings& qs_ret = qs;
		// Cast returned reference into pointer
		QSettings* sigval1 = &qs_ret;
		const QString prefix_ret = prefix;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray prefix_b = prefix_ret.toUtf8();
		struct miqt_string prefix_ms;
		prefix_ms.len = prefix_b.length();
		prefix_ms.data = static_cast<char*>(malloc(prefix_ms.len));
		memcpy(prefix_ms.data, prefix_b.data(), prefix_ms.len);
		struct miqt_string sigval2 = prefix_ms;
		bool callback_return_value = miqt_exec_callback_QsciLexerVHDL_readProperties(this, handle__readProperties.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QsciLexerVHDL_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__writeProperties;

	// Subclass to allow providing a Go implementation
	virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
		if (!handle__writeProperties) {
			return QsciLexerVHDL::writeProperties(qs, prefix);
		}

		QSettings& qs_ret = qs;
		// Cast returned reference into pointer
		QSettings* sigval1 = &qs_ret;
		const QString prefix_ret = prefix;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray prefix_b = prefix_ret.toUtf8();
		struct miqt_string prefix_ms;
		prefix_ms.len = prefix_b.length();
		prefix_ms.data = static_cast<char*>(malloc(prefix_ms.len));
		memcpy(prefix_ms.data, prefix_b.data(), prefix_ms.len);
		struct miqt_string sigval2 = prefix_ms;
		bool callback_return_value = miqt_exec_callback_QsciLexerVHDL_writeProperties(this, handle__writeProperties.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QsciLexerVHDL_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QsciLexerVHDL::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QsciLexerVHDL_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QsciLexerVHDL_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QsciLexerVHDL::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QsciLexerVHDL_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QsciLexerVHDL_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QsciLexerVHDL::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QsciLexerVHDL_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QsciLexerVHDL_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QsciLexerVHDL::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QsciLexerVHDL_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QsciLexerVHDL_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QsciLexerVHDL::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QsciLexerVHDL_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QsciLexerVHDL_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QsciLexerVHDL::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QsciLexerVHDL_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QsciLexerVHDL_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QsciLexerVHDL::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QsciLexerVHDL_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QsciLexerVHDL_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend bool QsciLexerVHDL_protectedbase_readProperties(bool* _dynamic_cast_ok, void* self, QSettings* qs, struct miqt_string prefix);
	friend bool QsciLexerVHDL_protectedbase_writeProperties(bool* _dynamic_cast_ok, const void* self, QSettings* qs, struct miqt_string prefix);
	friend QObject* QsciLexerVHDL_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QsciLexerVHDL_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QsciLexerVHDL_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QsciLexerVHDL_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QsciLexerVHDL* QsciLexerVHDL_new() {
	return new (std::nothrow) MiqtVirtualQsciLexerVHDL();
}

QsciLexerVHDL* QsciLexerVHDL_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQsciLexerVHDL(parent);
}

void QsciLexerVHDL_virtbase(QsciLexerVHDL* src, QsciLexer** outptr_QsciLexer) {
	*outptr_QsciLexer = static_cast<QsciLexer*>(src);
}

QMetaObject* QsciLexerVHDL_metaObject(const QsciLexerVHDL* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerVHDL_metacast(QsciLexerVHDL* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerVHDL_tr(const char* s) {
	QString _ret = QsciLexerVHDL::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerVHDL_language(const QsciLexerVHDL* self) {
	return (const char*) self->language();
}

const char* QsciLexerVHDL_lexer(const QsciLexerVHDL* self) {
	return (const char*) self->lexer();
}

int QsciLexerVHDL_braceStyle(const QsciLexerVHDL* self) {
	return self->braceStyle();
}

QColor* QsciLexerVHDL_defaultColor(const QsciLexerVHDL* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerVHDL_defaultEolFill(const QsciLexerVHDL* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerVHDL_defaultFont(const QsciLexerVHDL* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerVHDL_defaultPaper(const QsciLexerVHDL* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerVHDL_keywords(const QsciLexerVHDL* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerVHDL_description(const QsciLexerVHDL* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerVHDL_refreshProperties(QsciLexerVHDL* self) {
	self->refreshProperties();
}

bool QsciLexerVHDL_foldComments(const QsciLexerVHDL* self) {
	return self->foldComments();
}

bool QsciLexerVHDL_foldCompact(const QsciLexerVHDL* self) {
	return self->foldCompact();
}

bool QsciLexerVHDL_foldAtElse(const QsciLexerVHDL* self) {
	return self->foldAtElse();
}

bool QsciLexerVHDL_foldAtBegin(const QsciLexerVHDL* self) {
	return self->foldAtBegin();
}

bool QsciLexerVHDL_foldAtParenthesis(const QsciLexerVHDL* self) {
	return self->foldAtParenthesis();
}

void QsciLexerVHDL_setFoldComments(QsciLexerVHDL* self, bool fold) {
	self->setFoldComments(fold);
}

void QsciLexerVHDL_setFoldCompact(QsciLexerVHDL* self, bool fold) {
	self->setFoldCompact(fold);
}

void QsciLexerVHDL_setFoldAtElse(QsciLexerVHDL* self, bool fold) {
	self->setFoldAtElse(fold);
}

void QsciLexerVHDL_setFoldAtBegin(QsciLexerVHDL* self, bool fold) {
	self->setFoldAtBegin(fold);
}

void QsciLexerVHDL_setFoldAtParenthesis(QsciLexerVHDL* self, bool fold) {
	self->setFoldAtParenthesis(fold);
}

struct miqt_string QsciLexerVHDL_tr2(const char* s, const char* c) {
	QString _ret = QsciLexerVHDL::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerVHDL_tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerVHDL::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QsciLexerVHDL_override_virtual_setFoldComments(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFoldComments = std::move(slot_handle);
	return true;
}

void QsciLexerVHDL_virtualbase_setFoldComments(void* self, bool fold) {
	static_cast<MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::setFoldComments(fold);
}

bool QsciLexerVHDL_override_virtual_setFoldCompact(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFoldCompact = std::move(slot_handle);
	return true;
}

void QsciLexerVHDL_virtualbase_setFoldCompact(void* self, bool fold) {
	static_cast<MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::setFoldCompact(fold);
}

bool QsciLexerVHDL_override_virtual_setFoldAtElse(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFoldAtElse = std::move(slot_handle);
	return true;
}

void QsciLexerVHDL_virtualbase_setFoldAtElse(void* self, bool fold) {
	static_cast<MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::setFoldAtElse(fold);
}

bool QsciLexerVHDL_override_virtual_setFoldAtBegin(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFoldAtBegin = std::move(slot_handle);
	return true;
}

void QsciLexerVHDL_virtualbase_setFoldAtBegin(void* self, bool fold) {
	static_cast<MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::setFoldAtBegin(fold);
}

bool QsciLexerVHDL_override_virtual_setFoldAtParenthesis(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFoldAtParenthesis = std::move(slot_handle);
	return true;
}

void QsciLexerVHDL_virtualbase_setFoldAtParenthesis(void* self, bool fold) {
	static_cast<MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::setFoldAtParenthesis(fold);
}

bool QsciLexerVHDL_override_virtual_language(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__language = std::move(slot_handle);
	return true;
}

bool QsciLexerVHDL_override_virtual_lexer(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__lexer = std::move(slot_handle);
	return true;
}

const char* QsciLexerVHDL_virtualbase_lexer(const void* self) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::lexer();
}

bool QsciLexerVHDL_override_virtual_lexerId(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__lexerId = std::move(slot_handle);
	return true;
}

int QsciLexerVHDL_virtualbase_lexerId(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::lexerId();
}

bool QsciLexerVHDL_override_virtual_autoCompletionFillups(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__autoCompletionFillups = std::move(slot_handle);
	return true;
}

const char* QsciLexerVHDL_virtualbase_autoCompletionFillups(const void* self) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::autoCompletionFillups();
}

bool QsciLexerVHDL_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__autoCompletionWordSeparators = std::move(slot_handle);
	return true;
}

struct miqt_array /* of struct miqt_string */  QsciLexerVHDL_virtualbase_autoCompletionWordSeparators(const void* self) {
	QStringList _ret = static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::autoCompletionWordSeparators();
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

bool QsciLexerVHDL_override_virtual_blockEnd(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockEnd = std::move(slot_handle);
	return true;
}

const char* QsciLexerVHDL_virtualbase_blockEnd(const void* self, int* style) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::blockEnd(static_cast<int*>(style));
}

bool QsciLexerVHDL_override_virtual_blockLookback(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockLookback = std::move(slot_handle);
	return true;
}

int QsciLexerVHDL_virtualbase_blockLookback(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::blockLookback();
}

bool QsciLexerVHDL_override_virtual_blockStart(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockStart = std::move(slot_handle);
	return true;
}

const char* QsciLexerVHDL_virtualbase_blockStart(const void* self, int* style) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::blockStart(static_cast<int*>(style));
}

bool QsciLexerVHDL_override_virtual_blockStartKeyword(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockStartKeyword = std::move(slot_handle);
	return true;
}

const char* QsciLexerVHDL_virtualbase_blockStartKeyword(const void* self, int* style) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::blockStartKeyword(static_cast<int*>(style));
}

bool QsciLexerVHDL_override_virtual_braceStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__braceStyle = std::move(slot_handle);
	return true;
}

int QsciLexerVHDL_virtualbase_braceStyle(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::braceStyle();
}

bool QsciLexerVHDL_override_virtual_caseSensitive(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__caseSensitive = std::move(slot_handle);
	return true;
}

bool QsciLexerVHDL_virtualbase_caseSensitive(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::caseSensitive();
}

bool QsciLexerVHDL_override_virtual_color(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__color = std::move(slot_handle);
	return true;
}

QColor* QsciLexerVHDL_virtualbase_color(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::color(static_cast<int>(style)));
}

bool QsciLexerVHDL_override_virtual_eolFill(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eolFill = std::move(slot_handle);
	return true;
}

bool QsciLexerVHDL_virtualbase_eolFill(const void* self, int style) {
	return static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::eolFill(static_cast<int>(style));
}

bool QsciLexerVHDL_override_virtual_font(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__font = std::move(slot_handle);
	return true;
}

QFont* QsciLexerVHDL_virtualbase_font(const void* self, int style) {
	return new QFont(static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::font(static_cast<int>(style)));
}

bool QsciLexerVHDL_override_virtual_indentationGuideView(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__indentationGuideView = std::move(slot_handle);
	return true;
}

int QsciLexerVHDL_virtualbase_indentationGuideView(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::indentationGuideView();
}

bool QsciLexerVHDL_override_virtual_keywords(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keywords = std::move(slot_handle);
	return true;
}

const char* QsciLexerVHDL_virtualbase_keywords(const void* self, int set) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::keywords(static_cast<int>(set));
}

bool QsciLexerVHDL_override_virtual_defaultStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultStyle = std::move(slot_handle);
	return true;
}

int QsciLexerVHDL_virtualbase_defaultStyle(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::defaultStyle();
}

bool QsciLexerVHDL_override_virtual_description(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__description = std::move(slot_handle);
	return true;
}

bool QsciLexerVHDL_override_virtual_paper(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paper = std::move(slot_handle);
	return true;
}

QColor* QsciLexerVHDL_virtualbase_paper(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::paper(static_cast<int>(style)));
}

bool QsciLexerVHDL_override_virtual_defaultColorWithStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultColorWithStyle = std::move(slot_handle);
	return true;
}

QColor* QsciLexerVHDL_virtualbase_defaultColorWithStyle(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::defaultColor(static_cast<int>(style)));
}

bool QsciLexerVHDL_override_virtual_defaultEolFill(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultEolFill = std::move(slot_handle);
	return true;
}

bool QsciLexerVHDL_virtualbase_defaultEolFill(const void* self, int style) {
	return static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::defaultEolFill(static_cast<int>(style));
}

bool QsciLexerVHDL_override_virtual_defaultFontWithStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultFontWithStyle = std::move(slot_handle);
	return true;
}

QFont* QsciLexerVHDL_virtualbase_defaultFontWithStyle(const void* self, int style) {
	return new QFont(static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::defaultFont(static_cast<int>(style)));
}

bool QsciLexerVHDL_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultPaperWithStyle = std::move(slot_handle);
	return true;
}

QColor* QsciLexerVHDL_virtualbase_defaultPaperWithStyle(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::defaultPaper(static_cast<int>(style)));
}

bool QsciLexerVHDL_override_virtual_setEditor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setEditor = std::move(slot_handle);
	return true;
}

void QsciLexerVHDL_virtualbase_setEditor(void* self, QsciScintilla* editor) {
	static_cast<MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::setEditor(editor);
}

bool QsciLexerVHDL_override_virtual_refreshProperties(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__refreshProperties = std::move(slot_handle);
	return true;
}

void QsciLexerVHDL_virtualbase_refreshProperties(void* self) {
	static_cast<MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::refreshProperties();
}

bool QsciLexerVHDL_override_virtual_styleBitsNeeded(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__styleBitsNeeded = std::move(slot_handle);
	return true;
}

int QsciLexerVHDL_virtualbase_styleBitsNeeded(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::styleBitsNeeded();
}

bool QsciLexerVHDL_override_virtual_wordCharacters(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wordCharacters = std::move(slot_handle);
	return true;
}

const char* QsciLexerVHDL_virtualbase_wordCharacters(const void* self) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::wordCharacters();
}

bool QsciLexerVHDL_override_virtual_setAutoIndentStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setAutoIndentStyle = std::move(slot_handle);
	return true;
}

void QsciLexerVHDL_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle) {
	static_cast<MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

bool QsciLexerVHDL_override_virtual_setColor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setColor = std::move(slot_handle);
	return true;
}

void QsciLexerVHDL_virtualbase_setColor(void* self, QColor* c, int style) {
	static_cast<MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::setColor(*c, static_cast<int>(style));
}

bool QsciLexerVHDL_override_virtual_setEolFill(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setEolFill = std::move(slot_handle);
	return true;
}

void QsciLexerVHDL_virtualbase_setEolFill(void* self, bool eoffill, int style) {
	static_cast<MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::setEolFill(eoffill, static_cast<int>(style));
}

bool QsciLexerVHDL_override_virtual_setFont(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFont = std::move(slot_handle);
	return true;
}

void QsciLexerVHDL_virtualbase_setFont(void* self, QFont* f, int style) {
	static_cast<MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::setFont(*f, static_cast<int>(style));
}

bool QsciLexerVHDL_override_virtual_setPaper(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setPaper = std::move(slot_handle);
	return true;
}

void QsciLexerVHDL_virtualbase_setPaper(void* self, QColor* c, int style) {
	static_cast<MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::setPaper(*c, static_cast<int>(style));
}

bool QsciLexerVHDL_override_virtual_readProperties(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__readProperties = std::move(slot_handle);
	return true;
}

bool QsciLexerVHDL_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return static_cast<MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::readProperties(*qs, prefix_QString);
}

bool QsciLexerVHDL_override_virtual_writeProperties(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__writeProperties = std::move(slot_handle);
	return true;
}

bool QsciLexerVHDL_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return static_cast<const MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::writeProperties(*qs, prefix_QString);
}

bool QsciLexerVHDL_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QsciLexerVHDL_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::event(event);
}

bool QsciLexerVHDL_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QsciLexerVHDL_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::eventFilter(watched, event);
}

bool QsciLexerVHDL_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QsciLexerVHDL_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::timerEvent(event);
}

bool QsciLexerVHDL_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QsciLexerVHDL_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::childEvent(event);
}

bool QsciLexerVHDL_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QsciLexerVHDL_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::customEvent(event);
}

bool QsciLexerVHDL_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QsciLexerVHDL_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::connectNotify(*signal);
}

bool QsciLexerVHDL_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerVHDL> slot_handle(slot);
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QsciLexerVHDL_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQsciLexerVHDL*>(self)->QsciLexerVHDL::disconnectNotify(*signal);
}

bool QsciLexerVHDL_protectedbase_readProperties(bool* _dynamic_cast_ok, void* self, QSettings* qs, struct miqt_string prefix) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return self_cast->readProperties(*qs, prefix_QString);
}

bool QsciLexerVHDL_protectedbase_writeProperties(bool* _dynamic_cast_ok, const void* self, QSettings* qs, struct miqt_string prefix) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return self_cast->writeProperties(*qs, prefix_QString);
}

QObject* QsciLexerVHDL_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QsciLexerVHDL_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QsciLexerVHDL_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QsciLexerVHDL_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQsciLexerVHDL* self_cast = dynamic_cast<MiqtVirtualQsciLexerVHDL*>( (QsciLexerVHDL*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QsciLexerVHDL_delete(QsciLexerVHDL* self) {
	delete self;
}

