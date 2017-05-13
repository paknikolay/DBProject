/********************************************************************************
** Form generated from reading UI file 'student_time.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_TIME_H
#define UI_STUDENT_TIME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_student_time
{
public:
    QWidget *centralwidget;
    QTextBrowser *idSubject;
    QTextBrowser *idTeacher;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QRadioButton *wednesday;
    QRadioButton *friday;
    QRadioButton *monday;
    QRadioButton *saturday;
    QRadioButton *tuesdsy;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label_3;
    QRadioButton *thursday;
    QTextBrowser *subjectType;
    QLabel *label_4;
    QLabel *label_6;
    QTextBrowser *group;
    QLabel *label_7;
    QLabel *label_8;
    QTextBrowser *building;
    QLabel *label_9;
    QTextBrowser *class_no;
    QTextBrowser *time;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *student_time)
    {
        if (student_time->objectName().isEmpty())
            student_time->setObjectName(QStringLiteral("student_time"));
        student_time->resize(800, 600);
        centralwidget = new QWidget(student_time);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        idSubject = new QTextBrowser(centralwidget);
        idSubject->setObjectName(QStringLiteral("idSubject"));
        idSubject->setGeometry(QRect(10, 190, 250, 40));
        idSubject->setReadOnly(false);
        idTeacher = new QTextBrowser(centralwidget);
        idTeacher->setObjectName(QStringLiteral("idTeacher"));
        idTeacher->setGeometry(QRect(270, 150, 250, 40));
        idTeacher->setReadOnly(false);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 80, 731, 21));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(340, 490, 101, 31));
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 10, 120, 40));
        QFont font1;
        font1.setPointSize(10);
        pushButton_2->setFont(font1);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(660, 10, 120, 40));
        pushButton_3->setFont(font1);
        wednesday = new QRadioButton(centralwidget);
        wednesday->setObjectName(QStringLiteral("wednesday"));
        wednesday->setGeometry(QRect(560, 360, 101, 22));
        wednesday->setFont(font);
        friday = new QRadioButton(centralwidget);
        friday->setObjectName(QStringLiteral("friday"));
        friday->setGeometry(QRect(320, 390, 131, 22));
        friday->setFont(font);
        monday = new QRadioButton(centralwidget);
        monday->setObjectName(QStringLiteral("monday"));
        monday->setEnabled(true);
        monday->setGeometry(QRect(40, 360, 171, 22));
        monday->setFont(font);
        monday->setChecked(true);
        saturday = new QRadioButton(centralwidget);
        saturday->setObjectName(QStringLiteral("saturday"));
        saturday->setGeometry(QRect(560, 390, 105, 22));
        saturday->setFont(font);
        tuesdsy = new QRadioButton(centralwidget);
        tuesdsy->setObjectName(QStringLiteral("tuesdsy"));
        tuesdsy->setGeometry(QRect(320, 360, 105, 22));
        tuesdsy->setFont(font);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(310, 120, 221, 21));
        label_5->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 150, 201, 21));
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(320, 290, 131, 31));
        label_3->setFont(font);
        thursday = new QRadioButton(centralwidget);
        thursday->setObjectName(QStringLiteral("thursday"));
        thursday->setGeometry(QRect(40, 390, 111, 21));
        thursday->setFont(font);
        subjectType = new QTextBrowser(centralwidget);
        subjectType->setObjectName(QStringLiteral("subjectType"));
        subjectType->setGeometry(QRect(540, 190, 250, 40));
        subjectType->setReadOnly(false);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(610, 160, 141, 21));
        label_4->setFont(font);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(320, 330, 59, 18));
        label_6->setFont(font);
        group = new QTextBrowser(centralwidget);
        group->setObjectName(QStringLiteral("group"));
        group->setGeometry(QRect(340, 240, 100, 40));
        group->setReadOnly(false);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(320, 200, 151, 16));
        label_7->setFont(font);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 450, 201, 16));
        label_8->setFont(font);
        building = new QTextBrowser(centralwidget);
        building->setObjectName(QStringLiteral("building"));
        building->setGeometry(QRect(260, 440, 250, 40));
        building->setReadOnly(false);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(540, 450, 121, 21));
        label_9->setFont(font);
        class_no = new QTextBrowser(centralwidget);
        class_no->setObjectName(QStringLiteral("class_no"));
        class_no->setGeometry(QRect(680, 440, 100, 40));
        class_no->setReadOnly(false);
        time = new QTextBrowser(centralwidget);
        time->setObjectName(QStringLiteral("time"));
        time->setGeometry(QRect(460, 290, 191, 41));
        time->setReadOnly(false);
        student_time->setCentralWidget(centralwidget);
        menubar = new QMenuBar(student_time);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        student_time->setMenuBar(menubar);
        statusbar = new QStatusBar(student_time);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        student_time->setStatusBar(statusbar);

        retranslateUi(student_time);

        QMetaObject::connectSlotsByName(student_time);
    } // setupUi

    void retranslateUi(QMainWindow *student_time)
    {
        student_time->setWindowTitle(QApplication::translate("student_time", "MainWindow", 0));
        idSubject->setHtml(QApplication::translate("student_time", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1</p></body></html>", 0));
        idTeacher->setHtml(QApplication::translate("student_time", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1</p></body></html>", 0));
        label->setText(QApplication::translate("student_time", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\273-\320\262\320\276 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\276\320\262, \320\260 \321\202\320\260\320\272 \320\266\320\265 \320\267\320\260\320\277\320\276\320\273\320\275\320\270\321\202\320\265 \321\201\320\276\320\276\321\202\320\262\320\265\321\202\321\201\321\202\320\262\321\203\321\216\321\211\320\270\320\265 \320\277\320\276\320\273\321\217", 0));
        pushButton->setText(QApplication::translate("student_time", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0));
        pushButton_2->setText(QApplication::translate("student_time", "\320\223\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", 0));
        pushButton_3->setText(QApplication::translate("student_time", "\320\227\320\260\320\262\320\265\321\200\321\210\320\270\321\202\321\214 \321\201\320\265\320\260\320\275\321\201", 0));
        wednesday->setText(QApplication::translate("student_time", "\320\241\321\200\320\265\320\264\320\260", 0));
        friday->setText(QApplication::translate("student_time", "\320\237\321\217\321\202\320\275\320\270\321\206\320\260", 0));
        monday->setText(QApplication::translate("student_time", "\320\237\320\276\320\275\320\265\320\264\320\265\320\273\321\214\320\275\320\270\320\272", 0));
        saturday->setText(QApplication::translate("student_time", "\320\241\321\203\320\261\320\261\320\276\321\202\320\260", 0));
        tuesdsy->setText(QApplication::translate("student_time", "\320\222\321\202\320\276\321\200\320\275\320\270\320\272", 0));
        label_5->setText(QApplication::translate("student_time", "ID \320\237\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\217", 0));
        label_2->setText(QApplication::translate("student_time", "ID \320\237\321\200\320\265\320\264\320\274\320\265\321\202\320\260", 0));
        label_3->setText(QApplication::translate("student_time", "\320\235\320\276\320\274\320\265\321\200 \320\277\320\260\321\200\321\213:", 0));
        thursday->setText(QApplication::translate("student_time", "\320\247\320\265\321\202\320\262\320\265\321\200\320\263", 0));
        subjectType->setHtml(QApplication::translate("student_time", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">seminar</p></body></html>", 0));
        label_4->setText(QApplication::translate("student_time", "\320\242\320\270\320\277 \320\277\321\200\320\265\320\264\320\274\320\265\321\202\320\260", 0));
        label_6->setText(QApplication::translate("student_time", "\320\224\320\265\320\275\321\214:", 0));
        group->setHtml(QApplication::translate("student_time", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">596</p></body></html>", 0));
        label_7->setText(QApplication::translate("student_time", "\320\235\320\276\320\274\320\265\321\200 \320\263\321\200\321\203\320\277\320\277\321\213:", 0));
        label_8->setText(QApplication::translate("student_time", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\272\320\276\321\200\320\277\321\203\321\201\320\260:", 0));
        building->setHtml(QApplication::translate("student_time", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">GK</p></body></html>", 0));
        label_9->setText(QApplication::translate("student_time", "\320\220\321\203\320\264\320\270\321\202\320\276\321\200\320\270\321\217:", 0));
        class_no->setHtml(QApplication::translate("student_time", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">413</p></body></html>", 0));
        time->setHtml(QApplication::translate("student_time", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">5</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class student_time: public Ui_student_time {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_TIME_H
