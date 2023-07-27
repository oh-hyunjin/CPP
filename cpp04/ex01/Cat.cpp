#include "Cat.hpp"

Cat::Cat() {
	type = "Cat";
	brain = new Brain();
	std::cout << "Cat Default constructor called" << std::endl;
}
Cat::Cat(const Cat& src) {
	brain = NULL;
	*this = src;
	std::cout << "Cat Copy constructor called" << std::endl;
}
Cat& Cat::operator=(const Cat& src) {
	if (this != &src) {
		this->type = src.type;
		// brain이 이미 할당되어 있으면 먼저 delete하기

		delete brain;
		brain = new Brain();
	}
	std:: cout << "Cat Copy assignment operator called" << std::endl;
	return *this;
}
Cat::~Cat() {
	delete brain;
	std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const{
	std::cout << "meow meow ~ !" << std::endl;
}