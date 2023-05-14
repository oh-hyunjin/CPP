#include "Zombie.hpp"

Zombie::~Zombie() {
	std::cout << "destroyed " << name << "[" << this->idx << "]" << std::endl;
}

void Zombie::set_name(std::string name) {
	this->name = name;
}

void Zombie::set_idx(int idx) {
	this->idx = idx;
}

void Zombie::announce() {
	std::cout << name << "[" << idx << "]" << ": BraiiiiiiinnnzzzZ..." << std::endl;   
}
