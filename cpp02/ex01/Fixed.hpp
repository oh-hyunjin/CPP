#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
	int fixed;
	static const int fractionalBits;
public:
	Fixed();
	Fixed(const Fixed&); //copy constructor
	Fixed& operator=(const Fixed&); //copy assignment operator overload
	~Fixed();

	int		getRawBits(void) const; //  returns the raw value of the fixed-point value
	void	setRawBits(int const raw); // sets the raw value of the fixed-point number

	Fixed(const int); //converts param -> fixed-point value, init fractional bits 8
	Fixed(const float); //converts param -> fixed-point value, init fractional bits 8
	float toFloat(void) const; //converts fixed-point value -> floating-point value
	int toInt(void) const; //converts fixed-point value -> int value
};

// inserts floating-point representation of the fixed-point num into the output stream object passed as param

#endif