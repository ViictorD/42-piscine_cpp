#ifndef ASTEROKREOG_H
# define ASTEROKREOG_H

# include "IAsteroid.hpp"

class AsteroKreog : public IAsteroid
{

private:

public:

	AsteroKreog(void);
	AsteroKreog(AsteroKreog const &src);
	~AsteroKreog(void);
	AsteroKreog	&operator=(AsteroKreog const &rhs);

	virtual std::string beMined(DeepCoreMiner *miner) const;
	virtual std::string beMined(StripMiner *miner) const;
	std::string getName() const;

};

#endif
