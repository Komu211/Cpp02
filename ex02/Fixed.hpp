#pragma once

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
	int getRawBits(void) const;
	void setRawBits(int const raw);
	Fixed &operator=(const Fixed &other);

	bool operator>(const Fixed &fixed) const;
	bool operator<(const Fixed &fixed) const;
	bool operator>=(const Fixed &fixed) const;
	bool operator<=(const Fixed &fixed) const;
	bool operator==(const Fixed &fixed) const;
	bool operator!=(const Fixed &fixed) const;

	Fixed operator+(const Fixed &fixed) const;
	Fixed operator-(const Fixed &fixed) const;
	Fixed operator*(const Fixed &fixed) const;
	Fixed operator/(const Fixed &fixed) const;

	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator--();
	Fixed operator--(int);

	static Fixed &min(Fixed &first, Fixed &second);
	static const Fixed &min(const Fixed &first, const Fixed &second);
	static Fixed &max(Fixed &fist, Fixed &second);
	static const Fixed &max(const Fixed &first, const Fixed &second);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

