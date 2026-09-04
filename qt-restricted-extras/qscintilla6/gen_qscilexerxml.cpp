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
#include <qscilexerxml.h>
#include "gen_qscilexerxml.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QsciLexerXML(intptr_t);
void miqt_exec_callback_QsciLexerXML_setFoldCompact(QsciLexerXML*, intptr_t, bool);
void miqt_exec_callback_QsciLexerXML_setFoldPreprocessor(QsciLexerXML*, intptr_t, bool);
void miqt_exec_callback_QsciLexerXML_setCaseSensitiveTags(QsciLexerXML*, intptr_t, bool);
const char* miqt_exec_callback_QsciLexerXML_language(const QsciLexerXML*, intptr_t);
const char* miqt_exec_callback_QsciLexerXML_lexer(const QsciLexerXML*, intptr_t);
int miqt_exec_callback_QsciLexerXML_lexerId(const QsciLexerXML*, intptr_t);
const char* miqt_exec_callback_QsciLexerXML_autoCompletionFillups(const QsciLexerXML*, intptr_t);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QsciLexerXML_autoCompletionWordSeparators(const QsciLexerXML*, intptr_t);
const char* miqt_exec_callback_QsciLexerXML_blockEnd(const QsciLexerXML*, intptr_t, int*);
int miqt_exec_callback_QsciLexerXML_blockLookback(const QsciLexerXML*, intptr_t);
const char* miqt_exec_callback_QsciLexerXML_blockStart(const QsciLexerXML*, intptr_t, int*);
const char* miqt_exec_callback_QsciLexerXML_blockStartKeyword(const QsciLexerXML*, intptr_t, int*);
int miqt_exec_callback_QsciLexerXML_braceStyle(const QsciLexerXML*, intptr_t);
bool miqt_exec_callback_QsciLexerXML_caseSensitive(const QsciLexerXML*, intptr_t);
QColor* miqt_exec_callback_QsciLexerXML_color(const QsciLexerXML*, intptr_t, int);
bool miqt_exec_callback_QsciLexerXML_eolFill(const QsciLexerXML*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerXML_font(const QsciLexerXML*, intptr_t, int);
int miqt_exec_callback_QsciLexerXML_indentationGuideView(const QsciLexerXML*, intptr_t);
const char* miqt_exec_callback_QsciLexerXML_keywords(const QsciLexerXML*, intptr_t, int);
int miqt_exec_callback_QsciLexerXML_defaultStyle(const QsciLexerXML*, intptr_t);
struct miqt_string miqt_exec_callback_QsciLexerXML_description(const QsciLexerXML*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerXML_paper(const QsciLexerXML*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerXML_defaultColorWithStyle(const QsciLexerXML*, intptr_t, int);
bool miqt_exec_callback_QsciLexerXML_defaultEolFill(const QsciLexerXML*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerXML_defaultFontWithStyle(const QsciLexerXML*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerXML_defaultPaperWithStyle(const QsciLexerXML*, intptr_t, int);
void miqt_exec_callback_QsciLexerXML_setEditor(QsciLexerXML*, intptr_t, QsciScintilla*);
void miqt_exec_callback_QsciLexerXML_refreshProperties(QsciLexerXML*, intptr_t);
int miqt_exec_callback_QsciLexerXML_styleBitsNeeded(const QsciLexerXML*, intptr_t);
const char* miqt_exec_callback_QsciLexerXML_wordCharacters(const QsciLexerXML*, intptr_t);
void miqt_exec_callback_QsciLexerXML_setAutoIndentStyle(QsciLexerXML*, intptr_t, int);
void miqt_exec_callback_QsciLexerXML_setColor(QsciLexerXML*, intptr_t, QColor*, int);
void miqt_exec_callback_QsciLexerXML_setEolFill(QsciLexerXML*, intptr_t, bool, int);
void miqt_exec_callback_QsciLexerXML_setFont(QsciLexerXML*, intptr_t, QFont*, int);
void miqt_exec_callback_QsciLexerXML_setPaper(QsciLexerXML*, intptr_t, QColor*, int);
bool miqt_exec_callback_QsciLexerXML_readProperties(QsciLexerXML*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerXML_writeProperties(const QsciLexerXML*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerXML_event(QsciLexerXML*, intptr_t, QEvent*);
bool miqt_exec_callback_QsciLexerXML_eventFilter(QsciLexerXML*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QsciLexerXML_timerEvent(QsciLexerXML*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QsciLexerXML_childEvent(QsciLexerXML*, intptr_t, QChildEvent*);
void miqt_exec_callback_QsciLexerXML_customEvent(QsciLexerXML*, intptr_t, QEvent*);
void miqt_exec_callback_QsciLexerXML_connectNotify(QsciLexerXML*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QsciLexerXML_disconnectNotify(QsciLexerXML*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciLexerXML final : public QsciLexerXML {
public:

	MiqtVirtualQsciLexerXML(): QsciLexerXML() {}
	MiqtVirtualQsciLexerXML(QObject* parent): QsciLexerXML(parent) {}

	virtual ~MiqtVirtualQsciLexerXML() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__setFoldCompact;

	// Subclass to allow providing a Go implementation
	virtual void setFoldCompact(bool fold) override {
		if (!handle__setFoldCompact) {
			QsciLexerXML::setFoldCompact(fold);
			return;
		}

		bool sigval1 = fold;
		miqt_exec_callback_QsciLexerXML_setFoldCompact(this, handle__setFoldCompact.value(), sigval1);

	}

	friend void QsciLexerXML_virtualbase_setFoldCompact(void* self, bool fold);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__setFoldPreprocessor;

	// Subclass to allow providing a Go implementation
	virtual void setFoldPreprocessor(bool fold) override {
		if (!handle__setFoldPreprocessor) {
			QsciLexerXML::setFoldPreprocessor(fold);
			return;
		}

		bool sigval1 = fold;
		miqt_exec_callback_QsciLexerXML_setFoldPreprocessor(this, handle__setFoldPreprocessor.value(), sigval1);

	}

	friend void QsciLexerXML_virtualbase_setFoldPreprocessor(void* self, bool fold);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__setCaseSensitiveTags;

	// Subclass to allow providing a Go implementation
	virtual void setCaseSensitiveTags(bool sens) override {
		if (!handle__setCaseSensitiveTags) {
			QsciLexerXML::setCaseSensitiveTags(sens);
			return;
		}

		bool sigval1 = sens;
		miqt_exec_callback_QsciLexerXML_setCaseSensitiveTags(this, handle__setCaseSensitiveTags.value(), sigval1);

	}

	friend void QsciLexerXML_virtualbase_setCaseSensitiveTags(void* self, bool sens);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__language;

	// Subclass to allow providing a Go implementation
	virtual const char* language() const override {
		if (!handle__language) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerXML_language(this, handle__language.value());
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__lexer;

	// Subclass to allow providing a Go implementation
	virtual const char* lexer() const override {
		if (!handle__lexer) {
			return QsciLexerXML::lexer();
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerXML_lexer(this, handle__lexer.value());
		return callback_return_value;
	}

	friend const char* QsciLexerXML_virtualbase_lexer(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__lexerId;

	// Subclass to allow providing a Go implementation
	virtual int lexerId() const override {
		if (!handle__lexerId) {
			return QsciLexerXML::lexerId();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerXML_lexerId(this, handle__lexerId.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerXML_virtualbase_lexerId(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__autoCompletionFillups;

	// Subclass to allow providing a Go implementation
	virtual const char* autoCompletionFillups() const override {
		if (!handle__autoCompletionFillups) {
			return QsciLexerXML::autoCompletionFillups();
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerXML_autoCompletionFillups(this, handle__autoCompletionFillups.value());
		return callback_return_value;
	}

	friend const char* QsciLexerXML_virtualbase_autoCompletionFillups(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__autoCompletionWordSeparators;

	// Subclass to allow providing a Go implementation
	virtual QStringList autoCompletionWordSeparators() const override {
		if (!handle__autoCompletionWordSeparators) {
			return QsciLexerXML::autoCompletionWordSeparators();
		}

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QsciLexerXML_autoCompletionWordSeparators(this, handle__autoCompletionWordSeparators.value());
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

	friend struct miqt_array /* of struct miqt_string */  QsciLexerXML_virtualbase_autoCompletionWordSeparators(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__blockEnd;

	// Subclass to allow providing a Go implementation
	virtual const char* blockEnd(int* style) const override {
		if (!handle__blockEnd) {
			return QsciLexerXML::blockEnd(style);
		}

		int* sigval1 = style;
		const char* callback_return_value = miqt_exec_callback_QsciLexerXML_blockEnd(this, handle__blockEnd.value(), sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerXML_virtualbase_blockEnd(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__blockLookback;

	// Subclass to allow providing a Go implementation
	virtual int blockLookback() const override {
		if (!handle__blockLookback) {
			return QsciLexerXML::blockLookback();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerXML_blockLookback(this, handle__blockLookback.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerXML_virtualbase_blockLookback(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__blockStart;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStart(int* style) const override {
		if (!handle__blockStart) {
			return QsciLexerXML::blockStart(style);
		}

		int* sigval1 = style;
		const char* callback_return_value = miqt_exec_callback_QsciLexerXML_blockStart(this, handle__blockStart.value(), sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerXML_virtualbase_blockStart(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__blockStartKeyword;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStartKeyword(int* style) const override {
		if (!handle__blockStartKeyword) {
			return QsciLexerXML::blockStartKeyword(style);
		}

		int* sigval1 = style;
		const char* callback_return_value = miqt_exec_callback_QsciLexerXML_blockStartKeyword(this, handle__blockStartKeyword.value(), sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerXML_virtualbase_blockStartKeyword(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__braceStyle;

	// Subclass to allow providing a Go implementation
	virtual int braceStyle() const override {
		if (!handle__braceStyle) {
			return QsciLexerXML::braceStyle();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerXML_braceStyle(this, handle__braceStyle.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerXML_virtualbase_braceStyle(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__caseSensitive;

	// Subclass to allow providing a Go implementation
	virtual bool caseSensitive() const override {
		if (!handle__caseSensitive) {
			return QsciLexerXML::caseSensitive();
		}

		bool callback_return_value = miqt_exec_callback_QsciLexerXML_caseSensitive(this, handle__caseSensitive.value());
		return callback_return_value;
	}

	friend bool QsciLexerXML_virtualbase_caseSensitive(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__color;
	bool owns_return__color = false;

	// Subclass to allow providing a Go implementation
	virtual QColor color(int style) const override {
		if (!handle__color) {
			return QsciLexerXML::color(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerXML_color(this, handle__color.value(), sigval1);
		std::unique_ptr<QColor> callback_return_value_owner;
		if (owns_return__color) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QColor* QsciLexerXML_virtualbase_color(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__eolFill;

	// Subclass to allow providing a Go implementation
	virtual bool eolFill(int style) const override {
		if (!handle__eolFill) {
			return QsciLexerXML::eolFill(style);
		}

		int sigval1 = style;
		bool callback_return_value = miqt_exec_callback_QsciLexerXML_eolFill(this, handle__eolFill.value(), sigval1);
		return callback_return_value;
	}

	friend bool QsciLexerXML_virtualbase_eolFill(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__font;
	bool owns_return__font = false;

	// Subclass to allow providing a Go implementation
	virtual QFont font(int style) const override {
		if (!handle__font) {
			return QsciLexerXML::font(style);
		}

		int sigval1 = style;
		QFont* callback_return_value = miqt_exec_callback_QsciLexerXML_font(this, handle__font.value(), sigval1);
		std::unique_ptr<QFont> callback_return_value_owner;
		if (owns_return__font) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QFont* QsciLexerXML_virtualbase_font(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__indentationGuideView;

	// Subclass to allow providing a Go implementation
	virtual int indentationGuideView() const override {
		if (!handle__indentationGuideView) {
			return QsciLexerXML::indentationGuideView();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerXML_indentationGuideView(this, handle__indentationGuideView.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerXML_virtualbase_indentationGuideView(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__keywords;

	// Subclass to allow providing a Go implementation
	virtual const char* keywords(int set) const override {
		if (!handle__keywords) {
			return QsciLexerXML::keywords(set);
		}

		int sigval1 = set;
		const char* callback_return_value = miqt_exec_callback_QsciLexerXML_keywords(this, handle__keywords.value(), sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerXML_virtualbase_keywords(const void* self, int set);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__defaultStyle;

	// Subclass to allow providing a Go implementation
	virtual int defaultStyle() const override {
		if (!handle__defaultStyle) {
			return QsciLexerXML::defaultStyle();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerXML_defaultStyle(this, handle__defaultStyle.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerXML_virtualbase_defaultStyle(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__description;

	// Subclass to allow providing a Go implementation
	virtual QString description(int style) const override {
		if (!handle__description) {
			return QString(); // Pure virtual, there is no base we can call
		}

		int sigval1 = style;
		struct miqt_string callback_return_value = miqt_exec_callback_QsciLexerXML_description(this, handle__description.value(), sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		free(callback_return_value.data);
		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__paper;
	bool owns_return__paper = false;

	// Subclass to allow providing a Go implementation
	virtual QColor paper(int style) const override {
		if (!handle__paper) {
			return QsciLexerXML::paper(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerXML_paper(this, handle__paper.value(), sigval1);
		std::unique_ptr<QColor> callback_return_value_owner;
		if (owns_return__paper) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QColor* QsciLexerXML_virtualbase_paper(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__defaultColorWithStyle;
	bool owns_return__defaultColorWithStyle = false;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultColor(int style) const override {
		if (!handle__defaultColorWithStyle) {
			return QsciLexerXML::defaultColor(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerXML_defaultColorWithStyle(this, handle__defaultColorWithStyle.value(), sigval1);
		std::unique_ptr<QColor> callback_return_value_owner;
		if (owns_return__defaultColorWithStyle) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QColor* QsciLexerXML_virtualbase_defaultColorWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__defaultEolFill;

	// Subclass to allow providing a Go implementation
	virtual bool defaultEolFill(int style) const override {
		if (!handle__defaultEolFill) {
			return QsciLexerXML::defaultEolFill(style);
		}

		int sigval1 = style;
		bool callback_return_value = miqt_exec_callback_QsciLexerXML_defaultEolFill(this, handle__defaultEolFill.value(), sigval1);
		return callback_return_value;
	}

	friend bool QsciLexerXML_virtualbase_defaultEolFill(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__defaultFontWithStyle;
	bool owns_return__defaultFontWithStyle = false;

	// Subclass to allow providing a Go implementation
	virtual QFont defaultFont(int style) const override {
		if (!handle__defaultFontWithStyle) {
			return QsciLexerXML::defaultFont(style);
		}

		int sigval1 = style;
		QFont* callback_return_value = miqt_exec_callback_QsciLexerXML_defaultFontWithStyle(this, handle__defaultFontWithStyle.value(), sigval1);
		std::unique_ptr<QFont> callback_return_value_owner;
		if (owns_return__defaultFontWithStyle) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QFont* QsciLexerXML_virtualbase_defaultFontWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__defaultPaperWithStyle;
	bool owns_return__defaultPaperWithStyle = false;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultPaper(int style) const override {
		if (!handle__defaultPaperWithStyle) {
			return QsciLexerXML::defaultPaper(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerXML_defaultPaperWithStyle(this, handle__defaultPaperWithStyle.value(), sigval1);
		std::unique_ptr<QColor> callback_return_value_owner;
		if (owns_return__defaultPaperWithStyle) {
			callback_return_value_owner.reset(callback_return_value);
		}
		return *callback_return_value;
	}

	friend QColor* QsciLexerXML_virtualbase_defaultPaperWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__setEditor;

	// Subclass to allow providing a Go implementation
	virtual void setEditor(QsciScintilla* editor) override {
		if (!handle__setEditor) {
			QsciLexerXML::setEditor(editor);
			return;
		}

		QsciScintilla* sigval1 = editor;
		miqt_exec_callback_QsciLexerXML_setEditor(this, handle__setEditor.value(), sigval1);

	}

	friend void QsciLexerXML_virtualbase_setEditor(void* self, QsciScintilla* editor);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__refreshProperties;

	// Subclass to allow providing a Go implementation
	virtual void refreshProperties() override {
		if (!handle__refreshProperties) {
			QsciLexerXML::refreshProperties();
			return;
		}

		miqt_exec_callback_QsciLexerXML_refreshProperties(this, handle__refreshProperties.value());

	}

	friend void QsciLexerXML_virtualbase_refreshProperties(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__styleBitsNeeded;

	// Subclass to allow providing a Go implementation
	virtual int styleBitsNeeded() const override {
		if (!handle__styleBitsNeeded) {
			return QsciLexerXML::styleBitsNeeded();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerXML_styleBitsNeeded(this, handle__styleBitsNeeded.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerXML_virtualbase_styleBitsNeeded(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__wordCharacters;

	// Subclass to allow providing a Go implementation
	virtual const char* wordCharacters() const override {
		if (!handle__wordCharacters) {
			return QsciLexerXML::wordCharacters();
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerXML_wordCharacters(this, handle__wordCharacters.value());
		return callback_return_value;
	}

	friend const char* QsciLexerXML_virtualbase_wordCharacters(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__setAutoIndentStyle;

	// Subclass to allow providing a Go implementation
	virtual void setAutoIndentStyle(int autoindentstyle) override {
		if (!handle__setAutoIndentStyle) {
			QsciLexerXML::setAutoIndentStyle(autoindentstyle);
			return;
		}

		int sigval1 = autoindentstyle;
		miqt_exec_callback_QsciLexerXML_setAutoIndentStyle(this, handle__setAutoIndentStyle.value(), sigval1);

	}

	friend void QsciLexerXML_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__setColor;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& c, int style) override {
		if (!handle__setColor) {
			QsciLexerXML::setColor(c, style);
			return;
		}

		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexerXML_setColor(this, handle__setColor.value(), sigval1, sigval2);

	}

	friend void QsciLexerXML_virtualbase_setColor(void* self, QColor* c, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__setEolFill;

	// Subclass to allow providing a Go implementation
	virtual void setEolFill(bool eoffill, int style) override {
		if (!handle__setEolFill) {
			QsciLexerXML::setEolFill(eoffill, style);
			return;
		}

		bool sigval1 = eoffill;
		int sigval2 = style;
		miqt_exec_callback_QsciLexerXML_setEolFill(this, handle__setEolFill.value(), sigval1, sigval2);

	}

	friend void QsciLexerXML_virtualbase_setEolFill(void* self, bool eoffill, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__setFont;

	// Subclass to allow providing a Go implementation
	virtual void setFont(const QFont& f, int style) override {
		if (!handle__setFont) {
			QsciLexerXML::setFont(f, style);
			return;
		}

		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexerXML_setFont(this, handle__setFont.value(), sigval1, sigval2);

	}

	friend void QsciLexerXML_virtualbase_setFont(void* self, QFont* f, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__setPaper;

	// Subclass to allow providing a Go implementation
	virtual void setPaper(const QColor& c, int style) override {
		if (!handle__setPaper) {
			QsciLexerXML::setPaper(c, style);
			return;
		}

		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexerXML_setPaper(this, handle__setPaper.value(), sigval1, sigval2);

	}

	friend void QsciLexerXML_virtualbase_setPaper(void* self, QColor* c, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__readProperties;

	// Subclass to allow providing a Go implementation
	virtual bool readProperties(QSettings& qs, const QString& prefix) override {
		if (!handle__readProperties) {
			return QsciLexerXML::readProperties(qs, prefix);
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
		bool callback_return_value = miqt_exec_callback_QsciLexerXML_readProperties(this, handle__readProperties.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QsciLexerXML_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__writeProperties;

	// Subclass to allow providing a Go implementation
	virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
		if (!handle__writeProperties) {
			return QsciLexerXML::writeProperties(qs, prefix);
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
		bool callback_return_value = miqt_exec_callback_QsciLexerXML_writeProperties(this, handle__writeProperties.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QsciLexerXML_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QsciLexerXML::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QsciLexerXML_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QsciLexerXML_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QsciLexerXML::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QsciLexerXML_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QsciLexerXML_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QsciLexerXML::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QsciLexerXML_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QsciLexerXML_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QsciLexerXML::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QsciLexerXML_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QsciLexerXML_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QsciLexerXML::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QsciLexerXML_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QsciLexerXML_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QsciLexerXML::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QsciLexerXML_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QsciLexerXML_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QsciLexerXML::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QsciLexerXML_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QsciLexerXML_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend bool QsciLexerXML_protectedbase_readProperties(bool* _dynamic_cast_ok, void* self, QSettings* qs, struct miqt_string prefix);
	friend bool QsciLexerXML_protectedbase_writeProperties(bool* _dynamic_cast_ok, const void* self, QSettings* qs, struct miqt_string prefix);
	friend QObject* QsciLexerXML_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QsciLexerXML_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QsciLexerXML_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QsciLexerXML_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QsciLexerXML* QsciLexerXML_new() {
	return new (std::nothrow) MiqtVirtualQsciLexerXML();
}

QsciLexerXML* QsciLexerXML_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQsciLexerXML(parent);
}

void QsciLexerXML_virtbase(QsciLexerXML* src, QsciLexerHTML** outptr_QsciLexerHTML) {
	*outptr_QsciLexerHTML = static_cast<QsciLexerHTML*>(src);
}

QMetaObject* QsciLexerXML_metaObject(const QsciLexerXML* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerXML_metacast(QsciLexerXML* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerXML_tr(const char* s) {
	QString _ret = QsciLexerXML::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerXML_language(const QsciLexerXML* self) {
	return (const char*) self->language();
}

const char* QsciLexerXML_lexer(const QsciLexerXML* self) {
	return (const char*) self->lexer();
}

QColor* QsciLexerXML_defaultColor(const QsciLexerXML* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerXML_defaultEolFill(const QsciLexerXML* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerXML_defaultFont(const QsciLexerXML* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerXML_defaultPaper(const QsciLexerXML* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerXML_keywords(const QsciLexerXML* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

void QsciLexerXML_refreshProperties(QsciLexerXML* self) {
	self->refreshProperties();
}

void QsciLexerXML_setScriptsStyled(QsciLexerXML* self, bool styled) {
	self->setScriptsStyled(styled);
}

bool QsciLexerXML_scriptsStyled(const QsciLexerXML* self) {
	return self->scriptsStyled();
}

struct miqt_string QsciLexerXML_tr2(const char* s, const char* c) {
	QString _ret = QsciLexerXML::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerXML_tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerXML::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QsciLexerXML_override_virtual_setFoldCompact(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFoldCompact = std::move(slot_handle);
	return true;
}

void QsciLexerXML_virtualbase_setFoldCompact(void* self, bool fold) {
	static_cast<MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::setFoldCompact(fold);
}

bool QsciLexerXML_override_virtual_setFoldPreprocessor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFoldPreprocessor = std::move(slot_handle);
	return true;
}

void QsciLexerXML_virtualbase_setFoldPreprocessor(void* self, bool fold) {
	static_cast<MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::setFoldPreprocessor(fold);
}

bool QsciLexerXML_override_virtual_setCaseSensitiveTags(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setCaseSensitiveTags = std::move(slot_handle);
	return true;
}

void QsciLexerXML_virtualbase_setCaseSensitiveTags(void* self, bool sens) {
	static_cast<MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::setCaseSensitiveTags(sens);
}

bool QsciLexerXML_override_virtual_language(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__language = std::move(slot_handle);
	return true;
}

bool QsciLexerXML_override_virtual_lexer(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__lexer = std::move(slot_handle);
	return true;
}

const char* QsciLexerXML_virtualbase_lexer(const void* self) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::lexer();
}

bool QsciLexerXML_override_virtual_lexerId(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__lexerId = std::move(slot_handle);
	return true;
}

int QsciLexerXML_virtualbase_lexerId(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::lexerId();
}

bool QsciLexerXML_override_virtual_autoCompletionFillups(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__autoCompletionFillups = std::move(slot_handle);
	return true;
}

const char* QsciLexerXML_virtualbase_autoCompletionFillups(const void* self) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::autoCompletionFillups();
}

bool QsciLexerXML_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__autoCompletionWordSeparators = std::move(slot_handle);
	return true;
}

struct miqt_array /* of struct miqt_string */  QsciLexerXML_virtualbase_autoCompletionWordSeparators(const void* self) {
	QStringList _ret = static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::autoCompletionWordSeparators();
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

bool QsciLexerXML_override_virtual_blockEnd(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockEnd = std::move(slot_handle);
	return true;
}

const char* QsciLexerXML_virtualbase_blockEnd(const void* self, int* style) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::blockEnd(static_cast<int*>(style));
}

bool QsciLexerXML_override_virtual_blockLookback(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockLookback = std::move(slot_handle);
	return true;
}

int QsciLexerXML_virtualbase_blockLookback(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::blockLookback();
}

bool QsciLexerXML_override_virtual_blockStart(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockStart = std::move(slot_handle);
	return true;
}

const char* QsciLexerXML_virtualbase_blockStart(const void* self, int* style) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::blockStart(static_cast<int*>(style));
}

bool QsciLexerXML_override_virtual_blockStartKeyword(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockStartKeyword = std::move(slot_handle);
	return true;
}

const char* QsciLexerXML_virtualbase_blockStartKeyword(const void* self, int* style) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::blockStartKeyword(static_cast<int*>(style));
}

bool QsciLexerXML_override_virtual_braceStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__braceStyle = std::move(slot_handle);
	return true;
}

int QsciLexerXML_virtualbase_braceStyle(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::braceStyle();
}

bool QsciLexerXML_override_virtual_caseSensitive(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__caseSensitive = std::move(slot_handle);
	return true;
}

bool QsciLexerXML_virtualbase_caseSensitive(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::caseSensitive();
}

bool QsciLexerXML_override_virtual_color(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__color = std::move(slot_handle);
	self_cast->owns_return__color = false;
	return true;
}

bool QsciLexerXML_override_virtual_owned_color(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__color = std::move(slot_handle);
	self_cast->owns_return__color = true;
	return true;
}

QColor* QsciLexerXML_virtualbase_color(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::color(static_cast<int>(style)));
}

bool QsciLexerXML_override_virtual_eolFill(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eolFill = std::move(slot_handle);
	return true;
}

bool QsciLexerXML_virtualbase_eolFill(const void* self, int style) {
	return static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::eolFill(static_cast<int>(style));
}

bool QsciLexerXML_override_virtual_font(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__font = std::move(slot_handle);
	self_cast->owns_return__font = false;
	return true;
}

bool QsciLexerXML_override_virtual_owned_font(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__font = std::move(slot_handle);
	self_cast->owns_return__font = true;
	return true;
}

QFont* QsciLexerXML_virtualbase_font(const void* self, int style) {
	return new QFont(static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::font(static_cast<int>(style)));
}

bool QsciLexerXML_override_virtual_indentationGuideView(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__indentationGuideView = std::move(slot_handle);
	return true;
}

int QsciLexerXML_virtualbase_indentationGuideView(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::indentationGuideView();
}

bool QsciLexerXML_override_virtual_keywords(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keywords = std::move(slot_handle);
	return true;
}

const char* QsciLexerXML_virtualbase_keywords(const void* self, int set) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::keywords(static_cast<int>(set));
}

bool QsciLexerXML_override_virtual_defaultStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultStyle = std::move(slot_handle);
	return true;
}

int QsciLexerXML_virtualbase_defaultStyle(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::defaultStyle();
}

bool QsciLexerXML_override_virtual_description(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__description = std::move(slot_handle);
	return true;
}

bool QsciLexerXML_override_virtual_paper(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paper = std::move(slot_handle);
	self_cast->owns_return__paper = false;
	return true;
}

bool QsciLexerXML_override_virtual_owned_paper(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paper = std::move(slot_handle);
	self_cast->owns_return__paper = true;
	return true;
}

QColor* QsciLexerXML_virtualbase_paper(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::paper(static_cast<int>(style)));
}

bool QsciLexerXML_override_virtual_defaultColorWithStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultColorWithStyle = std::move(slot_handle);
	self_cast->owns_return__defaultColorWithStyle = false;
	return true;
}

bool QsciLexerXML_override_virtual_owned_defaultColorWithStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultColorWithStyle = std::move(slot_handle);
	self_cast->owns_return__defaultColorWithStyle = true;
	return true;
}

QColor* QsciLexerXML_virtualbase_defaultColorWithStyle(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::defaultColor(static_cast<int>(style)));
}

bool QsciLexerXML_override_virtual_defaultEolFill(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultEolFill = std::move(slot_handle);
	return true;
}

bool QsciLexerXML_virtualbase_defaultEolFill(const void* self, int style) {
	return static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::defaultEolFill(static_cast<int>(style));
}

bool QsciLexerXML_override_virtual_defaultFontWithStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultFontWithStyle = std::move(slot_handle);
	self_cast->owns_return__defaultFontWithStyle = false;
	return true;
}

bool QsciLexerXML_override_virtual_owned_defaultFontWithStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultFontWithStyle = std::move(slot_handle);
	self_cast->owns_return__defaultFontWithStyle = true;
	return true;
}

QFont* QsciLexerXML_virtualbase_defaultFontWithStyle(const void* self, int style) {
	return new QFont(static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::defaultFont(static_cast<int>(style)));
}

bool QsciLexerXML_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultPaperWithStyle = std::move(slot_handle);
	self_cast->owns_return__defaultPaperWithStyle = false;
	return true;
}

bool QsciLexerXML_override_virtual_owned_defaultPaperWithStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultPaperWithStyle = std::move(slot_handle);
	self_cast->owns_return__defaultPaperWithStyle = true;
	return true;
}

QColor* QsciLexerXML_virtualbase_defaultPaperWithStyle(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::defaultPaper(static_cast<int>(style)));
}

bool QsciLexerXML_override_virtual_setEditor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setEditor = std::move(slot_handle);
	return true;
}

void QsciLexerXML_virtualbase_setEditor(void* self, QsciScintilla* editor) {
	static_cast<MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::setEditor(editor);
}

bool QsciLexerXML_override_virtual_refreshProperties(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__refreshProperties = std::move(slot_handle);
	return true;
}

void QsciLexerXML_virtualbase_refreshProperties(void* self) {
	static_cast<MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::refreshProperties();
}

bool QsciLexerXML_override_virtual_styleBitsNeeded(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__styleBitsNeeded = std::move(slot_handle);
	return true;
}

int QsciLexerXML_virtualbase_styleBitsNeeded(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::styleBitsNeeded();
}

bool QsciLexerXML_override_virtual_wordCharacters(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wordCharacters = std::move(slot_handle);
	return true;
}

const char* QsciLexerXML_virtualbase_wordCharacters(const void* self) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::wordCharacters();
}

bool QsciLexerXML_override_virtual_setAutoIndentStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setAutoIndentStyle = std::move(slot_handle);
	return true;
}

void QsciLexerXML_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle) {
	static_cast<MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

bool QsciLexerXML_override_virtual_setColor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setColor = std::move(slot_handle);
	return true;
}

void QsciLexerXML_virtualbase_setColor(void* self, QColor* c, int style) {
	static_cast<MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::setColor(*c, static_cast<int>(style));
}

bool QsciLexerXML_override_virtual_setEolFill(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setEolFill = std::move(slot_handle);
	return true;
}

void QsciLexerXML_virtualbase_setEolFill(void* self, bool eoffill, int style) {
	static_cast<MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::setEolFill(eoffill, static_cast<int>(style));
}

bool QsciLexerXML_override_virtual_setFont(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFont = std::move(slot_handle);
	return true;
}

void QsciLexerXML_virtualbase_setFont(void* self, QFont* f, int style) {
	static_cast<MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::setFont(*f, static_cast<int>(style));
}

bool QsciLexerXML_override_virtual_setPaper(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setPaper = std::move(slot_handle);
	return true;
}

void QsciLexerXML_virtualbase_setPaper(void* self, QColor* c, int style) {
	static_cast<MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::setPaper(*c, static_cast<int>(style));
}

bool QsciLexerXML_override_virtual_readProperties(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__readProperties = std::move(slot_handle);
	return true;
}

bool QsciLexerXML_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return static_cast<MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::readProperties(*qs, prefix_QString);
}

bool QsciLexerXML_override_virtual_writeProperties(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__writeProperties = std::move(slot_handle);
	return true;
}

bool QsciLexerXML_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return static_cast<const MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::writeProperties(*qs, prefix_QString);
}

bool QsciLexerXML_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QsciLexerXML_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::event(event);
}

bool QsciLexerXML_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QsciLexerXML_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::eventFilter(watched, event);
}

bool QsciLexerXML_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QsciLexerXML_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::timerEvent(event);
}

bool QsciLexerXML_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QsciLexerXML_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::childEvent(event);
}

bool QsciLexerXML_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QsciLexerXML_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::customEvent(event);
}

bool QsciLexerXML_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QsciLexerXML_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::connectNotify(*signal);
}

bool QsciLexerXML_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerXML> slot_handle(slot);
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QsciLexerXML_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQsciLexerXML*>(self)->QsciLexerXML::disconnectNotify(*signal);
}

bool QsciLexerXML_protectedbase_readProperties(bool* _dynamic_cast_ok, void* self, QSettings* qs, struct miqt_string prefix) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return self_cast->readProperties(*qs, prefix_QString);
}

bool QsciLexerXML_protectedbase_writeProperties(bool* _dynamic_cast_ok, const void* self, QSettings* qs, struct miqt_string prefix) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return self_cast->writeProperties(*qs, prefix_QString);
}

QObject* QsciLexerXML_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QsciLexerXML_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QsciLexerXML_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QsciLexerXML_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQsciLexerXML* self_cast = dynamic_cast<MiqtVirtualQsciLexerXML*>( (QsciLexerXML*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QsciLexerXML_delete(QsciLexerXML* self) {
	delete self;
}

