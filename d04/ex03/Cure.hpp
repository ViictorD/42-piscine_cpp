#ifndef CURE_H
# define CURE_H

#include "AMateria.hpp"

class Cure : public AMateria
{

private:


public:

	Cure(void);
	Cure(Cure const &src);
	virtual ~Cure(void);
	Cure	&operator=(Cure const &rhs);

	virtual AMateria* clone() const;
	virtual void use(ICharacter &target);

};

#endif
