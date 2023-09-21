# include "AMateria.hpp"

AMateria::AMateria() {
    this->type = "default";
}

AMateria::AMateria(std::string const& type) {
    this->type = type;
}

AMateria::AMateria(const AMateria& src) {
    this->type = src.getType();
}

AMateria& AMateria::operator=(const AMateria& src) {
    if (this != &src)
        this->type = src.getType();
    return *this;
}

AMateria::~AMateria() {

}

std::string const &AMateria::getType() const {
    return this->type;
}

void AMateria::use(ICharacter &target) {
    (void)target;
}