#include "contact.hpp"
#include <iostream>

// Constructor
Contact::Contact()
{
	std::cout << "Contact constructor called!" << std::endl;
}

// Destructor
Contact::~Contact()
{
	std::cout << "Contact destructor called!" << std::endl;
}

std::string Contact::get_first_name()
{
	return (first_name);
}

std::string Contact::get_last_name()
{
	return (last_name);
}

std::string Contact::get_nickname()
{
	return (nickname);
}

std::string Contact::get_number()
{
	return (number);
}

std::string Contact::get_darkest_secret()
{
	return (darkest_secret);
}

void Contact::set_first_name(std::string first_name)
{
	this->first_name = first_name;
}

void Contact::set_last_name(std::string last_name)
{
	this->last_name = last_name;
}

void Contact::set_nickname(std::string nickname)
{
	this->nickname = nickname;
}

void Contact::set_number(std::string number)
{
	this->number = number;
}

void Contact::set_darkest_secret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
}

