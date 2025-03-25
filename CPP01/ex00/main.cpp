/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:16:08 by alicja            #+#    #+#             */
/*   Updated: 2025/03/17 18:19:30 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::string name;

    std::cout << "Zombie on the stack." << std::endl;
    std::cout << "Zombie name is: " << std::endl;
    std::cin >> name;

    Zombie zombieOne(name);

    std::cout << "Zombie on the heap." << std::endl;
    std::cout << "Zombie name is: " << std::endl;
    std::cin >> name;

    Zombie *zombieTwo = newZombie(name);
    zombieTwo->announcement();
    delete zombieTwo;

    std::cout << "The randomChump()." << std::endl;
    randomChump("Alicja");
}