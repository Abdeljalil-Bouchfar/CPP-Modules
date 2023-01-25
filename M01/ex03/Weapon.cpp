#include "Weapon.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Weapon::Weapon(std::string i_type) : _type(i_type)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Weapon::~Weapon()
{
}

/*
** --------------------------------- METHODS ----------------------------------
*/




/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string &Weapon::getType()
{
	return this->_type;	
}
void Weapon::setType(std::string str)
{
	this->_type = str;
}

/* ************************************************************************** */