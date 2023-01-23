#include <iostream>
#include <iomanip>
#include "contact.hpp"

class PhoneBook
{
private:
	Contact _contacts[8];
	int _counter;

public:
	PhoneBook(void);
	void display(int index);
	void add(void);
	void search(void);
};