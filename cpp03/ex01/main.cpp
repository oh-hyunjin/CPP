#include "ScavTrap.hpp"

int main() {
	ScavTrap A("A");
	ScavTrap B("B");

	std::cout << std::endl;
	A.guardGate();
	for (int i = 0; i < 10; i++)
		A.attack("B");
	for (int i = 0; i < 10; i++)
		B.takeDamage(20);
	
	B.attack("A");
	B.beRepaired(1);
	std::cout << std::endl;
}