#include "Harl.hpp"

void Harl::debug() {
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my \
7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}
void Harl::info() {
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn\'t put \
enough bacon in my burger! If you did, I wouldn\'t be asking for more!\n";
}

void Harl::warning() {
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free. I\'ve been coming for \
years whereas you started working here since last month.\n";
}
void Harl::error() {
	std::cout << "[ ERROR ]\n";
	std::cout <<  "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level) {
	std::string lev[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*ft_ptr[4])(void)
		= { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };

	int lev_num = -1;
	for (int i = 0 ; i < 4; i++)
		if (level == lev[i])
			lev_num = i;

	switch(lev_num) {
		case 0 :
			(this->*ft_ptr[0])();
			std::cout << std::endl;
		case 1 :
			(this->*ft_ptr[1])();
			std::cout << std::endl;
		case 2 :
			(this->*ft_ptr[2])();
			std::cout << std::endl;
		case 3 :
			(this->*ft_ptr[3])();
			std::cout << std::endl;
			break;
		default :
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
}