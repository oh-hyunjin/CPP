#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++)
        this->amateria[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& src) {
    for (int i = 0; i < 4; i++)
        this->amateria[i] = NULL;
    *this = src;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& src) {
    if (this != &src) {
        for (int i = 0; i < 4; i++) {
            if (this->amateria[i]) {
                delete this->amateria[i];
                this->amateria[i] = NULL;
            }
            this->amateria[i] = src.amateria[i]->clone();
        }
    }
    return* this;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++) {
        if (this->amateria[i] != NULL) {
            delete this->amateria[i];
            this->amateria[i] = NULL;
        }
    }
}

void MateriaSource::learnMateria(AMateria* m) {
    for (int i = 0; i < 4; i++) {
        if (this->amateria[i] == NULL) {
            this->amateria[i] = m;
            break;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const& type) {
    for (int i = 0; i < 4; i++) {
        if (this->amateria[i]->getType() == type)
            return this->amateria[i]->clone();
    }
    return NULL;
}

AMateria* MateriaSource::getAMateria(const int idx) const {
    return this->amateria[idx];
}