#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : fixed(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& a) {
	std::cout << "Copy constructor called" << std::endl;
	this->fixed = a.fixed;
}

Fixed& Fixed::operator=(const Fixed& a) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixed = a.fixed;
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return fixed;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	fixed = raw;
}

// ex01
Fixed::Fixed(const int) : fixed(0) {
	//converts param -> fixed-point value, init fractional bits 8
}

Fixed::Fixed(const float) : fixed(0) {
	//converts param -> fixed-point value, init fractional bits 8
}

float Fixed::toFloat(void) const {
	//converts fixed-point value -> floating-point value
}

int Fixed::toInt(void) const {
	//converts fixed-point value -> int value
}

std::ostream& operator << (std::ostream& out, const Fixed& a) {
	//inserts floating-point representation of the fixed-point num into the output stream object passed as param
	out << a.toFloat();
	return out;
}