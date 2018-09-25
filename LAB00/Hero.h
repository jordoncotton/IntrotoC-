#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>

class Hero
{
private:
	int mHealth = 100;
	int mPower = rand() % 100 + 1;
	char *mName;
	
public:
	void Fight(Hero&);
	char Name();
	bool IsAlive();
	void TakeDamage(int);
	int getHealth();
	int getPower(int Strength);
	
};

