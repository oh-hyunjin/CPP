#inclue "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() {
	std::cout << "WrongCat Default constructor called" << std::endl;
}
WrongCat::WrongCat(const WrongCat& src) {
	this->type = src.type;
	std::cout << "WrongCat Copy constructor called" << std::endl;
}
WrongCat& WrongCat::operator=(const WrongCat& src) {
	if (this != &src) {
		this->type = src.type;
	}
	std:: cout << "WrongCat Copy assignment operator called" << std::endl;
	return *this;
}
WrongCat::~WrongCat() {
	std::cout << "WrongCat Destructor called" << std::endl;
}

void WrongCat::makeSound() {
    std::cout << "lsadjfjldjflajfsaajl" << std::endl;
}