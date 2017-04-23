/*#ifndef DATA_MENU_H
#define DATA_MENU_H

#include <QMainWindow>

namespace Ui {
class Data_menu;
}

class Data_menu : public QMainWindow
{
    Q_OBJECT

public:
    explicit Data_menu(QWidget *parent = 0);
    ~Data_menu();

private:
    Ui::Data_menu *ui;
};

#endif // DATA_MENU_H
