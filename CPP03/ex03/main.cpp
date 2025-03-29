/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 17:23:28 by alicja            #+#    #+#             */
/*   Updated: 2025/03/29 21:30:22 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap diamondtrap("Edwin");

    diamondtrap.attack("Tolek");
    diamondtrap.takeDamage(1);
    diamondtrap.beRepaired(1);
    diamondtrap.guardGate();
    diamondtrap.highFivesGuys();
    diamondtrap.whoAmI();
    return 0;
}