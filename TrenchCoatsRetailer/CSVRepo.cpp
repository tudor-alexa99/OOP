#include "CSVRepo.h"



CSVRepo::CSVRepo()
{
}

CSVRepo::CSVRepo(std::string filename)
{
	this->filename = filename;
}


CSVRepo::~CSVRepo()
{
}

void CSVRepo::saveToFile()
{
	ofstream fout(this->filename);
	if (!fout.is_open())
		return;

	for (int i = 0; i < this->getSize(); i++)
	{
		auto t = this->getElement(i);
		fout << t.getSize() << "," << t.getColour() << "," << t.getQuantity() << "," << t.getPrice() << "," << t.getLink() << "\n";
	}
	fout.close();
}

void CSVRepo::loadFromFile()
{
	ifstream fin(this->filename);
	if (!fin.is_open())
		return;
	TrenchCoat tr{};
	while (fin >> tr)
	{
		Repository::addTrenchCoat(tr);
	}
	fin.close();
}
