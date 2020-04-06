#pragma once
#include <vector>
#include <string>
#include <fstream>

#include "Programmer.h"
#include "Task.h"

using namespace std;
class Repository
{
private:
	vector <Programmer> programmers;
	vector <Task> tasks;

public:
	
	void intialiseRepo();
	int getNrProgrammers() { return this->programmers.size(); }
	int getNrTasks() { return this->tasks.size(); }
	bool addTask(string description, int id);
	bool startTask(string userName, int pos);
	bool stopTask(string userName, int pos);
	Programmer *getProgrammer(int pos) { return &this->programmers[pos]; }
	int getTaskId(int pos) { return this->tasks[pos].id; }
	Task getTask(int pos) { return this->tasks[pos]; }
	//int getNrProgrammers() { return this->programmers.size(); }
	string getProgrammerName(int pos) { return this->programmers[pos].getName(); }
	void removeTask(int pos);
	Repository();
	~Repository();
};

