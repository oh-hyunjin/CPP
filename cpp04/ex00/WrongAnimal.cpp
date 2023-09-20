#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "( WrongAnimal Default constructor called )" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal& src) {
	this->type = src.type;
	std::cout << "( WrongAnimal Copy constructor called )" << std::endl;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src) {
	std:: cout << "( WrongAnimal Copy assignment operator called )" << std::endl;
	if (this != &src) {
		this->type = src.type;
	}
	return *this;
}
WrongAnimal::~WrongAnimal() {
	std::cout << "( WrongAnimal Destructor called )" << std::endl;
}

const std::string& WrongAnimal::getType() const {
	return type;
}
void WrongAnimal::makeSound() const {
	std::cout << "Wrong Animal makeSound() called" << std::endl;
}
