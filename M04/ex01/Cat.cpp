#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
{
	std::cout << "Cat Default constructor called" << std::endl;
	this->type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat( const Cat & src )
{
	std::cout << "Cat Copy constructor called" << std::endl;
	this->_brain = new Brain();
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
{
	this->type = rhs.type;
	*this->_brain = *rhs._brain;
	std::cout << "Cat Copy Assignment operator called" << std::endl;
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Cat::makeSound() const
{
	std::cout << "Cat sound" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */