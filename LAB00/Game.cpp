#include "Game.h"

Hero Game::Battle(Hero&hc1, Hero&hb2)
{
	while (hc1.IsAlive() && hb2.IsAlive())
	{
		hc1.Fight(hb2);
		hb2.Fight(hc1);
		std::cout << "IronMan has" << hc1.getHealth() << "Health" << std::endl;
		std::cout << "Black DOODOO has" << hb2.getHealth() << "Health" << std::endl;
	}

	if (hc1.IsAlive())
	{
		return hc1;
	}

	else
	{
		std::cout << "Hero is dead!" << std::endl;
	}

	if (hb2.IsAlive())
	{
		return hb2;
	}

	Hero&Fight(Hero&);
	return Hero();
}
