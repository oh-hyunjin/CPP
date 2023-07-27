#include "Brain.hpp"

Brain::Brain() {
    std::cout << "( Brain Default constructor called )" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = "idea";
}
Brain::Brain(const Brain& src) {
	std::cout << "( Brain Copy constructor called )" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = src.ideas[i];
}
Brain& Brain::operator=(Brain const& src) {
	std:: cout << "( Brain Copy assignment operator called )" << std::endl;
	if (this != &src) {
		for (int i = 0; i < 100; i++)
			ideas[i] = src.ideas[i];
	}
	return *this;
}
Brain::~Brain(void) {
	std::cout << "( Brain Destructor called )" << std::endl;
}