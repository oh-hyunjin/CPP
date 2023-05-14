#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
	std::string	name;
	int			idx;
public:
	~Zombie();
	void	set_name(std::string name);
	void	set_idx(int idx);
	void	announce();
};

Zombie* zombieHorde(int N, std::string name);

#endif