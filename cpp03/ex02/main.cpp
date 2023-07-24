#include "FragTrap.hpp"

int main() {
	FragTrap A("A");
	FragTrap B("B");

	std::cout << std::endl;
	A.highFivesGuys();
	for (int i = 0; i < 4; i++)
		A.attack("B");
	for (int i = 0; i < 4; i++)
		B.takeDamage(30);
	B.beRepaired(1);
	B.attack("A");
	B.highFivesGuys();
	std::cout << std::endl;
}