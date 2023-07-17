#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	int fixed;
	static const int fractionalBits;
public:
	Fixed();
	Fixed(const Fixed&);
	Fixed& operator=(const Fixed&);
	~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	Fixed(const int);
	Fixed(const float);
	float toFloat(void) const;
	int toInt(void) const;

	// ex02
	bool operator>(const Fixed&);
	bool operator<(const Fixed&);
	bool operator>=(const Fixed&);
	bool operator<=(const Fixed&);
	bool operator==(const Fixed&);
	bool operator!=(const Fixed&);

	Fixed operator+(const Fixed&);
	Fixed operator-(const Fixed&);
	Fixed operator*(const Fixed&);
	Fixed operator/(const Fixed&);

	//  that will increase or decrease the fixed-point value from \
the smallest representable ϵ such as 1 + ϵ > 1.?????????????????????????
	Fixed& operator++(); //전위
	Fixed operator++(int); //후위
	Fixed& operator--();
	Fixed& operator--(int);

	static Fixed& min(Fixed&, Fixed&);
	static Fixed& min(const Fixed&, const Fixed&);
	static Fixed& max(Fixed&, Fixed&);
	static Fixed& max(const Fixed&, const Fixed&);
};

std::ostream& operator<<(std::ostream& out, const Fixed& a);

#endif