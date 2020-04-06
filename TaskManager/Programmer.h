#pragma once
#include <string>
#include <sstream>
using namespace std;
class Programmer
{
public:
	string name;
	int id;

public:
	Programmer();
	Programmer(string _name, int _id) { this->name = _name; this->id = _id; }
	std::string toString();
	string getName() { return this->name; }
	~Programmer();
};

