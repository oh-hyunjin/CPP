#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->name = name;
}

Zombie::~Zombie() {
	std::cout << "destroyed " << name << std::endl;
}

void Zombie::annonce() {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;   
}
