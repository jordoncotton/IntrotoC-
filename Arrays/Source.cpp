#include <iostream>

int main()
{

	char myFirstName[] = { 'M', 'A', 'T', 'T', 'H', 'E', 'W' };
	int myFirstNumber[7];
	for (int i = 0; i < 7; i++)

	{
		myFirstNumber[i] = (int)myFirstName[i];
		std::cout << myFirstName[i] << std::endl;
	}

	//{
	//	int inputs[5];
	//	for (int i = 0; i < 5; i++)
	//	{
	//		int myArray[5] = { 12, 21, 3, 7, 13 };
	//	}
	//	//int number[5];
	//	//int number2[5];
	//	//int myArray[5];
	//	std::cout << myArray[5] << std::endl;
	//}

	//2, 4, 6, 8, 10, 12, 14, 16, 18
	{
		int myArray[10];
		int count = 0;
		for (int i = 0; i < 20; i = i + 2)
		{
			myArray[count++] = i;
		}
	}
	system("pause");

	//1, 2, 3, 4, 5, 6, 7, 8, 9
	{
		int myArray[3][3] = { { 1, 2, 3 },{ 4, 5, 6 },{ 7, 8, 9 } };
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				std::cout << myArray[i][j] << std::endl;
			}

		}
	}

	//Homework	
	//1

	/*int numbers[10] = { 0, 0, 1, 0, 0, 1, 0, 0, 1, 1 }; (valid)
	int matrix[5] = { 1, 2, 3, 4, 5, 6, 7 }; (valid)
	double radii[10] = (3.2, 4.7}; Should not have decimals
	int table[7] = { 2, , , 27, , 45, 39 }; Not multiples of 7
	char codes[] = { 'A', 'X', '1', '2', 's' }; (valid)
	int blanks[]; (valid)
	int collection[-20]; There is no declaration for negative
	int hours[3] = 8, 12, 16;*/ //(valid)

	//2
	{
		int values[] = { 2, 6, 10, 14 };
		{
			std::cout << values[2] << std::endl; //10
			std::cout << ++values[0] << std::endl; //3
			std::cout << values[1]++ << std::endl; //6
			int x = 2;
			std::cout << values[++x] << std::endl; //14
			std::cout << values[4] << std::endl; //uninitialize number
		}
	}

	//3

	int data[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int i = 0; i < 10; ++i);

	//4
	{
		int myNum[5] = { 3, 6, 9, 12, 15 };
		for (int i = 4; i >= 0; i--)
		{
			std::cout << myNum[i] << std::endl;
		}
	}

	{
		//5

		int myArray[10];
		{
			std::cout << "Insert 10 numbers" << std::endl;
		}
		for (int j = 0; j < 10; j++)
		{
			std::cin >> myArray[j];
		}
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				if (myArray[i] < myArray[j])
				{
					int temp = myArray[j];
					myArray[j] = myArray[i];
					myArray[i] = temp;
				}

			}
		}
		std::cout << "largest" << myArray[0] << std::endl;
		std::cout << "smallest" << myArray[9] << std::endl;
		system("pause");
	}

	//6
	{
		int green = 1;
		int moreNum[3][3];
		for (int i = 0; i < 3; i++)
		{
			for (int x = 0; x < 3; x++)
			{
				moreNum[i][x] = green;
				green++;
			}
		}
		for (int i = 0; i < 3; i++)
		{
			std::cout << moreNum[0][i];
		}
		std::cout << std::endl;
		for (int i = 0; i < 3; i++)
		{
			std::cout << moreNum[1][i];
		}
		std::cout << std::endl;
		for (int i = 0; i < 3; i++)
		{
			std::cout << moreNum[2][i];
		}
		std::cout << std::endl;
		system("pause");
	}

	//7
	{
		int days[29][5];
		int row = 0;
		int column;
		int sum;

		std::cout << "Enter 9 elements of 29*5" << std::endl;

		for (int i = 0; i < row; i++)
		{
			for (int q = 0; q < 29; q++)
			{
				std::cin >> days[i][q];
					days;
			}
		}
		for (int i = 0; i < column; i++)
		{
			sum = 0;
			for (int q = 0; q < 5; q++)
			{
				std::cin >> days[q][i];
				days;
			}

		}

	}

	//8
	{
		{
			int Health[5] = { 100, 100, 100, 100, 100 }; 
			int Character = 0; 
			int TimesAttacked = 0; 

			while (TimesAttacked != 5) {
				std::cout << "Select a character to take damage. Enter a number between 0 and 4: " << std::endl;
				std::cin >> Character;
				TimesAttacked++;

				Health[Character] = Health[Character] - rand() % 100 + 1; 

				if (Health[Character] <= 0) {
					std::cout << "Could not attack, character is dead" << std::endl;
				}
			}

			for (int i = 0; i < 5; i++) {
				std::cout << "Parties health pools are: " << Health[i] << std::endl;
			}
			system("pause");
			return 0;
		}

	}
}