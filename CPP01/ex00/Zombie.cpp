/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:17:15 by alicja            #+#    #+#             */
/*   Updated: 2025/03/13 12:50:24 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << "Zombie: " << this->name << " has been destroyed." << std::endl;
}

void Zombie::announcement(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}