#pragma once

#include <string>
#include <vector>
using namespace std;
class TrenchCoat
{
	friend class ReadFromFile;
private:
	int size;
	std::string colour;
	int quantity;
	double price;
	std::string link;

public:
	TrenchCoat();
	TrenchCoat(const int& _size, const std::string& _colour,const int& _quantity, const double& _price, const std::string &_link);

	int getSize() const { return this->size; } 
	std::string getColour() const { return this->colour; }
	int getQuantity() const { return this->quantity; }
	double getPrice() const { return this->price; }
	std::string getLink() const { return this->link; }

	void setPrice(const double& price) { this->price = price; }
	void setQuantity(const int& quantity) { this->quantity = quantity; }
	void setLink(const std::string& link) { this->link = link; }

	bool operator == (TrenchCoat t);
	friend std::istream& operator>>(std::istream& file, TrenchCoat& tr);

	std::string toString();

	//void updateTrench(const int& newSize, const std::string& newColour, const int& newQuantity, const double& newPrice, const std::string &newLink);
	~TrenchCoat();
};

class TCValidator {
public:
	void validate(TrenchCoat &tc);
};