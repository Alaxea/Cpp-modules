/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 17:03:16 by alicja            #+#    #+#             */
/*   Updated: 2025/03/30 18:01:57 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : m_name(name), m_hitPoints(10), m_energyPoints(10), m_attackDamage(0)
{
    std::cout << "ClapTrap: Default constructor called" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
    std::cout << "ClapTrap: Copy constructor called" << std::endl;
    *this = claptrap;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap)
{
    std::cout << "ClapTrap: Copy assigment operator called" << std::endl;
    if (this != &claptrap)
    {
        this->m_name = claptrap.m_name;
        this->m_hitPoints = claptrap.m_hitPoints;
        this->m_energyPoints = claptrap.m_energyPoints;
        this->m_attackDamage = claptrap.m_attackDamage;
    }
    return (*this);
}
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap: Destructor called" << std::endl;
}
void ClapTrap::attack(const std::string& target)
{
    if (this->m_hitPoints > 0 && this->m_energyPoints > 0)
    {
        --this->m_energyPoints;
        std::cout << "ClapTrap " << this->m_name << " attacks " << target << ", causing " << this->m_attackDamage << " points of damage!" << std::endl;
    }
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->m_hitPoints > 0 && this->m_energyPoints > 0)
    {
        this->m_hitPoints -= amount;
        std::cout << "ClapTrap " << this->m_name << " takes " << amount << " damage!"
            << " HP left: " << this->m_hitPoints << std::endl;
    }
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->m_hitPoints > 0 && this->m_energyPoints > 0)
    {
        this->m_hitPoints += amount;
        --this->m_energyPoints;
        std::cout << "ClapTrap " << this->m_name << " heals " << amount << " HP! New HP: " << this->m_hitPoints
            << " Energy left: " << this->m_energyPoints << std::endl;
    }
}