#include <iostream>
#include "Harl.hpp"

int main(int argc, char* argv[]) {
	if (argc != 2) {
		std::cout << "argv error" << std::endl;
		return 0;
	}

	Harl a;
	std::string str(argv[1]);
	a.complain(str);
}
