#include "ScreenWriting.h"

ScreenWriting::ScreenWriting(Controller &c,int writerIndex, QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->ctrl = &c;
	this->populate();
	this->writerIndex = writerIndex;

	connect(ui.addIdeasButton, &QPushButton::clicked, this, &ScreenWriting::addIdea);
	connect(ui.developButton, &QPushButton::clicked, this, &ScreenWriting::developWindow);
}

string ScreenWriting::getWriterName(int pos)
{
	return this->ctrl->getWriterName(pos);
}

void ScreenWriting::update()
{
	this->populate();
}

void ScreenWriting::populate()
{
	ui.ideasListWidget->clear();
	int i;
	for (i = 0; i < this->ctrl->getNrIdeas(); i++) {
		ui.ideasListWidget->addItem(this->ctrl->getIdeaString(i).c_str());
	}

}

void ScreenWriting::addIdea()
{
	auto text1 = ui.addDescriptionLineEdit->text();
	auto text2 = ui.addActLineEdit->text();
	if (text1.isEmpty() || text2.isEmpty()) {
		QMessageBox::information(this, tr("Error"), tr("Empty slot"));
	}
	else {
		bool done = this->ctrl->addIdeea(text1.toStdString(), "proposed", this->ctrl->getWriterName(this->writerIndex), text2.toInt());
		if (!done)
			QMessageBox::information(this, tr("Error"), tr("Invalid input"));
	}
	this->ctrl->notify();
}

void ScreenWriting::developWindow()
{
	DevelopBox *db = new DevelopBox;
	db->show();
}

ScreenWriting::~ScreenWriting()
{
}
