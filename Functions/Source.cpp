#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include "Source.h"


int print(std::string input)

{

	std::cout << input;

	return 0;

}





bool IsmultipleofThree(int value)

{

	return value % 3 == 0;

}



void PrintValuesTo10()

{

	for (int i = 0; i <= 10; i++)

	{

		std::cout << i;

	}

	std::cout << std::endl;

	system("pause");

}



void PrintValuesBetween(int low, int high)

{

	for (int i = low + 1; i < high; high++)

	{

		std::cout << i;

	}

	std::cout << std::endl;

	system("pause");

}



//Create a function that will take in a array and the length of the array

//The function will return the sum of all the values in the array

int ArraySum(int arr[], int size)

{

	int sum = 0;

	for (int i = 0; i < size; i++)

	{

		sum = arr[i] + sum;

	}

}



//create a function that will reverse the values in the array passed in.

//you will neeed to pass in a array and the size of the array as arguments.

//cannot use a second array

void RevArray(int arr[], int size)

{

	int rev;

	for (int i = 0; i < size; i++)

	{

		rev = arr[i] + rev;

	}



}



int main()

{

	int around[] = { 1, 2, 3, 4 };

	ArraySum(around, 4);



	int backwards[] = { 4, 3, 2, 1 };

	RevArray(backwards, 4);

}



//Homework

//5
//Write a function named CoinToss that simulates the tossing of a coin.

int coinFlip();
const int HEADS = 1;
const int TAILS = 2;
int main()
{
	int tosses, count;	
	count = 0;
	std::cout << "How many tosses should I make?" << std::endl;
	std::cin >> tosses;

	while (count <= tosses)
	{
		coinFlip();
		count++;
	}

	int flip = (rand() % 2) + 1;	
	std::cout << flip << std::endl;
	if (flip == HEADS)
		std::cout << "Heads!.\n";  
	else if (flip == TAILS)
		std::cout << "Tails!.\n";  
	return flip;

	system("pause");
	return 0;
} 

//10

/*Write a function that takes as its parameter an array called input_array of integers,
the array size and a second array of the same size called output_array.
Fill each element in the second array to be the value in the same index of input_array 
multiplied by its index in the array.*/


void printarray(int arg[], int length) {
	for (int n = 0; n < length; ++n)
		std::cout << arg[n] << ' ';
	std::cout << '\n';
}

int main()
{
	int integer_array[] = { 10, 15, 7, 4, 13, 19, 8 };
	int output_array[] = { 0, 15, 14, 12, 52, 95, 48 };
	printarray(integer_array, 3);
	printarray(output_array, 5);
}

int main()
{
	int (MultiplyByIndex);
	int integer_array[7] = { 10, 15, 7, 4, 13, 19, 8 };  
	int output_array[7] = {};   
	MultiplyByIndex(integer_array, output_array, 7); 
	//output_array should be {0, 15, 14, 12, 52, 95, 48};    
	return 0;
} 


//15 
//Write a function that calculates and then returns x to the power of y.

/* Function to calculate x raised to the power y */
int power(int x, unsigned int y)
{
	if (y == 0)
		return 1;
	else if (y % 2 == 0)
		return power(x, y / 2)*power(x, y / 2);
	else
		return x * power(x, y / 2)*power(x, y / 2);
}

/* Program to test function power */
int main()
{
	int x = 2;
	unsigned int y = 3;

	printf("%d", power(x, y));
	return 0;
}

//16
/*Write a function that takes in an array of integers, 
and the size of the array.The function should print out the “look and say” 
sequence for the array.The look and say sequence works by printing out how many
of the same number there are in a row followed by that number.*/






//17

int getRandomNumber(int min, int max)
{
	return min + rand() % max;
}

std::string strChoice(int choice)
{
	switch (choice)
	{
	case 1: return "Rock";
	case 2: return "Paper";
	case 3: return "Scissors";
	default: return "Invalid Choice";
	}
}

void playGameSingle()
{
	int pChoice;
	int cChoice;

	std::cout << "Choose Rock = 1, Paper = 2 and Scissors = 3: ";
	std::cin >> pChoice;

	cChoice = getRandomNumber(1, 3);

	std::cout << "\nYou chose: " << strChoice(pChoice);
	std::cout << "\nComputer chose: " << strChoice(cChoice) << std::endl;

	switch (pChoice)
	{
	case 1:
		switch (cChoice)
		{
		case 1: std::cout << "Draw";
		case 2: std::cout << "You Loose";
		case 3: std::cout << "You Win";
		}
		break;
	case 2:
		switch (cChoice)
		{
		case 1: std::cout << "You Win";
		case 2: std::cout << "Draw";
		case 3: std::cout << "You Loose";
		}
		break;
	case 3:
		switch (cChoice)
		{
		case 1: std::cout << "You Loose";
		case 2: std::cout << "You Win";
		case 3: std::cout << "Draw";
		}
		break;
	}
	std::cout << std::endl;
}

int main()
{
	char playAgain;
	do
	{
		playGameSingle();
		std::cout << "\nPlay again? (Y/N): ";
		std::cin >> playAgain;
	} while (playAgain == 'Y' || playAgain == 'y');
}﻿


//recursive Functions
 //1

/*Using recursion write a function that outputs
the Fibonacci sequence. 1, 1, 2, 3, 5, 8, 13, 21...*/;

int fibonacci(int n)
{
	if (n <= 0)
	{
		return 0;
		//    cout<<1<<" ";
	}
	else if (n == 1)
	{
		return 1;
		//    cout<<1<<" ";
	}
	else
	{
		return (fibonacci(n - 1) + fibonacci(n - 2));
		//   cout<<fibonacci(n-1)+fibonacci(n-2)<<" ";
	}
}
int main()
{
	int n;
	std::cin >> n;
	for (int x = 0; x < n; x++)
		std::cout << fibonacci(x) << " ";
	std::cout << std::endl;

	return 0;
}

//2

/*Using recursion write a function that returns a number to the power of another 
number e.g. 2 to the power of(2 ^ 5) is 32’*/

double  power(double, int);// it should be double because you also need to handle negative powers which may cause fractions

int main()
{
	std::cout << "please enter the number to be powered up\n";
	double number;
	std::cin >> number;
	std::cout << "please enter the number to be powered up\n";
	int pow;
	std::cin >> pow;
	double result = power(number, pow);
	std::cout << "answer is " << result << std::endl;
}

double power(double x, int n)
{

	if (n == 0)
		return 1;
	if (n >= 1)
		
		if (n < 0)
			return x * power(x, n - 1);
	return 1 / x * power(x, n + 1);
}