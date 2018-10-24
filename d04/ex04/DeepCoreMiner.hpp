#ifndef DEEP_CORE_MINER_H
# define DEEP_CORE_MINER_H

#include "IAsteroid.hpp"
#include "IMiningLaser.hpp"

class IAsteroid;

class DeepCoreMiner : public IMiningLaser
{

private:

public:

	DeepCoreMiner(void);
	DeepCoreMiner(DeepCoreMiner const &src);
	virtual ~DeepCoreMiner(void);
	DeepCoreMiner	&operator=(DeepCoreMiner const &rhs);

	void			mine(IAsteroid *ast);

};

#endif
