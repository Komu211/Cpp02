#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int _numberValue;
	static const int _fractional_bits = 8;

public:
	Fixed();
	Fixed(const Fixed &other);
	Fixed(const int number);
	Fixed(const float number);
	~Fixed();
	float toFloat(void) const;
	int toInt(void) const;
	Fixed &operator=(const Fixed &other);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
