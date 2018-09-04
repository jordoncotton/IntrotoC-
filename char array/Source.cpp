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

	//6
	{

	}

	//7
	{
		1//What do you think the program is trying to achieve?
			/* - Without C++ it's safe to say that you achieve
			almost anything with C++*/;

		2// What is the bug?
			/*When the system acts in a way other than what
			it was intended too*/;

		3//How would you correct it?
			/*By using the debugging tool to figure out
			it's issue*/;

		4//char name[4] = "John";
			/*Missing the value of the type*/;

		5//char name[32];
		//cout << name;
			/*Missing identifier for "cout"*/;

		6//char name[7] = "Donald";
		//char surname[7] = "Knuth";
		//strcat(name, surname);
			/*No issue*/;

		7//har errorMsg[5] = "Stop";
		//errorMsg[strlen(errorMsg)] = "!";
		//cout << errorMsg;
			/*Value of type char on the "=" and
			idenitifer on the "cout"*/;
	}

	//8

	{
		inline bool vowel(char c)
		{
			bool vowel;
			switch (topper(c))
			{
			case 'E': case 'A': case 'U': case 'O': case 'I': case 'Y':
			{
				vowel = true;
			}
			break;
			default:
			{
				vowel = false;
			}
			}
			return vowel;
		}

		int main(void)
		{
			string word;
			string::sizeType cons;
			const string vowels = "aeiouAEIOU";

			std::cout << "\n\t\Welcome to the Pig-Latin Word Conversion Program. \n";
			std::cout << "Please enter a word: ";
			std::cin >> word;


			if (isvowel(word[0]))
			{
				std::cout << "\nThe translation for that in Pig-Latin would be "
					<< word << "\n";
			}
			else
			{
				std::cout << "\nThe translation for that in Pig-Latin would be ";
			}

			return 0;
		}
	}

	{
		//9
		{
			{
				int uppercase;
				int lowercase;
				int total;
				int numbers;

				char array1[50];
				int i = 0, lowercase = 0, uppercase = 0, numbers = 0, total;

				std::cout << "Enter a string: " << std::endl;
				std::cin >> array1;
				std::cout << std::endl;

				while (array1[i] != 0) {

					if (array1[i] >= 'a' && array1[i] <= 'z') {
						lowercase++;
						i++;
					}

					else if (array1[i] >= 'A' && array1[i] <= 'Z') {
						uppercase++;
						i++;
					}

					else if (array1[i] >= '0' && array1[i] <= '9') {
						numbers++;
						i++;
					}

					else
						i++;
				}

				total = lowercase + uppercase + numbers;

				std::cout << "Your string has " << lowercase << " lowercase letters." << std::endl;

				std::cout << "Your string has " << uppercase << " uppercase letters." << std::endl;

				std::cout << "Your string has " << numbers << " numbers." << std::endl;

				std::cout << "Your string has " << total << " total characters." << std::endl;
			}
		}
	}

	//10

	{
		{
			int i, j, len, flag = 1;
			char a[20];

			std::cout << "Enter a string:";
			std::cin >> a;

			for (len = 0; a[len] != '\0'; ++len);

			for (i = 0, j = len - 1; i < len / 2; ++i, --j)
			{
				if (a[j] != a[i])
					flag = 0;
			}

			if (flag == 1)
				std::cout << "\nThe string is Palindrome";
			else
				std::cout << "\nThe string is not Palindrome";

			return 0;
		}
	}

	//11

	{
		{
			char s1[80], s2[80];

			strcpy(s1, "C++");
			strcpy(s2, " is power programming.");

			std::cout << "lengths: " << strlen(s1);
			std::cout << ' ' << strlen(s2) << '\n';

			if (!strcmp(s1, s2))
				std::cout << "The strings are equal\n";
			else std::cout << "not equal\n";

			strcat(s1, s2);
			std::cout << s1 << '\n';

			strcpy(s2, s1);
			std::cout << s1 << " and " << s2 << "\n";

			if (!strcmp(s1, s2))
				std::cout << "s1 and s2 are now the same.\n";

			return 0;
		}
	}

	//12
	/*Write a program that reads in a line of input and then displays the
	character that appears the most frequently in that sentence*/
	{

	}

	//13
	{
		{
			char cMonth[2];
			char cDay[2];
			char cYear[4];

			std::cout << "Enter a date in the form mm/dd/yyyy: ";

			std::cin.get(cMonth, 3, '/');
			std::cin.ignore(2, '/');
			std::cin.get(cDay, 4, '/');
			std::cin.ignore(2, '/');
			std::cin.get(cYear, 5);

			std::cout << cMonth << std::endl << cDay << std::endl << cYear << std::endl;
			return 0;
		}
	}
}


	

