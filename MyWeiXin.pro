#-------------------------------------------------
#
# Project created by QtCreator 2018-11-28T08:43:24
#
#-------------------------------------------------

QT       += core gui
QT       += network
QT       += xml
QT       += sql
CONFIG += c++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MyWeiXin
TEMPLATE = app
# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    logindialog.cpp \
    filesrvdlg.cpp \
    filecntdlg.cpp \
    sqlite.cpp \
    useritemdelegate.cpp

HEADERS += \
    UserListData.h \
        mainwindow.h \
    logindialog.h \
    filesrvdlg.h \
    filecntdlg.h \
    sqlite.h \
    useritemdelegate.h

FORMS += \
        mainwindow.ui \
    logindialog.ui \
    filesrvdlg.ui \
    filecntdlg.ui

RESOURCES += \
    img.qrc \
    xml.qrc \
    res.qrc
