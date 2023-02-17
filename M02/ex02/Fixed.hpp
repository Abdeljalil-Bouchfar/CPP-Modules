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
	static Fixed &min(Fixed &f1, Fixed &f2);
	static const Fixed &min(Fixed const &f1, Fixed const &f2);
	static Fixed &max(Fixed &f1, Fixed &f2);
	static const Fixed &max(Fixed const &f1, Fixed const &f2);
	// Pre-increment operator
	Fixed &operator++();
	// Post-increment operator
	Fixed operator++(int);
	// Pre-decrement operator
	Fixed &operator--();
	// Post-decrement operator
	Fixed operator--(int);
	Fixed operator+(Fixed const &rhs) const;
	Fixed operator-(Fixed const &rhs) const;
	Fixed operator*(Fixed const &rhs) const;
	Fixed operator/(Fixed const &rhs) const;
	bool operator>(Fixed const &rhs) const;
	bool operator<(Fixed const &rhs) const;
	bool operator>=(Fixed const &rhs) const;
	bool operator<=(Fixed const &rhs) const;
	bool operator==(Fixed const &rhs) const;
	bool operator!=(Fixed const &rhs) const;

private:
	int _fixed_point;
	static const int _fractional = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &obj);

#endif /* *********************************************************** FIXED_H */