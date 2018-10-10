#include <iostream>
/*Create a template function that will return the sum of two values passed in.
Test Cases must include the use of the following types,
integer, floating point, and a custom data type.*/

template <typename TwoValues>
TwoValues sum(TwoValues a, TwoValues b)
{
	if (a + b)
	{
		return b;
	}
	else 
	{
		return a;
	}
}

class sum
{
public:
	sum();
	int sum1 = 100;
};

sum::sum()
{
}

int main()
{
	sum(32, 12);
	sum(34.4f, 19.8f);

}


