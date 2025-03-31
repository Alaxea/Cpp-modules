/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 21:07:31 by alicja            #+#    #+#             */
/*   Updated: 2025/03/31 12:46:01 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/Brain.hpp"
#include <iostream>

int main()
{
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    delete j; //should not create a leak
    delete i;
    /*const AAnimal *k = new AAnimal(); - tak nie mogę zrobić bo jest pure virtual!!!*/
    
    const AAnimal* animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};
    for (int i = 0; i < 4; i++)
        delete animals[i];
    return 0;
}