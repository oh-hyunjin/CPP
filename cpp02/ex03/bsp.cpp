#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

float getArea(const Point a, const Point b, const Point c) {
	float area = ((b.getX() * a.getY() + c.getX() * b.getY() + a.getX() * c.getY()) - \
		(a.getX() * b.getY() + b.getX() * c.getY() + c.getX() * a.getY())) / 2;

	return (area >= 0 ? area : -area);
}

bool bsp(Point const a, Point const b, Point const c, Point point) {
	float totalArea = getArea(a,b,c);
	float Area1 = getArea(point, b, c);
	float Area2 = getArea(a, point, c);
	float Area3 = getArea(a, b, point);

	std::cout << "totalArea(ABC) = " << totalArea <<std::endl;
	std::cout << "Area1(PBC) = " << Area1 <<std::endl;
	std::cout << "Area2(APC) = " << Area2 <<std::endl;
	std::cout << "Area3(ABP) = " << Area3 <<std::endl;
	std::cout << "1+2+3 = " << Area1 + Area2 + Area3 << std::endl;

	if (totalArea == 0 || Area1 == 0 || Area2 == 0 || Area3 == 0)
		return false;
	return (totalArea == Area1 + Area2 + Area3);
}
