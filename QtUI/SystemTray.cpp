#include "SystemTray.h"

SystemTray::SystemTray(QWidget* parent)
	: QWidget(parent)
{
	m_systemTray = new QSystemTrayIcon(this);

	m_menu = new QMenu(this);
	exit_action = new QAction(m_menu);

	exit_action->setText("Exit");

	m_menu->addAction(exit_action);

	connect(exit_action, &QAction::triggered, this, &SystemTray::exit);

	m_systemTray->setContextMenu(m_menu);
	m_systemTray->setIcon(QIcon(":/Icon/Ico/Plator.ico"));
	m_systemTray->setToolTip("Plator");
	m_systemTray->show();
	connect(m_systemTray, &QSystemTrayIcon::activated, this, &SystemTray::activeTray);//点击托盘，执行相应的动作
}

SystemTray::~SystemTray()
{

}

void SystemTray::activeTray(QSystemTrayIcon::ActivationReason reason)
{
	switch (reason)
	{
	case QSystemTrayIcon::Context:
		showMenu();
		break;
	}
}

void SystemTray::showMenu()
{
	m_menu->show();
}

void SystemTray::exit()
{
	this->close();
}