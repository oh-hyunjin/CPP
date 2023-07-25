#inclue "Cat.hpp"
#include <iostream>

Cat::Cat() {
	std::cout << "Cat Default constructor called" << std::endl;
}
Cat::Cat(const Cat& src) {
	this->type = src.type;
	std::cout << "Cat Copy constructor called" << std::endl;
}
Cat& Cat::operator=(const Cat& src) {
	if (this != &src) {
		this->type = src.type;
	}
	std:: cout << "Cat Copy assignment operator called" << std::endl;
	return *this;
}
Cat::~Cat() {
	std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() {
    std::cout << "meow meow ~ !" << std::endl;
}