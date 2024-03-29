#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& src);
	WrongAnimal& operator=(WrongAnimal const& src);
	virtual ~WrongAnimal();

	const std::string& getType() const;
	void makeSound() const;
};

#endif