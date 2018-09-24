#include "Hero.h"

void Hero::Fight(Hero&hero)
{
	hero.TakeDamage(mPower);
}

bool Hero::IsAlive()
{
	if (mHealth > 0)
	{
		return true;
	}
	return false;
	
}

void Hero::TakeDamage(int amount)
{
	mHealth -= amount;
}

char Hero::Name()
{
	mName = (char*) "Black DOODOO";
	return *mName;
}