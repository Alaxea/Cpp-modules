/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 17:23:34 by alicja            #+#    #+#             */
/*   Updated: 2025/03/29 20:12:45 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap("", 100, 50, 20)
{
    std::cout << "ScavTrap: Default constructor called" << std::endl;
    this->setName(name);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap: Destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap): ClapTrap("")
{
    std::cout << "ScavTrap: Copy constructor called" << std::endl;
    this->setName(scavtrap.getName());
    this->setHitPoints(scavtrap.getHitPoints());
    this->setEnergyPoints(scavtrap.getEnergyPoints());
    this->setAttackDamage(scavtrap.getAttackDamage());
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavtrap)
{
    std::cout << "ScavTrap: Copy assigment operator called" << std::endl;
    this->setName(scavtrap.getName());
    this->setHitPoints(scavtrap.getHitPoints());
    this->setEnergyPoints(scavtrap.getEnergyPoints());
    this->setAttackDamage(scavtrap.getAttackDamage());
    return (*this);
}

void ScavTrap::guardGate()
{
    std:: cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    /*check if the character is alive and has energy to attack*/
    if (this->getHitPoints() > 0 && this->getEnergyPoints() > 0)
    {
        /*if yes, he attacks and loses 1 point of energy*/
        this->setEnergyPoints(this->getEnergyPoints() - 1);
        {
            std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
        }
    }
    else
    {
        std::cout << "ScavTrap " << this->getName() << " is too weak to attack!" << std::endl;
    }
}