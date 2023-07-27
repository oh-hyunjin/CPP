#include "WrongCat.hpp"

WrongCat::WrongCat() {
	type = "WRONGCAT";
	std::cout << "( WrongCat Default constructor called )" << std::endl;
}
WrongCat::WrongCat(const WrongCat& src) {
	this->type = src.type;
	std::cout << "( WrongCat Copy constructor called )" << std::endl;
}
WrongCat& WrongCat::operator=(const WrongCat& src) {
	std:: cout << "( WrongCat Copy assignment operator called )" << std::endl;
	if (this != &src) {
		this->type = src.type;
	}
	return *this;
}
WrongCat::~WrongCat() {
	std::cout << "( WrongCat Destructor called )" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "nyang nyang ~ !" << std::endl;
}