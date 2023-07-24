#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	this->_name = "no_name";
	this->_HitPoints = 10;
	this->_EnergyPoints = 10;
	this->_AttackDamage = 0;
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
	this->_name = name;
	this->_HitPoints = 10;
	this->_EnergyPoints = 10;
	this->_AttackDamage = 0;
	std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src) {
	this->_name = src._name;
	this->_HitPoints = src._HitPoints;
	this->_EnergyPoints = src._EnergyPoints;
	this->_AttackDamage = src._AttackDamage;
	std::cout << "ClapTrap Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src) {
	if (this != &src) {
		this->_name = src._name;
		this->_HitPoints = src._HitPoints;
		this->_EnergyPoints = src._EnergyPoints;
		this->_AttackDamage = src._AttackDamage;
	}
	std:: cout << "ClapTrap Copy assignment operator called" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (_HitPoints <= 0 || _EnergyPoints <= 0)
		std::cout << "ClapTrap [" << _name << "] can\'t attack" << std::endl;
	else {
		std::cout << "ClapTrap [" << _name << "] attacks [" << target << "], causing <" <<_AttackDamage << "> points of damage!" << std::endl;
		_EnergyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap [" << _name << "] took <" << amount << "> points of damage" << std::endl;
	_HitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_HitPoints <= 0)
		std::cout << "ClapTrap [" << _name << "] can\'t be repaired" << std::endl;
	else {
		std::cout << "ClapTrap [" << _name << "] is repaired <" << amount << "> points" << std::endl;
		_HitPoints += amount;
		_EnergyPoints--;
	}
}
