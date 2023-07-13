#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name) {
}

Zombie::~Zombie() {
	std::cout << "(" << name << " destructor)" << std::endl;
}

void Zombie::annonce() {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;   
}
