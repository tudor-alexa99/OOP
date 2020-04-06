#include "Controller.h"



Controller::Controller()
{
}

Controller::Controller(Repository & repo)
{
	this->repo = &repo;
	this->repo->intialiseRepo();
}


bool Controller::addTask(string description, int id)
{
	return this->repo->addTask(description, id);
	this->notify();
}

Task Controller::getTask(int pos)
{
	return this->repo->getTask(pos);
}

Controller::~Controller()
{  
}
