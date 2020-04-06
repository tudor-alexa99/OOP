#include "Observer.h"



Observer::Observer()
{
}


Observer::~Observer()
{
}

void Subject::notify()
{
	for (int i = 0; i < this->observers.size(); i++) {
		this->observers[i]->update();
	}
}

Subject::Subject()
{
}

Subject::~Subject()
{
}
