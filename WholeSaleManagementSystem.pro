#-------------------------------------------------
#
# Project created by QtCreator 2016-03-20T22:22:06
#
#-------------------------------------------------

QT       += core gui sql network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = WholeSaleManagementSystem
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    loginwindow.cpp \
    homewindow.cpp \
    homenewwindow.cpp \
    detailswindow.cpp \
    shoppingcartwindow.cpp \
    checkoutwindow.cpp \
    signup.cpp \
    signinwindow.cpp \
    errordialog.cpp

HEADERS  += mainwindow.h \
    homewindow.h \
    homenewwindow.h \
    detailswindow.h \
    shoppingcartwindow.h \
    checkoutwindow.h \
    signup.h \
    signinwindow.h \
    errordialog.h

FORMS    += mainwindow.ui \
    homewindow.ui \
    homenewwindow.ui \
    detailswindow.ui \
    shoppingcartwindow.ui \
    checkoutwindow.ui \
    signup.ui \
    signinwindow.ui \
    errordialog.ui
