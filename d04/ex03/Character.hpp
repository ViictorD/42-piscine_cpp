#ifndef CHARACTER_H
# define CHARACTER_H

# include "AMateria.hpp"

class Character : public ICharacter
{

private:

	std::string		_name;
	int				_nb;
	AMateria		*_materia[4];

	void			cleanMaterial();

public:

	Character(std::string name);
	Character(Character const &src);
	~Character(void);
	Character	&operator=(Character const &rhs);

	std::string const	&getName() const;
	void				equip(AMateria* m);
	void				unequip(int idx);
	void				use(int idx, ICharacter& target);

};

#endif
