#ifndef ASSAULT_TERMINATOR_H
# define ASSAULT_TERMINATOR_H

# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{

private:

public:

	AssaultTerminator(void);
	AssaultTerminator(AssaultTerminator const &src);
	~AssaultTerminator(void);
	AssaultTerminator	&operator=(AssaultTerminator const &rhs);

	AssaultTerminator	*clone() const;
	void				battleCry() const;
	void				rangedAttack() const;
	void				meleeAttack() const;

};

#endif
