#ifndef KOALA_STEROID_H
# define KOALA_STEROID_H

# include "IAsteroid.hpp"

class KoalaSteroid : public IAsteroid
{

private:

public:

	KoalaSteroid(void);
	KoalaSteroid(KoalaSteroid const &src);
	~KoalaSteroid(void);
	KoalaSteroid	&operator=(KoalaSteroid const &rhs);

	virtual std::string beMined(DeepCoreMiner *miner) const;
	virtual std::string beMined(StripMiner *miner) const;
	std::string getName() const;

};

#endif
