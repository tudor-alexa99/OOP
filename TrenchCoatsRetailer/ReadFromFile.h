#pragma once
//#include "Repository.h"
#include "TrenchCoat.h"
#include <fstream>
#include <iostream>

class ReadFromFile
{
friend class TrenchCoat;
public:
	ReadFromFile();

	void reader();
	~ReadFromFile();
};

