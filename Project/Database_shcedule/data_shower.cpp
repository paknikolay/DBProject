#include "data_shower.h"
#include "ui_data_shower.h"

data_shower::data_shower(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::data_shower)
{
    ui->setupUi(this);
}

data_shower::~data_shower()
{
    delete ui;
}
