/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 13:31:01 by alicja            #+#    #+#             */
/*   Updated: 2025/03/18 19:33:45 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
    this->weapon = NULL;
}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack(void) const
{
    if (this->weapon && this->weapon->getType() != "")
        std::cout << name << " attacks with their " << this->weapon->getType() << std::endl;
    else    
        std::cout << name << " wants to try bare-knuckle fight." << std::endl;
    return ;
}