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
    Zombie *Horde = new Zombie[N];
    while (i < N)
    {
        Horde[i].name_it(name);
        Horde[i].announce();
        i++;
    }
    return (Horde);
}
