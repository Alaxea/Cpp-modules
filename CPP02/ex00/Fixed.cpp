/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alicja <alicja@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 10:41:18 by alicja            #+#    #+#             */
/*   Updated: 2025/03/22 12:04:24 by alicja           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor created" << std::endl;
    this->setRawBits(0);
}

Fixed::~Fixed()
{
    std::cout << "Destructor created" << std::endl;
}

Fixed::Fixed(const Fixed &fix)
{
    std::cout << "Copy constructor created" << std::endl;
    this->setRawBits(fix.getRawBits());
}

Fixed &Fixed::operator=(const Fixed &fix)
{
    std::cout << "Copy assignment operator created" << std::endl;
    this->setRawBits(fix.getRawBits());
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->num_value);
}

void Fixed::setRawBits(int const raw)
{
    this->num_value = raw;
}