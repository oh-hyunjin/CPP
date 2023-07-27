#include "Animal.hpp"

Animal::Animal() { // : type(NULL) 안해도 되나? 하면 세그폴트..
	type = "ANIMAL";
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

const std::string& Animal::getType() const {
	return type;
}

void Animal::makeSound() const {
	std::cout << "Animal makeSound() called" << std::endl;
}