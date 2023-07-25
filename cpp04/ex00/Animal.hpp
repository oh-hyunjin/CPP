#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal {
protected:
	std::string type;
public:
	Animal(void);
	Animal(const Animal& src);
	~Animal(void);
	Animal& operator=(Animal const& src);

	makeSound();
};

#endif