#include <iostream>

class stack
{
private:
	int values[20];
	int count = 0;
	int* doodoo = &values[0];
public:
	int top(int count)
	{
		values[count];
		count++;
		int top = values[count - 1];
		return count;
	}

	void pop()
	{
		
	}

	void push(int doodoo)
	{
		if (doodoo >= 0 && doodoo <= 9)
		{
			if (count < 20)
			{
				values[count] = doodoo;
				count++;
			}
		}
	}

	bool isEmpty(bool isEmpty)
	{
		if (isEmpty == false && count = 0)
		{

		}
	}
};


int main()
{
	stack stack;
	stack.push(20);
}

//for (int &i : data)
//i = -1
