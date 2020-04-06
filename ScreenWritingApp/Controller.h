#pragma once
#include <string>
#include <vector>

#include "Observer.h"
#include "Repository.h"

using namespace std;
class Controller : public Subject
{
private:
	Repository *repo;
public:
	Controller();
	Controller(Repository &repo) { this->repo = &repo; }
	bool addIdeea(string desc, string stat, string creator, int _act) { return this->repo->addIdea(desc, stat, creator, _act); }
	const int getNrWriters() { return this->repo->getNrWriters(); }
	int getNrIdeas() { return this->repo->getNrIdeas(); }
	string getIdeaString(int pos) { return this->repo->getIdeaString(pos); }
	string getWriterName(int pos) {return this->repo->getWriterName(pos);}
	~Controller();
};

