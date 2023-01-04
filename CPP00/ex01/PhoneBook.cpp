/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 20:27:48 by jlebre            #+#    #+#             */
/*   Updated: 2023/01/04 20:27:49 by jlebre           ###   ########.fr       */
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
	PhoneBook::contacts[i].print_info();
	std::cout << "\n";
	return (1);
}

void	PhoneBook::call(int nb)
{
	int	index;
	std::string full_name;

	std::cout << "Whom do you wanna call?\n";
	PhoneBook::search(nb);
	std::cin >> index;
	if (index < 0 || index > 8)
		return ;
	full_name = PhoneBook::contacts[index].first_name + " " + PhoneBook::contacts[index].last_name;
	std::cout << "Calling " << full_name << "...";
	system("paplay call.ogg");
}

void	PhoneBook::search(int i)
{
	int	id = 0;
	int	index;
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
	std::cout << "\nChoose a contact:\n";
	std::cin >> index;
	std::cout << "\n";
	if (index < 0 || index > 8 || index > i)
	{
		std::cout << "Invalid input!\n";
		return ;
	}
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
