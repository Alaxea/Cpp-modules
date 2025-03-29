/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 17:23:28 by alicja            #+#    #+#             */
/*   Updated: 2025/03/28 18:00:59 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap scavtrap("John");

    scavtrap.attack("Ben");
    scavtrap.takeDamage(5);
    scavtrap.beRepaired(3);
    scavtrap.guardGate();
    return 0;
}