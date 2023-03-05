#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	std::cout << "Dog Default constructor called" << std::endl;
	this->type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog( const Dog & src )
{
	std::cout << "Dog Copy constructor called" << std::endl;
	this->_brain = new Brain();
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	this->type = rhs.getType();
	*this->_brain = *rhs._brain;
	std::cout << "Dog Copy Assignment operator called" << std::endl;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Dog::makeSound() const
{
	std::cout << "Dog sound" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */