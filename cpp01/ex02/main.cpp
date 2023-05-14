#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "address of str   : " << &str << std::endl;
    std::cout << "address of strPTR: " << stringPTR << std::endl;
    std::cout << "address of strREF: " << &stringREF << std::endl;

    std::cout << "value of str   : " << str << std::endl;
    std::cout << "value of strPTR: " << *stringPTR << std::endl;
    std::cout << "value of strREF: " << stringREF << std::endl;
}