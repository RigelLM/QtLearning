/********************************************************************************
** Form generated from reading UI file 'MainWidgets.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGETS_H
#define UI_MAINWIDGETS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWidgetsClass
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWidgetsClass)
    {
        if (MainWidgetsClass->objectName().isEmpty())
            MainWidgetsClass->setObjectName(QString::fromUtf8("MainWidgetsClass"));
        MainWidgetsClass->resize(400, 500);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWidgetsClass->sizePolicy().hasHeightForWidth());
        MainWidgetsClass->setSizePolicy(sizePolicy);
        MainWidgetsClass->setMinimumSize(QSize(0, 0));
        centralWidget = new QWidget(MainWidgetsClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainWidgetsClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWidgetsClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        MainWidgetsClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWidgetsClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWidgetsClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWidgetsClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWidgetsClass->setStatusBar(statusBar);

        retranslateUi(MainWidgetsClass);

        QMetaObject::connectSlotsByName(MainWidgetsClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWidgetsClass)
    {
        MainWidgetsClass->setWindowTitle(QCoreApplication::translate("MainWidgetsClass", "Plator", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWidgetsClass: public Ui_MainWidgetsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGETS_H
