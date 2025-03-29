/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 17:23:19 by alicja            #+#    #+#             */
/*   Updated: 2025/03/29 20:12:19 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap: Default constructor called" << std::endl;
}

/*ClapTrap::ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage)
    : name(name), hitPoints(hitPoints), energyPoints(energyPoints), attackDamage(attackDamage)
{
    std::cout << "ClapTrap: Second constructor called" << std::endl;
}*/

ClapTrap::ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage)
{
    std::cout << "ClapTrap: Second constructor called" << std::endl;
    this->name = name;
    this->hitPoints = hitPoints;
    this->energyPoints = energyPoints;
    this->attackDamage = attackDamage;
}
/*Tworzy nowy obiekt jako kopię istniejącego*/
ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
    std::cout << "ClapTrap: Copy constructor called" << std::endl;
    *this = claptrap;
}
/*Kopiuje wartości do już istniejącego obiektu*/
ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap)
{
    std::cout << "ClapTrap: Copy assigment operator called" << std::endl;
    this->name = claptrap.name;
    this->hitPoints = claptrap.hitPoints;
    this->energyPoints = claptrap.energyPoints;
    this->attackDamage = claptrap.attackDamage;
    return (*this);
}
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap: Destructor called" << std::endl;
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

void ClapTrap::setName(std::string name)
{
    this->name = name;
}

void ClapTrap::setHitPoints(int hitPoints)
{
    this->hitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints(int energyPoints)
{
    this->energyPoints = energyPoints;
}

void ClapTrap::setAttackDamage(int attackDamage)
{
    this->attackDamage = attackDamage;
}

std::string ClapTrap::getName() const
{
    return this->name;
}

int ClapTrap::getHitPoints() const
{
    return this->hitPoints;
}

int ClapTrap::getEnergyPoints() const
{
    return this->energyPoints;
}

int ClapTrap::getAttackDamage() const
{
    return this->attackDamage;
}