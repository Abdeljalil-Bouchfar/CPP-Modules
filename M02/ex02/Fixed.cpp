#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed() : _fixed_point(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
	// shifts the bits in num [_fractional] positions to the left.
	this->_fixed_point = (num << this->_fractional);
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num)
{
	this->_fixed_point = (roundf(num * 256));
	// std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &Fixed::operator=(Fixed const &rhs)
{
	// std::cout << "Copy Assignment operator called" << std::endl;
	this->_fixed_point = rhs.getRawBits();
	return *this;
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1._fixed_point > f2._fixed_point)
		return f1;
	return f2;
}

const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1._fixed_point < f2._fixed_point)
		return f1;
	return f2;
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1._fixed_point < f2._fixed_point)
		return f1;
	return f2;
}

const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1._fixed_point > f2._fixed_point)
		return f1;
	return f2;
}

Fixed &Fixed::operator++()
{
	++this->_fixed_point;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	++this->_fixed_point;
	return tmp;
}

Fixed &Fixed::operator--()
{
	--this->_fixed_point;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	--this->_fixed_point;
	return tmp;
}

Fixed Fixed::operator+(Fixed const &rhs) const
{
	return Fixed((this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator-(Fixed const &rhs) const
{
	return Fixed((this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator*(Fixed const &rhs) const
{
	return Fixed((this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(Fixed const &rhs) const
{
	return Fixed((float)(this->toFloat() / rhs.toFloat()));
}

bool Fixed::operator>(Fixed const &rhs) const
{
	return (this->_fixed_point > rhs._fixed_point);
}

bool Fixed::operator<(Fixed const &rhs) const
{
	return (this->_fixed_point < rhs._fixed_point);
}

bool Fixed::operator>=(Fixed const &rhs) const
{
	return (this->_fixed_point >= rhs._fixed_point);
}

bool Fixed::operator<=(Fixed const &rhs) const
{
	return (this->_fixed_point <= rhs._fixed_point);
}

bool Fixed::operator==(Fixed const &rhs) const
{
	return (this->_fixed_point == rhs._fixed_point);
}

bool Fixed::operator!=(Fixed const &rhs) const
{
	return (this->_fixed_point != rhs._fixed_point);
}

std::ostream &operator<<(std::ostream &os, const Fixed &obj)
{
	os << obj.toFloat();
	return os;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

int Fixed::getRawBits(void) const
{
	return (this->_fixed_point);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixed_point = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->_fixed_point / 256);
}

int Fixed::toInt(void) const
{
	return this->_fixed_point >> this->_fractional;
}

/* ************************************************************************** */