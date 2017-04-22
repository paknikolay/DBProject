#ifndef SCHEDULE_MENU_H
#define SCHEDULE_MENU_H

#include <QMainWindow>
#include "data_shower.h"
namespace Ui {
class Schedule_menu;
}

class Schedule_menu : public QMainWindow
{
    Q_OBJECT

public:
    explicit Schedule_menu(QWidget *parent = 0);
    ~Schedule_menu();

private:
    Ui::Schedule_menu *ui;
};

#endif // SCHEDULE_MENU_H
