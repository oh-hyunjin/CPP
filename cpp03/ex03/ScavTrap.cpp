#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap [" << get_name() << "] is constructed" << std::endl;
	set_HitPoints(100);
	set_EnergyPoints(50);
	set_AttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap& src) {
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	this->set_name(src.get_name());
	this->set_HitPoints(src.get_HitPoints());
	this->set_EnergyPoints(src.get_EnergyPoints());
	this->set_AttackDamage(src.get_AttackDamage());
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src) {
	std:: cout << "ScavTrap Copy assignment operator called" << std::endl;
	if (this != &src) {
		this->set_name(src.get_name());
		this->set_HitPoints(src.get_HitPoints());
		this->set_EnergyPoints(src.get_EnergyPoints());
		this->set_AttackDamage(src.get_AttackDamage());
	}
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap [" << get_name() << "] is destructed" << std::endl;
}


ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap [" << get_name() << "] is constructed" << std::endl;
	set_HitPoints(100);
	set_EnergyPoints(50);
	set_AttackDamage(20);
}

void ScavTrap::attack(const std::string& target) {
	if (get_HitPoints() <= 0) {
		std::cout << "ScavTrap Attack fail :: [" << get_name() << "] has no HitPoints" << std::endl;
		return;
	}
	if (get_EnergyPoints() <= 0) {
		std::cout << "ScavTrap Attack fail :: [" << get_name() << "] has no EnergyPoints" << std::endl;
		return;
	}

	std::cout << "ScavTrap [" << get_name() << "] attacks [" << target << "], causing <" <<get_AttackDamage() << "> points of damage!" << std::endl;
	set_EnergyPoints(get_EnergyPoints() - 1);
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap is now in gate kepper mode" << std::endl;
}