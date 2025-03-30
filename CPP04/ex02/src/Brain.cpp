/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 21:09:00 by alicja            #+#    #+#             */
/*   Updated: 2025/03/30 22:09:17 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain: Default constructor called" << std::endl;
}
Brain::Brain(const Brain &brain)
{
    std::cout << "Brain: Copy constructor called" << std::endl;
    *this = brain;
}

Brain &Brain::operator=(const Brain &brain)
{
    std::cout << "Brain: Copy assigment operator called" << std::endl;
    /*loop for the deep copy, Każdy element tablicy ideas z brain
    jest kopiowany do aktualnego obiektu (this), kopiowanie jeden po drugim*/
    for (int i = 0; i < 100; i++)
        this->ideas[i] = brain.ideas[i];
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain: Destructor called" << std::endl;
}