#ifndef PERSIONAL_DATA_H
#define PERSIONAL_DATA_H

#include <QMainWindow>
#include "user.h"
//#include "data_menu.h"

namespace Ui {
class Persional_data;
}

class Persional_data : public QMainWindow
{
    Q_OBJECT

public:
    explicit Persional_data(QWidget *parent = 0);
    User user;
    ~Persional_data();

private:
    Ui::Persional_data *ui;
};

#endif // PERSIONAL_DATA_H
