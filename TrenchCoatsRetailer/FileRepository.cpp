#include "FileRepository.h"



FileRepository::FileRepository()
{
}

FileRepository::FileRepository(std::string filename)
{
	this->filename = filename;
}


FileRepository::~FileRepository()
{
}

void FileRepository::addTrenchCoat(const TrenchCoat & tr)
{
	Repository::addTrenchCoat(tr);
	this->saveToFile();
}

void FileRepository::removeTrenchCoat(const TrenchCoat & tr)
{
	Repository::removeTrenchCoat(tr);
	this->saveToFile();
}