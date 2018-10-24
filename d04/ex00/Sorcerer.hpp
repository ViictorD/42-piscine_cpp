#ifndef SORCERER_H
# define SORCERER_H

# include <ostream>
# include <string>
# include "Victim.hpp"

class Sorcerer
{

private:

	std::string		_name;
	std::string		_title;

	Sorcerer(void);

public:

	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const &src);
	~Sorcerer(void);
	Sorcerer	&operator=(Sorcerer const &rhs);
	std::string	getName(void) const;
	std::string	getTitle(void) const;
	void 		polymorph(Victim const &v);

};

std::ostream		&operator<<(std::ostream &lhs, Sorcerer const &rhs);

#endif
