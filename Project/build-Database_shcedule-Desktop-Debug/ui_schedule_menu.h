/********************************************************************************
** Form generated from reading UI file 'schedule_menu.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCHEDULE_MENU_H
#define UI_SCHEDULE_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Schedule_menu
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Schedule_menu)
    {
        if (Schedule_menu->objectName().isEmpty())
            Schedule_menu->setObjectName(QStringLiteral("Schedule_menu"));
        Schedule_menu->resize(800, 600);
        menubar = new QMenuBar(Schedule_menu);
        menubar->setObjectName(QStringLiteral("menubar"));
        Schedule_menu->setMenuBar(menubar);
        centralwidget = new QWidget(Schedule_menu);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        Schedule_menu->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Schedule_menu);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Schedule_menu->setStatusBar(statusbar);

        retranslateUi(Schedule_menu);

        QMetaObject::connectSlotsByName(Schedule_menu);
    } // setupUi

    void retranslateUi(QMainWindow *Schedule_menu)
    {
        Schedule_menu->setWindowTitle(QApplication::translate("Schedule_menu", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class Schedule_menu: public Ui_Schedule_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCHEDULE_MENU_H
