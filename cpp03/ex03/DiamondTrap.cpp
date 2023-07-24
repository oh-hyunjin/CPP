#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	ClapTrap::_name += "_clap_name";
	this->_HitPoints = FragTrap::_HitPoints;
	this->_EnergyPoints = ScavTrap::_EnergyPoints;
	this->_AttackDamage = FragTrap::_AttackDamage;
	std::cout << "DiamondTrap Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) {
	this->_name = name;
    ClapTrap::_name = name + "_clap_name";
	this->_HitPoints = FragTrap::_HitPoints;
	this->_EnergyPoints = ScavTrap::_EnergyPoints;
	this->_AttackDamage = FragTrap::_AttackDamage;
	std::cout << "DiamondTrap Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src) {
	this->_name = src._name;
	this->_HitPoints = src._HitPoints;
	this->_EnergyPoints = src._EnergyPoints;
	this->_AttackDamage = src._AttackDamage;
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& src) {
	if (this != &src) {
		this->_name = src._name;
		this->_HitPoints = src._HitPoints;
		this->_EnergyPoints = src._EnergyPoints;
		this->_AttackDamage = src._AttackDamage;
	}
	std:: cout << "DiamondTrap Copy assignment operator called" << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}

void DiamondTrap::WhoAmI() {
    std::cout << "DiamondTrap name: " << _name << " , ClapTrap name: " << ClapTrap::_name << std::endl;
}

void DiamondTrap::print_info() {
	std::cout << _name << ", " << _HitPoints << ", " << _EnergyPoints << ", " << _AttackDamage << std::endl;
}
