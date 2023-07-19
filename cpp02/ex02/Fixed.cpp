#include "Fixed.hpp"

Fixed::Fixed() : fixed(0) {
}

Fixed::Fixed(const Fixed& a) : fixed(a.fixed) {
}

Fixed& Fixed::operator=(const Fixed& a) {
	this->fixed = a.fixed;
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
	return (a < b ? a : b);
}
const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	return (a < b ? a : b);
}
Fixed& Fixed::max(Fixed& a, Fixed& b) {
	std::cout <<"#";
	return (a < b ? b : a);
}
const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	std::cout <<"@";
	return (a < b ? b : a);
}
