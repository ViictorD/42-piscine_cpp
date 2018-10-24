#ifndef MATERIA_SOURCE_H
# define MATERIA_SOURCE_H

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{

private:

	int			_nb;
	AMateria	*_item[4];

public:

	MateriaSource(void);
	MateriaSource(MateriaSource const &src);
	~MateriaSource(void);
	MateriaSource	&operator=(MateriaSource const &rhs);

	virtual void		learnMateria(AMateria*);
	virtual AMateria	*createMateria(std::string const & type);

};

#endif
