#include "HumanB.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

HumanB::HumanB(std::string i_name) : _name(i_name), _weapen(NULL)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

HumanB::~HumanB()
{
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void HumanB::attack()
{
	if (this->_weapen)
		std::cout << this->_name << " attacks with their " << this->_weapen->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapen)
{
	this->_weapen = &weapen;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */