#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string _name;
		int _HitPoints;
		int _EnergyPoints;
		int _AttackDamage;

	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& src);
		~ClapTrap(void);
		ClapTrap& operator=(ClapTrap const& src);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif