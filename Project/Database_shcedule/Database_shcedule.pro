#-------------------------------------------------
#
# Project created by QtCreator 2017-04-22T17:17:41
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Database_shcedule
TEMPLATE = app


SOURCES += main.cpp\
        main_menu.cpp \
    data_shower.cpp \
    schedule_menu.cpp \
    search_menu.cpp \
    persional_data.cpp \
    sign_up.cpp \
    user.cpp

HEADERS  += main_menu.h \
    data_shower.h \
    schedule_menu.h \
    search_menu.h \
    persional_data.h \
    sign_up.h \
    user.h

FORMS    += main_menu.ui \
    data_shower.ui \
    schedule_menu.ui \
    search_menu.ui \
    persional_data.ui \
    sign_up.ui
