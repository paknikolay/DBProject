#ifndef SCHEDULE_SHOWER_H
#define SCHEDULE_SHOWER_H

#include <QMainWindow>
//#include "data_menu.h"
namespace Ui {
class Schedule_shower;
}

class Schedule_shower : public QMainWindow
{
    Q_OBJECT

public:
    explicit Schedule_shower(QWidget *parent = 0);
    ~Schedule_shower();

private:
    Ui::Schedule_shower *ui;
};

#endif // SCHEDULE_SHOWER_H
