#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "utils.hpp"

int get_str(std::string msg, std::string &dest) {
	std::cout << msg;
	std::getline(std::cin, dest);
	if (dest == "\0"){
		std::cout << "!! error !!" << std::endl;
		return -1;
	}
	return 1;
}

std::string cut_ten(std::string str) {
	if(str.size() <= 10)
		return str;
	std::string tmp;
	for (int i = 0; i < 9; i++)
		tmp += str[i];
	tmp += ".";
	return tmp;
}

int main()
{
	PhoneBook pb;
	std::string input;

	while(1) {
		std::cout << "\n*************************************\n";
		if (get_str("command(ADD/SEARCH/EXIT) >> ", input) == -1)
			continue;
		if (input == "ADD")
			pb.add();
		else if (input == "SEARCH")
			pb.search();
		else if (input == "EXIT")
			break;
		else
			std::cout << "!! wrong command !!" << std::endl;
	}
}