#include "texteditpredictor.h"

texteditpredictor::texteditpredictor(QWidget *parent) : QTextEdit(parent), completer(0)
{
    setPlainText("");
}

texteditpredictor::~texteditpredictor()
{
}

void texteditpredictor::setCompleter(QCompleter *c)
{
    if (completer)
        QObject::disconnect(completer, 0, this, 0);

    completer = c;

    if (!completer)
        return;

    c->setWidget(this);
    c->setCompletionMode(QCompleter::PopupCompletion);
    c->setCaseSensitivity(Qt::CaseInsensitive);
    QObject::connect(completer, SIGNAL(activated(QString)),
                     this, SLOT(completar(QString)));
}

QCompleter *texteditpredictor::Completer() const
{
    return completer;
}

void texteditpredictor::completar(const QString& complete)
{
    if (completer->widget() != this)
        return;
    QTextCursor tc = textCursor();
    int extra = complete.length() - completer->completionPrefix().length();
    tc.movePosition(QTextCursor::Left);
    tc.movePosition(QTextCursor::EndOfWord);
    tc.insertText(complete.right(extra) + " ");
    setTextCursor(tc);
}

QString texteditpredictor::textoCursor() const
{
    QTextCursor tc = textCursor();
    tc.select(QTextCursor::WordUnderCursor);
    return tc.selectedText();
}

void texteditpredictor::focusInEvent(QFocusEvent *e)
{
    if (completer)
        completer->setWidget(this);
    QTextEdit::focusInEvent(e);
}

void texteditpredictor::keyPressEvent(QKeyEvent *e)
{
    if (completer && completer->popup()->isVisible()) {

       switch (e->key()) {
       case Qt::Key_Enter:
       case Qt::Key_Return:
       case Qt::Key_Escape:
       case Qt::Key_Tab:
       case Qt::Key_Backtab:
            e->ignore();
            return;
       default:
           break;
       }
    }

    bool pressedkeys = ((e->modifiers() & Qt::ControlModifier) && e->key() == Qt::Key_Space);
    if (!completer || !pressedkeys)
        QTextEdit::keyPressEvent(e);

    const bool ctrlshift = e->modifiers() & (Qt::ControlModifier | Qt::ShiftModifier);
        if (!completer || (ctrlshift && e->text().isEmpty()))
            return;

        static QString eow("~!@#$%^&*()_+{}|:\"<>?,./;'[]\\-="); // end of word
        bool modificado = (e->modifiers() != Qt::NoModifier) && !ctrlshift;
        QString completionPrefix = textoCursor();

        if (!pressedkeys && (modificado || e->text().isEmpty()|| completionPrefix.length() < 1
                          || eow.contains(e->text().right(1)))) {
            completer->popup()->hide();
            return;
        }

        if (completionPrefix != completer->completionPrefix()) {
            completer->setCompletionPrefix(completionPrefix);
            completer->popup()->setCurrentIndex(completer->completionModel()->index(0, 0));
        }
        QRect cr = cursorRect();
        cr.setWidth(completer->popup()->sizeHintForColumn(0)
                    + completer->popup()->verticalScrollBar()->sizeHint().width());
        completer->complete(cr);
}
