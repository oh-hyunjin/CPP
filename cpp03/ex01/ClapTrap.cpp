#include "ClapTrap.hpp"

ClapTrap::ClapTrap() \
	: _name("no_name"), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0) {
		std::cout << "ClapTrap [" << _name << "] is constructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src) {
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	this->_name = src._name;
	this->_HitPoints = src._HitPoints;
	this->_EnergyPoints = src._EnergyPoints;
	this->_AttackDamage = src._AttackDamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src) {
	std:: cout << "ClapTrap Copy assignment operator called" << std::endl;
	if (this != &src) {
		this->_name = src._name;
		this->_HitPoints = src._HitPoints;
		this->_EnergyPoints = src._EnergyPoints;
		this->_AttackDamage = src._AttackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap [" << _name << "] is destructed" << std::endl;
}


ClapTrap::ClapTrap(std::string name) \
	: _name(name), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0) {
		std::cout << "ClapTrap [" << _name << "] is constructed" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (_HitPoints <= 0) {
		std::cout << "ClapTrap Attack fail :: [" << _name << "] has no HitPoints" << std::endl;
		return;
	}
	if (_EnergyPoints <= 0) {
		std::cout << "ClapTrap Attack fail :: [" << _name << "] has no EnergyPoints" << std::endl;
		return;
	}

	std::cout << "ClapTrap [" << _name << "] attacks [" << target << "], causing <" <<_AttackDamage << "> points of damage!" << std::endl;
	_EnergyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap [" << _name << "] took <" << amount << "> points of damage" << std::endl;
	_HitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_HitPoints <= 0) {
		std::cout << "ClapTrap Repair fail :: [" << _name << "] has no HitPoints" << std::endl;
		return;
	}
	if (_EnergyPoints <= 0) {
		std::cout << "ClapTrap Repair fail :: [" << _name << "] has no EnergyPoints" << std::endl;
		return;
	}

	std::cout << "ClapTrap [" << _name << "] is repaired <" << amount << "> points" << std::endl;
	_HitPoints += amount;
	_EnergyPoints--;
}


void ClapTrap::set_name(std::string name) {
	_name = name;
}
void ClapTrap::set_HitPoints(int HitPoints) {
	_HitPoints = HitPoints;
}
void ClapTrap::set_EnergyPoints(int EnergyPoints) {
	_EnergyPoints = EnergyPoints;
}
void ClapTrap::set_AttackDamage(int AttackDamage) {
	_AttackDamage = AttackDamage;
}

const std::string ClapTrap::get_name() const {
	return _name;
}
int ClapTrap::get_HitPoints() const {
	return _HitPoints;
}
int ClapTrap::get_EnergyPoints() const {
	return _EnergyPoints;
}
int ClapTrap::get_AttackDamage() const {
	return _AttackDamage;
}