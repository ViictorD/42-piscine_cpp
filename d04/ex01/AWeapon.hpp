#ifndef A_WEAPON_H
# define A_WEAPON_H

#include <string>

class AWeapon
{

private:

	std::string	_name;
	int			_apcost;
	int			_damage;

public:

	AWeapon(std::string const &name, int apcost, int damage);
	AWeapon(AWeapon const &src);
	virtual ~AWeapon(void);
	AWeapon	&operator=(AWeapon const &rhs);

	std::string const		&getName() const;
	int						getAPCost() const;
	int						getDamage() const;
	virtual void 			attack() const = 0;

};

#endif
