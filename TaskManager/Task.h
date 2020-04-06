#pragma once
#include <string>
#include <sstream>
using namespace std;
class Task
{
public:
	string description;
	string status;
	int id;
	string user;
public:
	Task();
	void setTask(std::string status) { this->status = status; }
	void setUser(string user) {this->user = user;}
	string toString();
	Task(string desc, string stat, int id) { this->description = desc; this->status = stat; this->id = id; this->user = ""; }
	~Task();
};

