/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 20:28:35 by jlebre            #+#    #+#             */
/*   Updated: 2023/04/26 03:53:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
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

void    Zombie::name_it(std::string name)
{
    Zombie::name = name;
}