QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets


TARGET = QRCodeReader

DESTDIR = ../bin

include(QZXing_sourceV2.4/QZXing.pri)

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS += \
    mainwindow.ui
