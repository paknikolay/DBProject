#include "sign_up.h"
//#include "data_menu.h"
#include "main_menu.h"
#include "persional_data.h"
#include "search_menu.h"
#include "user.h"
#include "schedule_shower.h"
#include <QApplication>
#include "schedule_menu_.h"
#include "student_time.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Sign_up w;
    w.show();


 // Main_menu w2;
   // w2.show();

    //Persional_data w3;
    //w3.show();

   // Search_menu w4;
    //w4.show();

   // Schedule_shower w5;
   // w5.show();

    //Schedule_menu_ w6;
    //w6.show();

    //student_time w7;
    //w7.show();


    return a.exec();
}
