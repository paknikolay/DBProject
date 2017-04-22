#include "search_menu.h"
#include "ui_search_menu.h"

Search_menu::Search_menu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Search_menu)
{
    ui->setupUi(this);
}

Search_menu::~Search_menu()
{
    delete ui;
}
