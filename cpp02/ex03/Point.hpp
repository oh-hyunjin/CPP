#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

class Point {
private:
	const Fixed x;
	const Fixed y;

public:
	Point();
	Point(const Fixed a, const Fixed b);
	Point(const Point& a);
	Point& operator=(const Point& a);
	~Point();

	const Fixed getX() const;
	const Fixed getY() const;
};

Fixed getArea(const Point a, const Point b, const Point c);
bool bsp(const Point a, const Point b, const Point c, const Point point);

#endif