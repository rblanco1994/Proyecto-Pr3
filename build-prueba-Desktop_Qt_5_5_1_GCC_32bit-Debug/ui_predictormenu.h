/********************************************************************************
** Form generated from reading UI file 'predictormenu.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREDICTORMENU_H
#define UI_PREDICTORMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_predictormenu
{
public:
    QPushButton *mostrar;
    QPushButton *insertar;
    QPushButton *eliminar;
    QPushButton *editor;
    QPushButton *cerrar;
    QLabel *label;

    void setupUi(QDialog *predictormenu)
    {
        if (predictormenu->objectName().isEmpty())
            predictormenu->setObjectName(QStringLiteral("predictormenu"));
        predictormenu->resize(400, 300);
        mostrar = new QPushButton(predictormenu);
        mostrar->setObjectName(QStringLiteral("mostrar"));
        mostrar->setGeometry(QRect(140, 60, 131, 23));
        insertar = new QPushButton(predictormenu);
        insertar->setObjectName(QStringLiteral("insertar"));
        insertar->setGeometry(QRect(140, 110, 131, 23));
        eliminar = new QPushButton(predictormenu);
        eliminar->setObjectName(QStringLiteral("eliminar"));
        eliminar->setGeometry(QRect(140, 160, 131, 23));
        editor = new QPushButton(predictormenu);
        editor->setObjectName(QStringLiteral("editor"));
        editor->setGeometry(QRect(140, 210, 131, 23));
        cerrar = new QPushButton(predictormenu);
        cerrar->setObjectName(QStringLiteral("cerrar"));
        cerrar->setGeometry(QRect(300, 260, 80, 23));
        label = new QLabel(predictormenu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 20, 51, 21));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        retranslateUi(predictormenu);
        QObject::connect(cerrar, SIGNAL(clicked()), predictormenu, SLOT(close()));

        QMetaObject::connectSlotsByName(predictormenu);
    } // setupUi

    void retranslateUi(QDialog *predictormenu)
    {
        predictormenu->setWindowTitle(QApplication::translate("predictormenu", "Dialog", 0));
        mostrar->setText(QApplication::translate("predictormenu", "Mostrar Diccionario", 0));
        insertar->setText(QApplication::translate("predictormenu", "Insertar Palabra", 0));
        eliminar->setText(QApplication::translate("predictormenu", "Eliminar Palabra", 0));
        editor->setText(QApplication::translate("predictormenu", "Editor de Texto", 0));
        cerrar->setText(QApplication::translate("predictormenu", "Cerrar", 0));
        label->setText(QApplication::translate("predictormenu", "MENU", 0));
    } // retranslateUi

};

namespace Ui {
    class predictormenu: public Ui_predictormenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREDICTORMENU_H
