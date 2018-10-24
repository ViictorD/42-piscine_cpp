#include <iostream>
#include "Victim.hpp"

Victim::Victim(void) : _name("")
{

}

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << name << " just popped !" << std::endl;
}

Victim::Victim(Victim const &src)
{
	*this = src;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
}

Victim			&Victim::operator=(Victim const &rhs)
{
	this->_name = rhs._name;
	return (*this);
}

std::string		Victim::getName(void) const
{
	return (this->_name);
}

void			Victim::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}

std::ostream	&operator<<(std::ostream &lhs, Victim const &rhs)
{
	lhs << "I'm " << rhs.getName() << " and I like otters !" << std::endl;
	return (lhs);
}
