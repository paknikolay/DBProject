#include "schedule_shower.h"
#include "ui_schedule_shower.h"
#include <pqxx/pqxx>

Schedule_shower::Schedule_shower(QWidget *parent, string query) :
    QMainWindow(parent),
    ui(new Ui::Schedule_shower)
{
    ui->setupUi(this);
    this-> query = query;
    ui->textBrowser->setText(QString::fromStdString(query));
    pqxx::connection c ("dbname=my_database user=user_1 password=password port=5432 host=localhost");
    pqxx::work txn(c);
    pqxx::result r = txn.exec(query);



        QTableWidget* table1 = ui->tableWidget;
        table1->setColumnCount(r.columns());
        table1->setRowCount(r.size());
        for(int i = 0;i< r.columns();++i){
                table1->setHorizontalHeaderItem(i, new QTableWidgetItem);
                table1->horizontalHeaderItem(i)->setText(QString::fromStdString(r.column_name(i)));
        }

        for(pqxx::result::iterator i = r.begin(); i<r.end(); ++i){

             for(int j = 0; j < i.size(); ++j){
                 table1->setItem(i-r.begin(),j,new QTableWidgetItem());
                 table1->item(i-r.begin(), j)->setText(QString::fromStdString(i[j].c_str()));
             }

         }






}

Schedule_shower::~Schedule_shower()
{
    delete ui;
}
