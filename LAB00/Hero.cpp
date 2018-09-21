#include "Hero.h"

void Hero::Fight(Hero&hero)
{
	hero.TakeDamage(mPower);
}

bool Hero::IsAlive()
{
	if (!IsAlive)
	{
		return true;
	}
	return false;
}

void Hero::TakeDamage(int amount)
{
	Hero.TakeDamage(Hero);
}