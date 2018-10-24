#ifndef RAD_SCORPION_H
# define RAD_SCORPION_H

#include "Enemy.hpp"

class RadScorpion : public Enemy
{

private:

public:

	RadScorpion(void);
	RadScorpion(RadScorpion const &src);
	virtual ~RadScorpion(void);
	RadScorpion	&operator=(RadScorpion const &rhs);

	virtual void takeDamage(int nb);

};

#endif
