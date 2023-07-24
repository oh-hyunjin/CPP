#include "ScavTrap.hpp"

int main() {
	ScavTrap A("A");

	A.guardGate();
	for (int i = 0; i < 10; i++)
		A.attack("B");
	for (int i = 0; i < 5; i++)
		A.takeDamage(30);
	A.beRepaired(1);
}