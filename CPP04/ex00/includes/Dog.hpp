/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 17:10:50 by alicja            #+#    #+#             */
/*   Updated: 2025/03/30 20:13:44 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog: public Animal
{
    public:
        Dog();
        Dog(const Dog &cat);
        Dog &operator=(const Dog &cat);
        ~Dog();
        void makeSound() const;
};

#endif