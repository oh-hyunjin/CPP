#include "Zombie.hpp"

Zombie::Zombie() {
	std::cout << "(" << name << "[" << idx << "] constructor)" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "(" << name << "[" << idx << "] destructor)" << std::endl;
}

void Zombie::set_name_idx(std::string name, int idx) {
	this->name = name;
	this->idx = idx;
}

void Zombie::announce() {
	std::cout << name << "[" << idx << "]" << ": BraiiiiiiinnnzzzZ..." << std::endl;   
}
