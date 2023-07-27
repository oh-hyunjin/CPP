#include "Cat.hpp"

Cat::Cat() {
	std::cout << "( Cat Default constructor called )" << std::endl;
	type = "CAT";
}
Cat::Cat(const Cat& src) {
	std::cout << "( Cat Copy constructor called )" << std::endl;
	this->type = src.type;
}
Cat& Cat::operator=(const Cat& src) {
	std:: cout << "( Cat Copy assignment operator called )" << std::endl;
	if (this != &src) {
		this->type = src.type;
	}
	return *this;
}
Cat::~Cat() {
	std::cout << "( Cat Destructor called )" << std::endl;
}

void Cat::makeSound() const{
    std::cout << "nyang nyang ~ !" << std::endl;
}