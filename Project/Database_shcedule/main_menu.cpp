#include "main_menu.h"
#include "ui_main_menu.h"
#include "schedule_shower.h"
Main_menu::Main_menu(QWidget *parent, User user) :
    QMainWindow(parent),
    ui(new Ui::Main_menu)
{
    ui->setupUi(this);
    this->user = user;

}

Main_menu::~Main_menu()
{
    delete ui;
}

void Main_menu::on_pushButton_2_clicked()
{
   this->query = "SELECT * FROM schedule WHERE day = 'monday' AND schedule.group_no = (SELECT group_no FROM student WHERE student_id = "
            + user.person_id.toStdString()
            + ")";
   Schedule_shower* shower = new Schedule_shower(this, query);
   shower->show();
}
