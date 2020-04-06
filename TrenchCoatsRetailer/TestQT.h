#pragma once
#include "AdminController.h"
#include "UserController.h"


#include <qboxlayout.h>
#include <qlabel.h>
#include <qlistwidget.h>
#include <qlineedit.h>
#include <qformlayout.h>
#include <qgridlayout.h>
#include <qpushbutton.h>
#include <QtWidgets/QMainWindow>
#include "ui_TestQT.h"

class TestQT : public QMainWindow
{
	Q_OBJECT

public:
	TestQT(QWidget *parent = Q_NULLPTR);
	

private:
	Ui::TestQTClass ui;
	
	AdminController *admin;
	
	UserController *user;

	QLineEdit *searchBar;

	QListWidget* firstList;

	Repository repo;

	//void setupGUI();

	void addFormFields(QFormLayout* addFields);

	void addLeftButtons(QHBoxLayout *myButtons);
	
	void addRightButtons(QHBoxLayout *myButtons);

	void populateList(QListWidget* someList);

	void addTrenchCoat();

	void removeTrenchCoat();

	void addToBag();

	void buyAll();

	void nextButton();

	void updateTrenchCoat();

	void populateBag();

	void reader();
private slots:
	void filtered();
};
