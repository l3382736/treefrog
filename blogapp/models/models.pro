TARGET = model
TEMPLATE = lib
CONFIG += shared x86_64
QT += sql
QT -= gui
DEFINES += TF_DLL
DESTDIR = ../lib
INCLUDEPATH += ../helpers sqlobjects mongoobjects
DEPENDPATH  += ../helpers sqlobjects mongoobjects
LIBS += -L../lib -lhelper

include(../appbase.pri)

HEADERS += sqlobjects/blogobject.h
HEADERS += blog.h
SOURCES += blog.cpp
