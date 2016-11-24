#ifndef VENTANAPREDICTOR_H
#define VENTANAPREDICTOR_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QFileDialog>
#include<QFont>
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

    void on_actionTexto_Rojo_triggered();

    void on_actionTexto_Azul_triggered();

    void on_actionTexto_Verde_triggered();

    void on_actionTexto_Negro_triggered();

    void on_actionOblivion_triggered();

    void on_actionDarkBlue_triggered();

    void on_actionRedSkin_triggered();

    void on_actionClasico_triggered();

    void on_actionTexto_Morado_triggered();

    void on_actionBlack_Orange_triggered();

    void on_actionTimes_triggered();

    void on_actionHelvetica_Cronyx_triggered();

    void on_actionCourier_triggered();

    void on_actionOldEnglish_triggered();

    void on_action10_triggered();

    void on_action12_triggered();

    void on_action14_triggered();

    void on_action16_triggered();

    void on_actionRoyalGold_triggered();

    void on_actionPor_Defecto_Monospace_triggered();

private:
    Ui::ventanapredictor *ui;

    QCompleter *completer;
    texteditpredictor *TextEditor;
    Cnode *nodo = new Cnode('-');
    QString texto;
    QString currentBackground;
    QString currentTextType;
    int CurrentTextSize;

};

#endif // VENTANAPREDICTOR_H
