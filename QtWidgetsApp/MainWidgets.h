#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MainWidgets.h"
#include "CWidgetAE.h"

class QPushButton;
class QWidget;

class MainWidgets : public QMainWindow
{
    Q_OBJECT

public:
    MainWidgets(QWidget *parent = Q_NULLPTR);

private:
    Ui::MainWidgetsClass ui;

    CWidgetAE* movie;
};
