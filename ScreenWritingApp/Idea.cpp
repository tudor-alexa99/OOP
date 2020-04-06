#include "Idea.h"



Idea::Idea()
{
}


string Idea::toString()
{
	ostringstream toPrint;
	toPrint << this->description << " | " << this->status << " | " << this->creator << " | " << this->act << " ";
	return toPrint.str();
}

Idea::~Idea()
{
}
