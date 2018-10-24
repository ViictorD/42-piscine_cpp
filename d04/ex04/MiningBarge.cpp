#include "MiningBarge.hpp"

MiningBarge::MiningBarge(void) : _nb(0)
{
	for (int i = 0; i < 4; i++)
		this->_miners[i] = NULL; 
}

MiningBarge::MiningBarge(MiningBarge const &src)
{
	*this = src;
}

MiningBarge::~MiningBarge(void)
{
	for (int i = 0; i < this->_nb; i++)
		delete this->_miners[i];
}

MiningBarge	&MiningBarge::operator=(MiningBarge const &rhs)
{
	for (int i = 0; i < this->_nb; i++)
		delete this->_miners[i];
	for (int i = 0; i < rhs._nb; i++)
		this->_miners[i] = rhs._miners[i];
	this->_nb = rhs._nb;
	return (*this);
}

void		MiningBarge::equip(IMiningLaser *miner)
{
	if (!miner || this->_nb > 3)
		return ;
	this->_miners[this->_nb++] = miner;
}

void		MiningBarge::mine(IAsteroid *ast) const
{
	for (int i = 0; i < this->_nb; i++)
		this->_miners[i]->mine(ast);
}
