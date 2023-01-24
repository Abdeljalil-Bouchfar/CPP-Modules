#include "phoneBook.hpp"

PhoneBook::PhoneBook(void) : _counter(-1), _size(0) {}

void PhoneBook::display_phonebook(int index)
{
	if (index != -1)
		this->_contacts[index].display_details();
	else
	{
		std::cout << " --------------------------------------------" << std::endl;
		std::cout << '|' << std::setw(10) << "index" << '|'
				  << std::setw(10) << "first name" << '|'
				  << std::setw(10) << "last name" << '|'
				  << std::setw(10) << "nick name" << '|' << std::endl;
		std::cout << " --------------------------------------------" << std::endl;
		for (int i = 0; i < this->_size; i++)
			this->_contacts[i].display_all();
	}
}

void PhoneBook::add(void)
{
	std::string f, l, n, p, d;
	std::cout << "first name: ";
	std::getline(std::cin, f);
	if (f.empty())
	{
		std::cerr << "Invalid input!" << std::endl;
		return;
	}
	//
	std::cout << "last name: ";
	std::getline(std::cin, l);
	if (l.empty())
	{
		std::cerr << "Invalid input!" << std::endl;
		return;
	}
	//
	std::cout << "nickname: ";
	std::getline(std::cin, n);
	if (n.empty())
	{
		std::cerr << "Invalid input!" << std::endl;
		return;
	}
	//
	std::cout << "phone number: ";
	std::getline(std::cin, p);
	if (p.empty())
	{
		std::cerr << "Invalid input!" << std::endl;
		return;
	}
	//
	std::cout << "darkest secret: ";
	std::getline(std::cin, d);
	if (d.empty())
	{
		std::cerr << "Invalid input!" << std::endl;
		return;
	}
	this->_size += this->_size < 8;
	this->_counter++;
	this->_counter = this->_counter % 8;
	this->_contacts[this->_counter].set_data(f, l, n, p, d, this->_counter + 1);
}

void PhoneBook::search()
{
	this->display_phonebook(-1);
	std::string s;
	std::cout << "Enter an index: ";
	std::getline(std::cin, s);
	if (!s.empty() && s.size() == 1 && s[0] >= '1' && s[0] <= '8' && (s[0] - 49) < this->_size)
		this->display_phonebook((s[0] - 49));
	else
		std::cerr << "invalid index" << std::endl;
}