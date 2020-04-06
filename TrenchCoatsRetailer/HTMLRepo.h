#pragma once
#include "FileRepository.h"

class HTMLRepo : public FileRepository
{
public:
	HTMLRepo();
	HTMLRepo(std::string filename);
	~HTMLRepo();
	void saveToFile() override;
	void loadFromFile() override;
};

