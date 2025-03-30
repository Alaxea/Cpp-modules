/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 17:11:16 by alicja            #+#    #+#             */
/*   Updated: 2025/03/30 20:53:40 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/WrongAnimal.hpp"
#include <iostream>

int main()
{
    std::cout << "The right way is: " << std::endl;
    {
        const Animal *meta = new Animal();
        const Animal *j = new Dog();
        const Animal *i = new Cat();
 
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound(); //will output the cat sound!
        j->makeSound();
        meta->makeSound();

        delete meta;
        delete j;
        delete i;
    }
    std::cout << std::endl;
    std::cout << "The wrong way is: " << std::endl;
    {
        const WrongAnimal *meta = new WrongAnimal();
        const WrongAnimal *j = new WrongCat();
 
        std::cout << j->getType() << " " << std::endl;
        j->makeSound(); //will output the cat sound!
        meta->makeSound();

        delete meta;
        delete j;
    }
    return 0;
}