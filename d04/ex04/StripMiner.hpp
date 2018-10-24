#ifndef STRIP_MINER_H
# define STRIP_MINER_H

#include "IMiningLaser.hpp"

class IAsteroid;

class StripMiner : public IMiningLaser
{

private:

public:

	StripMiner(void);
	StripMiner(StripMiner const &src);
	~StripMiner(void);
	StripMiner	&operator=(StripMiner const &rhs);

	void			mine(IAsteroid *ast);

};

#endif
