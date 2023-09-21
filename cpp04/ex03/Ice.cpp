#include "AMateria.hpp"
#include "Ice.hpp"

Ice::Ice() {
    this->type = "ice";
}

Ice::Ice(const Ice& src) {
    this->type = src.getType();
}

Ice& Ice::operator=(const Ice& src) {
    if (this != &src)
        this->type = src.getType();
    return* this;
}

Ice::~Ice() {
}

AMateria* Ice::clone() const {
    return new Ice();
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}