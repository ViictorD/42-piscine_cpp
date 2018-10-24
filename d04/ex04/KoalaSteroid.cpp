#include <iostream>
#include "KoalaSteroid.hpp"

KoalaSteroid::KoalaSteroid(void)
{

}

KoalaSteroid::KoalaSteroid(KoalaSteroid const &src)
{
	*this = src;
}

KoalaSteroid::~KoalaSteroid(void)
{

}

KoalaSteroid	&KoalaSteroid::operator=(KoalaSteroid const &rhs)
{
	(void)rhs;
	return(*this);
}

std::string KoalaSteroid::beMined(DeepCoreMiner *miner) const
{
	(void)miner;
	return ("Zazium");
}

std::string KoalaSteroid::beMined(StripMiner *miner) const
{
	(void)miner;
	return ("Krpite");
}

std::string KoalaSteroid::getName() const
{
	return ("KoalaSteroid");
}
