#-------------------------------------------------
#
# Project created by QtCreator 2016-11-21T20:54:10
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = textpredictor
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    texteditpredictor.cpp \
    ventanapredictor.cpp

HEADERS  += mainwindow.h \
    texteditpredictor.h \
    ventanapredictor.h \
    dictnode.H

FORMS    += mainwindow.ui \
    ventanapredictor.ui

WARN = -Wall -Wextra -Wcast-align -Wno-sign-compare -Wno-write-strings \
       -Wno-parentheses -Wno-invalid-source-encoding

CXX += /usr/bin/clang++-3.8

CFLAGS += -g -O0 -std=c++14 $(WARN)

CXXFLAGS += -g -O0 -std=c++14 $(WARN)

INCLUDEPATH += /home/roberto/Descargas/aleph

LIBS += -L/home/roberto/Descargas/aleph -lAleph -lm -lgsl -lgslcblas -lgmp -lmpfr -lpthread -lc
