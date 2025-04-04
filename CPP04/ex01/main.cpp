/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 21:07:31 by alicja            #+#    #+#             */
/*   Updated: 2025/03/30 22:14:22 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/Brain.hpp"
#include <iostream>

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j; //should not create a leak
    delete i;
    
    const Animal* animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};
    for (int i = 0; i < 4; i++)
        delete animals[i];
    return 0;
}