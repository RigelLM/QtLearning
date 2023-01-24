#include "MainWidgets.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWidgets w;
    w.show();
    return a.exec();
}
 