#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {
}

void HumanB::setWeapon(Weapon& weapon) {
    this->weapon = &weapon;
}

void HumanB::attack() {
    if (weapon == NULL) {
        std::cout << "HumanB has not a weapon" << std::endl;
        return;
    }
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}