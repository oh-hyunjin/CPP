#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
private:
    std::string type;

public:
	Weapon();
	Weapon(std::string name);
	void	setWeapon(Weapon weapon);	
	void	setType(std::string);
	const std::string& getType();
};

#endif