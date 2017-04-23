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
    search_menu.cpp \
    sign_up.cpp \
    user.cpp \
    schedule_shower.cpp \
    schedule_menu_.cpp \
    student_time.cpp

HEADERS  += main_menu.h \
    search_menu.h \
    sign_up.h \
    user.h \
    schedule_shower.h \
    schedule_menu_.h \
    student_time.h

FORMS    += main_menu.ui \
    search_menu.ui \
    sign_up.ui \
    schedule_shower.ui \
    schedule_menu_.ui \
    student_time.ui
