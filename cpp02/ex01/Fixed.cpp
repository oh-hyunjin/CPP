#include "Fixed.hpp"

Fixed::Fixed() : fixed(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& a) {
	std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

Fixed& Fixed::operator=(const Fixed& a) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &a)
		this->fixed = a.getRawBits();
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	return fixed;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	fixed = raw;
}


// ex01
Fixed::Fixed(const int input) {
	std::cout << "Int constructor called" << std::endl;
	fixed = input << fractionalBits;
}

Fixed::Fixed(const float input) {
	std::cout << "Float constructor called" << std::endl;
	fixed = roundf(input * (1 << fractionalBits));
}

float Fixed::toFloat(void) const {
	return ((float)fixed / (1 << fractionalBits));
}

int Fixed::toInt(void) const {
	return (fixed >> fractionalBits);
}

std::ostream& operator<<(std::ostream& out, const Fixed& a) {
	out << a.toFloat();
	return out;
}