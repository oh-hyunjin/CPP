#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	// AAnimal animal;
	// animal.makeSound();
	// std::cout << std::endl;

	Dog dog;
	dog.makeSound();
	std::cout << std::endl;

	Cat cat;
	cat.makeSound();
	std::cout << std::endl;
}