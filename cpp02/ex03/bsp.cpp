#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

Fixed getArea(const Point a, const Point b, const Point c) {
	// std::cout << b.getX() * a.getY() << ", ";
	// std::cout << c.getX() * b.getY() << ", ";
	// std::cout << a.getX() * c.getY() << ", ";
	// std::cout << a.getX() * b.getY() << ", ";
	// std::cout << b.getX() * c.getY() << ", ";
	// std::cout << c.getX() * a.getY() << " -> ";
    
	// std::cout << "(" << b.getX() * a.getY() + c.getX() * b.getY() + a.getX() * c.getY() << " - ";
	// std::cout << a.getX() * b.getY() + b.getX() * c.getY() + c.getX() * a.getY() << ") / 2 ";

	Fixed area (((b.getX() * a.getY() + c.getX() * b.getY() + a.getX() * c.getY())\
	                - (a.getX() * b.getY() + b.getX() * c.getY() + c.getX() * a.getY())) / 2);
	// std::cout << " = " << area << std::endl;
	return area;
}

bool bsp(Point const a, Point const b, Point const c, Point point) {
	return (getArea(a, b, c) == (getArea(point, b, c) + getArea(a, point, c) + getArea(a, b, point)));
}
