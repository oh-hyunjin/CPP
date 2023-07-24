#include "FragTrap.hpp"

int main() {
	FragTrap A("A");

	A.highFivesGuys();
	for (int i = 0; i < 10; i++)
		A.attack("B");
	for (int i = 0; i < 5; i++)
		A.takeDamage(30);
	A.beRepaired(1);
}