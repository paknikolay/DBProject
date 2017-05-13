/********************************************************************************
** Form generated from reading UI file 'main_menu.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Main_menu
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Main_menu)
    {
        if (Main_menu->objectName().isEmpty())
            Main_menu->setObjectName(QStringLiteral("Main_menu"));
        Main_menu->resize(800, 600);
        centralWidget = new QWidget(Main_menu);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 110, 250, 150));
        QFont font;
        font.setPointSize(15);
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(410, 110, 250, 150));
        pushButton_2->setFont(font);
        pushButton_2->setFocusPolicy(Qt::StrongFocus);
        pushButton_2->setContextMenuPolicy(Qt::DefaultContextMenu);
        pushButton_2->setLayoutDirection(Qt::LeftToRight);
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(60, 310, 250, 150));
        pushButton_3->setFont(font);
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setEnabled(false);
        pushButton_4->setGeometry(QRect(410, 310, 250, 150));
        pushButton_4->setFont(font);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 40, 271, 20));
        label->setFont(font);
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(110, 490, 150, 30));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(460, 490, 150, 30));
        Main_menu->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Main_menu);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 25));
        Main_menu->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Main_menu);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Main_menu->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Main_menu);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Main_menu->setStatusBar(statusBar);

        retranslateUi(Main_menu);

        QMetaObject::connectSlotsByName(Main_menu);
    } // setupUi

    void retranslateUi(QMainWindow *Main_menu)
    {
        Main_menu->setWindowTitle(QApplication::translate("Main_menu", "Main_menu", 0));
        pushButton->setText(QApplication::translate("Main_menu", "\320\240\320\260\321\201\320\277\320\270\321\201\320\260\320\275\320\270\320\265 \320\234\320\244\320\242\320\230", 0));
        pushButton_2->setText(QApplication::translate("Main_menu", "\320\240\320\260\321\201\321\201\320\277\320\270\321\201\320\260\320\275\320\270\320\265 \320\275\320\260 \320\267\320\260\320\262\321\202\321\200\320\260", 0));
        pushButton_3->setText(QApplication::translate("Main_menu", "\320\237\320\276\320\270\321\201\320\272 \320\276 \321\207\320\265\320\273\320\276\320\262\320\265\320\272\320\265", 0));
        pushButton_4->setText(QApplication::translate("Main_menu", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\277\320\260\321\200\321\213", 0));
        label->setText(QApplication::translate("Main_menu", "\320\222\321\213\320\261\320\270\321\200\320\260\320\271\321\202\320\265 \320\275\321\203\320\266\320\275\320\276\320\265 \320\264\320\273\321\217 \320\262\320\260\321\201", 0));
        pushButton_5->setText(QApplication::translate("Main_menu", "\320\241\320\274\320\265\320\275\320\260 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", 0));
        pushButton_6->setText(QApplication::translate("Main_menu", "\320\227\320\260\320\262\320\265\321\200\321\210\320\270\321\202\321\214 \321\201\320\265\320\260\320\275\321\201", 0));
    } // retranslateUi

};

namespace Ui {
    class Main_menu: public Ui_Main_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_MENU_H
