#include "Zombie.hpp"

int main()
{
	Zombie a("AAA");
	Zombie *b = newZombie("BBB");
	
	a.annonce();
	b->annonce();
	randomChump("CCC");

	delete b;
}