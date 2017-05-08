#ifndef MAIN_MENU_H
#define MAIN_MENU_H

#include <QMainWindow>
#include "user.h"
//#include "data_menu.h"
#include "persional_data.h"
#include "schedule_shower.h"
#include "search_menu.h"
#include <string>
using std:: string;
namespace Ui {
class Main_menu;
}

class Main_menu : public QMainWindow
{
    Q_OBJECT

public:

    explicit Main_menu(QWidget *parent = 0, User user = User());
    User user;
    string query;
    ~Main_menu();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Main_menu *ui;
};

#endif // MAIN_MENU_H
