/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 17:11:10 by alicja            #+#    #+#             */
/*   Updated: 2025/03/30 20:27:42 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal: Default constructor called" << std::endl;
    this->type = "unknown";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal: Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &animal)
{
    std::cout << "WrongAnimal: Copy constructor called" << std::endl;
    *this = animal;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &animal)
{
    std::cout << "WrongAnimal: Copy assigment operator called" << std::endl;
    //chroni przed przypisaniem obiektu do samego siebie
    if (this != &animal)
    {
        this->type = animal.type;
    }
    return (*this);
}

void WrongAnimal::makeSound() const
{
    std::cout << "The WrongAnimal makes a sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}