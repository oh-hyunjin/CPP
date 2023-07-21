#include "Fixed.hpp"

Fixed::Fixed() : fixed(0) {
}

Fixed::Fixed(const Fixed& a) {
	*this = a;
}

Fixed& Fixed::operator=(const Fixed& a) {
	if (this != &a)
		this->fixed = a.getRawBits();
	return *this;
}

Fixed::~Fixed() {
}

int Fixed::getRawBits(void) const {
	return fixed;
}

void Fixed::setRawBits(int const raw) {
	fixed = raw;
}


// ex01
Fixed::Fixed(const int input) {
	fixed = input << fractionalBits;
}

Fixed::Fixed(const float input) {
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


// ex02
bool Fixed::operator>(const Fixed& a) const {
	return (this->getRawBits() > a.getRawBits());
}
bool Fixed::operator<(const Fixed& a) const {
	return (this->getRawBits() < a.getRawBits());
}
bool Fixed::operator>=(const Fixed& a) const {
	return (this->getRawBits() >= a.getRawBits());
}
bool Fixed::operator<=(const Fixed& a) const {
	return (this->getRawBits() <= a.getRawBits());
}
bool Fixed::operator==(const Fixed& a) const {
	return (this->getRawBits() == a.getRawBits());
}
bool Fixed::operator!=(const Fixed& a) const {
	return (this->getRawBits() != a.getRawBits());
}

Fixed Fixed::operator+(const Fixed& a) const {
	Fixed result( toFloat() + a.toFloat() );
	return result;
}
Fixed Fixed::operator-(const Fixed& a) const {
	Fixed result ( toFloat() - a.toFloat() );
	return result;
}
Fixed Fixed::operator*(const Fixed& a) const {
	Fixed result ( toFloat() * a.toFloat() );
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
	const Fixed temp(*this);
	this->fixed++;
	return temp;
}
Fixed& Fixed::operator--() {
	this->fixed--;
	return *this;
}
const Fixed Fixed::operator--(int) {
	const Fixed temp(*this);
	this->fixed--;
	return temp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
	return (a < b ? a : b);
}
const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	return (a < b ? a : b);
}
Fixed& Fixed::max(Fixed& a, Fixed& b) {
	return (a < b ? b : a);
}
const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	return (a < b ? b : a);
}
