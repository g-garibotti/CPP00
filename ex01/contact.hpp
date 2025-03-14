#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
  public:
	Contact();
	~Contact();

	std::string get_first_name();
	std::string get_last_name();
	std::string get_nickname();
	std::string get_number();
	std::string get_darkest_secret();

	void set_first_name(std::string first_name);
	void set_last_name(std::string last_name);
	void set_nickname(std::string nickname);
	void set_number(std::string number);
	void set_darkest_secret(std::string darkest_secret);

  private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string number;
	std::string darkest_secret;
};

#endif