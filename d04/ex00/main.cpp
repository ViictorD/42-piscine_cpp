#include <iostream>
#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Goblin.hpp"

int main()
{
	Sorcerer robert("Robert" ,"the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Goblin tom("Tom");
	std::cout << robert << jim << joe << tom;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(tom);

	return 0;
}