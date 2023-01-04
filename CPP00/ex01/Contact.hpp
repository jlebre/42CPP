#ifndef CONTACTS_HPP
# define CONTACTS_HPP

#include <iostream>
#include <stdlib.h>

class Contact
{
private:
	std::string nickname;
	std::string phone_number;
	std::string secret;

public:
	Contact();
	~Contact();
	std::string first_name;
	std::string last_name;
	int		new_contact();
	void	delete_contact();
	int		check_if_empty(std::string str);
	void	print_info();
	void	list(int id);
	void	print(std::string str);
};


#endif