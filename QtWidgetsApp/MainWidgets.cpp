#include "MainWidgets.h"
#include "qpushbutton.h"

MainWidgets::MainWidgets(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    setWindowIcon(QIcon(":/Plator.ico"));

    movie = new CWidgetAE(QString("C:/Users/Serein/Desktop/FlightMode"), this);
    movie->show();
}
