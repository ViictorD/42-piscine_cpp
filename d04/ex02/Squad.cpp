#include "Squad.hpp"
#include <string>

Squad::Squad(void) : _nb(0)
{

}

Squad::Squad(Squad const &src)
{
	*this = src;
}

Squad::~Squad(void)
{
	for (int i = 0; i < this->_nb; i++)
		delete this->_squad[i];
}

Squad			&Squad::operator=(Squad const &rhs)
{
	ISpaceMarine	*cpy;

	if (this != &rhs)
	{
		for (int i = 0; i < this->_nb; i++)
		{
			cpy = this->_squad[i]->clone();
			delete this->_squad[i];
			this->_squad[i] = cpy;
		}
		this->_nb = rhs._nb;
	}
	return (*this);
}

int				Squad::getCount() const
{
	return (this->_nb);
}

ISpaceMarine*	Squad::getUnit(int n) const
{
	if (n < 0 || n > 15)
		return (NULL);
	return (this->_squad[n]);
}

int				Squad::push(ISpaceMarine* unit)
{
	if (this->_nb < 16)
	{
		for (int i = 0; i < this->_nb; i++)
		{
			if (this->_squad[i] == unit)
				return (this->_nb);
		}
		this->_squad[this->_nb] = unit;
		this->_nb++;
	}
	return (this->_nb);
}
