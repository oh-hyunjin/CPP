#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* w = new WrongCat();
	std::cout << std::endl;

	std::cout << meta->getType() << " " << std::endl;
	meta->makeSound();
	std::cout << std::endl;
	
	std::cout << j->getType() << " " << std::endl;
	j->makeSound();
	std::cout << std::endl;

	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	std::cout << std::endl;
	
	std::cout << w->getType() << " " << std::endl;
	w->makeSound();
	std::cout << std::endl;

	std::cout << std::endl;
	delete meta;
	delete i;
	delete j;
	delete w;
	return 0;
}