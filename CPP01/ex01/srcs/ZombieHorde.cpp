/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 00:36:30 by marvin            #+#    #+#             */
/*   Updated: 2023/04/26 00:36:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    int i = 0;
    if (N > 100)
    {
        std::cerr << "Too many Zombies in your Horde\n";
        std::cerr << "Allocating 100 Zombies\n";
        N = 100;
    }
    Zombie *Horde = new Zombie[N];
    while (i < N)
    {
        Horde[i].name_it(name);
        Horde[i].announce();
        i++;
    }
    return (Horde);
}
