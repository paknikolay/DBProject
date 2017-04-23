#include "schedule_shower.h"
#include "ui_schedule_shower.h"

Schedule_shower::Schedule_shower(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Schedule_shower)
{
    ui->setupUi(this);
}

Schedule_shower::~Schedule_shower()
{
    delete ui;
}
