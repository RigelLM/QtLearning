#pragma once

#include <QtWidgets/QWidget>
#include <QLabel>
#include <QSize>
#include <QMovie>
#include <QMouseEvent>
#include "CWidgetAE.h"

class FlightModeUI : public QWidget
{
    Q_OBJECT

public:
    FlightModeUI(QWidget* parent = Q_NULLPTR);
protected:
    //截取鼠标事件绘制窗口位置. 因为标题栏隐藏后.窗口是无法拖动的。
    void mouseReleaseEvent(QMouseEvent* event);
    void mouseMoveEvent(QMouseEvent* event);
    void mousePressEvent(QMouseEvent* event);
private:
    bool isPressedWidget;
    QPoint m_lastPos;
    CWidgetAE* movie;
};

