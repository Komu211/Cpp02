#include "Point.hpp"

Point::Point() : _x(Fixed(0)), _y (Fixed(0)) {}

Point::Point(float x, float y) : _x(Fixed(x)), _y(Fixed(y)) {}

Point::Point(const Point &other) : _x(other._x), _y(other._y) {}

Point  &Point::operator=(const Point &other)
{
	(void)other;
	return *this;
}

Point::~Point() {}

Fixed Point::get_x() const
{
	return this->_x;
}

Fixed Point::get_y() const
{
	return this->_y;
}
