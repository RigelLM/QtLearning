#include "FlightModeUI.h"

FlightModeUI::FlightModeUI(QWidget* parent)
    : QWidget(parent)
{
    this->setAttribute(Qt::WA_TranslucentBackground, true);
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::Tool); //窗口的标题栏任务栏隐藏

    movie = new CWidgetAE(QString("./Pic/Mov/FlightMode"), this);
    movie->show();
}

void FlightModeUI::mousePressEvent(QMouseEvent* event)
{
    m_lastPos = event->globalPos();
    isPressedWidget = true; // 当前鼠标按下的即是QWidget而非界面上布局的其它控件
}

void FlightModeUI::mouseMoveEvent(QMouseEvent* event)
{
    if (isPressedWidget) {
        this->move(this->x() + (event->globalX() - m_lastPos.x()),
            this->y() + (event->globalY() - m_lastPos.y()));
        m_lastPos = event->globalPos();
    }
}

void FlightModeUI::mouseReleaseEvent(QMouseEvent* event)
{
    m_lastPos = event->globalPos();
    isPressedWidget = false; // 鼠标松开时，置为false
}