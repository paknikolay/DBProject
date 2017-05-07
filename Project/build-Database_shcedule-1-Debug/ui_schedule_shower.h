/********************************************************************************
** Form generated from reading UI file 'schedule_shower.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCHEDULE_SHOWER_H
#define UI_SCHEDULE_SHOWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Schedule_shower
{
public:
    QWidget *centralwidget;
    QTableWidget *tableWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Schedule_shower)
    {
        if (Schedule_shower->objectName().isEmpty())
            Schedule_shower->setObjectName(QStringLiteral("Schedule_shower"));
        Schedule_shower->resize(800, 600);
        centralwidget = new QWidget(Schedule_shower);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(30, 151, 751, 371));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 50, 250, 50));
        QFont font;
        font.setPointSize(15);
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 50, 250, 50));
        pushButton_2->setFont(font);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(530, 50, 250, 50));
        pushButton_3->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(310, 10, 181, 20));
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 270, 731, 251));
        Schedule_shower->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Schedule_shower);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        Schedule_shower->setMenuBar(menubar);
        statusbar = new QStatusBar(Schedule_shower);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Schedule_shower->setStatusBar(statusbar);

        retranslateUi(Schedule_shower);

        QMetaObject::connectSlotsByName(Schedule_shower);
    } // setupUi

    void retranslateUi(QMainWindow *Schedule_shower)
    {
        Schedule_shower->setWindowTitle(QApplication::translate("Schedule_shower", "MainWindow", 0));
        pushButton->setText(QApplication::translate("Schedule_shower", "\320\222\320\265\321\200\320\275\321\203\321\202\321\214\321\201\321\217 \320\275\320\260\320\267\320\260\320\264", 0));
        pushButton_2->setText(QApplication::translate("Schedule_shower", "\320\222\321\213\320\271\321\202\320\270 \320\262 \320\263\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", 0));
        pushButton_3->setText(QApplication::translate("Schedule_shower", "\320\227\320\260\320\262\320\265\321\200\321\210\320\270\321\202\321\214 \321\201\320\265\320\260\320\275\321\201", 0));
        label->setText(QApplication::translate("Schedule_shower", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202 \320\267\320\260\320\277\321\200\320\276\321\201\320\260", 0));
        label_2->setText(QApplication::translate("Schedule_shower", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class Schedule_shower: public Ui_Schedule_shower {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCHEDULE_SHOWER_H
