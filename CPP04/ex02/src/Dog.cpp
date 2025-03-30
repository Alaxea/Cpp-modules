/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 17:11:07 by alicja            #+#    #+#             */
/*   Updated: 2025/03/30 21:59:25 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog: Default constructor called" << std::endl;
    this->brain = new Brain;
}

Dog::Dog(const Dog &dog)
{
    std::cout << "Dog: Copy constructor called" << std::endl;
    *this = dog;
}

Dog &Dog::operator=(const Dog &dog)
{
    std::cout << "Animal: Copy assigment operator called" << std::endl;
    if (this != &dog)
    {
        this->type = dog.type;
        this->brain = new Brain(*dog.brain);//???????
    }
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog: Destructor called" << std::endl;
    delete this->brain;
}

void Dog::makeSound() const
{
    std::cout << "The dog says: woof" << std::endl;
}