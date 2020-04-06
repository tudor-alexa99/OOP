#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TaskManager_1.h"

class TaskManager_1 : public QMainWindow
{
	Q_OBJECT

public:
	TaskManager_1(QWidget *parent = Q_NULLPTR);

private:
	Ui::TaskManager_1Class ui;
};
