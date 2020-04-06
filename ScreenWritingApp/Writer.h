#pragma once
#include <string>
#include <sstream>

using namespace std;
class Writer
{
public:
	string name;
	string expertise;
public:
	Writer();
	Writer(string _name, string _exp) { this->name = _name; this->expertise = _exp; }
	string toString();
	~Writer();
};

