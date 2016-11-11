#ifndef EDITOR_H
#define EDITOR_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QFileDialog>
#include <vbuscar.h>
#include "dictnode.H"


namespace Ui {
class editor;
}

class editor : public QMainWindow
{
    Q_OBJECT

public:
    explicit editor(QWidget *parent = 0);
    ~editor();
    QString mostrar_palabra();

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


    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::editor *ui;

    QString texto;

    Cnode *nodo = new Cnode('-');
};

#endif // EDITOR_H
