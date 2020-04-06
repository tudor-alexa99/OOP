#include "Repository.h"
#include "TrenchCoat.h"
#include "Exceptions.h"
#include <string>

Repository::Repository()
{
	std::vector<TrenchCoat> trenchCoats;
	this->trenchCoats = trenchCoats;
}

Repository::Repository(const Repository& stock)
{
	std::vector<TrenchCoat> trenchCoats{ stock.trenchCoats };
	this->trenchCoats = trenchCoats;
}

//Repository & Repository::operator=(const Repository & stock)
//{
//	DynamicVector<TrenchCoat> newTrenchCoats{ stock.trenchCoats };
//	this->trenchCoats = newTrenchCoats;
//	return *this;
//}
//

Repository::~Repository()
{
}

TrenchCoat & Repository::getElement(int pos)
{
	return this->trenchCoats[pos];
}

void Repository::decreaseQuantity(const TrenchCoat & tc)
{
	int pos = this->find(tc);
	TrenchCoat for_sale = this->getElement(pos);
	for_sale.setQuantity(for_sale.getQuantity() - 1);
	if (for_sale.getQuantity() <= 0)
		this->removeTrenchCoat(for_sale);
}

void Repository::addTrenchCoat(const TrenchCoat & tr)
{
	int pos = find(tr);
	if (pos != -1)
		throw RepositoryException{ "Item already in list!" };

	this->trenchCoats.push_back(tr);	
}

void Repository::removeTrenchCoat(const TrenchCoat & tr)
{
	//if the trench coat we're looking for is not in the list, return false
	int pos = find(tr);
	if (pos == -1)
		throw RepositoryException{ "Inexisting item" };
	
	this->trenchCoats.erase(trenchCoats.begin() + pos);
} 

//
//TrenchCoat Repository::findBySizeAndColour(const std::string & colour, const int & size)
//{
//	for (int i = 0; i < this->trenchCoats.getSize(); i++) 
//	{
//		TrenchCoat tr = trenchCoats[i];
//		if (tr.getColour() == colour && tr.getSize() == size)
//			return tr;
//	}
//	//if the trench coat is not found, return a NULL one
//	return TrenchCoat{};
//}


int Repository::find(const TrenchCoat & tr)
{
	for (int i = 0; i < trenchCoats.size(); i++) {
		TrenchCoat current = this->trenchCoats[i];
		if (current == tr)
			return i;
	}
	return -1;
}

void Repository::initialiseRepo()
{
	int size, quantity;
	double price;
	string colour, link;

	this->addTrenchCoat(TrenchCoat{ 40, "Blue", 10, 120, "photo" });
	this->addTrenchCoat(TrenchCoat{ 44, "Red", 12, 150, "photo" });
	this->addTrenchCoat(TrenchCoat{ 38, "Beige", 20, 200, "photo" });
	this->addTrenchCoat(TrenchCoat{ 46, "Black", 18, 180, "photo" });
}

std::string Repository::toString()
{
	std::string allTrenchCoats;

	for (int i = 0; i < this->getSize(); i++) {
		allTrenchCoats += this->trenchCoats[i].toString();
		allTrenchCoats += "\n";
	}
	return allTrenchCoats;
}

std::string Repository::filter(std::string substring)
{
	std::string allTrenchCoats;
	std::string line;

	for (int i = 0; i < this->getSize(); i++) {
		line = "";
		line += this->trenchCoats[i].toString();
		if (strstr(line.c_str(), substring.c_str()))
		{
			allTrenchCoats += line;
			allTrenchCoats += "\n";
		}
	}

	return allTrenchCoats;
}

void Repository::toFile()
{
	//ifstream("output.txt");
	ofstream fout("input.txt");
	for (int i = 0; i < this->getSize(); i++)
	{
		auto t = this->getElement(i);
		fout << t.getSize() << " " << t.getColour() << " " << t.getQuantity() << " " << t.getPrice() << " " << t.getLink() << "\n";
	}
}
