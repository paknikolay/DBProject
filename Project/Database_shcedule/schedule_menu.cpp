#include "schedule_menu.h"
#include "ui_schedule_menu.h"

Schedule_menu::Schedule_menu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Schedule_menu)
{
    ui->setupUi(this);
}

Schedule_menu::~Schedule_menu()
{
    delete ui;
}
