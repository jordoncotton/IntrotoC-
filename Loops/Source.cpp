#include <iostream>;

int main()
{
	// 1>) part A
	{
		for (int i = 100; i >= 0; i--)
		{
			std::cout << i << std::endl;
		}

	}

	// 1.) part B
	{
		for (int i = 99; i >= 0; i--)
		{
			std::cout << i << std::endl;
		}

	}

	// 1.) part C
	{
		for (int i = 100; i >= 1; i--)
		{
			std::cout << i << std::endl;
		}

	}

	//1.) part D
	{
		for (int i = 100; i >= 1; i -= 2)
		{
			std::cout << i << std::endl;
		}

	}

	//2.) 
	for (int i = 0; i <= 100; i++)
		if (i % 3 == 0 && i % 5 == 0)
		{
			std::cout << "Fizz Buzz" << std::endl;

		}
		else if (i % 3 == 0)
		{
			std::cout << "Fizz" << std::endl;

		}
		else if (i % 5 == 0)
		{
			std::cout << "Buzz" << std::endl;
		}
		else
		{
			std::cout << i << std::endl;
		}

	//3)
	{
		{
			int x = 0;
			int y = 0;

			while (y <= 1000)
			{
				if (y % 3 == 0 && y % 5 == 0)
				{
					x += y;
				}
				y++;
			}
			std::cout << x << std::endl;
		}
		break;

	}

	system("pause");
}