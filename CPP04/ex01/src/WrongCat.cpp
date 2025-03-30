/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 17:11:13 by alicja            #+#    #+#             */
/*   Updated: 2025/03/30 20:29:01 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat: Default constructor called" << std::endl;
    this->type = "cat";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat: Destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cat)
{
    std::cout << "WrongCat: Copy constructor called" << std::endl;
    *this = cat;
}

WrongCat &WrongCat::operator=(const WrongCat &cat)
{
    std::cout << "WrongCat: Copy assigment operator called" << std::endl;
    //chroni przed przypisaniem obiektu do samego siebie
    if (this != &cat)
    {
        this->type = cat.type;
    }
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "The WrongCat says: meow" << std::endl;
}
