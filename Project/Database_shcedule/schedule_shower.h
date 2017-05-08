#ifndef SCHEDULE_SHOWER_H
#define SCHEDULE_SHOWER_H

#include <QMainWindow>
//#include "data_menu.h"
#include <string>
using std::string;
namespace Ui {
class Schedule_shower;
}

class Schedule_shower : public QMainWindow
{
    Q_OBJECT

public:
    explicit Schedule_shower(QWidget *parent = 0, string query ="");
    ~Schedule_shower();
    string query;

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::Schedule_shower *ui;
};

#endif // SCHEDULE_SHOWER_H
