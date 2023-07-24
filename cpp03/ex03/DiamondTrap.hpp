#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string _name;

	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& src);
		~DiamondTrap(void);
		DiamondTrap& operator=(DiamondTrap const& src);

		void print_info();
		void attack(const std::string& target);
		void WhoAmI(); // display both its name and its ClapTrap name
};

#endif