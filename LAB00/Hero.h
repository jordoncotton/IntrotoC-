#pragma once
#include <iostream>

class Hero
{
private:
	int mHealth;
	int mPower;
	char *mName;

public:
	void Fight(Hero&);
	char Name();
	bool IsAlive();
	void TakeDamage(int);
};

