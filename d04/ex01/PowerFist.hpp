#ifndef POWER_FIST_H
# define POWER_FIST_H

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{

private:

public:

	PowerFist(void);
	PowerFist(PowerFist const &src);
	virtual ~PowerFist(void);
	PowerFist	&operator=(PowerFist const &rhs);

	virtual void 			attack() const;

};

#endif
