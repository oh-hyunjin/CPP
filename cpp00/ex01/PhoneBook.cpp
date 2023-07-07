#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "utils.hpp"

void PhoneBook::add() {
	Contact tmp;

	if (get_str("first name >> ", tmp.FirstName) == -1)
		return;
	if (get_str("last name >> ", tmp.LastName) == -1)
		return;
	if (get_str("nickname >> ", tmp.NickName) == -1)
		return;
	if (get_str("phone number >> ", tmp.PhoneNumber) == -1)
		return;
	if (get_str("darkest secret >> ", tmp.DarkestSecret) == -1)
		return;
	
	array[cur % 8] = tmp;
	std::cout << "saved (" << cur % 8 << ")" << std::endl;
	cur++;
}

void PhoneBook::display_one(int idx) {
	std::cout << "first name : " << array[idx].FirstName << std::endl;
	std::cout << "last name : " << array[idx].LastName << std::endl;
	std::cout << "nick name : " << array[idx].NickName << std::endl;
	std::cout << "phone number : " << array[idx].PhoneNumber << std::endl;
	std::cout << "darkest secret : " << array[idx].DarkestSecret << std::endl;
}

void PhoneBook::display_all() {
	if (cur == 0) {
		std::cout << "  - the phonebook is empty -" << std::endl;
		return ;
	}

	std::cout << std::setw(10) << "index  " << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname " << "|";
	std::cout << std::endl;
	std::cout << "- - - - - - - - - - - - - - - - - - - - - - -" << std::endl;
	
	for (int i = 0; i < 8; i++) {
		if (i >= cur)
			break;
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << cut_ten(array[i].FirstName) << "|";
		std::cout << std::setw(10) << cut_ten(array[i].LastName) << "|";
		std::cout << std::setw(10) << cut_ten(array[i].NickName) << "|";
		std::cout << std::endl;
	}
}

void PhoneBook::search() {
	display_all();
	if (cur == 0)
		return;
	int idx;
	std::cout << "index(0~7) >> ";
	std::cin >> idx;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	if (std::cin.fail()) {
		std::cout << "!! wrong index !!" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return;
	}
	if (0 <= idx && idx < 8 && idx < cur)
		display_one(idx);
	else
		std::cout << "!! wrong index !!" << std::endl;
}