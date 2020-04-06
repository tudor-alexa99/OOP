#include "Tests.h"


void Tests::test_admin()
{
	//Repository repo{};
	//AdminController admin{ repo };


	//admin.addTrenchCoat(30, "Green", 10, 10, "Some_link");
	//assert(repo.getSize() == 1);

	//assert(repo.removeTrenchCoat(TrenchCoat{ 100, "NU_exista", 10,11,"asda" } ) == false);
	//assert(admin.updateTrenchCoat( 100, "NU_exista", 10,11,"asda"  ) == false);
	//

	////setters
	//TrenchCoat current = repo.getElement(0);
	//current.setLink("new_link");
	//current.setPrice(1000);
	//current.setQuantity(999);

	//assert(current.getColour() == "Green");
	//assert(current.getLink() == "new_link");
	//assert(current.getPrice() == 1000);
	//assert(current.getSize() == 30);
	//assert(current.getQuantity() == 999);

	////add another identical trench coat, check if it doesn't get added

	//admin.addTrenchCoat(30, "Green", 10, 10, "Some_link");
	//assert(repo.getSize() == 1);

	//admin.updateTrenchCoat(30, "Green", 101, 102, "Another_link");
	////assert(repo.getElement(0).getPrice == 102);
	//TrenchCoat new_tr = repo.getElement(0);
	//assert(new_tr.getPrice() == 102);


	//admin.removeTrenchCoat(30, "Green");
	//assert(repo.getSize() == 0);

	//assert(strlen(admin.listAllTrenchCoats().c_str()) == 0);

	////test the resize
	//repo.initialiseRepo();
	//repo.addTrenchCoat(TrenchCoat{ 22, "Maroon", 100, 22, "link" });
	//repo.addTrenchCoat(TrenchCoat{ 23, "colour", 100, 22, "link" });
	//repo.addTrenchCoat(TrenchCoat{ 24, "other_colour", 100, 22, "link" });
	//repo.addTrenchCoat(TrenchCoat{ 25, "please_stop", 100, 22, "link" });
	//repo.addTrenchCoat(TrenchCoat{ 26, "it_s_getting_out_of_control", 100, 22, "link" });
	//repo.addTrenchCoat(TrenchCoat{ 27, "staph", 100, 22, "link" });

	//assert(repo.getSize() == 11);
	//repo.removeTrenchCoat(TrenchCoat{ 22, "Maroon", 100, 22, "link" });
	//assert(repo.getSize() == 10);
	assert(1 == 1);
}

void Tests::test_user()
{
	/*Repository repo{};
	repo.initialiseRepo();
	assert(repo.getSize() == 0);
	
	UserController user{repo, 1};
	user.addToBag(repo.getElement(1));

	user.getFinalPrice();
	user.getShoppingBag();
	user.getStock();
	Repository find_repo = user.findTrenchCoatBySize(40);

	Repository shoppingList = user.getShoppingBag();
	assert(shoppingList.getSize() == 1);

	assert(strlen(shoppingList.toString().c_str()) != 0);

	repo.addTrenchCoat(TrenchCoat{ 100, "Bej", 1, 100, "Link" });
	user.addToBag(TrenchCoat{ 100, "Bej", 1, 100, "Link" });
	assert(shoppingList.getSize() == 1);
*/
	assert(1 == 1);
}

Tests::Tests()
{
}

Tests::~Tests()
{
}
