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
#include <qscilexerhtml.h>
#include "gen_qscilexerhtml.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QsciLexerHTML(intptr_t);
void miqt_exec_callback_QsciLexerHTML_setFoldCompact(QsciLexerHTML*, intptr_t, bool);
void miqt_exec_callback_QsciLexerHTML_setFoldPreprocessor(QsciLexerHTML*, intptr_t, bool);
void miqt_exec_callback_QsciLexerHTML_setCaseSensitiveTags(QsciLexerHTML*, intptr_t, bool);
const char* miqt_exec_callback_QsciLexerHTML_language(const QsciLexerHTML*, intptr_t);
const char* miqt_exec_callback_QsciLexerHTML_lexer(const QsciLexerHTML*, intptr_t);
int miqt_exec_callback_QsciLexerHTML_lexerId(const QsciLexerHTML*, intptr_t);
const char* miqt_exec_callback_QsciLexerHTML_autoCompletionFillups(const QsciLexerHTML*, intptr_t);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QsciLexerHTML_autoCompletionWordSeparators(const QsciLexerHTML*, intptr_t);
const char* miqt_exec_callback_QsciLexerHTML_blockEnd(const QsciLexerHTML*, intptr_t, int*);
int miqt_exec_callback_QsciLexerHTML_blockLookback(const QsciLexerHTML*, intptr_t);
const char* miqt_exec_callback_QsciLexerHTML_blockStart(const QsciLexerHTML*, intptr_t, int*);
const char* miqt_exec_callback_QsciLexerHTML_blockStartKeyword(const QsciLexerHTML*, intptr_t, int*);
int miqt_exec_callback_QsciLexerHTML_braceStyle(const QsciLexerHTML*, intptr_t);
bool miqt_exec_callback_QsciLexerHTML_caseSensitive(const QsciLexerHTML*, intptr_t);
QColor* miqt_exec_callback_QsciLexerHTML_color(const QsciLexerHTML*, intptr_t, int);
bool miqt_exec_callback_QsciLexerHTML_eolFill(const QsciLexerHTML*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerHTML_font(const QsciLexerHTML*, intptr_t, int);
int miqt_exec_callback_QsciLexerHTML_indentationGuideView(const QsciLexerHTML*, intptr_t);
const char* miqt_exec_callback_QsciLexerHTML_keywords(const QsciLexerHTML*, intptr_t, int);
int miqt_exec_callback_QsciLexerHTML_defaultStyle(const QsciLexerHTML*, intptr_t);
struct miqt_string miqt_exec_callback_QsciLexerHTML_description(const QsciLexerHTML*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerHTML_paper(const QsciLexerHTML*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerHTML_defaultColorWithStyle(const QsciLexerHTML*, intptr_t, int);
bool miqt_exec_callback_QsciLexerHTML_defaultEolFill(const QsciLexerHTML*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerHTML_defaultFontWithStyle(const QsciLexerHTML*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerHTML_defaultPaperWithStyle(const QsciLexerHTML*, intptr_t, int);
void miqt_exec_callback_QsciLexerHTML_setEditor(QsciLexerHTML*, intptr_t, QsciScintilla*);
void miqt_exec_callback_QsciLexerHTML_refreshProperties(QsciLexerHTML*, intptr_t);
int miqt_exec_callback_QsciLexerHTML_styleBitsNeeded(const QsciLexerHTML*, intptr_t);
const char* miqt_exec_callback_QsciLexerHTML_wordCharacters(const QsciLexerHTML*, intptr_t);
void miqt_exec_callback_QsciLexerHTML_setAutoIndentStyle(QsciLexerHTML*, intptr_t, int);
void miqt_exec_callback_QsciLexerHTML_setColor(QsciLexerHTML*, intptr_t, QColor*, int);
void miqt_exec_callback_QsciLexerHTML_setEolFill(QsciLexerHTML*, intptr_t, bool, int);
void miqt_exec_callback_QsciLexerHTML_setFont(QsciLexerHTML*, intptr_t, QFont*, int);
void miqt_exec_callback_QsciLexerHTML_setPaper(QsciLexerHTML*, intptr_t, QColor*, int);
bool miqt_exec_callback_QsciLexerHTML_readProperties(QsciLexerHTML*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerHTML_writeProperties(const QsciLexerHTML*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerHTML_event(QsciLexerHTML*, intptr_t, QEvent*);
bool miqt_exec_callback_QsciLexerHTML_eventFilter(QsciLexerHTML*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QsciLexerHTML_timerEvent(QsciLexerHTML*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QsciLexerHTML_childEvent(QsciLexerHTML*, intptr_t, QChildEvent*);
void miqt_exec_callback_QsciLexerHTML_customEvent(QsciLexerHTML*, intptr_t, QEvent*);
void miqt_exec_callback_QsciLexerHTML_connectNotify(QsciLexerHTML*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QsciLexerHTML_disconnectNotify(QsciLexerHTML*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciLexerHTML final : public QsciLexerHTML {
public:

	MiqtVirtualQsciLexerHTML(): QsciLexerHTML() {}
	MiqtVirtualQsciLexerHTML(QObject* parent): QsciLexerHTML(parent) {}

	virtual ~MiqtVirtualQsciLexerHTML() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__setFoldCompact;

	// Subclass to allow providing a Go implementation
	virtual void setFoldCompact(bool fold) override {
		if (!handle__setFoldCompact) {
			QsciLexerHTML::setFoldCompact(fold);
			return;
		}

		bool sigval1 = fold;
		miqt_exec_callback_QsciLexerHTML_setFoldCompact(this, handle__setFoldCompact.value(), sigval1);

	}

	friend void QsciLexerHTML_virtualbase_setFoldCompact(void* self, bool fold);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__setFoldPreprocessor;

	// Subclass to allow providing a Go implementation
	virtual void setFoldPreprocessor(bool fold) override {
		if (!handle__setFoldPreprocessor) {
			QsciLexerHTML::setFoldPreprocessor(fold);
			return;
		}

		bool sigval1 = fold;
		miqt_exec_callback_QsciLexerHTML_setFoldPreprocessor(this, handle__setFoldPreprocessor.value(), sigval1);

	}

	friend void QsciLexerHTML_virtualbase_setFoldPreprocessor(void* self, bool fold);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__setCaseSensitiveTags;

	// Subclass to allow providing a Go implementation
	virtual void setCaseSensitiveTags(bool sens) override {
		if (!handle__setCaseSensitiveTags) {
			QsciLexerHTML::setCaseSensitiveTags(sens);
			return;
		}

		bool sigval1 = sens;
		miqt_exec_callback_QsciLexerHTML_setCaseSensitiveTags(this, handle__setCaseSensitiveTags.value(), sigval1);

	}

	friend void QsciLexerHTML_virtualbase_setCaseSensitiveTags(void* self, bool sens);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__language;

	// Subclass to allow providing a Go implementation
	virtual const char* language() const override {
		if (!handle__language) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerHTML_language(this, handle__language.value());
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__lexer;

	// Subclass to allow providing a Go implementation
	virtual const char* lexer() const override {
		if (!handle__lexer) {
			return QsciLexerHTML::lexer();
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerHTML_lexer(this, handle__lexer.value());
		return callback_return_value;
	}

	friend const char* QsciLexerHTML_virtualbase_lexer(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__lexerId;

	// Subclass to allow providing a Go implementation
	virtual int lexerId() const override {
		if (!handle__lexerId) {
			return QsciLexerHTML::lexerId();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerHTML_lexerId(this, handle__lexerId.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerHTML_virtualbase_lexerId(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__autoCompletionFillups;

	// Subclass to allow providing a Go implementation
	virtual const char* autoCompletionFillups() const override {
		if (!handle__autoCompletionFillups) {
			return QsciLexerHTML::autoCompletionFillups();
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerHTML_autoCompletionFillups(this, handle__autoCompletionFillups.value());
		return callback_return_value;
	}

	friend const char* QsciLexerHTML_virtualbase_autoCompletionFillups(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__autoCompletionWordSeparators;

	// Subclass to allow providing a Go implementation
	virtual QStringList autoCompletionWordSeparators() const override {
		if (!handle__autoCompletionWordSeparators) {
			return QsciLexerHTML::autoCompletionWordSeparators();
		}

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QsciLexerHTML_autoCompletionWordSeparators(this, handle__autoCompletionWordSeparators.value());
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

	friend struct miqt_array /* of struct miqt_string */  QsciLexerHTML_virtualbase_autoCompletionWordSeparators(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__blockEnd;

	// Subclass to allow providing a Go implementation
	virtual const char* blockEnd(int* style) const override {
		if (!handle__blockEnd) {
			return QsciLexerHTML::blockEnd(style);
		}

		int* sigval1 = style;
		const char* callback_return_value = miqt_exec_callback_QsciLexerHTML_blockEnd(this, handle__blockEnd.value(), sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerHTML_virtualbase_blockEnd(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__blockLookback;

	// Subclass to allow providing a Go implementation
	virtual int blockLookback() const override {
		if (!handle__blockLookback) {
			return QsciLexerHTML::blockLookback();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerHTML_blockLookback(this, handle__blockLookback.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerHTML_virtualbase_blockLookback(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__blockStart;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStart(int* style) const override {
		if (!handle__blockStart) {
			return QsciLexerHTML::blockStart(style);
		}

		int* sigval1 = style;
		const char* callback_return_value = miqt_exec_callback_QsciLexerHTML_blockStart(this, handle__blockStart.value(), sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerHTML_virtualbase_blockStart(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__blockStartKeyword;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStartKeyword(int* style) const override {
		if (!handle__blockStartKeyword) {
			return QsciLexerHTML::blockStartKeyword(style);
		}

		int* sigval1 = style;
		const char* callback_return_value = miqt_exec_callback_QsciLexerHTML_blockStartKeyword(this, handle__blockStartKeyword.value(), sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerHTML_virtualbase_blockStartKeyword(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__braceStyle;

	// Subclass to allow providing a Go implementation
	virtual int braceStyle() const override {
		if (!handle__braceStyle) {
			return QsciLexerHTML::braceStyle();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerHTML_braceStyle(this, handle__braceStyle.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerHTML_virtualbase_braceStyle(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__caseSensitive;

	// Subclass to allow providing a Go implementation
	virtual bool caseSensitive() const override {
		if (!handle__caseSensitive) {
			return QsciLexerHTML::caseSensitive();
		}

		bool callback_return_value = miqt_exec_callback_QsciLexerHTML_caseSensitive(this, handle__caseSensitive.value());
		return callback_return_value;
	}

	friend bool QsciLexerHTML_virtualbase_caseSensitive(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__color;

	// Subclass to allow providing a Go implementation
	virtual QColor color(int style) const override {
		if (!handle__color) {
			return QsciLexerHTML::color(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerHTML_color(this, handle__color.value(), sigval1);
		return *callback_return_value;
	}

	friend QColor* QsciLexerHTML_virtualbase_color(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__eolFill;

	// Subclass to allow providing a Go implementation
	virtual bool eolFill(int style) const override {
		if (!handle__eolFill) {
			return QsciLexerHTML::eolFill(style);
		}

		int sigval1 = style;
		bool callback_return_value = miqt_exec_callback_QsciLexerHTML_eolFill(this, handle__eolFill.value(), sigval1);
		return callback_return_value;
	}

	friend bool QsciLexerHTML_virtualbase_eolFill(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__font;

	// Subclass to allow providing a Go implementation
	virtual QFont font(int style) const override {
		if (!handle__font) {
			return QsciLexerHTML::font(style);
		}

		int sigval1 = style;
		QFont* callback_return_value = miqt_exec_callback_QsciLexerHTML_font(this, handle__font.value(), sigval1);
		return *callback_return_value;
	}

	friend QFont* QsciLexerHTML_virtualbase_font(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__indentationGuideView;

	// Subclass to allow providing a Go implementation
	virtual int indentationGuideView() const override {
		if (!handle__indentationGuideView) {
			return QsciLexerHTML::indentationGuideView();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerHTML_indentationGuideView(this, handle__indentationGuideView.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerHTML_virtualbase_indentationGuideView(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__keywords;

	// Subclass to allow providing a Go implementation
	virtual const char* keywords(int set) const override {
		if (!handle__keywords) {
			return QsciLexerHTML::keywords(set);
		}

		int sigval1 = set;
		const char* callback_return_value = miqt_exec_callback_QsciLexerHTML_keywords(this, handle__keywords.value(), sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerHTML_virtualbase_keywords(const void* self, int set);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__defaultStyle;

	// Subclass to allow providing a Go implementation
	virtual int defaultStyle() const override {
		if (!handle__defaultStyle) {
			return QsciLexerHTML::defaultStyle();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerHTML_defaultStyle(this, handle__defaultStyle.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerHTML_virtualbase_defaultStyle(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__description;

	// Subclass to allow providing a Go implementation
	virtual QString description(int style) const override {
		if (!handle__description) {
			return QString(); // Pure virtual, there is no base we can call
		}

		int sigval1 = style;
		struct miqt_string callback_return_value = miqt_exec_callback_QsciLexerHTML_description(this, handle__description.value(), sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		free(callback_return_value.data);
		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__paper;

	// Subclass to allow providing a Go implementation
	virtual QColor paper(int style) const override {
		if (!handle__paper) {
			return QsciLexerHTML::paper(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerHTML_paper(this, handle__paper.value(), sigval1);
		return *callback_return_value;
	}

	friend QColor* QsciLexerHTML_virtualbase_paper(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__defaultColorWithStyle;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultColor(int style) const override {
		if (!handle__defaultColorWithStyle) {
			return QsciLexerHTML::defaultColor(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerHTML_defaultColorWithStyle(this, handle__defaultColorWithStyle.value(), sigval1);
		return *callback_return_value;
	}

	friend QColor* QsciLexerHTML_virtualbase_defaultColorWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__defaultEolFill;

	// Subclass to allow providing a Go implementation
	virtual bool defaultEolFill(int style) const override {
		if (!handle__defaultEolFill) {
			return QsciLexerHTML::defaultEolFill(style);
		}

		int sigval1 = style;
		bool callback_return_value = miqt_exec_callback_QsciLexerHTML_defaultEolFill(this, handle__defaultEolFill.value(), sigval1);
		return callback_return_value;
	}

	friend bool QsciLexerHTML_virtualbase_defaultEolFill(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__defaultFontWithStyle;

	// Subclass to allow providing a Go implementation
	virtual QFont defaultFont(int style) const override {
		if (!handle__defaultFontWithStyle) {
			return QsciLexerHTML::defaultFont(style);
		}

		int sigval1 = style;
		QFont* callback_return_value = miqt_exec_callback_QsciLexerHTML_defaultFontWithStyle(this, handle__defaultFontWithStyle.value(), sigval1);
		return *callback_return_value;
	}

	friend QFont* QsciLexerHTML_virtualbase_defaultFontWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__defaultPaperWithStyle;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultPaper(int style) const override {
		if (!handle__defaultPaperWithStyle) {
			return QsciLexerHTML::defaultPaper(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerHTML_defaultPaperWithStyle(this, handle__defaultPaperWithStyle.value(), sigval1);
		return *callback_return_value;
	}

	friend QColor* QsciLexerHTML_virtualbase_defaultPaperWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__setEditor;

	// Subclass to allow providing a Go implementation
	virtual void setEditor(QsciScintilla* editor) override {
		if (!handle__setEditor) {
			QsciLexerHTML::setEditor(editor);
			return;
		}

		QsciScintilla* sigval1 = editor;
		miqt_exec_callback_QsciLexerHTML_setEditor(this, handle__setEditor.value(), sigval1);

	}

	friend void QsciLexerHTML_virtualbase_setEditor(void* self, QsciScintilla* editor);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__refreshProperties;

	// Subclass to allow providing a Go implementation
	virtual void refreshProperties() override {
		if (!handle__refreshProperties) {
			QsciLexerHTML::refreshProperties();
			return;
		}

		miqt_exec_callback_QsciLexerHTML_refreshProperties(this, handle__refreshProperties.value());

	}

	friend void QsciLexerHTML_virtualbase_refreshProperties(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__styleBitsNeeded;

	// Subclass to allow providing a Go implementation
	virtual int styleBitsNeeded() const override {
		if (!handle__styleBitsNeeded) {
			return QsciLexerHTML::styleBitsNeeded();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerHTML_styleBitsNeeded(this, handle__styleBitsNeeded.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerHTML_virtualbase_styleBitsNeeded(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__wordCharacters;

	// Subclass to allow providing a Go implementation
	virtual const char* wordCharacters() const override {
		if (!handle__wordCharacters) {
			return QsciLexerHTML::wordCharacters();
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerHTML_wordCharacters(this, handle__wordCharacters.value());
		return callback_return_value;
	}

	friend const char* QsciLexerHTML_virtualbase_wordCharacters(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__setAutoIndentStyle;

	// Subclass to allow providing a Go implementation
	virtual void setAutoIndentStyle(int autoindentstyle) override {
		if (!handle__setAutoIndentStyle) {
			QsciLexerHTML::setAutoIndentStyle(autoindentstyle);
			return;
		}

		int sigval1 = autoindentstyle;
		miqt_exec_callback_QsciLexerHTML_setAutoIndentStyle(this, handle__setAutoIndentStyle.value(), sigval1);

	}

	friend void QsciLexerHTML_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__setColor;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& c, int style) override {
		if (!handle__setColor) {
			QsciLexerHTML::setColor(c, style);
			return;
		}

		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexerHTML_setColor(this, handle__setColor.value(), sigval1, sigval2);

	}

	friend void QsciLexerHTML_virtualbase_setColor(void* self, QColor* c, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__setEolFill;

	// Subclass to allow providing a Go implementation
	virtual void setEolFill(bool eoffill, int style) override {
		if (!handle__setEolFill) {
			QsciLexerHTML::setEolFill(eoffill, style);
			return;
		}

		bool sigval1 = eoffill;
		int sigval2 = style;
		miqt_exec_callback_QsciLexerHTML_setEolFill(this, handle__setEolFill.value(), sigval1, sigval2);

	}

	friend void QsciLexerHTML_virtualbase_setEolFill(void* self, bool eoffill, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__setFont;

	// Subclass to allow providing a Go implementation
	virtual void setFont(const QFont& f, int style) override {
		if (!handle__setFont) {
			QsciLexerHTML::setFont(f, style);
			return;
		}

		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexerHTML_setFont(this, handle__setFont.value(), sigval1, sigval2);

	}

	friend void QsciLexerHTML_virtualbase_setFont(void* self, QFont* f, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__setPaper;

	// Subclass to allow providing a Go implementation
	virtual void setPaper(const QColor& c, int style) override {
		if (!handle__setPaper) {
			QsciLexerHTML::setPaper(c, style);
			return;
		}

		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexerHTML_setPaper(this, handle__setPaper.value(), sigval1, sigval2);

	}

	friend void QsciLexerHTML_virtualbase_setPaper(void* self, QColor* c, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__readProperties;

	// Subclass to allow providing a Go implementation
	virtual bool readProperties(QSettings& qs, const QString& prefix) override {
		if (!handle__readProperties) {
			return QsciLexerHTML::readProperties(qs, prefix);
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
		bool callback_return_value = miqt_exec_callback_QsciLexerHTML_readProperties(this, handle__readProperties.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QsciLexerHTML_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__writeProperties;

	// Subclass to allow providing a Go implementation
	virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
		if (!handle__writeProperties) {
			return QsciLexerHTML::writeProperties(qs, prefix);
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
		bool callback_return_value = miqt_exec_callback_QsciLexerHTML_writeProperties(this, handle__writeProperties.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QsciLexerHTML_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QsciLexerHTML::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QsciLexerHTML_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QsciLexerHTML_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QsciLexerHTML::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QsciLexerHTML_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QsciLexerHTML_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QsciLexerHTML::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QsciLexerHTML_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QsciLexerHTML_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QsciLexerHTML::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QsciLexerHTML_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QsciLexerHTML_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QsciLexerHTML::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QsciLexerHTML_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QsciLexerHTML_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QsciLexerHTML::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QsciLexerHTML_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QsciLexerHTML_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QsciLexerHTML::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QsciLexerHTML_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QsciLexerHTML_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend bool QsciLexerHTML_protectedbase_readProperties(bool* _dynamic_cast_ok, void* self, QSettings* qs, struct miqt_string prefix);
	friend bool QsciLexerHTML_protectedbase_writeProperties(bool* _dynamic_cast_ok, const void* self, QSettings* qs, struct miqt_string prefix);
	friend QObject* QsciLexerHTML_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QsciLexerHTML_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QsciLexerHTML_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QsciLexerHTML_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QsciLexerHTML* QsciLexerHTML_new() {
	return new (std::nothrow) MiqtVirtualQsciLexerHTML();
}

QsciLexerHTML* QsciLexerHTML_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQsciLexerHTML(parent);
}

void QsciLexerHTML_virtbase(QsciLexerHTML* src, QsciLexer** outptr_QsciLexer) {
	*outptr_QsciLexer = static_cast<QsciLexer*>(src);
}

QMetaObject* QsciLexerHTML_metaObject(const QsciLexerHTML* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerHTML_metacast(QsciLexerHTML* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerHTML_tr(const char* s) {
	QString _ret = QsciLexerHTML::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerHTML_language(const QsciLexerHTML* self) {
	return (const char*) self->language();
}

const char* QsciLexerHTML_lexer(const QsciLexerHTML* self) {
	return (const char*) self->lexer();
}

const char* QsciLexerHTML_autoCompletionFillups(const QsciLexerHTML* self) {
	return (const char*) self->autoCompletionFillups();
}

const char* QsciLexerHTML_wordCharacters(const QsciLexerHTML* self) {
	return (const char*) self->wordCharacters();
}

QColor* QsciLexerHTML_defaultColor(const QsciLexerHTML* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerHTML_defaultEolFill(const QsciLexerHTML* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerHTML_defaultFont(const QsciLexerHTML* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerHTML_defaultPaper(const QsciLexerHTML* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerHTML_keywords(const QsciLexerHTML* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerHTML_description(const QsciLexerHTML* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerHTML_refreshProperties(QsciLexerHTML* self) {
	self->refreshProperties();
}

bool QsciLexerHTML_caseSensitiveTags(const QsciLexerHTML* self) {
	return self->caseSensitiveTags();
}

void QsciLexerHTML_setDjangoTemplates(QsciLexerHTML* self, bool enabled) {
	self->setDjangoTemplates(enabled);
}

bool QsciLexerHTML_djangoTemplates(const QsciLexerHTML* self) {
	return self->djangoTemplates();
}

bool QsciLexerHTML_foldCompact(const QsciLexerHTML* self) {
	return self->foldCompact();
}

bool QsciLexerHTML_foldPreprocessor(const QsciLexerHTML* self) {
	return self->foldPreprocessor();
}

void QsciLexerHTML_setFoldScriptComments(QsciLexerHTML* self, bool fold) {
	self->setFoldScriptComments(fold);
}

bool QsciLexerHTML_foldScriptComments(const QsciLexerHTML* self) {
	return self->foldScriptComments();
}

void QsciLexerHTML_setFoldScriptHeredocs(QsciLexerHTML* self, bool fold) {
	self->setFoldScriptHeredocs(fold);
}

bool QsciLexerHTML_foldScriptHeredocs(const QsciLexerHTML* self) {
	return self->foldScriptHeredocs();
}

void QsciLexerHTML_setMakoTemplates(QsciLexerHTML* self, bool enabled) {
	self->setMakoTemplates(enabled);
}

bool QsciLexerHTML_makoTemplates(const QsciLexerHTML* self) {
	return self->makoTemplates();
}

void QsciLexerHTML_setFoldCompact(QsciLexerHTML* self, bool fold) {
	self->setFoldCompact(fold);
}

void QsciLexerHTML_setFoldPreprocessor(QsciLexerHTML* self, bool fold) {
	self->setFoldPreprocessor(fold);
}

void QsciLexerHTML_setCaseSensitiveTags(QsciLexerHTML* self, bool sens) {
	self->setCaseSensitiveTags(sens);
}

struct miqt_string QsciLexerHTML_tr2(const char* s, const char* c) {
	QString _ret = QsciLexerHTML::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerHTML_tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerHTML::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QsciLexerHTML_override_virtual_setFoldCompact(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFoldCompact = std::move(slot_handle);
	return true;
}

void QsciLexerHTML_virtualbase_setFoldCompact(void* self, bool fold) {
	static_cast<MiqtVirtualQsciLexerHTML*>(self)->QsciLexerHTML::setFoldCompact(fold);
}

bool QsciLexerHTML_override_virtual_setFoldPreprocessor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFoldPreprocessor = std::move(slot_handle);
	return true;
}

void QsciLexerHTML_virtualbase_setFoldPreprocessor(void* self, bool fold) {
	static_cast<MiqtVirtualQsciLexerHTML*>(self)->QsciLexerHTML::setFoldPreprocessor(fold);
}

bool QsciLexerHTML_override_virtual_setCaseSensitiveTags(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setCaseSensitiveTags = std::move(slot_handle);
	return true;
}

void QsciLexerHTML_virtualbase_setCaseSensitiveTags(void* self, bool sens) {
	static_cast<MiqtVirtualQsciLexerHTML*>(self)->QsciLexerHTML::setCaseSensitiveTags(sens);
}

bool QsciLexerHTML_override_virtual_language(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__language = std::move(slot_handle);
	return true;
}

bool QsciLexerHTML_override_virtual_lexer(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__lexer = std::move(slot_handle);
	return true;
}

const char* QsciLexerHTML_virtualbase_lexer(const void* self) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerHTML*>(self)->QsciLexerHTML::lexer();
}

bool QsciLexerHTML_override_virtual_lexerId(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__lexerId = std::move(slot_handle);
	return true;
}

int QsciLexerHTML_virtualbase_lexerId(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerHTML*>(self)->QsciLexerHTML::lexerId();
}

bool QsciLexerHTML_override_virtual_autoCompletionFillups(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__autoCompletionFillups = std::move(slot_handle);
	return true;
}

const char* QsciLexerHTML_virtualbase_autoCompletionFillups(const void* self) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerHTML*>(self)->QsciLexerHTML::autoCompletionFillups();
}

bool QsciLexerHTML_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__autoCompletionWordSeparators = std::move(slot_handle);
	return true;
}

struct miqt_array /* of struct miqt_string */  QsciLexerHTML_virtualbase_autoCompletionWordSeparators(const void* self) {
	QStringList _ret = static_cast<const MiqtVirtualQsciLexerHTML*>(self)->QsciLexerHTML::autoCompletionWordSeparators();
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

bool QsciLexerHTML_override_virtual_blockEnd(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockEnd = std::move(slot_handle);
	return true;
}

const char* QsciLexerHTML_virtualbase_blockEnd(const void* self, int* style) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerHTML*>(self)->QsciLexerHTML::blockEnd(static_cast<int*>(style));
}

bool QsciLexerHTML_override_virtual_blockLookback(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockLookback = std::move(slot_handle);
	return true;
}

int QsciLexerHTML_virtualbase_blockLookback(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerHTML*>(self)->QsciLexerHTML::blockLookback();
}

bool QsciLexerHTML_override_virtual_blockStart(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockStart = std::move(slot_handle);
	return true;
}

const char* QsciLexerHTML_virtualbase_blockStart(const void* self, int* style) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerHTML*>(self)->QsciLexerHTML::blockStart(static_cast<int*>(style));
}

bool QsciLexerHTML_override_virtual_blockStartKeyword(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockStartKeyword = std::move(slot_handle);
	return true;
}

const char* QsciLexerHTML_virtualbase_blockStartKeyword(const void* self, int* style) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerHTML*>(self)->QsciLexerHTML::blockStartKeyword(static_cast<int*>(style));
}

bool QsciLexerHTML_override_virtual_braceStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__braceStyle = std::move(slot_handle);
	return true;
}

int QsciLexerHTML_virtualbase_braceStyle(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerHTML*>(self)->QsciLexerHTML::braceStyle();
}

bool QsciLexerHTML_override_virtual_caseSensitive(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__caseSensitive = std::move(slot_handle);
	return true;
}

bool QsciLexerHTML_virtualbase_caseSensitive(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerHTML*>(self)->QsciLexerHTML::caseSensitive();
}

bool QsciLexerHTML_override_virtual_color(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__color = std::move(slot_handle);
	return true;
}

QColor* QsciLexerHTML_virtualbase_color(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerHTML*>(self)->QsciLexerHTML::color(static_cast<int>(style)));
}

bool QsciLexerHTML_override_virtual_eolFill(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eolFill = std::move(slot_handle);
	return true;
}

bool QsciLexerHTML_virtualbase_eolFill(const void* self, int style) {
	return static_cast<const MiqtVirtualQsciLexerHTML*>(self)->QsciLexerHTML::eolFill(static_cast<int>(style));
}

bool QsciLexerHTML_override_virtual_font(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__font = std::move(slot_handle);
	return true;
}

QFont* QsciLexerHTML_virtualbase_font(const void* self, int style) {
	return new QFont(static_cast<const MiqtVirtualQsciLexerHTML*>(self)->QsciLexerHTML::font(static_cast<int>(style)));
}

bool QsciLexerHTML_override_virtual_indentationGuideView(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__indentationGuideView = std::move(slot_handle);
	return true;
}

int QsciLexerHTML_virtualbase_indentationGuideView(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerHTML*>(self)->QsciLexerHTML::indentationGuideView();
}

bool QsciLexerHTML_override_virtual_keywords(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keywords = std::move(slot_handle);
	return true;
}

const char* QsciLexerHTML_virtualbase_keywords(const void* self, int set) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerHTML*>(self)->QsciLexerHTML::keywords(static_cast<int>(set));
}

bool QsciLexerHTML_override_virtual_defaultStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultStyle = std::move(slot_handle);
	return true;
}

int QsciLexerHTML_virtualbase_defaultStyle(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerHTML*>(self)->QsciLexerHTML::defaultStyle();
}

bool QsciLexerHTML_override_virtual_description(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__description = std::move(slot_handle);
	return true;
}

bool QsciLexerHTML_override_virtual_paper(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paper = std::move(slot_handle);
	return true;
}

QColor* QsciLexerHTML_virtualbase_paper(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerHTML*>(self)->QsciLexerHTML::paper(static_cast<int>(style)));
}

bool QsciLexerHTML_override_virtual_defaultColorWithStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultColorWithStyle = std::move(slot_handle);
	return true;
}

QColor* QsciLexerHTML_virtualbase_defaultColorWithStyle(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerHTML*>(self)->QsciLexerHTML::defaultColor(static_cast<int>(style)));
}

bool QsciLexerHTML_override_virtual_defaultEolFill(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultEolFill = std::move(slot_handle);
	return true;
}

bool QsciLexerHTML_virtualbase_defaultEolFill(const void* self, int style) {
	return static_cast<const MiqtVirtualQsciLexerHTML*>(self)->QsciLexerHTML::defaultEolFill(static_cast<int>(style));
}

bool QsciLexerHTML_override_virtual_defaultFontWithStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultFontWithStyle = std::move(slot_handle);
	return true;
}

QFont* QsciLexerHTML_virtualbase_defaultFontWithStyle(const void* self, int style) {
	return new QFont(static_cast<const MiqtVirtualQsciLexerHTML*>(self)->QsciLexerHTML::defaultFont(static_cast<int>(style)));
}

bool QsciLexerHTML_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultPaperWithStyle = std::move(slot_handle);
	return true;
}

QColor* QsciLexerHTML_virtualbase_defaultPaperWithStyle(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerHTML*>(self)->QsciLexerHTML::defaultPaper(static_cast<int>(style)));
}

bool QsciLexerHTML_override_virtual_setEditor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setEditor = std::move(slot_handle);
	return true;
}

void QsciLexerHTML_virtualbase_setEditor(void* self, QsciScintilla* editor) {
	static_cast<MiqtVirtualQsciLexerHTML*>(self)->QsciLexerHTML::setEditor(editor);
}

bool QsciLexerHTML_override_virtual_refreshProperties(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__refreshProperties = std::move(slot_handle);
	return true;
}

void QsciLexerHTML_virtualbase_refreshProperties(void* self) {
	static_cast<MiqtVirtualQsciLexerHTML*>(self)->QsciLexerHTML::refreshProperties();
}

bool QsciLexerHTML_override_virtual_styleBitsNeeded(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__styleBitsNeeded = std::move(slot_handle);
	return true;
}

int QsciLexerHTML_virtualbase_styleBitsNeeded(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerHTML*>(self)->QsciLexerHTML::styleBitsNeeded();
}

bool QsciLexerHTML_override_virtual_wordCharacters(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wordCharacters = std::move(slot_handle);
	return true;
}

const char* QsciLexerHTML_virtualbase_wordCharacters(const void* self) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerHTML*>(self)->QsciLexerHTML::wordCharacters();
}

bool QsciLexerHTML_override_virtual_setAutoIndentStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setAutoIndentStyle = std::move(slot_handle);
	return true;
}

void QsciLexerHTML_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle) {
	static_cast<MiqtVirtualQsciLexerHTML*>(self)->QsciLexerHTML::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

bool QsciLexerHTML_override_virtual_setColor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setColor = std::move(slot_handle);
	return true;
}

void QsciLexerHTML_virtualbase_setColor(void* self, QColor* c, int style) {
	static_cast<MiqtVirtualQsciLexerHTML*>(self)->QsciLexerHTML::setColor(*c, static_cast<int>(style));
}

bool QsciLexerHTML_override_virtual_setEolFill(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setEolFill = std::move(slot_handle);
	return true;
}

void QsciLexerHTML_virtualbase_setEolFill(void* self, bool eoffill, int style) {
	static_cast<MiqtVirtualQsciLexerHTML*>(self)->QsciLexerHTML::setEolFill(eoffill, static_cast<int>(style));
}

bool QsciLexerHTML_override_virtual_setFont(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFont = std::move(slot_handle);
	return true;
}

void QsciLexerHTML_virtualbase_setFont(void* self, QFont* f, int style) {
	static_cast<MiqtVirtualQsciLexerHTML*>(self)->QsciLexerHTML::setFont(*f, static_cast<int>(style));
}

bool QsciLexerHTML_override_virtual_setPaper(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setPaper = std::move(slot_handle);
	return true;
}

void QsciLexerHTML_virtualbase_setPaper(void* self, QColor* c, int style) {
	static_cast<MiqtVirtualQsciLexerHTML*>(self)->QsciLexerHTML::setPaper(*c, static_cast<int>(style));
}

bool QsciLexerHTML_override_virtual_readProperties(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__readProperties = std::move(slot_handle);
	return true;
}

bool QsciLexerHTML_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return static_cast<MiqtVirtualQsciLexerHTML*>(self)->QsciLexerHTML::readProperties(*qs, prefix_QString);
}

bool QsciLexerHTML_override_virtual_writeProperties(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__writeProperties = std::move(slot_handle);
	return true;
}

bool QsciLexerHTML_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return static_cast<const MiqtVirtualQsciLexerHTML*>(self)->QsciLexerHTML::writeProperties(*qs, prefix_QString);
}

bool QsciLexerHTML_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QsciLexerHTML_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQsciLexerHTML*>(self)->QsciLexerHTML::event(event);
}

bool QsciLexerHTML_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QsciLexerHTML_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQsciLexerHTML*>(self)->QsciLexerHTML::eventFilter(watched, event);
}

bool QsciLexerHTML_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QsciLexerHTML_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQsciLexerHTML*>(self)->QsciLexerHTML::timerEvent(event);
}

bool QsciLexerHTML_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QsciLexerHTML_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQsciLexerHTML*>(self)->QsciLexerHTML::childEvent(event);
}

bool QsciLexerHTML_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QsciLexerHTML_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQsciLexerHTML*>(self)->QsciLexerHTML::customEvent(event);
}

bool QsciLexerHTML_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QsciLexerHTML_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQsciLexerHTML*>(self)->QsciLexerHTML::connectNotify(*signal);
}

bool QsciLexerHTML_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerHTML> slot_handle(slot);
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QsciLexerHTML_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQsciLexerHTML*>(self)->QsciLexerHTML::disconnectNotify(*signal);
}

bool QsciLexerHTML_protectedbase_readProperties(bool* _dynamic_cast_ok, void* self, QSettings* qs, struct miqt_string prefix) {
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return self_cast->readProperties(*qs, prefix_QString);
}

bool QsciLexerHTML_protectedbase_writeProperties(bool* _dynamic_cast_ok, const void* self, QSettings* qs, struct miqt_string prefix) {
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return self_cast->writeProperties(*qs, prefix_QString);
}

QObject* QsciLexerHTML_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QsciLexerHTML_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QsciLexerHTML_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QsciLexerHTML_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQsciLexerHTML* self_cast = dynamic_cast<MiqtVirtualQsciLexerHTML*>( (QsciLexerHTML*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QsciLexerHTML_delete(QsciLexerHTML* self) {
	delete self;
}

