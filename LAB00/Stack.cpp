#include "Stack.h"

Hero Stack::top()
{
	if (!IsEmpty())
		return mData[mCount];
	return Hero();
}

bool Stack::pop()
{
	if (!IsEmpty())
	{
		mCount = mCount - 1;
		return true;
	}
	return false;
}

bool Stack::push(Hero *poopoo)
{
	mData[mCount++] = *poopoo;
	return false;
}

bool Stack::IsEmpty()
{
	return mCount == 0;
	return false;
}

bool Stack::IsFull()
{
	return mCount == 20;
	return false;
}
