#include "contact.hpp"

// Constructor
Contact::Contact()
{
}

// Setters
void Contact::setFirstName(const std::string &first)
{
	this->firstName = first;
}

void Contact::setLastName(const std::string &last)
{
	this->lastName = last;
}

void Contact::setNickname(const std::string &nick)
{
	this->nickname = nick;
}

void Contact::setPhoneNumber(const std::string &number)
{
	this->phoneNumber = number;
}

void Contact::setDarkestSecret(const std::string &secret)
{
	this->darkestSecret = secret;
}

// Getters
std::string Contact::getFirstName() const
{
	return (this->firstName);
}

std::string Contact::getLastName() const
{
	return (this->lastName);
}

std::string Contact::getNickname() const
{
	return (this->nickname);
}

std::string Contact::getPhoneNumber() const
{
	return (this->phoneNumber);
}

std::string Contact::getDarkestSecret() const
{
	return (this->darkestSecret);
}

// Check if contact is empty
bool Contact::isEmpty() const
{
	return (firstName.empty());
}
