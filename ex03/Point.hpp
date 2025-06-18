#pragma once

#include "Fixed.hpp"

class Point
{
	private:
		const Fixed _x;
		const Fixed _y;

	public:
		Point();
		Point(float x, float y);
		Point(const Point &other);
		Point &operator=(const Point &other);
		~Point();

		Fixed get_x() const;
		Fixed get_y() const;
};