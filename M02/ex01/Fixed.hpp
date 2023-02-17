#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{

public:
	Fixed();
	Fixed(const int num);
	Fixed(const float num);
	Fixed(Fixed const &src);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

	Fixed &operator=(Fixed const &rhs);

private:
	int _fixed_point;
	static const int _fractional = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &obj);

#endif /* *********************************************************** FIXED_H */