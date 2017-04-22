/********************************************************************************
** Form generated from reading UI file 'search_menu.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_MENU_H
#define UI_SEARCH_MENU_H

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

class Ui_Search_menu
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Search_menu)
    {
        if (Search_menu->objectName().isEmpty())
            Search_menu->setObjectName(QStringLiteral("Search_menu"));
        Search_menu->resize(800, 600);
        menubar = new QMenuBar(Search_menu);
        menubar->setObjectName(QStringLiteral("menubar"));
        Search_menu->setMenuBar(menubar);
        centralwidget = new QWidget(Search_menu);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        Search_menu->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Search_menu);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Search_menu->setStatusBar(statusbar);

        retranslateUi(Search_menu);

        QMetaObject::connectSlotsByName(Search_menu);
    } // setupUi

    void retranslateUi(QMainWindow *Search_menu)
    {
        Search_menu->setWindowTitle(QApplication::translate("Search_menu", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class Search_menu: public Ui_Search_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_MENU_H
