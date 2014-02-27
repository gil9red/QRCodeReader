QT += core gui

TARGET = QRCodeReader

DESTDIR = ../bin

include(QZXing_sourceV2.2/QZXing.pri)
INCLUDEPATH += QZXing_sourceV2.2

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS += \
    mainwindow.ui
