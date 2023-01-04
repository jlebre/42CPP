/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 20:27:39 by jlebre            #+#    #+#             */
/*   Updated: 2023/01/04 20:27:40 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	int	i = 0;
	int	len = -1;
	std::string input;
	std::string last_input;
	PhoneBook   yellowpages;

	yellowpages.help(1);
	while (1)
	{
		if (last_input.compare("SEARCH"))
			std::cout << "\033[0;33m" << getenv("USER") << "$ \033[0m";
		if (i <= 8 && len != 8)
			len = i;
		if (i == 8)
			i = 0;
		std::getline(std::cin, input);
		last_input = input;
		if (!input.compare("ADD"))
			i += yellowpages.add(i);
		else if (!input.compare("SEARCH"))
		{
			yellowpages.search(len);
			input = "SEARCH";
		}
		else if (!input.compare("EXIT"))
			break ;
		else if (!input.compare("CALL"))
			yellowpages.call(len);
		else if (!input.empty())
		{
			std::cout << "\n\033[0;31mINVALID COMMAND!\033[0m" << std::endl;
			yellowpages.help(2);
		}
	}
	return (0);
}