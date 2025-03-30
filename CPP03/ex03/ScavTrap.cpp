/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 17:23:34 by alicja            #+#    #+#             */
/*   Updated: 2025/03/30 18:02:29 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    std::cout << "ScavTrap: Default constructor called" << std::endl;
    this->m_hitPoints = 100;
    this->m_energyPoints = 50;
    this->m_attackDamage = 20;

}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap: Destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap): ClapTrap(scavtrap)
{
    std::cout << "ScavTrap: Copy constructor called" << std::endl;
    this->m_name = scavtrap.m_name;
    this->m_hitPoints = scavtrap.m_hitPoints;
    this->m_energyPoints = scavtrap.m_energyPoints;
    this->m_attackDamage = scavtrap.m_attackDamage;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavtrap)
{
    std::cout << "ScavTrap: Copy assigment operator called" << std::endl;
    if (this != &scavtrap)
    {
        this->m_name = scavtrap.m_name;
        this->m_hitPoints = scavtrap.m_hitPoints;
        this->m_energyPoints = scavtrap.m_energyPoints;
        this->m_attackDamage = scavtrap.m_attackDamage;   
    }
    return (*this);
}

void ScavTrap::guardGate()
{
    std:: cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    /*check if the character is alive and has energy to attack*/
    if (this->m_hitPoints > 0 && this->m_energyPoints > 0)
    {
        /*if yes, he attacks and loses 1 point of energy*/
        this->m_energyPoints--;
            std::cout << "ScavTrap " << this->m_name << " attacks " << target << ", causing " << this->m_attackDamage << " points of damage!" << std::endl;
    }
    else
    {
        std::cout << "ScavTrap " << this->m_name << " is too weak to attack!" << std::endl;
    }
}