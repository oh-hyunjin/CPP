#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
	std::string	name;
	int			idx;
public:
	Zombie();
	~Zombie();
	void	set_name_idx(std::string name, int idx);
	void	announce();
};

Zombie* zombieHorde(int N, std::string name);

#endif