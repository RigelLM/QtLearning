
#include "CWidgetAE.h"
#include <QDir>
#include <QDebug>

CWidgetAE::CWidgetAE(QString strImgDir, QWidget* parent)
    : QLabel(parent)
{
    setImgDir(strImgDir);
}

void CWidgetAE::setImgDir(QString strImgDir)
{
    if (m_strImgDir == strImgDir)
        return;
    else
        m_strImgDir = strImgDir;


    stopAE();
    QDir tmpDir(m_strImgDir);
    QFileInfoList listInfo = tmpDir.entryInfoList(QDir::Files | QDir::Dirs | QDir::NoDotAndDotDot, QDir::Name);
    if (listInfo.isEmpty()) {
        qWarning() << "AE Dir is Empty!";
        return;
    }

    m_strListImg.clear();
    foreach(QFileInfo strFileInfo, listInfo) {
        m_strListImg.append(strFileInfo.filePath());
    }

    this->resize(QImage(m_strListImg.first()).size());
    this->show();
    startAE();
}

void CWidgetAE::closeAE()
{
    m_strImgDir = "";
    stopAE();
    this->hide();
}

void CWidgetAE::stopAE()
{
    if (0 == m_nTimerId)
        return;

    killTimer(m_nTimerId);
    m_nTimerId = 0;
}

void CWidgetAE::paintEvent(QPaintEvent* event)
{
    Q_UNUSED(event)
        if (m_nIndex > (m_strListImg.size() - 1))
            return;

    QPainter painter(this);
    painter.drawImage(QPointF(0, 0), QImage(m_strListImg[m_nIndex]));
    
    if (m_nIndex > m_strListImg.size() - 2 )
    {
        m_nIndex = m_strListImg.size() - 2;
    }

    m_nIndex++;

}

void CWidgetAE::timerEvent(QTimerEvent* event)
{
    Q_UNUSED(event)
        this->update();
}