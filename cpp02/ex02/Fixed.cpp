#include "Fixed.hpp"

Fixed::Fixed() {
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
Fixed::Fixed(const int input) {
	fixed = input << 8;
}

Fixed::Fixed(const float input) {
	fixed = roundf(input * (1 << 8));
}

float Fixed::toFloat(void) const {
	return ((float)fixed / (1 << 8));
}

int Fixed::toInt(void) const {
	return (fixed / (1 << 8));
}

std::ostream& operator<<(std::ostream& out, const Fixed& a) {
	out << a.toFloat();
	return out;
}


// ex02
bool Fixed::operator>(const Fixed& a) {
	if (this->fixed > a.fixed)
		return true;
	return false;
}
bool Fixed::operator<(const Fixed& a) {
	if (this->fixed < a.fixed)
		return true;
	return false;
}
bool Fixed::operator>=(const Fixed& a) {
	if (this->fixed >= a.fixed)
		return true;
	return false;
}
bool Fixed::operator<=(const Fixed& a) {
	if (this->fixed <= a.fixed)
		return true;
	return false;
}
bool Fixed::operator==(const Fixed& a) {
	if (this->fixed == a.fixed)
		return true;
	return false;
}
bool Fixed::operator!=(const Fixed& a) {
	if (this->fixed != a.fixed)
		return true;
	return false;
}

Fixed Fixed::operator+(const Fixed& a) {
	Fixed result;
	result.fixed = this->fixed + a.fixed; // setRawBits 안써도 되나?
	return result;
}
Fixed Fixed::operator-(const Fixed& a) {
	Fixed result;
	result.fixed = this->fixed - a.fixed;
	return result;
}
Fixed Fixed::operator*(const Fixed& a) {
	Fixed result;
	result.fixed = this->fixed * a.fixed;
	return result;
}
Fixed Fixed::operator/(const Fixed& a) {
	Fixed result;
	result.fixed = this->fixed / a.fixed;
	return result;
}

