/********************************************************************************
** Form generated from reading UI file 'persional_data.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSIONAL_DATA_H
#define UI_PERSIONAL_DATA_H

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

class Ui_Persional_data
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Persional_data)
    {
        if (Persional_data->objectName().isEmpty())
            Persional_data->setObjectName(QStringLiteral("Persional_data"));
        Persional_data->resize(800, 600);
        menubar = new QMenuBar(Persional_data);
        menubar->setObjectName(QStringLiteral("menubar"));
        Persional_data->setMenuBar(menubar);
        centralwidget = new QWidget(Persional_data);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        Persional_data->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Persional_data);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Persional_data->setStatusBar(statusbar);

        retranslateUi(Persional_data);

        QMetaObject::connectSlotsByName(Persional_data);
    } // setupUi

    void retranslateUi(QMainWindow *Persional_data)
    {
        Persional_data->setWindowTitle(QApplication::translate("Persional_data", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class Persional_data: public Ui_Persional_data {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSIONAL_DATA_H
