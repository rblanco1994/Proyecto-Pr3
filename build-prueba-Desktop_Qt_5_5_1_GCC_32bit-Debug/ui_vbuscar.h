/********************************************************************************
** Form generated from reading UI file 'vbuscar.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VBUSCAR_H
#define UI_VBUSCAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vbuscar
{
public:
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *vbuscar)
    {
        if (vbuscar->objectName().isEmpty())
            vbuscar->setObjectName(QStringLiteral("vbuscar"));
        vbuscar->resize(257, 137);
        centralwidget = new QWidget(vbuscar);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(40, 30, 171, 31));
        vbuscar->setCentralWidget(centralwidget);
        menubar = new QMenuBar(vbuscar);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 257, 20));
        vbuscar->setMenuBar(menubar);
        statusbar = new QStatusBar(vbuscar);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        vbuscar->setStatusBar(statusbar);

        retranslateUi(vbuscar);

        QMetaObject::connectSlotsByName(vbuscar);
    } // setupUi

    void retranslateUi(QMainWindow *vbuscar)
    {
        vbuscar->setWindowTitle(QApplication::translate("vbuscar", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class vbuscar: public Ui_vbuscar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VBUSCAR_H
