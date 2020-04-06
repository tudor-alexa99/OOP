#include "Programmer.h"



Programmer::Programmer()
{

}


std::string Programmer::toString()
{
	ostringstream toPrint;
	toPrint << this->name << " | " << this->id;
	return toPrint.str();
}

Programmer::~Programmer()
{
}
