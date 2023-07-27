#include "Dog.hpp"

Dog::Dog() {
	std::cout << "( Dog Default constructor called )" << std::endl;
	type = "Dog";
	brain = new Brain();
}
Dog::Dog(const Dog& src) {
	std::cout << "( Dog Copy constructor called )" << std::endl;
	brain = NULL;
	*this = src;
}
Dog& Dog::operator=(const Dog& src) {
	std:: cout << "( Dog Copy assignment operator called )" << std::endl;
	if (this != &src) {
		this->type = src.type;
		delete brain;
		brain = new Brain();
	}
	return *this;
}
Dog::~Dog() {
	std::cout << "( Dog Destructor called )" << std::endl;
	delete brain;
}

void Dog::makeSound() const{
    std::cout << "meong meong ~ !" << std::endl;
}