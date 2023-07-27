#include "Animal.hpp"

Animal::Animal() {
	std::cout << "( Animal Default constructor called )" << std::endl;
	type = "ANIMAl";
}
Animal::Animal(const Animal& src) {
	std::cout << "( Animal Copy constructor called )" << std::endl;
	*this = src;
}
Animal& Animal::operator=(const Animal& src) {
	std:: cout << "( Animal Copy assignment operator called )" << std::endl;
	if (this != &src) {
		this->type = src.type;
	}
	return *this;
}
Animal::~Animal() {
	std::cout << "( Animal Destructor called )" << std::endl;
}

const std::string& Animal::getType() const {
	return type;
}

void Animal::makeSound() const {
	std::cout << "Animal makeSound() called" << std::endl;
}