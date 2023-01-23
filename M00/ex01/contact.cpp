#include "contact.hpp"

Contact::Contact(std::string f, std::string l, std::string n, std::string p, std::string d)
{
	this->_first_name = f;
	this->_last_name = l;
	this->_nickname = n;
	this->_phonenumber = p;
	this->_darkest_secret = d;
}