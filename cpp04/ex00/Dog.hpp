#ifndef DOG_HPP
#define DOG_HPP

class Dog : public Animal {
public:
	Dog();
	Dog(const Dog& src);
	~Dog();
	Dog& operator=(const Dog& src);

	makeSound();
};

#endif