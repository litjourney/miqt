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
#include <qscilexeravs.h>
#include "gen_qscilexeravs.h"

#ifdef __cplusplus
extern "C" {
#endif

void miqt_exec_callback_handle_release_QsciLexerAVS(intptr_t);
void miqt_exec_callback_QsciLexerAVS_setFoldComments(QsciLexerAVS*, intptr_t, bool);
void miqt_exec_callback_QsciLexerAVS_setFoldCompact(QsciLexerAVS*, intptr_t, bool);
const char* miqt_exec_callback_QsciLexerAVS_language(const QsciLexerAVS*, intptr_t);
const char* miqt_exec_callback_QsciLexerAVS_lexer(const QsciLexerAVS*, intptr_t);
int miqt_exec_callback_QsciLexerAVS_lexerId(const QsciLexerAVS*, intptr_t);
const char* miqt_exec_callback_QsciLexerAVS_autoCompletionFillups(const QsciLexerAVS*, intptr_t);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QsciLexerAVS_autoCompletionWordSeparators(const QsciLexerAVS*, intptr_t);
const char* miqt_exec_callback_QsciLexerAVS_blockEnd(const QsciLexerAVS*, intptr_t, int*);
int miqt_exec_callback_QsciLexerAVS_blockLookback(const QsciLexerAVS*, intptr_t);
const char* miqt_exec_callback_QsciLexerAVS_blockStart(const QsciLexerAVS*, intptr_t, int*);
const char* miqt_exec_callback_QsciLexerAVS_blockStartKeyword(const QsciLexerAVS*, intptr_t, int*);
int miqt_exec_callback_QsciLexerAVS_braceStyle(const QsciLexerAVS*, intptr_t);
bool miqt_exec_callback_QsciLexerAVS_caseSensitive(const QsciLexerAVS*, intptr_t);
QColor* miqt_exec_callback_QsciLexerAVS_color(const QsciLexerAVS*, intptr_t, int);
bool miqt_exec_callback_QsciLexerAVS_eolFill(const QsciLexerAVS*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerAVS_font(const QsciLexerAVS*, intptr_t, int);
int miqt_exec_callback_QsciLexerAVS_indentationGuideView(const QsciLexerAVS*, intptr_t);
const char* miqt_exec_callback_QsciLexerAVS_keywords(const QsciLexerAVS*, intptr_t, int);
int miqt_exec_callback_QsciLexerAVS_defaultStyle(const QsciLexerAVS*, intptr_t);
struct miqt_string miqt_exec_callback_QsciLexerAVS_description(const QsciLexerAVS*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerAVS_paper(const QsciLexerAVS*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerAVS_defaultColorWithStyle(const QsciLexerAVS*, intptr_t, int);
bool miqt_exec_callback_QsciLexerAVS_defaultEolFill(const QsciLexerAVS*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerAVS_defaultFontWithStyle(const QsciLexerAVS*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerAVS_defaultPaperWithStyle(const QsciLexerAVS*, intptr_t, int);
void miqt_exec_callback_QsciLexerAVS_setEditor(QsciLexerAVS*, intptr_t, QsciScintilla*);
void miqt_exec_callback_QsciLexerAVS_refreshProperties(QsciLexerAVS*, intptr_t);
int miqt_exec_callback_QsciLexerAVS_styleBitsNeeded(const QsciLexerAVS*, intptr_t);
const char* miqt_exec_callback_QsciLexerAVS_wordCharacters(const QsciLexerAVS*, intptr_t);
void miqt_exec_callback_QsciLexerAVS_setAutoIndentStyle(QsciLexerAVS*, intptr_t, int);
void miqt_exec_callback_QsciLexerAVS_setColor(QsciLexerAVS*, intptr_t, QColor*, int);
void miqt_exec_callback_QsciLexerAVS_setEolFill(QsciLexerAVS*, intptr_t, bool, int);
void miqt_exec_callback_QsciLexerAVS_setFont(QsciLexerAVS*, intptr_t, QFont*, int);
void miqt_exec_callback_QsciLexerAVS_setPaper(QsciLexerAVS*, intptr_t, QColor*, int);
bool miqt_exec_callback_QsciLexerAVS_readProperties(QsciLexerAVS*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerAVS_writeProperties(const QsciLexerAVS*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerAVS_event(QsciLexerAVS*, intptr_t, QEvent*);
bool miqt_exec_callback_QsciLexerAVS_eventFilter(QsciLexerAVS*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QsciLexerAVS_timerEvent(QsciLexerAVS*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QsciLexerAVS_childEvent(QsciLexerAVS*, intptr_t, QChildEvent*);
void miqt_exec_callback_QsciLexerAVS_customEvent(QsciLexerAVS*, intptr_t, QEvent*);
void miqt_exec_callback_QsciLexerAVS_connectNotify(QsciLexerAVS*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QsciLexerAVS_disconnectNotify(QsciLexerAVS*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciLexerAVS final : public QsciLexerAVS {
public:

	MiqtVirtualQsciLexerAVS(): QsciLexerAVS() {}
	MiqtVirtualQsciLexerAVS(QObject* parent): QsciLexerAVS(parent) {}

	virtual ~MiqtVirtualQsciLexerAVS() override = default;

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> handle__setFoldComments;

	// Subclass to allow providing a Go implementation
	virtual void setFoldComments(bool fold) override {
		if (!handle__setFoldComments) {
			QsciLexerAVS::setFoldComments(fold);
			return;
		}

		bool sigval1 = fold;
		miqt_exec_callback_QsciLexerAVS_setFoldComments(this, handle__setFoldComments.value(), sigval1);

	}

	friend void QsciLexerAVS_virtualbase_setFoldComments(void* self, bool fold);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> handle__setFoldCompact;

	// Subclass to allow providing a Go implementation
	virtual void setFoldCompact(bool fold) override {
		if (!handle__setFoldCompact) {
			QsciLexerAVS::setFoldCompact(fold);
			return;
		}

		bool sigval1 = fold;
		miqt_exec_callback_QsciLexerAVS_setFoldCompact(this, handle__setFoldCompact.value(), sigval1);

	}

	friend void QsciLexerAVS_virtualbase_setFoldCompact(void* self, bool fold);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> handle__language;

	// Subclass to allow providing a Go implementation
	virtual const char* language() const override {
		if (!handle__language) {
			return nullptr; // Pure virtual, there is no base we can call
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerAVS_language(this, handle__language.value());
		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> handle__lexer;

	// Subclass to allow providing a Go implementation
	virtual const char* lexer() const override {
		if (!handle__lexer) {
			return QsciLexerAVS::lexer();
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerAVS_lexer(this, handle__lexer.value());
		return callback_return_value;
	}

	friend const char* QsciLexerAVS_virtualbase_lexer(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> handle__lexerId;

	// Subclass to allow providing a Go implementation
	virtual int lexerId() const override {
		if (!handle__lexerId) {
			return QsciLexerAVS::lexerId();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerAVS_lexerId(this, handle__lexerId.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerAVS_virtualbase_lexerId(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> handle__autoCompletionFillups;

	// Subclass to allow providing a Go implementation
	virtual const char* autoCompletionFillups() const override {
		if (!handle__autoCompletionFillups) {
			return QsciLexerAVS::autoCompletionFillups();
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerAVS_autoCompletionFillups(this, handle__autoCompletionFillups.value());
		return callback_return_value;
	}

	friend const char* QsciLexerAVS_virtualbase_autoCompletionFillups(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> handle__autoCompletionWordSeparators;

	// Subclass to allow providing a Go implementation
	virtual QStringList autoCompletionWordSeparators() const override {
		if (!handle__autoCompletionWordSeparators) {
			return QsciLexerAVS::autoCompletionWordSeparators();
		}

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QsciLexerAVS_autoCompletionWordSeparators(this, handle__autoCompletionWordSeparators.value());
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

	friend struct miqt_array /* of struct miqt_string */  QsciLexerAVS_virtualbase_autoCompletionWordSeparators(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> handle__blockEnd;

	// Subclass to allow providing a Go implementation
	virtual const char* blockEnd(int* style) const override {
		if (!handle__blockEnd) {
			return QsciLexerAVS::blockEnd(style);
		}

		int* sigval1 = style;
		const char* callback_return_value = miqt_exec_callback_QsciLexerAVS_blockEnd(this, handle__blockEnd.value(), sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerAVS_virtualbase_blockEnd(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> handle__blockLookback;

	// Subclass to allow providing a Go implementation
	virtual int blockLookback() const override {
		if (!handle__blockLookback) {
			return QsciLexerAVS::blockLookback();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerAVS_blockLookback(this, handle__blockLookback.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerAVS_virtualbase_blockLookback(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> handle__blockStart;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStart(int* style) const override {
		if (!handle__blockStart) {
			return QsciLexerAVS::blockStart(style);
		}

		int* sigval1 = style;
		const char* callback_return_value = miqt_exec_callback_QsciLexerAVS_blockStart(this, handle__blockStart.value(), sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerAVS_virtualbase_blockStart(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> handle__blockStartKeyword;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStartKeyword(int* style) const override {
		if (!handle__blockStartKeyword) {
			return QsciLexerAVS::blockStartKeyword(style);
		}

		int* sigval1 = style;
		const char* callback_return_value = miqt_exec_callback_QsciLexerAVS_blockStartKeyword(this, handle__blockStartKeyword.value(), sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerAVS_virtualbase_blockStartKeyword(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> handle__braceStyle;

	// Subclass to allow providing a Go implementation
	virtual int braceStyle() const override {
		if (!handle__braceStyle) {
			return QsciLexerAVS::braceStyle();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerAVS_braceStyle(this, handle__braceStyle.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerAVS_virtualbase_braceStyle(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> handle__caseSensitive;

	// Subclass to allow providing a Go implementation
	virtual bool caseSensitive() const override {
		if (!handle__caseSensitive) {
			return QsciLexerAVS::caseSensitive();
		}

		bool callback_return_value = miqt_exec_callback_QsciLexerAVS_caseSensitive(this, handle__caseSensitive.value());
		return callback_return_value;
	}

	friend bool QsciLexerAVS_virtualbase_caseSensitive(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> handle__color;

	// Subclass to allow providing a Go implementation
	virtual QColor color(int style) const override {
		if (!handle__color) {
			return QsciLexerAVS::color(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerAVS_color(this, handle__color.value(), sigval1);
		return *callback_return_value;
	}

	friend QColor* QsciLexerAVS_virtualbase_color(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> handle__eolFill;

	// Subclass to allow providing a Go implementation
	virtual bool eolFill(int style) const override {
		if (!handle__eolFill) {
			return QsciLexerAVS::eolFill(style);
		}

		int sigval1 = style;
		bool callback_return_value = miqt_exec_callback_QsciLexerAVS_eolFill(this, handle__eolFill.value(), sigval1);
		return callback_return_value;
	}

	friend bool QsciLexerAVS_virtualbase_eolFill(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> handle__font;

	// Subclass to allow providing a Go implementation
	virtual QFont font(int style) const override {
		if (!handle__font) {
			return QsciLexerAVS::font(style);
		}

		int sigval1 = style;
		QFont* callback_return_value = miqt_exec_callback_QsciLexerAVS_font(this, handle__font.value(), sigval1);
		return *callback_return_value;
	}

	friend QFont* QsciLexerAVS_virtualbase_font(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> handle__indentationGuideView;

	// Subclass to allow providing a Go implementation
	virtual int indentationGuideView() const override {
		if (!handle__indentationGuideView) {
			return QsciLexerAVS::indentationGuideView();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerAVS_indentationGuideView(this, handle__indentationGuideView.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerAVS_virtualbase_indentationGuideView(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> handle__keywords;

	// Subclass to allow providing a Go implementation
	virtual const char* keywords(int set) const override {
		if (!handle__keywords) {
			return QsciLexerAVS::keywords(set);
		}

		int sigval1 = set;
		const char* callback_return_value = miqt_exec_callback_QsciLexerAVS_keywords(this, handle__keywords.value(), sigval1);
		return callback_return_value;
	}

	friend const char* QsciLexerAVS_virtualbase_keywords(const void* self, int set);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> handle__defaultStyle;

	// Subclass to allow providing a Go implementation
	virtual int defaultStyle() const override {
		if (!handle__defaultStyle) {
			return QsciLexerAVS::defaultStyle();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerAVS_defaultStyle(this, handle__defaultStyle.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerAVS_virtualbase_defaultStyle(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> handle__description;

	// Subclass to allow providing a Go implementation
	virtual QString description(int style) const override {
		if (!handle__description) {
			return QString(); // Pure virtual, there is no base we can call
		}

		int sigval1 = style;
		struct miqt_string callback_return_value = miqt_exec_callback_QsciLexerAVS_description(this, handle__description.value(), sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);
		free(callback_return_value.data);
		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> handle__paper;

	// Subclass to allow providing a Go implementation
	virtual QColor paper(int style) const override {
		if (!handle__paper) {
			return QsciLexerAVS::paper(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerAVS_paper(this, handle__paper.value(), sigval1);
		return *callback_return_value;
	}

	friend QColor* QsciLexerAVS_virtualbase_paper(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> handle__defaultColorWithStyle;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultColor(int style) const override {
		if (!handle__defaultColorWithStyle) {
			return QsciLexerAVS::defaultColor(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerAVS_defaultColorWithStyle(this, handle__defaultColorWithStyle.value(), sigval1);
		return *callback_return_value;
	}

	friend QColor* QsciLexerAVS_virtualbase_defaultColorWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> handle__defaultEolFill;

	// Subclass to allow providing a Go implementation
	virtual bool defaultEolFill(int style) const override {
		if (!handle__defaultEolFill) {
			return QsciLexerAVS::defaultEolFill(style);
		}

		int sigval1 = style;
		bool callback_return_value = miqt_exec_callback_QsciLexerAVS_defaultEolFill(this, handle__defaultEolFill.value(), sigval1);
		return callback_return_value;
	}

	friend bool QsciLexerAVS_virtualbase_defaultEolFill(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> handle__defaultFontWithStyle;

	// Subclass to allow providing a Go implementation
	virtual QFont defaultFont(int style) const override {
		if (!handle__defaultFontWithStyle) {
			return QsciLexerAVS::defaultFont(style);
		}

		int sigval1 = style;
		QFont* callback_return_value = miqt_exec_callback_QsciLexerAVS_defaultFontWithStyle(this, handle__defaultFontWithStyle.value(), sigval1);
		return *callback_return_value;
	}

	friend QFont* QsciLexerAVS_virtualbase_defaultFontWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> handle__defaultPaperWithStyle;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultPaper(int style) const override {
		if (!handle__defaultPaperWithStyle) {
			return QsciLexerAVS::defaultPaper(style);
		}

		int sigval1 = style;
		QColor* callback_return_value = miqt_exec_callback_QsciLexerAVS_defaultPaperWithStyle(this, handle__defaultPaperWithStyle.value(), sigval1);
		return *callback_return_value;
	}

	friend QColor* QsciLexerAVS_virtualbase_defaultPaperWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> handle__setEditor;

	// Subclass to allow providing a Go implementation
	virtual void setEditor(QsciScintilla* editor) override {
		if (!handle__setEditor) {
			QsciLexerAVS::setEditor(editor);
			return;
		}

		QsciScintilla* sigval1 = editor;
		miqt_exec_callback_QsciLexerAVS_setEditor(this, handle__setEditor.value(), sigval1);

	}

	friend void QsciLexerAVS_virtualbase_setEditor(void* self, QsciScintilla* editor);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> handle__refreshProperties;

	// Subclass to allow providing a Go implementation
	virtual void refreshProperties() override {
		if (!handle__refreshProperties) {
			QsciLexerAVS::refreshProperties();
			return;
		}

		miqt_exec_callback_QsciLexerAVS_refreshProperties(this, handle__refreshProperties.value());

	}

	friend void QsciLexerAVS_virtualbase_refreshProperties(void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> handle__styleBitsNeeded;

	// Subclass to allow providing a Go implementation
	virtual int styleBitsNeeded() const override {
		if (!handle__styleBitsNeeded) {
			return QsciLexerAVS::styleBitsNeeded();
		}

		int callback_return_value = miqt_exec_callback_QsciLexerAVS_styleBitsNeeded(this, handle__styleBitsNeeded.value());
		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerAVS_virtualbase_styleBitsNeeded(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> handle__wordCharacters;

	// Subclass to allow providing a Go implementation
	virtual const char* wordCharacters() const override {
		if (!handle__wordCharacters) {
			return QsciLexerAVS::wordCharacters();
		}

		const char* callback_return_value = miqt_exec_callback_QsciLexerAVS_wordCharacters(this, handle__wordCharacters.value());
		return callback_return_value;
	}

	friend const char* QsciLexerAVS_virtualbase_wordCharacters(const void* self);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> handle__setAutoIndentStyle;

	// Subclass to allow providing a Go implementation
	virtual void setAutoIndentStyle(int autoindentstyle) override {
		if (!handle__setAutoIndentStyle) {
			QsciLexerAVS::setAutoIndentStyle(autoindentstyle);
			return;
		}

		int sigval1 = autoindentstyle;
		miqt_exec_callback_QsciLexerAVS_setAutoIndentStyle(this, handle__setAutoIndentStyle.value(), sigval1);

	}

	friend void QsciLexerAVS_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> handle__setColor;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& c, int style) override {
		if (!handle__setColor) {
			QsciLexerAVS::setColor(c, style);
			return;
		}

		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexerAVS_setColor(this, handle__setColor.value(), sigval1, sigval2);

	}

	friend void QsciLexerAVS_virtualbase_setColor(void* self, QColor* c, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> handle__setEolFill;

	// Subclass to allow providing a Go implementation
	virtual void setEolFill(bool eoffill, int style) override {
		if (!handle__setEolFill) {
			QsciLexerAVS::setEolFill(eoffill, style);
			return;
		}

		bool sigval1 = eoffill;
		int sigval2 = style;
		miqt_exec_callback_QsciLexerAVS_setEolFill(this, handle__setEolFill.value(), sigval1, sigval2);

	}

	friend void QsciLexerAVS_virtualbase_setEolFill(void* self, bool eoffill, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> handle__setFont;

	// Subclass to allow providing a Go implementation
	virtual void setFont(const QFont& f, int style) override {
		if (!handle__setFont) {
			QsciLexerAVS::setFont(f, style);
			return;
		}

		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexerAVS_setFont(this, handle__setFont.value(), sigval1, sigval2);

	}

	friend void QsciLexerAVS_virtualbase_setFont(void* self, QFont* f, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> handle__setPaper;

	// Subclass to allow providing a Go implementation
	virtual void setPaper(const QColor& c, int style) override {
		if (!handle__setPaper) {
			QsciLexerAVS::setPaper(c, style);
			return;
		}

		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;
		miqt_exec_callback_QsciLexerAVS_setPaper(this, handle__setPaper.value(), sigval1, sigval2);

	}

	friend void QsciLexerAVS_virtualbase_setPaper(void* self, QColor* c, int style);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> handle__readProperties;

	// Subclass to allow providing a Go implementation
	virtual bool readProperties(QSettings& qs, const QString& prefix) override {
		if (!handle__readProperties) {
			return QsciLexerAVS::readProperties(qs, prefix);
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
		bool callback_return_value = miqt_exec_callback_QsciLexerAVS_readProperties(this, handle__readProperties.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QsciLexerAVS_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> handle__writeProperties;

	// Subclass to allow providing a Go implementation
	virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
		if (!handle__writeProperties) {
			return QsciLexerAVS::writeProperties(qs, prefix);
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
		bool callback_return_value = miqt_exec_callback_QsciLexerAVS_writeProperties(this, handle__writeProperties.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QsciLexerAVS_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> handle__event;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (!handle__event) {
			return QsciLexerAVS::event(event);
		}

		QEvent* sigval1 = event;
		bool callback_return_value = miqt_exec_callback_QsciLexerAVS_event(this, handle__event.value(), sigval1);
		return callback_return_value;
	}

	friend bool QsciLexerAVS_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> handle__eventFilter;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (!handle__eventFilter) {
			return QsciLexerAVS::eventFilter(watched, event);
		}

		QObject* sigval1 = watched;
		QEvent* sigval2 = event;
		bool callback_return_value = miqt_exec_callback_QsciLexerAVS_eventFilter(this, handle__eventFilter.value(), sigval1, sigval2);
		return callback_return_value;
	}

	friend bool QsciLexerAVS_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> handle__timerEvent;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (!handle__timerEvent) {
			QsciLexerAVS::timerEvent(event);
			return;
		}

		QTimerEvent* sigval1 = event;
		miqt_exec_callback_QsciLexerAVS_timerEvent(this, handle__timerEvent.value(), sigval1);

	}

	friend void QsciLexerAVS_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> handle__childEvent;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (!handle__childEvent) {
			QsciLexerAVS::childEvent(event);
			return;
		}

		QChildEvent* sigval1 = event;
		miqt_exec_callback_QsciLexerAVS_childEvent(this, handle__childEvent.value(), sigval1);

	}

	friend void QsciLexerAVS_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> handle__customEvent;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (!handle__customEvent) {
			QsciLexerAVS::customEvent(event);
			return;
		}

		QEvent* sigval1 = event;
		miqt_exec_callback_QsciLexerAVS_customEvent(this, handle__customEvent.value(), sigval1);

	}

	friend void QsciLexerAVS_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> handle__connectNotify;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (!handle__connectNotify) {
			QsciLexerAVS::connectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QsciLexerAVS_connectNotify(this, handle__connectNotify.value(), sigval1);

	}

	friend void QsciLexerAVS_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> handle__disconnectNotify;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (!handle__disconnectNotify) {
			QsciLexerAVS::disconnectNotify(signal);
			return;
		}

		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);
		miqt_exec_callback_QsciLexerAVS_disconnectNotify(this, handle__disconnectNotify.value(), sigval1);

	}

	friend void QsciLexerAVS_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend bool QsciLexerAVS_protectedbase_readProperties(bool* _dynamic_cast_ok, void* self, QSettings* qs, struct miqt_string prefix);
	friend bool QsciLexerAVS_protectedbase_writeProperties(bool* _dynamic_cast_ok, const void* self, QSettings* qs, struct miqt_string prefix);
	friend QObject* QsciLexerAVS_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QsciLexerAVS_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QsciLexerAVS_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QsciLexerAVS_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QsciLexerAVS* QsciLexerAVS_new() {
	return new (std::nothrow) MiqtVirtualQsciLexerAVS();
}

QsciLexerAVS* QsciLexerAVS_new2(QObject* parent) {
	return new (std::nothrow) MiqtVirtualQsciLexerAVS(parent);
}

void QsciLexerAVS_virtbase(QsciLexerAVS* src, QsciLexer** outptr_QsciLexer) {
	*outptr_QsciLexer = static_cast<QsciLexer*>(src);
}

QMetaObject* QsciLexerAVS_metaObject(const QsciLexerAVS* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerAVS_metacast(QsciLexerAVS* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerAVS_tr(const char* s) {
	QString _ret = QsciLexerAVS::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerAVS_trUtf8(const char* s) {
	QString _ret = QsciLexerAVS::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerAVS_language(const QsciLexerAVS* self) {
	return (const char*) self->language();
}

const char* QsciLexerAVS_lexer(const QsciLexerAVS* self) {
	return (const char*) self->lexer();
}

int QsciLexerAVS_braceStyle(const QsciLexerAVS* self) {
	return self->braceStyle();
}

const char* QsciLexerAVS_wordCharacters(const QsciLexerAVS* self) {
	return (const char*) self->wordCharacters();
}

QColor* QsciLexerAVS_defaultColor(const QsciLexerAVS* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

QFont* QsciLexerAVS_defaultFont(const QsciLexerAVS* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

const char* QsciLexerAVS_keywords(const QsciLexerAVS* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerAVS_description(const QsciLexerAVS* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerAVS_refreshProperties(QsciLexerAVS* self) {
	self->refreshProperties();
}

bool QsciLexerAVS_foldComments(const QsciLexerAVS* self) {
	return self->foldComments();
}

bool QsciLexerAVS_foldCompact(const QsciLexerAVS* self) {
	return self->foldCompact();
}

void QsciLexerAVS_setFoldComments(QsciLexerAVS* self, bool fold) {
	self->setFoldComments(fold);
}

void QsciLexerAVS_setFoldCompact(QsciLexerAVS* self, bool fold) {
	self->setFoldCompact(fold);
}

struct miqt_string QsciLexerAVS_tr2(const char* s, const char* c) {
	QString _ret = QsciLexerAVS::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerAVS_tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerAVS::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerAVS_trUtf82(const char* s, const char* c) {
	QString _ret = QsciLexerAVS::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerAVS_trUtf83(const char* s, const char* c, int n) {
	QString _ret = QsciLexerAVS::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QsciLexerAVS_override_virtual_setFoldComments(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> slot_handle(slot);
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFoldComments = std::move(slot_handle);
	return true;
}

void QsciLexerAVS_virtualbase_setFoldComments(void* self, bool fold) {
	static_cast<MiqtVirtualQsciLexerAVS*>(self)->QsciLexerAVS::setFoldComments(fold);
}

bool QsciLexerAVS_override_virtual_setFoldCompact(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> slot_handle(slot);
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFoldCompact = std::move(slot_handle);
	return true;
}

void QsciLexerAVS_virtualbase_setFoldCompact(void* self, bool fold) {
	static_cast<MiqtVirtualQsciLexerAVS*>(self)->QsciLexerAVS::setFoldCompact(fold);
}

bool QsciLexerAVS_override_virtual_language(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> slot_handle(slot);
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__language = std::move(slot_handle);
	return true;
}

bool QsciLexerAVS_override_virtual_lexer(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> slot_handle(slot);
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__lexer = std::move(slot_handle);
	return true;
}

const char* QsciLexerAVS_virtualbase_lexer(const void* self) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerAVS*>(self)->QsciLexerAVS::lexer();
}

bool QsciLexerAVS_override_virtual_lexerId(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> slot_handle(slot);
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__lexerId = std::move(slot_handle);
	return true;
}

int QsciLexerAVS_virtualbase_lexerId(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerAVS*>(self)->QsciLexerAVS::lexerId();
}

bool QsciLexerAVS_override_virtual_autoCompletionFillups(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> slot_handle(slot);
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__autoCompletionFillups = std::move(slot_handle);
	return true;
}

const char* QsciLexerAVS_virtualbase_autoCompletionFillups(const void* self) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerAVS*>(self)->QsciLexerAVS::autoCompletionFillups();
}

bool QsciLexerAVS_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> slot_handle(slot);
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__autoCompletionWordSeparators = std::move(slot_handle);
	return true;
}

struct miqt_array /* of struct miqt_string */  QsciLexerAVS_virtualbase_autoCompletionWordSeparators(const void* self) {
	QStringList _ret = static_cast<const MiqtVirtualQsciLexerAVS*>(self)->QsciLexerAVS::autoCompletionWordSeparators();
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

bool QsciLexerAVS_override_virtual_blockEnd(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> slot_handle(slot);
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockEnd = std::move(slot_handle);
	return true;
}

const char* QsciLexerAVS_virtualbase_blockEnd(const void* self, int* style) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerAVS*>(self)->QsciLexerAVS::blockEnd(static_cast<int*>(style));
}

bool QsciLexerAVS_override_virtual_blockLookback(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> slot_handle(slot);
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockLookback = std::move(slot_handle);
	return true;
}

int QsciLexerAVS_virtualbase_blockLookback(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerAVS*>(self)->QsciLexerAVS::blockLookback();
}

bool QsciLexerAVS_override_virtual_blockStart(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> slot_handle(slot);
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockStart = std::move(slot_handle);
	return true;
}

const char* QsciLexerAVS_virtualbase_blockStart(const void* self, int* style) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerAVS*>(self)->QsciLexerAVS::blockStart(static_cast<int*>(style));
}

bool QsciLexerAVS_override_virtual_blockStartKeyword(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> slot_handle(slot);
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__blockStartKeyword = std::move(slot_handle);
	return true;
}

const char* QsciLexerAVS_virtualbase_blockStartKeyword(const void* self, int* style) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerAVS*>(self)->QsciLexerAVS::blockStartKeyword(static_cast<int*>(style));
}

bool QsciLexerAVS_override_virtual_braceStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> slot_handle(slot);
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__braceStyle = std::move(slot_handle);
	return true;
}

int QsciLexerAVS_virtualbase_braceStyle(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerAVS*>(self)->QsciLexerAVS::braceStyle();
}

bool QsciLexerAVS_override_virtual_caseSensitive(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> slot_handle(slot);
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__caseSensitive = std::move(slot_handle);
	return true;
}

bool QsciLexerAVS_virtualbase_caseSensitive(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerAVS*>(self)->QsciLexerAVS::caseSensitive();
}

bool QsciLexerAVS_override_virtual_color(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> slot_handle(slot);
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__color = std::move(slot_handle);
	return true;
}

QColor* QsciLexerAVS_virtualbase_color(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerAVS*>(self)->QsciLexerAVS::color(static_cast<int>(style)));
}

bool QsciLexerAVS_override_virtual_eolFill(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> slot_handle(slot);
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eolFill = std::move(slot_handle);
	return true;
}

bool QsciLexerAVS_virtualbase_eolFill(const void* self, int style) {
	return static_cast<const MiqtVirtualQsciLexerAVS*>(self)->QsciLexerAVS::eolFill(static_cast<int>(style));
}

bool QsciLexerAVS_override_virtual_font(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> slot_handle(slot);
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__font = std::move(slot_handle);
	return true;
}

QFont* QsciLexerAVS_virtualbase_font(const void* self, int style) {
	return new QFont(static_cast<const MiqtVirtualQsciLexerAVS*>(self)->QsciLexerAVS::font(static_cast<int>(style)));
}

bool QsciLexerAVS_override_virtual_indentationGuideView(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> slot_handle(slot);
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__indentationGuideView = std::move(slot_handle);
	return true;
}

int QsciLexerAVS_virtualbase_indentationGuideView(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerAVS*>(self)->QsciLexerAVS::indentationGuideView();
}

bool QsciLexerAVS_override_virtual_keywords(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> slot_handle(slot);
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__keywords = std::move(slot_handle);
	return true;
}

const char* QsciLexerAVS_virtualbase_keywords(const void* self, int set) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerAVS*>(self)->QsciLexerAVS::keywords(static_cast<int>(set));
}

bool QsciLexerAVS_override_virtual_defaultStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> slot_handle(slot);
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultStyle = std::move(slot_handle);
	return true;
}

int QsciLexerAVS_virtualbase_defaultStyle(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerAVS*>(self)->QsciLexerAVS::defaultStyle();
}

bool QsciLexerAVS_override_virtual_description(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> slot_handle(slot);
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__description = std::move(slot_handle);
	return true;
}

bool QsciLexerAVS_override_virtual_paper(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> slot_handle(slot);
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__paper = std::move(slot_handle);
	return true;
}

QColor* QsciLexerAVS_virtualbase_paper(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerAVS*>(self)->QsciLexerAVS::paper(static_cast<int>(style)));
}

bool QsciLexerAVS_override_virtual_defaultColorWithStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> slot_handle(slot);
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultColorWithStyle = std::move(slot_handle);
	return true;
}

QColor* QsciLexerAVS_virtualbase_defaultColorWithStyle(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerAVS*>(self)->QsciLexerAVS::defaultColor(static_cast<int>(style)));
}

bool QsciLexerAVS_override_virtual_defaultEolFill(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> slot_handle(slot);
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultEolFill = std::move(slot_handle);
	return true;
}

bool QsciLexerAVS_virtualbase_defaultEolFill(const void* self, int style) {
	return static_cast<const MiqtVirtualQsciLexerAVS*>(self)->QsciLexerAVS::defaultEolFill(static_cast<int>(style));
}

bool QsciLexerAVS_override_virtual_defaultFontWithStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> slot_handle(slot);
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultFontWithStyle = std::move(slot_handle);
	return true;
}

QFont* QsciLexerAVS_virtualbase_defaultFontWithStyle(const void* self, int style) {
	return new QFont(static_cast<const MiqtVirtualQsciLexerAVS*>(self)->QsciLexerAVS::defaultFont(static_cast<int>(style)));
}

bool QsciLexerAVS_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> slot_handle(slot);
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__defaultPaperWithStyle = std::move(slot_handle);
	return true;
}

QColor* QsciLexerAVS_virtualbase_defaultPaperWithStyle(const void* self, int style) {
	return new QColor(static_cast<const MiqtVirtualQsciLexerAVS*>(self)->QsciLexerAVS::defaultPaper(static_cast<int>(style)));
}

bool QsciLexerAVS_override_virtual_setEditor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> slot_handle(slot);
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setEditor = std::move(slot_handle);
	return true;
}

void QsciLexerAVS_virtualbase_setEditor(void* self, QsciScintilla* editor) {
	static_cast<MiqtVirtualQsciLexerAVS*>(self)->QsciLexerAVS::setEditor(editor);
}

bool QsciLexerAVS_override_virtual_refreshProperties(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> slot_handle(slot);
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__refreshProperties = std::move(slot_handle);
	return true;
}

void QsciLexerAVS_virtualbase_refreshProperties(void* self) {
	static_cast<MiqtVirtualQsciLexerAVS*>(self)->QsciLexerAVS::refreshProperties();
}

bool QsciLexerAVS_override_virtual_styleBitsNeeded(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> slot_handle(slot);
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__styleBitsNeeded = std::move(slot_handle);
	return true;
}

int QsciLexerAVS_virtualbase_styleBitsNeeded(const void* self) {
	return static_cast<const MiqtVirtualQsciLexerAVS*>(self)->QsciLexerAVS::styleBitsNeeded();
}

bool QsciLexerAVS_override_virtual_wordCharacters(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> slot_handle(slot);
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__wordCharacters = std::move(slot_handle);
	return true;
}

const char* QsciLexerAVS_virtualbase_wordCharacters(const void* self) {
	return (const char*) static_cast<const MiqtVirtualQsciLexerAVS*>(self)->QsciLexerAVS::wordCharacters();
}

bool QsciLexerAVS_override_virtual_setAutoIndentStyle(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> slot_handle(slot);
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setAutoIndentStyle = std::move(slot_handle);
	return true;
}

void QsciLexerAVS_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle) {
	static_cast<MiqtVirtualQsciLexerAVS*>(self)->QsciLexerAVS::setAutoIndentStyle(static_cast<int>(autoindentstyle));
}

bool QsciLexerAVS_override_virtual_setColor(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> slot_handle(slot);
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setColor = std::move(slot_handle);
	return true;
}

void QsciLexerAVS_virtualbase_setColor(void* self, QColor* c, int style) {
	static_cast<MiqtVirtualQsciLexerAVS*>(self)->QsciLexerAVS::setColor(*c, static_cast<int>(style));
}

bool QsciLexerAVS_override_virtual_setEolFill(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> slot_handle(slot);
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setEolFill = std::move(slot_handle);
	return true;
}

void QsciLexerAVS_virtualbase_setEolFill(void* self, bool eoffill, int style) {
	static_cast<MiqtVirtualQsciLexerAVS*>(self)->QsciLexerAVS::setEolFill(eoffill, static_cast<int>(style));
}

bool QsciLexerAVS_override_virtual_setFont(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> slot_handle(slot);
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setFont = std::move(slot_handle);
	return true;
}

void QsciLexerAVS_virtualbase_setFont(void* self, QFont* f, int style) {
	static_cast<MiqtVirtualQsciLexerAVS*>(self)->QsciLexerAVS::setFont(*f, static_cast<int>(style));
}

bool QsciLexerAVS_override_virtual_setPaper(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> slot_handle(slot);
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__setPaper = std::move(slot_handle);
	return true;
}

void QsciLexerAVS_virtualbase_setPaper(void* self, QColor* c, int style) {
	static_cast<MiqtVirtualQsciLexerAVS*>(self)->QsciLexerAVS::setPaper(*c, static_cast<int>(style));
}

bool QsciLexerAVS_override_virtual_readProperties(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> slot_handle(slot);
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__readProperties = std::move(slot_handle);
	return true;
}

bool QsciLexerAVS_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return static_cast<MiqtVirtualQsciLexerAVS*>(self)->QsciLexerAVS::readProperties(*qs, prefix_QString);
}

bool QsciLexerAVS_override_virtual_writeProperties(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> slot_handle(slot);
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__writeProperties = std::move(slot_handle);
	return true;
}

bool QsciLexerAVS_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return static_cast<const MiqtVirtualQsciLexerAVS*>(self)->QsciLexerAVS::writeProperties(*qs, prefix_QString);
}

bool QsciLexerAVS_override_virtual_event(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> slot_handle(slot);
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__event = std::move(slot_handle);
	return true;
}

bool QsciLexerAVS_virtualbase_event(void* self, QEvent* event) {
	return static_cast<MiqtVirtualQsciLexerAVS*>(self)->QsciLexerAVS::event(event);
}

bool QsciLexerAVS_override_virtual_eventFilter(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> slot_handle(slot);
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__eventFilter = std::move(slot_handle);
	return true;
}

bool QsciLexerAVS_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {
	return static_cast<MiqtVirtualQsciLexerAVS*>(self)->QsciLexerAVS::eventFilter(watched, event);
}

bool QsciLexerAVS_override_virtual_timerEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> slot_handle(slot);
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__timerEvent = std::move(slot_handle);
	return true;
}

void QsciLexerAVS_virtualbase_timerEvent(void* self, QTimerEvent* event) {
	static_cast<MiqtVirtualQsciLexerAVS*>(self)->QsciLexerAVS::timerEvent(event);
}

bool QsciLexerAVS_override_virtual_childEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> slot_handle(slot);
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__childEvent = std::move(slot_handle);
	return true;
}

void QsciLexerAVS_virtualbase_childEvent(void* self, QChildEvent* event) {
	static_cast<MiqtVirtualQsciLexerAVS*>(self)->QsciLexerAVS::childEvent(event);
}

bool QsciLexerAVS_override_virtual_customEvent(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> slot_handle(slot);
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__customEvent = std::move(slot_handle);
	return true;
}

void QsciLexerAVS_virtualbase_customEvent(void* self, QEvent* event) {
	static_cast<MiqtVirtualQsciLexerAVS*>(self)->QsciLexerAVS::customEvent(event);
}

bool QsciLexerAVS_override_virtual_connectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> slot_handle(slot);
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__connectNotify = std::move(slot_handle);
	return true;
}

void QsciLexerAVS_virtualbase_connectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQsciLexerAVS*>(self)->QsciLexerAVS::connectNotify(*signal);
}

bool QsciLexerAVS_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	miqt_callback_handle<miqt_exec_callback_handle_release_QsciLexerAVS> slot_handle(slot);
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		return false;
	}

	self_cast->handle__disconnectNotify = std::move(slot_handle);
	return true;
}

void QsciLexerAVS_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {
	static_cast<MiqtVirtualQsciLexerAVS*>(self)->QsciLexerAVS::disconnectNotify(*signal);
}

bool QsciLexerAVS_protectedbase_readProperties(bool* _dynamic_cast_ok, void* self, QSettings* qs, struct miqt_string prefix) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return self_cast->readProperties(*qs, prefix_QString);
}

bool QsciLexerAVS_protectedbase_writeProperties(bool* _dynamic_cast_ok, const void* self, QSettings* qs, struct miqt_string prefix) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
		QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
	return self_cast->writeProperties(*qs, prefix_QString);
}

QObject* QsciLexerAVS_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}

	*_dynamic_cast_ok = true;
	return self_cast->sender();
}

int QsciLexerAVS_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->senderSignalIndex();
}

int QsciLexerAVS_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}

	*_dynamic_cast_ok = true;
	return self_cast->receivers(signal);
}

bool QsciLexerAVS_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQsciLexerAVS* self_cast = dynamic_cast<MiqtVirtualQsciLexerAVS*>( (QsciLexerAVS*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}

	*_dynamic_cast_ok = true;
	return self_cast->isSignalConnected(*signal);
}

void QsciLexerAVS_delete(QsciLexerAVS* self) {
	delete self;
}

