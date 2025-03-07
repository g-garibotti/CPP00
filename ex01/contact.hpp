#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
  private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

  public:
	// Constructors
	Contact();
	

	// Setters
	void setFirstName(const std::string &first);
	void setLastName(const std::string &last);
	void setNickname(const std::string &nick);
	void setPhoneNumber(const std::string &number);
	void setDarkestSecret(const std::string &secret);

	// Getters
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickname() const;
	std::string getPhoneNumber() const;
	std::string getDarkestSecret() const;

	// Check if contact is empty (no fields set)
	bool isEmpty() const;
};

#endif