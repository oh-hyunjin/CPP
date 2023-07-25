#inclue "Animal.hpp"
#include <iostream>

Animal::Animal() : type(NULL) {
	std::cout << "Animal Default constructor called" << std::endl;
}
Animal::Animal(const Animal& src) {
	this->type = src.type;
	std::cout << "Animal Copy constructor called" << std::endl;
}
Animal& Animal::operator=(const Animal& src) {
	if (this != &src) {
		this->type = src.type;
	}
	std:: cout << "Animal Copy assignment operator called" << std::endl;
	return *this;
}
Animal::~Animal() {
	std::cout << "Animal Destructor called" << std::endl;
}

void Animal::makeSound() {
	std::cout << "Animal makeSound() called" << std::endl;
}