#ifndef CAT_HPP
#define CAT_HPP

class Cat : public Animal {
public:
	Cat();
	Cat(const Cat& src);
	~Cat();
	Cat& operator=(const Cat& src);

	makeSound();
};

#endif