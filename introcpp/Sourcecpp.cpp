#include <iostream>
#include <string>

int main()
{

	std::string Name = "Jordon Cotton";
	std::string ID = "s188044";
	std::cout << "name:" << Name << std::endl;
	std::cout << "ID:" << "s188044" << std::endl;

	std::string First;
	std::cout << "Enter your first name.." << std::endl;
	std::cin >> First;

	std::string Last;
	std::cout << "Enter your last name.." << std::endl;
	std::cin >> Last;

	std::cout << "Hello " << First << " " << Last << std::endl;

	system("pause");
}