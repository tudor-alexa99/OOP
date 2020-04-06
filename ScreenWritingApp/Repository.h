#pragma once
#include "Idea.h"
#include "Writer.h"

#include <fstream>
#include <string>
#include <vector>

using namespace std;

class Repository
{
private:
	vector<Idea> ideas;
	vector<Writer> writers;
public:
	Repository();
	bool addIdea(string desc, string stat, string creator, int _act);
	void initialiseRepo();
	const int getNrWriters() { int nr = this->writers.size(); return nr; }
	int getNrIdeas() { return this->ideas.size(); }
	string getIdeaString(int pos) { return this->ideas[pos].toString(); }
	string getWriterName(int pos) { return this->writers[pos].name; }
	~Repository();
};

