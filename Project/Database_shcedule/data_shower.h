#ifndef DATA_SHOWER_H
#define DATA_SHOWER_H

#include <QMainWindow>

namespace Ui {
class data_shower;
}

class data_shower : public QMainWindow
{
    Q_OBJECT

public:
    explicit data_shower(QWidget *parent = 0);
    ~data_shower();

private:
    Ui::data_shower *ui;
};

#endif // DATA_SHOWER_H
