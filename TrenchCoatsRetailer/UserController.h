#pragma once
//#include "FileRepository.h"
#include "HTMLRepo.h"
#include "CSVRepo.h"
class UserController
{
private:
	double finalPrice;
	Repository& stock;
	FileRepository* shoppingBag;

public:
	UserController(Repository& stock, int option);
	~UserController();

	const double& getFinalPrice();
	Repository& getStock();
	Repository& getShoppingBag();

	void addToBag(TrenchCoat tr);
	Repository& findTrenchCoatBySize(const int& size);
};

