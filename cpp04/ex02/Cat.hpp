#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
private:
	Brain* brain;
public:
	Cat();
	Cat(const Cat& src);
	virtual ~Cat();
	Cat& operator=(const Cat& src);

	virtual void makeSound() const;
};

#endif