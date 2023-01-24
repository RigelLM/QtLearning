#pragma once

#include <QtWidgets/QWidget>
#include <QLabel>
#include <QSize>
#include <QMovie>
#include <QMouseEvent>
#include "CWidgetAE.h"
class DialogUI : public QWidget
{
    Q_OBJECT

public:
    DialogUI(QWidget *parent = Q_NULLPTR);
protected:
    //��ȡ����¼����ƴ���λ��. ��Ϊ���������غ�.�������޷��϶��ġ�
    void mouseReleaseEvent(QMouseEvent* event);
    void mouseMoveEvent(QMouseEvent* event);
    void mousePressEvent(QMouseEvent* event);
private:
    //QLabel* label_ui;
    //QLabel* label_dialog;
    //QLabel* label_bar;
    //QLabel* label_indicator;
    bool isPressedWidget;
    QPoint m_lastPos;
    CWidgetAE* movie;
//private slots:
//    void updatelabel();
};
