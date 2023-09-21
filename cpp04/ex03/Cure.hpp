#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
    private:
    public:
        Cure(void);
        Cure(const Cure& src);
        Cure& operator=(Cure const& rhs);
        virtual ~Cure(void);

        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif