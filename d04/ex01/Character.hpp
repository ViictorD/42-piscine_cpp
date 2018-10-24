#ifndef CHARACTER_H
# define CHARACTER_H

# include <ostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{

private:

	std::string		_name;
	int				_ap;
	AWeapon			*_weapon;

public:

	Character(std::string const & name);
	Character(Character const &src);
	~Character(void);
	Character	&operator=(Character const &rhs);

	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	std::string const	&getName() const;
	AWeapon const		*getWeapon() const;
	int					getAp() const;

};

std::ostream	&operator<<(std::ostream &lhs, Character const &rhs);

#endif
