#pragma once
#include "Repository.h"

class FileRepository : public Repository
{
protected:
	std::string filename;

public:
	FileRepository();
	FileRepository(std::string filename); 
	~FileRepository();

	void addTrenchCoat(const TrenchCoat& tr) override;

	void removeTrenchCoat(const TrenchCoat& tr) override;

	virtual void saveToFile() = 0; //pure virtual 
	virtual void loadFromFile() = 0; //pure virtual 

};


