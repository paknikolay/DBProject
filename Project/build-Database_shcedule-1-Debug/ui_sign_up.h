/********************************************************************************
** Form generated from reading UI file 'sign_up.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sign_up
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QTextEdit *surname;
    QTextEdit *name;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTextBrowser *patronymic;
    QLabel *label_4;
    QPushButton *pushButton_2;
    QTextEdit *id;
    QLabel *label_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Sign_up)
    {
        if (Sign_up->objectName().isEmpty())
            Sign_up->setObjectName(QStringLiteral("Sign_up"));
        Sign_up->resize(800, 600);
        centralwidget = new QWidget(Sign_up);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(260, 410, 251, 91));
        QFont font;
        font.setPointSize(15);
        pushButton->setFont(font);
        surname = new QTextEdit(centralwidget);
        surname->setObjectName(QStringLiteral("surname"));
        surname->setGeometry(QRect(10, 230, 250, 50));
        QFont font1;
        font1.setPointSize(20);
        surname->setFont(font1);
        surname->setToolTipDuration(-1);
        surname->setLayoutDirection(Qt::LeftToRight);
        name = new QTextEdit(centralwidget);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(270, 230, 250, 50));
        name->setFont(font1);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 200, 100, 20));
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(370, 200, 41, 18));
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(310, 100, 180, 18));
        label_3->setFont(font);
        patronymic = new QTextBrowser(centralwidget);
        patronymic->setObjectName(QStringLiteral("patronymic"));
        patronymic->setGeometry(QRect(530, 230, 250, 50));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(600, 200, 91, 20));
        label_4->setFont(font);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(620, 20, 150, 30));
        id = new QTextEdit(centralwidget);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(270, 320, 250, 50));
        id->setFont(font1);
        id->setToolTipDuration(-1);
        id->setLayoutDirection(Qt::LeftToRight);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(370, 290, 31, 20));
        label_5->setFont(font);
        Sign_up->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Sign_up);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        Sign_up->setMenuBar(menubar);
        statusbar = new QStatusBar(Sign_up);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Sign_up->setStatusBar(statusbar);

        retranslateUi(Sign_up);

        QMetaObject::connectSlotsByName(Sign_up);
    } // setupUi

    void retranslateUi(QMainWindow *Sign_up)
    {
        Sign_up->setWindowTitle(QApplication::translate("Sign_up", "\320\222\321\205\320\276\320\264", 0));
        pushButton->setText(QApplication::translate("Sign_up", "\320\222\321\205\320\276\320\264", 0));
        label->setText(QApplication::translate("Sign_up", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", 0));
        label_2->setText(QApplication::translate("Sign_up", "\320\230\320\274\321\217", 0));
        label_3->setText(QApplication::translate("Sign_up", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", 0));
        label_4->setText(QApplication::translate("Sign_up", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", 0));
        pushButton_2->setText(QApplication::translate("Sign_up", "\320\227\320\260\320\262\320\265\321\200\321\210\320\270\321\202\321\214\321\201\320\265\320\260\320\275\321\201", 0));
        label_5->setText(QApplication::translate("Sign_up", "ID", 0));
    } // retranslateUi

};

namespace Ui {
    class Sign_up: public Ui_Sign_up {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGN_UP_H
