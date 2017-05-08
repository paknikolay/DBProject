#ifndef SIGN_UP_H
#define SIGN_UP_H

#include <QMainWindow>
#include "user.h"
namespace Ui {
class Sign_up;
}

class Sign_up : public QMainWindow
{
    Q_OBJECT

public:
    explicit Sign_up(QWidget *parent = 0);
    ~Sign_up();
    User user;
private slots:

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Sign_up *ui;
};

#endif // SIGN_UP_H
