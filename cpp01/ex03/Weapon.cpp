#include "Weapon.hpp"

Weapon::Weapon() {

}

Weapon::Weapon(std::string weapon) {
	type = weapon;
}

void Weapon::setType(std::string type) {
	this->type = type;
}

void Weapon::setWeapon(Weapon weapon) {
	type = 
}

const std::string& Weapon::getType() {
	return type;
}
