#pragma once
#include "Hero.h"

class Stack
{
private:
	Hero mData[20];
	int mCount;

public:
	Hero top();
	bool pop();
	bool push(Hero*);
	bool IsEmpty();
	bool IsFull();
};

