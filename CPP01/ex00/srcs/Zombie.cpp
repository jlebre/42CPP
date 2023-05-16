/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 20:28:35 by jlebre            #+#    #+#             */
/*   Updated: 2023/05/16 00:01:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Zombie is created and annouces itself
Zombie::Zombie(std::string name)
{
    Zombie::name = name;
    Zombie::announce();
}

Zombie::~Zombie()
{
    std::cout << Zombie::name << ": Destroyed!\n";
}

void    Zombie::announce()
{
    std::cout << Zombie::name;
    std::cout << ": BraiiiiiiinnnzzzZ...\n";
}