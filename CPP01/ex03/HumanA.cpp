/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 13:30:55 by alicja            #+#    #+#             */
/*   Updated: 2025/03/18 19:34:06 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {}

HumanA::~HumanA() {}

void HumanA::attack(void) const
{
    if (this->weapon.getType() != "")
        std::cout << name << " attacks with their " << this->weapon.getType() << std::endl;
    else    
        std::cout << name << " wants to try bare-knuckle fight." << std::endl;
    return ;
}
