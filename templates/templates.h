#pragma once
#include <iostream>

template <typename Jordon>
Jordon Min(Jordon a, Jordon b)
{
	if (a < b)	
	{
		return a;
	}
	else
	{
		return b;
	}
}

template <typename TFTF>
TFTF Max(TFTF a, TFTF b)
{
	if (b > a)
	{
		return b;
	}
	else
	{
		return a;
	}
}

template <typename MADMAD>
MADMAD Clamp(MADMAD a, MADMAD b, MADMAD c)
{
	if (c < a)
	{
		return a;
	}
	if (c > b)
	{
		return b;
	}
	if (c > a && c < b)
	{
		return c;
	}
}