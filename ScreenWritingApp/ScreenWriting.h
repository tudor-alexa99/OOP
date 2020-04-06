#pragma once
#include <string>
#include <QtWidgets/QMainWindow>
#include "ui_ScreenWriting.h"
#include "Controller.h"
#include "Observer.h"
#include "qmessagebox.h"
#include "DevelopBox.h"
using namespace std;

class ScreenWriting : public QMainWindow, public Observer
{
	Q_OBJECT

public:
	ScreenWriting();
	ScreenWriting(Controller &c,int writerIndex, QWidget *parent = Q_NULLPTR);
	string getWriterName(int pos); 
	void update() override;
	void populate();
	void addIdea();
	void developWindow();
	~ScreenWriting();
private:
	Ui::ScreenWritingClass ui;
	Controller *ctrl;
	int writerIndex;
};
