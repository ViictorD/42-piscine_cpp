#ifndef MINING_BARGE_H
# define MINING_BARGE_H

# include "IMiningLaser.hpp"
# include "IAsteroid.hpp"

class MiningBarge
{

private:

	int				_nb;
	IMiningLaser	*_miners[4];

public:

	MiningBarge(void);
	MiningBarge(MiningBarge const &src);
	~MiningBarge(void);
	MiningBarge	&operator=(MiningBarge const &rhs);

	void		equip(IMiningLaser *miner);
	void		mine(IAsteroid *ast) const;

};

#endif
