#ifndef VICTIM_H
# define VICTIM_H

# include <ostream>
# include <string>

class Victim
{

private:


protected:

	std::string		_name;

public:

	Victim(void);
	Victim(std::string name);
	Victim(Victim const &src);
	virtual ~Victim(void);
	Victim			&operator=(Victim const &rhs);
	
	std::string		getName(void) const;
	virtual void			getPolymorphed(void) const;

};

std::ostream		&operator<<(std::ostream &lhs, Victim const &rhs);

#endif
