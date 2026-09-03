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
#include <qscilexermatlab.h>
#include "gen_qscilexermatlab.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QsciLexerMatlab(intptr_t);
const char* miqt_exec_callback_QsciLexerMatlab_language(const QsciLexerMatlab*, intptr_t);
const char* miqt_exec_callback_QsciLexerMatlab_lexer(const QsciLexerMatlab*, intptr_t);
int miqt_exec_callback_QsciLexerMatlab_lexerId(const QsciLexerMatlab*, intptr_t);
const char* miqt_exec_callback_QsciLexerMatlab_autoCompletionFillups(const QsciLexerMatlab*, intptr_t);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QsciLexerMatlab_autoCompletionWordSeparators(const QsciLexerMatlab*, intptr_t);
const char* miqt_exec_callback_QsciLexerMatlab_blockEnd(const QsciLexerMatlab*, intptr_t, int*);
int miqt_exec_callback_QsciLexerMatlab_blockLookback(const QsciLexerMatlab*, intptr_t);
const char* miqt_exec_callback_QsciLexerMatlab_blockStart(const QsciLexerMatlab*, intptr_t, int*);
const char* miqt_exec_callback_QsciLexerMatlab_blockStartKeyword(const QsciLexerMatlab*, intptr_t, int*);
int miqt_exec_callback_QsciLexerMatlab_braceStyle(const QsciLexerMatlab*, intptr_t);
bool miqt_exec_callback_QsciLexerMatlab_caseSensitive(const QsciLexerMatlab*, intptr_t);
QColor* miqt_exec_callback_QsciLexerMatlab_color(const QsciLexerMatlab*, intptr_t, int);
bool miqt_exec_callback_QsciLexerMatlab_eolFill(const QsciLexerMatlab*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerMatlab_font(const QsciLexerMatlab*, intptr_t, int);
int miqt_exec_callback_QsciLexerMatlab_indentationGuideView(const QsciLexerMatlab*, intptr_t);
const char* miqt_exec_callback_QsciLexerMatlab_keywords(const QsciLexerMatlab*, intptr_t, int);
int miqt_exec_callback_QsciLexerMatlab_defaultStyle(const QsciLexerMatlab*, intptr_t);
struct miqt_string miqt_exec_callback_QsciLexerMatlab_description(const QsciLexerMatlab*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerMatlab_paper(const QsciLexerMatlab*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerMatlab_defaultColorWithStyle(const QsciLexerMatlab*, intptr_t, int);
bool miqt_exec_callback_QsciLexerMatlab_defaultEolFill(const QsciLexerMatlab*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerMatlab_defaultFontWithStyle(const QsciLexerMatlab*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerMatlab_defaultPaperWithStyle(const QsciLexerMatlab*, intptr_t, int);
void miqt_exec_callback_QsciLexerMatlab_setEditor(QsciLexerMatlab*, intptr_t, QsciScintilla*);
void miqt_exec_callback_QsciLexerMatlab_refreshProperties(QsciLexerMatlab*, intptr_t);
int miqt_exec_callback_QsciLexerMatlab_styleBitsNeeded(const QsciLexerMatlab*, intptr_t);
const char* miqt_exec_callback_QsciLexerMatlab_wordCharacters(const QsciLexerMatlab*, intptr_t);
void miqt_exec_callback_QsciLexerMatlab_setAutoIndentStyle(QsciLexerMatlab*, intptr_t, int);
void miqt_exec_callback_QsciLexerMatlab_setColor(QsciLexerMatlab*, intptr_t, QColor*, int);
void miqt_exec_callback_QsciLexerMatlab_setEolFill(QsciLexerMatlab*, intptr_t, bool, int);
void miqt_exec_callback_QsciLexerMatlab_setFont(QsciLexerMatlab*, intptr_t, QFont*, int);
void miqt_exec_callback_QsciLexerMatlab_setPaper(QsciLexerMatlab*, intptr_t, QColor*, int);
bool miqt_exec_callback_QsciLexerMatlab_readProperties(QsciLexerMatlab*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerMatlab_writeProperties(const QsciLexerMatlab*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerMatlab_event(QsciLexerMatlab*, intptr_t, QEvent*);
bool miqt_exec_callback_QsciLexerMatlab_eventFilter(QsciLexerMatlab*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QsciLexerMatlab_timerEvent(QsciLexerMatlab*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QsciLexerMatlab_childEvent(QsciLexerMatlab*, intptr_t, QChildEvent*);
void miqt_exec_callback_QsciLexerMatlab_customEvent(QsciLexerMatlab*, intptr_t, QEvent*);
void miqt_exec_callback_QsciLexerMatlab_connectNotify(QsciLexerMatlab*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QsciLexerMatlab_disconnectNotify(QsciLexerMatlab*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciLexerMatlab final : public QsciLexerMatlab {
public:

	MiqtVirtualQsciLexerMatlab(): QsciLexerMatlab() {}
	MiqtVirtualQsciLexerMatlab(QObject* parent): QsciLexerMatlab(parent) {}

	virtual ~MiqtVirtualQsciLexerMatlab() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> handle__language;

	// Subclass to allow providing a Go implementation
	virtual const char* language() const override {
		if (!handle__language) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerMatlab_language(this, handle__language.value());
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> handle__lexer;

	// Subclass to allow providing a Go implementation
	virtual const char* lexer() const override {
		if (!handle__lexer) {
			return QsciLexerMatlab::lexer();
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerMatlab_lexer(this, handle__lexer.value());
		return callback_return_value;
	}

	friend const char* QsciLexerMatlab_virtualbase_lexer(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> handle__lexerId;

	// Subclass to allow providing a Go implementation
	virtual int lexerId() const override {
		if (!handle__lexerId) {
			return QsciLexerMatlab::lexerId();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerMatlab_lexerId(this, handle__lexerId.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerMatlab_virtualbase_lexerId(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> handle__autoCompletionFillups;

	// Subclass to allow providing a Go implementation
	virtual const char* autoCompletionFillups() const override {
		if (!handle__autoCompletionFillups) {
			return QsciLexerMatlab::autoCompletionFillups();
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerMatlab_autoCompletionFillups(this, handle__autoCompletionFillups.value());
		return callback_return_value;
	}

	friend const char* QsciLexerMatlab_virtualbase_autoCompletionFillups(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> handle__autoCompletionWordSeparators;

	// Subclass to allow providing a Go implementation
	virtual QStringList autoCompletionWordSeparators() const override {
		if (!handle__autoCompletionWordSeparators) {
			return QsciLexerMatlab::autoCompletionWordSeparators();
		}

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QsciLexerMatlab_autoCompletionWordSeparators(this, handle__autoCompletionWordSeparators.value());
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

	friend struct miqt_array /* of struct miqt_string */  QsciLexerMatlab_virtualbase_autoCompletionWordSeparators(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> handle__blockEnd;

	// Subclass to allow providing a Go implementation
	virtual const char* blockEnd(int* style) const override {
		if (!handle__blockEnd) {
			return QsciLexerMatlab::blockEnd(style);
		}

		int* sigval1 = style;
		const char* callback_return_value = miqt_exec_callback_QsciLexerMatlab_blockEnd(this, handle__blockEnd.value(), sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerMatlab_virtualbase_blockEnd(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> handle__blockLookback;

	// Subclass to allow providing a Go implementation
	virtual int blockLookback() const override {
		if (!handle__blockLookback) {
			return QsciLexerMatlab::blockLookback();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerMatlab_blockLookback(this, handle__blockLookback.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerMatlab_virtualbase_blockLookback(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> handle__blockStart;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStart(int* style) const override {
		if (!handle__blockStart) {
			return QsciLexerMatlab::blockStart(style);
		}

		int* sigval1 = style;
		const char* callback_return_value = miqt_exec_callback_QsciLexerMatlab_blockStart(this, handle__blockStart.value(), sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerMatlab_virtualbase_blockStart(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> handle__blockStartKeyword;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStartKeyword(int* style) const override {
		if (!handle__blockStartKeyword) {
			return QsciLexerMatlab::blockStartKeyword(style);
		}

		int* sigval1 = style;
		const char* callback_return_value = miqt_exec_callback_QsciLexerMatlab_blockStartKeyword(this, handle__blockStartKeyword.value(), sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerMatlab_virtualbase_blockStartKeyword(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> handle__braceStyle;

	// Subclass to allow providing a Go implementation
	virtual int braceStyle() const override {
		if (!handle__braceStyle) {
			return QsciLexerMatlab::braceStyle();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerMatlab_braceStyle(this, handle__braceStyle.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerMatlab_virtualbase_braceStyle(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> handle__caseSensitive;

	// Subclass to allow providing a Go implementation
	virtual bool caseSensitive() const override {
		if (!handle__caseSensitive) {
			return QsciLexerMatlab::caseSensitive();
		}

		bool callback_return_value = miqt_exec_callback_QsciLexerMatlab_caseSensitive(this, handle__caseSensitive.value());
		return callback_return_value;
	}

	friend bool QsciLexerMatlab_virtualbase_caseSensitive(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> handle__color;

	// Subclass to allow providing a Go implementation
	virtual QColor color(int style) const override {
		if (!handle__color) {
			return QsciLexerMatlab::color(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerMatlab_color(this, handle__color.value(), sigval1);
		return *callback_return_value;
	}

	friend QColor* QsciLexerMatlab_virtualbase_color(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> handle__eolFill;

	// Subclass to allow providing a Go implementation
	virtual bool eolFill(int style) const override {
		if (!handle__eolFill) {
			return QsciLexerMatlab::eolFill(style);
		}

		int sigval1 = style;
		bool callback_return_value = miqt_exec_callback_QsciLexerMatlab_eolFill(this, handle__eolFill.value(), sigval1);
		return callback_return_value;
	}

	friend bool QsciLexerMatlab_virtualbase_eolFill(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> handle__font;

	// Subclass to allow providing a Go implementation
	virtual QFont font(int style) const override {
		if (!handle__font) {
			return QsciLexerMatlab::font(style);
		}

		int sigval1 = style;
		QFont* callback_return_value = miqt_exec_callback_QsciLexerMatlab_font(this, handle__font.value(), sigval1);
		return *callback_return_value;
	}

	friend QFont* QsciLexerMatlab_virtualbase_font(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> handle__indentationGuideView;

	// Subclass to allow providing a Go implementation
	virtual int indentationGuideView() const override {
		if (!handle__indentationGuideView) {
			return QsciLexerMatlab::indentationGuideView();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerMatlab_indentationGuideView(this, handle__indentationGuideView.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerMatlab_virtualbase_indentationGuideView(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> handle__keywords;

	// Subclass to allow providing a Go implementation
	virtual const char* keywords(int set) const override {
		if (!handle__keywords) {
			return QsciLexerMatlab::keywords(set);
		}

		int sigval1 = set;
		const char* callback_return_value = miqt_exec_callback_QsciLexerMatlab_keywords(this, handle__keywords.value(), sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerMatlab_virtualbase_keywords(const void* self, int set);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> handle__defaultStyle;

	// Subclass to allow providing a Go implementation
	virtual int defaultStyle() const override {
		if (!handle__defaultStyle) {
			return QsciLexerMatlab::defaultStyle();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerMatlab_defaultStyle(this, handle__defaultStyle.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerMatlab_virtualbase_defaultStyle(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> handle__description;

	// Subclass to allow providing a Go implementation
	virtual QString description(int style) const override {
		if (!handle__description) {
			return QString(); // Pure virtual, there is no base we can call
		}

		int sigval1 = style;
		struct miqt_string callback_return_value = miqt_exec_callback_QsciLexerMatlab_description(this, handle__description.value(), sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		free(callback_return_value.data);
		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> handle__paper;

	// Subclass to allow providing a Go implementation
	virtual QColor paper(int style) const override {
		if (!handle__paper) {
			return QsciLexerMatlab::paper(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerMatlab_paper(this, handle__paper.value(), sigval1);
		return *callback_return_value;
	}

	friend QColor* QsciLexerMatlab_virtualbase_paper(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> handle__defaultColorWithStyle;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultColor(int style) const override {
		if (!handle__defaultColorWithStyle) {
			return QsciLexerMatlab::defaultColor(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerMatlab_defaultColorWithStyle(this, handle__defaultColorWithStyle.value(), sigval1);
		return *callback_return_value;
	}

	friend QColor* QsciLexerMatlab_virtualbase_defaultColorWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> handle__defaultEolFill;

	// Subclass to allow providing a Go implementation
	virtual bool defaultEolFill(int style) const override {
		if (!handle__defaultEolFill) {
			return QsciLexerMatlab::defaultEolFill(style);
		}

		int sigval1 = style;
		bool callback_return_value = miqt_exec_callback_QsciLexerMatlab_defaultEolFill(this, handle__defaultEolFill.value(), sigval1);
		return callback_return_value;
	}

	friend bool QsciLexerMatlab_virtualbase_defaultEolFill(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> handle__defaultFontWithStyle;

	// Subclass to allow providing a Go implementation
	virtual QFont defaultFont(int style) const override {
		if (!handle__defaultFontWithStyle) {
			return QsciLexerMatlab::defaultFont(style);
		}

		int sigval1 = style;
		QFont* callback_return_value = miqt_exec_callback_QsciLexerMatlab_defaultFontWithStyle(this, handle__defaultFontWithStyle.value(), sigval1);
		return *callback_return_value;
	}

	friend QFont* QsciLexerMatlab_virtualbase_defaultFontWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> handle__defaultPaperWithStyle;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultPaper(int style) const override {
		if (!handle__defaultPaperWithStyle) {
			return QsciLexerMatlab::defaultPaper(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerMatlab_defaultPaperWithStyle(this, handle__defaultPaperWithStyle.value(), sigval1);
		return *callback_return_value;
	}

	friend QColor* QsciLexerMatlab_virtualbase_defaultPaperWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> handle__setEditor;

	// Subclass to allow providing a Go implementation
	virtual void setEditor(QsciScintilla* editor) override {
		if (!handle__setEditor) {
			QsciLexerMatlab::setEditor(editor);
			return;
		}

		QsciScintilla* sigval1 = editor;
		miqt_exec_callback_QsciLexerMatlab_setEditor(this, handle__setEditor.value(), sigval1);

	}

	friend void QsciLexerMatlab_virtualbase_setEditor(void* self, QsciScintilla* editor);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> handle__refreshProperties;

	// Subclass to allow providing a Go implementation
	virtual void refreshProperties() override {
		if (!handle__refreshProperties) {
			QsciLexerMatlab::refreshProperties();
			return;
		}

		miqt_exec_callback_QsciLexerMatlab_refreshProperties(this, handle__refreshProperties.value());

	}

	friend void QsciLexerMatlab_virtualbase_refreshProperties(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> handle__styleBitsNeeded;

	// Subclass to allow providing a Go implementation
	virtual int styleBitsNeeded() const override {
		if (!handle__styleBitsNeeded) {
			return QsciLexerMatlab::styleBitsNeeded();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerMatlab_styleBitsNeeded(this, handle__styleBitsNeeded.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerMatlab_virtualbase_styleBitsNeeded(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> handle__wordCharacters;

	// Subclass to allow providing a Go implementation
	virtual const char* wordCharacters() const override {
		if (!handle__wordCharacters) {
			return QsciLexerMatlab::wordCharacters();
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerMatlab_wordCharacters(this, handle__wordCharacters.value());
		return callback_return_value;
	}

	friend const char* QsciLexerMatlab_virtualbase_wordCharacters(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> handle__setAutoIndentStyle;

	// Subclass to allow providing a Go implementation
	virtual void setAutoIndentStyle(int autoindentstyle) override {
		if (!handle__setAutoIndentStyle) {
			QsciLexerMatlab::setAutoIndentStyle(autoindentstyle);
			return;
		}

		int sigval1 = autoindentstyle;
		miqt_exec_callback_QsciLexerMatlab_setAutoIndentStyle(this, handle__setAutoIndentStyle.value(), sigval1);

	}

	friend void QsciLexerMatlab_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> handle__setColor;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& c, int style) override {
		if (!handle__setColor) {
			QsciLexerMatlab::setColor(c, style);
			return;
		}

		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexerMatlab_setColor(this, handle__setColor.value(), sigval1, sigval2);

	}

	friend void QsciLexerMatlab_virtualbase_setColor(void* self, QColor* c, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> handle__setEolFill;

	// Subclass to allow providing a Go implementation
	virtual void setEolFill(bool eoffill, int style) override {
		if (!handle__setEolFill) {
			QsciLexerMatlab::setEolFill(eoffill, style);
			return;
		}

		bool sigval1 = eoffill;
		int sigval2 = style;
		miqt_exec_callback_QsciLexerMatlab_setEolFill(this, handle__setEolFill.value(), sigval1, sigval2);

	}

	friend void QsciLexerMatlab_virtualbase_setEolFill(void* self, bool eoffill, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> handle__setFont;

	// Subclass to allow providing a Go implementation
	virtual void setFont(const QFont& f, int style) override {
		if (!handle__setFont) {
			QsciLexerMatlab::setFont(f, style);
			return;
		}

		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexerMatlab_setFont(this, handle__setFont.value(), sigval1, sigval2);

	}

	friend void QsciLexerMatlab_virtualbase_setFont(void* self, QFont* f, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> handle__setPaper;

	// Subclass to allow providing a Go implementation
	virtual void setPaper(const QColor& c, int style) override {
		if (!handle__setPaper) {
			QsciLexerMatlab::setPaper(c, style);
			return;
		}

		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexerMatlab_setPaper(this, handle__setPaper.value(), sigval1, sigval2);

	}

	friend void QsciLexerMatlab_virtualbase_setPaper(void* self, QColor* c, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> handle__readProperties;

	// Subclass to allow providing a Go implementation
	virtual bool readProperties(QSettings& qs, const QString& prefix) override {
		if (!handle__readProperties) {
			return QsciLexerMatlab::readProperties(qs, prefix);
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
		bool callback_return_value = miqt_exec_callback_QsciLexerMatlab_readProperties(this, handle__readProperties.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QsciLexerMatlab_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> handle__writeProperties;

	// Subclass to allow providing a Go implementation
	virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
		if (!handle__writeProperties) {
			return QsciLexerMatlab::writeProperties(qs, prefix);
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
		bool callback_return_value = miqt_exec_callback_QsciLexerMatlab_writeProperties(this, handle__writeProperties.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QsciLexerMatlab_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QsciLexerMatlab::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QsciLexerMatlab_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QsciLexerMatlab_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QsciLexerMatlab::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QsciLexerMatlab_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QsciLexerMatlab_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QsciLexerMatlab::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QsciLexerMatlab_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QsciLexerMatlab_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QsciLexerMatlab::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QsciLexerMatlab_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QsciLexerMatlab_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QsciLexerMatlab::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QsciLexerMatlab_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QsciLexerMatlab_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QsciLexerMatlab::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QsciLexerMatlab_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QsciLexerMatlab_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QsciLexerMatlab::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QsciLexerMatlab_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QsciLexerMatlab_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend QObject* QsciLexerMatlab_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QsciLexerMatlab_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QsciLexerMatlab_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QsciLexerMatlab_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QsciLexerMatlab* QsciLexerMatlab_new() {
	return new (std::nothrow) MiqtVirtualQsciLexerMatlab();
}

QsciLexerMatlab* QsciLexerMatlab_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQsciLexerMatlab(parent);
}

void QsciLexerMatlab_virtbase(QsciLexerMatlab* src, QsciLexer** outptr_QsciLexer) {
	*outptr_QsciLexer = static_cast<QsciLexer*>(src);
}

QMetaObject* QsciLexerMatlab_metaObject(const QsciLexerMatlab* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerMatlab_metacast(QsciLexerMatlab* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerMatlab_tr(const char* s) {
	QString _ret = QsciLexerMatlab::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerMatlab_trUtf8(const char* s) {
	QString _ret = QsciLexerMatlab::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerMatlab_language(const QsciLexerMatlab* self) {
	return (const char*) self->language();
}

const char* QsciLexerMatlab_lexer(const QsciLexerMatlab* self) {
	return (const char*) self->lexer();
}

QColor* QsciLexerMatlab_defaultColor(const QsciLexerMatlab* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerMatlab_defaultFont(const QsciLexerMatlab* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

const char* QsciLexerMatlab_keywords(const QsciLexerMatlab* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerMatlab_description(const QsciLexerMatlab* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerMatlab_tr2(const char* s, const char* c) {
	QString _ret = QsciLexerMatlab::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerMatlab_tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerMatlab::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerMatlab_trUtf82(const char* s, const char* c) {
	QString _ret = QsciLexerMatlab::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerMatlab_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QsciLexerMatlab::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QsciLexerMatlab_override_virtual_language(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> slot_handle(slot);
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__language = std::move(slot_handle);
	return true;
}

bool QsciLexerMatlab_override_virtual_lexer(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> slot_handle(slot);
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__lexer = std::move(slot_handle);
	return true;
}

const char* QsciLexerMatlab_virtualbase_lexer(const void* self) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerMatlab*>(self)->QsciLexerMatlab::lexer();
}

bool QsciLexerMatlab_override_virtual_lexerId(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> slot_handle(slot);
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__lexerId = std::move(slot_handle);
	return true;
}

int QsciLexerMatlab_virtualbase_lexerId(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerMatlab*>(self)->QsciLexerMatlab::lexerId();
}

bool QsciLexerMatlab_override_virtual_autoCompletionFillups(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> slot_handle(slot);
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__autoCompletionFillups = std::move(slot_handle);
	return true;
}

const char* QsciLexerMatlab_virtualbase_autoCompletionFillups(const void* self) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerMatlab*>(self)->QsciLexerMatlab::autoCompletionFillups();
}

bool QsciLexerMatlab_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> slot_handle(slot);
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__autoCompletionWordSeparators = std::move(slot_handle);
	return true;
}

struct miqt_array /* of struct miqt_string */  QsciLexerMatlab_virtualbase_autoCompletionWordSeparators(const void* self) {
	QStringList _ret = static_cast<const MiqtVirtualQsciLexerMatlab*>(self)->QsciLexerMatlab::autoCompletionWordSeparators();
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

bool QsciLexerMatlab_override_virtual_blockEnd(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> slot_handle(slot);
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockEnd = std::move(slot_handle);
	return true;
}

const char* QsciLexerMatlab_virtualbase_blockEnd(const void* self, int* style) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerMatlab*>(self)->QsciLexerMatlab::blockEnd(static_cast<int*>(style));
}

bool QsciLexerMatlab_override_virtual_blockLookback(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> slot_handle(slot);
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockLookback = std::move(slot_handle);
	return true;
}

int QsciLexerMatlab_virtualbase_blockLookback(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerMatlab*>(self)->QsciLexerMatlab::blockLookback();
}

bool QsciLexerMatlab_override_virtual_blockStart(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> slot_handle(slot);
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockStart = std::move(slot_handle);
	return true;
}

const char* QsciLexerMatlab_virtualbase_blockStart(const void* self, int* style) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerMatlab*>(self)->QsciLexerMatlab::blockStart(static_cast<int*>(style));
}

bool QsciLexerMatlab_override_virtual_blockStartKeyword(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> slot_handle(slot);
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockStartKeyword = std::move(slot_handle);
	return true;
}

const char* QsciLexerMatlab_virtualbase_blockStartKeyword(const void* self, int* style) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerMatlab*>(self)->QsciLexerMatlab::blockStartKeyword(static_cast<int*>(style));
}

bool QsciLexerMatlab_override_virtual_braceStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> slot_handle(slot);
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__braceStyle = std::move(slot_handle);
	return true;
}

int QsciLexerMatlab_virtualbase_braceStyle(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerMatlab*>(self)->QsciLexerMatlab::braceStyle();
}

bool QsciLexerMatlab_override_virtual_caseSensitive(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> slot_handle(slot);
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__caseSensitive = std::move(slot_handle);
	return true;
}

bool QsciLexerMatlab_virtualbase_caseSensitive(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerMatlab*>(self)->QsciLexerMatlab::caseSensitive();
}

bool QsciLexerMatlab_override_virtual_color(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> slot_handle(slot);
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__color = std::move(slot_handle);
	return true;
}

QColor* QsciLexerMatlab_virtualbase_color(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerMatlab*>(self)->QsciLexerMatlab::color(static_cast<int>(style)));
}

bool QsciLexerMatlab_override_virtual_eolFill(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> slot_handle(slot);
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eolFill = std::move(slot_handle);
	return true;
}

bool QsciLexerMatlab_virtualbase_eolFill(const void* self, int style) {
	return static_cast<const MiqtVirtualQsciLexerMatlab*>(self)->QsciLexerMatlab::eolFill(static_cast<int>(style));
}

bool QsciLexerMatlab_override_virtual_font(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> slot_handle(slot);
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__font = std::move(slot_handle);
	return true;
}

QFont* QsciLexerMatlab_virtualbase_font(const void* self, int style) {
	return new QFont(static_cast<const MiqtVirtualQsciLexerMatlab*>(self)->QsciLexerMatlab::font(static_cast<int>(style)));
}

bool QsciLexerMatlab_override_virtual_indentationGuideView(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> slot_handle(slot);
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__indentationGuideView = std::move(slot_handle);
	return true;
}

int QsciLexerMatlab_virtualbase_indentationGuideView(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerMatlab*>(self)->QsciLexerMatlab::indentationGuideView();
}

bool QsciLexerMatlab_override_virtual_keywords(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> slot_handle(slot);
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keywords = std::move(slot_handle);
	return true;
}

const char* QsciLexerMatlab_virtualbase_keywords(const void* self, int set) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerMatlab*>(self)->QsciLexerMatlab::keywords(static_cast<int>(set));
}

bool QsciLexerMatlab_override_virtual_defaultStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> slot_handle(slot);
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultStyle = std::move(slot_handle);
	return true;
}

int QsciLexerMatlab_virtualbase_defaultStyle(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerMatlab*>(self)->QsciLexerMatlab::defaultStyle();
}

bool QsciLexerMatlab_override_virtual_description(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> slot_handle(slot);
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__description = std::move(slot_handle);
	return true;
}

bool QsciLexerMatlab_override_virtual_paper(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> slot_handle(slot);
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paper = std::move(slot_handle);
	return true;
}

QColor* QsciLexerMatlab_virtualbase_paper(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerMatlab*>(self)->QsciLexerMatlab::paper(static_cast<int>(style)));
}

bool QsciLexerMatlab_override_virtual_defaultColorWithStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> slot_handle(slot);
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultColorWithStyle = std::move(slot_handle);
	return true;
}

QColor* QsciLexerMatlab_virtualbase_defaultColorWithStyle(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerMatlab*>(self)->QsciLexerMatlab::defaultColor(static_cast<int>(style)));
}

bool QsciLexerMatlab_override_virtual_defaultEolFill(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> slot_handle(slot);
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultEolFill = std::move(slot_handle);
	return true;
}

bool QsciLexerMatlab_virtualbase_defaultEolFill(const void* self, int style) {
	return static_cast<const MiqtVirtualQsciLexerMatlab*>(self)->QsciLexerMatlab::defaultEolFill(static_cast<int>(style));
}

bool QsciLexerMatlab_override_virtual_defaultFontWithStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> slot_handle(slot);
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultFontWithStyle = std::move(slot_handle);
	return true;
}

QFont* QsciLexerMatlab_virtualbase_defaultFontWithStyle(const void* self, int style) {
	return new QFont(static_cast<const MiqtVirtualQsciLexerMatlab*>(self)->QsciLexerMatlab::defaultFont(static_cast<int>(style)));
}

bool QsciLexerMatlab_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> slot_handle(slot);
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultPaperWithStyle = std::move(slot_handle);
	return true;
}

QColor* QsciLexerMatlab_virtualbase_defaultPaperWithStyle(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerMatlab*>(self)->QsciLexerMatlab::defaultPaper(static_cast<int>(style)));
}

bool QsciLexerMatlab_override_virtual_setEditor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> slot_handle(slot);
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setEditor = std::move(slot_handle);
	return true;
}

void QsciLexerMatlab_virtualbase_setEditor(void* self, QsciScintilla* editor) {
	static_cast<MiqtVirtualQsciLexerMatlab*>(self)->QsciLexerMatlab::setEditor(editor);
}

bool QsciLexerMatlab_override_virtual_refreshProperties(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> slot_handle(slot);
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__refreshProperties = std::move(slot_handle);
	return true;
}

void QsciLexerMatlab_virtualbase_refreshProperties(void* self) {
	static_cast<MiqtVirtualQsciLexerMatlab*>(self)->QsciLexerMatlab::refreshProperties();
}

bool QsciLexerMatlab_override_virtual_styleBitsNeeded(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> slot_handle(slot);
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__styleBitsNeeded = std::move(slot_handle);
	return true;
}

int QsciLexerMatlab_virtualbase_styleBitsNeeded(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerMatlab*>(self)->QsciLexerMatlab::styleBitsNeeded();
}

bool QsciLexerMatlab_override_virtual_wordCharacters(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> slot_handle(slot);
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wordCharacters = std::move(slot_handle);
	return true;
}

const char* QsciLexerMatlab_virtualbase_wordCharacters(const void* self) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerMatlab*>(self)->QsciLexerMatlab::wordCharacters();
}

bool QsciLexerMatlab_override_virtual_setAutoIndentStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> slot_handle(slot);
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setAutoIndentStyle = std::move(slot_handle);
	return true;
}

void QsciLexerMatlab_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle) {
	static_cast<MiqtVirtualQsciLexerMatlab*>(self)->QsciLexerMatlab::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

bool QsciLexerMatlab_override_virtual_setColor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> slot_handle(slot);
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setColor = std::move(slot_handle);
	return true;
}

void QsciLexerMatlab_virtualbase_setColor(void* self, QColor* c, int style) {
	static_cast<MiqtVirtualQsciLexerMatlab*>(self)->QsciLexerMatlab::setColor(*c, static_cast<int>(style));
}

bool QsciLexerMatlab_override_virtual_setEolFill(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> slot_handle(slot);
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setEolFill = std::move(slot_handle);
	return true;
}

void QsciLexerMatlab_virtualbase_setEolFill(void* self, bool eoffill, int style) {
	static_cast<MiqtVirtualQsciLexerMatlab*>(self)->QsciLexerMatlab::setEolFill(eoffill, static_cast<int>(style));
}

bool QsciLexerMatlab_override_virtual_setFont(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> slot_handle(slot);
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFont = std::move(slot_handle);
	return true;
}

void QsciLexerMatlab_virtualbase_setFont(void* self, QFont* f, int style) {
	static_cast<MiqtVirtualQsciLexerMatlab*>(self)->QsciLexerMatlab::setFont(*f, static_cast<int>(style));
}

bool QsciLexerMatlab_override_virtual_setPaper(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> slot_handle(slot);
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setPaper = std::move(slot_handle);
	return true;
}

void QsciLexerMatlab_virtualbase_setPaper(void* self, QColor* c, int style) {
	static_cast<MiqtVirtualQsciLexerMatlab*>(self)->QsciLexerMatlab::setPaper(*c, static_cast<int>(style));
}

bool QsciLexerMatlab_override_virtual_readProperties(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> slot_handle(slot);
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__readProperties = std::move(slot_handle);
	return true;
}

bool QsciLexerMatlab_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return static_cast<MiqtVirtualQsciLexerMatlab*>(self)->QsciLexerMatlab::readProperties(*qs, prefix_QString);
}

bool QsciLexerMatlab_override_virtual_writeProperties(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> slot_handle(slot);
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__writeProperties = std::move(slot_handle);
	return true;
}

bool QsciLexerMatlab_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return static_cast<const MiqtVirtualQsciLexerMatlab*>(self)->QsciLexerMatlab::writeProperties(*qs, prefix_QString);
}

bool QsciLexerMatlab_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> slot_handle(slot);
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QsciLexerMatlab_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQsciLexerMatlab*>(self)->QsciLexerMatlab::event(event);
}

bool QsciLexerMatlab_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> slot_handle(slot);
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QsciLexerMatlab_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQsciLexerMatlab*>(self)->QsciLexerMatlab::eventFilter(watched, event);
}

bool QsciLexerMatlab_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> slot_handle(slot);
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QsciLexerMatlab_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQsciLexerMatlab*>(self)->QsciLexerMatlab::timerEvent(event);
}

bool QsciLexerMatlab_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> slot_handle(slot);
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QsciLexerMatlab_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQsciLexerMatlab*>(self)->QsciLexerMatlab::childEvent(event);
}

bool QsciLexerMatlab_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> slot_handle(slot);
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QsciLexerMatlab_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQsciLexerMatlab*>(self)->QsciLexerMatlab::customEvent(event);
}

bool QsciLexerMatlab_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> slot_handle(slot);
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QsciLexerMatlab_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQsciLexerMatlab*>(self)->QsciLexerMatlab::connectNotify(*signal);
}

bool QsciLexerMatlab_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerMatlab> slot_handle(slot);
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QsciLexerMatlab_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQsciLexerMatlab*>(self)->QsciLexerMatlab::disconnectNotify(*signal);
}

QObject* QsciLexerMatlab_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QsciLexerMatlab_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QsciLexerMatlab_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QsciLexerMatlab_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQsciLexerMatlab* self_cast = dynamic_cast<MiqtVirtualQsciLexerMatlab*>( (QsciLexerMatlab*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QsciLexerMatlab_delete(QsciLexerMatlab* self) {
	delete self;
}

