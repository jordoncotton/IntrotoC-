#include "Game.h"

Hero Game::Battle(Hero&hc1, Hero&hb2)
{
	while (hc1.IsAlive() && hb2.IsAlive())
	{
		hc1.Fight(hb2);
		hb2.Fight(hc1);
		std::cout << "IronMan has" << hc1.getHealth() << "Health" << std::endl;
		std::cout << "CapTain DOODOO has" << hb2.getHealth() << "Health" << std::endl;
	}

	/*Will tell if the first hero is alive*/
	if (hc1.IsAlive())
	{
		return hc1;
	}

	/*else the herp is dead*/
	else
	{
		std::cout << "Hero is dead!" << std::endl;
	}

	/*will tell if the second hero is alive*/
	if (hb2.IsAlive())
	{
		return hb2;
	}

	else
	{
		std::cout << "Hero is dead!" << std::endl;
	}

	Hero&Fight(Hero&);
	return Hero();
}
