#ifndef IMINING_LASER_H
# define IMINING_LASER_H

#include "IAsteroid.hpp"

class IAsteroid;

class IMiningLaser
{

public:
	virtual ~IMiningLaser() {}
	virtual void mine(IAsteroid*) = 0;

};

#endif
