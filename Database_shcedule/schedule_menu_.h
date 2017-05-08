#ifndef SCHEDULE_MENU__H
#define SCHEDULE_MENU__H

#include <QMainWindow>

namespace Ui {
class Schedule_menu_;
}

class Schedule_menu_ : public QMainWindow
{
    Q_OBJECT

public:
    explicit Schedule_menu_(QWidget *parent = 0);
    ~Schedule_menu_();

private slots:
    void on_pushButton_3_clicked();

private:
    Ui::Schedule_menu_ *ui;
};

#endif // SCHEDULE_MENU__H
