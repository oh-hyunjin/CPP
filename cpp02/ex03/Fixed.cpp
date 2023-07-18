#include "Fixed.hpp"

Fixed::Fixed() : fixed(0) {
	// std::cout << "Default constructor called : " << fixed  << std::endl;
}

Fixed::Fixed(const Fixed& a) {
	this->fixed = a.fixed;
	// std::cout << "Copy constructor called : " << fixed << std::endl;
}

Fixed& Fixed::operator=(const Fixed& a) {
	this->fixed = a.fixed;
	// std::cout << "Copy assignment operator called : " << fixed << std::endl;
	return *this;
}

Fixed::~Fixed() {
	// std::cout << "Destructor called : " << fixed << std::endl;
}

int Fixed::getRawBits(void) const {
	// std::cout << "getRawBits member function called" << std::endl;
	return fixed;
}

void Fixed::setRawBits(int const raw) {
	// std::cout << "setRawBits member function called" << std::endl;
	fixed = raw;
}


// ex01
Fixed::Fixed(const int input) {
	// std::cout << "Int constructor called" << std::endl;
	fixed = input << 8;
}

Fixed::Fixed(const float input) {
	// std::cout << "Float constructor called" << std::endl;
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
bool Fixed::operator>(const Fixed& a) const {
	return (this->fixed > a.fixed);
}
bool Fixed::operator<(const Fixed& a) const {
	return (this->fixed < a.fixed);
}
bool Fixed::operator>=(const Fixed& a) const {
	return (this->fixed >= a.fixed);
}
bool Fixed::operator<=(const Fixed& a) const {
	return (this->fixed <= a.fixed);
}
bool Fixed::operator==(const Fixed& a) const {
	return (this->fixed == a.fixed);
}
bool Fixed::operator!=(const Fixed& a) const {
	return (this->fixed != a.fixed);
}

Fixed Fixed::operator+(const Fixed& a) const {
	Fixed result;
	result.fixed = ( toFloat() + a.toFloat() );
	return result;
}
Fixed Fixed::operator-(const Fixed& a) const {
	Fixed result ( toFloat() - a.toFloat() );
	return result;
}
Fixed Fixed::operator*(const Fixed& a) const {
	Fixed result ( toFloat() * a.toFloat() );
	// const 함수인데 어떻게 고치지
	return result;
}
Fixed Fixed::operator/(const Fixed& a) const {
	Fixed result ( toFloat() / a.toFloat() );
	return result;
}

Fixed& Fixed::operator++() {
	this->fixed++;
	return *this;
}
const Fixed Fixed::operator++(int) {
	Fixed temp(*this);
	this->fixed++;
	return temp;
}
Fixed& Fixed::operator--() {
	this->fixed--;
	return *this;
}
const Fixed Fixed::operator--(int) {
	Fixed temp(*this);
	this->fixed--;
	return temp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
	if (a.fixed < b.fixed)
		return a;
	return b;
}
const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	if (a.fixed < b.fixed)
		return a;
	return b;
}
Fixed& Fixed::max(Fixed& a, Fixed& b) {
	if (a.fixed < b.fixed)
		return b;
	return a;
}
const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	if (a.fixed < b.fixed)
		return b;
	return a;
}