#include "ProgrammerWindow.h"

ProgrammerWindow::ProgrammerWindow(Controller &c,Programmer *p, QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->prgm = p;
	this->ctrl = &c;
	this->populate();
	connect(ui.addButton, &QPushButton::clicked, this, &ProgrammerWindow::addTask);
	connect(ui.startTaskButton, &QPushButton::clicked, this, &ProgrammerWindow::startTask);
	connect(ui.finishTaskButton, &QPushButton::clicked, this, &ProgrammerWindow::stopTask);
	connect(ui.removeButton, &QPushButton::clicked, this, &ProgrammerWindow::removeTask);
}

ProgrammerWindow::~ProgrammerWindow()
{
}

void ProgrammerWindow::update()
{
	this->populate();
}

void ProgrammerWindow::paintEvent(QPaintEvent * event)
{
	QPainter painter(this);
	painter.drawRect(QRect(5,5,20,20));
}

void ProgrammerWindow::addTask()
{
	auto desc =  ui.descriptionLineEdit->text();
	auto id = ui.idLineEdit->text();
	if (desc.isEmpty() || id.isEmpty()) {
		QMessageBox::information(this, tr("Error"), tr("Empty slot"));
	}
	else {
		bool done = this->ctrl->addTask(desc.toStdString(), id.toInt());
		if (!done)
			QMessageBox::information(this, tr("Invalid input"), tr("The task id already exists"));
	}
	
	this->ctrl->notify();
	
}

void ProgrammerWindow::removeTask()
{
	int pos = ui.tasksListWidget->currentIndex().row();
	if (this->ctrl->getTask(pos).status != "inProgress") {
		this->ctrl->removeTask(pos);
	}
}

void ProgrammerWindow::startTask()
{
	int pos = ui.tasksListWidget->currentIndex().row();
	bool done = this->ctrl->startTask(this->prgm->getName(), pos);
	if (!done) {
		QMessageBox::information(this, tr("Error"), tr("Task can not be started!"));
	}
	this->ctrl->notify();
}

void ProgrammerWindow::stopTask()
{
	int pos = ui.tasksListWidget->currentIndex().row();
	bool done = this->ctrl->stopTask(this->prgm->getName(), pos);
	if (!done) {
		QMessageBox::information(this, tr("Error"), tr("Task can not be stopped"));
	}
	this->ctrl->notify();
}

void ProgrammerWindow::populate()
{
	ui.tasksListWidget->clear();
	int i = 0;
	for (i = 0; i < this->ctrl->getNrTasks(); i++) {
		Task t = this->ctrl->getTask(i);
		ui.tasksListWidget->addItem(t.toString().c_str());
		if (t.status == "inProgress") {
			ui.tasksListWidget->item(i)->setBackgroundColor("yellow");
		}
	}
}
