#include <iostream>

int main()

{
	char name[] = "Jordon";
	name[0];
	for (int i = 0; i < 6; i++)
	{
		std::cout << name[i] << std::endl;
	}
	system("pause");
	
	char butter[] = "AIEUS";
	int count = 0;
	while (butter[count] != '\0')
	{
		count++;
	}
	std::cout << std::endl;

	char stringOne[] = "bobby";
	char stringTwo[] = "bodby";
	int strlen1 = 0;
	int strlen2 = 0;
	while (stringOne[strlen1] != '\0')
	{
		strlen1++;
	}
	while (stringTwo[strlen2] != '\0')
	{
		strlen2++;
	}
	std::cout << std::endl;

	for (int i = 0; i < strlen1; i++)
	{
		for (int i = 0; i < strlen2; i++)
		{
			if (stringOne[i] == stringTwo[i])
			{
				continue;
			}
			else
			{
				strlen1 = false;
				break;
			}
		}
	}

	//Homework

	//1
	//Create a program that asks for the user’s first and last name and store it in one string.It
	//must be able to handle spaces in the input.

	char stuff[255];
	std::cin.getline(stuff, 255);

	//2
	//Output the name in reverse order
	for(int )

	std::cout << "reverse order" << std::endl;
	std::cin.getline(stuff, 255, )
}


	