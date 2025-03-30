/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 17:11:01 by alicja            #+#    #+#             */
/*   Updated: 2025/03/30 22:19:47 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"

AAnimal::AAnimal(): type("unknown")
{
    std::cout << "AAnimal: Default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type): type(type)
{
    std::cout << "AAnimal: Parametrized constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal: Destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &animal)
{
    std::cout << "AAnimal: Copy constructor called" << std::endl;
    *this = animal;
}

AAnimal &AAnimal::operator=(const AAnimal &animal)
{
    std::cout << "AAnimal: Copy assigment operator called" << std::endl;
    //chroni przed przypisaniem obiektu do samego siebie
    if (this != &animal)
    {
        this->type = animal.type;
    }
    return (*this);
}

std::string AAnimal::getType() const
{
    return this->type;
}