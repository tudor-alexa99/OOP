#include "Repository.h"
#include "Programmer.h"
#include "Task.h"

void Repository::intialiseRepo()
{
	ifstream prog_file;
	ifstream tasks_file;

	prog_file.open("programmers.txt");
	tasks_file.open("tasks.txt");
	
	Programmer p;
	Task t;

	while (prog_file>>p.name>>p.id)
	{
		this->programmers.push_back(p);
	}
	while (tasks_file >> t.description >> t.status >> t.id) {
		this->tasks.push_back(t);
	}

	prog_file.close();
	tasks_file.close(); 
}

bool Repository::addTask(string description, int id)
{
	int i = 0;
	for (; i < this->tasks.size(); i++) {
		if (this->getTaskId(i) == id)
			return false;
	}
	Task t{ description, "open" , id };
	this->tasks.push_back(t);
	return true;
}

bool Repository::startTask(string userName, int pos)
{
	if (this->tasks[pos].status != "open")
		return false;
	else {
		this->tasks[pos].user = userName;
		this->tasks[pos].setTask("inProgress");
		return true;
	}
}

bool Repository::stopTask(string userName, int pos)
{
	if(this->tasks[pos].user!= userName || this->tasks[pos].status!= "inProgress")
		return false;
	else {
		this->tasks[pos].user = userName;
		this->tasks[pos].status = "closed";
		return true;
	}
}

void Repository::removeTask(int pos)
{
	this->tasks.erase(this->tasks.begin() + pos);
}

Repository::Repository()
{
}


Repository::~Repository()
{
}
