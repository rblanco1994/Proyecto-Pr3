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
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuArchivo;
    QMenu *menuEdicion;
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
        ventanapredictor->setMenuBar(menubar);
        statusbar = new QStatusBar(ventanapredictor);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ventanapredictor->setStatusBar(statusbar);

        menubar->addAction(menuArchivo->menuAction());
        menubar->addAction(menuEdicion->menuAction());
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
        menuArchivo->setTitle(QApplication::translate("ventanapredictor", "Archivo", 0));
        menuEdicion->setTitle(QApplication::translate("ventanapredictor", "Editar", 0));
    } // retranslateUi

};

namespace Ui {
    class ventanapredictor: public Ui_ventanapredictor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAPREDICTOR_H
