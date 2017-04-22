#ifndef MAIN_MENU_H
#define MAIN_MENU_H

#include <QMainWindow>
#include "user.h"
#include "data_shower.h"
#include "persional_data.h"
#include "schedule_menu.h"
#include "search_menu.h"
namespace Ui {
class Main_menu;
}

class Main_menu : public QMainWindow
{
    Q_OBJECT

public:

    explicit Main_menu(QWidget *parent = 0);
    User user;
    ~Main_menu();

private:
    Ui::Main_menu *ui;
};

#endif // MAIN_MENU_H
