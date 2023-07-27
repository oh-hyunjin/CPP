#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
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