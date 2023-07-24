#include "ClapTrap.hpp"

int main()
{
	ClapTrap A("A");

	for (int i = 0; i < 9; i++)
        A.attack("B");

    A.beRepaired(3);
	A.attack("B");
}