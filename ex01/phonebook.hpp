#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"

class PhoneBook
{
  public:
	PhoneBook();
	~PhoneBook();

	void AddContact();
	void SearchContact();
	void DisplayAllContacts();

  private:
	Contact Contacts[8];
	int ContactCount;
	int OldestContactIndex;

	std::string TruncateString(std::string str);
};

#endif