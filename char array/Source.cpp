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
}
	