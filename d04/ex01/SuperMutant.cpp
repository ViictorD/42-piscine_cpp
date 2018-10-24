#include <iostream>
#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &src) : Enemy(170, "Super Mutant")
{
	*this = src;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh ...";
}

SuperMutant	&SuperMutant::operator=(SuperMutant const &rhs)
{
	Enemy::operator=(rhs);
	return (*this);
}

void		SuperMutant::takeDamage(int nb)
{
	if (nb >= 0 && nb < 3)
		nb = 3;
	nb -= 3;
	if ((this->_hp - nb) <= 0)
		this->_hp = 0;
	else
		this->_hp -= nb;
}
