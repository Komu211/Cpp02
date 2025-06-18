#include "Fixed.hpp"
#include <iostream>


Fixed::Fixed() : _numberValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	if (this != &other)
		this->_numberValue = other.getRawBits();
}

Fixed::Fixed (const int number)
{
	_numberValue = number << _fractional_bits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float number)
{
	_numberValue = (int)(number * (1 << _fractional_bits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_numberValue;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_numberValue = raw;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_numberValue = other._numberValue;
	return *this;
}

float Fixed::toFloat(void) const
{
	return (float)_numberValue / (1 << _fractional_bits);
}

int Fixed::toInt(void) const 
{
	return (_numberValue >> _fractional_bits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}
