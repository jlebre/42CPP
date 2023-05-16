/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 20:30:02 by jlebre            #+#    #+#             */
/*   Updated: 2023/05/16 00:10:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Returns a pointer to a Zombie so you can use it outside of the function
Zombie	*newZombie(std::string name)
{
	std::cout << "newZombie Called\n";
	std::cout << name << " is allocated on the heap\n\n";
	return (new Zombie(name));
}
