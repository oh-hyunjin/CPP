#include "AAnimal.hpp"

AAnimal::AAnimal() {
	std::cout << "( AAnimal Default constructor called )" << std::endl;
	type = "AANIMAL";
}
AAnimal::AAnimal(const AAnimal& src) {
	std::cout << "( AAnimal Copy constructor called )" << std::endl;
	this->type = src.type;
}
AAnimal& AAnimal::operator=(const AAnimal& src) {
	std:: cout << "( AAnimal Copy assignment operator called )" << std::endl;
	if (this != &src) {
		this->type = src.type;
	}
	return *this;
}
AAnimal::~AAnimal() {
	std::cout << "( AAnimal Destructor called )" << std::endl;
}

const std::string& AAnimal::getType() const {
	return type;
}

void AAnimal::makeSound() const {
	std::cout << "AAnimal makeSound() called" << std::endl;
}