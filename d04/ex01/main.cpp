#include <iostream>
#include "Character.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"

int main()
{
	Character *zaz = new Character("zaz");
	Enemy *b = new RadScorpion();
	Enemy *super = new SuperMutant();

	
	std::cout << *zaz;
	zaz->attack(b);			// No weapon set


	AWeapon *pr = new PlasmaRifle();
	AWeapon *pf = new PowerFist();

	zaz->equip(pr);
	std::cout << *zaz;
	zaz->equip(pf);
	zaz->attack(b);
	std::cout << *zaz;
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << "RadScorpion is dead !" << std::endl;

	std::cout << std::endl << *zaz;
	zaz->recoverAP();
	std::cout << *zaz;
	zaz->recoverAP();
	std::cout << *zaz;
	zaz->recoverAP();
	std::cout << *zaz << std::endl;

	std::cout << "Super mutant have " << super->getHP() << "HP !" << std::endl;
	std::cout << *zaz;
	zaz->attack(super);
	std::cout << "Super mutant have " << super->getHP() << "HP !" << std::endl;
	std::cout << *zaz;
	zaz->attack(super);
	std::cout << "Super mutant have " << super->getHP() << "HP !" << std::endl;
	std::cout << *zaz;
	zaz->attack(super);
	std::cout << "Super mutant have " << super->getHP() << "HP !" << std::endl;
	std::cout << *zaz;
	zaz->attack(super);

	return 0;
}
