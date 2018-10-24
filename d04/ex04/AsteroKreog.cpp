#include <iostream>
#include "AsteroKreog.hpp"

AsteroKreog::AsteroKreog(void)
{

}

AsteroKreog::AsteroKreog(AsteroKreog const &src)
{
	*this = src;
}

AsteroKreog::~AsteroKreog(void)
{

}

AsteroKreog	&AsteroKreog::operator=(AsteroKreog const &rhs)
{
	(void)rhs;
	return (*this);
}

std::string AsteroKreog::beMined(DeepCoreMiner *miner) const
{
	(void)miner;
	return ("Thorite");

}

std::string AsteroKreog::beMined(StripMiner *miner) const
{
	(void)miner;
	return ("Flavium");
}

std::string AsteroKreog::getName() const
{
	return ("AsteroKreog");
}
