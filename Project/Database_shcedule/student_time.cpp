#include "student_time.h"
#include "ui_student_time.h"

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
