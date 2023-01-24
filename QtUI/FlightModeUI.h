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
    //��ȡ����¼����ƴ���λ��. ��Ϊ���������غ�.�������޷��϶��ġ�
    void mouseReleaseEvent(QMouseEvent* event);
    void mouseMoveEvent(QMouseEvent* event);
    void mousePressEvent(QMouseEvent* event);
private:
    bool isPressedWidget;
    QPoint m_lastPos;
    CWidgetAE* movie;
};

