#pragma once
#include "Repository.h"

class AdminController
{
private:
	Repository* stock;

public:
	AdminController(Repository& stock);
	AdminController(const AdminController& admin);
	~AdminController();
	
	//opetarions:
	//1. Add a trench coat to the stock:
	void addTrenchCoat(const int&, const std::string&, const int&, const double&, const std::string&);


	//2.Remove a trench coat
	//using the fields: size and colour
	void removeTrenchCoat(const int&, const std::string&);

	//3.Update a trench coat from the store
	void updateTrenchCoat(const int&, const std::string&, const int&, const double&, const std::string&);
	
	std::string listAllTrenchCoats();
};

