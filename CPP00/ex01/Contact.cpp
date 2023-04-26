/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 20:27:30 by jlebre            #+#    #+#             */
/*   Updated: 2023/04/26 16:12:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void	Contact::print(std::string str)
{
	int spaces = 10 - str.length();
	int	i = 0;

	std::cout << "|";
	if (str.length() > 9)
		std::cout << str.substr(0, 9) << ".";
	else
	{
		while (i < spaces)
		{
			std::cout << " ";
			i++;
		}
		std::cout << str;
	}
}

void	Contact::list(int id)
{
	std::cout << "\n|         " << id + 1;
	Contact::print(Contact::first_name);
	Contact::print(Contact::last_name);
	Contact::print(Contact::nickname);
	std::cout << "|\n";
}

void	Contact::print_info()
{
	std::cout << "First Name: " << Contact::first_name << std::endl;
	std::cout << "Last Name: " << Contact::last_name << std::endl;
	std::cout << "Nickame: " << Contact::nickname << std::endl;
	std::cout << "Phone Number: " << Contact::phone_number << std::endl;
	std::cout << "Secret: " << Contact::secret << std::endl;
	std::cout << "\n";
}

int	Contact::check_if_empty(std::string str)
{
	if (str.compare(" ") == 0 || str.compare("\n") == 0 || str.compare("\v") == 0
		|| str.compare("\t") == 0 || str.compare("\r") == 0 || str.compare("\f") == 0
		|| str.compare("") == 0)
	{
		Contact::delete_contact();
		return (0);
	}
	return (1);
}

int	Contact::new_contact()
{
	std::cout << "First Name: ";
	std::getline(std::cin, Contact::first_name);
	if (!check_if_empty(Contact::first_name) || std::cin.eof())
		return (0);
	std::cout << "Last Name: ";
	std::getline(std::cin, Contact::last_name);
	if (!check_if_empty(Contact::last_name) || std::cin.eof())
		return (0);
	std::cout << "Nickame: ";
	std::getline(std::cin, Contact::nickname);
	if (!check_if_empty(Contact::nickname) || std::cin.eof())
		return (0);
	std::cout << "Phone Number: ";
	std::getline(std::cin, Contact::phone_number);
	if (!check_if_empty(Contact::phone_number) || std::cin.eof())
		return (0);
	std::cout << "Secret: ";
	std::getline(std::cin, Contact::secret);
	if (!check_if_empty(Contact::secret) || std::cin.eof())
		return (0);
	return (1);
}

void	Contact::delete_contact()
{
	Contact::first_name.clear();
	Contact::last_name.clear();
	Contact::nickname.clear();
	Contact::phone_number.clear();
	Contact::secret.clear();
}


