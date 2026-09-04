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
#include <qscilexerpython.h>
#include "gen_qscilexerpython.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QsciLexerPython(intptr_t);
int miqt_exec_callback_QsciLexerPython_indentationGuideView(const QsciLexerPython*, intptr_t);
void miqt_exec_callback_QsciLexerPython_setFoldComments(QsciLexerPython*, intptr_t, bool);
void miqt_exec_callback_QsciLexerPython_setFoldQuotes(QsciLexerPython*, intptr_t, bool);
void miqt_exec_callback_QsciLexerPython_setIndentationWarning(QsciLexerPython*, intptr_t, int);
const char* miqt_exec_callback_QsciLexerPython_language(const QsciLexerPython*, intptr_t);
const char* miqt_exec_callback_QsciLexerPython_lexer(const QsciLexerPython*, intptr_t);
int miqt_exec_callback_QsciLexerPython_lexerId(const QsciLexerPython*, intptr_t);
const char* miqt_exec_callback_QsciLexerPython_autoCompletionFillups(const QsciLexerPython*, intptr_t);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QsciLexerPython_autoCompletionWordSeparators(const QsciLexerPython*, intptr_t);
const char* miqt_exec_callback_QsciLexerPython_blockEnd(const QsciLexerPython*, intptr_t, int*);
int miqt_exec_callback_QsciLexerPython_blockLookback(const QsciLexerPython*, intptr_t);
const char* miqt_exec_callback_QsciLexerPython_blockStart(const QsciLexerPython*, intptr_t, int*);
const char* miqt_exec_callback_QsciLexerPython_blockStartKeyword(const QsciLexerPython*, intptr_t, int*);
int miqt_exec_callback_QsciLexerPython_braceStyle(const QsciLexerPython*, intptr_t);
bool miqt_exec_callback_QsciLexerPython_caseSensitive(const QsciLexerPython*, intptr_t);
QColor* miqt_exec_callback_QsciLexerPython_color(const QsciLexerPython*, intptr_t, int);
bool miqt_exec_callback_QsciLexerPython_eolFill(const QsciLexerPython*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerPython_font(const QsciLexerPython*, intptr_t, int);
const char* miqt_exec_callback_QsciLexerPython_keywords(const QsciLexerPython*, intptr_t, int);
int miqt_exec_callback_QsciLexerPython_defaultStyle(const QsciLexerPython*, intptr_t);
struct miqt_string miqt_exec_callback_QsciLexerPython_description(const QsciLexerPython*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerPython_paper(const QsciLexerPython*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerPython_defaultColorWithStyle(const QsciLexerPython*, intptr_t, int);
bool miqt_exec_callback_QsciLexerPython_defaultEolFill(const QsciLexerPython*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerPython_defaultFontWithStyle(const QsciLexerPython*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerPython_defaultPaperWithStyle(const QsciLexerPython*, intptr_t, int);
void miqt_exec_callback_QsciLexerPython_setEditor(QsciLexerPython*, intptr_t, QsciScintilla*);
void miqt_exec_callback_QsciLexerPython_refreshProperties(QsciLexerPython*, intptr_t);
int miqt_exec_callback_QsciLexerPython_styleBitsNeeded(const QsciLexerPython*, intptr_t);
const char* miqt_exec_callback_QsciLexerPython_wordCharacters(const QsciLexerPython*, intptr_t);
void miqt_exec_callback_QsciLexerPython_setAutoIndentStyle(QsciLexerPython*, intptr_t, int);
void miqt_exec_callback_QsciLexerPython_setColor(QsciLexerPython*, intptr_t, QColor*, int);
void miqt_exec_callback_QsciLexerPython_setEolFill(QsciLexerPython*, intptr_t, bool, int);
void miqt_exec_callback_QsciLexerPython_setFont(QsciLexerPython*, intptr_t, QFont*, int);
void miqt_exec_callback_QsciLexerPython_setPaper(QsciLexerPython*, intptr_t, QColor*, int);
bool miqt_exec_callback_QsciLexerPython_readProperties(QsciLexerPython*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerPython_writeProperties(const QsciLexerPython*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerPython_event(QsciLexerPython*, intptr_t, QEvent*);
bool miqt_exec_callback_QsciLexerPython_eventFilter(QsciLexerPython*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QsciLexerPython_timerEvent(QsciLexerPython*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QsciLexerPython_childEvent(QsciLexerPython*, intptr_t, QChildEvent*);
void miqt_exec_callback_QsciLexerPython_customEvent(QsciLexerPython*, intptr_t, QEvent*);
void miqt_exec_callback_QsciLexerPython_connectNotify(QsciLexerPython*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QsciLexerPython_disconnectNotify(QsciLexerPython*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciLexerPython final : public QsciLexerPython {
public:

	MiqtVirtualQsciLexerPython(): QsciLexerPython() {}
	MiqtVirtualQsciLexerPython(QObject* parent): QsciLexerPython(parent) {}

	virtual ~MiqtVirtualQsciLexerPython() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__indentationGuideView;

	// Subclass to allow providing a Go implementation
	virtual int indentationGuideView() const override {
		if (!handle__indentationGuideView) {
			return QsciLexerPython::indentationGuideView();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerPython_indentationGuideView(this, handle__indentationGuideView.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerPython_virtualbase_indentationGuideView(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__setFoldComments;

	// Subclass to allow providing a Go implementation
	virtual void setFoldComments(bool fold) override {
		if (!handle__setFoldComments) {
			QsciLexerPython::setFoldComments(fold);
			return;
		}

		bool sigval1 = fold;
		miqt_exec_callback_QsciLexerPython_setFoldComments(this, handle__setFoldComments.value(), sigval1);

	}

	friend void QsciLexerPython_virtualbase_setFoldComments(void* self, bool fold);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__setFoldQuotes;

	// Subclass to allow providing a Go implementation
	virtual void setFoldQuotes(bool fold) override {
		if (!handle__setFoldQuotes) {
			QsciLexerPython::setFoldQuotes(fold);
			return;
		}

		bool sigval1 = fold;
		miqt_exec_callback_QsciLexerPython_setFoldQuotes(this, handle__setFoldQuotes.value(), sigval1);

	}

	friend void QsciLexerPython_virtualbase_setFoldQuotes(void* self, bool fold);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__setIndentationWarning;

	// Subclass to allow providing a Go implementation
	virtual void setIndentationWarning(QsciLexerPython::IndentationWarning warn) override {
		if (!handle__setIndentationWarning) {
			QsciLexerPython::setIndentationWarning(warn);
			return;
		}

		QsciLexerPython::IndentationWarning warn_ret = warn;
		int sigval1 = static_cast<int>(warn_ret);
		miqt_exec_callback_QsciLexerPython_setIndentationWarning(this, handle__setIndentationWarning.value(), sigval1);

	}

	friend void QsciLexerPython_virtualbase_setIndentationWarning(void* self, int warn);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__language;

	// Subclass to allow providing a Go implementation
	virtual const char* language() const override {
		if (!handle__language) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerPython_language(this, handle__language.value());
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__lexer;

	// Subclass to allow providing a Go implementation
	virtual const char* lexer() const override {
		if (!handle__lexer) {
			return QsciLexerPython::lexer();
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerPython_lexer(this, handle__lexer.value());
		return callback_return_value;
	}

	friend const char* QsciLexerPython_virtualbase_lexer(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__lexerId;

	// Subclass to allow providing a Go implementation
	virtual int lexerId() const override {
		if (!handle__lexerId) {
			return QsciLexerPython::lexerId();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerPython_lexerId(this, handle__lexerId.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerPython_virtualbase_lexerId(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__autoCompletionFillups;

	// Subclass to allow providing a Go implementation
	virtual const char* autoCompletionFillups() const override {
		if (!handle__autoCompletionFillups) {
			return QsciLexerPython::autoCompletionFillups();
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerPython_autoCompletionFillups(this, handle__autoCompletionFillups.value());
		return callback_return_value;
	}

	friend const char* QsciLexerPython_virtualbase_autoCompletionFillups(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__autoCompletionWordSeparators;

	// Subclass to allow providing a Go implementation
	virtual QStringList autoCompletionWordSeparators() const override {
		if (!handle__autoCompletionWordSeparators) {
			return QsciLexerPython::autoCompletionWordSeparators();
		}

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QsciLexerPython_autoCompletionWordSeparators(this, handle__autoCompletionWordSeparators.value());
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

	friend struct miqt_array /* of struct miqt_string */  QsciLexerPython_virtualbase_autoCompletionWordSeparators(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__blockEnd;

	// Subclass to allow providing a Go implementation
	virtual const char* blockEnd(int* style) const override {
		if (!handle__blockEnd) {
			return QsciLexerPython::blockEnd(style);
		}

		int* sigval1 = style;
		const char* callback_return_value = miqt_exec_callback_QsciLexerPython_blockEnd(this, handle__blockEnd.value(), sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerPython_virtualbase_blockEnd(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__blockLookback;

	// Subclass to allow providing a Go implementation
	virtual int blockLookback() const override {
		if (!handle__blockLookback) {
			return QsciLexerPython::blockLookback();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerPython_blockLookback(this, handle__blockLookback.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerPython_virtualbase_blockLookback(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__blockStart;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStart(int* style) const override {
		if (!handle__blockStart) {
			return QsciLexerPython::blockStart(style);
		}

		int* sigval1 = style;
		const char* callback_return_value = miqt_exec_callback_QsciLexerPython_blockStart(this, handle__blockStart.value(), sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerPython_virtualbase_blockStart(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__blockStartKeyword;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStartKeyword(int* style) const override {
		if (!handle__blockStartKeyword) {
			return QsciLexerPython::blockStartKeyword(style);
		}

		int* sigval1 = style;
		const char* callback_return_value = miqt_exec_callback_QsciLexerPython_blockStartKeyword(this, handle__blockStartKeyword.value(), sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerPython_virtualbase_blockStartKeyword(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__braceStyle;

	// Subclass to allow providing a Go implementation
	virtual int braceStyle() const override {
		if (!handle__braceStyle) {
			return QsciLexerPython::braceStyle();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerPython_braceStyle(this, handle__braceStyle.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerPython_virtualbase_braceStyle(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__caseSensitive;

	// Subclass to allow providing a Go implementation
	virtual bool caseSensitive() const override {
		if (!handle__caseSensitive) {
			return QsciLexerPython::caseSensitive();
		}

		bool callback_return_value = miqt_exec_callback_QsciLexerPython_caseSensitive(this, handle__caseSensitive.value());
		return callback_return_value;
	}

	friend bool QsciLexerPython_virtualbase_caseSensitive(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__color;
	bool owns_return__color = false;

	// Subclass to allow providing a Go implementation
	virtual QColor color(int style) const override {
		if (!handle__color) {
			return QsciLexerPython::color(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerPython_color(this, handle__color.value(), sigval1);
		std::unique_ptr<QColor> callback_return_value_owner;
		if (owns_return__color) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QColor* QsciLexerPython_virtualbase_color(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__eolFill;

	// Subclass to allow providing a Go implementation
	virtual bool eolFill(int style) const override {
		if (!handle__eolFill) {
			return QsciLexerPython::eolFill(style);
		}

		int sigval1 = style;
		bool callback_return_value = miqt_exec_callback_QsciLexerPython_eolFill(this, handle__eolFill.value(), sigval1);
		return callback_return_value;
	}

	friend bool QsciLexerPython_virtualbase_eolFill(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__font;
	bool owns_return__font = false;

	// Subclass to allow providing a Go implementation
	virtual QFont font(int style) const override {
		if (!handle__font) {
			return QsciLexerPython::font(style);
		}

		int sigval1 = style;
		QFont* callback_return_value = miqt_exec_callback_QsciLexerPython_font(this, handle__font.value(), sigval1);
		std::unique_ptr<QFont> callback_return_value_owner;
		if (owns_return__font) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QFont* QsciLexerPython_virtualbase_font(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__keywords;

	// Subclass to allow providing a Go implementation
	virtual const char* keywords(int set) const override {
		if (!handle__keywords) {
			return QsciLexerPython::keywords(set);
		}

		int sigval1 = set;
		const char* callback_return_value = miqt_exec_callback_QsciLexerPython_keywords(this, handle__keywords.value(), sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerPython_virtualbase_keywords(const void* self, int set);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__defaultStyle;

	// Subclass to allow providing a Go implementation
	virtual int defaultStyle() const override {
		if (!handle__defaultStyle) {
			return QsciLexerPython::defaultStyle();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerPython_defaultStyle(this, handle__defaultStyle.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerPython_virtualbase_defaultStyle(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__description;

	// Subclass to allow providing a Go implementation
	virtual QString description(int style) const override {
		if (!handle__description) {
			return QString(); // Pure virtual, there is no base we can call
		}

		int sigval1 = style;
		struct miqt_string callback_return_value = miqt_exec_callback_QsciLexerPython_description(this, handle__description.value(), sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		free(callback_return_value.data);
		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__paper;
	bool owns_return__paper = false;

	// Subclass to allow providing a Go implementation
	virtual QColor paper(int style) const override {
		if (!handle__paper) {
			return QsciLexerPython::paper(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerPython_paper(this, handle__paper.value(), sigval1);
		std::unique_ptr<QColor> callback_return_value_owner;
		if (owns_return__paper) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QColor* QsciLexerPython_virtualbase_paper(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__defaultColorWithStyle;
	bool owns_return__defaultColorWithStyle = false;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultColor(int style) const override {
		if (!handle__defaultColorWithStyle) {
			return QsciLexerPython::defaultColor(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerPython_defaultColorWithStyle(this, handle__defaultColorWithStyle.value(), sigval1);
		std::unique_ptr<QColor> callback_return_value_owner;
		if (owns_return__defaultColorWithStyle) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QColor* QsciLexerPython_virtualbase_defaultColorWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__defaultEolFill;

	// Subclass to allow providing a Go implementation
	virtual bool defaultEolFill(int style) const override {
		if (!handle__defaultEolFill) {
			return QsciLexerPython::defaultEolFill(style);
		}

		int sigval1 = style;
		bool callback_return_value = miqt_exec_callback_QsciLexerPython_defaultEolFill(this, handle__defaultEolFill.value(), sigval1);
		return callback_return_value;
	}

	friend bool QsciLexerPython_virtualbase_defaultEolFill(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__defaultFontWithStyle;
	bool owns_return__defaultFontWithStyle = false;

	// Subclass to allow providing a Go implementation
	virtual QFont defaultFont(int style) const override {
		if (!handle__defaultFontWithStyle) {
			return QsciLexerPython::defaultFont(style);
		}

		int sigval1 = style;
		QFont* callback_return_value = miqt_exec_callback_QsciLexerPython_defaultFontWithStyle(this, handle__defaultFontWithStyle.value(), sigval1);
		std::unique_ptr<QFont> callback_return_value_owner;
		if (owns_return__defaultFontWithStyle) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QFont* QsciLexerPython_virtualbase_defaultFontWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__defaultPaperWithStyle;
	bool owns_return__defaultPaperWithStyle = false;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultPaper(int style) const override {
		if (!handle__defaultPaperWithStyle) {
			return QsciLexerPython::defaultPaper(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerPython_defaultPaperWithStyle(this, handle__defaultPaperWithStyle.value(), sigval1);
		std::unique_ptr<QColor> callback_return_value_owner;
		if (owns_return__defaultPaperWithStyle) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QColor* QsciLexerPython_virtualbase_defaultPaperWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__setEditor;

	// Subclass to allow providing a Go implementation
	virtual void setEditor(QsciScintilla* editor) override {
		if (!handle__setEditor) {
			QsciLexerPython::setEditor(editor);
			return;
		}

		QsciScintilla* sigval1 = editor;
		miqt_exec_callback_QsciLexerPython_setEditor(this, handle__setEditor.value(), sigval1);

	}

	friend void QsciLexerPython_virtualbase_setEditor(void* self, QsciScintilla* editor);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__refreshProperties;

	// Subclass to allow providing a Go implementation
	virtual void refreshProperties() override {
		if (!handle__refreshProperties) {
			QsciLexerPython::refreshProperties();
			return;
		}

		miqt_exec_callback_QsciLexerPython_refreshProperties(this, handle__refreshProperties.value());

	}

	friend void QsciLexerPython_virtualbase_refreshProperties(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__styleBitsNeeded;

	// Subclass to allow providing a Go implementation
	virtual int styleBitsNeeded() const override {
		if (!handle__styleBitsNeeded) {
			return QsciLexerPython::styleBitsNeeded();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerPython_styleBitsNeeded(this, handle__styleBitsNeeded.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerPython_virtualbase_styleBitsNeeded(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__wordCharacters;

	// Subclass to allow providing a Go implementation
	virtual const char* wordCharacters() const override {
		if (!handle__wordCharacters) {
			return QsciLexerPython::wordCharacters();
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerPython_wordCharacters(this, handle__wordCharacters.value());
		return callback_return_value;
	}

	friend const char* QsciLexerPython_virtualbase_wordCharacters(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__setAutoIndentStyle;

	// Subclass to allow providing a Go implementation
	virtual void setAutoIndentStyle(int autoindentstyle) override {
		if (!handle__setAutoIndentStyle) {
			QsciLexerPython::setAutoIndentStyle(autoindentstyle);
			return;
		}

		int sigval1 = autoindentstyle;
		miqt_exec_callback_QsciLexerPython_setAutoIndentStyle(this, handle__setAutoIndentStyle.value(), sigval1);

	}

	friend void QsciLexerPython_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__setColor;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& c, int style) override {
		if (!handle__setColor) {
			QsciLexerPython::setColor(c, style);
			return;
		}

		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexerPython_setColor(this, handle__setColor.value(), sigval1, sigval2);

	}

	friend void QsciLexerPython_virtualbase_setColor(void* self, QColor* c, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__setEolFill;

	// Subclass to allow providing a Go implementation
	virtual void setEolFill(bool eoffill, int style) override {
		if (!handle__setEolFill) {
			QsciLexerPython::setEolFill(eoffill, style);
			return;
		}

		bool sigval1 = eoffill;
		int sigval2 = style;
		miqt_exec_callback_QsciLexerPython_setEolFill(this, handle__setEolFill.value(), sigval1, sigval2);

	}

	friend void QsciLexerPython_virtualbase_setEolFill(void* self, bool eoffill, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__setFont;

	// Subclass to allow providing a Go implementation
	virtual void setFont(const QFont& f, int style) override {
		if (!handle__setFont) {
			QsciLexerPython::setFont(f, style);
			return;
		}

		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexerPython_setFont(this, handle__setFont.value(), sigval1, sigval2);

	}

	friend void QsciLexerPython_virtualbase_setFont(void* self, QFont* f, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__setPaper;

	// Subclass to allow providing a Go implementation
	virtual void setPaper(const QColor& c, int style) override {
		if (!handle__setPaper) {
			QsciLexerPython::setPaper(c, style);
			return;
		}

		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexerPython_setPaper(this, handle__setPaper.value(), sigval1, sigval2);

	}

	friend void QsciLexerPython_virtualbase_setPaper(void* self, QColor* c, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__readProperties;

	// Subclass to allow providing a Go implementation
	virtual bool readProperties(QSettings& qs, const QString& prefix) override {
		if (!handle__readProperties) {
			return QsciLexerPython::readProperties(qs, prefix);
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
		bool callback_return_value = miqt_exec_callback_QsciLexerPython_readProperties(this, handle__readProperties.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QsciLexerPython_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__writeProperties;

	// Subclass to allow providing a Go implementation
	virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
		if (!handle__writeProperties) {
			return QsciLexerPython::writeProperties(qs, prefix);
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
		bool callback_return_value = miqt_exec_callback_QsciLexerPython_writeProperties(this, handle__writeProperties.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QsciLexerPython_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QsciLexerPython::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QsciLexerPython_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QsciLexerPython_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QsciLexerPython::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QsciLexerPython_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QsciLexerPython_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QsciLexerPython::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QsciLexerPython_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QsciLexerPython_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QsciLexerPython::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QsciLexerPython_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QsciLexerPython_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QsciLexerPython::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QsciLexerPython_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QsciLexerPython_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QsciLexerPython::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QsciLexerPython_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QsciLexerPython_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QsciLexerPython::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QsciLexerPython_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QsciLexerPython_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend bool QsciLexerPython_protectedbase_readProperties(bool* _dynamic_cast_ok, void* self, QSettings* qs, struct miqt_string prefix);
	friend bool QsciLexerPython_protectedbase_writeProperties(bool* _dynamic_cast_ok, const void* self, QSettings* qs, struct miqt_string prefix);
	friend QObject* QsciLexerPython_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QsciLexerPython_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QsciLexerPython_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QsciLexerPython_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QsciLexerPython* QsciLexerPython_new() {
	return new (std::nothrow) MiqtVirtualQsciLexerPython();
}

QsciLexerPython* QsciLexerPython_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQsciLexerPython(parent);
}

void QsciLexerPython_virtbase(QsciLexerPython* src, QsciLexer** outptr_QsciLexer) {
	*outptr_QsciLexer = static_cast<QsciLexer*>(src);
}

QMetaObject* QsciLexerPython_metaObject(const QsciLexerPython* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerPython_metacast(QsciLexerPython* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerPython_tr(const char* s) {
	QString _ret = QsciLexerPython::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerPython_trUtf8(const char* s) {
	QString _ret = QsciLexerPython::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerPython_language(const QsciLexerPython* self) {
	return (const char*) self->language();
}

const char* QsciLexerPython_lexer(const QsciLexerPython* self) {
	return (const char*) self->lexer();
}

struct miqt_array /* of struct miqt_string */  QsciLexerPython_autoCompletionWordSeparators(const QsciLexerPython* self) {
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

int QsciLexerPython_blockLookback(const QsciLexerPython* self) {
	return self->blockLookback();
}

const char* QsciLexerPython_blockStart(const QsciLexerPython* self) {
	return (const char*) self->blockStart();
}

int QsciLexerPython_braceStyle(const QsciLexerPython* self) {
	return self->braceStyle();
}

QColor* QsciLexerPython_defaultColor(const QsciLexerPython* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerPython_defaultEolFill(const QsciLexerPython* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerPython_defaultFont(const QsciLexerPython* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerPython_defaultPaper(const QsciLexerPython* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

int QsciLexerPython_indentationGuideView(const QsciLexerPython* self) {
	return self->indentationGuideView();
}

const char* QsciLexerPython_keywords(const QsciLexerPython* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerPython_description(const QsciLexerPython* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerPython_refreshProperties(QsciLexerPython* self) {
	self->refreshProperties();
}

bool QsciLexerPython_foldComments(const QsciLexerPython* self) {
	return self->foldComments();
}

void QsciLexerPython_setFoldCompact(QsciLexerPython* self, bool fold) {
	self->setFoldCompact(fold);
}

bool QsciLexerPython_foldCompact(const QsciLexerPython* self) {
	return self->foldCompact();
}

bool QsciLexerPython_foldQuotes(const QsciLexerPython* self) {
	return self->foldQuotes();
}

int QsciLexerPython_indentationWarning(const QsciLexerPython* self) {
	QsciLexerPython::IndentationWarning _ret = self->indentationWarning();
	return static_cast<int>(_ret);
}

void QsciLexerPython_setHighlightSubidentifiers(QsciLexerPython* self, bool enabled) {
	self->setHighlightSubidentifiers(enabled);
}

bool QsciLexerPython_highlightSubidentifiers(const QsciLexerPython* self) {
	return self->highlightSubidentifiers();
}

void QsciLexerPython_setStringsOverNewlineAllowed(QsciLexerPython* self, bool allowed) {
	self->setStringsOverNewlineAllowed(allowed);
}

bool QsciLexerPython_stringsOverNewlineAllowed(const QsciLexerPython* self) {
	return self->stringsOverNewlineAllowed();
}

void QsciLexerPython_setV2UnicodeAllowed(QsciLexerPython* self, bool allowed) {
	self->setV2UnicodeAllowed(allowed);
}

bool QsciLexerPython_v2UnicodeAllowed(const QsciLexerPython* self) {
	return self->v2UnicodeAllowed();
}

void QsciLexerPython_setV3BinaryOctalAllowed(QsciLexerPython* self, bool allowed) {
	self->setV3BinaryOctalAllowed(allowed);
}

bool QsciLexerPython_v3BinaryOctalAllowed(const QsciLexerPython* self) {
	return self->v3BinaryOctalAllowed();
}

void QsciLexerPython_setV3BytesAllowed(QsciLexerPython* self, bool allowed) {
	self->setV3BytesAllowed(allowed);
}

bool QsciLexerPython_v3BytesAllowed(const QsciLexerPython* self) {
	return self->v3BytesAllowed();
}

void QsciLexerPython_setFoldComments(QsciLexerPython* self, bool fold) {
	self->setFoldComments(fold);
}

void QsciLexerPython_setFoldQuotes(QsciLexerPython* self, bool fold) {
	self->setFoldQuotes(fold);
}

void QsciLexerPython_setIndentationWarning(QsciLexerPython* self, int warn) {
	self->setIndentationWarning(static_cast<QsciLexerPython::IndentationWarning>(warn));
}

struct miqt_string QsciLexerPython_tr2(const char* s, const char* c) {
	QString _ret = QsciLexerPython::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerPython_tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerPython::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerPython_trUtf82(const char* s, const char* c) {
	QString _ret = QsciLexerPython::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerPython_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QsciLexerPython::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerPython_blockStartWithStyle(const QsciLexerPython* self, int* style) {
	return (const char*) self->blockStart(static_cast<int*>(style));
}

bool QsciLexerPython_override_virtual_indentationGuideView(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__indentationGuideView = std::move(slot_handle);
	return true;
}

int QsciLexerPython_virtualbase_indentationGuideView(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerPython*>(self)->QsciLexerPython::indentationGuideView();
}

bool QsciLexerPython_override_virtual_setFoldComments(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFoldComments = std::move(slot_handle);
	return true;
}

void QsciLexerPython_virtualbase_setFoldComments(void* self, bool fold) {
	static_cast<MiqtVirtualQsciLexerPython*>(self)->QsciLexerPython::setFoldComments(fold);
}

bool QsciLexerPython_override_virtual_setFoldQuotes(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFoldQuotes = std::move(slot_handle);
	return true;
}

void QsciLexerPython_virtualbase_setFoldQuotes(void* self, bool fold) {
	static_cast<MiqtVirtualQsciLexerPython*>(self)->QsciLexerPython::setFoldQuotes(fold);
}

bool QsciLexerPython_override_virtual_setIndentationWarning(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setIndentationWarning = std::move(slot_handle);
	return true;
}

void QsciLexerPython_virtualbase_setIndentationWarning(void* self, int warn) {
	static_cast<MiqtVirtualQsciLexerPython*>(self)->QsciLexerPython::setIndentationWarning(static_cast<MiqtVirtualQsciLexerPython::IndentationWarning>(warn));
}

bool QsciLexerPython_override_virtual_language(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__language = std::move(slot_handle);
	return true;
}

bool QsciLexerPython_override_virtual_lexer(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__lexer = std::move(slot_handle);
	return true;
}

const char* QsciLexerPython_virtualbase_lexer(const void* self) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerPython*>(self)->QsciLexerPython::lexer();
}

bool QsciLexerPython_override_virtual_lexerId(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__lexerId = std::move(slot_handle);
	return true;
}

int QsciLexerPython_virtualbase_lexerId(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerPython*>(self)->QsciLexerPython::lexerId();
}

bool QsciLexerPython_override_virtual_autoCompletionFillups(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__autoCompletionFillups = std::move(slot_handle);
	return true;
}

const char* QsciLexerPython_virtualbase_autoCompletionFillups(const void* self) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerPython*>(self)->QsciLexerPython::autoCompletionFillups();
}

bool QsciLexerPython_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__autoCompletionWordSeparators = std::move(slot_handle);
	return true;
}

struct miqt_array /* of struct miqt_string */  QsciLexerPython_virtualbase_autoCompletionWordSeparators(const void* self) {
	QStringList _ret = static_cast<const MiqtVirtualQsciLexerPython*>(self)->QsciLexerPython::autoCompletionWordSeparators();
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

bool QsciLexerPython_override_virtual_blockEnd(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockEnd = std::move(slot_handle);
	return true;
}

const char* QsciLexerPython_virtualbase_blockEnd(const void* self, int* style) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerPython*>(self)->QsciLexerPython::blockEnd(static_cast<int*>(style));
}

bool QsciLexerPython_override_virtual_blockLookback(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockLookback = std::move(slot_handle);
	return true;
}

int QsciLexerPython_virtualbase_blockLookback(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerPython*>(self)->QsciLexerPython::blockLookback();
}

bool QsciLexerPython_override_virtual_blockStart(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockStart = std::move(slot_handle);
	return true;
}

const char* QsciLexerPython_virtualbase_blockStart(const void* self, int* style) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerPython*>(self)->QsciLexerPython::blockStart(static_cast<int*>(style));
}

bool QsciLexerPython_override_virtual_blockStartKeyword(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockStartKeyword = std::move(slot_handle);
	return true;
}

const char* QsciLexerPython_virtualbase_blockStartKeyword(const void* self, int* style) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerPython*>(self)->QsciLexerPython::blockStartKeyword(static_cast<int*>(style));
}

bool QsciLexerPython_override_virtual_braceStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__braceStyle = std::move(slot_handle);
	return true;
}

int QsciLexerPython_virtualbase_braceStyle(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerPython*>(self)->QsciLexerPython::braceStyle();
}

bool QsciLexerPython_override_virtual_caseSensitive(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__caseSensitive = std::move(slot_handle);
	return true;
}

bool QsciLexerPython_virtualbase_caseSensitive(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerPython*>(self)->QsciLexerPython::caseSensitive();
}

bool QsciLexerPython_override_virtual_color(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__color = std::move(slot_handle);
	self_cast->owns_return__color = false;
	return true;
}

bool QsciLexerPython_override_virtual_owned_color(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__color = std::move(slot_handle);
	self_cast->owns_return__color = true;
	return true;
}

QColor* QsciLexerPython_virtualbase_color(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerPython*>(self)->QsciLexerPython::color(static_cast<int>(style)));
}

bool QsciLexerPython_override_virtual_eolFill(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eolFill = std::move(slot_handle);
	return true;
}

bool QsciLexerPython_virtualbase_eolFill(const void* self, int style) {
	return static_cast<const MiqtVirtualQsciLexerPython*>(self)->QsciLexerPython::eolFill(static_cast<int>(style));
}

bool QsciLexerPython_override_virtual_font(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__font = std::move(slot_handle);
	self_cast->owns_return__font = false;
	return true;
}

bool QsciLexerPython_override_virtual_owned_font(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__font = std::move(slot_handle);
	self_cast->owns_return__font = true;
	return true;
}

QFont* QsciLexerPython_virtualbase_font(const void* self, int style) {
	return new QFont(static_cast<const MiqtVirtualQsciLexerPython*>(self)->QsciLexerPython::font(static_cast<int>(style)));
}

bool QsciLexerPython_override_virtual_keywords(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keywords = std::move(slot_handle);
	return true;
}

const char* QsciLexerPython_virtualbase_keywords(const void* self, int set) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerPython*>(self)->QsciLexerPython::keywords(static_cast<int>(set));
}

bool QsciLexerPython_override_virtual_defaultStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultStyle = std::move(slot_handle);
	return true;
}

int QsciLexerPython_virtualbase_defaultStyle(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerPython*>(self)->QsciLexerPython::defaultStyle();
}

bool QsciLexerPython_override_virtual_description(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__description = std::move(slot_handle);
	return true;
}

bool QsciLexerPython_override_virtual_paper(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paper = std::move(slot_handle);
	self_cast->owns_return__paper = false;
	return true;
}

bool QsciLexerPython_override_virtual_owned_paper(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paper = std::move(slot_handle);
	self_cast->owns_return__paper = true;
	return true;
}

QColor* QsciLexerPython_virtualbase_paper(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerPython*>(self)->QsciLexerPython::paper(static_cast<int>(style)));
}

bool QsciLexerPython_override_virtual_defaultColorWithStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultColorWithStyle = std::move(slot_handle);
	self_cast->owns_return__defaultColorWithStyle = false;
	return true;
}

bool QsciLexerPython_override_virtual_owned_defaultColorWithStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultColorWithStyle = std::move(slot_handle);
	self_cast->owns_return__defaultColorWithStyle = true;
	return true;
}

QColor* QsciLexerPython_virtualbase_defaultColorWithStyle(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerPython*>(self)->QsciLexerPython::defaultColor(static_cast<int>(style)));
}

bool QsciLexerPython_override_virtual_defaultEolFill(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultEolFill = std::move(slot_handle);
	return true;
}

bool QsciLexerPython_virtualbase_defaultEolFill(const void* self, int style) {
	return static_cast<const MiqtVirtualQsciLexerPython*>(self)->QsciLexerPython::defaultEolFill(static_cast<int>(style));
}

bool QsciLexerPython_override_virtual_defaultFontWithStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultFontWithStyle = std::move(slot_handle);
	self_cast->owns_return__defaultFontWithStyle = false;
	return true;
}

bool QsciLexerPython_override_virtual_owned_defaultFontWithStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultFontWithStyle = std::move(slot_handle);
	self_cast->owns_return__defaultFontWithStyle = true;
	return true;
}

QFont* QsciLexerPython_virtualbase_defaultFontWithStyle(const void* self, int style) {
	return new QFont(static_cast<const MiqtVirtualQsciLexerPython*>(self)->QsciLexerPython::defaultFont(static_cast<int>(style)));
}

bool QsciLexerPython_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultPaperWithStyle = std::move(slot_handle);
	self_cast->owns_return__defaultPaperWithStyle = false;
	return true;
}

bool QsciLexerPython_override_virtual_owned_defaultPaperWithStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultPaperWithStyle = std::move(slot_handle);
	self_cast->owns_return__defaultPaperWithStyle = true;
	return true;
}

QColor* QsciLexerPython_virtualbase_defaultPaperWithStyle(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerPython*>(self)->QsciLexerPython::defaultPaper(static_cast<int>(style)));
}

bool QsciLexerPython_override_virtual_setEditor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setEditor = std::move(slot_handle);
	return true;
}

void QsciLexerPython_virtualbase_setEditor(void* self, QsciScintilla* editor) {
	static_cast<MiqtVirtualQsciLexerPython*>(self)->QsciLexerPython::setEditor(editor);
}

bool QsciLexerPython_override_virtual_refreshProperties(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__refreshProperties = std::move(slot_handle);
	return true;
}

void QsciLexerPython_virtualbase_refreshProperties(void* self) {
	static_cast<MiqtVirtualQsciLexerPython*>(self)->QsciLexerPython::refreshProperties();
}

bool QsciLexerPython_override_virtual_styleBitsNeeded(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__styleBitsNeeded = std::move(slot_handle);
	return true;
}

int QsciLexerPython_virtualbase_styleBitsNeeded(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerPython*>(self)->QsciLexerPython::styleBitsNeeded();
}

bool QsciLexerPython_override_virtual_wordCharacters(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wordCharacters = std::move(slot_handle);
	return true;
}

const char* QsciLexerPython_virtualbase_wordCharacters(const void* self) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerPython*>(self)->QsciLexerPython::wordCharacters();
}

bool QsciLexerPython_override_virtual_setAutoIndentStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setAutoIndentStyle = std::move(slot_handle);
	return true;
}

void QsciLexerPython_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle) {
	static_cast<MiqtVirtualQsciLexerPython*>(self)->QsciLexerPython::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

bool QsciLexerPython_override_virtual_setColor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setColor = std::move(slot_handle);
	return true;
}

void QsciLexerPython_virtualbase_setColor(void* self, QColor* c, int style) {
	static_cast<MiqtVirtualQsciLexerPython*>(self)->QsciLexerPython::setColor(*c, static_cast<int>(style));
}

bool QsciLexerPython_override_virtual_setEolFill(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setEolFill = std::move(slot_handle);
	return true;
}

void QsciLexerPython_virtualbase_setEolFill(void* self, bool eoffill, int style) {
	static_cast<MiqtVirtualQsciLexerPython*>(self)->QsciLexerPython::setEolFill(eoffill, static_cast<int>(style));
}

bool QsciLexerPython_override_virtual_setFont(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFont = std::move(slot_handle);
	return true;
}

void QsciLexerPython_virtualbase_setFont(void* self, QFont* f, int style) {
	static_cast<MiqtVirtualQsciLexerPython*>(self)->QsciLexerPython::setFont(*f, static_cast<int>(style));
}

bool QsciLexerPython_override_virtual_setPaper(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setPaper = std::move(slot_handle);
	return true;
}

void QsciLexerPython_virtualbase_setPaper(void* self, QColor* c, int style) {
	static_cast<MiqtVirtualQsciLexerPython*>(self)->QsciLexerPython::setPaper(*c, static_cast<int>(style));
}

bool QsciLexerPython_override_virtual_readProperties(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__readProperties = std::move(slot_handle);
	return true;
}

bool QsciLexerPython_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return static_cast<MiqtVirtualQsciLexerPython*>(self)->QsciLexerPython::readProperties(*qs, prefix_QString);
}

bool QsciLexerPython_override_virtual_writeProperties(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__writeProperties = std::move(slot_handle);
	return true;
}

bool QsciLexerPython_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return static_cast<const MiqtVirtualQsciLexerPython*>(self)->QsciLexerPython::writeProperties(*qs, prefix_QString);
}

bool QsciLexerPython_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QsciLexerPython_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQsciLexerPython*>(self)->QsciLexerPython::event(event);
}

bool QsciLexerPython_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QsciLexerPython_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQsciLexerPython*>(self)->QsciLexerPython::eventFilter(watched, event);
}

bool QsciLexerPython_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QsciLexerPython_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQsciLexerPython*>(self)->QsciLexerPython::timerEvent(event);
}

bool QsciLexerPython_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QsciLexerPython_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQsciLexerPython*>(self)->QsciLexerPython::childEvent(event);
}

bool QsciLexerPython_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QsciLexerPython_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQsciLexerPython*>(self)->QsciLexerPython::customEvent(event);
}

bool QsciLexerPython_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QsciLexerPython_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQsciLexerPython*>(self)->QsciLexerPython::connectNotify(*signal);
}

bool QsciLexerPython_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerPython> slot_handle(slot);
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QsciLexerPython_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQsciLexerPython*>(self)->QsciLexerPython::disconnectNotify(*signal);
}

bool QsciLexerPython_protectedbase_readProperties(bool* _dynamic_cast_ok, void* self, QSettings* qs, struct miqt_string prefix) {
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return self_cast->readProperties(*qs, prefix_QString);
}

bool QsciLexerPython_protectedbase_writeProperties(bool* _dynamic_cast_ok, const void* self, QSettings* qs, struct miqt_string prefix) {
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return self_cast->writeProperties(*qs, prefix_QString);
}

QObject* QsciLexerPython_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QsciLexerPython_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QsciLexerPython_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QsciLexerPython_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQsciLexerPython* self_cast = dynamic_cast<MiqtVirtualQsciLexerPython*>( (QsciLexerPython*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QsciLexerPython_delete(QsciLexerPython* self) {
	delete self;
}

