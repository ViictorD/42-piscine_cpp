#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	
}

Ice::Ice(Ice const &src) : AMateria("ice")
{
	*this = src;
}

Ice::~Ice(void)
{

}

Ice			&Ice::operator=(Ice const &rhs)
{
	AMateria::operator=(rhs);
	return (*this);
}

AMateria*	Ice::clone() const
{
	return (new Ice(*this));
}

void		Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
