#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	WrongCat(const WrongCat& src);
	~WrongCat();
	WrongCat& operator=(const WrongCat& src);

	makeSound();
};

#endif