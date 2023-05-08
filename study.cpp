#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string dest;

    std::getline(std::cin, dest);
	std::cin.ignore(10, '\n'); // 버퍼 비움

	if (dest == "\0"){
		std::cout << "error" << std::endl;
		return (-1);
	}
	return (1);
}