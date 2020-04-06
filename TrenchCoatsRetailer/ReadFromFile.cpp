#include "ReadFromFile.h"



ReadFromFile::ReadFromFile()
{
}

class TrenchCoat;
void ReadFromFile::reader()
{
	std::vector<TrenchCoat> trenchCoats;
	ifstream inputFile;
	//inputFile.open();
	inputFile.open("Users\Lenovo\source\repos\TestQT\inputReader.txt");
	if (!inputFile) {
		cout << "Error opening the file!";
		return;
	}
	//TrenchCoat tr;
	int size, quantity;
	double price;
	std::string color, link;
	while (inputFile >> size >> color >> quantity >> price >> link) {
		TrenchCoat tr{ size, color, quantity, price, link };
		trenchCoats.push_back(tr);
	}
	for (int i = 0; i < trenchCoats.size(); i++) {
		cout << trenchCoats[i].toString();
	}
}


ReadFromFile::~ReadFromFile()
{
}
