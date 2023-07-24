#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "FragTrap [" << get_name() << "] is constructed" << std::endl;
	set_HitPoints(100);
	set_EnergyPoints(50);
	set_AttackDamage(20);
}

FragTrap::FragTrap(const FragTrap& src) { // :ClapTrap()안해도되나?
	std::cout << "FragTrap Copy constructor called" << std::endl;
	this->set_name(src.get_name());
	this->set_HitPoints(src.get_HitPoints());
	this->set_EnergyPoints(src.get_EnergyPoints());
	this->set_AttackDamage(src.get_AttackDamage());
}

FragTrap& FragTrap::operator=(const FragTrap& src) {
	std:: cout << "FragTrap Copy assignment operator called" << std::endl;
	if (this != &src) {
		this->set_name(src.get_name());
		this->set_HitPoints(src.get_HitPoints());
		this->set_EnergyPoints(src.get_EnergyPoints());
		this->set_AttackDamage(src.get_AttackDamage());
	}
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap [" << get_name() << "] is destructed" << std::endl;
}


FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap [" << get_name() << "] is constructed" << std::endl;
	set_HitPoints(100);
	set_EnergyPoints(100);
	set_AttackDamage(30);
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap highFiveGuys" << std::endl;
}