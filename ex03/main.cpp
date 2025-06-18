#include "Point.hpp"
#include <iostream>

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main()
{
	Point a(0, 0);
	Point b(0, 10);
	Point c(10, 0);
	Point point(5, 5);

	if (bsp(a, b, c, point))
		std::cout << "Point is in the triangle" << std::endl;
	else
		std::cout << "Point is not in the triangle" << std::endl;

	return 0;
}