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

	return 0;

	int inputs[5];
	for (int i = 0; i < 5; i++)
		int myArray[5] = { 12, 21, 3, 7, 13 };
	int number[5];
	int number2[5];
	int myArray[5];
	{
		std::cout << myArray[5] << std::endl;
	}

	//2, 4, 6, 8, 10, 12, 14, 16, 18
	int myArray[10];
	int count = 0;
	for (int i = 0; i < 20; i = i + 2)
	{
		myArray[count++] = i;
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

		int values[] = { 2, 6, 10, 14 };
		std::cout << values[2]; /*10*/
		std::cout << ++values[0]; /*3*/
		std::cout << values[1]++; /*6*/
							  //x = 2 /*undefined*/
							  //std::cout << values[++x] = /*undefined*/
		std::cout << values[4]; /*undefined number*/

		//3

		int data[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
		for (int i = 0; i < 10; ++i);

		//4

		int myNum[5] = { 3, 6, 9, 12, 15 };
		for (int i = 4; i >= 0; i--)
		{
			std::cout << myNum[5];
		}

		//5

		int myArray[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				std::cout << "Insert 10 numbers" << std::endl;
				std::cin >> myArray[10];
			}
			int largest = myArray[100];
			int smallest = myArray[10];

			for (int j = 0; j < 10; j++)
			{
				if (myArray[10] > myArray[10])
					largest = myArray[j];
				{
					std::cout << myArray[10];
				}
				if (myArray[10] < myArray[10])
					smallest = myArray[i];
				
			}return 0;
		}
		


		//6
		{
			int moreNum[9][4] = { { 1, 2, 3},{4, 5, 6},{7, 8, 9} };
			for (int i = 0; i < 9; i++)
			{
				for (int x = 0; x < 4; x++)
				{
					std::cout << moreNum[i][x] << std::endl;
				}
			}
		}
		

}