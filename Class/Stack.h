#pragma once
#include "Hero.h"

class stack
{
private:
	hero mData[20];
	int count;

public:
	hero top();

	bool pop();
	
	bool push(hero*);
};

#pragma once
#include <iostream>
class hero
{
private:
	int mHealth;
	int mPower;
	int count = 0;

public:
	void Fight(hero&);

};