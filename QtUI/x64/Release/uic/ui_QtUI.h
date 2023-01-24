/********************************************************************************
** Form generated from reading UI file 'QtUI.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTUI_H
#define UI_QTUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtUIClass
{
public:

    void setupUi(QWidget *QtUIClass)
    {
        if (QtUIClass->objectName().isEmpty())
            QtUIClass->setObjectName(QString::fromUtf8("QtUIClass"));
        QtUIClass->resize(600, 400);

        retranslateUi(QtUIClass);

        QMetaObject::connectSlotsByName(QtUIClass);
    } // setupUi

    void retranslateUi(QWidget *QtUIClass)
    {
        QtUIClass->setWindowTitle(QCoreApplication::translate("QtUIClass", "QtUI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtUIClass: public Ui_QtUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTUI_H
