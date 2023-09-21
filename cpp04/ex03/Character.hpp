#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"

class Character : public ICharacter {
    private:
        std::string name;
        AMateria* amateria[4];

    public:
        Character();
        Character(std::string name);
        Character(const Character& src);
        Character& operator=(Character const& src);
        virtual ~Character();

        const std::string& getName() const;
        AMateria* getAMateria(const int idx) const;
        
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif