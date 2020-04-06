#pragma once

#include <QWidget>
#include "ui_DevelopBox.h"

class DevelopBox : public QWidget
{
	Q_OBJECT

public:
	DevelopBox(QWidget *parent = Q_NULLPTR);
	~DevelopBox();
	
private:
	Ui::DevelopBox ui;
};
