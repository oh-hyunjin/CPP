#include "Dog.hpp"

Dog::Dog() {
	std::cout << "( Dog Default constructor called )" << std::endl;
	type = "DOG";
}
Dog::Dog(const Dog& src) {
	std::cout << "( Dog Copy constructor called )" << std::endl;
	this->type = src.type;
}
Dog& Dog::operator=(const Dog& src) {
	std:: cout << "( Dog Copy assignment operator called )" << std::endl;
	if (this != &src) {
		this->type = src.type;
	}
	return *this;
}
Dog::~Dog() {
	std::cout << "( Dog Destructor called )" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "meong meong ~ !" << std::endl;
}