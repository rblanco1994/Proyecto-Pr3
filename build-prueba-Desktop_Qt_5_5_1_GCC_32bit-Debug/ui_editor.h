/********************************************************************************
** Form generated from reading UI file 'editor.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITOR_H
#define UI_EDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_editor
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
    QTextEdit *textEdit;
    QTextEdit *mostrar;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QMenu *menuArchivo;
    QMenu *menuEditar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *editor)
    {
        if (editor->objectName().isEmpty())
            editor->setObjectName(QStringLiteral("editor"));
        editor->resize(800, 471);
        actionNuevo = new QAction(editor);
        actionNuevo->setObjectName(QStringLiteral("actionNuevo"));
        actionAbrir = new QAction(editor);
        actionAbrir->setObjectName(QStringLiteral("actionAbrir"));
        actionGuardar = new QAction(editor);
        actionGuardar->setObjectName(QStringLiteral("actionGuardar"));
        actionGuardar_Como = new QAction(editor);
        actionGuardar_Como->setObjectName(QStringLiteral("actionGuardar_Como"));
        actionSalir = new QAction(editor);
        actionSalir->setObjectName(QStringLiteral("actionSalir"));
        actionCopiar = new QAction(editor);
        actionCopiar->setObjectName(QStringLiteral("actionCopiar"));
        actionCortar = new QAction(editor);
        actionCortar->setObjectName(QStringLiteral("actionCortar"));
        actionPegar = new QAction(editor);
        actionPegar->setObjectName(QStringLiteral("actionPegar"));
        actionDeshacer = new QAction(editor);
        actionDeshacer->setObjectName(QStringLiteral("actionDeshacer"));
        actionRehacer = new QAction(editor);
        actionRehacer->setObjectName(QStringLiteral("actionRehacer"));
        centralwidget = new QWidget(editor);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 20, 601, 391));
        mostrar = new QTextEdit(centralwidget);
        mostrar->setObjectName(QStringLiteral("mostrar"));
        mostrar->setGeometry(QRect(620, 20, 161, 261));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(640, 310, 80, 23));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(650, 350, 80, 23));
        editor->setCentralWidget(centralwidget);
        menubar = new QMenuBar(editor);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName(QStringLiteral("menuArchivo"));
        menuEditar = new QMenu(menubar);
        menuEditar->setObjectName(QStringLiteral("menuEditar"));
        editor->setMenuBar(menubar);
        statusbar = new QStatusBar(editor);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        editor->setStatusBar(statusbar);

        menubar->addAction(menuArchivo->menuAction());
        menubar->addAction(menuEditar->menuAction());
        menuArchivo->addAction(actionNuevo);
        menuArchivo->addAction(actionAbrir);
        menuArchivo->addAction(actionGuardar);
        menuArchivo->addAction(actionGuardar_Como);
        menuArchivo->addSeparator();
        menuArchivo->addAction(actionSalir);
        menuEditar->addAction(actionCopiar);
        menuEditar->addAction(actionCortar);
        menuEditar->addAction(actionPegar);
        menuEditar->addSeparator();
        menuEditar->addAction(actionDeshacer);
        menuEditar->addAction(actionRehacer);

        retranslateUi(editor);
        QObject::connect(actionSalir, SIGNAL(triggered()), editor, SLOT(close()));

        QMetaObject::connectSlotsByName(editor);
    } // setupUi

    void retranslateUi(QMainWindow *editor)
    {
        editor->setWindowTitle(QApplication::translate("editor", "MainWindow", 0));
        actionNuevo->setText(QApplication::translate("editor", "Nuevo", 0));
        actionAbrir->setText(QApplication::translate("editor", "Abrir", 0));
        actionGuardar->setText(QApplication::translate("editor", "Guardar", 0));
        actionGuardar_Como->setText(QApplication::translate("editor", "Guardar Como", 0));
        actionSalir->setText(QApplication::translate("editor", "Salir", 0));
        actionCopiar->setText(QApplication::translate("editor", "Copiar", 0));
        actionCortar->setText(QApplication::translate("editor", "Cortar", 0));
        actionPegar->setText(QApplication::translate("editor", "Pegar", 0));
        actionDeshacer->setText(QApplication::translate("editor", "Deshacer", 0));
        actionRehacer->setText(QApplication::translate("editor", "Rehacer", 0));
        pushButton->setText(QApplication::translate("editor", "actualizar", 0));
        pushButton_2->setText(QApplication::translate("editor", "PushButton", 0));
        menuArchivo->setTitle(QApplication::translate("editor", "Archivo", 0));
        menuEditar->setTitle(QApplication::translate("editor", "Editar", 0));
    } // retranslateUi

};

namespace Ui {
    class editor: public Ui_editor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITOR_H
