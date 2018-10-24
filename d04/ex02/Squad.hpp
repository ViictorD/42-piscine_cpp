#ifndef SQUAD_H
# define SQUAD_H

#include "ISquad.hpp"

class Squad : public ISquad
{

private:

	ISpaceMarine	*_squad[16];
	int				_nb;

public:

	Squad(void);
	Squad(Squad const &src);
	~Squad(void);
	Squad	&operator=(Squad const &rhs);

	virtual int				getCount() const;
	virtual ISpaceMarine*	getUnit(int) const;
	virtual int				push(ISpaceMarine*);

};

#endif
