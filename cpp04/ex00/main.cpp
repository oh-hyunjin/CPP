#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* a = new Animal();
	std::cout << a->getType() << " : ";
	a->makeSound();
	delete a;
	std::cout << std::endl;

	const Animal* d = new Dog();
	std::cout << d->getType() << " : ";
	d->makeSound();
	delete d;
	std::cout << std::endl;

	const Animal* c = new Cat();
	std::cout << c->getType() << " : ";
	c->makeSound();
	delete c;
	std::cout << std::endl;

	const WrongAnimal* w = new WrongCat();
	std::cout << w->getType() << " : ";
	w->makeSound();
	delete w;
	std::cout << std::endl;
}