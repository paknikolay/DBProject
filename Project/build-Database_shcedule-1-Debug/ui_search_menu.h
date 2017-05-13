/********************************************************************************
** Form generated from reading UI file 'search_menu.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_MENU_H
#define UI_SEARCH_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Search_menu
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QTextBrowser *surname;
    QTextBrowser *name;
    QLabel *label_2;
    QLabel *label_3;
    QTextBrowser *pathronymic;
    QLabel *label_4;
    QCheckBox *age;
    QCheckBox *address;
    QCheckBox *phone;
    QCheckBox *email;
    QCheckBox *vk;
    QDialogButtonBox *buttonBox;
    QLabel *label_5;
    QCheckBox *department;
    QCheckBox *course;
    QCheckBox *degree;
    QCheckBox *group;
    QCheckBox *date;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Search_menu)
    {
        if (Search_menu->objectName().isEmpty())
            Search_menu->setObjectName(QStringLiteral("Search_menu"));
        Search_menu->resize(800, 480);
        centralwidget = new QWidget(Search_menu);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 80, 741, 20));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        surname = new QTextBrowser(centralwidget);
        surname->setObjectName(QStringLiteral("surname"));
        surname->setGeometry(QRect(10, 180, 250, 50));
        surname->setReadOnly(false);
        name = new QTextBrowser(centralwidget);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(270, 180, 250, 50));
        name->setReadOnly(false);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 150, 91, 18));
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(370, 150, 41, 18));
        label_3->setFont(font);
        pathronymic = new QTextBrowser(centralwidget);
        pathronymic->setObjectName(QStringLiteral("pathronymic"));
        pathronymic->setGeometry(QRect(530, 180, 250, 50));
        pathronymic->setReadOnly(false);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(610, 150, 91, 20));
        label_4->setFont(font);
        age = new QCheckBox(centralwidget);
        age->setObjectName(QStringLiteral("age"));
        age->setGeometry(QRect(90, 270, 111, 22));
        age->setFont(font);
        address = new QCheckBox(centralwidget);
        address->setObjectName(QStringLiteral("address"));
        address->setGeometry(QRect(90, 300, 88, 22));
        address->setFont(font);
        phone = new QCheckBox(centralwidget);
        phone->setObjectName(QStringLiteral("phone"));
        phone->setGeometry(QRect(90, 330, 111, 22));
        phone->setFont(font);
        email = new QCheckBox(centralwidget);
        email->setObjectName(QStringLiteral("email"));
        email->setGeometry(QRect(90, 360, 88, 22));
        email->setFont(font);
        vk = new QCheckBox(centralwidget);
        vk->setObjectName(QStringLiteral("vk"));
        vk->setGeometry(QRect(90, 390, 131, 22));
        vk->setFont(font);
        buttonBox = new QDialogButtonBox(centralwidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(270, 270, 175, 34));
        buttonBox->setStandardButtons(QDialogButtonBox::No|QDialogButtonBox::Yes);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(180, 240, 381, 20));
        label_5->setFont(font);
        department = new QCheckBox(centralwidget);
        department->setObjectName(QStringLiteral("department"));
        department->setGeometry(QRect(510, 270, 131, 22));
        department->setFont(font);
        course = new QCheckBox(centralwidget);
        course->setObjectName(QStringLiteral("course"));
        course->setGeometry(QRect(510, 300, 88, 22));
        course->setFont(font);
        degree = new QCheckBox(centralwidget);
        degree->setObjectName(QStringLiteral("degree"));
        degree->setGeometry(QRect(510, 330, 111, 22));
        degree->setFont(font);
        group = new QCheckBox(centralwidget);
        group->setObjectName(QStringLiteral("group"));
        group->setGeometry(QRect(510, 360, 101, 22));
        group->setFont(font);
        date = new QCheckBox(centralwidget);
        date->setObjectName(QStringLiteral("date"));
        date->setGeometry(QRect(510, 390, 201, 22));
        date->setFont(font);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(570, 20, 120, 40));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 20, 120, 40));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(270, 320, 151, 41));
        Search_menu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Search_menu);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 30));
        Search_menu->setMenuBar(menubar);
        statusbar = new QStatusBar(Search_menu);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Search_menu->setStatusBar(statusbar);

        retranslateUi(Search_menu);

        QMetaObject::connectSlotsByName(Search_menu);
    } // setupUi

    void retranslateUi(QMainWindow *Search_menu)
    {
        Search_menu->setWindowTitle(QApplication::translate("Search_menu", "MainWindow", 0));
        label->setText(QApplication::translate("Search_menu", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\320\260\320\275\320\275\321\213\320\265 \320\276 \321\207\320\265\320\273\320\276\320\262\320\265\320\272\320\265, \320\260 \321\202\320\260\320\272 \320\266\320\265 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\216, \320\272\320\276\321\202\320\276\321\200\321\203\321\216 \321\205\320\276\321\202\320\270\321\202\320\265 \321\203\320\267\320\275\320\260\321\202\321\214.", 0));
        surname->setHtml(QApplication::translate("Search_menu", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:11pt;\">\320\230\320\262\320\260\320\275\320\270\320\275</span></p></body></html>", 0));
        name->setHtml(QApplication::translate("Search_menu", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:11pt;\">\320\230\320\262\320\260\320\275</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("Search_menu", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", 0));
        label_3->setText(QApplication::translate("Search_menu", "\320\230\320\274\321\217", 0));
        pathronymic->setHtml(QApplication::translate("Search_menu", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Ubuntu'; font-size:11pt;\">\320\230\320\262\320\260\320\275\320\276\320\262</span></p></body></html>", 0));
        label_4->setText(QApplication::translate("Search_menu", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", 0));
        age->setText(QApplication::translate("Search_menu", "\320\222\320\276\320\267\321\200\320\260\321\201\321\202", 0));
        address->setText(QApplication::translate("Search_menu", "\320\220\320\264\321\200\320\265\321\201", 0));
        phone->setText(QApplication::translate("Search_menu", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275", 0));
        email->setText(QApplication::translate("Search_menu", "Email", 0));
        vk->setText(QApplication::translate("Search_menu", "\320\222\320\272\320\276\320\275\321\202\320\260\320\272\321\202\320\265", 0));
        label_5->setText(QApplication::translate("Search_menu", "\320\222\321\213\320\261\320\276\321\200 \320\264\320\276\320\277\320\276\320\273\320\275\320\270\321\202\320\265\320\273\321\214\320\275\320\276\320\271 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\320\270?", 0));
        department->setText(QApplication::translate("Search_menu", "\320\244\320\260\320\272\321\203\320\273\321\214\321\202\320\265\321\202", 0));
        course->setText(QApplication::translate("Search_menu", "\320\232\321\203\321\200\321\201", 0));
        degree->setText(QApplication::translate("Search_menu", "\320\241\321\202\320\265\320\277\320\265\320\275\321\214", 0));
        group->setText(QApplication::translate("Search_menu", "\320\223\321\200\321\203\320\277\320\277\320\260", 0));
        date->setText(QApplication::translate("Search_menu", "\320\224\320\260\321\202\320\260 \320\277\320\276\321\201\321\202\321\203\320\277\320\273\320\265\320\275\320\270\321\217", 0));
        pushButton_2->setText(QApplication::translate("Search_menu", "\320\227\320\260\320\262\320\265\321\200\321\210\320\270\321\202\321\214 \321\201\320\265\320\260\320\275\321\201", 0));
        pushButton_3->setText(QApplication::translate("Search_menu", "\320\223\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", 0));
        pushButton->setText(QApplication::translate("Search_menu", "\320\235\320\260\320\271\321\202\320\270", 0));
    } // retranslateUi

};

namespace Ui {
    class Search_menu: public Ui_Search_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_MENU_H
