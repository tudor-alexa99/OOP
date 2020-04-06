#pragma once
#include "ScreenWriting.h"
#include "Repository.h"
#include "Controller.h"
#include <QtWidgets/QApplication>
#include <vector>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	Repository r;
	r.initialiseRepo();
	Controller c{ r };

	vector<ScreenWriting*> writers;

	int i; 
	for (i = 0; i < c.getNrWriters(); i++) {
		ScreenWriting *s = new ScreenWriting{ c, i };
		writers.push_back(s);
		c.addObserver(s);
		s->setWindowTitle(c.getWriterName(i).c_str());
		s->show();
	}

	return a.exec();
}
