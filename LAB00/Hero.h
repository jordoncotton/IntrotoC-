#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>

class Hero
{
private:
	int mHealth;
	int mPower;
	const char *mName;
	
public:
	void Fight(Hero&);
	void HeroInfo(const char* mName);
	bool IsAlive();
	void TakeDamage(int);
	int GetHealth();
	int GetPower();
	void PrintInfo();
};

