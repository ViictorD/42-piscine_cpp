#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type), xp_(0)
{

}

AMateria::AMateria(AMateria const &src)
{
	*this = src;
}

AMateria::~AMateria()
{

}

AMateria		&AMateria::operator=(AMateria const &rhs)
{
	this->_type = rhs._type;
	this->xp_ = rhs.xp_;
	return (*this);
}

std::string const	&AMateria::getType() const
{
	return (this->_type);
}

unsigned int	AMateria::getXP() const
{
	return (this->xp_);
}

void			AMateria::use(ICharacter &target)
{
	this->xp_ += 10;
	(void)target;
}