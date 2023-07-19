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
	Point(const float x, const float y);
	Point(const Point& a);
	Point& operator=(const Point& a);
	~Point();

	float getX() const;
	float getY() const;
};

float getArea(const Point a, const Point b, const Point c);
bool bsp(const Point a, const Point b, const Point c, const Point point);

#endif