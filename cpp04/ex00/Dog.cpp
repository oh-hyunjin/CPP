#inclue "Dog.hpp"
#include <iostream>

Dog::Dog() {
	std::cout << "Dog Default constructor called" << std::endl;
}
Dog::Dog(const Dog& src) {
	this->type = src.type;
	std::cout << "Dog Copy constructor called" << std::endl;
}
Dog& Dog::operator=(const Dog& src) {
	if (this != &src) {
		this->type = src.type;
	}
	std:: cout << "Dog Copy assignment operator called" << std::endl;
	return *this;
}
Dog::~Dog() {
	std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() {
    std::cout << "bowwow ~ !" << std::endl;
}