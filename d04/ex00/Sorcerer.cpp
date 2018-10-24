#include <iostream>
#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << name << ", " << title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &src)
{
	*this = src;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->_name << ", " << this->_title << \
		", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer	&Sorcerer::operator=(Sorcerer const &rhs)
{
	this->_name = rhs._name;
	this->_title = rhs._title;
	return (*this);
}

std::string		Sorcerer::getName(void) const
{
	return (this->_name);
}

std::string		Sorcerer::getTitle(void) const
{
	return (this->_title);
}

void			Sorcerer::polymorph(Victim const &v)
{
	v.getPolymorphed();
}


std::ostream		&operator<<(std::ostream &lhs, Sorcerer const &rhs)
{
	lhs << "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies !" << std::endl;
	return (lhs);
}
