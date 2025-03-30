/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 17:11:04 by alicja            #+#    #+#             */
/*   Updated: 2025/03/30 20:52:37 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat: Default constructor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat &cat)
{
    std::cout << "Cat: Copy constructor called" << std::endl;
    *this = cat;
}

Cat &Cat::operator=(const Cat &cat)
{
    std::cout << "Animal: Copy assigment operator called" << std::endl;
    if (this != &cat)
    {
        this->type = cat.type;
    }
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat: Destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "The cat says: meow" << std::endl;
}