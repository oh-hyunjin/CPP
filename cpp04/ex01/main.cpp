#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    std::cout << "\n--------- test 0 ---------" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << std::endl;
    delete j;
    delete i;

    std::cout << "\n--------- test 1 ---------" << std::endl;
    Animal *arr1[4];
    arr1[0] = new Dog();
    arr1[1] = new Cat();
    arr1[2] = new Dog();
    arr1[3] = new Cat();
    std::cout << std::endl;
    for (int i = 0; i < 4; i++)
        delete arr1[i];

    std::cout << "\n--------- test 2 ---------" << std::endl;
    Dog *dog1 = new Dog();
    Dog *dog2 = new Dog(*dog1);
    Cat *cat1 = new Cat();
    Cat *cat2 = new Cat(*cat1);
    std::cout << std::endl;
    delete dog1;
    delete dog2;
    delete cat1;
    delete cat2;
    
    std::cout << "\n--------- test 3 ---------" << std::endl;
    Dog *dog3 = new Dog();
    Dog *dog4 = new Dog();
    *dog3 = *dog4;
    std::cout << std::endl;
    delete dog3;
    delete dog4;
}
