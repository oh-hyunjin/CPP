#include "AAnimal.hpp"

AAnimal::AAnimal() {
	type = "AANIMAL";
	std::cout << "AAnimal Default constructor called" << std::endl;
}
AAnimal::AAnimal(const AAnimal& src) {
	this->type = src.type;
	std::cout << "AAnimal Copy constructor called" << std::endl;
}
AAnimal& AAnimal::operator=(const AAnimal& src) {
	if (this != &src) {
		this->type = src.type;
	}
	std:: cout << "AAnimal Copy assignment operator called" << std::endl;
	return *this;
}
AAnimal::~AAnimal() {
	std::cout << "AAnimal Destructor called" << std::endl;
}

const std::string& AAnimal::getType() const {
	return type;
}

void AAnimal::makeSound() const {
	std::cout << "AAnimal makeSound() called" << std::endl;
}