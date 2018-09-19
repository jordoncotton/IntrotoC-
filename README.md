# IntrotoC-
#include <iostream>



class stack

{

private:

	char sign = '+';

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

		if (doodoo != sign)

		{ 

			std::cout << sign << '+' << std::endl;

		}

		else

		{

			std::cout << sign;

		}

	}



	bool isEmpty(bool isEmpty)

	{

		while (*doodoo != '\0')

		{

			if (isEmpty == false && *doodoo == count)

				return true;

			else

				isEmpty++;

		}

		return false;

	}	

};





int main()

{

	stack stack;

	stack.push(20);

}



//for (int &i : data)

//i = -1
