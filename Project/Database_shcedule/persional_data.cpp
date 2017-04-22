#include "persional_data.h"
#include "ui_persional_data.h"

Persional_data::Persional_data(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Persional_data)
{
    ui->setupUi(this);
}

Persional_data::~Persional_data()
{
    delete ui;
}
