#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
private:
	Contact contacts[8];
public:
	PhoneBook();
	~PhoneBook();
	void    help(int i);
	int		add(int i);
	void		search(int i);
	void	call(int nb);
};

#endif