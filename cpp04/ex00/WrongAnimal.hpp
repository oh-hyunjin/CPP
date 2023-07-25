#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

class WrongAnimal {
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& src);
	~WrongAnimal();
	WrongAnimal& operator=(WrongAnimal const& src);

	makeSound();
};

#endif