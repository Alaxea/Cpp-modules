/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 17:03:11 by alicja            #+#    #+#             */
/*   Updated: 2025/03/30 16:21:59 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap claptrap("John");

    claptrap.attack("Ben");
    claptrap.takeDamage(1);
    claptrap.beRepaired(1);
    return 0;
}