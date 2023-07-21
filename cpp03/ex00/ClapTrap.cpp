#include "ClapTrap.hpp"

ClapTrap::ClapTrap() \
	: _name("no_name"), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0) {
		std::cout << _name << "is constructed" << std::endl;
}

ClapTrap::ClapTrap(std::string name) \
	: _name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0) {
		std::cout << _name << "is constructed" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (_HitPoints == 0) {
		std::cout << "Attack fail :: ClapTrap" << _name << "has no HitPoints" << std::endl;
		return;
	}
	if (_EnergyPoints == 0) {
		std::cout << "Attack fail :: ClpaTrap" << _name << "has no EnergyPoints" << std::endl;
		return;
	}

	std::cout << "ClapTrap" << _name << "attacks " << target << ", causing" <<_AttackDamage << "points of damage!" << std::endl;
	_EnergyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap" << _name << "took " << amount << "points of damage" << std::endl;
	_HitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_HitPoints == 0) {
		std::cout << "Repair fail :: ClapTrap" << _name << "has no HitPoints" << std::endl;
		return;
	}
	if (_EnergyPoints == 0) {
		std::cout << "Repair fail :: ClapTrap" << _name << "has no EnergyPoints" << std::endl;
		return;
	}

	std::cout << "ClapTrap" << _name << "is repaired " << amount << "points" << std::endl;
	_HitPoints += amount;
	_EnergyPoints--;
}