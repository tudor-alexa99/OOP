#pragma once
#include <vector>

using namespace std;
class Observer
{
public:
	virtual void update() = 0;
	Observer();
	virtual ~Observer();
};

class Subject {
private:
	vector<Observer*> observers;
public:
	void notify();
	void addObserver(Observer *obs) { this->observers.push_back(obs); }
	Subject();
	virtual ~Subject();
};

