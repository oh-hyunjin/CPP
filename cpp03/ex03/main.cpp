#include "DiamondTrap.hpp"

int main() {
	DiamondTrap A("A");

	std::cout << std::endl;
	A.print_info();
	A.highFivesGuys();
	A.WhoAmI();
	for (int i = 0; i < 10; i++)
		A.attack("B");
	for (int i = 0; i < 5; i++)
		A.takeDamage(30);
	A.beRepaired(1);

	std::cout << std::endl;
}