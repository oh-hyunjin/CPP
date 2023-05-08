/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyoh <hyoh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:20:25 by hyoh              #+#    #+#             */
/*   Updated: 2023/05/08 15:48:16 by hyoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

class Contact{
public:
	std::string FirstName;
	std::string LastName;
	std::string NickName;
	std::string PhoneNumber;
	std::string DarkestSecret;
};

class PhoneBook{
public:
	int cur;
	Contact array[8];
	void add();
	void search();
	void display_all();
	void display_one(int idx);
};

int get_str(std::string text, std::string *dest){
	std::cout << text;
	
	std::getline(std::cin, *dest);
	//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // 버퍼 비움

	if (*dest == "\0"){
		std::cout << "error" << std::endl;
		return (-1);
	}
	return (1);
}

void PhoneBook::add(){
	Contact tmp;

	if (get_str("first name >> ", &tmp.FirstName) == -1)
		return ;
	if (get_str("last name >> ", &tmp.LastName) == -1)
		return ;
	if (get_str("nick name >> ", &tmp.NickName) == -1)
		return ;
	if (get_str("phone number >> ", &tmp.PhoneNumber) == -1)
		return ;
	if (get_str("darkest secret >> ", &tmp.DarkestSecret) == -1)
		return ;

	array[cur % 8].FirstName = tmp.FirstName;
	array[cur % 8].LastName = tmp.LastName;
	array[cur % 8].NickName = tmp.NickName;
	array[cur % 8].PhoneNumber = tmp.PhoneNumber;
	array[cur % 8].DarkestSecret = tmp.DarkestSecret;
	std::cout << "saved " << "(" << cur % 8 << ")" << std::endl;
	cur++;
}

void PhoneBook::display_one(int idx){
	std::cout << "first name : " << array[idx].FirstName << std::endl;
	std::cout << "last name : " << array[idx].LastName << std::endl;
	std::cout << "nick name : " << array[idx].NickName << std::endl;
	std::cout << "phone number : " << array[idx].PhoneNumber << std::endl;
	std::cout << "darkest secret : " << array[idx].DarkestSecret << std::endl;
}

std::string cut_ten(std::string str) {
	if(str.size() <= 10)
		return str;
	std::string tmp;
	for (int i = 0; i < 9; i++)
		tmp += str[i]; // 됨?
	tmp += ".";
	return tmp;
}

void PhoneBook::display_all(){
	for (int i = 0; i < 8; i++) {
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << cut_ten(array[i].FirstName) << "|";
		std::cout << std::setw(10) << cut_ten(array[i].LastName) << "|";
		std::cout << std::setw(10) << cut_ten(array[i].NickName) << "|";
		std::cout << std::endl;
	}
}

void PhoneBook::search(){
	display_all();
	int idx;
	std::cout << "index(0~7) >> ";
	std::cin >> idx;
	if (0 <= idx && idx < 8)
		display_one(idx);
	else
		std::cout << "error" << std::endl;
}

int main()
{
	PhoneBook pb;
	std::string input;

	while(1)
	{
		std::cout << "------------------------------------------" << std::endl;
		if (get_str("command(ADD/SEARCH/EXIT) >> ", &input) == -1)
			continue ;
		if (input == "ADD")
			pb.add();
		else if (input == "SEARCH")
			pb.search();
		else if (input == "EXIT")
			break ;
		else
			std::cout << "error" << std::endl;
	}
}