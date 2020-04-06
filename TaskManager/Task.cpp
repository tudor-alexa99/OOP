#include "Task.h"



Task::Task()
{
}

string Task::toString()
{
	ostringstream toPrint;
	toPrint << this->description << " | " << this->status << " | " << this->id<<" | "<<this->user;
	return toPrint.str();
}


Task::~Task()
{
}
