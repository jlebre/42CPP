/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlebre <jlebre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 20:27:20 by jlebre            #+#    #+#             */
/*   Updated: 2023/01/04 20:27:21 by jlebre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	*toupper(char *str)
{
	int i = 0;
	while (str[i])
	{
		if ((str[i] >= 97) && (str[i] <= 122))
			str[i] -= 32;
		i++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	int	i = 1;
	if (!argv[1])
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		std::cout << std::endl;
		return (0);
	}
	while (i < argc)
	{
		std::cout << toupper(argv[i]);
		i++;
	}
	std::cout << std::endl;
	return (0);
}
