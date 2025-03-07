#include "phonebook.hpp"
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

PhoneBook::PhoneBook()
{
	std::cout << "PhoneBook created!" << std::endl;
}

// Destructor
PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook destroyed!" << std::endl;
}
