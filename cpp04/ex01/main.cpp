#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;
    std::cout << "\n-----my own test-----" << std::endl;
    Animal *arr1[4];
    arr1[0] = new Dog();
    arr1[1] = new Cat();
    arr1[2] = new Dog();
    arr1[3] = new Cat();
    for (int i = 0; i < 4; i++)
        delete arr1[i];
    std::cout << "\n-----my own test-----" << std::endl;
    Dog *dog1 = new Dog();
    Dog *dog2 = new Dog(*dog1);
    Cat *cat1 = new Cat();
    Cat *cat2 = new Cat(*cat1);
    delete dog1;
    delete dog2;
    delete cat1;
    delete cat2;
    
    std::cout << "\n-----copy assignment operator test-----" << std::endl;
    Dog *dog3 = new Dog();
    Dog *dog4 = new Dog();
    *dog3 = *dog4;
    return 0;
}


// int main()
// {
// 	Dog *dog1 = new Dog();
// 	std::cout << std::endl;
//     Dog *dog2 = new Dog(*dog1);
// 	std::cout << std::endl;

//     Cat *cat1 = new Cat();
// 	std::cout << std::endl;
//     Cat *cat2 = new Cat(*cat1);
// 	std::cout <<std::endl;
    
// 	delete dog1;
//     delete dog2;
//     delete cat1;
//     delete cat2;
// 	// const Animal* j = new Dog();
// 	// const Animal* i = new Cat();
// 	// std::cout << "----------------------------------" << std::endl;
// 	// delete j;
// 	// delete i;

// 	// std::cout << std::endl << "==================================" << std::endl << std::endl;

// 	// Animal* meta[6];
// 	// for (int i = 0; i < 3; i++)
// 	// 	meta[i] = new Dog();
// 	// for (int i = 0; i < 3; i++)
// 	// 	meta[3 + i] = new Cat();

// 	// std::cout << "----------------------------------" << std::endl;

// 	// for (int i = 0; i < 6; i++)
// 	// 	delete meta[i];

// 	// return 0;
// }