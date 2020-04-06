#include "AdminController.h"
#include "Exceptions.h"

AdminController::AdminController(Repository& stock)
{
	this->stock = &stock;
}
AdminController::AdminController(const AdminController & admin) : stock{ admin.stock }
{ }

AdminController::~AdminController()
{ }

void AdminController::addTrenchCoat(const int &size, const std::string &colour, const int &quantity, const double &price, const std::string& link)
{
	TrenchCoat new_trench{ size, colour, quantity, price, link };
	TCValidator valid{};
	//valid.validate(new_trench);
	this->stock->addTrenchCoat(new_trench);
}

void AdminController::updateTrenchCoat(const int &size, const std::string &colour, const int &quantity, const double &price, const std::string& link)
{
	TrenchCoat new_trench{ size, colour, quantity, price, link };
	//find the position of the trench coat
	int pos = this->stock->find(new_trench);
	//if it exists, replace the trench in the given position with the new one
	if (pos == -1) {
		throw RepositoryException{ "Item does not exist!" };
	}

	//get the element that has to be modified
	TrenchCoat& to_modify = this->stock->getElement(pos);

	to_modify.setQuantity(quantity);
	to_modify.setPrice(price);
	to_modify.setLink(link);
}

std::string AdminController::listAllTrenchCoats()
{
	return this->stock->toString();
}

void AdminController::removeTrenchCoat(const int &size, const std::string &colour)
{
	TrenchCoat trench{ size, colour, 0,0,".." };
	this->stock->removeTrenchCoat(trench);
}

