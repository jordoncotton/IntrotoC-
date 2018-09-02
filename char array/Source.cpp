#include <iostream>
#include <cstring>
#include <cctype>

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

	for(int i = 0; i < 255; i++)

	std::cout << "reverse order" << std::endl;
	std::cin.getline(stuff, 255);

	int n, reversedNumber = 0, remainder;

	std::cout << "Enter an integer: ";
	std::cin >> n;

	while (n != 0)
	{
		remainder = n % 10;
		reversedNumber = reversedNumber * 10 + remainder;
		n /= 10;
	}

	std::cout << "Reversed Number = " << reversedNumber;

	return 0;

	//3
	//Modify the program to take in 5 names and print them out in reverse order too.You will need to us a 2D character array for this.

	//4
	//Research and find out what character code causes your computer to beep
	char code; std::cout << '\a';

	//5
	{
		char *password;
		int length; 
		int numCharacters; 
		bool testPass(char[]);
	
		std::cout << "Please enter how many characters you would like your\npassword to be.";
		std::cout << " Your password must be at least 6 characters long." << std::endl;
		std::cin >> numCharacters;

		while (numCharacters < 6)
		{
			std::cout << "Please enter a password length of at least 6 characters." << std::endl;
			std::cin >> numCharacters;
		}
		password = new char[numCharacters + 1]; 

		std::cout << "Enter a password that contains at least one uppercase letter, ";
		std::cout << "one\nlowercase letter, and at least one digit." << std::endl;

		std::cin >> password;
		length = strlen(password);

		while (length != numCharacters)
		{
		std::cout << "Your password is not the size you requested. ";
		std::cout << "Please re-enter your password." << std::endl;
		std::cin >> password;
			length = strlen(password);
		}

		if (testPass(password))
			std::cout << "Your password is valid." << std::endl;
		else
		{
			std::cout << "Your password is not valid. ";
			std::cout << "Please refer to the above warning message." << std::endl;
		}

		delete[] password;
		return 0;
	}
	bool testPass(char pass[]);
	{
		bool aUpper = false,
			aLower = false,
			aDigit = false;
		for (int i = 0; pass[i]; ++i)
			if (isupper(pass[i]))
				aUpper = true;
			else if (islower(pass[i]))
				aLower = true;
			else if (isdigit(pass[i]))
				aDigit = true;
		if (aUpper && aLower && aDigit)
			return true;
		else
			return false;
	}
}


	