#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
protected:
	std::string type;
public:
	Animal();
	Animal(const Animal& src);
	Animal& operator=(Animal const& src);
	virtual ~Animal();

	const std::string& getType() const;
	virtual void makeSound() const;
};

#endif