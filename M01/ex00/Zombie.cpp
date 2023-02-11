#include "Zombie.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Zombie::Zombie(std::string s) : _name(s)
{
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