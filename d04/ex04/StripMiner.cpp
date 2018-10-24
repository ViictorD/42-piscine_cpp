#include <iostream>
#include "StripMiner.hpp"

StripMiner::StripMiner(void)
{

}

StripMiner::StripMiner(StripMiner const &src)
{
	*this = src;
}

StripMiner::~StripMiner(void)
{

}

StripMiner	&StripMiner::operator=(StripMiner const &rhs)
{
	(void)rhs;
	return (*this);
}

void			StripMiner::mine(IAsteroid *ast)
{
	std::cout << "* strip mining ... got " << ast->beMined(this) << " ! *" << std::endl;
}
