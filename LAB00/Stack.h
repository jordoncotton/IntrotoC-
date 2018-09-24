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

class Point2D
{
public:
	int x;
	int y;
	Point2D operator + (Point2D & other)
	{
		Point2D temp;
		temp.x = +other.x;
		temp.y = +other.y;
		return temp;
	}
};