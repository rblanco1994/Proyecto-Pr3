#-------------------------------------------------
#
# Project created by QtCreator 2016-11-05T19:22:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = prueba
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    predictormenu.cpp \
    editor.cpp

HEADERS  += mainwindow.h \
    predictormenu.h \
    editor.h \
    dictnode.H

FORMS    += mainwindow.ui \
    predictormenu.ui \
    editor.ui
