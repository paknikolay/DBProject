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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sign_up
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QTextEdit *id;
    QLabel *label_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Sign_up)
    {
        if (Sign_up->objectName().isEmpty())
            Sign_up->setObjectName(QStringLiteral("Sign_up"));
        Sign_up->resize(792, 422);
        centralwidget = new QWidget(Sign_up);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 230, 251, 91));
        QFont font;
        font.setPointSize(15);
        pushButton->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(310, 30, 180, 18));
        label_3->setFont(font);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(620, 10, 120, 40));
        id = new QTextEdit(centralwidget);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(250, 160, 250, 50));
        QFont font1;
        font1.setPointSize(20);
        id->setFont(font1);
        id->setToolTipDuration(-1);
        id->setLayoutDirection(Qt::LeftToRight);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(360, 100, 31, 20));
        label_5->setFont(font);
        Sign_up->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Sign_up);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 792, 25));
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
        label_3->setText(QApplication::translate("Sign_up", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", 0));
        pushButton_2->setText(QApplication::translate("Sign_up", "\320\227\320\260\320\262\320\265\321\200\321\210\320\270\321\202\321\214\321\201\320\265\320\260\320\275\321\201", 0));
        label_5->setText(QApplication::translate("Sign_up", "ID", 0));
    } // retranslateUi

};

namespace Ui {
    class Sign_up: public Ui_Sign_up {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGN_UP_H
