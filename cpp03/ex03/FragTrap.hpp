#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : virtual public ClapTrap {
public:
	FragTrap();
	FragTrap(const FragTrap& src);
	~FragTrap();
	FragTrap& operator=(FragTrap const& src);

	FragTrap(std::string name);
	void highFivesGuys();
};

#endif