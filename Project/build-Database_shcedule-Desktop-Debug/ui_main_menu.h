/********************************************************************************
** Form generated from reading UI file 'main_menu.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_MENU_H
#define UI_MAIN_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Main_menu
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Main_menu)
    {
        if (Main_menu->objectName().isEmpty())
            Main_menu->setObjectName(QStringLiteral("Main_menu"));
        Main_menu->resize(400, 300);
        menuBar = new QMenuBar(Main_menu);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        Main_menu->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Main_menu);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Main_menu->addToolBar(mainToolBar);
        centralWidget = new QWidget(Main_menu);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Main_menu->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Main_menu);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Main_menu->setStatusBar(statusBar);

        retranslateUi(Main_menu);

        QMetaObject::connectSlotsByName(Main_menu);
    } // setupUi

    void retranslateUi(QMainWindow *Main_menu)
    {
        Main_menu->setWindowTitle(QApplication::translate("Main_menu", "Main_menu", 0));
    } // retranslateUi

};

namespace Ui {
    class Main_menu: public Ui_Main_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_MENU_H
