/********************************************************************************
** Form generated from reading UI file 'schedule_menu_.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCHEDULE_MENU__H
#define UI_SCHEDULE_MENU__H

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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Schedule_menu_
{
public:
    QWidget *centralwidget;
    QCheckBox *wednesday;
    QPushButton *pushButton_5;
    QTextBrowser *group;
    QLabel *label_2;
    QPushButton *pushButton_4;
    QRadioButton *first;
    QRadioButton *fourth;
    QCheckBox *friday;
    QLabel *label_3;
    QPushButton *master;
    QCheckBox *thursday;
    QCheckBox *monday;
    QRadioButton *third;
    QLabel *label;
    QCheckBox *tuesday;
    QDialogButtonBox *buttonBox;
    QCheckBox *saturday;
    QPushButton *bachelor;
    QPushButton *pushButton_3;
    QRadioButton *second;
    QRadioButton *sixth;
    QRadioButton *fifth;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Schedule_menu_)
    {
        if (Schedule_menu_->objectName().isEmpty())
            Schedule_menu_->setObjectName(QStringLiteral("Schedule_menu_"));
        Schedule_menu_->resize(800, 600);
        centralwidget = new QWidget(Schedule_menu_);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        wednesday = new QCheckBox(centralwidget);
        wednesday->setObjectName(QStringLiteral("wednesday"));
        wednesday->setGeometry(QRect(300, 310, 88, 22));
        QFont font;
        font.setPointSize(13);
        wednesday->setFont(font);
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(650, 0, 120, 40));
        group = new QTextBrowser(centralwidget);
        group->setObjectName(QStringLiteral("group"));
        group->setGeometry(QRect(290, 360, 151, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(270, 190, 271, 21));
        QFont font1;
        font1.setPointSize(15);
        label_2->setFont(font1);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 0, 120, 40));
        first = new QRadioButton(centralwidget);
        first->setObjectName(QStringLiteral("first"));
        first->setGeometry(QRect(120, 140, 105, 22));
        first->setFont(font1);
        fourth = new QRadioButton(centralwidget);
        fourth->setObjectName(QStringLiteral("fourth"));
        fourth->setGeometry(QRect(120, 230, 105, 22));
        fourth->setFont(font1);
        friday = new QCheckBox(centralwidget);
        friday->setObjectName(QStringLiteral("friday"));
        friday->setGeometry(QRect(520, 310, 111, 21));
        friday->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 360, 251, 31));
        label_3->setFont(font1);
        master = new QPushButton(centralwidget);
        master->setObjectName(QStringLiteral("master"));
        master->setGeometry(QRect(540, 70, 150, 50));
        master->setFont(font1);
        thursday = new QCheckBox(centralwidget);
        thursday->setObjectName(QStringLiteral("thursday"));
        thursday->setGeometry(QRect(400, 310, 101, 21));
        thursday->setFont(font);
        monday = new QCheckBox(centralwidget);
        monday->setObjectName(QStringLiteral("monday"));
        monday->setGeometry(QRect(20, 310, 161, 21));
        monday->setFont(font);
        third = new QRadioButton(centralwidget);
        third->setObjectName(QStringLiteral("third"));
        third->setGeometry(QRect(120, 201, 105, 21));
        third->setFont(font1);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(270, 10, 291, 21));
        label->setFont(font1);
        tuesday = new QCheckBox(centralwidget);
        tuesday->setObjectName(QStringLiteral("tuesday"));
        tuesday->setGeometry(QRect(180, 310, 101, 21));
        tuesday->setFont(font);
        buttonBox = new QDialogButtonBox(centralwidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(310, 240, 175, 34));
        buttonBox->setStandardButtons(QDialogButtonBox::No|QDialogButtonBox::Yes);
        saturday = new QCheckBox(centralwidget);
        saturday->setObjectName(QStringLiteral("saturday"));
        saturday->setGeometry(QRect(650, 310, 101, 21));
        saturday->setFont(font);
        bachelor = new QPushButton(centralwidget);
        bachelor->setObjectName(QStringLiteral("bachelor"));
        bachelor->setGeometry(QRect(97, 70, 150, 50));
        bachelor->setFont(font1);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(590, 363, 111, 41));
        pushButton_3->setFont(font1);
        second = new QRadioButton(centralwidget);
        second->setObjectName(QStringLiteral("second"));
        second->setGeometry(QRect(120, 170, 105, 22));
        second->setFont(font1);
        sixth = new QRadioButton(centralwidget);
        sixth->setObjectName(QStringLiteral("sixth"));
        sixth->setGeometry(QRect(560, 170, 105, 22));
        sixth->setFont(font1);
        fifth = new QRadioButton(centralwidget);
        fifth->setObjectName(QStringLiteral("fifth"));
        fifth->setGeometry(QRect(560, 140, 105, 22));
        fifth->setFont(font1);
        Schedule_menu_->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Schedule_menu_);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        Schedule_menu_->setMenuBar(menubar);
        statusbar = new QStatusBar(Schedule_menu_);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Schedule_menu_->setStatusBar(statusbar);

        retranslateUi(Schedule_menu_);

        QMetaObject::connectSlotsByName(Schedule_menu_);
    } // setupUi

    void retranslateUi(QMainWindow *Schedule_menu_)
    {
        Schedule_menu_->setWindowTitle(QApplication::translate("Schedule_menu_", "MainWindow", 0));
        wednesday->setText(QApplication::translate("Schedule_menu_", "\320\241\321\200\320\265\320\264\320\260", 0));
        pushButton_5->setText(QApplication::translate("Schedule_menu_", "\320\222 \320\263\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", 0));
        label_2->setText(QApplication::translate("Schedule_menu_", "\320\241\320\264\320\265\320\273\320\260\321\202\321\214 \320\262\321\213\320\261\320\276\321\200\320\272\321\203 \320\277\320\276 \320\264\320\275\321\217\320\274?", 0));
        pushButton_4->setText(QApplication::translate("Schedule_menu_", "\320\227\320\260\320\262\320\265\321\200\321\210\320\270\321\202\321\214 \321\201\320\265\320\260\320\275\321\201", 0));
        first->setText(QApplication::translate("Schedule_menu_", "&1 \320\272\321\203\321\200\321\201", 0));
        fourth->setText(QApplication::translate("Schedule_menu_", "&4 \320\272\321\203\321\200\321\201", 0));
        friday->setText(QApplication::translate("Schedule_menu_", "\320\237\321\217\321\202\320\275\320\270\321\206\320\260", 0));
        label_3->setText(QApplication::translate("Schedule_menu_", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\276\320\274\320\265\321\200 \320\263\321\200\321\203\320\277\320\277\321\213: ", 0));
        master->setText(QApplication::translate("Schedule_menu_", "\320\234\320\260\320\263\320\270\321\201\321\202\321\200\320\260\321\202\321\203\321\200\320\260", 0));
        thursday->setText(QApplication::translate("Schedule_menu_", "\320\247\320\265\321\202\320\262\320\265\321\200\320\263", 0));
        monday->setText(QApplication::translate("Schedule_menu_", "\320\237\320\276\320\275\320\265\320\264\320\265\320\273\321\214\320\275\320\270\320\272", 0));
        third->setText(QApplication::translate("Schedule_menu_", "&3 \320\272\321\203\321\200\321\201", 0));
        label->setText(QApplication::translate("Schedule_menu_", "\320\222\321\213\320\261\320\265\321\200\320\265\321\202\320\265 \320\277\321\203\320\275\320\272\321\202\321\213 \320\264\320\273\321\217 \320\277\320\276\320\270\321\201\320\272\320\260", 0));
        tuesday->setText(QApplication::translate("Schedule_menu_", "\320\222\321\202\320\276\321\200\320\275\320\270\320\272", 0));
        saturday->setText(QApplication::translate("Schedule_menu_", "\320\241\321\203\320\261\320\261\320\276\321\202\320\260", 0));
        bachelor->setText(QApplication::translate("Schedule_menu_", "\320\221\320\260\320\272\320\260\320\273\320\260\320\262\321\200\320\270\320\260\321\202", 0));
        pushButton_3->setText(QApplication::translate("Schedule_menu_", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", 0));
        second->setText(QApplication::translate("Schedule_menu_", "&2 \320\272\321\203\321\200\321\201", 0));
        sixth->setText(QApplication::translate("Schedule_menu_", "&6 \320\272\321\203\321\200\321\201", 0));
        fifth->setText(QApplication::translate("Schedule_menu_", "&5 \320\272\321\203\321\200\321\201", 0));
    } // retranslateUi

};

namespace Ui {
    class Schedule_menu_: public Ui_Schedule_menu_ {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCHEDULE_MENU__H
