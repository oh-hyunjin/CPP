#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook {
public:
    int cur;
    Contact array[8];
    void add();
    void search();
    void display_one(int idx);
    void display_all();
};

#endif