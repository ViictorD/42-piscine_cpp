#ifndef Goblin_H
# define Goblin_H

# include "Victim.hpp"

class Goblin : public Victim
{

private:

public:

	Goblin(void);
	Goblin(std::string name);
	Goblin(Goblin const &src);
	virtual ~Goblin(void);
	Goblin	&operator=(Goblin const &rhs);

	virtual void	getPolymorphed(void) const;

};

#endif
