#pragma once
#include <string>
#include <sstream>

using namespace std;
class Idea
{
public:
	string description;
	string status;
	string creator;
	int act;
public:
	Idea();
	Idea(string desc, string stat, string creat, int _act) { this->description = desc; this->status = stat; this->creator = creat; this->act = _act; }
	string toString();
	~Idea();
};

