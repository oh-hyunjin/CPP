#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
private:
	Brain* brain;
public:
	Dog();
	Dog(const Dog& src);
	virtual ~Dog();
	Dog& operator=(const Dog& src);

	virtual void makeSound() const;
};

#endif