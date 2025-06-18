#include "Point.hpp"


bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	// barycentric method
	Fixed ax = a.get_x();
	Fixed ay = a.get_y();
	Fixed bx = b.get_x();
	Fixed by = b.get_y();
	Fixed cx = c.get_x();
	Fixed cy = c.get_y();

	Fixed px = point.get_x();
	Fixed py = point.get_y();

	Fixed denom = ((by - cy) * (ax - cx) + (cx - bx) * (ay - cy));

	float alpha = (((by - cy) * (px - cx) + (cx - bx) * (py - cy)) / denom).toFloat();
	float beta = (((cy - ay) * (px - cx) + (ax - cx) * (py - cy)) / denom).toFloat();
	float gamma = 1 - alpha - beta;

	return alpha > 0 && beta > 0 && gamma > 0;
}