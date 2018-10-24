#include <iostream>
#include "DeepCoreMiner.hpp"

DeepCoreMiner::DeepCoreMiner(void)
{

}

DeepCoreMiner::DeepCoreMiner(DeepCoreMiner const &src)
{
	*this = src;
}

DeepCoreMiner::~DeepCoreMiner(void)
{

}

DeepCoreMiner	&DeepCoreMiner::operator=(DeepCoreMiner const &rhs)
{
	(void)rhs;
	return (*this);
}

void			DeepCoreMiner::mine(IAsteroid *ast)
{
	std::cout << "* mining deep ... got " <<  ast->beMined(this) << " ! *" << std::endl;
}

