#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
    private:
        AMateria* amateria[4];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource& src);
        MateriaSource& operator=(MateriaSource const& src);
        virtual ~MateriaSource();

        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const& type);
        AMateria* getAMateria(const int idx) const;
};

#endif