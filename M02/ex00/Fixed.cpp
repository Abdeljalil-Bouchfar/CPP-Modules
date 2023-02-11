#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed() : _fixed_point(0)
{
	std::cout << "Fixed Default Constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Fixed Copy Constructor called" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	std::cout << "Fixed Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	this->_fixed_point = rhs._fixed_point;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


int Fixed::getRawBits(void)
{
	return (this->_fixed_point);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixed_point = raw;
}

/* ************************************************************************** */