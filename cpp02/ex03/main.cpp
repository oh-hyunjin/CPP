#include "Fixed.hpp"
#include "Point.hpp"

int main() {
	// if (bsp(Point(0, 0), Point(10, 0), Point(0, 10), Point(1,1)) == true)
	// 	std::cout <<"True\n";
	// else
	// 	std::cout <<"False\n";
	std::cout << Fixed(Fixed(0.0f) * Fixed(10.0f)) - (Fixed(10.0f) * Fixed(10.0f)) << std::endl;
}