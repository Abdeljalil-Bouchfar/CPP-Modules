#include "HumanA.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

HumanA::HumanA(std::string i_name, Weapon &i_weapen) : _name(i_name), _weapen(i_weapen)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

HumanA::~HumanA()
{
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapen.getType() << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */