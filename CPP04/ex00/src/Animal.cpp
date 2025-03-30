/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 17:11:01 by alicja            #+#    #+#             */
/*   Updated: 2025/03/30 17:57:59 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal(): type("unknown")
{
    std::cout << "Animal: Default constructor called" << std::endl;
}

Animal::Animal(std::string type): type(type)
{
    std::cout << "Animal: Parametrized constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal: Destructor called" << std::endl;
}

Animal::Animal(const Animal &animal)
{
    std::cout << "Animal: Copy constructor called" << std::endl;
    *this = animal;
}

Animal &Animal::operator=(const Animal &animal)
{
    std::cout << "Animal: Copy assigment operator called" << std::endl;
    //chroni przed przypisaniem obiektu do samego siebie
    if (this != &animal)
    {
        this->type = animal.type;
    }
    return (*this);
}

void Animal::makeSound() const
{
    std::cout << "The animal makes a sound" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}