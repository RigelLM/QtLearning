#pragma once
#include <QWidget>
#include <QLabel>
#include <QPaintEvent>
#include <QPainter>
#include <QTimer>

class CWidgetAE : public QLabel
{
    Q_OBJECT
public:
    explicit CWidgetAE(QString strImgDir, QWidget* parent = nullptr);

    void setImgDir(QString strImgDir); //传入图片文件夹路径  就会自动开始播放 50ms刷一帧
    void closeAE(); //关闭动画显示  停止刷新
private:
    void startAE() { m_nTimerId = startTimer(30); }
    void stopAE();
protected:
    void paintEvent(QPaintEvent* event);
    void timerEvent(QTimerEvent* event);
private:
    QTimer* m_pTimer = nullptr;
    QString m_strImgDir = "";
    QStringList m_strListImg;
    int m_nIndex = 0;
    int m_nTimerId = 0;
};
