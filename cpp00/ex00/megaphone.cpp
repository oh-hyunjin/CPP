#include <iostream>

int main(int argc, char **argv)
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (int i = 1; i < argc; i++)
    {
        int j = 0;
        while(argv[i][j])
            std::cout << (char)toupper(argv[i][j++]);
    }
    std::cout << "\n";
}