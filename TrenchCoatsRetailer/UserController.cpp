#include "UserController.h"



UserController::UserController(Repository& _stock,  int option) : stock{ _stock }, finalPrice{ 0 }
{
	if (option == 1)
	{
		this->shoppingBag = new HTMLRepo{ "HTMLRepo.html" };
	}
	else if (option == 2)
	{
		this->shoppingBag = new CSVRepo{ "CSVRepo.txt" };
	}
}


UserController::~UserController()
{
//	delete this->shoppingBag;
}

const double & UserController::getFinalPrice()
{
	return this->finalPrice;
}

Repository & UserController::getStock()
{
	return this->stock;
}

Repository & UserController::getShoppingBag()
{
	return *this->shoppingBag;
}

void UserController::addToBag(TrenchCoat tr)
{
	this->shoppingBag->addTrenchCoat(tr);
	this->stock.decreaseQuantity(tr);
	this->finalPrice += tr.getPrice();
}

Repository & UserController::findTrenchCoatBySize(const int & size)
{
	Repository* repo = new Repository();

	for (int i = 0; i < this->stock.getSize(); i++)
	{
		TrenchCoat current = this->stock.getElement(i);
		if (current.getSize() == size)
			repo->addTrenchCoat(current);
	}

	return *repo;
}

