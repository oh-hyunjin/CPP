#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp1;
	tmp1 = src->createMateria("ice");
	me->equip(tmp1);
	AMateria* tmp2;
	tmp2 = src->createMateria("cure");
	me->equip(tmp2);
    
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	me->unequip(0);
	me->unequip(1);
	me->use(0, *bob);

	delete bob;
	delete me;
	delete src;
	delete tmp1;
	delete tmp2;

	system("leaks Exercise03");
	return 0;
}