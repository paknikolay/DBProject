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

void student_time::on_pushButton_clicked()
{
    string query= "INSERT INTO schedule (day, time, lecture_hall_no,building,teacher_id, group_no, subject_id, subject_type) VALUES(";
    query+= "'";
    query += ui->monday->isChecked() ? "monday" :ui->tuesdsy->isChecked() ? "tuesdsy" : ui->wednesday->isChecked() ? "wednesday" :ui->thursday->isChecked() ? "thursday" :ui->friday->isChecked() ? "friday" : "saturday";
    query+= "' ";

    query+= " '" + ui->time->toPlainText().toStdString() + " ' " ;
    query+= "' " + ui->class_no->toPlainText().toStdString() + " ' ";
    query+= "' " + ui->building->toPlainText().toStdString() + " ' ";
    query+= "' " + ui->idTeacher->toPlainText().toStdString() + " ' ";
    query+= "' " + ui->group->toPlainText().toStdString() + " ' ";
    query+= "' " + ui->idSubject->toPlainText().toStdString() + " ' ";
    query+= "' " + ui->subjectType->toPlainText().toStdString() + " ' ";


}
