/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 18:26:23 by alicja            #+#    #+#             */
/*   Updated: 2025/03/18 12:53:22 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define N 8

int main(void)
{
    Zombie *zombies = zombieHorde(N, "ZOMBIE"); //new[], dynamic allocation

    for (size_t i = 0; i < N; i++)
        zombies[i].announce();
    delete[] zombies;
    return (0);
}