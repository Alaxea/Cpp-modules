/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 20:17:39 by alicja            #+#    #+#             */
/*   Updated: 2025/03/30 17:01:18 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    std::cout << "FragTrap: Default constructor called" << std::endl;
    this->m_hitPoints = 100;
    this->m_energyPoints = 100;
    this->m_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &fragtrap): ClapTrap("")
{
   std::cout << "FragTrap: Copy constructor called" << std::endl;
   this->m_name = fragtrap.m_name;
    this->m_hitPoints = fragtrap.m_hitPoints;
    this->m_energyPoints = fragtrap.m_energyPoints;
    this->m_attackDamage = fragtrap.m_attackDamage;

}

FragTrap &FragTrap::operator=(const FragTrap &fragtrap)
{
    std::cout << "FragTrap: Copy assigment operator called" << std::endl;
    this->m_name = fragtrap.m_name;
    this->m_hitPoints = fragtrap.m_hitPoints;
    this->m_energyPoints = fragtrap.m_energyPoints;
    this->m_attackDamage = fragtrap.m_attackDamage;
    return (*this);

}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap: Destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap: High five guys!" << std::endl;
}