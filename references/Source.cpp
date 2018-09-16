#include <iostream>
//1
int main()
{
	int integerVariable = 10;
	std::cout << integerVariable << std::endl;
	system("pause");

	int& refpointvariable = integerVariable;
	std::cout << refpointvariable << std::endl;
	system("pause");

	/*Change the contents of the variable by directly changing the variable and using the
		reference*/
	integerVariable = 100;
	std::cout << refpointvariable << std::endl;
	system("pause");

	int &anotherreference = integerVariable;
	 "ref:: %1 refVariable:: % 1 \n", anotherreference, refpointvariable;
	 //reftonothing
	 int somethingelse = 90;
	 integerVariable = somethingelse;
	 system("pause");
}


