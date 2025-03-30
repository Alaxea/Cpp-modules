/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 17:11:04 by alicja            #+#    #+#             */
/*   Updated: 2025/03/30 22:12:49 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat: Default constructor called" << std::endl;
    this->brain = new Brain;
}

Cat::Cat(const Cat &cat)
{
    std::cout << "Cat: Copy constructor called" << std::endl;
    *this = cat;
}

Cat &Cat::operator=(const Cat &cat)
{
    std::cout << "Animal: Copy assigment operator called" << std::endl;
    /*this->brain = cat.brain - shallow copy!!!*/
    if (this != &cat)
    {
        this->type = cat.type;
        this->brain = new Brain(*cat.brain); //co to jest??????
    }
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat: Destructor called" << std::endl;
    delete this->brain;
}

void Cat::makeSound() const
{
    std::cout << "The cat says: meow" << std::endl;
}