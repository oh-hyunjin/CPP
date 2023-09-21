#include "AMateria.hpp"
#include "Cure.hpp"

Cure::Cure() {
    this->type = "cure";
}

Cure::Cure(const Cure& src) {
    this->type = src.getType();
}

Cure& Cure::operator=(const Cure& src) {
    if (this != &src)
        this->type = src.getType();
    return* this;
}

Cure::~Cure() {
}

AMateria* Cure::clone() const {
    return new Cure();
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}