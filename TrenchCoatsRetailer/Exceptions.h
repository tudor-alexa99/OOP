#pragma once
#include <iostream>
#include <string>

using namespace std;
class Exception
{
protected:
	std::string message;


public:
	Exception();
	Exception(std::string msg) { this->message = msg; }

	virtual std::string getMessage() { return this->message; }

	~Exception();
};

class RepositoryException : public Exception
{
public:
	RepositoryException(std::string msg) {this->message = msg;}
	std::string getMessage() override { return this->message; }

	~RepositoryException();
};

class ValidatorException : public Exception
{
public:
	ValidatorException(std::string msg) { this->message = msg; }
	~ValidatorException();
	std::string getMessage() override { return this->message; }

};