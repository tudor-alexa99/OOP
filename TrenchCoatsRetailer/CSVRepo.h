#pragma once
#include "FileRepository.h"


class CSVRepo : public FileRepository
{
public:
	CSVRepo();
	CSVRepo(std::string filename);
	~CSVRepo();

	void saveToFile() override;
	void loadFromFile() override;

	
};

