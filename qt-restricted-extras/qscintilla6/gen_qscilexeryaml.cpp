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
#include <qscilexeryaml.h>
#include "gen_qscilexeryaml.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QsciLexerYAML(intptr_t);
void miqt_exec_callback_QsciLexerYAML_setFoldComments(QsciLexerYAML*, intptr_t, bool);
const char* miqt_exec_callback_QsciLexerYAML_language(const QsciLexerYAML*, intptr_t);
const char* miqt_exec_callback_QsciLexerYAML_lexer(const QsciLexerYAML*, intptr_t);
int miqt_exec_callback_QsciLexerYAML_lexerId(const QsciLexerYAML*, intptr_t);
const char* miqt_exec_callback_QsciLexerYAML_autoCompletionFillups(const QsciLexerYAML*, intptr_t);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QsciLexerYAML_autoCompletionWordSeparators(const QsciLexerYAML*, intptr_t);
const char* miqt_exec_callback_QsciLexerYAML_blockEnd(const QsciLexerYAML*, intptr_t, int*);
int miqt_exec_callback_QsciLexerYAML_blockLookback(const QsciLexerYAML*, intptr_t);
const char* miqt_exec_callback_QsciLexerYAML_blockStart(const QsciLexerYAML*, intptr_t, int*);
const char* miqt_exec_callback_QsciLexerYAML_blockStartKeyword(const QsciLexerYAML*, intptr_t, int*);
int miqt_exec_callback_QsciLexerYAML_braceStyle(const QsciLexerYAML*, intptr_t);
bool miqt_exec_callback_QsciLexerYAML_caseSensitive(const QsciLexerYAML*, intptr_t);
QColor* miqt_exec_callback_QsciLexerYAML_color(const QsciLexerYAML*, intptr_t, int);
bool miqt_exec_callback_QsciLexerYAML_eolFill(const QsciLexerYAML*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerYAML_font(const QsciLexerYAML*, intptr_t, int);
int miqt_exec_callback_QsciLexerYAML_indentationGuideView(const QsciLexerYAML*, intptr_t);
const char* miqt_exec_callback_QsciLexerYAML_keywords(const QsciLexerYAML*, intptr_t, int);
int miqt_exec_callback_QsciLexerYAML_defaultStyle(const QsciLexerYAML*, intptr_t);
struct miqt_string miqt_exec_callback_QsciLexerYAML_description(const QsciLexerYAML*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerYAML_paper(const QsciLexerYAML*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerYAML_defaultColorWithStyle(const QsciLexerYAML*, intptr_t, int);
bool miqt_exec_callback_QsciLexerYAML_defaultEolFill(const QsciLexerYAML*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerYAML_defaultFontWithStyle(const QsciLexerYAML*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerYAML_defaultPaperWithStyle(const QsciLexerYAML*, intptr_t, int);
void miqt_exec_callback_QsciLexerYAML_setEditor(QsciLexerYAML*, intptr_t, QsciScintilla*);
void miqt_exec_callback_QsciLexerYAML_refreshProperties(QsciLexerYAML*, intptr_t);
int miqt_exec_callback_QsciLexerYAML_styleBitsNeeded(const QsciLexerYAML*, intptr_t);
const char* miqt_exec_callback_QsciLexerYAML_wordCharacters(const QsciLexerYAML*, intptr_t);
void miqt_exec_callback_QsciLexerYAML_setAutoIndentStyle(QsciLexerYAML*, intptr_t, int);
void miqt_exec_callback_QsciLexerYAML_setColor(QsciLexerYAML*, intptr_t, QColor*, int);
void miqt_exec_callback_QsciLexerYAML_setEolFill(QsciLexerYAML*, intptr_t, bool, int);
void miqt_exec_callback_QsciLexerYAML_setFont(QsciLexerYAML*, intptr_t, QFont*, int);
void miqt_exec_callback_QsciLexerYAML_setPaper(QsciLexerYAML*, intptr_t, QColor*, int);
bool miqt_exec_callback_QsciLexerYAML_readProperties(QsciLexerYAML*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerYAML_writeProperties(const QsciLexerYAML*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerYAML_event(QsciLexerYAML*, intptr_t, QEvent*);
bool miqt_exec_callback_QsciLexerYAML_eventFilter(QsciLexerYAML*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QsciLexerYAML_timerEvent(QsciLexerYAML*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QsciLexerYAML_childEvent(QsciLexerYAML*, intptr_t, QChildEvent*);
void miqt_exec_callback_QsciLexerYAML_customEvent(QsciLexerYAML*, intptr_t, QEvent*);
void miqt_exec_callback_QsciLexerYAML_connectNotify(QsciLexerYAML*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QsciLexerYAML_disconnectNotify(QsciLexerYAML*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciLexerYAML final : public QsciLexerYAML {
public:

	MiqtVirtualQsciLexerYAML(): QsciLexerYAML() {}
	MiqtVirtualQsciLexerYAML(QObject* parent): QsciLexerYAML(parent) {}

	virtual ~MiqtVirtualQsciLexerYAML() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> handle__setFoldComments;

	// Subclass to allow providing a Go implementation
	virtual void setFoldComments(bool fold) override {
		if (!handle__setFoldComments) {
			QsciLexerYAML::setFoldComments(fold);
			return;
		}

		bool sigval1 = fold;
		miqt_exec_callback_QsciLexerYAML_setFoldComments(this, handle__setFoldComments.value(), sigval1);

	}

	friend void QsciLexerYAML_virtualbase_setFoldComments(void* self, bool fold);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> handle__language;

	// Subclass to allow providing a Go implementation
	virtual const char* language() const override {
		if (!handle__language) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerYAML_language(this, handle__language.value());
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> handle__lexer;

	// Subclass to allow providing a Go implementation
	virtual const char* lexer() const override {
		if (!handle__lexer) {
			return QsciLexerYAML::lexer();
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerYAML_lexer(this, handle__lexer.value());
		return callback_return_value;
	}

	friend const char* QsciLexerYAML_virtualbase_lexer(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> handle__lexerId;

	// Subclass to allow providing a Go implementation
	virtual int lexerId() const override {
		if (!handle__lexerId) {
			return QsciLexerYAML::lexerId();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerYAML_lexerId(this, handle__lexerId.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerYAML_virtualbase_lexerId(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> handle__autoCompletionFillups;

	// Subclass to allow providing a Go implementation
	virtual const char* autoCompletionFillups() const override {
		if (!handle__autoCompletionFillups) {
			return QsciLexerYAML::autoCompletionFillups();
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerYAML_autoCompletionFillups(this, handle__autoCompletionFillups.value());
		return callback_return_value;
	}

	friend const char* QsciLexerYAML_virtualbase_autoCompletionFillups(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> handle__autoCompletionWordSeparators;

	// Subclass to allow providing a Go implementation
	virtual QStringList autoCompletionWordSeparators() const override {
		if (!handle__autoCompletionWordSeparators) {
			return QsciLexerYAML::autoCompletionWordSeparators();
		}

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QsciLexerYAML_autoCompletionWordSeparators(this, handle__autoCompletionWordSeparators.value());
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

	friend struct miqt_array /* of struct miqt_string */  QsciLexerYAML_virtualbase_autoCompletionWordSeparators(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> handle__blockEnd;

	// Subclass to allow providing a Go implementation
	virtual const char* blockEnd(int* style) const override {
		if (!handle__blockEnd) {
			return QsciLexerYAML::blockEnd(style);
		}

		int* sigval1 = style;
		const char* callback_return_value = miqt_exec_callback_QsciLexerYAML_blockEnd(this, handle__blockEnd.value(), sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerYAML_virtualbase_blockEnd(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> handle__blockLookback;

	// Subclass to allow providing a Go implementation
	virtual int blockLookback() const override {
		if (!handle__blockLookback) {
			return QsciLexerYAML::blockLookback();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerYAML_blockLookback(this, handle__blockLookback.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerYAML_virtualbase_blockLookback(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> handle__blockStart;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStart(int* style) const override {
		if (!handle__blockStart) {
			return QsciLexerYAML::blockStart(style);
		}

		int* sigval1 = style;
		const char* callback_return_value = miqt_exec_callback_QsciLexerYAML_blockStart(this, handle__blockStart.value(), sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerYAML_virtualbase_blockStart(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> handle__blockStartKeyword;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStartKeyword(int* style) const override {
		if (!handle__blockStartKeyword) {
			return QsciLexerYAML::blockStartKeyword(style);
		}

		int* sigval1 = style;
		const char* callback_return_value = miqt_exec_callback_QsciLexerYAML_blockStartKeyword(this, handle__blockStartKeyword.value(), sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerYAML_virtualbase_blockStartKeyword(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> handle__braceStyle;

	// Subclass to allow providing a Go implementation
	virtual int braceStyle() const override {
		if (!handle__braceStyle) {
			return QsciLexerYAML::braceStyle();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerYAML_braceStyle(this, handle__braceStyle.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerYAML_virtualbase_braceStyle(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> handle__caseSensitive;

	// Subclass to allow providing a Go implementation
	virtual bool caseSensitive() const override {
		if (!handle__caseSensitive) {
			return QsciLexerYAML::caseSensitive();
		}

		bool callback_return_value = miqt_exec_callback_QsciLexerYAML_caseSensitive(this, handle__caseSensitive.value());
		return callback_return_value;
	}

	friend bool QsciLexerYAML_virtualbase_caseSensitive(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> handle__color;

	// Subclass to allow providing a Go implementation
	virtual QColor color(int style) const override {
		if (!handle__color) {
			return QsciLexerYAML::color(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerYAML_color(this, handle__color.value(), sigval1);
		return *callback_return_value;
	}

	friend QColor* QsciLexerYAML_virtualbase_color(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> handle__eolFill;

	// Subclass to allow providing a Go implementation
	virtual bool eolFill(int style) const override {
		if (!handle__eolFill) {
			return QsciLexerYAML::eolFill(style);
		}

		int sigval1 = style;
		bool callback_return_value = miqt_exec_callback_QsciLexerYAML_eolFill(this, handle__eolFill.value(), sigval1);
		return callback_return_value;
	}

	friend bool QsciLexerYAML_virtualbase_eolFill(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> handle__font;

	// Subclass to allow providing a Go implementation
	virtual QFont font(int style) const override {
		if (!handle__font) {
			return QsciLexerYAML::font(style);
		}

		int sigval1 = style;
		QFont* callback_return_value = miqt_exec_callback_QsciLexerYAML_font(this, handle__font.value(), sigval1);
		return *callback_return_value;
	}

	friend QFont* QsciLexerYAML_virtualbase_font(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> handle__indentationGuideView;

	// Subclass to allow providing a Go implementation
	virtual int indentationGuideView() const override {
		if (!handle__indentationGuideView) {
			return QsciLexerYAML::indentationGuideView();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerYAML_indentationGuideView(this, handle__indentationGuideView.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerYAML_virtualbase_indentationGuideView(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> handle__keywords;

	// Subclass to allow providing a Go implementation
	virtual const char* keywords(int set) const override {
		if (!handle__keywords) {
			return QsciLexerYAML::keywords(set);
		}

		int sigval1 = set;
		const char* callback_return_value = miqt_exec_callback_QsciLexerYAML_keywords(this, handle__keywords.value(), sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerYAML_virtualbase_keywords(const void* self, int set);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> handle__defaultStyle;

	// Subclass to allow providing a Go implementation
	virtual int defaultStyle() const override {
		if (!handle__defaultStyle) {
			return QsciLexerYAML::defaultStyle();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerYAML_defaultStyle(this, handle__defaultStyle.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerYAML_virtualbase_defaultStyle(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> handle__description;

	// Subclass to allow providing a Go implementation
	virtual QString description(int style) const override {
		if (!handle__description) {
			return QString(); // Pure virtual, there is no base we can call
		}

		int sigval1 = style;
		struct miqt_string callback_return_value = miqt_exec_callback_QsciLexerYAML_description(this, handle__description.value(), sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		free(callback_return_value.data);
		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> handle__paper;

	// Subclass to allow providing a Go implementation
	virtual QColor paper(int style) const override {
		if (!handle__paper) {
			return QsciLexerYAML::paper(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerYAML_paper(this, handle__paper.value(), sigval1);
		return *callback_return_value;
	}

	friend QColor* QsciLexerYAML_virtualbase_paper(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> handle__defaultColorWithStyle;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultColor(int style) const override {
		if (!handle__defaultColorWithStyle) {
			return QsciLexerYAML::defaultColor(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerYAML_defaultColorWithStyle(this, handle__defaultColorWithStyle.value(), sigval1);
		return *callback_return_value;
	}

	friend QColor* QsciLexerYAML_virtualbase_defaultColorWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> handle__defaultEolFill;

	// Subclass to allow providing a Go implementation
	virtual bool defaultEolFill(int style) const override {
		if (!handle__defaultEolFill) {
			return QsciLexerYAML::defaultEolFill(style);
		}

		int sigval1 = style;
		bool callback_return_value = miqt_exec_callback_QsciLexerYAML_defaultEolFill(this, handle__defaultEolFill.value(), sigval1);
		return callback_return_value;
	}

	friend bool QsciLexerYAML_virtualbase_defaultEolFill(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> handle__defaultFontWithStyle;

	// Subclass to allow providing a Go implementation
	virtual QFont defaultFont(int style) const override {
		if (!handle__defaultFontWithStyle) {
			return QsciLexerYAML::defaultFont(style);
		}

		int sigval1 = style;
		QFont* callback_return_value = miqt_exec_callback_QsciLexerYAML_defaultFontWithStyle(this, handle__defaultFontWithStyle.value(), sigval1);
		return *callback_return_value;
	}

	friend QFont* QsciLexerYAML_virtualbase_defaultFontWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> handle__defaultPaperWithStyle;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultPaper(int style) const override {
		if (!handle__defaultPaperWithStyle) {
			return QsciLexerYAML::defaultPaper(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerYAML_defaultPaperWithStyle(this, handle__defaultPaperWithStyle.value(), sigval1);
		return *callback_return_value;
	}

	friend QColor* QsciLexerYAML_virtualbase_defaultPaperWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> handle__setEditor;

	// Subclass to allow providing a Go implementation
	virtual void setEditor(QsciScintilla* editor) override {
		if (!handle__setEditor) {
			QsciLexerYAML::setEditor(editor);
			return;
		}

		QsciScintilla* sigval1 = editor;
		miqt_exec_callback_QsciLexerYAML_setEditor(this, handle__setEditor.value(), sigval1);

	}

	friend void QsciLexerYAML_virtualbase_setEditor(void* self, QsciScintilla* editor);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> handle__refreshProperties;

	// Subclass to allow providing a Go implementation
	virtual void refreshProperties() override {
		if (!handle__refreshProperties) {
			QsciLexerYAML::refreshProperties();
			return;
		}

		miqt_exec_callback_QsciLexerYAML_refreshProperties(this, handle__refreshProperties.value());

	}

	friend void QsciLexerYAML_virtualbase_refreshProperties(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> handle__styleBitsNeeded;

	// Subclass to allow providing a Go implementation
	virtual int styleBitsNeeded() const override {
		if (!handle__styleBitsNeeded) {
			return QsciLexerYAML::styleBitsNeeded();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerYAML_styleBitsNeeded(this, handle__styleBitsNeeded.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerYAML_virtualbase_styleBitsNeeded(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> handle__wordCharacters;

	// Subclass to allow providing a Go implementation
	virtual const char* wordCharacters() const override {
		if (!handle__wordCharacters) {
			return QsciLexerYAML::wordCharacters();
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerYAML_wordCharacters(this, handle__wordCharacters.value());
		return callback_return_value;
	}

	friend const char* QsciLexerYAML_virtualbase_wordCharacters(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> handle__setAutoIndentStyle;

	// Subclass to allow providing a Go implementation
	virtual void setAutoIndentStyle(int autoindentstyle) override {
		if (!handle__setAutoIndentStyle) {
			QsciLexerYAML::setAutoIndentStyle(autoindentstyle);
			return;
		}

		int sigval1 = autoindentstyle;
		miqt_exec_callback_QsciLexerYAML_setAutoIndentStyle(this, handle__setAutoIndentStyle.value(), sigval1);

	}

	friend void QsciLexerYAML_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> handle__setColor;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& c, int style) override {
		if (!handle__setColor) {
			QsciLexerYAML::setColor(c, style);
			return;
		}

		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexerYAML_setColor(this, handle__setColor.value(), sigval1, sigval2);

	}

	friend void QsciLexerYAML_virtualbase_setColor(void* self, QColor* c, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> handle__setEolFill;

	// Subclass to allow providing a Go implementation
	virtual void setEolFill(bool eoffill, int style) override {
		if (!handle__setEolFill) {
			QsciLexerYAML::setEolFill(eoffill, style);
			return;
		}

		bool sigval1 = eoffill;
		int sigval2 = style;
		miqt_exec_callback_QsciLexerYAML_setEolFill(this, handle__setEolFill.value(), sigval1, sigval2);

	}

	friend void QsciLexerYAML_virtualbase_setEolFill(void* self, bool eoffill, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> handle__setFont;

	// Subclass to allow providing a Go implementation
	virtual void setFont(const QFont& f, int style) override {
		if (!handle__setFont) {
			QsciLexerYAML::setFont(f, style);
			return;
		}

		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexerYAML_setFont(this, handle__setFont.value(), sigval1, sigval2);

	}

	friend void QsciLexerYAML_virtualbase_setFont(void* self, QFont* f, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> handle__setPaper;

	// Subclass to allow providing a Go implementation
	virtual void setPaper(const QColor& c, int style) override {
		if (!handle__setPaper) {
			QsciLexerYAML::setPaper(c, style);
			return;
		}

		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexerYAML_setPaper(this, handle__setPaper.value(), sigval1, sigval2);

	}

	friend void QsciLexerYAML_virtualbase_setPaper(void* self, QColor* c, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> handle__readProperties;

	// Subclass to allow providing a Go implementation
	virtual bool readProperties(QSettings& qs, const QString& prefix) override {
		if (!handle__readProperties) {
			return QsciLexerYAML::readProperties(qs, prefix);
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
		bool callback_return_value = miqt_exec_callback_QsciLexerYAML_readProperties(this, handle__readProperties.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QsciLexerYAML_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> handle__writeProperties;

	// Subclass to allow providing a Go implementation
	virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
		if (!handle__writeProperties) {
			return QsciLexerYAML::writeProperties(qs, prefix);
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
		bool callback_return_value = miqt_exec_callback_QsciLexerYAML_writeProperties(this, handle__writeProperties.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QsciLexerYAML_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QsciLexerYAML::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QsciLexerYAML_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QsciLexerYAML_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QsciLexerYAML::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QsciLexerYAML_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QsciLexerYAML_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QsciLexerYAML::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QsciLexerYAML_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QsciLexerYAML_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QsciLexerYAML::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QsciLexerYAML_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QsciLexerYAML_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QsciLexerYAML::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QsciLexerYAML_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QsciLexerYAML_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QsciLexerYAML::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QsciLexerYAML_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QsciLexerYAML_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QsciLexerYAML::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QsciLexerYAML_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QsciLexerYAML_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend bool QsciLexerYAML_protectedbase_readProperties(bool* _dynamic_cast_ok, void* self, QSettings* qs, struct miqt_string prefix);
	friend bool QsciLexerYAML_protectedbase_writeProperties(bool* _dynamic_cast_ok, const void* self, QSettings* qs, struct miqt_string prefix);
	friend QObject* QsciLexerYAML_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QsciLexerYAML_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QsciLexerYAML_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QsciLexerYAML_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QsciLexerYAML* QsciLexerYAML_new() {
	return new (std::nothrow) MiqtVirtualQsciLexerYAML();
}

QsciLexerYAML* QsciLexerYAML_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQsciLexerYAML(parent);
}

void QsciLexerYAML_virtbase(QsciLexerYAML* src, QsciLexer** outptr_QsciLexer) {
	*outptr_QsciLexer = static_cast<QsciLexer*>(src);
}

QMetaObject* QsciLexerYAML_metaObject(const QsciLexerYAML* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerYAML_metacast(QsciLexerYAML* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerYAML_tr(const char* s) {
	QString _ret = QsciLexerYAML::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerYAML_language(const QsciLexerYAML* self) {
	return (const char*) self->language();
}

const char* QsciLexerYAML_lexer(const QsciLexerYAML* self) {
	return (const char*) self->lexer();
}

QColor* QsciLexerYAML_defaultColor(const QsciLexerYAML* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerYAML_defaultEolFill(const QsciLexerYAML* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerYAML_defaultFont(const QsciLexerYAML* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerYAML_defaultPaper(const QsciLexerYAML* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerYAML_keywords(const QsciLexerYAML* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerYAML_description(const QsciLexerYAML* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerYAML_refreshProperties(QsciLexerYAML* self) {
	self->refreshProperties();
}

bool QsciLexerYAML_foldComments(const QsciLexerYAML* self) {
	return self->foldComments();
}

void QsciLexerYAML_setFoldComments(QsciLexerYAML* self, bool fold) {
	self->setFoldComments(fold);
}

struct miqt_string QsciLexerYAML_tr2(const char* s, const char* c) {
	QString _ret = QsciLexerYAML::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerYAML_tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerYAML::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QsciLexerYAML_override_virtual_setFoldComments(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> slot_handle(slot);
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFoldComments = std::move(slot_handle);
	return true;
}

void QsciLexerYAML_virtualbase_setFoldComments(void* self, bool fold) {
	static_cast<MiqtVirtualQsciLexerYAML*>(self)->QsciLexerYAML::setFoldComments(fold);
}

bool QsciLexerYAML_override_virtual_language(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> slot_handle(slot);
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__language = std::move(slot_handle);
	return true;
}

bool QsciLexerYAML_override_virtual_lexer(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> slot_handle(slot);
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__lexer = std::move(slot_handle);
	return true;
}

const char* QsciLexerYAML_virtualbase_lexer(const void* self) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerYAML*>(self)->QsciLexerYAML::lexer();
}

bool QsciLexerYAML_override_virtual_lexerId(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> slot_handle(slot);
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__lexerId = std::move(slot_handle);
	return true;
}

int QsciLexerYAML_virtualbase_lexerId(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerYAML*>(self)->QsciLexerYAML::lexerId();
}

bool QsciLexerYAML_override_virtual_autoCompletionFillups(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> slot_handle(slot);
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__autoCompletionFillups = std::move(slot_handle);
	return true;
}

const char* QsciLexerYAML_virtualbase_autoCompletionFillups(const void* self) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerYAML*>(self)->QsciLexerYAML::autoCompletionFillups();
}

bool QsciLexerYAML_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> slot_handle(slot);
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__autoCompletionWordSeparators = std::move(slot_handle);
	return true;
}

struct miqt_array /* of struct miqt_string */  QsciLexerYAML_virtualbase_autoCompletionWordSeparators(const void* self) {
	QStringList _ret = static_cast<const MiqtVirtualQsciLexerYAML*>(self)->QsciLexerYAML::autoCompletionWordSeparators();
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

bool QsciLexerYAML_override_virtual_blockEnd(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> slot_handle(slot);
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockEnd = std::move(slot_handle);
	return true;
}

const char* QsciLexerYAML_virtualbase_blockEnd(const void* self, int* style) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerYAML*>(self)->QsciLexerYAML::blockEnd(static_cast<int*>(style));
}

bool QsciLexerYAML_override_virtual_blockLookback(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> slot_handle(slot);
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockLookback = std::move(slot_handle);
	return true;
}

int QsciLexerYAML_virtualbase_blockLookback(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerYAML*>(self)->QsciLexerYAML::blockLookback();
}

bool QsciLexerYAML_override_virtual_blockStart(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> slot_handle(slot);
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockStart = std::move(slot_handle);
	return true;
}

const char* QsciLexerYAML_virtualbase_blockStart(const void* self, int* style) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerYAML*>(self)->QsciLexerYAML::blockStart(static_cast<int*>(style));
}

bool QsciLexerYAML_override_virtual_blockStartKeyword(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> slot_handle(slot);
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockStartKeyword = std::move(slot_handle);
	return true;
}

const char* QsciLexerYAML_virtualbase_blockStartKeyword(const void* self, int* style) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerYAML*>(self)->QsciLexerYAML::blockStartKeyword(static_cast<int*>(style));
}

bool QsciLexerYAML_override_virtual_braceStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> slot_handle(slot);
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__braceStyle = std::move(slot_handle);
	return true;
}

int QsciLexerYAML_virtualbase_braceStyle(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerYAML*>(self)->QsciLexerYAML::braceStyle();
}

bool QsciLexerYAML_override_virtual_caseSensitive(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> slot_handle(slot);
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__caseSensitive = std::move(slot_handle);
	return true;
}

bool QsciLexerYAML_virtualbase_caseSensitive(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerYAML*>(self)->QsciLexerYAML::caseSensitive();
}

bool QsciLexerYAML_override_virtual_color(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> slot_handle(slot);
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__color = std::move(slot_handle);
	return true;
}

QColor* QsciLexerYAML_virtualbase_color(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerYAML*>(self)->QsciLexerYAML::color(static_cast<int>(style)));
}

bool QsciLexerYAML_override_virtual_eolFill(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> slot_handle(slot);
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eolFill = std::move(slot_handle);
	return true;
}

bool QsciLexerYAML_virtualbase_eolFill(const void* self, int style) {
	return static_cast<const MiqtVirtualQsciLexerYAML*>(self)->QsciLexerYAML::eolFill(static_cast<int>(style));
}

bool QsciLexerYAML_override_virtual_font(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> slot_handle(slot);
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__font = std::move(slot_handle);
	return true;
}

QFont* QsciLexerYAML_virtualbase_font(const void* self, int style) {
	return new QFont(static_cast<const MiqtVirtualQsciLexerYAML*>(self)->QsciLexerYAML::font(static_cast<int>(style)));
}

bool QsciLexerYAML_override_virtual_indentationGuideView(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> slot_handle(slot);
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__indentationGuideView = std::move(slot_handle);
	return true;
}

int QsciLexerYAML_virtualbase_indentationGuideView(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerYAML*>(self)->QsciLexerYAML::indentationGuideView();
}

bool QsciLexerYAML_override_virtual_keywords(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> slot_handle(slot);
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keywords = std::move(slot_handle);
	return true;
}

const char* QsciLexerYAML_virtualbase_keywords(const void* self, int set) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerYAML*>(self)->QsciLexerYAML::keywords(static_cast<int>(set));
}

bool QsciLexerYAML_override_virtual_defaultStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> slot_handle(slot);
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultStyle = std::move(slot_handle);
	return true;
}

int QsciLexerYAML_virtualbase_defaultStyle(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerYAML*>(self)->QsciLexerYAML::defaultStyle();
}

bool QsciLexerYAML_override_virtual_description(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> slot_handle(slot);
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__description = std::move(slot_handle);
	return true;
}

bool QsciLexerYAML_override_virtual_paper(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> slot_handle(slot);
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paper = std::move(slot_handle);
	return true;
}

QColor* QsciLexerYAML_virtualbase_paper(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerYAML*>(self)->QsciLexerYAML::paper(static_cast<int>(style)));
}

bool QsciLexerYAML_override_virtual_defaultColorWithStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> slot_handle(slot);
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultColorWithStyle = std::move(slot_handle);
	return true;
}

QColor* QsciLexerYAML_virtualbase_defaultColorWithStyle(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerYAML*>(self)->QsciLexerYAML::defaultColor(static_cast<int>(style)));
}

bool QsciLexerYAML_override_virtual_defaultEolFill(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> slot_handle(slot);
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultEolFill = std::move(slot_handle);
	return true;
}

bool QsciLexerYAML_virtualbase_defaultEolFill(const void* self, int style) {
	return static_cast<const MiqtVirtualQsciLexerYAML*>(self)->QsciLexerYAML::defaultEolFill(static_cast<int>(style));
}

bool QsciLexerYAML_override_virtual_defaultFontWithStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> slot_handle(slot);
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultFontWithStyle = std::move(slot_handle);
	return true;
}

QFont* QsciLexerYAML_virtualbase_defaultFontWithStyle(const void* self, int style) {
	return new QFont(static_cast<const MiqtVirtualQsciLexerYAML*>(self)->QsciLexerYAML::defaultFont(static_cast<int>(style)));
}

bool QsciLexerYAML_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> slot_handle(slot);
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultPaperWithStyle = std::move(slot_handle);
	return true;
}

QColor* QsciLexerYAML_virtualbase_defaultPaperWithStyle(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerYAML*>(self)->QsciLexerYAML::defaultPaper(static_cast<int>(style)));
}

bool QsciLexerYAML_override_virtual_setEditor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> slot_handle(slot);
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setEditor = std::move(slot_handle);
	return true;
}

void QsciLexerYAML_virtualbase_setEditor(void* self, QsciScintilla* editor) {
	static_cast<MiqtVirtualQsciLexerYAML*>(self)->QsciLexerYAML::setEditor(editor);
}

bool QsciLexerYAML_override_virtual_refreshProperties(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> slot_handle(slot);
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__refreshProperties = std::move(slot_handle);
	return true;
}

void QsciLexerYAML_virtualbase_refreshProperties(void* self) {
	static_cast<MiqtVirtualQsciLexerYAML*>(self)->QsciLexerYAML::refreshProperties();
}

bool QsciLexerYAML_override_virtual_styleBitsNeeded(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> slot_handle(slot);
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__styleBitsNeeded = std::move(slot_handle);
	return true;
}

int QsciLexerYAML_virtualbase_styleBitsNeeded(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerYAML*>(self)->QsciLexerYAML::styleBitsNeeded();
}

bool QsciLexerYAML_override_virtual_wordCharacters(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> slot_handle(slot);
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wordCharacters = std::move(slot_handle);
	return true;
}

const char* QsciLexerYAML_virtualbase_wordCharacters(const void* self) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerYAML*>(self)->QsciLexerYAML::wordCharacters();
}

bool QsciLexerYAML_override_virtual_setAutoIndentStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> slot_handle(slot);
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setAutoIndentStyle = std::move(slot_handle);
	return true;
}

void QsciLexerYAML_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle) {
	static_cast<MiqtVirtualQsciLexerYAML*>(self)->QsciLexerYAML::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

bool QsciLexerYAML_override_virtual_setColor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> slot_handle(slot);
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setColor = std::move(slot_handle);
	return true;
}

void QsciLexerYAML_virtualbase_setColor(void* self, QColor* c, int style) {
	static_cast<MiqtVirtualQsciLexerYAML*>(self)->QsciLexerYAML::setColor(*c, static_cast<int>(style));
}

bool QsciLexerYAML_override_virtual_setEolFill(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> slot_handle(slot);
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setEolFill = std::move(slot_handle);
	return true;
}

void QsciLexerYAML_virtualbase_setEolFill(void* self, bool eoffill, int style) {
	static_cast<MiqtVirtualQsciLexerYAML*>(self)->QsciLexerYAML::setEolFill(eoffill, static_cast<int>(style));
}

bool QsciLexerYAML_override_virtual_setFont(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> slot_handle(slot);
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFont = std::move(slot_handle);
	return true;
}

void QsciLexerYAML_virtualbase_setFont(void* self, QFont* f, int style) {
	static_cast<MiqtVirtualQsciLexerYAML*>(self)->QsciLexerYAML::setFont(*f, static_cast<int>(style));
}

bool QsciLexerYAML_override_virtual_setPaper(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> slot_handle(slot);
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setPaper = std::move(slot_handle);
	return true;
}

void QsciLexerYAML_virtualbase_setPaper(void* self, QColor* c, int style) {
	static_cast<MiqtVirtualQsciLexerYAML*>(self)->QsciLexerYAML::setPaper(*c, static_cast<int>(style));
}

bool QsciLexerYAML_override_virtual_readProperties(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> slot_handle(slot);
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__readProperties = std::move(slot_handle);
	return true;
}

bool QsciLexerYAML_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return static_cast<MiqtVirtualQsciLexerYAML*>(self)->QsciLexerYAML::readProperties(*qs, prefix_QString);
}

bool QsciLexerYAML_override_virtual_writeProperties(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> slot_handle(slot);
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__writeProperties = std::move(slot_handle);
	return true;
}

bool QsciLexerYAML_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return static_cast<const MiqtVirtualQsciLexerYAML*>(self)->QsciLexerYAML::writeProperties(*qs, prefix_QString);
}

bool QsciLexerYAML_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> slot_handle(slot);
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QsciLexerYAML_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQsciLexerYAML*>(self)->QsciLexerYAML::event(event);
}

bool QsciLexerYAML_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> slot_handle(slot);
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QsciLexerYAML_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQsciLexerYAML*>(self)->QsciLexerYAML::eventFilter(watched, event);
}

bool QsciLexerYAML_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> slot_handle(slot);
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QsciLexerYAML_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQsciLexerYAML*>(self)->QsciLexerYAML::timerEvent(event);
}

bool QsciLexerYAML_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> slot_handle(slot);
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QsciLexerYAML_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQsciLexerYAML*>(self)->QsciLexerYAML::childEvent(event);
}

bool QsciLexerYAML_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> slot_handle(slot);
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QsciLexerYAML_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQsciLexerYAML*>(self)->QsciLexerYAML::customEvent(event);
}

bool QsciLexerYAML_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> slot_handle(slot);
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QsciLexerYAML_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQsciLexerYAML*>(self)->QsciLexerYAML::connectNotify(*signal);
}

bool QsciLexerYAML_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerYAML> slot_handle(slot);
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QsciLexerYAML_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQsciLexerYAML*>(self)->QsciLexerYAML::disconnectNotify(*signal);
}

bool QsciLexerYAML_protectedbase_readProperties(bool* _dynamic_cast_ok, void* self, QSettings* qs, struct miqt_string prefix) {
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return self_cast->readProperties(*qs, prefix_QString);
}

bool QsciLexerYAML_protectedbase_writeProperties(bool* _dynamic_cast_ok, const void* self, QSettings* qs, struct miqt_string prefix) {
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return self_cast->writeProperties(*qs, prefix_QString);
}

QObject* QsciLexerYAML_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QsciLexerYAML_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QsciLexerYAML_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QsciLexerYAML_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQsciLexerYAML* self_cast = dynamic_cast<MiqtVirtualQsciLexerYAML*>( (QsciLexerYAML*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QsciLexerYAML_delete(QsciLexerYAML* self) {
	delete self;
}

