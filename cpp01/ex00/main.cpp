#include "Zombie.hpp"

int main()
{
	Zombie *a = newZombie("AAA");
	a->annonce();

	randomChump("???");

	Zombie *b = newZombie("BBB");
	b->annonce();

	delete a;
	delete b;
}