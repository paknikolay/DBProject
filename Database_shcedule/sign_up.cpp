#include "sign_up.h"
#include "ui_sign_up.h"
#include"main_menu.h"
#include <fstream>
Sign_up::Sign_up(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Sign_up)
{
    ui->setupUi(this);

}

Sign_up::~Sign_up()
{
    delete ui;
}

void Sign_up::on_pushButton_clicked()
{
    user = User();
    user.name = ui->name->toPlainText();
    user.surname = ui->surname->toPlainText();
    user.patronymic = ui->patronymic->toPlainText();
    user.person_id = ui->id->toPlainText();

   Main_menu* m = new Main_menu(this, user);
   m->show();
   this->hide();
}

void Sign_up::on_pushButton_2_clicked()
{
    close();
}
