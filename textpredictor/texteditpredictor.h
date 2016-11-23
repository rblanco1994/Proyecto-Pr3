#ifndef TEXTEDITPREDICTOR_H
#define TEXTEDITPREDICTOR_H

#include <QObject>
#include <QWidget>
#include<QTextEdit>
#include<QCompleter>
#include<QKeyEvent>
#include<QScrollBar>
#include<QAbstractItemView>
#include"dictnode.H"

class texteditpredictor : public QTextEdit
{
    Q_OBJECT

public:
        texteditpredictor(QWidget *parent = 0);
        ~texteditpredictor();

        void setCompleter(QCompleter *c);
        QCompleter *Completer() const;

    protected:
        void keyPressEvent(QKeyEvent *e) Q_DECL_OVERRIDE;
        void focusInEvent(QFocusEvent *e) Q_DECL_OVERRIDE;

    private slots:
        void completar(const QString &complete);

    private:
        QString textoCursor() const;

    private:
        QCompleter *completer;
};

#endif // TEXTEDITPREDICTOR_H
