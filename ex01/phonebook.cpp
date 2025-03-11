#include "phonebook.hpp"
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

PhoneBook::PhoneBook() : ContactCount(0), OldestContactIndex(0)
{
	std::cout << "PhoneBook created!" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook destroyed!" << std::endl;
}

void PhoneBook::AddContact()
{
	std::string input;
	std::cin.ignore();
	std::cout << "Enter first name: ";
	std::getline(std::cin, input);
	while (input.empty() && !std::cin.eof())
	{
		std::cout << "Field cannot be empty. Enter first name: ";
		std::getline(std::cin, input);
	}
	Contacts[OldestContactIndex].set_first_name(input);
	std::cout << "Enter last name: ";
	std::getline(std::cin, input);
	while (input.empty() && !std::cin.eof())
	{
		std::cout << "Field cannot be empty. Enter last name: ";
		std::getline(std::cin, input);
	}
	Contacts[OldestContactIndex].set_last_name(input);
	std::cout << "Enter nickname: ";
	std::getline(std::cin, input);
	while (input.empty() && !std::cin.eof())
	{
		std::cout << "Field cannot be empty. Enter nickname: ";
		std::getline(std::cin, input);
	}
	Contacts[OldestContactIndex].set_nickname(input);
	std::cout << "Enter phone number: ";
	std::getline(std::cin, input);
	while (input.empty() && !std::cin.eof())
	{
		std::cout << "Field cannot be empty. Enter phone number: ";
		std::getline(std::cin, input);
	}
	Contacts[OldestContactIndex].set_number(input);
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, input);
	while (input.empty() && !std::cin.eof())
	{
		std::cout << "Field cannot be empty. Enter darkest secret: ";
		std::getline(std::cin, input);
	}
	Contacts[OldestContactIndex].set_darkest_secret(input);
	std::cout << "Contact added successfully!" << std::endl;
	if (ContactCount < 8)
		ContactCount++;
	OldestContactIndex = (OldestContactIndex + 1) % 8;
}

std::string PhoneBook::TruncateString(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void PhoneBook::DisplayAllContacts()
{
	std::cout << "____________________________________________" << std::endl;
	std::cout << "|   INDEX  |FIRST NAME| LAST NAME| NICKNAME |" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < ContactCount; i++)
	{
		std::cout << "|" << std::setw(10) << i << "|";
		std::cout << std::setw(10) << TruncateString(Contacts[i].get_first_name()) << "|";
		std::cout << std::setw(10) << TruncateString(Contacts[i].get_last_name()) << "|";
		std::cout << std::setw(10) << TruncateString(Contacts[i].get_nickname()) << "|" << std::endl;
	}
	std::cout << "--------------------------------------------" << std::endl;
}

void PhoneBook::SearchContact()
{
	int	index;

	std::string input;
	if (ContactCount == 0)
	{
		std::cout << "PhoneBook is empty!" << std::endl;
		return ;
	}
	DisplayAllContacts();
	std::cout << "Enter index to display contact details: ";
	std::cin >> input;
	for (size_t i = 0; i < input.length(); i++)
	{
		if (!isdigit(input[i]))
		{
			std::cout << "Invalid index!" << std::endl;
			return ;
		}
	}
	std::istringstream iss(input);
	iss >> index;
	if (index < 0 || index >= ContactCount)
	{
		std::cout << "Index out of range!" << std::endl;
		return ;
	}
	std::cout << "First name: " << Contacts[index].get_first_name() << std::endl;
	std::cout << "Last name: " << Contacts[index].get_last_name() << std::endl;
	std::cout << "Nickname: " << Contacts[index].get_nickname() << std::endl;
	std::cout << "Phone number: " << Contacts[index].get_number() << std::endl;
	std::cout << "Darkest secret: " << Contacts[index].get_darkest_secret() << std::endl;
}
