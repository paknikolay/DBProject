#include "schedule_menu_.h"
#include "ui_schedule_menu_.h"
#include "schedule_shower.h"
#include "main_menu.h"
#include <string>
using std:: string;
Schedule_menu_::Schedule_menu_(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Schedule_menu_)
{
    ui->setupUi(this);
    ui->first->hide();
    ui->second->hide();
    ui->third->hide();
    ui->fourth->hide();
    ui->fifth->hide();
    ui->sixth->hide();
    ui->monday->hide();
    ui->tuesday->hide();
    ui->wednesday->hide();
    ui->thursday->hide();
    ui->friday->hide();

}

Schedule_menu_::~Schedule_menu_()
{
    delete ui;
}

void Schedule_menu_::on_pushButton_3_clicked()
{
    string query= "SELECT DISTINCT day, time, lecture_hall_no, building, name AS teacher, student.group_no, subject AS subject_name, subject_type ";
    query+= "FROM schedule NATURAL JOIN subject INNER JOIN person ON (person.person_id = schedule.teacher_id) INNER JOIN  student ON (schedule.group_no = student.group_no) ";
    query+=" WHERE course = ";
    query+= ui->first->isChecked() ? "1" : ui->second->isChecked() ? "2" : ui->third->isChecked() ?
    "3" : ui->fourth->isChecked() ? "4" : ui->fifth->isChecked() ? "5" :"6";
    query+=" AND ( ";
    int n[6];
    for(int i = 0;i< 6;++i)
        n[i]=0;
    int j = 0;
    for(int i = 0;i< 6;++i){
        switch(i){
        case 0: if(ui->monday->isChecked()){
                n[i] =1;
                j = i;
            }
            break;
        case 1: if(ui->tuesday->isChecked()){
                n[i] =1;
                j = i;
            }
            break;
        case 2: if(ui->wednesday->isChecked()){
                n[i] =1;
                j = i;
            }
            break;
        case 3: if(ui->thursday->isChecked()){
                n[i] =1;
                j = i;
            }
            break;
        case 4: if(ui->friday->isChecked()){
                n[i] =1;
                j = i;
            }
            break;
        case 5: if(ui->saturday->isChecked()){
                n[i] =1;
                j = i;
            }
            break;
        }
    }

        switch(j){
        case 0: query+= " day = 'monday'";
            break;
        case 1: query+= " day = 'tuesday'";
            break;
        case 2:query+= " day = 'wednesday'";
            break;
        case 3:query+= " day = 'thursday'";
            break;
        case 4:query+= " day = 'friday'";
            break;
        case 5: query+= " day = 'saturday'";
            break;
        }

       for(int i = j+1; i < 6; ++i){
           switch(i){
           case 1: if(ui->tuesday->isChecked()){
                   query+= " OR day = 'tuesday'";
               }
               break;
           case 2: if(ui->wednesday->isChecked()){
                   query+= " OR day = 'wednesday'";
               }
               break;
           case 3: if(ui->thursday->isChecked()){
                  query+= " OR day = 'thursday'";
               }
               break;
           case 4: if(ui->friday->isChecked()){
                  query+= " OR day = 'friday'";
               }
               break;
           case 5: if(ui->saturday->isChecked()){
                 query+= " OR day = 'saturday'";
               }
               break;
          }
       }

query+=") ORDER BY day, time";
Schedule_shower *shower = new Schedule_shower(this, query);
shower->show();


}


void Schedule_menu_::on_bachelor_clicked()
{
    ui->first->show();
    ui->second->show();
    ui->third->show();
    ui->fourth->show();
    ui->bachelor->hide();
    ui->master->hide();
}

void Schedule_menu_::on_first_clicked()
{

}

void Schedule_menu_::on_third_clicked()
{

}

void Schedule_menu_::on_master_clicked()
{
    ui->fifth->show();
    ui->sixth->show();
    ui->bachelor->hide();
    ui->master->hide();


}

void Schedule_menu_::on_buttonBox_accepted()
{   if(ui->buttonBox->Yes || ui->buttonBox->No)
    {
        ui->label_2->hide();
        ui->buttonBox->hide();
}
    if(ui->buttonBox->Yes)
    {
    ui->monday->show();
    ui->tuesday->show();
    ui->wednesday->show();
    ui->thursday->show();
    ui->friday->show();
    }
}

void Schedule_menu_::on_pushButton_5_clicked()
{
    Main_menu * menu= new Main_menu(this);
    menu->show();
    this->hide();
}

void Schedule_menu_::on_pushButton_4_clicked()
{
    close();
}
