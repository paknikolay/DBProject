#include "schedule_menu_.h"
#include "ui_schedule_menu_.h"

Schedule_menu_::Schedule_menu_(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Schedule_menu_)
{
    ui->setupUi(this);
}

Schedule_menu_::~Schedule_menu_()
{
    delete ui;
}
