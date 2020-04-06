#include "Observer.h"



Observer::Observer()
{
}


Observer::~Observer()
{
}

Subject::Subject()
{
}

Subject::~Subject()
{
}

void Subject::notify()
{
	for (int i = 0; i < this->observers.size(); i++) {
		this->observers[i]->update();
	}
}
