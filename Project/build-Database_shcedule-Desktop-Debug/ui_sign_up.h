/********************************************************************************
** Form generated from reading UI file 'sign_up.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGN_UP_H
#define UI_SIGN_UP_H

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

class Ui_Sign_up
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Sign_up)
    {
        if (Sign_up->objectName().isEmpty())
            Sign_up->setObjectName(QStringLiteral("Sign_up"));
        Sign_up->resize(800, 600);
        menubar = new QMenuBar(Sign_up);
        menubar->setObjectName(QStringLiteral("menubar"));
        Sign_up->setMenuBar(menubar);
        centralwidget = new QWidget(Sign_up);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        Sign_up->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Sign_up);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Sign_up->setStatusBar(statusbar);

        retranslateUi(Sign_up);

        QMetaObject::connectSlotsByName(Sign_up);
    } // setupUi

    void retranslateUi(QMainWindow *Sign_up)
    {
        Sign_up->setWindowTitle(QApplication::translate("Sign_up", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class Sign_up: public Ui_Sign_up {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGN_UP_H
