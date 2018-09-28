#pragma once
#include "Hero.h"
/*This class will allow me to pop a player off the stack to win lose or fight, 
put a hero on top as a winner or loser, push a hero to fight, win or lose and
count the random numbers of health and power in the hero.h.*/
class Stack
{
private:
	Hero mData[20];
	int mCount;

public:
	Stack()
	{
		mCount = 0;
	}
	Hero& top();
	bool pop();
	bool push(Hero*);
	bool IsEmpty();
	bool IsFull();
};

//class Point2D
//{
//public:
//	int x;
//	int y;
//	Point2D operator + (Point2D & other)
//	{
//		Point2D temp;
//		temp.x = +other.x;
//		temp.y = +other.y;
//		return temp;
//	}
//};