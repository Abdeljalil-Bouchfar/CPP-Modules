#include "phoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_counter = -1;
}

void PhoneBook::display(int index)
{
	std::cout << " --------------------------------------------\n";
	std::cout << '|' << std::setw(11) << "index" << '|' 
		<< std::setw(10) << "first name" << '|' 
		<< std::setw(10) << "last name" << '|' 
		<< std::setw(10) << "nick name" << "|\n";
	std::cout << " --------------------------------------------\n";
}

void PhoneBook::add(void)
{
	std::string fn, ln, nn, pn, ds;
	std::cout << "first name: ";
	std::getline(std::cin, fn);
	if (fn.empty())
	{
		std::cerr << "Invalid input!\n";;
		return;
	}
	//
	std::cout << "last name: ";
	std::getline(std::cin, ln);
	if (ln.empty())
	{
		std::cerr << "Invalid input!\n";;
		return;
	}
	//
	std::cout << "nickname: ";
	std::getline(std::cin, nn);
	if (nn.empty())
	{
		std::cerr << "Invalid input!\n";;
		return;
	}
	//
	std::cout << "phone number: ";
	std::getline(std::cin, pn);
	if (pn.empty())
	{
		std::cerr << "Invalid input!\n";;
		return;
	}
	//
	std::cout << "darkest secret: ";
	std::getline(std::cin, ds);
	if (ds.empty())
	{
		std::cerr << "Invalid input!\n";;
		return;
	}
	this->_counter++;
	this->_counter = this->_counter % 8;
	Contact contact();
	this->_contacts[this->_counter];
}

void PhoneBook::search()
{
	char n;
	std::cout << "Enter an index: ";
	std::cin >> n;
	if (n >= '1' && n <= '8' && (n - 49) <= _counter)
	{
		display((n - 49));
	}
	else
		std::cerr << "invalid index\n";
}