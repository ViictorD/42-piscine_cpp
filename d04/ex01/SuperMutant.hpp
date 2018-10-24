#ifndef SUPER_MUTANT_H
# define SUPER_MUTANT_H

# include "Enemy.hpp"

class SuperMutant : public Enemy
{

private:

public:

	SuperMutant(void);
	SuperMutant(SuperMutant const &src);
	virtual ~SuperMutant(void);
	SuperMutant	&operator=(SuperMutant const &rhs);

	virtual void takeDamage(int nb);

};

#endif
