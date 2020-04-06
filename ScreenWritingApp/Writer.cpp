#include "Writer.h"



Writer::Writer()
{
}


string Writer::toString()
{
	ostringstream toPrint;
	toPrint << this->name << " | " << this->expertise << " ";
	return toPrint.str();
}

Writer::~Writer()
{
}
