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
#include <qscilexercpp.h>
#include "gen_qscilexercpp.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QsciLexerCPP(intptr_t);
void miqt_exec_callback_QsciLexerCPP_setFoldAtElse(QsciLexerCPP*, intptr_t, bool);
void miqt_exec_callback_QsciLexerCPP_setFoldComments(QsciLexerCPP*, intptr_t, bool);
void miqt_exec_callback_QsciLexerCPP_setFoldCompact(QsciLexerCPP*, intptr_t, bool);
void miqt_exec_callback_QsciLexerCPP_setFoldPreprocessor(QsciLexerCPP*, intptr_t, bool);
void miqt_exec_callback_QsciLexerCPP_setStylePreprocessor(QsciLexerCPP*, intptr_t, bool);
const char* miqt_exec_callback_QsciLexerCPP_language(const QsciLexerCPP*, intptr_t);
const char* miqt_exec_callback_QsciLexerCPP_lexer(const QsciLexerCPP*, intptr_t);
int miqt_exec_callback_QsciLexerCPP_lexerId(const QsciLexerCPP*, intptr_t);
const char* miqt_exec_callback_QsciLexerCPP_autoCompletionFillups(const QsciLexerCPP*, intptr_t);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QsciLexerCPP_autoCompletionWordSeparators(const QsciLexerCPP*, intptr_t);
const char* miqt_exec_callback_QsciLexerCPP_blockEnd(const QsciLexerCPP*, intptr_t, int*);
int miqt_exec_callback_QsciLexerCPP_blockLookback(const QsciLexerCPP*, intptr_t);
const char* miqt_exec_callback_QsciLexerCPP_blockStart(const QsciLexerCPP*, intptr_t, int*);
const char* miqt_exec_callback_QsciLexerCPP_blockStartKeyword(const QsciLexerCPP*, intptr_t, int*);
int miqt_exec_callback_QsciLexerCPP_braceStyle(const QsciLexerCPP*, intptr_t);
bool miqt_exec_callback_QsciLexerCPP_caseSensitive(const QsciLexerCPP*, intptr_t);
QColor* miqt_exec_callback_QsciLexerCPP_color(const QsciLexerCPP*, intptr_t, int);
bool miqt_exec_callback_QsciLexerCPP_eolFill(const QsciLexerCPP*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerCPP_font(const QsciLexerCPP*, intptr_t, int);
int miqt_exec_callback_QsciLexerCPP_indentationGuideView(const QsciLexerCPP*, intptr_t);
const char* miqt_exec_callback_QsciLexerCPP_keywords(const QsciLexerCPP*, intptr_t, int);
int miqt_exec_callback_QsciLexerCPP_defaultStyle(const QsciLexerCPP*, intptr_t);
struct miqt_string miqt_exec_callback_QsciLexerCPP_description(const QsciLexerCPP*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerCPP_paper(const QsciLexerCPP*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerCPP_defaultColorWithStyle(const QsciLexerCPP*, intptr_t, int);
bool miqt_exec_callback_QsciLexerCPP_defaultEolFill(const QsciLexerCPP*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerCPP_defaultFontWithStyle(const QsciLexerCPP*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerCPP_defaultPaperWithStyle(const QsciLexerCPP*, intptr_t, int);
void miqt_exec_callback_QsciLexerCPP_setEditor(QsciLexerCPP*, intptr_t, QsciScintilla*);
void miqt_exec_callback_QsciLexerCPP_refreshProperties(QsciLexerCPP*, intptr_t);
int miqt_exec_callback_QsciLexerCPP_styleBitsNeeded(const QsciLexerCPP*, intptr_t);
const char* miqt_exec_callback_QsciLexerCPP_wordCharacters(const QsciLexerCPP*, intptr_t);
void miqt_exec_callback_QsciLexerCPP_setAutoIndentStyle(QsciLexerCPP*, intptr_t, int);
void miqt_exec_callback_QsciLexerCPP_setColor(QsciLexerCPP*, intptr_t, QColor*, int);
void miqt_exec_callback_QsciLexerCPP_setEolFill(QsciLexerCPP*, intptr_t, bool, int);
void miqt_exec_callback_QsciLexerCPP_setFont(QsciLexerCPP*, intptr_t, QFont*, int);
void miqt_exec_callback_QsciLexerCPP_setPaper(QsciLexerCPP*, intptr_t, QColor*, int);
bool miqt_exec_callback_QsciLexerCPP_readProperties(QsciLexerCPP*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerCPP_writeProperties(const QsciLexerCPP*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerCPP_event(QsciLexerCPP*, intptr_t, QEvent*);
bool miqt_exec_callback_QsciLexerCPP_eventFilter(QsciLexerCPP*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QsciLexerCPP_timerEvent(QsciLexerCPP*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QsciLexerCPP_childEvent(QsciLexerCPP*, intptr_t, QChildEvent*);
void miqt_exec_callback_QsciLexerCPP_customEvent(QsciLexerCPP*, intptr_t, QEvent*);
void miqt_exec_callback_QsciLexerCPP_connectNotify(QsciLexerCPP*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QsciLexerCPP_disconnectNotify(QsciLexerCPP*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciLexerCPP final : public QsciLexerCPP {
public:

	MiqtVirtualQsciLexerCPP(): QsciLexerCPP() {}
	MiqtVirtualQsciLexerCPP(QObject* parent): QsciLexerCPP(parent) {}
	MiqtVirtualQsciLexerCPP(QObject* parent, bool caseInsensitiveKeywords): QsciLexerCPP(parent, caseInsensitiveKeywords) {}

	virtual ~MiqtVirtualQsciLexerCPP() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__setFoldAtElse;

	// Subclass to allow providing a Go implementation
	virtual void setFoldAtElse(bool fold) override {
		if (!handle__setFoldAtElse) {
			QsciLexerCPP::setFoldAtElse(fold);
			return;
		}

		bool sigval1 = fold;
		miqt_exec_callback_QsciLexerCPP_setFoldAtElse(this, handle__setFoldAtElse.value(), sigval1);

	}

	friend void QsciLexerCPP_virtualbase_setFoldAtElse(void* self, bool fold);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__setFoldComments;

	// Subclass to allow providing a Go implementation
	virtual void setFoldComments(bool fold) override {
		if (!handle__setFoldComments) {
			QsciLexerCPP::setFoldComments(fold);
			return;
		}

		bool sigval1 = fold;
		miqt_exec_callback_QsciLexerCPP_setFoldComments(this, handle__setFoldComments.value(), sigval1);

	}

	friend void QsciLexerCPP_virtualbase_setFoldComments(void* self, bool fold);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__setFoldCompact;

	// Subclass to allow providing a Go implementation
	virtual void setFoldCompact(bool fold) override {
		if (!handle__setFoldCompact) {
			QsciLexerCPP::setFoldCompact(fold);
			return;
		}

		bool sigval1 = fold;
		miqt_exec_callback_QsciLexerCPP_setFoldCompact(this, handle__setFoldCompact.value(), sigval1);

	}

	friend void QsciLexerCPP_virtualbase_setFoldCompact(void* self, bool fold);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__setFoldPreprocessor;

	// Subclass to allow providing a Go implementation
	virtual void setFoldPreprocessor(bool fold) override {
		if (!handle__setFoldPreprocessor) {
			QsciLexerCPP::setFoldPreprocessor(fold);
			return;
		}

		bool sigval1 = fold;
		miqt_exec_callback_QsciLexerCPP_setFoldPreprocessor(this, handle__setFoldPreprocessor.value(), sigval1);

	}

	friend void QsciLexerCPP_virtualbase_setFoldPreprocessor(void* self, bool fold);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__setStylePreprocessor;

	// Subclass to allow providing a Go implementation
	virtual void setStylePreprocessor(bool style) override {
		if (!handle__setStylePreprocessor) {
			QsciLexerCPP::setStylePreprocessor(style);
			return;
		}

		bool sigval1 = style;
		miqt_exec_callback_QsciLexerCPP_setStylePreprocessor(this, handle__setStylePreprocessor.value(), sigval1);

	}

	friend void QsciLexerCPP_virtualbase_setStylePreprocessor(void* self, bool style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__language;

	// Subclass to allow providing a Go implementation
	virtual const char* language() const override {
		if (!handle__language) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerCPP_language(this, handle__language.value());
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__lexer;

	// Subclass to allow providing a Go implementation
	virtual const char* lexer() const override {
		if (!handle__lexer) {
			return QsciLexerCPP::lexer();
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerCPP_lexer(this, handle__lexer.value());
		return callback_return_value;
	}

	friend const char* QsciLexerCPP_virtualbase_lexer(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__lexerId;

	// Subclass to allow providing a Go implementation
	virtual int lexerId() const override {
		if (!handle__lexerId) {
			return QsciLexerCPP::lexerId();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerCPP_lexerId(this, handle__lexerId.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerCPP_virtualbase_lexerId(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__autoCompletionFillups;

	// Subclass to allow providing a Go implementation
	virtual const char* autoCompletionFillups() const override {
		if (!handle__autoCompletionFillups) {
			return QsciLexerCPP::autoCompletionFillups();
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerCPP_autoCompletionFillups(this, handle__autoCompletionFillups.value());
		return callback_return_value;
	}

	friend const char* QsciLexerCPP_virtualbase_autoCompletionFillups(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__autoCompletionWordSeparators;

	// Subclass to allow providing a Go implementation
	virtual QStringList autoCompletionWordSeparators() const override {
		if (!handle__autoCompletionWordSeparators) {
			return QsciLexerCPP::autoCompletionWordSeparators();
		}

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QsciLexerCPP_autoCompletionWordSeparators(this, handle__autoCompletionWordSeparators.value());
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

	friend struct miqt_array /* of struct miqt_string */  QsciLexerCPP_virtualbase_autoCompletionWordSeparators(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__blockEnd;

	// Subclass to allow providing a Go implementation
	virtual const char* blockEnd(int* style) const override {
		if (!handle__blockEnd) {
			return QsciLexerCPP::blockEnd(style);
		}

		int* sigval1 = style;
		const char* callback_return_value = miqt_exec_callback_QsciLexerCPP_blockEnd(this, handle__blockEnd.value(), sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerCPP_virtualbase_blockEnd(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__blockLookback;

	// Subclass to allow providing a Go implementation
	virtual int blockLookback() const override {
		if (!handle__blockLookback) {
			return QsciLexerCPP::blockLookback();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerCPP_blockLookback(this, handle__blockLookback.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerCPP_virtualbase_blockLookback(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__blockStart;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStart(int* style) const override {
		if (!handle__blockStart) {
			return QsciLexerCPP::blockStart(style);
		}

		int* sigval1 = style;
		const char* callback_return_value = miqt_exec_callback_QsciLexerCPP_blockStart(this, handle__blockStart.value(), sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerCPP_virtualbase_blockStart(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__blockStartKeyword;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStartKeyword(int* style) const override {
		if (!handle__blockStartKeyword) {
			return QsciLexerCPP::blockStartKeyword(style);
		}

		int* sigval1 = style;
		const char* callback_return_value = miqt_exec_callback_QsciLexerCPP_blockStartKeyword(this, handle__blockStartKeyword.value(), sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerCPP_virtualbase_blockStartKeyword(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__braceStyle;

	// Subclass to allow providing a Go implementation
	virtual int braceStyle() const override {
		if (!handle__braceStyle) {
			return QsciLexerCPP::braceStyle();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerCPP_braceStyle(this, handle__braceStyle.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerCPP_virtualbase_braceStyle(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__caseSensitive;

	// Subclass to allow providing a Go implementation
	virtual bool caseSensitive() const override {
		if (!handle__caseSensitive) {
			return QsciLexerCPP::caseSensitive();
		}

		bool callback_return_value = miqt_exec_callback_QsciLexerCPP_caseSensitive(this, handle__caseSensitive.value());
		return callback_return_value;
	}

	friend bool QsciLexerCPP_virtualbase_caseSensitive(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__color;

	// Subclass to allow providing a Go implementation
	virtual QColor color(int style) const override {
		if (!handle__color) {
			return QsciLexerCPP::color(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerCPP_color(this, handle__color.value(), sigval1);
		return *callback_return_value;
	}

	friend QColor* QsciLexerCPP_virtualbase_color(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__eolFill;

	// Subclass to allow providing a Go implementation
	virtual bool eolFill(int style) const override {
		if (!handle__eolFill) {
			return QsciLexerCPP::eolFill(style);
		}

		int sigval1 = style;
		bool callback_return_value = miqt_exec_callback_QsciLexerCPP_eolFill(this, handle__eolFill.value(), sigval1);
		return callback_return_value;
	}

	friend bool QsciLexerCPP_virtualbase_eolFill(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__font;

	// Subclass to allow providing a Go implementation
	virtual QFont font(int style) const override {
		if (!handle__font) {
			return QsciLexerCPP::font(style);
		}

		int sigval1 = style;
		QFont* callback_return_value = miqt_exec_callback_QsciLexerCPP_font(this, handle__font.value(), sigval1);
		return *callback_return_value;
	}

	friend QFont* QsciLexerCPP_virtualbase_font(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__indentationGuideView;

	// Subclass to allow providing a Go implementation
	virtual int indentationGuideView() const override {
		if (!handle__indentationGuideView) {
			return QsciLexerCPP::indentationGuideView();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerCPP_indentationGuideView(this, handle__indentationGuideView.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerCPP_virtualbase_indentationGuideView(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__keywords;

	// Subclass to allow providing a Go implementation
	virtual const char* keywords(int set) const override {
		if (!handle__keywords) {
			return QsciLexerCPP::keywords(set);
		}

		int sigval1 = set;
		const char* callback_return_value = miqt_exec_callback_QsciLexerCPP_keywords(this, handle__keywords.value(), sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerCPP_virtualbase_keywords(const void* self, int set);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__defaultStyle;

	// Subclass to allow providing a Go implementation
	virtual int defaultStyle() const override {
		if (!handle__defaultStyle) {
			return QsciLexerCPP::defaultStyle();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerCPP_defaultStyle(this, handle__defaultStyle.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerCPP_virtualbase_defaultStyle(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__description;

	// Subclass to allow providing a Go implementation
	virtual QString description(int style) const override {
		if (!handle__description) {
			return QString(); // Pure virtual, there is no base we can call
		}

		int sigval1 = style;
		struct miqt_string callback_return_value = miqt_exec_callback_QsciLexerCPP_description(this, handle__description.value(), sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		free(callback_return_value.data);
		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__paper;

	// Subclass to allow providing a Go implementation
	virtual QColor paper(int style) const override {
		if (!handle__paper) {
			return QsciLexerCPP::paper(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerCPP_paper(this, handle__paper.value(), sigval1);
		return *callback_return_value;
	}

	friend QColor* QsciLexerCPP_virtualbase_paper(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__defaultColorWithStyle;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultColor(int style) const override {
		if (!handle__defaultColorWithStyle) {
			return QsciLexerCPP::defaultColor(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerCPP_defaultColorWithStyle(this, handle__defaultColorWithStyle.value(), sigval1);
		return *callback_return_value;
	}

	friend QColor* QsciLexerCPP_virtualbase_defaultColorWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__defaultEolFill;

	// Subclass to allow providing a Go implementation
	virtual bool defaultEolFill(int style) const override {
		if (!handle__defaultEolFill) {
			return QsciLexerCPP::defaultEolFill(style);
		}

		int sigval1 = style;
		bool callback_return_value = miqt_exec_callback_QsciLexerCPP_defaultEolFill(this, handle__defaultEolFill.value(), sigval1);
		return callback_return_value;
	}

	friend bool QsciLexerCPP_virtualbase_defaultEolFill(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__defaultFontWithStyle;

	// Subclass to allow providing a Go implementation
	virtual QFont defaultFont(int style) const override {
		if (!handle__defaultFontWithStyle) {
			return QsciLexerCPP::defaultFont(style);
		}

		int sigval1 = style;
		QFont* callback_return_value = miqt_exec_callback_QsciLexerCPP_defaultFontWithStyle(this, handle__defaultFontWithStyle.value(), sigval1);
		return *callback_return_value;
	}

	friend QFont* QsciLexerCPP_virtualbase_defaultFontWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__defaultPaperWithStyle;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultPaper(int style) const override {
		if (!handle__defaultPaperWithStyle) {
			return QsciLexerCPP::defaultPaper(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerCPP_defaultPaperWithStyle(this, handle__defaultPaperWithStyle.value(), sigval1);
		return *callback_return_value;
	}

	friend QColor* QsciLexerCPP_virtualbase_defaultPaperWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__setEditor;

	// Subclass to allow providing a Go implementation
	virtual void setEditor(QsciScintilla* editor) override {
		if (!handle__setEditor) {
			QsciLexerCPP::setEditor(editor);
			return;
		}

		QsciScintilla* sigval1 = editor;
		miqt_exec_callback_QsciLexerCPP_setEditor(this, handle__setEditor.value(), sigval1);

	}

	friend void QsciLexerCPP_virtualbase_setEditor(void* self, QsciScintilla* editor);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__refreshProperties;

	// Subclass to allow providing a Go implementation
	virtual void refreshProperties() override {
		if (!handle__refreshProperties) {
			QsciLexerCPP::refreshProperties();
			return;
		}

		miqt_exec_callback_QsciLexerCPP_refreshProperties(this, handle__refreshProperties.value());

	}

	friend void QsciLexerCPP_virtualbase_refreshProperties(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__styleBitsNeeded;

	// Subclass to allow providing a Go implementation
	virtual int styleBitsNeeded() const override {
		if (!handle__styleBitsNeeded) {
			return QsciLexerCPP::styleBitsNeeded();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerCPP_styleBitsNeeded(this, handle__styleBitsNeeded.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerCPP_virtualbase_styleBitsNeeded(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__wordCharacters;

	// Subclass to allow providing a Go implementation
	virtual const char* wordCharacters() const override {
		if (!handle__wordCharacters) {
			return QsciLexerCPP::wordCharacters();
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerCPP_wordCharacters(this, handle__wordCharacters.value());
		return callback_return_value;
	}

	friend const char* QsciLexerCPP_virtualbase_wordCharacters(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__setAutoIndentStyle;

	// Subclass to allow providing a Go implementation
	virtual void setAutoIndentStyle(int autoindentstyle) override {
		if (!handle__setAutoIndentStyle) {
			QsciLexerCPP::setAutoIndentStyle(autoindentstyle);
			return;
		}

		int sigval1 = autoindentstyle;
		miqt_exec_callback_QsciLexerCPP_setAutoIndentStyle(this, handle__setAutoIndentStyle.value(), sigval1);

	}

	friend void QsciLexerCPP_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__setColor;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& c, int style) override {
		if (!handle__setColor) {
			QsciLexerCPP::setColor(c, style);
			return;
		}

		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexerCPP_setColor(this, handle__setColor.value(), sigval1, sigval2);

	}

	friend void QsciLexerCPP_virtualbase_setColor(void* self, QColor* c, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__setEolFill;

	// Subclass to allow providing a Go implementation
	virtual void setEolFill(bool eoffill, int style) override {
		if (!handle__setEolFill) {
			QsciLexerCPP::setEolFill(eoffill, style);
			return;
		}

		bool sigval1 = eoffill;
		int sigval2 = style;
		miqt_exec_callback_QsciLexerCPP_setEolFill(this, handle__setEolFill.value(), sigval1, sigval2);

	}

	friend void QsciLexerCPP_virtualbase_setEolFill(void* self, bool eoffill, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__setFont;

	// Subclass to allow providing a Go implementation
	virtual void setFont(const QFont& f, int style) override {
		if (!handle__setFont) {
			QsciLexerCPP::setFont(f, style);
			return;
		}

		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexerCPP_setFont(this, handle__setFont.value(), sigval1, sigval2);

	}

	friend void QsciLexerCPP_virtualbase_setFont(void* self, QFont* f, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__setPaper;

	// Subclass to allow providing a Go implementation
	virtual void setPaper(const QColor& c, int style) override {
		if (!handle__setPaper) {
			QsciLexerCPP::setPaper(c, style);
			return;
		}

		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexerCPP_setPaper(this, handle__setPaper.value(), sigval1, sigval2);

	}

	friend void QsciLexerCPP_virtualbase_setPaper(void* self, QColor* c, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__readProperties;

	// Subclass to allow providing a Go implementation
	virtual bool readProperties(QSettings& qs, const QString& prefix) override {
		if (!handle__readProperties) {
			return QsciLexerCPP::readProperties(qs, prefix);
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
		bool callback_return_value = miqt_exec_callback_QsciLexerCPP_readProperties(this, handle__readProperties.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QsciLexerCPP_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__writeProperties;

	// Subclass to allow providing a Go implementation
	virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
		if (!handle__writeProperties) {
			return QsciLexerCPP::writeProperties(qs, prefix);
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
		bool callback_return_value = miqt_exec_callback_QsciLexerCPP_writeProperties(this, handle__writeProperties.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QsciLexerCPP_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QsciLexerCPP::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QsciLexerCPP_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QsciLexerCPP_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QsciLexerCPP::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QsciLexerCPP_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QsciLexerCPP_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QsciLexerCPP::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QsciLexerCPP_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QsciLexerCPP_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QsciLexerCPP::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QsciLexerCPP_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QsciLexerCPP_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QsciLexerCPP::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QsciLexerCPP_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QsciLexerCPP_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QsciLexerCPP::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QsciLexerCPP_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QsciLexerCPP_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QsciLexerCPP::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QsciLexerCPP_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QsciLexerCPP_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend bool QsciLexerCPP_protectedbase_readProperties(bool* _dynamic_cast_ok, void* self, QSettings* qs, struct miqt_string prefix);
	friend bool QsciLexerCPP_protectedbase_writeProperties(bool* _dynamic_cast_ok, const void* self, QSettings* qs, struct miqt_string prefix);
	friend QObject* QsciLexerCPP_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QsciLexerCPP_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QsciLexerCPP_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QsciLexerCPP_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QsciLexerCPP* QsciLexerCPP_new() {
	return new (std::nothrow) MiqtVirtualQsciLexerCPP();
}

QsciLexerCPP* QsciLexerCPP_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQsciLexerCPP(parent);
}

QsciLexerCPP* QsciLexerCPP_new3(QObject* parent, bool caseInsensitiveKeywords) {
	return new (std::nothrow) MiqtVirtualQsciLexerCPP(parent, caseInsensitiveKeywords);
}

void QsciLexerCPP_virtbase(QsciLexerCPP* src, QsciLexer** outptr_QsciLexer) {
	*outptr_QsciLexer = static_cast<QsciLexer*>(src);
}

QMetaObject* QsciLexerCPP_metaObject(const QsciLexerCPP* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerCPP_metacast(QsciLexerCPP* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerCPP_tr(const char* s) {
	QString _ret = QsciLexerCPP::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerCPP_language(const QsciLexerCPP* self) {
	return (const char*) self->language();
}

const char* QsciLexerCPP_lexer(const QsciLexerCPP* self) {
	return (const char*) self->lexer();
}

struct miqt_array /* of struct miqt_string */  QsciLexerCPP_autoCompletionWordSeparators(const QsciLexerCPP* self) {
	QStringList _ret = self->autoCompletionWordSeparators();
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

const char* QsciLexerCPP_blockEnd(const QsciLexerCPP* self) {
	return (const char*) self->blockEnd();
}

const char* QsciLexerCPP_blockStart(const QsciLexerCPP* self) {
	return (const char*) self->blockStart();
}

const char* QsciLexerCPP_blockStartKeyword(const QsciLexerCPP* self) {
	return (const char*) self->blockStartKeyword();
}

int QsciLexerCPP_braceStyle(const QsciLexerCPP* self) {
	return self->braceStyle();
}

const char* QsciLexerCPP_wordCharacters(const QsciLexerCPP* self) {
	return (const char*) self->wordCharacters();
}

QColor* QsciLexerCPP_defaultColor(const QsciLexerCPP* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerCPP_defaultEolFill(const QsciLexerCPP* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerCPP_defaultFont(const QsciLexerCPP* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerCPP_defaultPaper(const QsciLexerCPP* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerCPP_keywords(const QsciLexerCPP* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerCPP_description(const QsciLexerCPP* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerCPP_refreshProperties(QsciLexerCPP* self) {
	self->refreshProperties();
}

bool QsciLexerCPP_foldAtElse(const QsciLexerCPP* self) {
	return self->foldAtElse();
}

bool QsciLexerCPP_foldComments(const QsciLexerCPP* self) {
	return self->foldComments();
}

bool QsciLexerCPP_foldCompact(const QsciLexerCPP* self) {
	return self->foldCompact();
}

bool QsciLexerCPP_foldPreprocessor(const QsciLexerCPP* self) {
	return self->foldPreprocessor();
}

bool QsciLexerCPP_stylePreprocessor(const QsciLexerCPP* self) {
	return self->stylePreprocessor();
}

void QsciLexerCPP_setDollarsAllowed(QsciLexerCPP* self, bool allowed) {
	self->setDollarsAllowed(allowed);
}

bool QsciLexerCPP_dollarsAllowed(const QsciLexerCPP* self) {
	return self->dollarsAllowed();
}

void QsciLexerCPP_setHighlightTripleQuotedStrings(QsciLexerCPP* self, bool enabled) {
	self->setHighlightTripleQuotedStrings(enabled);
}

bool QsciLexerCPP_highlightTripleQuotedStrings(const QsciLexerCPP* self) {
	return self->highlightTripleQuotedStrings();
}

void QsciLexerCPP_setHighlightHashQuotedStrings(QsciLexerCPP* self, bool enabled) {
	self->setHighlightHashQuotedStrings(enabled);
}

bool QsciLexerCPP_highlightHashQuotedStrings(const QsciLexerCPP* self) {
	return self->highlightHashQuotedStrings();
}

void QsciLexerCPP_setHighlightBackQuotedStrings(QsciLexerCPP* self, bool enabled) {
	self->setHighlightBackQuotedStrings(enabled);
}

bool QsciLexerCPP_highlightBackQuotedStrings(const QsciLexerCPP* self) {
	return self->highlightBackQuotedStrings();
}

void QsciLexerCPP_setHighlightEscapeSequences(QsciLexerCPP* self, bool enabled) {
	self->setHighlightEscapeSequences(enabled);
}

bool QsciLexerCPP_highlightEscapeSequences(const QsciLexerCPP* self) {
	return self->highlightEscapeSequences();
}

void QsciLexerCPP_setVerbatimStringEscapeSequencesAllowed(QsciLexerCPP* self, bool allowed) {
	self->setVerbatimStringEscapeSequencesAllowed(allowed);
}

bool QsciLexerCPP_verbatimStringEscapeSequencesAllowed(const QsciLexerCPP* self) {
	return self->verbatimStringEscapeSequencesAllowed();
}

void QsciLexerCPP_setFoldAtElse(QsciLexerCPP* self, bool fold) {
	self->setFoldAtElse(fold);
}

void QsciLexerCPP_setFoldComments(QsciLexerCPP* self, bool fold) {
	self->setFoldComments(fold);
}

void QsciLexerCPP_setFoldCompact(QsciLexerCPP* self, bool fold) {
	self->setFoldCompact(fold);
}

void QsciLexerCPP_setFoldPreprocessor(QsciLexerCPP* self, bool fold) {
	self->setFoldPreprocessor(fold);
}

void QsciLexerCPP_setStylePreprocessor(QsciLexerCPP* self, bool style) {
	self->setStylePreprocessor(style);
}

struct miqt_string QsciLexerCPP_tr2(const char* s, const char* c) {
	QString _ret = QsciLexerCPP::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerCPP_tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerCPP::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerCPP_blockEndWithStyle(const QsciLexerCPP* self, int* style) {
	return (const char*) self->blockEnd(static_cast<int*>(style));
}

const char* QsciLexerCPP_blockStartWithStyle(const QsciLexerCPP* self, int* style) {
	return (const char*) self->blockStart(static_cast<int*>(style));
}

const char* QsciLexerCPP_blockStartKeywordWithStyle(const QsciLexerCPP* self, int* style) {
	return (const char*) self->blockStartKeyword(static_cast<int*>(style));
}

bool QsciLexerCPP_override_virtual_setFoldAtElse(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFoldAtElse = std::move(slot_handle);
	return true;
}

void QsciLexerCPP_virtualbase_setFoldAtElse(void* self, bool fold) {
	static_cast<MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::setFoldAtElse(fold);
}

bool QsciLexerCPP_override_virtual_setFoldComments(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFoldComments = std::move(slot_handle);
	return true;
}

void QsciLexerCPP_virtualbase_setFoldComments(void* self, bool fold) {
	static_cast<MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::setFoldComments(fold);
}

bool QsciLexerCPP_override_virtual_setFoldCompact(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFoldCompact = std::move(slot_handle);
	return true;
}

void QsciLexerCPP_virtualbase_setFoldCompact(void* self, bool fold) {
	static_cast<MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::setFoldCompact(fold);
}

bool QsciLexerCPP_override_virtual_setFoldPreprocessor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFoldPreprocessor = std::move(slot_handle);
	return true;
}

void QsciLexerCPP_virtualbase_setFoldPreprocessor(void* self, bool fold) {
	static_cast<MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::setFoldPreprocessor(fold);
}

bool QsciLexerCPP_override_virtual_setStylePreprocessor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setStylePreprocessor = std::move(slot_handle);
	return true;
}

void QsciLexerCPP_virtualbase_setStylePreprocessor(void* self, bool style) {
	static_cast<MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::setStylePreprocessor(style);
}

bool QsciLexerCPP_override_virtual_language(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__language = std::move(slot_handle);
	return true;
}

bool QsciLexerCPP_override_virtual_lexer(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__lexer = std::move(slot_handle);
	return true;
}

const char* QsciLexerCPP_virtualbase_lexer(const void* self) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::lexer();
}

bool QsciLexerCPP_override_virtual_lexerId(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__lexerId = std::move(slot_handle);
	return true;
}

int QsciLexerCPP_virtualbase_lexerId(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::lexerId();
}

bool QsciLexerCPP_override_virtual_autoCompletionFillups(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__autoCompletionFillups = std::move(slot_handle);
	return true;
}

const char* QsciLexerCPP_virtualbase_autoCompletionFillups(const void* self) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::autoCompletionFillups();
}

bool QsciLexerCPP_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__autoCompletionWordSeparators = std::move(slot_handle);
	return true;
}

struct miqt_array /* of struct miqt_string */  QsciLexerCPP_virtualbase_autoCompletionWordSeparators(const void* self) {
	QStringList _ret = static_cast<const MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::autoCompletionWordSeparators();
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

bool QsciLexerCPP_override_virtual_blockEnd(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockEnd = std::move(slot_handle);
	return true;
}

const char* QsciLexerCPP_virtualbase_blockEnd(const void* self, int* style) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::blockEnd(static_cast<int*>(style));
}

bool QsciLexerCPP_override_virtual_blockLookback(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockLookback = std::move(slot_handle);
	return true;
}

int QsciLexerCPP_virtualbase_blockLookback(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::blockLookback();
}

bool QsciLexerCPP_override_virtual_blockStart(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockStart = std::move(slot_handle);
	return true;
}

const char* QsciLexerCPP_virtualbase_blockStart(const void* self, int* style) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::blockStart(static_cast<int*>(style));
}

bool QsciLexerCPP_override_virtual_blockStartKeyword(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockStartKeyword = std::move(slot_handle);
	return true;
}

const char* QsciLexerCPP_virtualbase_blockStartKeyword(const void* self, int* style) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::blockStartKeyword(static_cast<int*>(style));
}

bool QsciLexerCPP_override_virtual_braceStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__braceStyle = std::move(slot_handle);
	return true;
}

int QsciLexerCPP_virtualbase_braceStyle(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::braceStyle();
}

bool QsciLexerCPP_override_virtual_caseSensitive(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__caseSensitive = std::move(slot_handle);
	return true;
}

bool QsciLexerCPP_virtualbase_caseSensitive(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::caseSensitive();
}

bool QsciLexerCPP_override_virtual_color(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__color = std::move(slot_handle);
	return true;
}

QColor* QsciLexerCPP_virtualbase_color(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::color(static_cast<int>(style)));
}

bool QsciLexerCPP_override_virtual_eolFill(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eolFill = std::move(slot_handle);
	return true;
}

bool QsciLexerCPP_virtualbase_eolFill(const void* self, int style) {
	return static_cast<const MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::eolFill(static_cast<int>(style));
}

bool QsciLexerCPP_override_virtual_font(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__font = std::move(slot_handle);
	return true;
}

QFont* QsciLexerCPP_virtualbase_font(const void* self, int style) {
	return new QFont(static_cast<const MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::font(static_cast<int>(style)));
}

bool QsciLexerCPP_override_virtual_indentationGuideView(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__indentationGuideView = std::move(slot_handle);
	return true;
}

int QsciLexerCPP_virtualbase_indentationGuideView(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::indentationGuideView();
}

bool QsciLexerCPP_override_virtual_keywords(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keywords = std::move(slot_handle);
	return true;
}

const char* QsciLexerCPP_virtualbase_keywords(const void* self, int set) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::keywords(static_cast<int>(set));
}

bool QsciLexerCPP_override_virtual_defaultStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultStyle = std::move(slot_handle);
	return true;
}

int QsciLexerCPP_virtualbase_defaultStyle(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::defaultStyle();
}

bool QsciLexerCPP_override_virtual_description(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__description = std::move(slot_handle);
	return true;
}

bool QsciLexerCPP_override_virtual_paper(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paper = std::move(slot_handle);
	return true;
}

QColor* QsciLexerCPP_virtualbase_paper(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::paper(static_cast<int>(style)));
}

bool QsciLexerCPP_override_virtual_defaultColorWithStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultColorWithStyle = std::move(slot_handle);
	return true;
}

QColor* QsciLexerCPP_virtualbase_defaultColorWithStyle(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::defaultColor(static_cast<int>(style)));
}

bool QsciLexerCPP_override_virtual_defaultEolFill(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultEolFill = std::move(slot_handle);
	return true;
}

bool QsciLexerCPP_virtualbase_defaultEolFill(const void* self, int style) {
	return static_cast<const MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::defaultEolFill(static_cast<int>(style));
}

bool QsciLexerCPP_override_virtual_defaultFontWithStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultFontWithStyle = std::move(slot_handle);
	return true;
}

QFont* QsciLexerCPP_virtualbase_defaultFontWithStyle(const void* self, int style) {
	return new QFont(static_cast<const MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::defaultFont(static_cast<int>(style)));
}

bool QsciLexerCPP_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultPaperWithStyle = std::move(slot_handle);
	return true;
}

QColor* QsciLexerCPP_virtualbase_defaultPaperWithStyle(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::defaultPaper(static_cast<int>(style)));
}

bool QsciLexerCPP_override_virtual_setEditor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setEditor = std::move(slot_handle);
	return true;
}

void QsciLexerCPP_virtualbase_setEditor(void* self, QsciScintilla* editor) {
	static_cast<MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::setEditor(editor);
}

bool QsciLexerCPP_override_virtual_refreshProperties(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__refreshProperties = std::move(slot_handle);
	return true;
}

void QsciLexerCPP_virtualbase_refreshProperties(void* self) {
	static_cast<MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::refreshProperties();
}

bool QsciLexerCPP_override_virtual_styleBitsNeeded(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__styleBitsNeeded = std::move(slot_handle);
	return true;
}

int QsciLexerCPP_virtualbase_styleBitsNeeded(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::styleBitsNeeded();
}

bool QsciLexerCPP_override_virtual_wordCharacters(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wordCharacters = std::move(slot_handle);
	return true;
}

const char* QsciLexerCPP_virtualbase_wordCharacters(const void* self) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::wordCharacters();
}

bool QsciLexerCPP_override_virtual_setAutoIndentStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setAutoIndentStyle = std::move(slot_handle);
	return true;
}

void QsciLexerCPP_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle) {
	static_cast<MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

bool QsciLexerCPP_override_virtual_setColor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setColor = std::move(slot_handle);
	return true;
}

void QsciLexerCPP_virtualbase_setColor(void* self, QColor* c, int style) {
	static_cast<MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::setColor(*c, static_cast<int>(style));
}

bool QsciLexerCPP_override_virtual_setEolFill(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setEolFill = std::move(slot_handle);
	return true;
}

void QsciLexerCPP_virtualbase_setEolFill(void* self, bool eoffill, int style) {
	static_cast<MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::setEolFill(eoffill, static_cast<int>(style));
}

bool QsciLexerCPP_override_virtual_setFont(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFont = std::move(slot_handle);
	return true;
}

void QsciLexerCPP_virtualbase_setFont(void* self, QFont* f, int style) {
	static_cast<MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::setFont(*f, static_cast<int>(style));
}

bool QsciLexerCPP_override_virtual_setPaper(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setPaper = std::move(slot_handle);
	return true;
}

void QsciLexerCPP_virtualbase_setPaper(void* self, QColor* c, int style) {
	static_cast<MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::setPaper(*c, static_cast<int>(style));
}

bool QsciLexerCPP_override_virtual_readProperties(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__readProperties = std::move(slot_handle);
	return true;
}

bool QsciLexerCPP_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return static_cast<MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::readProperties(*qs, prefix_QString);
}

bool QsciLexerCPP_override_virtual_writeProperties(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__writeProperties = std::move(slot_handle);
	return true;
}

bool QsciLexerCPP_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return static_cast<const MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::writeProperties(*qs, prefix_QString);
}

bool QsciLexerCPP_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QsciLexerCPP_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::event(event);
}

bool QsciLexerCPP_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QsciLexerCPP_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::eventFilter(watched, event);
}

bool QsciLexerCPP_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QsciLexerCPP_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::timerEvent(event);
}

bool QsciLexerCPP_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QsciLexerCPP_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::childEvent(event);
}

bool QsciLexerCPP_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QsciLexerCPP_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::customEvent(event);
}

bool QsciLexerCPP_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QsciLexerCPP_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::connectNotify(*signal);
}

bool QsciLexerCPP_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerCPP> slot_handle(slot);
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QsciLexerCPP_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQsciLexerCPP*>(self)->QsciLexerCPP::disconnectNotify(*signal);
}

bool QsciLexerCPP_protectedbase_readProperties(bool* _dynamic_cast_ok, void* self, QSettings* qs, struct miqt_string prefix) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return self_cast->readProperties(*qs, prefix_QString);
}

bool QsciLexerCPP_protectedbase_writeProperties(bool* _dynamic_cast_ok, const void* self, QSettings* qs, struct miqt_string prefix) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return self_cast->writeProperties(*qs, prefix_QString);
}

QObject* QsciLexerCPP_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QsciLexerCPP_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QsciLexerCPP_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QsciLexerCPP_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQsciLexerCPP* self_cast = dynamic_cast<MiqtVirtualQsciLexerCPP*>( (QsciLexerCPP*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QsciLexerCPP_delete(QsciLexerCPP* self) {
	delete self;
}

