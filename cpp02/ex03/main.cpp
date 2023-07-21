#include "Fixed.hpp"
#include "Point.hpp"

int main() {
	if (bsp(Point(0,0), Point(4,0), Point(0,3), Point(1.55f,1.52f)) == true)
		std::cout <<"True\n";
	else
		std::cout <<"False\n";
}