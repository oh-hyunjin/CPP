#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
private:
	std::string _name; // ClapTrap 부모클래스의 이름과 동일하게?
	std::string ClapTrap::_name;
	int FragTrap::_HitPoints;
	int ScavTrap::_EnergyPoints;
	int FragTrap::_AttackDamage;

public:
	void ScavTrap::attack(const std::string& target);
	void WhoAmI(); // display both its name and its ClapTrap name
};

#endif