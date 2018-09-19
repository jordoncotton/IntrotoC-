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