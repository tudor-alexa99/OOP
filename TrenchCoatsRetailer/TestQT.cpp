#include "TestQT.h"
#include "ReadFromFile.h"
#include <qstring.h>
//#include <qboxlayout.h>
//#include <qlabel.h>
//#include <qlistwidget.h>
//#include <qlineedit.h>
//#include <qformlayout.h>
//#include <qgridlayout.h>
//#include <qpushbutton.h>

TestQT::TestQT(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	/*this->reader();
	return;*/
	this->repo.initialiseRepo();
	this->admin = new AdminController{ this->repo };
	this->user = new UserController{ this->repo, 1 };
	this->populateList(ui.allTrenchCoatsList);
	connect(ui.filterTrenchCoatsLineEdit, &QLineEdit::textChanged ,this, &TestQT::filtered);
	connect(ui.addTrenchCoatButton, &QPushButton::clicked, this, &TestQT::addTrenchCoat);
	connect(ui.removeTrenchCoatButton, &QPushButton::clicked, this, &TestQT::removeTrenchCoat);
	connect(ui.updateTrenchCoatButton, &QPushButton::clicked, this, &TestQT::updateTrenchCoat);
	connect(ui.addToBagButton, &QPushButton::clicked, this, &TestQT::addToBag);
	connect(ui.buyButton, &QPushButton::clicked, this, &TestQT::buyAll);
	connect(ui.nextButton, &QPushButton::clicked, this, &TestQT::nextButton);
	//this->setupGUI();
}

//void TestQT::setupGUI()
//{
//	QWidget *mainWidget = new QWidget{};
//
//	this->setCentralWidget(mainWidget);
//
//	//horisontal layout
//	QHBoxLayout* mainWindow = new QHBoxLayout{ mainWidget };
//
//	QVBoxLayout* leftWindow = new QVBoxLayout{};
//	QVBoxLayout* rightWindow = new QVBoxLayout{};
//
//	mainWindow->addLayout(leftWindow);
//	mainWindow->addLayout(rightWindow);
//	mainWindow->addLayout(rightWindow);
//
//	QLabel* firstLabel = new QLabel{ "All trench coats:"};
//
//	this->firstList = new QListWidget{};
//	//trebe populata
//	this->populateList(this->firstList);
//
//	this->searchBar = new QLineEdit{ };
//	//add bar
//	QFormLayout* addFields = new QFormLayout{};
//	this->addFormFields(addFields);
//	//add each field
//
//	QObject::connect(this->searchBar, &QLineEdit::textChanged, this, &TestQT::filtered); //fucntie de filtru)
//
//	//buttons
//	QHBoxLayout *leftButtons = new QHBoxLayout{};
//	this->addLeftButtons(leftButtons);
//
//	//add 'em all
//	leftWindow->addWidget(searchBar);
//	leftWindow->addWidget(firstLabel);
//	leftWindow->addWidget(firstList);
//	leftWindow->addLayout(addFields);
//	leftWindow->addLayout(leftButtons);
//	
//	//now the ones in thr right
//
//
//	QLabel* secondLabel = new QLabel{ "Shooping bag: " };
//
//	QListWidget* secondList = new QListWidget{};
//
//	QHBoxLayout* rightButtons = new QHBoxLayout{};
//	this->addRightButtons(rightButtons);
//
//
//	rightWindow->addWidget(secondLabel);
//	rightWindow->addWidget(secondList);
//	rightWindow->addLayout(rightButtons);
//
//}

void TestQT::addFormFields(QFormLayout * addFields)
{
	QLabel* size = new QLabel{ "Size: " };
	QLineEdit* sizeLine = new QLineEdit{};
	size->setBuddy(sizeLine);
	//sizeLine->setClearButtonEnabled(true);

	QLabel* colour = new QLabel{ "Colour: " };
	QLineEdit* colourLine = new QLineEdit{};
	colour->setBuddy(colourLine);

	QLabel* quantity = new QLabel{ "Quantity: " };
	QLineEdit* quantityLine = new QLineEdit{};
	quantity->setBuddy(quantityLine);

	QLabel* price= new QLabel{ "Price: " };
	QLineEdit* priceLine = new QLineEdit{};
	price->setBuddy(priceLine);

	QLabel* photo= new QLabel{ "Photo: " };
	QLineEdit* photoLine = new QLineEdit{};
	photo->setBuddy(photoLine);

	addFields->addRow(size, sizeLine);
	addFields->addRow(colour, colourLine);
	addFields->addRow(quantity, quantityLine);
	addFields->addRow(price, priceLine);
	addFields->addRow(photo, photoLine);
}

