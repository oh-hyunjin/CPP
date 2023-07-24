#include "ClapTrap.hpp"

int main()
{
	ClapTrap A("A");
	ClapTrap B("B");

	std::cout << std::endl;
	A.attack("B");
	B.takeDamage(9);
	B.beRepaired(10);

	B.attack("A");
	A.takeDamage(10);
	A.beRepaired(10);
	std::cout << std::endl;
}
