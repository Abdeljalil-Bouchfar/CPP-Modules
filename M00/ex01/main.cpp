#include "phoneBook.hpp"
#include <iostream>
#include <string>


int main()
{
	PhoneBook phoneBook;
	std::string cmd;
	while(1)
	{
		std::cout << "Enter a command: ";
		std::cin >> cmd;
		if (cmd == "ADD")
			phoneBook.add();
		else if (cmd == "SEARCH")
			phoneBook.search();
		else if (cmd == "EXIT")
			return (0);
		else
			std::cout << "Invalid cmd\n";
	}
}