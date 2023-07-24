#include "FragTrap.hpp"

FragTrap::FragTrap() {
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) {
	this->_name = name;
	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	std::cout << "FragTrap Constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& src) {
	this->_name = src._name;
	this->_HitPoints = src._HitPoints;
	this->_EnergyPoints = src._EnergyPoints;
	this->_AttackDamage = src._AttackDamage;
	std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& src) {
	if (this != &src) {
		this->_name = src._name;
		this->_HitPoints = src._HitPoints;
		this->_EnergyPoints = src._EnergyPoints;
		this->_AttackDamage = src._AttackDamage;
	}
	std:: cout << "FragTrap Copy assignment operator called" << std::endl;
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Destructor called" << std::endl;
}

void FragTrap::highFivesGuys() {
	if (_HitPoints <= 0 || _EnergyPoints <= 0)
		std::cout << "FragTrap [" << _name << "] can\'t give a highfive" << std::endl;
	else
		std::cout << "FragTrap [" << _name << "] highFiveGuys" << std::endl;
}