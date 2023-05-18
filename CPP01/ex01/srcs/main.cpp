/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 20:28:44 by jlebre            #+#    #+#             */
/*   Updated: 2023/04/26 03:46:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *Horde = zombieHorde(500000000, "HORDE");
    if (Horde)
        delete[] Horde;
    Zombie *NewHorde = zombieHorde(3, "NEW");
    if (NewHorde)
        delete[] NewHorde;
    return (0);
}