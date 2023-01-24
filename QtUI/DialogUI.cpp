#include "DialogUI.h"

DialogUI::DialogUI(QWidget *parent)
    : QWidget(parent)
{
    //set the window to be transparent
    this->setAttribute(Qt::WA_TranslucentBackground, true);
    //hide the frame of the window
    this->setWindowFlags(Qt::FramelessWindowHint|Qt::Tool);
    //attach the stream of the effect
    movie = new CWidgetAE(QString("./Pic/Mov/Dialog"), this);
    movie->show();
}

//check if the mouse is pressing the component
void DialogUI::mousePressEvent(QMouseEvent* event)
{
    m_lastPos = event->globalPos();
    isPressedWidget = true; // 当前鼠标按下的即是QWidget而非界面上布局的其它控件
}

//set the component's position when dragging it
void DialogUI::mouseMoveEvent(QMouseEvent* event)
{
    if (isPressedWidget) {
        this->move(this->x() + (event->globalX() - m_lastPos.x()),
            this->y() + (event->globalY() - m_lastPos.y()));
        m_lastPos = event->globalPos();
    }
}

//move the component to the position set by the mouse
void DialogUI::mouseReleaseEvent(QMouseEvent* event)
{
    m_lastPos = event->globalPos();
    isPressedWidget = false; // 鼠标松开时，置为false
}
