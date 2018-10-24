#ifndef PLASMA_RIFLE_H
# define PLASMA_RIFLE_H

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{

private:

public:

	PlasmaRifle(void);
	PlasmaRifle(PlasmaRifle const &src);
	virtual ~PlasmaRifle(void);
	PlasmaRifle	&operator=(PlasmaRifle const &rhs);

	virtual void 			attack() const;

};

#endif
