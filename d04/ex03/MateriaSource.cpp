#include "MateriaSource.hpp"
#include <string>

MateriaSource::MateriaSource(void) : _nb(0)
{
	for (int i = 0; i < 4; i++)
		this->_item[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	*this = src;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < this->_nb; i++)
		delete this->_item[i];
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &rhs)
{
	for (int i = 0; i < this->_nb; i++)
		delete this->_item[i];
	for (int i = 0; i < rhs._nb; i++)
		this->_item[i] = rhs._item[i]->clone();
	this->_nb = rhs._nb;
	return (*this);
}

void		MateriaSource::learnMateria(AMateria* item)
{
	if (item && this->_nb < 3)
		this->_item[this->_nb++] = item;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < this->_nb; i++)
	{
		if (!this->_item[i]->getType().compare(type))
			return (this->_item[i]->clone());
	}
	return (0);
}
