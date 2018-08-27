#include <iostream>

int main()\
{
	{
		int number;
		number = 30;
		std::cout << number << std::endl;
		number = 29;
		std::cout << number << std::endl;
		number = 28;
		std::cout << number << std::endl;

		int numA;
		int numB;
		int sum;
		numA = 20.5f;
		numB = 23.0f;
		int numAPlusnumB = numA + numB;

		int userInput;
		std::cout << "Input a whole number...\n";
		int x = 10;
		number = x;
		system("pause");
	}

	{
		// main.cpp/main()
		// ...
		// A)
		int numberA = 5;
		numberA = 9;
		numberA = 11;
		numberA = 14;
		std::cout << "A) " << numberA << std::endl;
		// Expected Number 30 actual
	}

	{
		//main.cpp/main()
		//...
		//B)
		int numberB = 10;
		numberB = 9;
		int thingB = 55;
		thingB = 22;
		std::cout << "B) " << numberB << std::endl;
		// Expected Number 105 actual
	}



	{
		int numberC = 3;
		numberC = 7;
		numberC = 1;
		int somethingC = 23;
		somethingC = 21;
		numberC = somethingC;
		std::cout << "C) " << numberC << std::endl;
		// Expected Number 45
	}
	{
		// main.cpp/main()
		// ...
		// D)
		int numberD = 1;
		int somethingD = 3;
		numberD = somethingD;
		std::cout << "D) " << somethingD << std::endl;
		// Expected Number 4
	}


	{
		// main.cpp/main()
		// ...
		// E)
		int x = 13;
		x = x / 2;
		std::cout << "E) " << x << std::endl;
		// Expected Number 15
	}

	{
		// main.cpp/main()
		// ...
		// F)
		float y = 13;
		y = y / 2;
		std::cout << "F)" << y << std::endl;
		// Expected Number 15 actual 6.5
	}

	{
		// main.cpp/main()
		// ...
		// Celsius to Fahrenheit)
		float degCelsius = 78.0f;
		float degFahrenheit = 0.0f;
		std::cout << "Enter temperature for Celsius" << std::endl;
		std::cin >> degCelsius;
		// F = (C * 1.8) + 32
		float degC = 78.0;
		float degF = (degC + 1.8) + 32;
		std::cout << "Celsius to Fahrenheit)" << std::endl;
		std::cout << "Celsius: " << degCelsius << std::endl;
		std::cout << "Fahrenheit: " << degFahrenheit << std::endl;
		// ...
	}

	{
		// main.cpp/main()
		// ...
		// Area of a Rectangle)
		float rectWidth = 40.5f;
		float rectHeight = 21.5f;
		std::cout << "Enter the Width of the Rectangle:";
		std::cin >> rectWidth;
		std::cout << "Enter the Height of the Rectangle:";
		std::cin >> rectHeight;
		float rectArea = rectWidth * rectHeight;
		std::cout << "Area of a Rectangle)" << std::endl;
		std::cout << "H: " << rectHeight << " , W: " << rectWidth << std::endl;
		std::cout << "Area: " << rectArea << std::endl;
		// ...
	}

	{
		// main.cpp/main()
		// ...
		// Average of Five)
		float a, b, c, d, e;
		float avg;
		avg = a = b = c = d = e = 35.5f;
		std::cout << "your age is" << "age" << std::endl;
		std::cout << "You have been alive for around" << "age 12" << "months.\n";
		std::cout << "You have been alive for about" << "age/10" << "decades.\n";
		std::cout << "You have expected to live for another" << "79 - age" << "years.\n";

		std::cout << "Average of Five)" << std::endl;
		std::cout << a << "," << b << "," << c << "," << d << "," << e << std::endl;
		std::cout << "avg: " << avg << std::endl;
		// ...
	}

	{
		// main.cpp/main()
		// ...
		// Number Swap)
		int x = 13;
		int y = 24;
		// 
		std::cout << "Number Swap)" << std::endl;
		std::cout << "x is " << x << std::endl;
		std::cout << "y is " << y << std::endl;
		// ...
	}

	{
		// main.cpp/main()
		// ...
		// Fun Facts for Your Age)
		int age = 0;
		// <Your work can go here.>
		// <You must add more lines to output to the terminal>
		std::cout << "Howdy! You are " << age << " years old!";
		// ...
	}

	{
		// main.cpp/main()
		// ...
		// Conforming to Conventions)
		int age;
		int bullet_count;
		float dog_years;
		int qty;
		float shield_value;
		float defense_matrix_cooldown;
		int red_armor_value;
		float red_armor_ratio;
		int happiness;
		int gandhi_aggression;
		// ...
	}

	{
		// main.cpp/main()
		// ...
		// The Right Tool for the Job)
		int num; // bool- stores either value true or false.
				 // char- Typically a single octet(one byte). This is an integer type.
				 // int- The most natural size of integer for the machine.
				 // float- A single-precision flaoting point value.
				 // double- A double-precision floating point value.
				 // void- Represents the absence of type.
				 //wchar_t- A wide character type.
		float num2; // single precision floating point
					// ...

	}

	system("pause");
	//p
	int grade = 90;
	char gradeletter;
	if (grade >= 90)
	{
		gradeletter = 'A';
	}
	else if (grade >= 80 && grade < 90)
	{
		gradeletter = 'B';
	}
	else if (grade >= 70 && grade < 60)
	{
		gradeletter = 'C';
	}
	else if (grade >= 60 && grade < 50)
	{
		gradeletter = 'D';
	}
	else
	{
		gradeletter = 'F';
	}
	int input = 0;
	std::cout << "Enter number/n.";
	std::cin >> input;
	if (input % 3 == 0 && input % 5 == 0)
		{
			std::cout << "fizzbuzz";
		}
	else if (input % 3 == 0)
	{
		std::cout << "fizz";
	}
	else if (input % 5 == 0)
	{
		std::cout << "buzz";
	}
	system("pause");
	
	{

		
		int lhs, rhs;
		char op;
		std::cout << "Enter two numbers\n.";
		std::cin >> lhs >> rhs;
		std::cout << "Do you wanna Add(+) or Subtract(-)?\n";
		std::cin >> op;
		switch (op)
		{
		case '+':
			//Do stuff
			std::cout << lhs + rhs << std::endl;
			break;
		case '-':
				//Do stuff
				std::cout << lhs - rhs << std::endl;
				break;
			default:
				std::cout << "Invalid math operation";
				break;
		}
		system("pause");

		{
			int playerhealth = 100;
			if (playerhealth > 0)
			{
				std::cout << "You are alive";
				if (playerhealth < 25)
				{
					std::cout << "Health critical";
				}
				std::cout << "player health 12";
			}
			else if (playerhealth < 0)
			{
				std::cout << "You are dead";
			}
		} 
	}	system("pause");

	{
		int x;
		int y;
		if (y = 0)
			//statement one
		{
			x = 20;
		}
		else if (y = 0)
			//statement two
			{
				x = 100;
			}
		//2 
		int num1, num2;
		std::cout << "Enter two numbers";
		std::cin >> num1 >> num2;
		if (num1 > num2)
		{
			std::cout << num1;
		}
		else if (num2 > num1);
		{
			std::cout << num2;
		}
		//3
		
		//4 
		{
			int choice;
			std::cin >> choice;
			switch (choice) 
			{
			case 0: 
			{
				std::cout << "1";
			}
					break;
			case 1: 

			{
				std::cout << "2 or 3";
			}
					break;
			case 2: 

			{
				std::cout << "4";
			}
					break;
			default:
			{
				std::cout << "Invalid";
			}
			break;
			}system("pause");
	
		}
		//5
		{ 
			int x = 0;
			y = (x == 0) ? 0 : (10/x);
			if (x == 0)
			{
				y = 0;
			}
			else
			{
				y = 10 / x;
			}
		}
		//6
		{
			{


				int lhs, rhs;
				char op;
				std::cout << "Enter two numbers\n.";
				std::cin >> lhs >> rhs;
				std::cout << "Do you wanna Add(+) or Subtract(-)?\n";
				std::cin >> op;
				switch (op)
				{
				case '+':
					//Do stuff
					std::cout << lhs + rhs << std::endl;
					break;
				case '-':
					//Do stuff
					std::cout << lhs - rhs << std::endl;
					break;
				case '*':
					//Do stuff 
					std::cout << lhs * rhs << std::endl;
					break;
				case '/':
					std::cout << lhs / rhs << std::endl;
					break;
				case '%':
					std::cout << lhs % rhs << std::endl;
					break;
				default:
					std::cout << "Invalid math operation";
					break;
				}
				system("pause");
			}
		}
			//7
			{
				{
					int choice;
					std::cin >> choice;
					switch (choice)
					{
					case 1:
					{
						std::cout << "janurary-31 days";
					}
					break;
					case 2:

					{
						std::cout << "Feburary-25 days";
					}
					break;
					case 3:

					{
						std::cout << "March-24 days";
					}
					break;
					case 4:
					{
						std::cout << "April-23 days";
					}
					break;
					case 5: 
					{
						std::cout << "May-27 days";
					}
					break;
					default:
					{
						std::cout << "Invalid";
					}
					break;
					}system("pause");

				}
			}//8
			{
				int numPos = 35, numNeg = -55;
				//a
				{
					std::cout << "true";
				}
				char frstChar = 'B', scndChar = 'P';
				//b
				{
					std::cout << "true";
				}
				//c 
				{
					std::cout << "c. false/n";
				}
				//d
				{
					std::cout << "d. true/n";
				}
				//e
				{
					std::cout << "e. true/n";
				}
				//f
				{
					std::cout << "f. false/n";
				}
				//g
				{
					std::cout << "g. true/n";
				}
				//h
				{
					std::cout << "h. false/n";
				}
				//i
				{
					std::cout << "i. true/n";
				}
				//j
				{
					std::cout << "j. true/n";
				}

			}
			//9
			//a
			{
				std::cout << "a. true || false/n";
			}
			//b 
			{
				std::cout << "b. true && false || false/n";
			}
			//c
			{
				std::cout << "c. true/n";
			}
			//d
			{
				std::cout << "d. false/n";
			}
			//e
			{
				std::cout << "e. true/n";
			}

	}
}
	
		