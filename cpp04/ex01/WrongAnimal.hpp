#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& src);
	virtual ~WrongAnimal();
	WrongAnimal& operator=(WrongAnimal const& src);

	const std::string& getType() const;
	void makeSound() const;
};

#endif