// PhoneBook.hpp
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"

class PhoneBook
{
  private:
	Contact contacts[8];
	int oldestIndex;
	int count;

  public:
	// Constructor
	PhoneBook();

	// Destructor
	~PhoneBook();

	// Methods
	void addContact();
	void searchContact() const;

	void setcount(int count);
	void getcount() const;

  private:
	// Helper methods
	void displayContacts() const;
	void displayContactDetails(int index) const;
	std::string formatField(const std::string &field) const;
};

#endif