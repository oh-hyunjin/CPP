#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
    private:
    public:
        Ice(void);
        Ice(const Ice& src);
        Ice& operator=(Ice const& src);
        virtual ~Ice(void);

        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif