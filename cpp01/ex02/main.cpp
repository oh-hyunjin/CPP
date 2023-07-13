#include <iostream>

int main()
{
    std::string stringVAR = "HI THIS IS BRAIN";
    std::string* stringPTR = &stringVAR;
    std::string& stringREF = stringVAR;

    std::cout << "address of the string variable  : " << &stringVAR << std::endl;
    std::cout << "address held by stringPTR       : " << stringPTR << std::endl;
    std::cout << "address held by stringREF       : " << &stringREF << std::endl;

    std::cout << "value of the string variable    : " << stringVAR << std::endl;
    std::cout << "value pointed to by stringPTR   : " << *stringPTR << std::endl;
    std::cout << "value pointed to by stringREF   : " << stringREF << std::endl;
}