#include <iostream>

class stack
{
private:
	int values[20];
	int count;
	int *doodoo = &values[0];
public:
	int top()
	{

	}

	void pop()
	{

	}

	void push(int doodoo)
	{
		if(count < 20)
		{
			count++;
		}
	}

	bool isEmpty()
	{

	}
};


int main()
{
	stack stack;
	stack.push(20);
}


