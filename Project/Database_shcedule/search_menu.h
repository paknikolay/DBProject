#ifndef SEARCH_MENU_H
#define SEARCH_MENU_H

#include <QMainWindow>
//#include "data_menu.h"
namespace Ui {
class Search_menu;
}

class Search_menu : public QMainWindow
{
    Q_OBJECT

public:
    explicit Search_menu(QWidget *parent = 0);
    ~Search_menu();

private:
    Ui::Search_menu *ui;
};

#endif // SEARCH_MENU_H
