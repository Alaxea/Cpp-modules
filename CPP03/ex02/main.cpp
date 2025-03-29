/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 17:23:28 by alicja            #+#    #+#             */
/*   Updated: 2025/03/29 20:46:49 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap fragtrap("Coco");

    fragtrap.attack("Nut");
    fragtrap.takeDamage(1);
    fragtrap.beRepaired(1);
    fragtrap.highFivesGuys();
    return 0;
}