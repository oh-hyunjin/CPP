#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap {
private:

public:
	ScavTrap();
	ScavTrap(const ScavTrap& src);
	~ScavTrap();
	ScavTrap& operator=(ScavTrap const& src);

	ScavTrap(std::string name);
	void attack(const std::string& target);
	void guardGate();
};

#endif