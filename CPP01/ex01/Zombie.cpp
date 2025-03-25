/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 18:26:29 by alicja            #+#    #+#             */
/*   Updated: 2025/03/18 12:55:51 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*constructors and destructors*/
Zombie::Zombie(void)
{
    std::cout << "The Zombie appeared" << std::endl;
    return ;
}

Zombie::~Zombie(void)
{
    std::cout << "Ughh...Zombie is dead" << std::endl;
    return ;
}
/*setters*/
void Zombie::setName(std::string name)
{
    this->name = name;
}
/*public function*/
void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}