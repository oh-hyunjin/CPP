#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	std::cout << "ScavTrap Default constrctor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
	this->_name = name;
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	std::cout << "ScavTrap Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& src) {
	this->_name = src._name;
	this->_HitPoints = src._HitPoints;
	this->_EnergyPoints = src._EnergyPoints;
	this->_AttackDamage = src._AttackDamage;
	std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src) {
	if (this != &src) {
		this->_name = src._name;
		this->_HitPoints = src._HitPoints;
		this->_EnergyPoints = src._EnergyPoints;
		this->_AttackDamage = src._AttackDamage;
	}
	std:: cout << "ScavTrap Copy assignment operator called" << std::endl;
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTraps Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (_HitPoints <= 0 || _EnergyPoints <= 0)
		std::cout << "ScavTrap [" << _name << "] can\'t attack" << std::endl;
	else {
		std::cout << "ScavTrap [" << _name << "] attacks [" << target << "], causing <" <<_AttackDamage << "> points of damage!" << std::endl;
		_EnergyPoints--;
	}
}

void ScavTrap::guardGate() {
	if (_HitPoints <= 0 || _EnergyPoints <= 0)
		std::cout << "ScavTrap [" << _name << "] can\'t be in gate keeper mode" << std::endl;
	else
		std::cout << "ScavTrap [" << _name << "] is now in gate kepper mode" << std::endl;
}