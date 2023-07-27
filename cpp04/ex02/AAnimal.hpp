#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal {
protected:
	std::string type;
public:
	AAnimal();
	AAnimal(const AAnimal& src);
	AAnimal& operator=(AAnimal const& src);
	virtual ~AAnimal();

	const std::string& getType() const;
	virtual void makeSound() const = 0;
};

#endif