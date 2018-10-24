#ifndef PEON_H
# define PEON_H

# include "Victim.hpp"

class Peon : public Victim
{

private:

public:

	Peon(void);
	Peon(std::string name);
	Peon(Peon const &src);
	virtual ~Peon(void);
	Peon	&operator=(Peon const &rhs);

	virtual void	getPolymorphed(void) const;

};

#endif
