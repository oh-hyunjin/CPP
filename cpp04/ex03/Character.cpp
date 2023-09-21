#include "Character.hpp"

Character::Character() {
    this->name = "default";
    for (int i = 0; i < 4; i++)
        this->amateria[i] = NULL;
}

Character::Character(std::string name) {
    this->name = name;
    for (int i = 0; i < 4; i++)
        this->amateria[i] = NULL;
}

Character::Character(const Character& src) {
    for (int i = 0; i < 4; i++)
        this->amateria[i] = NULL;
    *this = src;
}

Character &Character::operator=(const Character& src) {
    if (this != &src) {
        this->name = src.getName();
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

Character::~Character() {
    for (int i = 0; i < 4; i++) {
        if (this->amateria[i] != NULL) {
            delete this->amateria[i];
            this->amateria[i] = NULL;
        }
    }
}

const std::string& Character::getName() const {
    return this->name;
}

AMateria* Character::getAMateria(const int idx) const {
    return this->amateria[idx];
}

void Character::equip(AMateria* m) {
    if (m == NULL)
        return ;
    for (int i = 0; i < 4; i++) {
        if (this->amateria[i] == NULL) {
            this->amateria[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx) {
    if (this->amateria[idx] != NULL)
        this->amateria[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
    if (this->amateria[idx] != NULL)
        this->amateria[idx]->use(target);
}
