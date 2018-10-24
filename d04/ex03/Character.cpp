#include "Character.hpp"

Character::Character(std::string name) : _name(name), _nb(0)
{
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
}

Character::Character(Character const &src)
{
	*this = src;
}

Character::~Character(void)
{
	this->cleanMaterial();
}

Character	&Character::operator=(Character const &rhs)
{
	this->cleanMaterial();
	for (int i = 0; i < rhs._nb; i++)
		this->_materia[i] = rhs._materia[i];
	this->_nb = rhs._nb;
	this->_name = rhs._name;
	return (*this);
}

void			Character::cleanMaterial()
{
	for (int i = 0; i < this->_nb; i++)
		delete this->_materia[i];
}

std::string const	&Character::getName() const
{
	return (this->_name);
}

void				Character::equip(AMateria* m)
{
	if (m && this->_nb < 3)
		this->_materia[this->_nb++] = m;
}

void				Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;

	this->_materia[idx] = NULL;
	for (int i = idx; i < this->_nb; i++)
	{
		if (i == 3)
			this->_materia[i] = NULL;
		else
			this->_materia[i] = this->_materia[i + 1];
	}
	this->_nb--;
}

void				Character::use(int idx, ICharacter& target)
{
	if (idx > -1 && idx < this->_nb)
		this->_materia[idx]->use(target);
}
