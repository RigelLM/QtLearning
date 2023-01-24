#include "DialogUI.h"
#include "SystemTray.h"
#include "FlightModeUI.h"
#include <QtWidgets/QApplication>
#include <QScreen>
#include "qscreen.h"

int main(int argc, char *argv[])
{
    //the main app
    QApplication a(argc, argv);
    //declare all the components
    DialogUI dialog_ui;
    FlightModeUI flightmode_ui;
    SystemTray systemtry;
    //hide the main window of the systemtry
    //it is attached to a dialog UI component
    systemtry.hide();
    //show the UI
    flightmode_ui.show();
    dialog_ui.show();
    //set the original place of the components
    dialog_ui.move(QPoint(1000,250));
    flightmode_ui.move(QPoint(200, 250));
    return a.exec();
}
