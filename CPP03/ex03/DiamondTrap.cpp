/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 20:50:06 by alicja            #+#    #+#             */
/*   Updated: 2025/03/29 21:39:53 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), FragTrap(name), ScavTrap(name)
{
    this->name = name;
    this->ClapTrap::setName(name + "_clap_name");
    std::cout << "DiamondTrap: Default constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap: Destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondtrap): ClapTrap("_clap_name"), FragTrap("_frag_name"), ScavTrap("_scav_name")
{
    std::cout << "DiamondTrap: Copy constructor called" << std::endl;
    *this = diamondtrap;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondtrap)
{
    std::cout << "DiamondTrap: Copy assigment operator called" << std::endl;
    this->name = diamondtrap.name;
    return (*this);
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap: My name is " << this->name << " and my ClapTrap name is " << this->ClapTrap::name << std::endl;
}