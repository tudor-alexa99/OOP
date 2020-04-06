#include "TrenchCoat.h"
#include "Exceptions.h"

#include <sstream>
#include <Windows.h>
#include <shellapi.h>

TrenchCoat::TrenchCoat()
{
}

TrenchCoat::TrenchCoat(const int & _size, const std::string & _colour, const int & _quantity, const double & _price, const std::string & _link):
size{_size}, colour{_colour}, quantity{_quantity}, price{_price},link{_link}
{/*
 equivalent to:
	this->size = _size;
	this->colour = _colour;
	this->quanity = _quantity;
	this->price = _price;
	this->link = _link;
*/
}

bool TrenchCoat::operator==(TrenchCoat t)
{
	if (this->colour == t.colour && this->size == t.size)
		return true;
	return false;
}

std::string TrenchCoat::toString()
{
	std::ostringstream printString;
	printString << "Trench Coat: ";
	printString << "\n\tSize: " << this->size;
	printString << "\n\tColour: " << this->colour;
	printString << "\n\tQuantity: " << this->quantity;
	printString << "\n\tPrice : " << this->price;
	printString << "\n\tLink: " << this->link;

	return printString.str();
}

//void TrenchCoat::updateTrench(const int & newSize, const std::string & newColour, const int & newQuantity, const double & newPrice, const std::string & newLink)
//{
//	this->size = newSize;
//	this->colour = newColour;
//	this->quantity = newQuantity;
//	this->price = newPrice;
//	this->link = newLink;
//}

TrenchCoat::~TrenchCoat()
{
}

std::vector<string> tokenize(std::string line, char delim) {
	vector <string> result;
	stringstream ss(line);
	string token;

	while (getline(ss, token, delim)) {
		result.push_back(token);
	}
	return result;
}

std::istream & operator>>(std::istream & file, TrenchCoat & tr)
{
	string line;
	getline(file, line);

	vector<string> tokens = tokenize(line, ',');
	if (tokens.size() != 5)
		return file;
	tr.size = stoi(tokens[0]);
	tr.colour = tokens[1];
	tr.quantity = stod(tokens[2]);
	tr.price = stoi(tokens[3]);
	tr.link = tokens[4];

	return file;
}

void TCValidator::validate(TrenchCoat & tc)
{
	string errors;

	if (tc.getSize() < 30 || tc.getSize() > 60)
		errors += "Invalid size!\n";
	if (tc.getColour() == "")
		errors += "Empty colour!\n";
	if (tc.getPrice() < 0)
		errors += "Negative price!\n";
	if (tc.getQuantity() < 0)
		errors += "Negative Quantity\n";

	if (errors.size() != 0)
		throw ValidatorException(errors);
}
