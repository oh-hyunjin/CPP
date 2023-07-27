#include "Brain.hpp"

Brain::Brain() {
	for (int i = 0; i < 100; i++)
		ideas[i] = "idea";
    std::cout << "Brain Default constructor called" << std::endl;
}
Brain::Brain(const Brain& src) {
	for (int i = 0; i < 100; i++)
		ideas[i] = src.ideas[i];
	std::cout << "Brain Copy constructor called" << std::endl;
}
Brain& Brain::operator=(Brain const& src) {
	if (this != &src) {
		for (int i = 0; i < 100; i++)
			ideas[i] = src.ideas[i];
	}
	std:: cout << "Brain Copy assignment operator called" << std::endl;
	return *this;
}
Brain::~Brain(void) {
	std::cout << "Brain Destructor called" << std::endl;
}