#include "Hero.h"

void Hero::Fight(Hero&hero)
{
	hero.TakeDamage(mPower);
}

bool Hero::IsAlive()
{
	while (IsAlive != '\0')
	{
		if (IsAlive == &mPower)
		{
			return true;
		}
		return false;
	}
}

void Hero::TakeDamage(int amount)
{
	Hero*TakeDamage(Hero);
}