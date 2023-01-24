#include "phoneBook.hpp"

int main()
{
	PhoneBook phoneBook;
	std::string cmd;
	std::cout << "Enter a command: ";
	while (std::getline(std::cin, cmd))
	{
		if (cmd == "ADD")
			phoneBook.add();
		else if (cmd == "SEARCH")
			phoneBook.search();
		else if (cmd == "EXIT")
			return (0);
		else
			std::cout << "Invalid cmd" << std::endl;
		std::cout << "Enter a command: ";
	}
}