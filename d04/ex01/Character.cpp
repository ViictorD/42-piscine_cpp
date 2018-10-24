#include <iostream>
#include "Character.hpp"

Character::Character(std::string const & name) : _name(name), _ap(40), _weapon(NULL)
{

}

Character::Character(Character const &src)
{
	*this = src;
}

Character::~Character(void)
{

}

Character			&Character::operator=(Character const &rhs)
{
	this->_name = rhs._name;
	this->_ap = rhs._ap;
	this->_weapon = rhs._weapon;
	return (*this);
}

std::string const	&Character::getName() const
{
	return (this->_name);
}

int					Character::getAp() const
{
	return (this->_ap);
}

AWeapon const		*Character::getWeapon() const
{
	return (this->_weapon);
}


void				Character::recoverAP()
{
	if ((this->_ap + 10) > 40)
		this->_ap = 40;
	else
		this->_ap += 10;
}

void				Character::equip(AWeapon *weapon)
{
	this->_weapon = weapon;
}

void				Character::attack(Enemy *enemy)
{
	if (!this->_weapon || this->_weapon->getAPCost() > this->_ap)
		return ;
	this->_ap -= this->_weapon->getAPCost();
	std::cout << this->_name << " attacks " << enemy->getType() << " with a " << \
		this->_weapon->getName() << std::endl;
	this->_weapon->attack();
	enemy->takeDamage(this->_weapon->getDamage());
	if (enemy->getHP() == 0)
		delete enemy;
}

std::ostream	&operator<<(std::ostream &lhs, Character const &rhs)
{
	if (!rhs.getWeapon())
		lhs << rhs.getName() << " has " << rhs.getAp() << " AP and is unarmed" << std::endl;
	else
	{
		lhs << rhs.getName() << " has " << rhs.getAp() << " AP and wields a " << \
			rhs.getWeapon()->getName() << std::endl;
	}
	return (lhs);
}
