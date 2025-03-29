/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 20:17:39 by alicja            #+#    #+#             */
/*   Updated: 2025/03/29 21:35:30 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap("", 100, 100, 30)
{
    std::cout << "FragTrap: Default constructor called" << std::endl;
    this->setName(name);
}

FragTrap::FragTrap(const FragTrap &fragtrap): ClapTrap("")
{
   std::cout << "FragTrap: Copy constructor called" << std::endl;
   this->setName(fragtrap.name);
   this->setHitPoints(fragtrap.hitPoints);
   this->setEnergyPoints(fragtrap.energyPoints);
   this->setAttackDamage(fragtrap.attackDamage);

}

FragTrap &FragTrap::operator=(const FragTrap &fragtrap)
{
    std::cout << "FragTrap: Copy assigment operator called" << std::endl;
    this->setName(fragtrap.name);
    this->setHitPoints(fragtrap.hitPoints);
    this->setEnergyPoints(fragtrap.energyPoints);
    this->setAttackDamage(fragtrap.attackDamage);
    return (*this);

}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap: Destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    /*check if the character is alive and has energy to attack*/
    if (this->getHitPoints() > 0 && this->getEnergyPoints() > 0)
    {
        /*if yes, he attacks and loses 1 point of energy*/
        this->setEnergyPoints(this->getEnergyPoints() - 1);
        {
            std::cout << "FragTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
        }
    }
    else
    {
        std::cout << "FragTrap " << this->getName() << " is too weak to attack!" << std::endl;
    }
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap: High five guys!" << std::endl;
}