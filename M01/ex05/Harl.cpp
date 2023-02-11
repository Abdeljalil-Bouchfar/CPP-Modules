#include "Harl.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Harl::Harl()
{
	this->func[0] = &Harl::debug;
	this->func[1] = &Harl::info;
	this->func[2] = &Harl::warning;
	this->func[3] = &Harl::error;
	
	this->levels[0] = "DEBUG";
	this->levels[1] = "INFO";
	this->levels[2] = "WARNING";
	this->levels[3] = "ERROR";
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Harl::~Harl()
{
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
		if (this->levels[i] == level)
		{
			(this->*func[i])();
			break;
		}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */