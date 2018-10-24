#ifndef TACTICAL_MARINE_H
# define TACTICAL_MARINE_H

# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{

private:

public:

	TacticalMarine(void);
	TacticalMarine(TacticalMarine const &src);
	~TacticalMarine(void);
	TacticalMarine	&operator=(TacticalMarine const &rhs);

	TacticalMarine	*clone() const;
	void			battleCry() const;
	void			rangedAttack() const;
	void			meleeAttack() const;

};

#endif
