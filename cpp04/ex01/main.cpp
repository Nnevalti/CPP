#include <iostream>
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main()
{
	Character* moi = new Character("moi");

	std::cout << *moi;

	Enemy* a = new SuperMutant();
	Enemy* b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	moi->equip(pr);
	std::cout << *moi;
	moi->equip(pf);

	moi->attack(b);
	std::cout << *moi;
	moi->equip(pr);
	std::cout << *moi;
	moi->attack(b);
	std::cout << *moi;
	moi->attack(b);
	std::cout << *moi;

	moi->attack(a);
	moi->attack(a);
	moi->attack(a);
	std::cout << *moi;
	moi->recoverAP();
	moi->recoverAP();
	moi->recoverAP();
	std::cout << *moi;
	moi->equip(pf);
	moi->attack(a);
	moi->attack(a);
	moi->attack(a);
	std::cout << *moi;

	delete moi;
	delete pr;
	delete pf;
	return 0;
}
