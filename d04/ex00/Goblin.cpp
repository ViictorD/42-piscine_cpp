#include <iostream>
#include "Goblin.hpp"

Goblin::Goblin(void) : Victim()
{
	
}

Goblin::Goblin(std::string name) : Victim(name)
{
	std::cout << "Waaagh !" << std::endl;
}

Goblin::Goblin(Goblin const &src) : Victim(src)
{

}

Goblin::~Goblin(void)
{
	std::cout << "Dead..." << std::endl;
}

void		Goblin::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a toad !" << std::endl;
}

Goblin	&Goblin::operator=(Goblin const &rhs)
{
	Victim::operator=(rhs);
	return (*this);
}
