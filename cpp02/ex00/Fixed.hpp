#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
	int fixed;
	static const int NumOfFractionalBits = 8;
public:
	Fixed();
	Fixed(const Fixed&); //copy constructor
	Fixed& operator=(const Fixed&); //copy assignment operator overload
	~Fixed();

	int		getRawBits(void) const; //  returns the raw value of the fixed-point value
	void	setRawBits(int const raw); // sets the raw value of the fixed-point number
};

#endif