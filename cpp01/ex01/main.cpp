#include "Zombie.hpp"

int main()
{
	Zombie* a = zombieHorde(3, "A");

	for (int i = 0 ; i < 3; i++)
		a[i].announce();

	delete [] a;
}