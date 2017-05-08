#include "student_time.h"
#include "ui_student_time.h"
#include "main_menu.h"

student_time::student_time(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::student_time)
{
    ui->setupUi(this);
}

student_time::~student_time()
{
    delete ui;
}

void student_time::on_pushButton_2_clicked()
{
    Main_menu* menu = new Main_menu(this);
    menu->show();
    this->hide();
}

void student_time::on_pushButton_3_clicked()
{
    close();
}
