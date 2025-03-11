#include "phonebook.hpp"
#include <csignal>
#include <cstdlib>
#include <iostream>
#include <string>

int	main(void)
{
	PhoneBook	phoneBook;

	std::string userOption;
	std::cout << " ___________________________" << std::endl;
	std::cout << "|  MY AWESOME PHONEBOOK     |" << std::endl;
	std::cout << "|___________________________|" << std::endl;
	while (true)
	{
		std::cout << "\nChoose an option: ADD, SEARCH, EXIT" << std::endl;
		std::cout << "> ";
		std::cin >> userOption;
		if (std::cin.eof())
		{
			std::cout << "\nEOF detected. Exiting PhoneBook." << std::endl;
			break ;
		}
		if (userOption == "ADD")
		{
			phoneBook.AddContact();
		}
		else if (userOption == "SEARCH")
		{
			phoneBook.SearchContact();
		}
		else if (userOption == "EXIT")
		{
			std::cout << "Goodbye!" << std::endl;
			break ;
		}
		else
		{
			std::cout << "Invalid option! Please try again." << std::endl;
		}
	}
	return (0);
}
