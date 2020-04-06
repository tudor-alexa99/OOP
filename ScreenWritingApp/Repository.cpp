#include "Repository.h"



Repository::Repository()
{
}

bool Repository::addIdea(string desc, string stat, string creator, int _act)
{
	for (int i = 0; i < this->ideas.size(); i++) {
		if (this->ideas[i].description == desc && this->ideas[i].act == _act)
			return false;
		if (_act > 3 || _act < 1)
			return false;
	}
	Idea i{ desc, stat, creator, _act };
	this->ideas.push_back(i);
	return true;
}

void Repository::initialiseRepo()
{
	ifstream writersFile, ideasFile;
	writersFile.open("writers.txt");
	ideasFile.open("ideas.txt");

	Idea i;
	Writer w;
	while (ideasFile>>i.description>>i.status>>i.creator>>i.act)
	{
		this->ideas.push_back(i);
	}
	while (writersFile>>w.name>>w.expertise)
	{
		this->writers.push_back(w);
	}
	writersFile.close();
	ideasFile.close();
}


Repository::~Repository()
{
}
