#include "FlightModeUI.h"

FlightModeUI::FlightModeUI(QWidget* parent)
    : QWidget(parent)
{
    this->setAttribute(Qt::WA_TranslucentBackground, true);
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::Tool); //���ڵı���������������

    movie = new CWidgetAE(QString("./Pic/Mov/FlightMode"), this);
    movie->show();
}

void FlightModeUI::mousePressEvent(QMouseEvent* event)
{
    m_lastPos = event->globalPos();
    isPressedWidget = true; // ��ǰ��갴�µļ���QWidget���ǽ����ϲ��ֵ������ؼ�
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
    isPressedWidget = false; // ����ɿ�ʱ����Ϊfalse
}