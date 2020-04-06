#include "TaskManager_1.h"
#include <QtWidgets/QApplication>
#include <vector>
#include "Repository.h"
#include "Controller.h"
#include "ProgrammerWindow.h"
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	TaskManager_1 w;

	std::vector<ProgrammerWindow> pw;
	Repository r;
	Controller ctrl{ r };
	//ProgrammerWindow pw{ ctrl };
	int i;
	//for (i = 0; i < ctrl.getNrProgrammers(); i++) {
	//	ProgrammerWindow p{ ctrl };
	//	p.setWindowTitle(ctrl.getProgrammerName(i).c_str());
	//	p.show();
	//	pw.push_back(p);
	//	//pw[i].show();
	//}
	ProgrammerWindow p1{ ctrl,  ctrl.getProgrammer(0)};
	p1.setWindowTitle(ctrl.getProgrammerName(0).c_str());


	ProgrammerWindow p2{ ctrl , ctrl.getProgrammer(1)};
 	p2.setWindowTitle(ctrl.getProgrammer(1)->getName().c_str());
	
	ctrl.addObserver(&p1);
	ctrl.addObserver(&p2);

	p1.show();
	p2.show();
	return a.exec();
}
