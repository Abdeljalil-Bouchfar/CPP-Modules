#include <iostream>
#include <iomanip>

class Contact
{
private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phonenumber;
	std::string _darkest_secret;
	int _index;

public:
	void set_data(std::string f, std::string l, std::string n, std::string p, std::string d, int i);
	void display_all(void);
	void display_details(void);
	std::string get_str(std::string str);
};