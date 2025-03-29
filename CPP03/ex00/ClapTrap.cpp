/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 17:03:16 by alicja            #+#    #+#             */
/*   Updated: 2025/03/28 17:26:22 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "Default constructor called" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = claptrap;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap)
{
    std::cout << "Copy assigment operator called" << std::endl;
    this->name = claptrap.name;
    this->hitPoints = claptrap.hitPoints;
    this->energyPoints = claptrap.energyPoints;
    this->attackDamage = claptrap.attackDamage;
    return (*this);
}
ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}
void ClapTrap::attack(const std::string& target)
{
    if (this->hitPoints > 0 && this->energyPoints > 0)
    {
        --this->hitPoints;
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
    }
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoints > 0 && this->energyPoints > 0)
    {
        this->hitPoints -= amount;
    }
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hitPoints > 0 && this->energyPoints > 0)
    {
        this->hitPoints += amount;
        --this->energyPoints;
    }
}