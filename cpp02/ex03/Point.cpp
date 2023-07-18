#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const Fixed a, const Fixed b) : x(a), y(b) {}

Point::Point(const Point& a) : x(a.x), y(a.y) {}

Point& Point::operator=(const Point& a) {
	// x,y가 const인데 어떻게 대입함
	// this->x = a.x;
	// this->y = a.y;
	a.getX();
	return *this;
}

Point::~Point() {}

const Fixed Point::getX() const { // getArea()가 const로 인자를 받아서 이것도 const
	return x;
}

const Fixed Point::getY() const {
	return y;
}
