#include "Cat.hpp"

Cat::Cat() {
	std::cout << "( Cat Default constructor called )" << std::endl;
	type = "Cat";
	brain = new Brain();
}
Cat::Cat(const Cat& src) {
	std::cout << "( Cat Copy constructor called )" << std::endl;
	brain = NULL;
	*this = src;
}
Cat& Cat::operator=(const Cat& src) {
	std:: cout << "( Cat Copy assignment operator called )" << std::endl;
	if (this != &src) {
		this->type = src.type;
		delete brain;
		brain = new Brain();
	}
	return *this;
}
Cat::~Cat() {
	std::cout << "( Cat Destructor called )" << std::endl;
	delete brain;
}

void Cat::makeSound() const{
	std::cout << "nyang nyang ~ !" << std::endl;
}