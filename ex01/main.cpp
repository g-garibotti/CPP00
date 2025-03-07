#include "phonebook.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	PhoneBook phoneBook;
	// std::string command;

	// std::cout << "Welcome to My Awesome PhoneBook!" << std::endl;

	// while (true)
	// {
	// 	std::cout << "Enter command (ADD, SEARCH, or EXIT): ";
	// 	std::getline(std::cin, command);

	// 	if (command == "ADD")
	// 	{
	// 		phoneBook.addContact();
	// 	}
	// 	else if (command == "SEARCH")
	// 	{
	// 		phoneBook.searchContact();
	// 	}
	// 	else if (command == "EXIT")
	// 	{
	// 		std::cout << "Goodbye!" << std::endl;
	// 		break ;
	// 	}
	// 	else
	// 	{
	// 		std::cout << "Invalid command!" << std::endl;
	// 	}
	// }
	phoneBook.getcount();
	phoneBook.setcount(5);
	phoneBook.getcount();

	return (0);
}