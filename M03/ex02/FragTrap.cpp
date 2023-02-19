#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	this->_name = "Default";
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(std::string i_name)
{
	std::cout << "FragTrap paramerised constructor called" << std::endl;
	this->_name = i_name;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap( const FragTrap & src )
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap &				FragTrap::operator=( FragTrap const & rhs )
{
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void FragTrap::attack(const std::string &taregt)
{
	if (this->_energy_points > 0 && this->_hit_points > 0)
	{
		std::cout << "FragTrap " << this->_name << " attacks " << taregt << " causing "
				  << this->_attack_damage << " points of damage!" << std::endl;
		this->_energy_points--;
	}
}

void FragTrap::highFivesGuys(void)
{
	std::cout << this->_name << " give high fives request" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */