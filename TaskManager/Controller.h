#pragma once
#include "Repository.h"
#include "Observer.h"

class Controller : public Subject
{
private:
	Repository *repo;
public:
	Controller();
	Controller(Repository &repo);
	int getNrProgrammers() { return this->repo->getNrProgrammers(); }
	int getNrTasks() { return this->repo->getNrTasks(); }
	bool addTask(string description , int id);
	bool startTask(string userName, int pos) { return this->repo->startTask(userName, pos); }
	bool stopTask(string userName, int pos) { return this->repo->stopTask(userName, pos); }
	Task getTask(int pos);
	Programmer *getProgrammer(int pos) { return this->repo->getProgrammer(pos); }
	void removeTask(int pos) { this->repo->removeTask(pos); this->notify(); }
	//int getNrProgrammers() { return this->repo->getNrProgrammers(); }
	string getProgrammerName(int pos) { return this->repo->g\etProgrammerName(pos); }

	~Controller();
};

