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
		ClapTrap(const ClapTrap& src);
		~ClapTrap(void);
		ClapTrap& operator=(ClapTrap const& src);

		ClapTrap(std::string name);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		void set_name(std::string);
		void set_HitPoints(int);
		void set_EnergyPoints(int);
		void set_AttackDamage(int);
		const std::string get_name() const;
		int  get_HitPoints() const;
		int  get_EnergyPoints() const;
		int  get_AttackDamage() const;
};

#endif