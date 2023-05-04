/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 20:27:48 by jlebre            #+#    #+#             */
/*   Updated: 2023/05/04 18:06:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

int	PhoneBook::add(int i)
{
	Contact	novo;

	if(!novo.new_contact())
	{
		std::cout << "\033[1;31mError:\033[0m Can't leave empty fields!\n";
		return (0);
	}
	PhoneBook::contacts[i] = novo;
	std::cout << "\n\033[1;32m";
	std::cout << PhoneBook::contacts[i].first_name + " " + PhoneBook::contacts[i].last_name;
	std::cout << " Sucessfully Created!\033[0m\n";
	std::cout << "\n";
	return (1);
}

int PhoneBook::is_valid(std::string input, int i)
{
	if (input.length() > 1)
		return (0);
	if (input[0] < '1' || input[0] > '8')
		return (0);
	if ((input[0] - 48) > i)
		return (0);
	return (1);
}

void	PhoneBook::search(int i)
{
	int	id = 0;
	int	index;
	std::string input;
	int	valid = 0;
	if (i == 0)
	{
		std::cout << "No Contacts!\n";
		return ;
	}
	std::cout << " ___________________________________________\n";
	std::cout << "|    ID    |   NAME   |  SURNAME | NICKNAME |";
	while (id < i)
	{
		PhoneBook::contacts[id].list(id);
		id++;
	}
	std::cout << "|__________|__________|__________|__________|\n";
	std::cout << "\nChoose a contact ID:\n";
	while (!valid)
	{
		std::getline(std::cin, input);
		if (!input.compare(""))
			return ;
		valid = PhoneBook::is_valid(input, i);
		if (!valid)
			std::cout << "\033[0;31mInvalid Input!\033[0m\n";
		if (std::cin.eof())
			return ;
	}
	index = input[0] - 48;
	std::cout << "\n";
	PhoneBook::contacts[index - 1].print_info();
	return ;
}

void	PhoneBook::help(int i)
{
	if (i == 1)
	{
		std::cout << "\033[0;33mWelcome to the Yellow Pages\n";
		std::cout << "The crappy awesome phonebook software\033[0m\n";
	}
	std::cout << "\033[1;37mADD\033[0m - To add a new contact\n";
	std::cout << "\033[1;37mSEARCH\033[0m - To search a contact\n";
	std::cout << "\033[1;37mEXIT\033[0m - To exit Yellow Pages\n";
}
