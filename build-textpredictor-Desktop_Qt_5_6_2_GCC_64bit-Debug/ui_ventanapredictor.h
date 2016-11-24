/********************************************************************************
** Form generated from reading UI file 'ventanapredictor.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANAPREDICTOR_H
#define UI_VENTANAPREDICTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ventanapredictor
{
public:
    QAction *actionNuevo;
    QAction *actionAbrir;
    QAction *actionGuardar;
    QAction *actionGuardar_Como;
    QAction *actionSalir;
    QAction *actionCopiar;
    QAction *actionCortar;
    QAction *actionPegar;
    QAction *actionDeshacer;
    QAction *actionRehacer;
    QAction *actionTexto_Rojo;
    QAction *actionTexto_Azul;
    QAction *actionTexto_Verde;
    QAction *actionTexto_Negro;
    QAction *actionFondo_Negro;
    QAction *actionFondo_Gris;
    QAction *actionFondo_Azul;
    QAction *actionFondo_Blanco;
    QAction *actionOblivion;
    QAction *actionDarkBlue;
    QAction *actionRedSkin;
    QAction *actionClasico;
    QAction *actionTexto_Morado;
    QAction *actionBlack_Orange;
    QAction *actionTimes;
    QAction *actionHelvetica_Cronyx;
    QAction *actionCourier;
    QAction *actionOldEnglish;
    QAction *action10;
    QAction *action12;
    QAction *action14;
    QAction *action16;
    QAction *actionRoyalGold;
    QAction *actionH;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuArchivo;
    QMenu *menuEdicion;
    QMenu *menuPreferencias_2;
    QMenu *menuColor_de_Letra;
    QMenu *menuType_Here;
    QMenu *menuTipo_de_Letra_2;
    QMenu *menuTama_o_de_Letra_2;
    QMenu *menuTemas_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ventanapredictor)
    {
        if (ventanapredictor->objectName().isEmpty())
            ventanapredictor->setObjectName(QStringLiteral("ventanapredictor"));
        ventanapredictor->resize(800, 600);
        actionNuevo = new QAction(ventanapredictor);
        actionNuevo->setObjectName(QStringLiteral("actionNuevo"));
        actionAbrir = new QAction(ventanapredictor);
        actionAbrir->setObjectName(QStringLiteral("actionAbrir"));
        actionGuardar = new QAction(ventanapredictor);
        actionGuardar->setObjectName(QStringLiteral("actionGuardar"));
        actionGuardar_Como = new QAction(ventanapredictor);
        actionGuardar_Como->setObjectName(QStringLiteral("actionGuardar_Como"));
        actionSalir = new QAction(ventanapredictor);
        actionSalir->setObjectName(QStringLiteral("actionSalir"));
        actionCopiar = new QAction(ventanapredictor);
        actionCopiar->setObjectName(QStringLiteral("actionCopiar"));
        actionCortar = new QAction(ventanapredictor);
        actionCortar->setObjectName(QStringLiteral("actionCortar"));
        actionPegar = new QAction(ventanapredictor);
        actionPegar->setObjectName(QStringLiteral("actionPegar"));
        actionDeshacer = new QAction(ventanapredictor);
        actionDeshacer->setObjectName(QStringLiteral("actionDeshacer"));
        actionRehacer = new QAction(ventanapredictor);
        actionRehacer->setObjectName(QStringLiteral("actionRehacer"));
        actionTexto_Rojo = new QAction(ventanapredictor);
        actionTexto_Rojo->setObjectName(QStringLiteral("actionTexto_Rojo"));
        actionTexto_Azul = new QAction(ventanapredictor);
        actionTexto_Azul->setObjectName(QStringLiteral("actionTexto_Azul"));
        actionTexto_Verde = new QAction(ventanapredictor);
        actionTexto_Verde->setObjectName(QStringLiteral("actionTexto_Verde"));
        actionTexto_Negro = new QAction(ventanapredictor);
        actionTexto_Negro->setObjectName(QStringLiteral("actionTexto_Negro"));
        actionFondo_Negro = new QAction(ventanapredictor);
        actionFondo_Negro->setObjectName(QStringLiteral("actionFondo_Negro"));
        actionFondo_Gris = new QAction(ventanapredictor);
        actionFondo_Gris->setObjectName(QStringLiteral("actionFondo_Gris"));
        actionFondo_Azul = new QAction(ventanapredictor);
        actionFondo_Azul->setObjectName(QStringLiteral("actionFondo_Azul"));
        actionFondo_Blanco = new QAction(ventanapredictor);
        actionFondo_Blanco->setObjectName(QStringLiteral("actionFondo_Blanco"));
        actionOblivion = new QAction(ventanapredictor);
        actionOblivion->setObjectName(QStringLiteral("actionOblivion"));
        actionDarkBlue = new QAction(ventanapredictor);
        actionDarkBlue->setObjectName(QStringLiteral("actionDarkBlue"));
        actionRedSkin = new QAction(ventanapredictor);
        actionRedSkin->setObjectName(QStringLiteral("actionRedSkin"));
        actionClasico = new QAction(ventanapredictor);
        actionClasico->setObjectName(QStringLiteral("actionClasico"));
        actionTexto_Morado = new QAction(ventanapredictor);
        actionTexto_Morado->setObjectName(QStringLiteral("actionTexto_Morado"));
        actionBlack_Orange = new QAction(ventanapredictor);
        actionBlack_Orange->setObjectName(QStringLiteral("actionBlack_Orange"));
        actionTimes = new QAction(ventanapredictor);
        actionTimes->setObjectName(QStringLiteral("actionTimes"));
        actionHelvetica_Cronyx = new QAction(ventanapredictor);
        actionHelvetica_Cronyx->setObjectName(QStringLiteral("actionHelvetica_Cronyx"));
        actionCourier = new QAction(ventanapredictor);
        actionCourier->setObjectName(QStringLiteral("actionCourier"));
        actionOldEnglish = new QAction(ventanapredictor);
        actionOldEnglish->setObjectName(QStringLiteral("actionOldEnglish"));
        action10 = new QAction(ventanapredictor);
        action10->setObjectName(QStringLiteral("action10"));
        action12 = new QAction(ventanapredictor);
        action12->setObjectName(QStringLiteral("action12"));
        action14 = new QAction(ventanapredictor);
        action14->setObjectName(QStringLiteral("action14"));
        action16 = new QAction(ventanapredictor);
        action16->setObjectName(QStringLiteral("action16"));
        actionRoyalGold = new QAction(ventanapredictor);
        actionRoyalGold->setObjectName(QStringLiteral("actionRoyalGold"));
        actionH = new QAction(ventanapredictor);
        actionH->setObjectName(QStringLiteral("actionH"));
        centralwidget = new QWidget(ventanapredictor);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        ventanapredictor->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ventanapredictor);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName(QStringLiteral("menuArchivo"));
        menuEdicion = new QMenu(menubar);
        menuEdicion->setObjectName(QStringLiteral("menuEdicion"));
        menuPreferencias_2 = new QMenu(menubar);
        menuPreferencias_2->setObjectName(QStringLiteral("menuPreferencias_2"));
        menuColor_de_Letra = new QMenu(menuPreferencias_2);
        menuColor_de_Letra->setObjectName(QStringLiteral("menuColor_de_Letra"));
        menuType_Here = new QMenu(menuPreferencias_2);
        menuType_Here->setObjectName(QStringLiteral("menuType_Here"));
        menuTipo_de_Letra_2 = new QMenu(menuPreferencias_2);
        menuTipo_de_Letra_2->setObjectName(QStringLiteral("menuTipo_de_Letra_2"));
        menuTama_o_de_Letra_2 = new QMenu(menuPreferencias_2);
        menuTama_o_de_Letra_2->setObjectName(QStringLiteral("menuTama_o_de_Letra_2"));
        menuTemas_2 = new QMenu(menuPreferencias_2);
        menuTemas_2->setObjectName(QStringLiteral("menuTemas_2"));
        ventanapredictor->setMenuBar(menubar);
        statusbar = new QStatusBar(ventanapredictor);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ventanapredictor->setStatusBar(statusbar);

        menubar->addAction(menuArchivo->menuAction());
        menubar->addAction(menuEdicion->menuAction());
        menubar->addAction(menuPreferencias_2->menuAction());
        menuArchivo->addSeparator();
        menuArchivo->addAction(actionNuevo);
        menuArchivo->addAction(actionAbrir);
        menuArchivo->addAction(actionGuardar);
        menuArchivo->addAction(actionGuardar_Como);
        menuArchivo->addSeparator();
        menuArchivo->addAction(actionSalir);
        menuEdicion->addAction(actionCopiar);
        menuEdicion->addAction(actionCortar);
        menuEdicion->addAction(actionPegar);
        menuEdicion->addSeparator();
        menuEdicion->addAction(actionDeshacer);
        menuEdicion->addAction(actionRehacer);
        menuPreferencias_2->addAction(menuColor_de_Letra->menuAction());
        menuPreferencias_2->addAction(menuTipo_de_Letra_2->menuAction());
        menuPreferencias_2->addAction(menuTama_o_de_Letra_2->menuAction());
        menuPreferencias_2->addSeparator();
        menuPreferencias_2->addAction(menuTemas_2->menuAction());
        menuPreferencias_2->addAction(menuType_Here->menuAction());
        menuColor_de_Letra->addAction(actionTexto_Rojo);
        menuColor_de_Letra->addAction(actionTexto_Azul);
        menuColor_de_Letra->addAction(actionTexto_Verde);
        menuColor_de_Letra->addAction(actionTexto_Morado);
        menuColor_de_Letra->addAction(actionTexto_Negro);
        menuTipo_de_Letra_2->addAction(actionTimes);
        menuTipo_de_Letra_2->addAction(actionHelvetica_Cronyx);
        menuTipo_de_Letra_2->addAction(actionCourier);
        menuTipo_de_Letra_2->addAction(actionOldEnglish);
        menuTama_o_de_Letra_2->addAction(action10);
        menuTama_o_de_Letra_2->addAction(action12);
        menuTama_o_de_Letra_2->addAction(action14);
        menuTama_o_de_Letra_2->addAction(action16);
        menuTemas_2->addAction(actionOblivion);
        menuTemas_2->addAction(actionDarkBlue);
        menuTemas_2->addAction(actionRedSkin);
        menuTemas_2->addAction(actionRoyalGold);
        menuTemas_2->addAction(actionBlack_Orange);
        menuTemas_2->addAction(actionClasico);

        retranslateUi(ventanapredictor);
        QObject::connect(actionSalir, SIGNAL(triggered()), ventanapredictor, SLOT(close()));

        QMetaObject::connectSlotsByName(ventanapredictor);
    } // setupUi

    void retranslateUi(QMainWindow *ventanapredictor)
    {
        ventanapredictor->setWindowTitle(QApplication::translate("ventanapredictor", "MainWindow", 0));
        actionNuevo->setText(QApplication::translate("ventanapredictor", "Nuevo", 0));
        actionAbrir->setText(QApplication::translate("ventanapredictor", "Abrir", 0));
        actionGuardar->setText(QApplication::translate("ventanapredictor", "Guardar", 0));
        actionGuardar_Como->setText(QApplication::translate("ventanapredictor", "Guardar Como", 0));
        actionSalir->setText(QApplication::translate("ventanapredictor", "Salir", 0));
        actionCopiar->setText(QApplication::translate("ventanapredictor", "Copiar", 0));
        actionCortar->setText(QApplication::translate("ventanapredictor", "Cortar", 0));
        actionPegar->setText(QApplication::translate("ventanapredictor", "Pegar", 0));
        actionDeshacer->setText(QApplication::translate("ventanapredictor", "Deshacer", 0));
        actionRehacer->setText(QApplication::translate("ventanapredictor", "Rehacer", 0));
        actionTexto_Rojo->setText(QApplication::translate("ventanapredictor", "Texto Rojo", 0));
        actionTexto_Azul->setText(QApplication::translate("ventanapredictor", "Texto Azul", 0));
        actionTexto_Verde->setText(QApplication::translate("ventanapredictor", "Texto Verde", 0));
        actionTexto_Negro->setText(QApplication::translate("ventanapredictor", "Texto Negro", 0));
        actionFondo_Negro->setText(QApplication::translate("ventanapredictor", "Fondo Negro", 0));
        actionFondo_Gris->setText(QApplication::translate("ventanapredictor", "Fondo Gris", 0));
        actionFondo_Azul->setText(QApplication::translate("ventanapredictor", "Fondo Azul", 0));
        actionFondo_Blanco->setText(QApplication::translate("ventanapredictor", "Fondo Blanco", 0));
        actionOblivion->setText(QApplication::translate("ventanapredictor", "Oblivion", 0));
        actionDarkBlue->setText(QApplication::translate("ventanapredictor", "DarkBlue", 0));
        actionRedSkin->setText(QApplication::translate("ventanapredictor", "RedSkin", 0));
        actionClasico->setText(QApplication::translate("ventanapredictor", "Clasico", 0));
        actionTexto_Morado->setText(QApplication::translate("ventanapredictor", "Texto Morado", 0));
        actionBlack_Orange->setText(QApplication::translate("ventanapredictor", "Black-Orange", 0));
        actionTimes->setText(QApplication::translate("ventanapredictor", "Times", 0));
        actionHelvetica_Cronyx->setText(QApplication::translate("ventanapredictor", "Helvetica [Cronyx]", 0));
        actionCourier->setText(QApplication::translate("ventanapredictor", "Courier", 0));
        actionOldEnglish->setText(QApplication::translate("ventanapredictor", "OldEnglish", 0));
        action10->setText(QApplication::translate("ventanapredictor", "10", 0));
        action12->setText(QApplication::translate("ventanapredictor", "12", 0));
        action14->setText(QApplication::translate("ventanapredictor", "14", 0));
        action16->setText(QApplication::translate("ventanapredictor", "16", 0));
        actionRoyalGold->setText(QApplication::translate("ventanapredictor", "RoyalGold", 0));
        actionH->setText(QApplication::translate("ventanapredictor", "h", 0));
        menuArchivo->setTitle(QApplication::translate("ventanapredictor", "Archivo", 0));
        menuEdicion->setTitle(QApplication::translate("ventanapredictor", "Editar", 0));
        menuPreferencias_2->setTitle(QApplication::translate("ventanapredictor", "Preferencias", 0));
        menuColor_de_Letra->setTitle(QApplication::translate("ventanapredictor", "Color de Letra", 0));
        menuType_Here->setTitle(QApplication::translate("ventanapredictor", "Type Here", 0));
        menuTipo_de_Letra_2->setTitle(QApplication::translate("ventanapredictor", "Tipo de Letra", 0));
        menuTama_o_de_Letra_2->setTitle(QApplication::translate("ventanapredictor", "Tama\303\261o de Letra", 0));
        menuTemas_2->setTitle(QApplication::translate("ventanapredictor", "Temas", 0));
    } // retranslateUi

};

namespace Ui {
    class ventanapredictor: public Ui_ventanapredictor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAPREDICTOR_H
