#pragma once
#include <vector>
#include <fstream>
#include "TrenchCoat.h"
//#include "DynamicVector.h"

using namespace std;
class Repository
{
protected:
	std::vector<TrenchCoat> trenchCoats;

public:
	//Default constructor
	Repository();

	Repository(const Repository& stock);
	//Repository& operator=(const Repository& stock);

	~Repository();

	//adds a trench coat to the list
	virtual void addTrenchCoat( const TrenchCoat& tr);

	//removes a trench coat from the list
	virtual	void removeTrenchCoat(const TrenchCoat& tr);

	//finds a trench coat by colour and size
	//TrenchCoat findBySizeAndColour(const std::string& colour, const int& size);

	std::vector<TrenchCoat> getTrenchCoats() const { return trenchCoats; }
		
	//finds a trench coat in the repo and returns its position (if found)
	int find(const TrenchCoat& tr);
	TrenchCoat& getElement(int pos);

	void decreaseQuantity(const TrenchCoat& tc);

	void initialiseRepo();
	std::string toString();
	const int getSize() { return this->trenchCoats.size(); }

	std::string filter(std::string substring);

	void toFile();
};

