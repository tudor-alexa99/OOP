#pragma once
#include "Observer.h"
#include "Controller.h"
#include <QWidget>
#include <qmessagebox.h>
#include <qpainter>
#include "ui_ProgrammerWindow.h"

class ProgrammerWindow : public QWidget, public Observer
{
	Q_OBJECT

public:
	ProgrammerWindow(Controller &c, Programmer* p, QWidget *parent = Q_NULLPTR);
	~ProgrammerWindow();
	void update() override;
	virtual void paintEvent(QPaintEvent *event);
private:
	Programmer* prgm;
	Controller *ctrl;
	void addTask();
	void removeTask();
	void startTask();
	void stopTask();
	Ui::ProgrammerWindow ui;
	void populate();
};
