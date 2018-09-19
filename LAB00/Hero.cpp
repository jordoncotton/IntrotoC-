#include "Hero.h"

void Hero::Fight(Hero&hero)
{
	hero.TakeDamage(mPower);
}

bool Hero::IsAlive()
{
	return false;
}

void Hero::TakeDamage(int)
{
}
