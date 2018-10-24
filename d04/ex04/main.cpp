#include <iostream>
#include "AsteroKreog.hpp"
#include "KoalaSteroid.hpp"
#include "StripMiner.hpp"
#include "DeepCoreMiner.hpp"
#include "MiningBarge.hpp"

int		main(void)
{
	MiningBarge		barge;
	IAsteroid		*ast1 = new AsteroKreog();
	IAsteroid		*ast2 = new KoalaSteroid();
	AsteroKreog		ast3;
	KoalaSteroid	ast4;


	barge.equip(new DeepCoreMiner());
	barge.equip(new StripMiner());

	barge.mine(ast1);
	std::cout << std::endl;
	barge.mine(ast2);
	std::cout << std::endl << std::endl;

	barge.equip(new StripMiner());

	barge.mine(&ast3);
	std::cout << std::endl;
	barge.mine(&ast4);
	std::cout << std::endl;

	barge.equip(new DeepCoreMiner());
	barge.equip(new DeepCoreMiner());	// plus de 4

	barge.mine(&ast4);

	return (0);
}