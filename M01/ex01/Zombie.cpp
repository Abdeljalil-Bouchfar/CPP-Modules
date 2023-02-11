#include "Zombie.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Zombie::Zombie()
{
}

void Zombie::set_name(std::string str)
{
	this->_name = str;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Zombie::~Zombie()
{
	std::cout  << this->_name << ": Destructor called" << std::endl;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */