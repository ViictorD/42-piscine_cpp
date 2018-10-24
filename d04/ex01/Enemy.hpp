#ifndef ENEMY_H
# define ENEMY_H

#include <string>

class Enemy
{

private:

protected:

	int			_hp;
	std::string	_type;

public:

	Enemy(int hp, std::string const & type);
	Enemy(Enemy const &src);
	virtual ~Enemy(void);
	Enemy	&operator=(Enemy const &rhs);

	std::string const 	&getType() const;
	int					getHP() const;

	virtual void takeDamage(int);

};

#endif
