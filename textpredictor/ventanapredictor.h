#ifndef VENTANAPREDICTOR_H
#define VENTANAPREDICTOR_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QFileDialog>
#include"texteditpredictor.h"
#include"dictnode.H"

namespace Ui {
class ventanapredictor;
}

class ventanapredictor : public QMainWindow
{
    Q_OBJECT

public:
    explicit ventanapredictor(QWidget *parent = 0);
    ~ventanapredictor();

signals:

    void predictor_signal(QString value);

private slots:
    void on_actionNuevo_triggered();

    void on_actionAbrir_triggered();

    void on_actionGuardar_triggered();

    void on_actionGuardar_Como_triggered();

    void on_actionCopiar_triggered();

    void on_actionCortar_triggered();

    void on_actionPegar_triggered();

    void on_actionDeshacer_triggered();

    void on_actionRehacer_triggered();

    void on_textEditor_textChanged();

private:
    Ui::ventanapredictor *ui;

    QCompleter *completer;
    texteditpredictor *TextEditor;
    Cnode *nodo = new Cnode('-');
    QString texto;
    //QStringList lista;
};

#endif // VENTANAPREDICTOR_H
