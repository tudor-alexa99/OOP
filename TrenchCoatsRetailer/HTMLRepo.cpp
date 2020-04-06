#include "HTMLRepo.h"



HTMLRepo::HTMLRepo()
{
}

HTMLRepo::HTMLRepo(std::string filename)
{
	this->filename = filename;
}


HTMLRepo::~HTMLRepo()
{
}

void HTMLRepo::saveToFile()
{
	ofstream fout(this->filename);
	if (!fout.is_open())
		return;

	fout << "<!DOCTYPE html>";
	fout << "<html>" << "\n";
	fout << "<head>" << "\n";
	fout << "\t " << "Basket: " << "\n";
	fout << "</head>"<<"\n";
	fout << "<body>"<<"\n";

	fout << "\t \t <table border='1'>" << "\n";
	fout <<"\t \t <tr>" <<"\n";
	fout <<"\t \t <td>" <<"Size"<<"</td>"<<'\n';
	fout <<"\t \t <td>" <<"Colour"<<"</td>"<<'\n';
	fout <<"\t \t <td>" <<"Quantity"<<"</td>"<<'\n';
	fout <<"\t \t <td>" <<"Price"<<"</td>"<<'\n';
	fout <<"\t \t <td>" <<"Link"<<"</td>"<<'\n';
	fout <<"</tr >" <<"\n";

	for (auto &elem : this->trenchCoats) {
		fout << "\t \t <tr>" << "\n";
		fout << "\t \t <td>" << elem.getSize() << "</td>" << '\n';
		fout << "\t \t <td>" << elem.getColour() << "</td>" << '\n';
		fout << "\t \t <td>" << elem.getQuantity() << "</td>" << '\n';
		fout << "\t \t <td>" << elem.getPrice() << "</td>" << '\n';
		fout << "\t \t <td>" << elem.getLink() << "</td>" << '\n';
		fout << "</tr >" << "\n";

	}

	fout <<"</table >" <<"\n";
	
	fout<<"</body>";
	fout<<"</html>";

	fout.close();
}

void HTMLRepo::loadFromFile()
{
}
