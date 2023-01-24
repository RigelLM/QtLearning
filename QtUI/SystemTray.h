#pragma once
#include <QtWidgets/QWidget>
#include <QSystemTrayIcon>
#include <QMenu>

class SystemTray : public QWidget
{
	Q_OBJECT

public:
	SystemTray(QWidget* parent = 0);
	~SystemTray();

protected:
	void activeTray(QSystemTrayIcon::ActivationReason reason);
	void exit();//�˳�Ӧ��
	void showMenu();//��ʾ�˵�

private:
	QSystemTrayIcon* m_systemTray;

	QMenu* m_menu;
	QAction* exit_action;
};

