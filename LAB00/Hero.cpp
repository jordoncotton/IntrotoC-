#include "Hero.h"

/*Hero will fight and takedamage with power doing the attack
and givng the hero strength*/
void Hero::Fight(Hero&hero)
{
	hero.TakeDamage(mPower);
}

/*If the hero is alive there health will be
greater than zero returning true*/
bool Hero::IsAlive()
{
	if (mHealth > 0)
	{
		return true;
	}
	return false;
	
}

/*The hero will take a certain amount of 
damage and this is where random number come in*/
void Hero::TakeDamage(int amount)
{
	mHealth -= amount;
}

/*The hero will get there health also where a random
number will generate returning the health of the hero after the 
attacks*/
int Hero::getHealth()
{
	return mHealth;
}

/*Where the hero will get there power to attack and have strength
and return the power of the hero*/
int Hero::getPower(int Strength)
{
	return mPower;
}

char Hero::Name()
{
	mName = (char*) "Iron man";
	return *mName;
}