void TestQT::addLeftButtons(QHBoxLayout * myButtons)
{
	QPushButton * addButton = new QPushButton{ "Add" };
	QPushButton * removeButton = new QPushButton{ "Remove" };
	QPushButton * updateButton = new QPushButton{ "Update" };
	QPushButton * filterButton = new QPushButton{ "Filter" };

	myButtons->addWidget(addButton);
	myButtons->addWidget(removeButton);
	myButtons->addWidget(updateButton);
	myButtons->addWidget(filterButton);


}

void TestQT::addRightButtons(QHBoxLayout * myButtons)
{
	QPushButton* buyButton = new QPushButton{"Buy"};
	QPushButton* nextButton = new QPushButton{"Next"};

	myButtons->addWidget(buyButton);
	myButtons->addWidget(nextButton);
}

void TestQT::populateList(QListWidget * someList)
{
	someList->clear();
	for (int i = 0; i < this->repo.getSize(); i++) {
		auto current = this->repo.getElement(i);
		someList->addItem(current.toString().c_str());
	}
}

void TestQT::addTrenchCoat()
{
	QString textSize = ui.sizeLineEdit->text();
	QString textColour = ui.colourLineEdit->text();
	QString textQuantity = ui.quantityLineEdit->text();
	QString textPrice = ui.priceLineEdit->text();
	QString textPhoto = ui.photoLineEdit->text();

	int size = textSize.toInt();
	int quantity = textQuantity.toInt();
	double price = textPrice.toDouble();
	std::string colour = textColour.toStdString();
	std::string photo = textPhoto.toStdString();

	//TrenchCoat tr{ size, colour, quantity, price, photo };

	this->admin->addTrenchCoat(size, colour, quantity, price, photo);
	this->populateList(ui.allTrenchCoatsList);
	//admin->addTrenchCoat();
}

void TestQT::removeTrenchCoat(){
	int index = ui.allTrenchCoatsList->currentIndex().row();
	auto tr = this->repo.getElement(index);
	this->admin->removeTrenchCoat(tr.getSize(), tr.getColour());
	this->populateList(ui.allTrenchCoatsList);
}

void TestQT::addToBag()
{
	int index = ui.allTrenchCoatsList->currentIndex().row();
	auto tr = this->repo.getElement(index);
	this->user->addToBag(tr);
	this->populateBag();
}

void TestQT::buyAll()
{
	int price = this->user->getFinalPrice();
	ui.priceListWidget->clear();
	
	//ui.priceListWidget->addItem("Total price: ");
	ui.priceListWidget->addItem(QString::number(price));
}

void TestQT::nextButton()
{
	int index = ui.allTrenchCoatsList->currentIndex().row();
	if (index == this->repo.getSize()) {
		index = 0;
	}
	else
		index++;
	ui.allTrenchCoatsList->setCurrentRow(index);
}

void TestQT::updateTrenchCoat()
{
	//index = clicked()
	//type in price - quantity - Link
	int index = ui.allTrenchCoatsList->currentIndex().row();
	auto textQuantity = ui.quantityLineEdit->text().toInt();
	auto textPrice = ui.priceLineEdit->text().toDouble();
	auto textPhoto = ui.photoLineEdit->text().toStdString();
	
	auto tc = this->repo.getElement(index);

	this->admin->updateTrenchCoat(tc.getSize(), tc.getColour(), textQuantity, textPrice, textPhoto);
	this->populateList(ui.allTrenchCoatsList);
}

void TestQT::populateBag()
{
	ui.shoppingBagList->clear();
	for (auto &tr : this->user->getShoppingBag().getTrenchCoats()) {
		ui.shoppingBagList->addItem(tr.toString().c_str());
	}
}

void TestQT::reader()
{
	Repository repo;
	ReadFromFile rf;
	rf.reader();
}

void TestQT::filtered()
{
	QString text = ui.filterTrenchCoatsLineEdit->text();
	ui.allTrenchCoatsList->clear();
	std::string filt = this->repo.filter(text.toStdString());
	ui.allTrenchCoatsList->addItem(filt.c_str());
}
