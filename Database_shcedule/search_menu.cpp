#include "search_menu.h"
#include "ui_search_menu.h"
#include "schedule_shower.h"
#include "main_menu.h"
#include <string>
using std::string;
Search_menu::Search_menu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Search_menu)
{
    ui->setupUi(this);
    ui->course->hide();
    ui->group->hide();
    ui->department->hide();
    ui->date->hide();
    ui->degree->hide();
    ui->pushButton->hide();
}

Search_menu::~Search_menu()
{
    delete ui;
}

void Search_menu::on_pushButton_clicked()
{
    string query = "SELECT name, surname, patronymic ";
    query+= (ui->age->isChecked() ? ", age " : "" );
    query+=(ui->address->isChecked() ? ", address" : "");
    query+= (ui->phone->isChecked() ? ",phone" : "");
    query+=(ui->email->isChecked() ? ",email" : "");
    query+=(ui->department->isChecked() ? ",department_id" : "");
    query+=(ui->course->isChecked() ? ",course" : "");
    query+=(ui->degree->isChecked() ? ",degree" : "");
    query+=(ui->group->isChecked() ? ",group_no" : "");
    query+=(ui->date->isChecked() ? ",data_of_enrollment" : "");

    query+=
    " FROM person";
    if(ui->department->isChecked() || ui->course->isChecked() ||
            ui->degree->isChecked() ||ui->group->isChecked() ||
            ui->date->isChecked())
        query+=" LEFT OUTER JOIN student ON (person_id = student_id) ";
    query+= " WHERE name = '" + ui->name->toPlainText().toStdString() +
    "' AND surname = '" + ui->surname->toPlainText().toStdString() +
     "' AND patronymic = '" + ui->pathronymic->toPlainText().toStdString()+"'";
   // ui->label->setText(QString::fromStdString(query));
    Schedule_shower *shower = new Schedule_shower(this, query);
    shower->show();



                                   ;
}

void Search_menu::on_pushButton_3_clicked()
{
    Main_menu* menu = new Main_menu(this);
    menu->show();
    this->hide();
}

void Search_menu::on_buttonBox_accepted()
{
    ui->label_5->hide();
    ui->buttonBox->hide();
    ui->course->show();
    ui->group->show();
    ui->department->show();
    ui->date->show();
    ui->degree->show();
    ui->pushButton->show();
}

void Search_menu::on_pushButton_2_clicked()
{
    close();
}
