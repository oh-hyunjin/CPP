#inclue "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : type(NULL) {
	std::cout << "WrongAnimal Default constructor called" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal& src) {
	this->type = src.type;
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src) {
	if (this != &src) {
		this->type = src.type;
	}
	std:: cout << "WrongAnimal Copy assignment operator called" << std::endl;
	return *this;
}
WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

void WrongAnimal::makeSound() {
	std::cout << "alfjsdjfakjfajsdlfjasldfj" << std::endl;
}