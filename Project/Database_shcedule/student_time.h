#ifndef STUDENT_TIME_H
#define STUDENT_TIME_H

#include <QMainWindow>

namespace Ui {
class student_time;
}

class student_time : public QMainWindow
{
    Q_OBJECT

public:
    explicit student_time(QWidget *parent = 0);
    ~student_time();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::student_time *ui;
};

#endif // STUDENT_TIME_H
