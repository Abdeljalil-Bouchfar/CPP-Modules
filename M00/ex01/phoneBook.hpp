#include <iostream>
#include <iomanip>

#include "contact.hpp"

class PhoneBook
{
private:
	Contact _contacts[8];
	int _counter;
	int _size;

public:
	PhoneBook(void);
	void display_phonebook(int index);
	void add(void);
	void search(void);
};