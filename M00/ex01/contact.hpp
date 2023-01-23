#include <iostream>

class Contact
{
private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phonenumber;
	std::string _darkest_secret;

public:
	Contact(std::string f, std::string l, std::string n, std::string p, std::string d);
};