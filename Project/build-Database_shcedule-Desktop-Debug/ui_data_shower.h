/********************************************************************************
** Form generated from reading UI file 'data_shower.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATA_SHOWER_H
#define UI_DATA_SHOWER_H

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

class Ui_data_shower
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *data_shower)
    {
        if (data_shower->objectName().isEmpty())
            data_shower->setObjectName(QStringLiteral("data_shower"));
        data_shower->resize(800, 600);
        menubar = new QMenuBar(data_shower);
        menubar->setObjectName(QStringLiteral("menubar"));
        data_shower->setMenuBar(menubar);
        centralwidget = new QWidget(data_shower);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        data_shower->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(data_shower);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        data_shower->setStatusBar(statusbar);

        retranslateUi(data_shower);

        QMetaObject::connectSlotsByName(data_shower);
    } // setupUi

    void retranslateUi(QMainWindow *data_shower)
    {
        data_shower->setWindowTitle(QApplication::translate("data_shower", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class data_shower: public Ui_data_shower {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATA_SHOWER_H
