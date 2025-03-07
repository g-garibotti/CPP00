#include "phonebook.hpp"
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

// Constructor
PhoneBook::PhoneBook() : oldestIndex(0), count(0) { std::cout << "PhoneBook created!" << std::endl; }

PhoneBook::~PhoneBook() { std::cout << "PhoneBook destroyed!" << std::endl; }

// Add a new contact
void PhoneBook::addContact()
{
	Contact	newContact;

	std::string input;
	std::cout << "Enter first name: ";
	std::getline(std::cin, input);
	if (input.empty())
	{
		std::cout << "Field cannot be empty!" << std::endl;
		return ;
	}
	newContact.setFirstName(input);
	std::cout << "Enter last name: ";
	std::getline(std::cin, input);
	if (input.empty())
	{
		std::cout << "Field cannot be empty!" << std::endl;
		return ;
	}
	newContact.setLastName(input);
	std::cout << "Enter nickname: ";
	std::getline(std::cin, input);
	if (input.empty())
	{
		std::cout << "Field cannot be empty!" << std::endl;
		return ;
	}
	newContact.setNickname(input);
	std::cout << "Enter phone number: ";
	std::getline(std::cin, input);
	if (input.empty())
	{
		std::cout << "Field cannot be empty!" << std::endl;
		return ;
	}
	newContact.setPhoneNumber(input);
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, input);
	if (input.empty())
	{
		std::cout << "Field cannot be empty!" << std::endl;
		return ;
	}
	newContact.setDarkestSecret(input);
	// Add the contact to the array
	contacts[oldestIndex] = newContact;
	oldestIndex = (oldestIndex + 1) % 8;
	if (count < 8)
		count++;
	std::cout << "Contact added successfully!" << std::endl;
}

// Format a field to display in the table
std::string PhoneBook::formatField(const std::string &field) const
{
	if (field.length() <= 10)
		return (field);
	return (field.substr(0, 9) + ".");
}

// Display all contacts in a table
void PhoneBook::displayContacts() const
{
	std::cout << std::setw(10) << "Index"
				<< "|";
	std::cout << std::setw(10) << "First Name"
				<< "|";
	std::cout << std::setw(10) << "Last Name"
				<< "|";
	std::cout << std::setw(10) << "Nickname" << std::endl;

	for (int i = 0; i < count; i++)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << formatField(contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) << formatField(contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << formatField(contacts[i].getNickname()) << std::endl;
	}
}

// Display details of a specific contact
void PhoneBook::displayContactDetails(int index) const
{
	std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
	std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
	std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << std::endl;
}

// Search and display a contact
void PhoneBook::searchContact() const
{
	if (count == 0)
	{
		std::cout << "Phonebook is empty!" << std::endl;
		return ;
	}

	displayContacts();

	std::string input;
	int index;

	std::cout << "Enter index to display: ";
	std::getline(std::cin, input);

	// Check if input is a valid number (C++98 compatible)
	std::istringstream ss(input);
	if (!(ss >> index) || !ss.eof())
	{
		std::cout << "Invalid input!" << std::endl;
		return ;
	}

	if (index < 0 || index >= count)
	{
		std::cout << "Invalid index!" << std::endl;
		return ;
	}
	displayContactDetails(index);
}

void PhoneBook::getcount() const
{
	std::cout << "NAME CONTACT : " << this->count << std::endl;
}

void PhoneBook::setcount(int count)
{
	this->count = count;
}