#include "Dog.hpp"

Dog::Dog() {
	type = "Dog";
	brain = new Brain();
	std::cout << "Dog Default constructor called" << std::endl;
}
Dog::Dog(const Dog& src) {
	brain = NULL; //쓰레기 값인데 안에 실제 값은 없어서 delete하면 에러남
	*this = src;
	std::cout << "Dog Copy constructor called" << std::endl;
}
Dog& Dog::operator=(const Dog& src) {
	if (this != &src) {
		this->type = src.type;
		delete brain;
		brain = new Brain();
	}
	std:: cout << "Dog Copy assignment operator called" << std::endl;
	return *this;
}
Dog::~Dog() {
	delete brain;
	std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const{
    std::cout << "bark bark ~ !" << std::endl;
}